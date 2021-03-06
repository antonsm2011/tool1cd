/*
    Tool1CD library provides access to 1CD database files.
    Copyright © 2009-2017 awa
    Copyright © 2017-2018 E8 Tools contributors

    This file is part of Tool1CD Library.

    Tool1CD Library is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Tool1CD Library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Tool1CD Library.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Index.h"
#include <limits>
#include "TableRecord.h"
#include "DetailedException.h"

using namespace std;

extern Registrator msreg_g;

static const uint32_t LAST_PAGE = std::numeric_limits<uint32_t>::max();

//---------------------------------------------------------------------------
Index::Index(Table* _base)
{
	tbase       = _base;
	primary  = false;
	start       = 0;
	rootblock   = 0;
	length      = 0;
	recordsindex_complete = false;
	pagesize = tbase->get_base()->get_pagesize();
	version  = tbase->get_base()->get_version();
}

//---------------------------------------------------------------------------
Index::~Index()
{
}

//---------------------------------------------------------------------------
string Index::get_name() const
{
	return name;
}

//---------------------------------------------------------------------------
size_t Index::get_num_records() const
{
	return records.size();
}

//---------------------------------------------------------------------------
std::vector<IndexRecord>& Index::get_records()
{
	return records;
}

//---------------------------------------------------------------------------
uint32_t Index::get_numrecords() const
{
	if(!start) return 0;
	if(!recordsindex_complete) create_recordsindex();
	return recordsindex.size();
}

//---------------------------------------------------------------------------
uint32_t Index::get_numrec(uint32_t num_record) const
{
	if(!start) return 0;
	if(!recordsindex_complete) create_recordsindex();
	return recordsindex[num_record];
}

//---------------------------------------------------------------------------
void Index::create_recordsindex() const
{
	char* buf;
	int32_t curlen;
	uint64_t curblock;
	uint32_t mask;
	V8Object* file_index;

	if(!start) return;

	msreg_g.Status("Чтение индекса ");

	buf = new char[pagesize];

	file_index = tbase->get_file_index();
	file_index->get_data(buf, start, 8);

	rootblock = *(uint32_t*)buf;
	if(version >= db_ver::ver8_3_8_0) rootblock *= pagesize;
	length = *(int16_t*)(buf + 4);

	curblock = rootblock;

	file_index->get_data(buf, curblock, pagesize);
	curlen = *(int16_t*)(buf + 2);
	if(curlen)
	{
		recordsindex.resize(tbase->get_file_data()->get_len() / tbase->get_recordlen());
		bool is_leaf = buf[0] & 0x2;
		while(!is_leaf)
		{
			curblock = *(uint32_t*)(buf + 16 + length);
			curblock = 	reverse_byte_order(curblock);
			if(version >= db_ver::ver8_3_8_0) curblock *= pagesize;
			file_index->get_data(buf, curblock, pagesize);

			is_leaf = buf[0] & 0x2;
		}

		unsigned curindex = 0;
		while(true)
		{
			curlen = *(int16_t*)(buf + 2);
			curblock = *(uint32_t*)(buf + 8);
			mask = *(uint32_t*)(buf + 14);
			int32_t rlen = *(int16_t*)(buf + 28);
			char *rbuf = buf + 30;
			for (int32_t i = 0; i < curlen; i++)
			{
				recordsindex[curindex++] = *(uint32_t*)rbuf & mask;
				rbuf += rlen;
				if(curindex % 10000 == 0) {
					msreg_g.Status(string("Чтение индекса ") + to_string(curindex));
				}
			}
			if(curblock == LAST_PAGE) break; // FIXME: разобраться LAST_PAGE == UINT_MAX, а тут uint64_t curblock
			if(version >= db_ver::ver8_3_8_0) curblock *= pagesize;
			file_index->get_data(buf, curblock, pagesize);
		}
		recordsindex.resize(curindex);
	}

	recordsindex_complete = true;
	delete[] buf;
	tbase->set_log_numrecords(recordsindex.size());
	msreg_g.Status("");
}

//---------------------------------------------------------------------------
void Index::dump_recursive(V8Object* file_index, TFileStream* f, int32_t level, uint64_t curblock)
{
	char* buf;
	char* rbuf;
	uint32_t curlen;

	char* curindex;

	LeafPageHeader* lph;
	BranchPageHeader* bph;

	buf = new char[pagesize];
	lph = (LeafPageHeader*)buf;
	bph = (BranchPageHeader*)buf;
	file_index->get_data(buf, curblock, pagesize);
	curlen = bph->number_indexes;
	if(curlen)
	{
		bool is_leaf = bph->flags & indexpage_is_leaf;
		if(is_leaf)
		{
			curindex = new char[length]; //
			memset(curindex, 0, length);

			unsigned numrecmask = lph->numrecmask;
			unsigned leftmask = lph->leftmask;
			unsigned rightmask = lph->rightmask;
			unsigned numrecbits = lph->numrecbits;
			unsigned leftbits = lph->leftbits;
			//rightbits = lph->rightbits;
			unsigned recbytes = lph->recbytes;
			rbuf = buf + 30;
			char *ibuf = buf + pagesize;
			unsigned previous_right = length;

			{
				string s = "=";
				s += level;
				s += " leaf, curblock ";
				s += curblock == LAST_PAGE ? -1 : (curblock / pagesize);
				s += ", count ";
				s += curlen;
				s += ", free ";
				s += lph->freebytes;
				s += ", rec ";
				s += numrecbits;
				s += ", left ";
				s += leftbits;
				s += ", right ";
				s += lph->rightbits;
				s += ", bytes ";
				s += recbytes;
				s += "\r\n";
				f->WriteString(s);
			}

			for (unsigned i = 0; i < curlen; i++)
			{
				int64_t indrec = *(int64_t*)rbuf;
				unsigned numrec = indrec & numrecmask;
				indrec >>= numrecbits;
				unsigned left =  indrec & leftmask;
				indrec >>= leftbits;
				unsigned right =  indrec & rightmask;
				rbuf += recbytes;
				unsigned j = length - left - right;
				ibuf -= j;
				memcpy(curindex + left, ibuf, j);
				if(right > previous_right) memset(curindex + length - right, 0, right - previous_right);
				previous_right = right;

				string s = "  -";
				s += level;
				s += ": ";
				f->Write(s.c_str(), s.size());
				for(j = 0; j < length; j++)
				{
					unsigned char bf[3] = {' ', ' ', ' '};
					unsigned char b = curindex[j];
					b >>= 4;
					b += '0';
					if(b > '9') b += 'a' - '9' - 1;
					bf[0] = b;
					b = curindex[j];
					b &= 0xf;
					b += '0';
					if(b > '9') b += 'a' - '9' - 1;
					bf[1] = b;
					f->Write(bf, 3);
				}
				s = ": ";
				s += numrec;
				s += "\r\n";
				f->Write(s.c_str(), s.size());
			}
			delete[] curindex;

		}
		else
		{
			string s = "*";
			s += level;
			s += " branch, curblock ";
			s += curblock == LAST_PAGE ? -1 : (curblock / pagesize);
			s += ", count ";
			s += curlen;
			s += "\r\n";
			f->Write(s.c_str(), s.size());

			rbuf = buf + 12;
			for (unsigned i = 0; i < curlen; i++)
			{
				curindex = rbuf;
				rbuf += length;
				unsigned numrecx = reverse_byte_order(*(uint32_t*)rbuf);
				rbuf += 4;
				uint64_t blockx = reverse_byte_order(*(uint32_t*)rbuf);
				if(version >= db_ver::ver8_3_8_0) blockx *= pagesize;
				rbuf += 4;

				dump_recursive(file_index, f, level + 1, blockx);

				s = "  +";
				s += level;
				s += ": ";
				f->Write(s.c_str(), s.size());
				for (unsigned j = 0; j < length; j++)
				{
					unsigned char bf[3] = {' ', ' ', ' '};
					unsigned char b = curindex[j];
					b >>= 4;
					b += '0';
					if(b > '9') b += 'a' - '9' - 1;
					bf[0] = b;
					b = curindex[j];
					b &= 0xf;
					b += '0';
					if(b > '9') b += 'a' - '9' - 1;
					bf[1] = b;
					f->Write(bf, 3);
				}
				s = ": ";
				s += numrecx;
				s += "\r\n";
				f->Write(s.c_str(), s.size());

			}

		}
	}

	delete[] buf;
}

//---------------------------------------------------------------------------
uint32_t Index::get_rootblock() const
{
	if(!start) return 0;

	if(rootblock == 0)
	{
		char buf[8];
		tbase->get_file_index()->get_data(buf, start, 8);
		rootblock = *(uint32_t*)buf;
		if(version >= db_ver::ver8_3_8_0) rootblock *= pagesize;
		length = *(int16_t*)(buf + 4);
	}
	return rootblock;
}

//---------------------------------------------------------------------------
uint32_t Index::get_length() const
{
	if(!start) return 0;

	if(rootblock == 0)
	{
		char buf[8];
		tbase->get_file_index()->get_data(buf, start, 8);
		rootblock = *(uint32_t*)buf;
		if(version >= db_ver::ver8_3_8_0) rootblock *= pagesize;
		length = *(int16_t*)(buf + 4);
	}
	return length;
}

uint64_t Index::get_start_offset() const
{
	return start;
}

void Index::set_start_offset(const uint64_t value)
{
	start = value;
}

//---------------------------------------------------------------------------
void Index::dump(const string &_filename)
{
	TFileStream* f;
	V8Object* file_index;

	f = new TFileStream(_filename, fmCreate);

	if(!start)
	{
		delete f;
		return;
	}

	file_index = tbase->get_file_index();
	if(rootblock == 0)
	{
		char buf[8];
		file_index->get_data(buf, start, 8);
		rootblock = *(uint32_t*)buf;
		if(version >= db_ver::ver8_3_8_0) rootblock *= pagesize;
		length = *(int16_t*)(buf + 4);
	}

	string index_info = string("Index length ").append(to_string(length)).append("\r\n");
	f->WriteString(index_info);

	dump_recursive(file_index, f, 0, rootblock);

	delete f;
}

//---------------------------------------------------------------------------
char* Index::unpack_leafpage(uint64_t page_offset, uint32_t& number_indexes)
{
	char* buf;
	char* ret;

	if(!tbase->get_file_index()) return nullptr;

	buf = new char[pagesize];
	tbase->get_file_index()->get_data(buf, page_offset, pagesize);
	ret = unpack_leafpage(buf, number_indexes);
	delete[] buf;
	return ret;
}

//---------------------------------------------------------------------------
char* Index::unpack_leafpage(char* page, uint32_t& number_indexes)
{
	char* outbuf;
	char* rbuf;
	char* ibuf;
	char* obuf;
	LeafPageHeader* header;

	uint32_t i, j, step;

	if(length == 0)
	{
		number_indexes = 0;
		return nullptr;
	}

	header = (LeafPageHeader*)page;

	if(!(header->flags & indexpage_is_leaf))
	{
		number_indexes = 0;
		throw DetailedException("Попытка распаковки страницы индекса не являющейся листом.")
			.add_detail("Таблица", tbase->get_name())
			.add_detail("Индекс", name);
	}

	number_indexes = header->number_indexes;
	if(!number_indexes)
	{
		return nullptr;
	}

	unsigned numrecmask = header->numrecmask;
	unsigned leftmask = header->leftmask;
	unsigned rightmask = header->rightmask;
	unsigned numrecbits = header->numrecbits;
	unsigned leftbits = header->leftbits;
	unsigned recbytes = header->recbytes;

	step = length + 4;
	outbuf = new char[number_indexes * step];

	rbuf = page + 30;
	ibuf = page + pagesize;
	obuf = outbuf;

	for(i = 0; i < number_indexes; i++)
	{
		int64_t indrec = *(int64_t*)rbuf;
		unsigned numrec = indrec & numrecmask;
		indrec >>= numrecbits;
		unsigned left = indrec & leftmask;
		indrec >>= leftbits;
		unsigned right = indrec & rightmask;
		rbuf += recbytes;
		j = length - left - right;
		ibuf -= j;

		*(uint32_t*)obuf = numrec;
		obuf += 4;

		if(left) memcpy(obuf, obuf - step, left);
		if(j) memcpy(obuf + left, ibuf, j);
		obuf += length;
		if(right) memset(obuf - right, 0, right);

	}

	return outbuf;
}

//---------------------------------------------------------------------------
bool Index::pack_leafpage(char* unpack_index, uint32_t number_indexes, char* page_buf)
{
	uint32_t min_numrec_bits;
	uint32_t min_bits;
	uint32_t max_numrec;

	LeafPageHeader* header;
	uint32_t freebytes;
	uint32_t numrecmask;
	uint32_t leftmask;
	uint32_t rightmask;
	uint32_t numrecbits;
	uint32_t leftbits;
	uint32_t rightbits;
	uint32_t recbytes;

	uint32_t i, j;
	uint32_t step;
	uint32_t pack_index_len;
	uint32_t left, right;
	uint32_t numrec;
	char* cur;
	char* curp;
	int64_t indrec;
	uint32_t datasize;

	datasize = pagesize - 30;
	for(i = length, rightbits = 0; i; i >>= 1, rightbits++);
	leftbits = rightbits;

	step = length + 4;

	max_numrec = 0;
	cur = unpack_index;
	curp = page_buf + pagesize;
	pack_index_len = 0;

	_pack_index_record* _pack_index_record_array = new _pack_index_record[number_indexes];
	memset(page_buf + 30, 0, datasize);

	for(i = 0; i < number_indexes; i++)
	{
		numrec = *(uint32_t*)cur;
		cur += 4;

		if(i)
		{
			for(j = 0; cur[j] == cur[j - step] && j < length; j++);
			left = j;
		}
		else left = 0;

		for(j = 1; cur[length - j] == 0 && j <= length; j++);
		right = j - 1;


		if(left + right > length)
		{
			if(left < length || primary)
			{
				throw DetailedException("Ошибка упаковки индексов на странице-листе. Индекс не уникальный либо неверно отсортирован.")
					.add_detail("Таблица", tbase->get_name())
					.add_detail("Индекс", name);

			}
			right = length - left;
		}
		j = length - left - right;
		curp -= j;
		pack_index_len += j;

		if(pack_index_len >= datasize)
		{
			delete[] _pack_index_record_array;
			return false;
		}

		memcpy(curp, cur + left, j);

		cur += length;

		if(max_numrec < numrec) max_numrec = numrec;

		_pack_index_record_array[i].numrec = numrec;
		_pack_index_record_array[i].left = left;
		_pack_index_record_array[i].right = right;
	}
	for(min_numrec_bits = 0, i = max_numrec; i; i >>= 1, min_numrec_bits++);

	//if(min_numrec_bits < 11) min_numrec_bits = 11; // 11 - эмпирически вычислено как 4066 / 2 = 2033 - максимальное кол-во записей на странице. 2033 укладывается в 11 бит
	min_bits = min_numrec_bits + leftbits + rightbits;
	recbytes = (min_bits + 7) >> 3;

	if(recbytes * number_indexes + pack_index_len > datasize)
	{
		delete[] _pack_index_record_array;
		return false;
	}
	freebytes = datasize - recbytes * number_indexes - pack_index_len;

	numrecbits = recbytes * 8 - leftbits - rightbits;

	for(i = 0, numrecmask = 0; i < numrecbits; i++, numrecmask = (numrecmask << 1) | 1);
	for(i = 0, leftmask = 0; i < leftbits; i++, leftmask = (leftmask << 1) | 1);
	for(i = 0, rightmask = 0; i < rightbits; i++, rightmask = (rightmask << 1) | 1);

	header = (LeafPageHeader*)page_buf;
	header->flags = indexpage_is_leaf;
	header->number_indexes = number_indexes;
	header->freebytes = freebytes;
	header->numrecmask = numrecmask;
	header->leftmask = leftmask;
	header->rightmask = rightmask;
	header->numrecbits = numrecbits;
	header->leftbits = leftbits;
	header->rightbits = rightbits;
	header->recbytes = recbytes;

	for(i = 0, curp = page_buf + 30; i < number_indexes; i++, curp += recbytes)
	{
		indrec = _pack_index_record_array[i].right;
		indrec <<= leftbits;
		indrec |= _pack_index_record_array[i].left;
		indrec <<= numrecbits;
		indrec |= _pack_index_record_array[i].numrec;

		memcpy(curp, &indrec, recbytes);
	}

	delete[] _pack_index_record_array;
	return true;
}

bool Index::is_primary() const
{
	return primary;
}

//---------------------------------------------------------------------------
void Index::calcRecordIndex(const TableRecord *rec, char *indexBuf)
{
	int32_t index_buf_size = length;
	for( const auto& record : records) {
		uint32_t k = record.field->get_sort_key(rec->get_raw(record.field), (unsigned char *)indexBuf, index_buf_size);
		indexBuf += k;
		index_buf_size -= k;
	}

	if(index_buf_size > 0) {
		memset(indexBuf, 0, index_buf_size);
	}
}

//---------------------------------------------------------------------------
void Index::delete_index(const TableRecord *rec, const uint32_t phys_numrec)
{
	char* index_buf;
	index_buf = new char[length];
	calcRecordIndex(rec, index_buf);
	delete_index_record(index_buf, phys_numrec);
	delete[] index_buf;
}

//---------------------------------------------------------------------------
void Index::delete_index_record(const char* index_buf, const uint32_t phys_numrec)
{
	bool is_last_record, page_is_empty; // заглушки для вызова рекурсивной функции
	uint32_t new_last_phys_num; // заглушки для вызова рекурсивной функции
	char* new_last_index_buf = new char[length]; // заглушки для вызова рекурсивной функции
	delete_index_record(index_buf, phys_numrec, rootblock, is_last_record, page_is_empty, new_last_index_buf, new_last_phys_num);
	delete[] new_last_index_buf;
}

//---------------------------------------------------------------------------
void Index::delete_index_record(const char* index_buf, const uint32_t phys_numrec, uint64_t block, bool& is_last_record, bool& page_is_empty, char* new_last_index_buf, uint32_t& new_last_phys_num)
{
	char* page;
	BranchPageHeader* bph;
	LeafPageHeader* lph;

	bool _is_last_record, _page_is_empty;
	uint32_t _new_last_phys_num;
	uint32_t number_indexes;
	char* unpack_indexes_buf;
	int16_t flags;
	uint64_t _block_;

	char* cur_index;
	int32_t i, j, k, delta;

	page = new char[pagesize];
	tbase->get_file_index()->get_data(page, block, pagesize);

	is_last_record = false;
	page_is_empty = false;

	if(*page & indexpage_is_leaf)
	{
		// страница-лист
		lph = (LeafPageHeader*)page;
		flags = lph->flags;
		unpack_indexes_buf = unpack_leafpage(page, number_indexes);
		cur_index = unpack_indexes_buf;
		delta = length + 4;
		for(i = 0; i < lph->number_indexes; i++, cur_index += delta)
		{
			j = memcmp(index_buf, cur_index + 4, length);
			if(j == 0 && *(uint32_t*)cur_index == phys_numrec)
			{
				if(i == lph->number_indexes - 1) is_last_record = true;

				lph->number_indexes--;
				for(k = i; k < lph->number_indexes; k++) memcpy(unpack_indexes_buf + k * delta, unpack_indexes_buf + (k + 1) * delta, delta);

				if(lph->number_indexes == 0)
				{
					page_is_empty = true;
					if(lph->prev_page != LAST_PAGE)
					{
						tbase->get_file_index()->set_data(&(lph->next_page), (version < db_ver::ver8_3_8_0 ? lph->prev_page : lph->prev_page * pagesize) + 8, 4);
					}
					if(lph->next_page != LAST_PAGE)
					{
						tbase->get_file_index()->set_data(&(lph->prev_page), (version < db_ver::ver8_3_8_0 ? lph->next_page : lph->next_page * pagesize) + 4, 4);
					}
					// TODO проверить, надо ли номера свободных страниц преобразовывать в смещения для версий от 8.0 до 8.2.14
					tbase->get_file_index()->get_data(&k, 0, 4);
					memset(page, 0, pagesize);
					*(uint32_t*)page = k;
					k = block / pagesize;
					tbase->get_file_index()->set_data(&k, 0, 4);
				}
				else
				{
					if(is_last_record)
					{
						cur_index = unpack_indexes_buf + (lph->number_indexes - 1) * delta;
						memcpy(new_last_index_buf, cur_index + 4, length);
						new_last_phys_num = *(uint32_t*)cur_index;
					}
					pack_leafpage(unpack_indexes_buf, lph->number_indexes, page);
					lph->flags = flags;
				}
				tbase->get_file_index()->set_data(page, block, pagesize);

				break;
			}
		}
		delete[] unpack_indexes_buf;
	}
	else
	{
		// страница-ветка
		bph = (BranchPageHeader*)page;

		cur_index = page + BranchPageHeader::Size();
		delta = length + 8;
		for(i = 0; i < bph->number_indexes; i++, cur_index += delta)
		{
			j = memcmp(index_buf, cur_index, length);
			if(j <= 0)
			{
				if(i == bph->number_indexes - 1 && j==0) is_last_record = true;

				_block_ = reverse_byte_order(*(uint32_t*)(cur_index + length + 4));
				if(version >= db_ver::ver8_3_8_0) _block_ *= pagesize;
				delete_index_record(index_buf, phys_numrec, _block_, _is_last_record, _page_is_empty, new_last_index_buf, _new_last_phys_num);

				if(_page_is_empty)
				{
					bph->number_indexes--;
					if(bph->number_indexes > i) memcpy(cur_index, cur_index + delta, (bph->number_indexes - i) * delta);
					memset(page + 12 + bph->number_indexes * delta, 0, delta);
				}
				else if(_is_last_record)
				{
					memcpy(cur_index, new_last_index_buf, length);
					*(uint32_t*)(cur_index + length) = reverse_byte_order(_new_last_phys_num);
				}

				if(bph->number_indexes == 0)
				{
					page_is_empty = true;
					if(bph->prev_page != LAST_PAGE)
					{
						tbase->get_file_index()->set_data(&(bph->next_page), (version < db_ver::ver8_3_8_0 ? bph->prev_page : bph->prev_page * pagesize) + 8, 4);
					}
					if(bph->next_page != LAST_PAGE)
					{
						tbase->get_file_index()->set_data(&(bph->prev_page), (version < db_ver::ver8_3_8_0 ? bph->next_page : bph->next_page * pagesize) + 4, 4);
					}
					tbase->get_file_index()->get_data(&k, 0, 4);
					memset(page, 0, pagesize);
					*(uint32_t*)page = k;
					k = block / pagesize;
					tbase->get_file_index()->set_data(&k, 0, 4);
				}
				else
				{
					if(is_last_record)
					{
						cur_index = page + 12 + (bph->number_indexes - 1) * delta;
						memcpy(new_last_index_buf, cur_index, length);
						new_last_phys_num = reverse_byte_order(*(uint32_t*)(cur_index + length));
					}
				}
				if(_page_is_empty || _is_last_record || page_is_empty || is_last_record) tbase->get_file_index()->set_data(page, block, pagesize);

				break;
			}
		}
	}

	delete[] page;
}

//---------------------------------------------------------------------------
void Index::write_index(const uint32_t phys_numrecord, const TableRecord *rec)
{
	char* index_buf;
	index_buf = new char[length];
	calcRecordIndex(rec, index_buf);
	write_index_record(phys_numrecord, index_buf);
	delete[] index_buf;

}

//---------------------------------------------------------------------------
void Index::write_index_record(const uint32_t phys_numrecord, const char* index_buf)
{
	int32_t result;
	char* new_last_index_buf = new char[length];
	uint32_t new_last_phys_num;
	char* new_last_index_buf2 = new char[length];
	uint32_t new_last_phys_num2;
	uint64_t new_last_block2;

	char* page;
	BranchPageHeader* bph;
	uint64_t block;
	uint32_t k;
	char* cur_index;

	write_index_record(phys_numrecord, index_buf, rootblock, result, new_last_index_buf, new_last_phys_num, new_last_index_buf2, new_last_phys_num2, new_last_block2);

	if(result == 2)
	{
		page = new char[pagesize];
		memset(page, 0, pagesize);
		bph = (BranchPageHeader*)page;

		tbase->get_file_index()->get_data(&k, 0, 4);
		if(k)
		{
			block = k * pagesize;
			tbase->get_file_index()->get_data(&k, block, 4);
			tbase->get_file_index()->set_data(&k, 0, 4);
		}
		else block = tbase->get_file_index()->get_len();

		bph->flags = indexpage_is_root | indexpage_is_leaf;
		bph->number_indexes = 2;
		bph->prev_page = LAST_PAGE;
		bph->next_page = LAST_PAGE;

		cur_index = page + 12;
		memcpy(cur_index, new_last_index_buf, length);
		cur_index += length;
		*(uint32_t*)cur_index = reverse_byte_order(new_last_phys_num);
		cur_index += 4;
		*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? rootblock : rootblock / pagesize);
		cur_index += 4;

		memcpy(cur_index, new_last_index_buf2, length);
		cur_index += length;
		*(uint32_t*)cur_index = reverse_byte_order(new_last_phys_num2);
		cur_index += 4;
		*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? new_last_block2 : new_last_block2 / pagesize);

		tbase->get_file_index()->set_data(page, block, pagesize);

		rootblock = block;
		tbase->get_file_index()->set_data(&rootblock, start, 4);

		delete[] page;
	}

	delete[] new_last_index_buf;
	delete[] new_last_index_buf2;
}

//---------------------------------------------------------------------------
void Index::write_index_record(const uint32_t phys_numrecord, const char* index_buf, uint64_t block, int32_t& result, char* new_last_index_buf, uint32_t& new_last_phys_num, char* new_last_index_buf2, uint32_t& new_last_phys_num2, uint64_t& new_last_block2)
{
	// result - результат добавления.
	// 0 - ничего делать не надо.
	// 1 - надо заменить запись на new_last_index_buf.
	// 2 - произошло разбиение на 2 страницы, надо заменить на 2 записи

	char* page;
	BranchPageHeader* bph;
	LeafPageHeader* lph;

	int32_t _result;
	uint32_t _new_last_phys_num;
	uint32_t _new_last_phys_num2;
	uint64_t _new_last_block2;

	char* unpack_indexes_buf;
	char* unpack_indexes_buf_new;

	int16_t flags;
	uint32_t number_indexes;
	uint64_t prev_page;
	uint64_t next_page;


	BranchPageHeader* bph2;
	LeafPageHeader* lph2;
	uint32_t number_indexes1;
	uint32_t number_indexes2;
	uint64_t block1;
	uint32_t max_num_indexes;

	char* cur_index;
	char* cur_index2;
	uint32_t i, k;
	int32_t j, delta;
	bool ok;

	page = new char[pagesize];
	tbase->get_file_index()->get_data(page, block, pagesize);
	result = 0;

	bph = (BranchPageHeader*)page;
	flags = bph->flags;
	number_indexes = bph->number_indexes;
	prev_page = bph->prev_page;
	next_page = bph->next_page;

	if(flags & indexpage_is_leaf)
	{
		// страница-лист
		lph = (LeafPageHeader*)page;
		unpack_indexes_buf = unpack_leafpage(page, number_indexes);
		cur_index = unpack_indexes_buf;
		delta = length + 4;
		ok = true;
		for(i = 0; i < number_indexes; i++, cur_index += delta)
		{
			j = memcmp(index_buf, cur_index + 4, length);


			if(j == 0)
			{
				if(primary || *(uint32_t*)cur_index == phys_numrecord)
				{
					throw DetailedException("Ошибка записи индекса. Индекс уже существует.")
						.add_detail("Таблица", tbase->get_name())
						.add_detail("Индекс", name)
						.add_detail("Физический номер существующий", *(uint32_t*)cur_index)
						.add_detail("Физический номер записываемый", phys_numrecord);
				}
				break;
			}
			if(j < 0) break;
		}
		if(ok)
		{
			if(i == number_indexes) result = 1;

			number_indexes++;
			unpack_indexes_buf_new = new char[delta * number_indexes];

			if(i) memcpy(unpack_indexes_buf_new, unpack_indexes_buf, delta * i);
			*(uint32_t*)(unpack_indexes_buf_new + i * delta) = phys_numrecord;
			memcpy(unpack_indexes_buf_new + i * delta + 4, index_buf, length);
			if(number_indexes - i - 1) memcpy(unpack_indexes_buf_new + (i + 1) * delta, unpack_indexes_buf + i * delta, delta * (number_indexes - i - 1));

			if(pack_leafpage(unpack_indexes_buf_new, number_indexes, page))
			{
				if(result == 1)
				{
					cur_index = unpack_indexes_buf_new + (number_indexes - 1) * delta;
					memcpy(new_last_index_buf, cur_index + 4, length);
					new_last_phys_num = *(uint32_t*)cur_index;
				}
				lph->flags = flags;
				lph->prev_page = prev_page;
				lph->next_page = next_page;
			}
			else
			{
				result = 2;
				char* page2 = new char[pagesize];
				number_indexes1 = number_indexes >> 1;
				number_indexes2 = number_indexes - number_indexes1;
				pack_leafpage(unpack_indexes_buf_new, number_indexes1, page);
				pack_leafpage(unpack_indexes_buf_new + number_indexes1 * delta, number_indexes2, page2);
				lph2 = (LeafPageHeader*)page2;

				tbase->get_file_index()->get_data(&k, 0, 4);
				if(k)
				{
					new_last_block2 = k * pagesize;
					tbase->get_file_index()->get_data(&k, new_last_block2, 4);
					tbase->get_file_index()->set_data(&k, 0, 4);
				}
				else new_last_block2 = tbase->get_file_index()->get_len();

				flags &= ~indexpage_is_root;
				lph->flags = flags;
				lph->prev_page = prev_page;
				lph->next_page = version < db_ver::ver8_3_8_0 ? new_last_block2 : new_last_block2 / pagesize;
				lph2->flags = flags;
				lph2->prev_page = version < db_ver::ver8_3_8_0 ? block : block / pagesize;
				lph2->next_page = next_page;

				tbase->get_file_index()->set_data(page2, new_last_block2, pagesize);

				cur_index = unpack_indexes_buf_new + (number_indexes1 - 1) * delta;
				memcpy(new_last_index_buf, cur_index + 4, length);
				new_last_phys_num = *(uint32_t*)cur_index;
				cur_index = unpack_indexes_buf_new + (number_indexes - 1) * delta;
				memcpy(new_last_index_buf2, cur_index + 4, length);
				new_last_phys_num2 = *(uint32_t*)cur_index;

				delete[] page2;
			}

			tbase->get_file_index()->set_data(page, block, pagesize);
			delete[] unpack_indexes_buf_new;
		}


		delete[] unpack_indexes_buf;
	}
	else
	{
		// страница-ветка

		cur_index = page + BranchPageHeader::Size();
		delta = length + 8;
		max_num_indexes = (pagesize - 12) / delta;

		ok = true;
		for(i = 0; i < number_indexes; i++, cur_index += delta)
		{
			j = memcmp(index_buf, cur_index, length);
			if(j == 0)
			{
				if(primary)
				{
					throw DetailedException("Ошибка записи индекса. Индекс уже существует.")
						.add_detail("Таблица", tbase->get_name())
						.add_detail("Индекс", name)
						.add_detail("Физический номер существующий", reverse_byte_order(*(uint32_t*)(cur_index + length)))
						.add_detail("Физический номер записываемый", phys_numrecord);
				}
				break;
			}
			if(j < 0) break;
		}

		if(i == number_indexes)
		{
			i--;
			cur_index -= delta;
		}

		if(ok)
		{
			block1 = reverse_byte_order(*(uint32_t*)(cur_index + length + 4));
			if(version >= db_ver::ver8_3_8_0) block1 *= pagesize;
			write_index_record(phys_numrecord, index_buf, block1, _result, new_last_index_buf, _new_last_phys_num, new_last_index_buf2, _new_last_phys_num2, _new_last_block2);

			if(_result == 1)
			{
				memcpy(cur_index, new_last_index_buf, length);
				*(uint32_t*)(cur_index + length) = reverse_byte_order(_new_last_phys_num);
				if(i == number_indexes - 1)
				{
					result = 1;
					new_last_phys_num = _new_last_phys_num;
					// new_last_index_buf остаётся!
				}
			}
			else if(_result == 2)
			{
			    char* page2 = new char[pagesize];
			    unpack_indexes_buf = new char[delta * number_indexes];

				number_indexes++;
				if(number_indexes > max_num_indexes)
				{
					result = 2;


					tbase->get_file_index()->get_data(&k, 0, 4);
					if(k)
					{
						new_last_block2 = k << 12;
						tbase->get_file_index()->get_data(&k, new_last_block2, 4);
						tbase->get_file_index()->set_data(&k, 0, 4);
					}
					else new_last_block2 = tbase->get_file_index()->get_len();

					flags &= ~indexpage_is_root;

					cur_index = unpack_indexes_buf;
					cur_index2 = page + 12;
					k = i * delta;
					if(k) memcpy(cur_index, cur_index2, k);
					cur_index += k;
					cur_index2 += k + delta;

					memcpy(cur_index, new_last_index_buf, length);
					cur_index += length;
					*(uint32_t*)cur_index = reverse_byte_order(_new_last_phys_num);
					cur_index += 4;
					*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? block1 : block1 / pagesize);
					cur_index += 4;

					memcpy(cur_index, new_last_index_buf2, length);
					cur_index += length;
					*(uint32_t*)cur_index = reverse_byte_order(_new_last_phys_num2);
					cur_index += 4;
					*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? _new_last_block2 : _new_last_block2 / pagesize);
					cur_index += 4;

					k = (number_indexes - i - 2) * delta;
					if(k) memcpy(cur_index, cur_index2, k);

					number_indexes1 = number_indexes >> 1;
					number_indexes2 = number_indexes - number_indexes1;

					bph2 = (BranchPageHeader*)page2;
					memset(page, 0, pagesize);
					memset(page2, 0, pagesize);

					bph->flags = flags;
					bph->number_indexes = number_indexes1;
					bph->prev_page = prev_page;
					bph->next_page = version < db_ver::ver8_3_8_0 ? new_last_block2 : new_last_block2 / pagesize;
					bph2->flags = flags;
					bph2->number_indexes = number_indexes2;
					bph2->prev_page = version < db_ver::ver8_3_8_0 ? block : block / pagesize;
					bph2->next_page = next_page;

					memcpy(page + 12, unpack_indexes_buf, number_indexes1 * delta);
					memcpy(page2 + 12, unpack_indexes_buf + number_indexes1 * delta, number_indexes2 * delta);

					tbase->get_file_index()->set_data(page2, new_last_block2, pagesize);

					cur_index = unpack_indexes_buf + (number_indexes1 - 1) * delta;
					memcpy(new_last_index_buf, cur_index, length);
					cur_index += length;
					new_last_phys_num = reverse_byte_order(*(uint32_t*)cur_index);
					cur_index = unpack_indexes_buf + (number_indexes - 1) * delta;
					memcpy(new_last_index_buf2, cur_index + 4, length);
					cur_index += length;
					new_last_phys_num2 = reverse_byte_order(*(uint32_t*)cur_index);

					delete[] unpack_indexes_buf;
					delete[] page2;
				}
				else
				{

					k = (number_indexes - i - 2) * delta;
					if(k)
					{
						cur_index = page + 12 + ((i + 1) * delta);
						cur_index2 = page + 12 + ((i + 2) * delta);
						memcpy(cur_index, cur_index2, k);
					}

					cur_index = page + 12 + (i * delta);
					memcpy(cur_index, new_last_index_buf, length);
					cur_index += length;
					*(uint32_t*)cur_index = reverse_byte_order(_new_last_phys_num);
					cur_index += 4;
					*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? block1 : block1 / pagesize);
					cur_index += 4;

					memcpy(cur_index, new_last_index_buf2, length);
					cur_index += length;
					*(uint32_t*)cur_index = reverse_byte_order(_new_last_phys_num2);
					cur_index += 4;
					*(uint32_t*)cur_index = reverse_byte_order(version < db_ver::ver8_3_8_0 ? _new_last_block2 : _new_last_block2 / pagesize);

					if(i == number_indexes - 2)
					{
						result = 1;
						new_last_phys_num = _new_last_phys_num2;
						memcpy(new_last_index_buf, new_last_index_buf2, length);
					}

					delete[] unpack_indexes_buf;
					delete[] page2;
				}
			}

			if(_result) tbase->get_file_index()->set_data(page, block, pagesize);
		}

	}

	delete[] page;

}

class IndexReadError : public DetailedException
{
public:
	IndexReadError(const string &message)
			: DetailedException(message)
	{}

	IndexReadError(const string &message, const string &index_name)
			: DetailedException(message)
	{
		add_detail("Индекс", index_name);
	}
};

Index *Index::index_from_tree(Tree *f, Table *parent)
{

	int numrec = f->get_num_subnode() - 2;
	if (numrec < 1) {
		throw IndexReadError("Ошибка получения очередного индекса таблицы. Нет узлов описаня полей индекса.");
	}
	Index *ind = new Index(parent);

	if (f->get_type() != node_type::nd_list) {
		throw IndexReadError("Ошибка получения очередного индекса таблицы. Узел не является деревом.");
	}

	Tree *index_tree = f->get_first();
	if (index_tree->get_type() != node_type::nd_string) {
		throw IndexReadError("Ошибка получения имени индекса таблицы. Узел не является строкой.");
	}
	ind->name = index_tree->get_value();

	index_tree = index_tree->get_next();
	if (index_tree->get_type() != node_type::nd_number) {
		throw IndexReadError("Ошибка получения типа индекса таблицы. Узел не является числом.");
	}
	string sIsPrimaryIndex = index_tree->get_value();
	if     (sIsPrimaryIndex == "0") ind->primary = false;
	else if(sIsPrimaryIndex == "1") ind->primary = true;
	else {
		throw IndexReadError("Неизвестный тип индекса таблицы.", ind->name)
				.add_detail("Тип индекса", sIsPrimaryIndex);
	}

	ind->records.clear();
	ind->records.resize(numrec);
	for (int j = 0; j < numrec; j++) {
		index_tree = index_tree->get_next();
		if (index_tree->get_num_subnode() != 2) {
			throw IndexReadError("Ошибка получения очередного поля индекса таблицы. "
										 "Количество узлов поля не равно 2.", ind->name)
					.add_detail("Номер поля индекса", j + 1)
					.add_detail("Узлов", index_tree->get_num_subnode());
		}

		Tree *in = index_tree->get_first();
		if (in->get_type() != node_type::nd_string) {
			throw IndexReadError("Ошибка получения имени поля индекса таблицы. Узел не является строкой.", ind->name)
					.add_detail("Номер поля индекса", j + 1);
		}

		string field_name = in->get_value();
		ind->records[j].field = parent->find_field(field_name);

		if (ind->records[j].field == nullptr) {
			throw IndexReadError("Ошибка получения индекса таблицы. Не найдено поле таблицы по имени поля индекса.", ind->name)
					.add_detail("Номер поля индекса", j + 1)
					.add_detail("Поле индекса", field_name);
		}

		in = in->get_next();
		if (in->get_type() != node_type::nd_number) {
			throw IndexReadError("Ошибка получения длины поля индекса таблицы. Узел не является числом.", ind->name)
					.add_detail("Номер поля индекса", j + 1)
					.add_detail("Поле индекса", field_name);
		}
		ind->records[j].len = stoi(in->get_value());
	}

	return ind;
}
