#include "SupplierConfigBuilder.h"
#include "ConfigStorage.h"
#include "System.Classes.hpp"
#include "TempStream.h"
#include "UZLib.h"

extern Registrator msreg_g;

const String NODE_GENERAL = "9cd510cd-abfc-11d4-9434-004095e12fc7";

SupplierConfigBuilder::SupplierConfigBuilder(TableFile *table_file)
	: _table_file(table_file)
{
	create_main_catalog();
}

std::shared_ptr<SupplierConfig> SupplierConfigBuilder::build() {
	String _name; // имя конфигурация поставщика
	String _supplier; // синоним конфигурация поставщика
	String _version; // версия конфигурация поставщика

	V8File* root_file = get_file("root");
	if(!root_file) {
		msreg_g.AddError("Не найден файл root в конфигурации поставщика",
			"Таблица", _table_file->t->getname(),
			"Имя файла", _table_file->name);
		return nullptr;
	}

	String file_name_meta;
	{
		std::unique_ptr<tree> root_tree ( root_file->get_tree() );
		file_name_meta = (*root_tree)[0][1].get_value();
	}

	V8File* meta_file = get_file(file_name_meta);
	if(!meta_file) {
		msreg_g.AddError("Не найден файл метаданных в конфигурации поставщика",
			"Таблица", _table_file->t->getname(),
			"Имя файла", _table_file->name,
			"Имя мета", file_name_meta);
		return nullptr;
	}

	#ifdef _DEBUG
	msreg_g.AddDebugMessage("Найден файл метаданных в конфигурации поставщика", MessageState::Info,
		"Таблица", _table_file->t->getname(),
		"Имя файла", _table_file->name,
		"Имя мета", file_name_meta);
	#endif

	std::unique_ptr<tree> meta_tree ( meta_file->get_tree() );
	int32_t numnode = (*meta_tree)[0][2].get_value().ToInt();
	int32_t i = 0;
	for(i = 0; i < numnode; i++) {
		tree& node = (*meta_tree)[0][3 + i];
		String nodetype = node[0].get_value();
		if(nodetype.CompareIC(NODE_GENERAL) == 0) { // узел "Общие"
			tree& confinfo = node[1][1];
			int32_t verconfinfo = confinfo[0].get_value().ToInt();
			switch(verconfinfo)	{
				case 15:
					_name = confinfo[1][1][2].get_value();
					_supplier = confinfo[11].get_value();
					_version = confinfo[12].get_value();
					break;
				case 22:
				case 32:
				case 34:
				case 36:
				case 37:
					_name = confinfo[1][1][2].get_value();
					_supplier = confinfo[14].get_value();
					_version = confinfo[15].get_value();
					break;
				default:
					_name = confinfo[1][1][2].get_value();
					_supplier = confinfo[14].get_value();
					_version = confinfo[15].get_value();
					#ifdef _DEBUG
					msreg_g.AddDebugMessage("Неизвестная версия свойств конфигурации поставщика", MessageState::Info,
						"Таблица", table_file->t->getname(),
						"Имя файла", table_file->name,
						"Имя мета", file_name_meta,
						"Версия свойств", verconfinfo);
					#endif
					break;
			}
			break;
		}
	}

	if(i >= numnode) {
		msreg_g.AddError("Не найден узел Общие в метаданных конфигурации поставщика",
			"Таблица", _table_file->t->getname(),
			"Имя файла", _table_file->name,
			"Имя мета", file_name_meta);
		_supplier = "";
		_version = "";
	}
	#ifdef _DEBUG
	else {
		msreg_g.AddDebugMessage("Найдена конфигурация поставщика", MessageState::Info,
			"Таблица", _table_file->t->getname(),
			"Имя файла", _table_file->name,
			"Имя", _name,
			"Версия", _version,
			"Поставщик", _supplier);
	}
	#endif

	std::shared_ptr<SupplierConfig> sup_conf( new SupplierConfig(_table_file, _name, _supplier, _version) );

	return sup_conf;
}

void SupplierConfigBuilder::create_main_catalog() {
	std::unique_ptr<ContainerFile> container_file( new ContainerFile(_table_file, _table_file->name) );
	if(!container_file->open()) {
		return;
	}

	std::unique_ptr<TStream> out_stream( new TTempStream );

	try {
		ZInflateStream(container_file->stream, out_stream.get());
	}
	catch(...) {
		msreg_g.AddError("Ошибка распаковки конфигурации поставщика",
			"Таблица", _table_file->t->getname(),
			"Имя", _table_file->name);
		return;
	}

	container_file->close();

	main_catalog.reset( new V8Catalog(out_stream.get(), true) );
}

int32_t SupplierConfigBuilder::get_version() const {
	V8File* version_file = main_catalog->GetFile("version");
	if(!version_file) {
		msreg_g.AddError("Не найден файл version в конфигурации поставщика",
			"Таблица", _table_file->t->getname(),
			"Имя файла", _table_file->name);
		return 0;
	}

	std::unique_ptr<tree> version_tree ( version_file->get_tree() );
	int32_t result = (*version_tree)[0][0][0].get_value().ToInt();;

#ifdef _DEBUG
msreg_g.AddDebugMessage("Найдена версия контейнера конфигурации поставщика", MessageState::Info,
	"Таблица", _table_file->t->getname(),
	"Имя файла", _table_file->name,
	"Версия", i);
#endif

	return result;
}

V8File* SupplierConfigBuilder::get_file(const String &file_name) const {
	V8File* result = nullptr;

	if(get_version() < 100) { // 8.0
		V8File* metadata_file = main_catalog->GetFile("metadata");
		if(metadata_file == nullptr) {
			msreg_g.AddError("Не найден каталог metadata в конфигурации поставщика",
				"Таблица", _table_file->t->getname(),
				"Имя файла", _table_file->name);
			return nullptr;
		}

		V8Catalog* cat2 = metadata_file->GetCatalog();
		if(cat2 == nullptr) {
			msreg_g.AddError("Файл metadata не является каталогом в конфигурации поставщика",
				"Таблица", _table_file->t->getname(),
				"Имя файла", _table_file->name);
			return nullptr;
		}

		result = cat2->GetFile(file_name);
	} else {
		result = main_catalog->GetFile(file_name); // else 8.1 или 8.2
	}

	return result;
}
