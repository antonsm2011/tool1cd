#ifndef _ICU_34_H
#define _ICU_34_H
//---------------------------------------------------------------------------
#pragma option push

#undef __CURRENCYAMOUNT_H__
#undef __CURRENCYUNIT_H__
#undef __LAYOUTENGINE_H
#undef __LEFONTINSTANCE_H
#undef __LEGLYPHFILTER__H
#undef __LEGLYPHSTORAGE_H
#undef __LEINSERTIONLIST_H
#undef __LELANGUAGES_H
#undef __LESCRIPTS_H
#undef __LESWAPS_H
#undef __LETYPES_H
#undef __MEASURE_H__
#undef __MEASUREUNIT_H__
#undef __PARAGRAPHLAYOUT_H
#undef __RUNARRAYS_H
#undef __STDC_CONSTANT_MACROS
#undef __UCASEMAP_H__
#undef __UCLEAN_H__
#undef __UCONFIG_H__
#undef __UDATA_H__
#undef __UENUM_H
#undef __UIDNA_H__
#undef __UITER_H__
#undef __ULOCDATA_H__
#undef __UMACHINE_H__
#undef __UOBJECT_H__
#undef __UREP_H
#undef __USET_H__
#undef __USHAPE_H__
#undef __USPREP_H__
#undef __UTEXT_H__
#undef __UTF_H__
#undef __UTF_OLD_H__
#undef __UTF16_H__
#undef __UTF8_H__
#undef __UTRACE_H__
#undef _ASCIIData
#undef _Bocu1Data
#undef _CESU8Data
#undef _HZData
#undef _IMAPData
#undef _ISCIIData
#undef _ISO2022Data
#undef _Latin1Data
#undef _LMBCSData1
#undef _LMBCSData11
#undef _LMBCSData16
#undef _LMBCSData17
#undef _LMBCSData18
#undef _LMBCSData19
#undef _LMBCSData2
#undef _LMBCSData3
#undef _LMBCSData4
#undef _LMBCSData5
#undef _LMBCSData6
#undef _LMBCSData8
#undef _MBCSData
#undef _SCSUData
#undef _UCURR_H_
#undef _UNUM
#undef _UTF16BEData
#undef _UTF16Data
#undef _UTF16LEData
#undef _UTF32BEData
#undef _UTF32Data
#undef _UTF32LEData
#undef _UTF7Data
#undef _UTF8Data
#undef AbsoluteValueSubstitution
#undef AlternateSubstitutionSubtable
#undef AnchorTable
#undef AnyTransliterator
#undef ArabicOpenTypeLayoutEngine
#undef ArabicShaping
#undef BasicCalendarFactory
#undef BinarySearchLookupTable
#undef BreakDictionary
#undef BreakIterator
#undef BRKITER_H
#undef BuddhistCalendar
#undef Calendar
#undef CALENDAR_H
#undef CalendarAstronomer
#undef CalendarCache
#undef CalendarData
#undef CalendarService
#undef CANITER_H
#undef CANITER_SKIP_ZEROES
#undef CanonicalIterator
#undef CanonShaping
#undef CAPACITY_GROW_LIMIT
#undef CaseMapTransliterator
#undef CFactory
#undef ChainingContextualSubstitutionFormat1Subtable
#undef ChainingContextualSubstitutionFormat2Subtable
#undef ChainingContextualSubstitutionFormat3Subtable
#undef ChainingContextualSubstitutionSubtable
#undef CharacterIterator
#undef CHARITER_H
#undef CharSubstitutionFilter
#undef ChoiceFormat
#undef CHOICFMT_H
#undef ClassDefFormat1Table
#undef ClassDefFormat2Table
#undef ClassDefinitionTable
#undef cmemory_cleanup
#undef cmemory_inUse
#undef COLEITR_H
#undef COLL_H
#undef CollationElementIterator
#undef CollationKey
#undef Collator
#undef CollatorFactory
#undef CompoundTransliterator
#undef ContextualGlyphSubstitutionProcessor
#undef ContextualSubstitutionBase
#undef ContextualSubstitutionFormat1Subtable
#undef ContextualSubstitutionFormat2Subtable
#undef ContextualSubstitutionFormat3Subtable
#undef ContextualSubstitutionSubtable
#undef CoverageFormat1Table
#undef CoverageFormat2Table
#undef CoverageTable
#undef CurrencyAmount
#undef CurrencyFormat
#undef CurrencyUnit
#undef CursiveAttachmentSubtable
#undef DATEFMT_H
#undef DateFormat
#undef DateFormatSymbols
#undef DBBI_H
#undef DCFMTSYM_H
#undef DecimalFormat
#undef DecimalFormatSymbols
#undef DECIMFMT_H
#undef DefaultCalendarFactory
#undef DefaultCharMapper
#undef DeviceTable
#undef DictionaryBasedBreakIterator
#undef DictionaryBasedBreakIteratorTables
#undef DigitList
#undef DTFMTSYM_H
#undef Entry
#undef EnumToOffset
#undef EscapeTransliterator
#undef EventListener
#undef ExtensionSubtable
#undef FALSE
#undef FeatureListTable
#undef FIELDPOS_H
#undef FieldPosition
#undef FMTABLE_H
#undef FontRuns
#undef Format
#undef FORMAT_H
#undef Format1AnchorTable
#undef Format2AnchorTable
#undef Format3AnchorTable
#undef Formattable
#undef ForwardCharacterIterator
#undef FractionalPartSubstitution
#undef FunctionReplacer
#undef GDEFMarkFilter
#undef GlyphDefinitionTableHeader
#undef GlyphIterator
#undef GlyphLookupTableHeader
#undef GlyphPositionAdjustments
#undef GlyphPositioningLookupProcessor
#undef GlyphPositioningTableHeader
#undef GlyphSubstitutionLookupProcessor
#undef GlyphSubstitutionTableHeader
#undef Grego
#undef GREGOCAL_H
#undef GregorianCalendar
#undef GXLayoutEngine
#undef HanOpenTypeLayoutEngine
#undef HebrewCalendar
#undef ICU_USE_THREADS
#undef ICU_Utility
#undef ICUBreakIteratorFactory
#undef ICUBreakIteratorService
#undef ICUCollatorFactory
#undef ICUCollatorService
#undef ICULocaleService
#undef ICUNotifier
#undef ICUNumberFormatFactory
#undef ICUNumberFormatService
#undef ICUResourceBundleFactory
#undef ICUService
#undef ICUServiceFactory
#undef ICUServiceKey
#undef IEEE_754
#undef IndicClassTable
#undef IndicOpenTypeLayoutEngine
#undef IndicRearrangementProcessor
#undef IndicReordering
#undef INITIAL_CAPACITY
#undef INT16_MAX
#undef INT16_MIN
#undef INT32_MAX
#undef INT32_MIN
#undef INT64_C
#undef INT8_MAX
#undef INT8_MIN
#undef IntegralPartSubstitution
#undef IslamicCalendar
#undef JapaneseCalendar
#undef KernTable
#undef KeywordEnumeration
#undef KhmerClassTable
#undef KhmerOpenTypeLayoutEngine
#undef KhmerReordering
#undef LayoutEngine
#undef LE_ARRAY_COPY
#undef LE_CLIENT_MASK
#undef LE_CLIENT_SHIFT
#undef LE_DELETE_ARRAY
#undef LE_FAILURE
#undef LE_GET_CLIENT
#undef LE_GET_GLYPH
#undef LE_GET_SUB_FONT
#undef LE_GLYPH_MASK
#undef LE_GLYPH_SHIFT
#undef LE_GROW_ARRAY
#undef LE_MAKE_TAG
#undef LE_NEW_ARRAY
#undef LE_SET_CLIENT
#undef LE_SET_GLYPH
#undef LE_SET_SUB_FONT
#undef LE_SUB_FONT_MASK
#undef LE_SUB_FONT_SHIFT
#undef LE_SUCCESS
#undef LE_USE_CMEMORY
#undef LECharMapper
#undef LEFontInstance
#undef LEGlyphFilter
#undef LEGlyphStorage
#undef LEInsertionCallback
#undef LEInsertionList
#undef LEUnicode_3_4
#undef LigatureSubstitutionProcessor
#undef LigatureSubstitutionSubtable
#undef Locale
#undef locale_get_default
#undef locale_getKeywords
#undef locale_set_default
#undef locale_set_default_internal
#undef LocaleBased
#undef LocaleKey
#undef LocaleKeyFactory
#undef LocaleRuns
#undef LocaleUtility
#undef LocalizationInfo
#undef LocDataParser
#undef LOCID_H
#undef LookupListTable
#undef LookupProcessor
#undef LookupSubtable
#undef LookupTable
#undef LowercaseTransliterator
#undef LXUtilities
#undef MarkArray
#undef MarkToBasePositioningSubtable
#undef MarkToLigaturePositioningSubtable
#undef MarkToMarkPositioningSubtable
#undef Math
#undef Measure
#undef MeasureFormat
#undef MEASUREFORMAT_H
#undef MeasureUnit
#undef MessageFormat
#undef MessageFormatAdapter
#undef ModulusSubstitution
#undef MoonRiseSetCoordFunc
#undef MoonTimeAngleFunc
#undef MorphSubtableHeader
#undef MorphTableHeader
#undef MPreFixups
#undef MSGFMT_H
#undef MultipleSubstitutionSubtable
#undef MultiplierSubstitution
#undef NameToEnum
#undef NameUnicodeTransliterator
#undef NFFactory
#undef NFRule
#undef NFRuleSet
#undef NFSubstitution
#undef NonContextualGlyphSubstitutionProcessor
#undef NonContiguousEnumToOffset
#undef NormalizationTransliterator
#undef Normalizer
#undef NORMLZR_H
#undef NULL
#undef NullSubstitution
#undef NullTransliterator
#undef NumberFormat
#undef NumberFormatFactory
#undef NumeratorSubstitution
#undef NUMFMT_H
#undef OlsonTimeZone
#undef OpenTypeLayoutEngine
#undef OpenTypeUtilities
#undef PairPositioningFormat1Subtable
#undef PairPositioningFormat2Subtable
#undef PairPositioningSubtable
#undef ParagraphLayout
#undef ParseData
#undef PARSEERR_H
#undef PARSEPOS_H
#undef ParsePosition
#undef PropertyAliases
#undef PUTIL_H
#undef Quantifier
#undef RangeDescriptor
#undef RBBI_H
#undef RBBIDataWrapper
#undef RBBINode
#undef RBBIRuleBuilder
#undef RBBIRuleScanner
#undef RBBISetBuilder
#undef RBBIStateDescriptor
#undef RBBISymbolTable
#undef RBBISymbolTableEntry
#undef RBBITableBuilder
#undef RBNF_H
#undef REGEX_H
#undef RegexCompile
#undef RegexMatcher
#undef RegexPattern
#undef RegexPatternDump
#undef RegexStaticSets
#undef RemoveTransliterator
#undef REP_H
#undef Replaceable
#undef ReplaceableGlue
#undef RES_ALIAS_3_4
#undef RES_ARRAY_3_4
#undef RES_BINARY_3_4
#undef res_countArrayItems
#undef res_findResource
#undef res_getAlias
#undef res_getArrayItem
#undef res_getBinary
#undef res_getIntVector
#undef res_getResource
#undef res_getString
#undef res_getTableItemByIndex
#undef res_getTableItemByKey
#undef RES_INT_3_4
#undef RES_INT_VECTOR_3_4
#undef res_load
#undef RES_NONE_3_4
#undef RES_RESERVED_3_4
#undef RES_STRING_3_4
#undef RES_TABLE_3_4
#undef res_unload
#undef RESBUND_H
#undef ResourceBundle
#undef RiseSetCoordFunc
#undef RuleBasedBreakIterator
#undef RuleBasedCollator
#undef RuleBasedNumberFormat
#undef RuleBasedTransliterator
#undef RuleCharacterIterator
#undef RuleHalf
#undef RunArray
#undef SameValueSubstitution
#undef SCHRITER_H
#undef ScriptListTable
#undef ScriptRunIterator
#undef ScriptTable
#undef SEARCH_H
#undef SearchIterator
#undef SegmentArrayProcessor
#undef SegmentSingleProcessor
#undef ServiceEnumeration
#undef ServiceListener
#undef SimpleArrayProcessor
#undef SimpleDateFormat
#undef SimpleFactory
#undef SimpleLocaleKeyFactory
#undef SimpleNumberFormatFactory
#undef SimpleTimeZone
#undef SIMPLETZ_H
#undef SinglePositioningFormat1Subtable
#undef SinglePositioningFormat2Subtable
#undef SinglePositioningSubtable
#undef SingleSubstitutionFormat1Subtable
#undef SingleSubstitutionFormat2Subtable
#undef SingleSubstitutionSubtable
#undef SingleTableProcessor
#undef SMPDTFMT_H
#undef SORTKEY_H
#undef Spec
#undef StateTableProcessor
#undef STRENUM_H
#undef StringCharacterIterator
#undef StringEnumeration
#undef StringLocalizationInfo
#undef StringMatcher
#undef StringPair
#undef StringReplacer
#undef StringSearch
#undef STSEARCH_H
#undef StyleRuns
#undef SubstitutionLookup
#undef SubtableProcessor
#undef SunTimeAngleFunc
#undef SWAPL
#undef SWAPW
#undef SymbolTable
#undef SYMTABLE_H
#undef T_CString_int64ToString
#undef T_CString_integerToString
#undef T_CString_stricmp
#undef T_CString_stringToInteger
#undef T_CString_strnicmp
#undef T_CString_toLowerCase
#undef T_CString_toUpperCase
#undef T_FileStream_close
#undef T_FileStream_eof
#undef T_FileStream_error
#undef T_FileStream_file_exists
#undef T_FileStream_getc
#undef T_FileStream_open
#undef T_FileStream_peek
#undef T_FileStream_putc
#undef T_FileStream_read
#undef T_FileStream_readLine
#undef T_FileStream_remove
#undef T_FileStream_rewind
#undef T_FileStream_size
#undef T_FileStream_stderr
#undef T_FileStream_stdin
#undef T_FileStream_stdout
#undef T_FileStream_ungetc
#undef T_FileStream_write
#undef T_FileStream_writeLine
#undef TBLCOLL_H
#undef ThaiLayoutEngine
#undef ThaiShaping
#undef TimeZone
#undef TIMEZONE_H
#undef TitlecaseTransliterator
#undef TRANSLIT_H
#undef TransliterationRule
#undef TransliterationRuleData
#undef TransliterationRuleSet
#undef Transliterator
#undef transliterator_cleanup
#undef TransliteratorAlias
#undef TransliteratorIDParser
#undef TransliteratorParser
#undef TransliteratorRegistry
#undef TrimmedArrayProcessor
#undef TRUE
#undef TZEnumeration
#undef U_ALIGN_CODE
#undef U_ASCII_FAMILY
#undef u_austrcpy
#undef u_austrncpy
#undef U_BRK_SAFECLONE_BUFFERSIZE
#undef U_CALLCONV
#undef U_CAPI
#undef u_catclose
#undef u_catgets
#undef u_catopen
#undef U_CDECL_BEGIN
#undef U_CDECL_END
#undef U_CFUNC
#undef u_charAge
#undef u_charDigitValue
#undef u_charDirection
#undef u_charFromName
#undef u_charMirror
#undef u_charName
#undef U_CHARSET_FAMILY
#undef u_charsToUChars
#undef u_charType
#undef u_cleanup
#undef U_CNV_SAFECLONE_BUFFERSIZE
#undef U_COL_SAFECLONE_BUFFERSIZE
#undef U_COMMON_API
#undef U_COMPARE_CODE_POINT_ORDER
#undef U_COMPARE_IGNORE_CASE
#undef U_COPYRIGHT_STRING
#undef U_COPYRIGHT_STRING_LENGTH
#undef u_countChar32
#undef U_DATA_API
#undef U_DEBUG
#undef U_DEF_ICUDATA_ENTRY_POINT
#undef U_DEF2_ICUDATA_ENTRY_POINT
#undef U_DEFAULT_SHOW_DRAFT
#undef U_DEPRECATED
#undef u_digit
#undef U_DISABLE_RENAMING
#undef U_DRAFT
#undef U_EBCDIC_FAMILY
#undef U_ENABLE_TRACING
#undef u_enumCharNames
#undef u_enumCharTypes
#undef U_EOF
#undef u_errorName
#undef U_ETHER
#undef U_EXPORT
#undef U_EXPORT2
#undef U_FAILURE
#undef u_fclose
#undef u_fclose_3_4
#undef u_feof
#undef u_feof_3_4
#undef u_fflush
#undef u_fflush_3_4
#undef u_fgetc
#undef u_fgetc_3_4
#undef u_fgetcodepage
#undef u_fgetcodepage_3_4
#undef u_fgetConverter
#undef u_fgetConverter_3_4
#undef u_fgetcx
#undef u_fgetcx_3_4
#undef u_fgetfile
#undef u_fgetfile_3_4
#undef u_fgetlocale
#undef u_fgetlocale_3_4
#undef u_fgets
#undef u_fgets_3_4
#undef U_FILE_ALT_SEP_CHAR
#undef U_FILE_ALT_SEP_STRING
#undef u_file_read
#undef u_file_read_3_4
#undef U_FILE_SEP_CHAR
#undef U_FILE_SEP_STRING
#undef u_file_write
#undef u_file_write_3_4
#undef u_file_write_flush
#undef u_finit
#undef u_finit_3_4
#undef U_FOLD_CASE_DEFAULT
#undef U_FOLD_CASE_EXCLUDE_SPECIAL_I
#undef u_foldCase
#undef u_fopen
#undef u_fopen_3_4
#undef u_forDigit
#undef u_formatMessage
#undef u_formatMessageWithError
#undef u_fprintf
#undef u_fprintf_3_4
#undef u_fprintf_u
#undef u_fprintf_u_3_4
#undef u_fputc
#undef u_fputc_3_4
#undef u_fputs
#undef u_fputs_3_4
#undef u_frewind
#undef u_frewind_3_4
#undef u_fscanf
#undef u_fscanf_3_4
#undef u_fscanf_u
#undef u_fscanf_u_3_4
#undef u_fsetcodepage
#undef u_fsetcodepage_3_4
#undef u_fsetlocale
#undef u_fsetlocale_3_4
#undef u_fsettransliterator
#undef u_fsettransliterator_3_4
#undef u_fstropen
#undef u_fstropen_3_4
#undef u_fungetc
#undef u_fungetc_3_4
#undef U_GC_C_MASK
#undef U_GC_CC_MASK
#undef U_GC_CF_MASK
#undef U_GC_CN_MASK
#undef U_GC_CO_MASK
#undef U_GC_CS_MASK
#undef U_GC_L_MASK
#undef U_GC_LC_MASK
#undef U_GC_LL_MASK
#undef U_GC_LM_MASK
#undef U_GC_LO_MASK
#undef U_GC_LT_MASK
#undef U_GC_LU_MASK
#undef U_GC_M_MASK
#undef U_GC_MC_MASK
#undef U_GC_ME_MASK
#undef U_GC_MN_MASK
#undef U_GC_N_MASK
#undef U_GC_ND_MASK
#undef U_GC_NL_MASK
#undef U_GC_NO_MASK
#undef U_GC_P_MASK
#undef U_GC_PC_MASK
#undef U_GC_PD_MASK
#undef U_GC_PE_MASK
#undef U_GC_PF_MASK
#undef U_GC_PI_MASK
#undef U_GC_PO_MASK
#undef U_GC_PS_MASK
#undef U_GC_S_MASK
#undef U_GC_SC_MASK
#undef U_GC_SK_MASK
#undef U_GC_SM_MASK
#undef U_GC_SO_MASK
#undef U_GC_Z_MASK
#undef U_GC_ZL_MASK
#undef U_GC_ZP_MASK
#undef U_GC_ZS_MASK
#undef U_GET_GC_MASK
#undef u_getCombiningClass
#undef u_getDataDirectory
#undef u_getDefaultConverter
#undef u_getFC_NFKC_Closure
#undef u_getIntPropertyMaxValue
#undef u_getIntPropertyMinValue
#undef u_getIntPropertyValue
#undef u_getISOComment
#undef u_getNumericValue
#undef u_getPropertyEnum
#undef u_getPropertyName
#undef u_getPropertyValueEnum
#undef u_getPropertyValueName
#undef u_getUnicodeProperties
#undef u_getUnicodeVersion
#undef u_getVersion
#undef u_growBufferFromStatic
#undef u_hasBinaryProperty
#undef U_HAVE_DEBUG_LOCATION_NEW
#undef U_HAVE_INT16_T
#undef U_HAVE_INT32_T
#undef U_HAVE_INT64_T
#undef U_HAVE_INT8_T
#undef U_HAVE_INTTYPES_H
#undef U_HAVE_LIB_SUFFIX
#undef U_HAVE_MMAP
#undef U_HAVE_NAMESPACE
#undef U_HAVE_PLACEMENT_NEW
#undef U_HAVE_POPEN
#undef U_HAVE_RBNF
#undef U_HAVE_UINT16_T
#undef U_HAVE_UINT32_T
#undef U_HAVE_UINT64_T
#undef U_HAVE_UINT8_T
#undef U_HAVE_WCHAR_H
#undef U_HAVE_WCSCPY
#undef U_HIDE_DRAFT_API
#undef U_I18N_API
#undef U_ICU_NAMESPACE
#undef U_ICU_VERSION
#undef U_ICU_VERSION_MAJOR_NUM
#undef U_ICU_VERSION_MINOR_NUM
#undef U_ICU_VERSION_PATCHLEVEL_NUM
#undef U_ICU_VERSION_SHORT
#undef U_ICU_VERSION_SUFFIX
#undef U_ICUDATA_ALIAS
#undef U_ICUDATA_ENTRY_POINT
#undef U_ICUDATA_NAME
#undef U_ICUDATA_TYPE_LETTER
#undef U_ICUDATA_TYPE_LITLETTER
#undef U_IMPORT
#undef u_init
#undef U_INLINE
#undef U_INT64_IS_LONG_LONG
#undef U_INT64_MAX
#undef U_INT64_MIN
#undef U_INTERNAL
#undef U_IO_API
#undef U_IOSTREAM_SOURCE
#undef U_IS_BIG_ENDIAN
#undef U_IS_BMP
#undef U_IS_LEAD
#undef U_IS_SUPPLEMENTARY
#undef U_IS_SURROGATE
#undef U_IS_SURROGATE_LEAD
#undef U_IS_TRAIL
#undef U_IS_UNICODE_CHAR
#undef U_IS_UNICODE_NONCHAR
#undef u_isalnum
#undef u_isalnumPOSIX
#undef u_isalpha
#undef u_isbase
#undef u_isblank
#undef u_iscntrl
#undef u_isdefined
#undef u_isdigit
#undef u_isgraph
#undef u_isgraphPOSIX
#undef u_isIDIgnorable
#undef u_isIDPart
#undef u_isIDStart
#undef u_isISOControl
#undef u_isJavaIDPart
#undef u_isJavaIDStart
#undef u_isJavaSpaceChar
#undef u_islower
#undef u_isMirrored
#undef u_isprint
#undef u_isprintPOSIX
#undef u_ispunct
#undef u_isspace
#undef u_istitle
#undef u_isUAlphabetic
#undef u_isULowercase
#undef u_isupper
#undef u_isUUppercase
#undef u_isUWhiteSpace
#undef u_isWhitespace
#undef u_isxdigit
#undef U_LAYOUT_API
#undef U_LAYOUTEX_API
#undef U_LB_INSEPARABLE_3_4
#undef u_lengthOfIdenticalLevelRun
#undef U_LIB_SUFFIX_C_NAME
#undef U_LIB_SUFFIX_C_NAME_STRING
#undef u_locbund_close
#undef u_locbund_getNumberFormat
#undef u_locbund_init
#undef U_MAKE
#undef U_MAKE_IS_NMAKE
#undef U_MASK
#undef U_MAX_VERSION_LENGTH
#undef U_MAX_VERSION_STRING_LENGTH
#undef u_memcasecmp
#undef u_memchr
#undef u_memchr32
#undef u_memcmp
#undef u_memcmpCodePointOrder
#undef u_memcpy
#undef u_memmove
#undef u_memrchr
#undef u_memrchr32
#undef u_memset
#undef U_MILLIS_PER_DAY
#undef U_MILLIS_PER_HOUR
#undef U_MILLIS_PER_MINUTE
#undef U_MILLIS_PER_SECOND
#undef U_NAMESPACE_BEGIN
#undef U_NAMESPACE_END
#undef U_NAMESPACE_QUALIFIER
#undef U_NAMESPACE_USE
#undef U_NO_NUMERIC_VALUE
#undef U_OBSOLETE
#undef U_OVERRIDE_CXX_ALLOCATION
#undef u_parseMessage
#undef u_parseMessageWithError
#undef U_PATH_SEP_CHAR
#undef U_PATH_SEP_STRING
#undef u_printf_parse
#undef U_RELEASE
#undef u_releaseDefaultConverter
#undef u_scanf_parse
#undef U_SENTINEL
#undef u_setAtomicIncDecFunctions
#undef u_setDataDirectory
#undef u_setMemoryFunctions
#undef u_setMutexFunctions
#undef U_SHAPE_DIGIT_TYPE_AN
#undef U_SHAPE_DIGIT_TYPE_AN_EXTENDED
#undef U_SHAPE_DIGIT_TYPE_MASK
#undef U_SHAPE_DIGIT_TYPE_RESERVED
#undef U_SHAPE_DIGITS_ALEN2AN_INIT_AL
#undef U_SHAPE_DIGITS_ALEN2AN_INIT_LR
#undef U_SHAPE_DIGITS_AN2EN
#undef U_SHAPE_DIGITS_EN2AN
#undef U_SHAPE_DIGITS_MASK
#undef U_SHAPE_DIGITS_NOOP
#undef U_SHAPE_DIGITS_RESERVED
#undef U_SHAPE_LENGTH_FIXED_SPACES_AT_BEGINNING
#undef U_SHAPE_LENGTH_FIXED_SPACES_AT_END
#undef U_SHAPE_LENGTH_FIXED_SPACES_NEAR
#undef U_SHAPE_LENGTH_GROW_SHRINK
#undef U_SHAPE_LENGTH_MASK
#undef U_SHAPE_LETTERS_MASK
#undef U_SHAPE_LETTERS_NOOP
#undef U_SHAPE_LETTERS_SHAPE
#undef U_SHAPE_LETTERS_SHAPE_TASHKEEL_ISOLATED
#undef U_SHAPE_LETTERS_UNSHAPE
#undef U_SHAPE_TEXT_DIRECTION_LOGICAL
#undef U_SHAPE_TEXT_DIRECTION_MASK
#undef U_SHAPE_TEXT_DIRECTION_VISUAL_LTR
#undef u_shapeArabic
#undef U_SIZEOF_UCHAR
#undef U_SIZEOF_WCHAR_T
#undef u_snprintf
#undef u_snprintf_3_4
#undef u_snprintf_u
#undef u_snprintf_u_3_4
#undef u_sprintf
#undef u_sprintf_3_4
#undef u_sprintf_u
#undef u_sprintf_u_3_4
#undef u_sscanf
#undef u_sscanf_3_4
#undef u_sscanf_u
#undef u_sscanf_u_3_4
#undef U_STABLE
#undef U_STANDARD_CPP_NAMESPACE
#undef u_strcasecmp
#undef u_strCaseCompare
#undef u_strcat
#undef u_strchr
#undef u_strchr32
#undef u_strcmp
#undef u_strcmpCodePointOrder
#undef u_strcmpFold
#undef u_strCompare
#undef u_strCompareIter
#undef u_strcpy
#undef u_strcspn
#undef u_strFindFirst
#undef u_strFindLast
#undef u_strFoldCase
#undef u_strFromPunycode
#undef u_strFromUTF32
#undef u_strFromUTF8
#undef u_strFromWCS
#undef u_strHasMoreChar32Than
#undef U_STRING_DECL
#undef U_STRING_INIT
#undef u_strlen
#undef u_strncasecmp
#undef u_strncat
#undef u_strncmp
#undef u_strncmpCodePointOrder
#undef u_strncpy
#undef u_strpbrk
#undef u_strrchr
#undef u_strrchr32
#undef u_strrstr
#undef u_strspn
#undef u_strstr
#undef u_strtok_r
#undef u_strToLower
#undef u_strToPunycode
#undef u_strToTitle
#undef u_strToUpper
#undef u_strToUTF32
#undef u_strToUTF8
#undef u_strToWCS
#undef U_SUCCESS
#undef u_terminateChars
#undef u_terminateUChar32s
#undef u_terminateUChars
#undef u_terminateWChars
#undef U_TIMEZONE
#undef u_tolower
#undef U_TOOLUTIL_API
#undef u_totitle
#undef u_toupper
#undef U_TREE_ENTRY_SEP_CHAR
#undef U_TREE_ENTRY_SEP_STRING
#undef U_TREE_SEPARATOR
#undef U_TREE_SEPARATOR_STRING
#undef U_TZNAME
#undef U_TZSET
#undef u_uastrcpy
#undef u_uastrncpy
#undef u_UCharsToChars
#undef U_UINT64_MAX
#undef u_unescape
#undef u_unescapeAt
#undef U_UNICODE_VERSION
#undef U_VERSION_DELIMITER
#undef u_versionFromString
#undef u_versionToString
#undef u_vformatMessage
#undef u_vformatMessageWithError
#undef u_vfprintf
#undef u_vfprintf_3_4
#undef u_vfprintf_u
#undef u_vfprintf_u_3_4
#undef u_vfscanf
#undef u_vfscanf_3_4
#undef u_vfscanf_u
#undef u_vfscanf_u_3_4
#undef u_vparseMessage
#undef u_vparseMessageWithError
#undef u_vsnprintf
#undef u_vsnprintf_3_4
#undef u_vsnprintf_u
#undef u_vsnprintf_u_3_4
#undef u_vsprintf
#undef u_vsprintf_3_4
#undef u_vsprintf_u
#undef u_vsprintf_u_3_4
#undef u_vsscanf
#undef u_vsscanf_3_4
#undef u_vsscanf_u
#undef u_vsscanf_u_3_4
#undef U_WCHAR_IS_UTF16
#undef U_WCHAR_IS_UTF32
#undef U_WINDOWS
#undef u_writeDiff
#undef u_writeIdenticalLevelRun
#undef u_writeIdenticalLevelRunTwoChars
#undef U16_APPEND
#undef U16_APPEND_UNSAFE
#undef U16_BACK_1
#undef U16_BACK_1_UNSAFE
#undef U16_BACK_N
#undef U16_BACK_N_UNSAFE
#undef U16_FWD_1
#undef U16_FWD_1_UNSAFE
#undef U16_FWD_N
#undef U16_FWD_N_UNSAFE
#undef U16_GET
#undef U16_GET_SUPPLEMENTARY
#undef U16_GET_UNSAFE
#undef U16_IS_LEAD
#undef U16_IS_SINGLE
#undef U16_IS_SURROGATE
#undef U16_IS_SURROGATE_LEAD
#undef U16_IS_TRAIL
#undef U16_LEAD
#undef U16_LENGTH
#undef U16_MAX_LENGTH
#undef U16_NEXT
#undef U16_NEXT_UNSAFE
#undef U16_PREV
#undef U16_PREV_UNSAFE
#undef U16_SET_CP_LIMIT
#undef U16_SET_CP_LIMIT_UNSAFE
#undef U16_SET_CP_START
#undef U16_SET_CP_START_UNSAFE
#undef U16_SURROGATE_OFFSET
#undef U16_TRAIL
#undef U8_APPEND
#undef U8_APPEND_UNSAFE
#undef U8_BACK_1
#undef U8_BACK_1_UNSAFE
#undef U8_BACK_N
#undef U8_BACK_N_UNSAFE
#undef U8_COUNT_TRAIL_BYTES
#undef U8_FWD_1
#undef U8_FWD_1_UNSAFE
#undef U8_FWD_N
#undef U8_FWD_N_UNSAFE
#undef U8_GET
#undef U8_GET_UNSAFE
#undef U8_IS_LEAD
#undef U8_IS_SINGLE
#undef U8_IS_TRAIL
#undef U8_LENGTH
#undef U8_MASK_LEAD_BYTE
#undef U8_MAX_LENGTH
#undef U8_NEXT
#undef U8_NEXT_UNSAFE
#undef U8_PREV
#undef U8_PREV_UNSAFE
#undef U8_SET_CP_LIMIT
#undef U8_SET_CP_LIMIT_UNSAFE
#undef U8_SET_CP_START
#undef U8_SET_CP_START_UNSAFE
#undef UAcceptResult_3_4
#undef ubidi_addPropertyStarts
#undef ubidi_close
#undef ubidi_closeProps
#undef ubidi_countParagraphs
#undef ubidi_countRuns
#undef UBIDI_DEFAULT_LTR
#undef UBIDI_DEFAULT_RTL
#undef UBIDI_DO_MIRRORING
#undef ubidi_getClass
#undef ubidi_getDirection
#undef ubidi_getDummy
#undef ubidi_getJoiningGroup
#undef ubidi_getJoiningType
#undef ubidi_getLength
#undef ubidi_getLevelAt
#undef ubidi_getLevels
#undef ubidi_getLogicalIndex
#undef ubidi_getLogicalMap
#undef ubidi_getLogicalRun
#undef ubidi_getMaxValue
#undef ubidi_getMemory
#undef ubidi_getMirror
#undef ubidi_getParagraph
#undef ubidi_getParagraphByIndex
#undef ubidi_getParaLevel
#undef ubidi_getRuns
#undef ubidi_getSingleton
#undef ubidi_getText
#undef ubidi_getVisualIndex
#undef ubidi_getVisualMap
#undef ubidi_getVisualRun
#undef UBIDI_H
#undef UBIDI_INSERT_LRM_FOR_NUMERIC
#undef ubidi_invertMap
#undef ubidi_isBidiControl
#undef ubidi_isInverse
#undef ubidi_isJoinControl
#undef ubidi_isMirrored
#undef ubidi_isOrderParagraphsLTR
#undef UBIDI_KEEP_BASE_COMBINING
#undef UBIDI_LEVEL_OVERRIDE
#undef UBIDI_MAX_EXPLICIT_LEVEL
#undef ubidi_open
#undef ubidi_openSized
#undef ubidi_orderParagraphsLTR
#undef UBIDI_OUTPUT_REVERSE
#undef UBIDI_REMOVE_BIDI_CONTROLS
#undef ubidi_reorderLogical
#undef ubidi_reorderVisual
#undef ubidi_setInverse
#undef ubidi_setLine
#undef ubidi_setPara
#undef ubidi_writeReordered
#undef ubidi_writeReverse
#undef ublock_getCode
#undef ubrk_close
#undef ubrk_countAvailable
#undef ubrk_current
#undef UBRK_DONE
#undef ubrk_first
#undef ubrk_following
#undef ubrk_getAvailable
#undef ubrk_getLocaleByType
#undef ubrk_getLocaleByType_3_4
#undef ubrk_getRuleStatus
#undef ubrk_getRuleStatusVec
#undef ubrk_getRuleStatusVec_3_4
#undef UBRK_H
#undef ubrk_isBoundary
#undef ubrk_last
#undef ubrk_next
#undef ubrk_open
#undef ubrk_openRules
#undef ubrk_preceding
#undef ubrk_previous
#undef ubrk_safeClone
#undef ubrk_setText
#undef ubrk_setUText
#undef ubrk_setUText_3_4
#undef ubrk_swap
#undef UBRK_TITLE_3_4
#undef UBRK_TYPEDEF_UBREAK_ITERATOR
#undef ucal_add
#undef ucal_clear
#undef ucal_clearField
#undef ucal_close
#undef ucal_countAvailable
#undef ucal_equivalentTo
#undef ucal_get
#undef ucal_getAttribute
#undef ucal_getAvailable
#undef ucal_getDefaultTimeZone
#undef ucal_getDSTSavings
#undef ucal_getLimit
#undef ucal_getLocaleByType
#undef ucal_getLocaleByType_3_4
#undef ucal_getMillis
#undef ucal_getNow
#undef ucal_getTimeZoneDisplayName
#undef UCAL_H
#undef ucal_inDaylightTime
#undef ucal_isSet
#undef ucal_open
#undef ucal_openCountryTimeZones
#undef ucal_openTimeZones
#undef ucal_roll
#undef ucal_set
#undef ucal_setAttribute
#undef ucal_setDate
#undef ucal_setDateTime
#undef ucal_setDefaultTimeZone
#undef ucal_setMillis
#undef ucal_setTimeZone
#undef ucase_addCaseClosure
#undef ucase_addPropertyStarts
#undef ucase_addStringCaseClosure
#undef ucase_close
#undef ucase_fold
#undef ucase_getCaseLocale
#undef ucase_getDummy
#undef ucase_getSingleton
#undef ucase_getType
#undef ucase_getTypeOrIgnorable
#undef ucase_isCaseSensitive
#undef ucase_isSoftDotted
#undef ucase_toFullFolding
#undef ucase_toFullLower
#undef ucase_toFullTitle
#undef ucase_toFullUpper
#undef ucase_tolower
#undef ucase_totitle
#undef ucase_toupper
#undef UCaseMap_3_4
#undef ucasemap_close
#undef ucasemap_close_3_4
#undef ucasemap_getLocale
#undef ucasemap_getLocale_3_4
#undef ucasemap_getOptions
#undef ucasemap_getOptions_3_4
#undef ucasemap_open
#undef ucasemap_open_3_4
#undef ucasemap_setLocale
#undef ucasemap_setLocale_3_4
#undef ucasemap_setOptions
#undef ucasemap_setOptions_3_4
#undef ucasemap_utf8ToLower
#undef ucasemap_utf8ToLower_3_4
#undef ucasemap_utf8ToUpper
#undef ucasemap_utf8ToUpper_3_4
#undef UCAT_H
#undef uchar_addPropertyStarts
#undef uchar_getHST
#undef UCHAR_GRAPHEME_CLUSTER_BREAK_3_4
#undef UCHAR_H
#undef UCHAR_LEAD_CANONICAL_COMBINING_CLASS_3_4
#undef UCHAR_MAX_VALUE
#undef UCHAR_MIN_VALUE
#undef UCHAR_NFC_INERT_3_4
#undef UCHAR_NFC_QUICK_CHECK_3_4
#undef UCHAR_NFD_INERT_3_4
#undef UCHAR_NFD_QUICK_CHECK_3_4
#undef UCHAR_NFKC_INERT_3_4
#undef UCHAR_NFKC_QUICK_CHECK_3_4
#undef UCHAR_NFKD_INERT_3_4
#undef UCHAR_NFKD_QUICK_CHECK_3_4
#undef UCHAR_PATTERN_SYNTAX_3_4
#undef UCHAR_PATTERN_WHITE_SPACE_3_4
#undef UCHAR_POSIX_ALNUM_3_4
#undef UCHAR_POSIX_BLANK_3_4
#undef UCHAR_POSIX_GRAPH_3_4
#undef UCHAR_POSIX_PRINT_3_4
#undef UCHAR_POSIX_XDIGIT_3_4
#undef UCHAR_S_TERM_3_4
#undef UCHAR_SEGMENT_STARTER_3_4
#undef UCHAR_SENTENCE_BREAK_3_4
#undef uchar_swapNames
#undef UCHAR_TRAIL_CANONICAL_COMBINING_CLASS_3_4
#undef UCHAR_VARIATION_SELECTOR_3_4
#undef UCHAR_WORD_BREAK_3_4
#undef UCharCharacterIterator
#undef UCHRITER_H
#undef ucln_common_lib_cleanup
#undef ucln_common_registerCleanup
#undef ucln_i18n_registerCleanup
#undef ucln_registerCleanup
#undef ucmp8_close
#undef ucmp8_compact
#undef ucmp8_expand
#undef ucmp8_flattenMem
#undef ucmp8_getArray
#undef ucmp8_getCount
#undef ucmp8_getIndex
#undef ucmp8_getkBlockCount
#undef ucmp8_getkUnicodeCount
#undef ucmp8_init
#undef ucmp8_initAdopt
#undef ucmp8_initAlias
#undef ucmp8_initBogus
#undef ucmp8_initFromData
#undef ucmp8_isBogus
#undef ucmp8_open
#undef ucmp8_openAdopt
#undef ucmp8_openAlias
#undef ucmp8_set
#undef ucmp8_setRange
#undef ucnv_bld_countAvailableConverters
#undef ucnv_bld_getAvailableConverter
#undef UCNV_CB_H
#undef ucnv_cbFromUWriteBytes
#undef ucnv_cbFromUWriteSub
#undef ucnv_cbFromUWriteUChars
#undef ucnv_cbToUWriteSub
#undef ucnv_cbToUWriteUChars
#undef ucnv_close
#undef ucnv_compareNames
#undef ucnv_convert
#undef ucnv_convertEx
#undef ucnv_countAliases
#undef ucnv_countAvailable
#undef ucnv_countStandards
#undef ucnv_createAlgorithmicConverter
#undef ucnv_createConverter
#undef ucnv_createConverterFromPackage
#undef ucnv_createConverterFromSharedData
#undef ucnv_detectUnicodeSignature
#undef UCNV_ERR_H
#undef UCNV_ESCAPE_C
#undef UCNV_ESCAPE_ICU
#undef UCNV_ESCAPE_JAVA
#undef UCNV_ESCAPE_UNICODE
#undef UCNV_ESCAPE_XML_DEC
#undef UCNV_ESCAPE_XML_HEX
#undef ucnv_extContinueMatchFromU
#undef ucnv_extContinueMatchToU
#undef ucnv_extGetUnicodeSet
#undef ucnv_extInitialMatchFromU
#undef ucnv_extInitialMatchToU
#undef ucnv_extSimpleMatchFromU
#undef ucnv_extSimpleMatchToU
#undef ucnv_fixFileSeparator
#undef ucnv_flushCache
#undef UCNV_FROM_U_CALLBACK_ESCAPE
#undef UCNV_FROM_U_CALLBACK_SKIP
#undef UCNV_FROM_U_CALLBACK_STOP
#undef UCNV_FROM_U_CALLBACK_SUBSTITUTE
#undef ucnv_fromAlgorithmic
#undef ucnv_fromUChars
#undef ucnv_fromUCountPending
#undef ucnv_fromUCountPending_3_4
#undef ucnv_fromUnicode
#undef ucnv_fromUnicode_UTF8
#undef ucnv_fromUnicode_UTF8_OFFSETS_LOGIC
#undef ucnv_fromUWriteBytes
#undef UCNV_GET_MAX_BYTES_FOR_STRING
#undef ucnv_getAlias
#undef ucnv_getAliases
#undef ucnv_getAvailableName
#undef ucnv_getCanonicalName
#undef ucnv_getCCSID
#undef ucnv_getCompleteUnicodeSet
#undef ucnv_getDefaultName
#undef ucnv_getDisplayName
#undef ucnv_getFromUCallBack
#undef ucnv_getInvalidChars
#undef ucnv_getInvalidUChars
#undef ucnv_getMaxCharSize
#undef ucnv_getMinCharSize
#undef ucnv_getName
#undef ucnv_getNextUChar
#undef ucnv_getNonSurrogateUnicodeSet
#undef ucnv_getPlatform
#undef ucnv_getStandard
#undef ucnv_getStandardName
#undef ucnv_getStarters
#undef ucnv_getSubstChars
#undef ucnv_getToUCallBack
#undef ucnv_getType
#undef ucnv_getUnicodeSet
#undef UCNV_H
#undef ucnv_incrementRefCount
#undef ucnv_io_countAliases
#undef ucnv_io_countStandards
#undef ucnv_io_countTotalAliases
#undef ucnv_io_getAlias
#undef ucnv_io_getAliases
#undef ucnv_io_getConverterName
#undef ucnv_io_stripASCIIForCompare
#undef ucnv_io_stripEBCDICForCompare
#undef ucnv_isAmbiguous
#undef ucnv_load
#undef ucnv_loadSharedData
#undef UCNV_LOCALE_OPTION_STRING
#undef UCNV_MAX_CONVERTER_NAME_LENGTH
#undef UCNV_MAX_FULL_FILE_NAME_LENGTH
#undef ucnv_MBCSFromUChar32
#undef ucnv_MBCSFromUnicodeWithOffsets
#undef ucnv_MBCSGetType
#undef ucnv_MBCSGetUnicodeSetForBytes
#undef ucnv_MBCSGetUnicodeSetForUnicode
#undef ucnv_MBCSIsLeadByte
#undef ucnv_MBCSSimpleGetNextUChar
#undef ucnv_MBCSToUnicodeWithOffsets
#undef ucnv_open
#undef ucnv_openAllNames
#undef ucnv_openCCSID
#undef ucnv_openPackage
#undef ucnv_openStandardNames
#undef ucnv_openU
#undef UCNV_OPTION_SEP_CHAR
#undef UCNV_OPTION_SEP_STRING
#undef ucnv_reset
#undef ucnv_resetFromUnicode
#undef ucnv_resetToUnicode
#undef ucnv_safeClone
#undef ucnv_setDefaultName
#undef ucnv_setFallback
#undef ucnv_setFromUCallBack
#undef ucnv_setSubstChars
#undef ucnv_setToUCallBack
#undef UCNV_SI
#undef UCNV_SKIP_STOP_ON_ILLEGAL
#undef UCNV_SO
#undef UCNV_SUB_STOP_ON_ILLEGAL
#undef ucnv_swap
#undef UCNV_SWAP_LFNL_OPTION_STRING
#undef ucnv_swapAliases
#undef UCNV_TO_U_CALLBACK_ESCAPE
#undef UCNV_TO_U_CALLBACK_SKIP
#undef UCNV_TO_U_CALLBACK_STOP
#undef UCNV_TO_U_CALLBACK_SUBSTITUTE
#undef ucnv_toAlgorithmic
#undef ucnv_toUChars
#undef ucnv_toUCountPending
#undef ucnv_toUCountPending_3_4
#undef ucnv_toUnicode
#undef ucnv_toUWriteCodePoint
#undef ucnv_toUWriteUChars
#undef ucnv_unload
#undef ucnv_unloadSharedDataIfReady
#undef ucnv_usesFallback
#undef UCNV_VALUE_SEP_CHAR
#undef UCNV_VALUE_SEP_STRING
#undef UCNV_VERSION_OPTION_STRING
#undef ucol_allocWeights
#undef ucol_assembleTailoringTable
#undef UCOL_BUILDER_VERSION
#undef ucol_calcSortKey
#undef ucol_calcSortKeySimpleTertiary
#undef ucol_cloneBinary
#undef ucol_cloneBinary_3_4
#undef ucol_cloneRuleData
#undef ucol_close
#undef ucol_closeElements
#undef ucol_collatorToIdentifier
#undef ucol_countAvailable
#undef ucol_createElements
#undef ucol_doCE
#undef ucol_equal
#undef ucol_equals
#undef ucol_forgetUCA
#undef ucol_getAttribute
#undef ucol_getAttributeOrDefault
#undef ucol_getAvailable
#undef ucol_getBound
#undef ucol_getCEGenerator
#undef ucol_getCEStrengthDifference
#undef ucol_getContractions
#undef ucol_getContractions_3_4
#undef ucol_getContractionsAndExpansions
#undef ucol_getContractionsAndExpansions_3_4
#undef ucol_getDisplayName
#undef ucol_getFirstCE
#undef ucol_getFunctionalEquivalent
#undef ucol_getFunctionalEquivalent_3_4
#undef ucol_getKeywords
#undef ucol_getKeywords_3_4
#undef ucol_getKeywordValues
#undef ucol_getKeywordValues_3_4
#undef ucol_getLocale
#undef ucol_getLocale_3_4
#undef ucol_getLocaleByType
#undef ucol_getLocaleByType_3_4
#undef ucol_getMaxExpansion
#undef ucol_getNextCE
#undef ucol_getNextGenerated
#undef ucol_getOffset
#undef ucol_getPrevCE
#undef ucol_getRules
#undef ucol_getRulesEx
#undef ucol_getShortDefinitionString
#undef ucol_getShortDefinitionString_3_4
#undef ucol_getSimpleCEGenerator
#undef ucol_getSortKey
#undef ucol_getSortKeySize
#undef ucol_getSortKeyWithAllocation
#undef ucol_getStrength
#undef ucol_getTailoredSet
#undef ucol_getUCAVersion
#undef ucol_getUnsafeSet
#undef ucol_getVariableTop
#undef ucol_getVersion
#undef ucol_greater
#undef ucol_greaterOrEqual
#undef UCOL_H
#undef ucol_identifierToShortString
#undef ucol_initBuffers
#undef ucol_initCollator
#undef ucol_initInverseUCA
#undef ucol_initUCA
#undef ucol_inv_getGapPositions
#undef ucol_inv_getNextCE
#undef ucol_inv_getPrevCE
#undef ucol_isTailored
#undef ucol_keyHashCode
#undef ucol_mergeSortkeys
#undef ucol_next
#undef ucol_nextSortKeyPart
#undef ucol_nextWeight
#undef ucol_normalizeShortDefinitionString
#undef ucol_normalizeShortDefinitionString_3_4
#undef UCOL_NULLORDER
#undef ucol_open
#undef ucol_open_internal
#undef ucol_openAvailableLocales
#undef ucol_openAvailableLocales_3_4
#undef ucol_openBinary
#undef ucol_openBinary_3_4
#undef ucol_openElements
#undef ucol_openFromIdentifier
#undef ucol_openFromShortString
#undef ucol_openFromShortString_3_4
#undef ucol_openRules
#undef ucol_prepareShortStringOpen
#undef ucol_previous
#undef ucol_primaryOrder
#undef ucol_prv_getSpecialCE
#undef ucol_prv_getSpecialPrevCE
#undef ucol_reset
#undef ucol_restoreVariableTop
#undef UCOL_RUNTIME_VERSION
#undef ucol_safeClone
#undef ucol_secondaryOrder
#undef ucol_setAttribute
#undef ucol_setOffset
#undef ucol_setOptionsFromHeader
#undef ucol_setReqValidLocales
#undef ucol_setStrength
#undef ucol_setText
#undef ucol_setVariableTop
#undef ucol_shortStringToIdentifier
#undef UCOL_SIT_COLLATOR_NOT_ENCODABLE
#undef ucol_strcoll
#undef ucol_strcollIter
#undef ucol_swap
#undef ucol_swapBinary
#undef ucol_swapInverseUCA
#undef UCOL_TAILORINGS_VERSION
#undef ucol_tertiaryOrder
#undef ucol_tok_assembleTokenList
#undef ucol_tok_closeTokenList
#undef ucol_tok_getNextArgument
#undef ucol_tok_initTokenList
#undef ucol_tok_parseNextToken
#undef ucol_updateInternalState
#undef UCOLEITR_H
#undef UCONFIG_NO_BREAK_ITERATION
#undef UCONFIG_NO_COLLATION
#undef UCONFIG_NO_CONVERSION
#undef UCONFIG_NO_FILE_IO
#undef UCONFIG_NO_FORMATTING
#undef UCONFIG_NO_IDNA
#undef UCONFIG_NO_LEGACY_CONVERSION
#undef UCONFIG_NO_NORMALIZATION
#undef UCONFIG_NO_REGULAR_EXPRESSIONS
#undef UCONFIG_NO_SERVICE
#undef UCONFIG_NO_TRANSLITERATION
#undef UCONFIG_ONLY_COLLATION
#undef UCURR_ALL_3_4
#undef UCURR_COMMON_3_4
#undef UCURR_DEPRECATED_3_4
#undef ucurr_forLocale
#undef ucurr_getDefaultFractionDigits
#undef ucurr_getDefaultFractionDigits_3_4
#undef ucurr_getName
#undef ucurr_getRoundingIncrement
#undef ucurr_getRoundingIncrement_3_4
#undef UCURR_NON_DEPRECATED_3_4
#undef ucurr_openISOCurrencies
#undef ucurr_openISOCurrencies_3_4
#undef ucurr_register
#undef UCURR_UNCOMMON_3_4
#undef ucurr_unregister
#undef UCurrCurrencyType_3_4
#undef UDAT_AM_PM_FIELD_3_4
#undef udat_applyPattern
#undef udat_clone
#undef udat_close
#undef udat_countAvailable
#undef udat_countSymbols
#undef UDAT_DATE_FIELD_3_4
#undef UDAT_DAY_OF_WEEK_FIELD_3_4
#undef UDAT_DAY_OF_WEEK_IN_MONTH_FIELD_3_4
#undef UDAT_DAY_OF_YEAR_FIELD_3_4
#undef UDAT_DOW_LOCAL_FIELD_3_4
#undef UDAT_ERA_FIELD_3_4
#undef UDAT_EXTENDED_YEAR_FIELD_3_4
#undef UDAT_FIELD_COUNT_3_4
#undef udat_format
#undef UDAT_FRACTIONAL_SECOND_FIELD_3_4
#undef udat_get2DigitYearStart
#undef udat_getAvailable
#undef udat_getCalendar
#undef udat_getLocaleByType
#undef udat_getLocaleByType_3_4
#undef udat_getNumberFormat
#undef udat_getSymbols
#undef UDAT_H
#undef UDAT_HOUR_OF_DAY0_FIELD_3_4
#undef UDAT_HOUR_OF_DAY1_FIELD_3_4
#undef UDAT_HOUR0_FIELD_3_4
#undef UDAT_HOUR1_FIELD_3_4
#undef udat_isLenient
#undef UDAT_JULIAN_DAY_FIELD_3_4
#undef UDAT_MILLISECONDS_IN_DAY_FIELD_3_4
#undef UDAT_MINUTE_FIELD_3_4
#undef UDAT_MONTH_FIELD_3_4
#undef udat_open
#undef udat_parse
#undef udat_parseCalendar
#undef UDAT_SECOND_FIELD_3_4
#undef udat_set2DigitYearStart
#undef udat_setCalendar
#undef udat_setLenient
#undef udat_setNumberFormat
#undef udat_setSymbols
#undef UDAT_STANDALONE_DAY_FIELD_3_4
#undef UDAT_STANDALONE_MONTH_FIELD_3_4
#undef UDAT_TIMEZONE_FIELD_3_4
#undef UDAT_TIMEZONE_GENERIC_FIELD_3_4
#undef UDAT_TIMEZONE_RFC_FIELD_3_4
#undef udat_toPattern
#undef UDAT_WEEK_OF_MONTH_FIELD_3_4
#undef UDAT_WEEK_OF_YEAR_FIELD_3_4
#undef UDAT_YEAR_FIELD_3_4
#undef UDAT_YEAR_WOY_FIELD_3_4
#undef udata_checkCommonData
#undef udata_close
#undef udata_closeSwapper
#undef udata_getHeaderSize
#undef udata_getInfo
#undef udata_getInfoSize
#undef udata_getLength
#undef udata_getMemory
#undef udata_getRawMemory
#undef udata_open
#undef udata_openChoice
#undef udata_openSwapper
#undef udata_openSwapperForInputData
#undef udata_printError
#undef udata_readInt16
#undef udata_readInt32
#undef udata_setAppData
#undef udata_setCommonData
#undef udata_setFileAccess
#undef udata_setFileAccess_3_4
#undef udata_swapDataHeader
#undef udata_swapInvStringBlock
#undef UDataFileAccess_3_4
#undef UDatamemory_assign
#undef UDataMemory_createNewInstance
#undef UDataMemory_init
#undef UDataMemory_isLoaded
#undef UDataMemory_normalizeDataPointer
#undef UDataMemory_setData
#undef UDateFormatField_3_4
#undef UDateTimeScale_3_4
#undef UDEPRCTD_H
#undef UDRAFT_H
#undef UDTS_DB2_TIME_3_4
#undef UDTS_DOTNET_DATE_TIME_3_4
#undef UDTS_EXCEL_TIME_3_4
#undef UDTS_ICU4C_TIME_3_4
#undef UDTS_JAVA_TIME_3_4
#undef UDTS_MAC_OLD_TIME_3_4
#undef UDTS_MAC_TIME_3_4
#undef UDTS_MAX_SCALE_3_4
#undef UDTS_UNIX_TIME_3_4
#undef UDTS_WINDOWS_FILE_TIME_3_4
#undef uenum_close
#undef uenum_count
#undef uenum_next
#undef uenum_nextDefault
#undef uenum_openCharStringsEnumeration
#undef uenum_openStringEnumeration
#undef uenum_reset
#undef uenum_unext
#undef uenum_unextDefault
#undef UFILE_3_4
#undef ufile_close_translit
#undef ufile_fill_uchar_buffer
#undef ufile_flush_translit
#undef ufile_getch
#undef ufile_getch32
#undef UFileDirection_3_4
#undef ufmt_64tou
#undef ufmt_defaultCPToUnicode
#undef ufmt_digitvalue
#undef ufmt_isdigit
#undef ufmt_ptou
#undef ufmt_uto64
#undef ufmt_utop
#undef UGraphemeClusterBreak_3_4
#undef uhash_close
#undef uhash_compareCaselessUnicodeString
#undef uhash_compareChars
#undef uhash_compareIChars
#undef uhash_compareLong
#undef uhash_compareUChars
#undef uhash_compareUnicodeString
#undef uhash_count
#undef uhash_deleteHashtable
#undef uhash_deleteUnicodeString
#undef uhash_deleteUVector
#undef uhash_find
#undef uhash_freeBlock
#undef uhash_get
#undef uhash_geti
#undef uhash_hashCaselessUnicodeString
#undef uhash_hashChars
#undef uhash_hashIChars
#undef uhash_hashLong
#undef uhash_hashUChars
#undef uhash_hashUCharsN
#undef uhash_hashUnicodeString
#undef uhash_iget
#undef uhash_igeti
#undef uhash_iput
#undef uhash_iputi
#undef uhash_iremove
#undef uhash_iremovei
#undef uhash_nextElement
#undef uhash_open
#undef uhash_openSize
#undef uhash_put
#undef uhash_puti
#undef uhash_remove
#undef uhash_removeAll
#undef uhash_removeElement
#undef uhash_removei
#undef uhash_setKeyComparator
#undef uhash_setKeyDeleter
#undef uhash_setKeyHasher
#undef uhash_setResizePolicy
#undef uhash_setValueDeleter
#undef uhst_addPropertyStarts
#undef UIDNA_ALLOW_UNASSIGNED
#undef uidna_compare
#undef UIDNA_DEFAULT
#undef uidna_IDNToASCII
#undef uidna_IDNToUnicode
#undef uidna_toASCII
#undef uidna_toUnicode
#undef UIDNA_USE_STD3_RULES
#undef UINT16_MAX
#undef UINT32_MAX
#undef UINT64_C
#undef UINT8_MAX
#undef uiter_current32
#undef uiter_getState
#undef uiter_next32
#undef UITER_NO_STATE
#undef uiter_previous32
#undef uiter_setCharacterIterator
#undef uiter_setReplaceable
#undef uiter_setState
#undef uiter_setString
#undef uiter_setUTF16BE
#undef uiter_setUTF8
#undef uloc_acceptLanguage
#undef uloc_acceptLanguage_3_4
#undef uloc_acceptLanguageFromHTTP
#undef uloc_acceptLanguageFromHTTP_3_4
#undef ULOC_CANADA
#undef ULOC_CANADA_FRENCH
#undef uloc_canonicalize
#undef ULOC_CHINA
#undef ULOC_CHINESE
#undef uloc_countAvailable
#undef ULOC_COUNTRY_CAPACITY
#undef ULOC_ENGLISH
#undef ULOC_FRANCE
#undef ULOC_FRENCH
#undef ULOC_FULLNAME_CAPACITY
#undef ULOC_GERMAN
#undef ULOC_GERMANY
#undef uloc_getAvailable
#undef uloc_getBaseName
#undef uloc_getCountry
#undef uloc_getDefault
#undef uloc_getDisplayCountry
#undef uloc_getDisplayKeyword
#undef uloc_getDisplayKeywordValue
#undef uloc_getDisplayLanguage
#undef uloc_getDisplayName
#undef uloc_getDisplayScript
#undef uloc_getDisplayVariant
#undef uloc_getISO3Country
#undef uloc_getISO3Language
#undef uloc_getISOCountries
#undef uloc_getISOLanguages
#undef uloc_getKeywordValue
#undef uloc_getLanguage
#undef uloc_getLCID
#undef uloc_getName
#undef uloc_getParent
#undef uloc_getScript
#undef uloc_getVariant
#undef ULOC_H
#undef ULOC_ITALIAN
#undef ULOC_ITALY
#undef ULOC_JAPAN
#undef ULOC_JAPANESE
#undef ULOC_KEYWORD_AND_VALUES_CAPACITY
#undef ULOC_KEYWORD_ASSIGN
#undef ULOC_KEYWORD_ITEM_SEPARATOR
#undef ULOC_KEYWORD_SEPARATOR
#undef ULOC_KEYWORDS_CAPACITY
#undef ULOC_KOREA
#undef ULOC_KOREAN
#undef ULOC_LANG_CAPACITY
#undef uloc_openKeywordList
#undef uloc_openKeywords
#undef ULOC_PRC
#undef ULOC_REQUESTED_LOCALE_3_4
#undef ULOC_SCRIPT_CAPACITY
#undef uloc_setDefault
#undef uloc_setKeywordValue
#undef uloc_setKeywordValue_3_4
#undef ULOC_SIMPLIFIED_CHINESE
#undef ULOC_TAIWAN
#undef ULOC_TRADITIONAL_CHINESE
#undef ULOC_UK
#undef ULOC_US
#undef ULocaleData_3_4
#undef ULocaleDataDelimiterType_3_4
#undef ULocaleDataExemplarSetType_3_4
#undef ulocdata_close
#undef ulocdata_close_3_4
#undef ulocdata_getDelimiter
#undef ulocdata_getDelimiter_3_4
#undef ulocdata_getExemplarSet
#undef ulocdata_getExemplarSet_3_4
#undef ulocdata_getMeasurementSystem
#undef ulocdata_getMeasurementSystem_3_4
#undef ulocdata_getNoSubstitute_3_4
#undef ulocdata_getPaperSize
#undef ulocdata_getPaperSize_3_4
#undef ulocdata_open
#undef ulocdata_open_3_4
#undef ulocdata_setNoSubstitute_3_4
#undef UMeasurementSystem_3_4
#undef UMemory
#undef UMISC_H
#undef umsg_applyPattern
#undef umsg_autoQuoteApostrophe
#undef umsg_autoQuoteApostrophe_3_4
#undef umsg_clone
#undef umsg_close
#undef umsg_format
#undef umsg_getLocale
#undef UMSG_H
#undef umsg_open
#undef umsg_parse
#undef umsg_setLocale
#undef umsg_toPattern
#undef umsg_vformat
#undef umsg_vparse
#undef umtx_atomic_dec
#undef umtx_atomic_inc
#undef umtx_cleanup
#undef umtx_destroy
#undef umtx_init
#undef umtx_lock
#undef UMTX_STRONG_MEMORY_MODEL
#undef umtx_unlock
#undef UnescapeTransliterator
#undef UNFSYMBOLSMAXSIZE
#undef UNICODE_STRING
#undef UNICODE_STRING_SIMPLE
#undef UnicodeArabicOpenTypeLayoutEngine
#undef UnicodeFilter
#undef UnicodeFunctor
#undef UnicodeMatcher
#undef UnicodeNameTransliterator
#undef UnicodeReplacer
#undef UnicodeSet
#undef UNICODESET_H
#undef UnicodeSetIterator
#undef UnicodeString
#undef UNIFILT_H
#undef UNIFUNCT_H
#undef UNIMATCH_H
#undef UNIREPL_H
#undef UNISTR_H
#undef unorm_addPropertyStarts
#undef unorm_closeIter
#undef unorm_compare
#undef UNORM_COMPARE_NORM_OPTIONS_SHIFT
#undef unorm_compose
#undef unorm_concatenate
#undef unorm_decompose
#undef unorm_getCanonicalDecomposition
#undef unorm_getCanonStartSet
#undef unorm_getDecomposition
#undef unorm_getFCD16FromCodePoint
#undef unorm_getFCDTrie
#undef unorm_getNX
#undef unorm_getQuickCheck
#undef unorm_getUnicodeVersion
#undef UNORM_H
#undef unorm_haveData
#undef UNORM_INPUT_IS_FCD
#undef unorm_internalIsFullCompositionExclusion
#undef unorm_internalNormalize
#undef unorm_internalNormalizeWithNX
#undef unorm_internalQuickCheck
#undef unorm_isCanonSafeStart
#undef unorm_isNFSkippable
#undef unorm_isNormalized
#undef unorm_isNormalizedWithOptions
#undef unorm_next
#undef unorm_normalize
#undef unorm_openIter
#undef unorm_previous
#undef unorm_quickCheck
#undef unorm_quickCheckWithOptions
#undef unorm_setIter
#undef unum_applyPattern
#undef unum_clone
#undef unum_close
#undef unum_countAvailable
#undef UNUM_DEFAULT_RULESET_3_4
#undef UNUM_DURATION_3_4
#undef unum_format
#undef unum_formatDouble
#undef unum_formatDoubleCurrency
#undef unum_formatDoubleCurrency_3_4
#undef unum_formatInt64
#undef unum_getAttribute
#undef unum_getAvailable
#undef unum_getDoubleAttribute
#undef unum_getLocaleByType
#undef unum_getLocaleByType_3_4
#undef unum_getSymbol
#undef unum_getTextAttribute
#undef UNUM_LENIENT_PARSE_3_4
#undef UNUM_MAX_SIGNIFICANT_DIGITS_3_4
#undef UNUM_MIN_SIGNIFICANT_DIGITS_3_4
#undef unum_open
#undef UNUM_ORDINAL_3_4
#undef unum_parse
#undef unum_parseDouble
#undef unum_parseDoubleCurrency
#undef unum_parseDoubleCurrency_3_4
#undef unum_parseInt64
#undef UNUM_PATTERN_DECIMAL_3_4
#undef UNUM_PATTERN_RULEBASED_3_4
#undef UNUM_PUBLIC_RULESETS_3_4
#undef unum_setAttribute
#undef unum_setDoubleAttribute
#undef unum_setSymbol
#undef unum_setTextAttribute
#undef UNUM_SIGNIFICANT_DIGIT_SYMBOL_3_4
#undef UNUM_SIGNIFICANT_DIGITS_USED_3_4
#undef unum_toPattern
#undef UObject
#undef UOBJECT_DEFINE_ABSTRACT_RTTI_IMPLEMENTATION
#undef UOBJECT_DEFINE_RTTI_IMPLEMENTATION
#undef UOBSLETE_H
#undef upname_swap
#undef UppercaseTransliterator
#undef uprops_getSource
#undef upropsvec_addPropertyStarts
#undef uprv_asciiFromEbcdic
#undef uprv_asciitolower
#undef uprv_ceil
#undef uprv_cnttab_addContraction
#undef uprv_cnttab_changeContraction
#undef uprv_cnttab_changeLastCE
#undef uprv_cnttab_clone
#undef uprv_cnttab_close
#undef uprv_cnttab_constructTable
#undef uprv_cnttab_findCE
#undef uprv_cnttab_findCP
#undef uprv_cnttab_getCE
#undef uprv_cnttab_insertContraction
#undef uprv_cnttab_isTailored
#undef uprv_cnttab_open
#undef uprv_cnttab_setContraction
#undef uprv_compareASCIIPropertyNames
#undef uprv_compareEBCDICPropertyNames
#undef uprv_compareInvAscii
#undef uprv_compareInvEbcdic
#undef uprv_convertToLCID
#undef uprv_convertToPosix
#undef uprv_copyAscii
#undef uprv_copyEbcdic
#undef uprv_dtostr
#undef uprv_ebcdicFromAscii
#undef uprv_ebcdictolower
#undef uprv_fabs
#undef uprv_floor
#undef uprv_fmax
#undef uprv_fmin
#undef uprv_fmod
#undef uprv_free
#undef uprv_getCharNameCharacters
#undef uprv_getDefaultCodepage
#undef uprv_getDefaultLocaleID
#undef uprv_getInfinity
#undef uprv_getMaxCharNameLength
#undef uprv_getMaxValues
#undef uprv_getNaN
#undef uprv_getStaticCurrencyName
#undef uprv_getUTCtime
#undef uprv_haveProperties
#undef uprv_init_collIterate
#undef uprv_int32Comparator
#undef uprv_isInfinite
#undef uprv_isInvariantString
#undef uprv_isInvariantUString
#undef uprv_isNaN
#undef uprv_isNegativeInfinity
#undef uprv_isPositiveInfinity
#undef uprv_isRuleWhiteSpace
#undef uprv_itou
#undef uprv_loadPropsData
#undef uprv_log
#undef uprv_log10
#undef uprv_malloc
#undef uprv_mapFile
#undef uprv_max
#undef uprv_maxMantissa
#undef uprv_min
#undef uprv_modf
#undef uprv_openRuleWhiteSpaceSet
#undef uprv_parseCurrency
#undef uprv_pathIsAbsolute
#undef uprv_pow
#undef uprv_pow10
#undef uprv_realloc
#undef uprv_round
#undef uprv_sortArray
#undef uprv_strCompare
#undef uprv_strdup
#undef uprv_strndup
#undef uprv_syntaxError
#undef uprv_timezone
#undef uprv_toupper
#undef uprv_trunc
#undef uprv_tzname
#undef uprv_tzset
#undef uprv_uca_addAnElement
#undef uprv_uca_assembleTable
#undef uprv_uca_canonicalClosure
#undef uprv_uca_cloneTempTable
#undef uprv_uca_closeTempTable
#undef uprv_uca_getCodePointFromRaw
#undef uprv_uca_getImplicitFromRaw
#undef uprv_uca_getImplicitPrimary
#undef uprv_uca_getRawFromCodePoint
#undef uprv_uca_getRawFromImplicit
#undef uprv_uca_initImplicitConstants
#undef uprv_uca_initTempTable
#undef uprv_uint16Comparator
#undef uprv_uint32Comparator
#undef uprv_unmapFile
#undef uregex_appendReplacement
#undef uregex_appendReplacement_3_4
#undef uregex_appendTail
#undef uregex_appendTail_3_4
#undef UREGEX_CANON_EQ_3_4
#undef uregex_clone
#undef uregex_clone_3_4
#undef uregex_close
#undef uregex_close_3_4
#undef uregex_end
#undef uregex_end_3_4
#undef uregex_find
#undef uregex_find_3_4
#undef uregex_findNext
#undef uregex_findNext_3_4
#undef uregex_flags
#undef uregex_flags_3_4
#undef uregex_getText
#undef uregex_getText_3_4
#undef uregex_group
#undef uregex_group_3_4
#undef uregex_groupCount
#undef uregex_groupCount_3_4
#undef UREGEX_H
#undef uregex_lookingAt
#undef uregex_lookingAt_3_4
#undef uregex_matches
#undef uregex_matches_3_4
#undef uregex_open
#undef uregex_open_3_4
#undef uregex_openC
#undef uregex_openC_3_4
#undef uregex_pattern
#undef uregex_pattern_3_4
#undef uregex_replaceAll
#undef uregex_replaceAll_3_4
#undef uregex_replaceFirst
#undef uregex_replaceFirst_3_4
#undef uregex_reset
#undef uregex_reset_3_4
#undef uregex_setText
#undef uregex_setText_3_4
#undef uregex_split
#undef uregex_split_3_4
#undef uregex_start
#undef uregex_start_3_4
#undef URegularExpression
#undef URegularExpression_3_4
#undef URENAME_H
#undef ures_appendResPath
#undef ures_close
#undef ures_copyResb
#undef ures_countArrayItems
#undef ures_countArrayItems_3_4
#undef ures_findResource
#undef ures_findSubResource
#undef ures_freeResPath
#undef ures_getBinary
#undef ures_getByIndex
#undef ures_getByKey
#undef ures_getByKeyWithFallback
#undef ures_getFunctionalEquivalent
#undef ures_getInt
#undef ures_getIntVector
#undef ures_getKey
#undef ures_getKeywordValues
#undef ures_getLocale
#undef ures_getLocale_3_4
#undef ures_getLocaleByType
#undef ures_getLocaleByType_3_4
#undef ures_getName
#undef ures_getNextResource
#undef ures_getNextString
#undef ures_getPath
#undef ures_getSize
#undef ures_getString
#undef ures_getStringByIndex
#undef ures_getStringByKey
#undef ures_getType
#undef ures_getUInt
#undef ures_getVersion
#undef ures_getVersionNumber
#undef ures_getVersionNumber_3_4
#undef URES_H
#undef ures_hasNext
#undef ures_initStackObject
#undef ures_open
#undef ures_openAvailableLocales
#undef ures_openAvailableLocales_3_4
#undef ures_openDirect
#undef ures_openFillIn
#undef ures_openU
#undef ures_resetIterator
#undef ures_swap
#undef US_INV
#undef uscript_closeRun
#undef uscript_getCode
#undef uscript_getName
#undef uscript_getScript
#undef uscript_getShortName
#undef USCRIPT_H
#undef USCRIPT_KATAKANA_OR_HIRAGANA_3_4
#undef uscript_nextRun
#undef uscript_openRun
#undef uscript_resetRun
#undef uscript_setRunText
#undef usearch_close
#undef USEARCH_DONE
#undef usearch_first
#undef usearch_following
#undef usearch_getAttribute
#undef usearch_getBreakIterator
#undef usearch_getCollator
#undef usearch_getMatchedLength
#undef usearch_getMatchedStart
#undef usearch_getMatchedText
#undef usearch_getOffset
#undef usearch_getPattern
#undef usearch_getText
#undef USEARCH_H
#undef usearch_handleNextCanonical
#undef usearch_handleNextExact
#undef usearch_handlePreviousCanonical
#undef usearch_handlePreviousExact
#undef usearch_last
#undef usearch_next
#undef usearch_open
#undef usearch_openFromCollator
#undef usearch_preceding
#undef usearch_previous
#undef usearch_reset
#undef usearch_setAttribute
#undef usearch_setBreakIterator
#undef usearch_setCollator
#undef usearch_setOffset
#undef usearch_setPattern
#undef usearch_setText
#undef USentenceBreak_3_4
#undef userv_deleteStringPair
#undef uset_add
#undef USET_ADD_CASE_MAPPINGS_3_4
#undef uset_addAll
#undef uset_addAllCodePoints
#undef uset_addAllCodePoints_3_4
#undef uset_addRange
#undef uset_addString
#undef uset_applyIntPropertyValue
#undef uset_applyIntPropertyValue_3_4
#undef uset_applyPattern
#undef uset_applyPropertyAlias
#undef uset_applyPropertyAlias_3_4
#undef uset_charAt
#undef uset_charAt_3_4
#undef uset_clear
#undef uset_close
#undef uset_compact
#undef uset_compact_3_4
#undef uset_complement
#undef uset_complementAll
#undef uset_complementAll_3_4
#undef uset_contains
#undef uset_containsAll
#undef uset_containsAll_3_4
#undef uset_containsAllCodePoints
#undef uset_containsAllCodePoints_3_4
#undef uset_containsNone
#undef uset_containsNone_3_4
#undef uset_containsRange
#undef uset_containsSome
#undef uset_containsSome_3_4
#undef uset_containsString
#undef uset_equals
#undef uset_equals_3_4
#undef uset_getItem
#undef uset_getItemCount
#undef uset_getSerializedRange
#undef uset_getSerializedRangeCount
#undef uset_getSerializedSet
#undef uset_indexOf
#undef uset_indexOf_3_4
#undef uset_isEmpty
#undef uset_open
#undef uset_openPattern
#undef uset_openPatternOptions
#undef uset_remove
#undef uset_removeAll
#undef uset_removeAll_3_4
#undef uset_removeRange
#undef uset_removeString
#undef uset_resemblesPattern
#undef uset_resemblesPattern_3_4
#undef uset_retain
#undef uset_retain_3_4
#undef uset_retainAll
#undef uset_retainAll_3_4
#undef uset_serialize
#undef uset_serializedContains
#undef uset_set
#undef uset_set_3_4
#undef uset_setSerializedToOne
#undef uset_size
#undef uset_toPattern
#undef USETITER_H
#undef USPREP_ALLOW_UNASSIGNED
#undef usprep_close
#undef USPREP_DEFAULT
#undef usprep_open
#undef usprep_prepare
#undef usprep_swap
#undef UStack
#undef USTDIO_H
#undef ustr_foldCase
#undef ustr_toLower
#undef ustr_toTitle
#undef ustr_toUpper
#undef USTREAM_H
#undef USTRING_H
#undef UStringEnumeration
#undef UText_3_4
#undef utext_char32At
#undef utext_char32At_3_4
#undef UTEXT_CHUNK_INIT
#undef utext_clone
#undef utext_clone_3_4
#undef utext_close
#undef utext_close_3_4
#undef utext_compare
#undef utext_copy
#undef utext_copy_3_4
#undef utext_current32
#undef utext_current32_3_4
#undef utext_extract
#undef utext_extract_3_4
#undef utext_getNativeIndex
#undef utext_getNativeIndex_3_4
#undef utext_hasMetaData
#undef utext_hasMetaData_3_4
#undef UTEXT_INITIALIZER
#undef UTEXT_INITIALIZER_HEAD
#undef utext_isLengthExpensive
#undef utext_isLengthExpensive_3_4
#undef utext_isWritable
#undef utext_isWritable_3_4
#undef utext_moveIndex32
#undef utext_moveIndex32_3_4
#undef utext_nativeLength
#undef utext_nativeLength_3_4
#undef UTEXT_NEXT32
#undef utext_next32
#undef utext_next32From
#undef utext_next32From_3_4
#undef utext_openReplaceable
#undef utext_openUChars
#undef utext_openUChars_3_4
#undef utext_openUnicodeString
#undef utext_openUTF8
#undef utext_openUTF8_3_4
#undef utext_previous32
#undef UTEXT_PREVIOUS32
#undef utext_previous32From
#undef utext_previous32From_3_4
#undef utext_replace
#undef utext_replace_3_4
#undef utext_setNativeIndex
#undef utext_setNativeIndex_3_4
#undef utext_setup
#undef utext_setup_3_4
#undef UTextAccess_3_4
#undef UTextChunk_3_4
#undef UTextClone_3_4
#undef UTextClose_3_4
#undef UTextCopy_3_4
#undef UTextExtract_3_4
#undef UTextMapNativeIndexToUTF16_3_4
#undef UTextMapOffsetToNative_3_4
#undef UTextNativeLength_3_4
#undef UTextReplace_3_4
#undef UTF_APPEND_CHAR
#undef UTF_APPEND_CHAR_SAFE
#undef UTF_APPEND_CHAR_UNSAFE
#undef UTF_ARRAY_SIZE
#undef UTF_BACK_1
#undef UTF_BACK_1_SAFE
#undef UTF_BACK_1_UNSAFE
#undef UTF_BACK_N
#undef UTF_BACK_N_SAFE
#undef UTF_BACK_N_UNSAFE
#undef UTF_CHAR_LENGTH
#undef UTF_ERROR_VALUE
#undef UTF_FIRST_SURROGATE
#undef UTF_FWD_1
#undef UTF_FWD_1_SAFE
#undef UTF_FWD_1_UNSAFE
#undef UTF_FWD_N
#undef UTF_FWD_N_SAFE
#undef UTF_FWD_N_UNSAFE
#undef UTF_GET_CHAR
#undef UTF_GET_CHAR_SAFE
#undef UTF_GET_CHAR_UNSAFE
#undef UTF_IS_ERROR
#undef UTF_IS_FIRST_SURROGATE
#undef UTF_IS_LEAD
#undef UTF_IS_SECOND_SURROGATE
#undef UTF_IS_SINGLE
#undef UTF_IS_SURROGATE
#undef UTF_IS_SURROGATE_FIRST
#undef UTF_IS_TRAIL
#undef UTF_IS_UNICODE_CHAR
#undef UTF_IS_UNICODE_NONCHAR
#undef UTF_IS_VALID
#undef UTF_MAX_CHAR_LENGTH
#undef UTF_NEED_MULTIPLE_UCHAR
#undef UTF_NEXT_CHAR
#undef UTF_NEXT_CHAR_SAFE
#undef UTF_NEXT_CHAR_UNSAFE
#undef UTF_PREV_CHAR
#undef UTF_PREV_CHAR_SAFE
#undef UTF_PREV_CHAR_UNSAFE
#undef UTF_SAFE
#undef UTF_SECOND_SURROGATE
#undef UTF_SET_CHAR_LIMIT
#undef UTF_SET_CHAR_LIMIT_SAFE
#undef UTF_SET_CHAR_LIMIT_UNSAFE
#undef UTF_SET_CHAR_START
#undef UTF_SET_CHAR_START_SAFE
#undef UTF_SET_CHAR_START_UNSAFE
#undef UTF_SIZE
#undef UTF_SURROGATE_OFFSET
#undef UTF16_APPEND_CHAR_SAFE
#undef UTF16_APPEND_CHAR_UNSAFE
#undef UTF16_ARRAY_SIZE
#undef UTF16_BACK_1_SAFE
#undef UTF16_BACK_1_UNSAFE
#undef UTF16_BACK_N_SAFE
#undef UTF16_BACK_N_UNSAFE
#undef UTF16_CHAR_LENGTH
#undef UTF16_FWD_1_SAFE
#undef UTF16_FWD_1_UNSAFE
#undef UTF16_FWD_N_SAFE
#undef UTF16_FWD_N_UNSAFE
#undef UTF16_GET_CHAR_SAFE
#undef UTF16_GET_CHAR_UNSAFE
#undef UTF16_GET_PAIR_VALUE
#undef UTF16_IS_LEAD
#undef UTF16_IS_SINGLE
#undef UTF16_IS_TRAIL
#undef UTF16_LEAD
#undef UTF16_MAX_CHAR_LENGTH
#undef UTF16_NEED_MULTIPLE_UCHAR
#undef UTF16_NEXT_CHAR_SAFE
#undef UTF16_NEXT_CHAR_UNSAFE
#undef UTF16_PREV_CHAR_SAFE
#undef UTF16_PREV_CHAR_UNSAFE
#undef UTF16_SET_CHAR_LIMIT_SAFE
#undef UTF16_SET_CHAR_LIMIT_UNSAFE
#undef UTF16_SET_CHAR_START_SAFE
#undef UTF16_SET_CHAR_START_UNSAFE
#undef UTF16_TRAIL
#undef UTF32_APPEND_CHAR_SAFE
#undef UTF32_APPEND_CHAR_UNSAFE
#undef UTF32_ARRAY_SIZE
#undef UTF32_BACK_1_SAFE
#undef UTF32_BACK_1_UNSAFE
#undef UTF32_BACK_N_SAFE
#undef UTF32_BACK_N_UNSAFE
#undef UTF32_CHAR_LENGTH
#undef UTF32_FWD_1_SAFE
#undef UTF32_FWD_1_UNSAFE
#undef UTF32_FWD_N_SAFE
#undef UTF32_FWD_N_UNSAFE
#undef UTF32_GET_CHAR_SAFE
#undef UTF32_GET_CHAR_UNSAFE
#undef UTF32_IS_LEAD
#undef UTF32_IS_SAFE
#undef UTF32_IS_SINGLE
#undef UTF32_IS_TRAIL
#undef UTF32_MAX_CHAR_LENGTH
#undef UTF32_NEED_MULTIPLE_UCHAR
#undef UTF32_NEXT_CHAR_SAFE
#undef UTF32_NEXT_CHAR_UNSAFE
#undef UTF32_PREV_CHAR_SAFE
#undef UTF32_PREV_CHAR_UNSAFE
#undef UTF32_SET_CHAR_LIMIT_SAFE
#undef UTF32_SET_CHAR_LIMIT_UNSAFE
#undef UTF32_SET_CHAR_START_SAFE
#undef UTF32_SET_CHAR_START_UNSAFE
#undef UTF8_APPEND_CHAR_SAFE
#undef UTF8_APPEND_CHAR_UNSAFE
#undef utf8_appendCharSafeBody
#undef UTF8_ARRAY_SIZE
#undef UTF8_BACK_1_SAFE
#undef UTF8_BACK_1_UNSAFE
#undef UTF8_BACK_N_SAFE
#undef UTF8_BACK_N_UNSAFE
#undef utf8_back1SafeBody
#undef UTF8_CHAR_LENGTH
#undef UTF8_COUNT_TRAIL_BYTES
#undef utf8_countTrailBytes
#undef UTF8_ERROR_VALUE_1
#undef UTF8_ERROR_VALUE_2
#undef UTF8_FWD_1_SAFE
#undef UTF8_FWD_1_UNSAFE
#undef UTF8_FWD_N_SAFE
#undef UTF8_FWD_N_UNSAFE
#undef UTF8_GET_CHAR_SAFE
#undef UTF8_GET_CHAR_UNSAFE
#undef UTF8_IS_LEAD
#undef UTF8_IS_SINGLE
#undef UTF8_IS_TRAIL
#undef UTF8_MASK_LEAD_BYTE
#undef UTF8_MAX_CHAR_LENGTH
#undef UTF8_NEED_MULTIPLE_UCHAR
#undef UTF8_NEXT_CHAR_SAFE
#undef UTF8_NEXT_CHAR_UNSAFE
#undef utf8_nextCharSafeBody
#undef UTF8_PREV_CHAR_SAFE
#undef UTF8_PREV_CHAR_UNSAFE
#undef utf8_prevCharSafeBody
#undef UTF8_SET_CHAR_LIMIT_SAFE
#undef UTF8_SET_CHAR_LIMIT_UNSAFE
#undef UTF8_SET_CHAR_START_SAFE
#undef UTF8_SET_CHAR_START_UNSAFE
#undef util64_fromDouble
#undef util64_pow
#undef util64_tou
#undef UTimeScaleValue_3_4
#undef utmscale_fromInt64
#undef utmscale_fromInt64_3_4
#undef utmscale_getTimeScaleValue
#undef utmscale_getTimeScaleValue_3_4
#undef utmscale_toInt64
#undef utmscale_toInt64_3_4
#undef utrace_cleanup
#undef utrace_data
#undef utrace_entry
#undef utrace_exit
#undef utrace_format
#undef utrace_functionName
#undef utrace_getFunctions
#undef utrace_getLevel
#undef utrace_level
#undef utrace_setFunctions
#undef utrace_setLevel
#undef utrace_vformat
#undef utrans_clone
#undef utrans_close
#undef utrans_countAvailableIDs
#undef utrans_getAvailableID
#undef utrans_getAvailableID_3_4
#undef utrans_getID
#undef utrans_getID_3_4
#undef utrans_getUnicodeID
#undef UTRANS_H
#undef utrans_open
#undef utrans_open_3_4
#undef utrans_openIDs
#undef utrans_openInverse
#undef utrans_openU
#undef utrans_register
#undef utrans_rep_caseContextIterator
#undef utrans_setFilter
#undef utrans_stripRules
#undef utrans_trans
#undef utrans_transIncremental
#undef utrans_transIncrementalUChars
#undef utrans_transUChars
#undef utrans_unregister
#undef utrans_unregister_3_4
#undef utrans_unregisterID
#undef utrie_clone
#undef utrie_close
#undef utrie_defaultGetFoldingOffset
#undef utrie_enum
#undef utrie_get32
#undef utrie_getData
#undef utrie_open
#undef utrie_serialize
#undef utrie_set32
#undef utrie_setRange32
#undef utrie_swap
#undef utrie_unserialize
#undef utrie_unserializeDummy
#undef UTSV_EPOCH_OFFSET_MINUS_1_VALUE_3_4
#undef UTSV_EPOCH_OFFSET_PLUS_1_VALUE_3_4
#undef UTSV_EPOCH_OFFSET_VALUE_3_4
#undef UTSV_FROM_MAX_VALUE_3_4
#undef UTSV_FROM_MIN_VALUE_3_4
#undef UTSV_TO_MAX_VALUE_3_4
#undef UTSV_TO_MIN_VALUE_3_4
#undef UTSV_UNITS_VALUE_3_4
#undef UTYPES_H
#undef UVector
#undef UVector32
#undef UVERSION_H
#undef UWordBreakValues_3_4
#undef ValueRecord
#undef ValueRuns
#undef XP_CPLUSPLUS

#undef icu
#define icu icu_3_4_
#undef U_AMBIGUOUS_ALIAS_WARNING
#define U_AMBIGUOUS_ALIAS_WARNING U_AMBIGUOUS_ALIAS_WARNING_3_4_
#undef U_ARABIC_NUMBER
#define U_ARABIC_NUMBER U_ARABIC_NUMBER_3_4_
#undef U_ARGUMENT_TYPE_MISMATCH
#define U_ARGUMENT_TYPE_MISMATCH U_ARGUMENT_TYPE_MISMATCH_3_4_
#undef U_BAD_VARIABLE_DEFINITION
#define U_BAD_VARIABLE_DEFINITION U_BAD_VARIABLE_DEFINITION_3_4_
#undef U_BLOCK_SEPARATOR
#define U_BLOCK_SEPARATOR U_BLOCK_SEPARATOR_3_4_
#undef U_BOUNDARY_NEUTRAL
#define U_BOUNDARY_NEUTRAL U_BOUNDARY_NEUTRAL_3_4_
#undef U_BRK_ASSIGN_ERROR
#define U_BRK_ASSIGN_ERROR U_BRK_ASSIGN_ERROR_3_4_
#undef U_BRK_ERROR_LIMIT
#define U_BRK_ERROR_LIMIT U_BRK_ERROR_LIMIT_3_4_
#undef U_BRK_ERROR_START
#define U_BRK_ERROR_START U_BRK_ERROR_START_3_4_
#undef U_BRK_HEX_DIGITS_EXPECTED
#define U_BRK_HEX_DIGITS_EXPECTED U_BRK_HEX_DIGITS_EXPECTED_3_4_
#undef U_BRK_INIT_ERROR
#define U_BRK_INIT_ERROR U_BRK_INIT_ERROR_3_4_
#undef U_BRK_INTERNAL_ERROR
#define U_BRK_INTERNAL_ERROR U_BRK_INTERNAL_ERROR_3_4_
#undef U_BRK_MALFORMED_RULE_TAG
#define U_BRK_MALFORMED_RULE_TAG U_BRK_MALFORMED_RULE_TAG_3_4_
#undef U_BRK_MISMATCHED_PAREN
#define U_BRK_MISMATCHED_PAREN U_BRK_MISMATCHED_PAREN_3_4_
#undef U_BRK_NEW_LINE_IN_QUOTED_STRING
#define U_BRK_NEW_LINE_IN_QUOTED_STRING U_BRK_NEW_LINE_IN_QUOTED_STRING_3_4_
#undef U_BRK_RULE_EMPTY_SET
#define U_BRK_RULE_EMPTY_SET U_BRK_RULE_EMPTY_SET_3_4_
#undef U_BRK_RULE_SYNTAX
#define U_BRK_RULE_SYNTAX U_BRK_RULE_SYNTAX_3_4_
#undef U_BRK_SEMICOLON_EXPECTED
#define U_BRK_SEMICOLON_EXPECTED U_BRK_SEMICOLON_EXPECTED_3_4_
#undef U_BRK_UNCLOSED_SET
#define U_BRK_UNCLOSED_SET U_BRK_UNCLOSED_SET_3_4_
#undef U_BRK_UNDEFINED_VARIABLE
#define U_BRK_UNDEFINED_VARIABLE U_BRK_UNDEFINED_VARIABLE_3_4_
#undef U_BRK_UNRECOGNIZED_OPTION
#define U_BRK_UNRECOGNIZED_OPTION U_BRK_UNRECOGNIZED_OPTION_3_4_
#undef U_BRK_VARIABLE_REDFINITION
#define U_BRK_VARIABLE_REDFINITION U_BRK_VARIABLE_REDFINITION_3_4_
#undef U_BUFFER_OVERFLOW_ERROR
#define U_BUFFER_OVERFLOW_ERROR U_BUFFER_OVERFLOW_ERROR_3_4_
#undef U_CE_NOT_FOUND_ERROR
#define U_CE_NOT_FOUND_ERROR U_CE_NOT_FOUND_ERROR_3_4_
#undef U_CHAR_CATEGORY_COUNT
#define U_CHAR_CATEGORY_COUNT U_CHAR_CATEGORY_COUNT_3_4_
#undef U_CHAR_DIRECTION_COUNT
#define U_CHAR_DIRECTION_COUNT U_CHAR_DIRECTION_COUNT_3_4_
#undef U_CHAR_NAME_CHOICE_COUNT
#define U_CHAR_NAME_CHOICE_COUNT U_CHAR_NAME_CHOICE_COUNT_3_4_
#undef U_COLLATOR_VERSION_MISMATCH
#define U_COLLATOR_VERSION_MISMATCH U_COLLATOR_VERSION_MISMATCH_3_4_
#undef U_COMBINING_SPACING_MARK
#define U_COMBINING_SPACING_MARK U_COMBINING_SPACING_MARK_3_4_
#undef U_COMMON_NUMBER_SEPARATOR
#define U_COMMON_NUMBER_SEPARATOR U_COMMON_NUMBER_SEPARATOR_3_4_
#undef U_CONNECTOR_PUNCTUATION
#define U_CONNECTOR_PUNCTUATION U_CONNECTOR_PUNCTUATION_3_4_
#undef U_CONTROL_CHAR
#define U_CONTROL_CHAR U_CONTROL_CHAR_3_4_
#undef U_CURRENCY_SYMBOL
#define U_CURRENCY_SYMBOL U_CURRENCY_SYMBOL_3_4_
#undef U_DASH_PUNCTUATION
#define U_DASH_PUNCTUATION U_DASH_PUNCTUATION_3_4_
#undef U_DECIMAL_DIGIT_NUMBER
#define U_DECIMAL_DIGIT_NUMBER U_DECIMAL_DIGIT_NUMBER_3_4_
#undef U_DEFAULT_KEYWORD_MISSING
#define U_DEFAULT_KEYWORD_MISSING U_DEFAULT_KEYWORD_MISSING_3_4_
#undef U_DIFFERENT_UCA_VERSION
#define U_DIFFERENT_UCA_VERSION U_DIFFERENT_UCA_VERSION_3_4_
#undef U_DIR_NON_SPACING_MARK
#define U_DIR_NON_SPACING_MARK U_DIR_NON_SPACING_MARK_3_4_
#undef U_DT_CANONICAL
#define U_DT_CANONICAL U_DT_CANONICAL_3_4_
#undef U_DT_CIRCLE
#define U_DT_CIRCLE U_DT_CIRCLE_3_4_
#undef U_DT_COMPAT
#define U_DT_COMPAT U_DT_COMPAT_3_4_
#undef U_DT_COUNT
#define U_DT_COUNT U_DT_COUNT_3_4_
#undef U_DT_FINAL
#define U_DT_FINAL U_DT_FINAL_3_4_
#undef U_DT_FONT
#define U_DT_FONT U_DT_FONT_3_4_
#undef U_DT_FRACTION
#define U_DT_FRACTION U_DT_FRACTION_3_4_
#undef U_DT_INITIAL
#define U_DT_INITIAL U_DT_INITIAL_3_4_
#undef U_DT_ISOLATED
#define U_DT_ISOLATED U_DT_ISOLATED_3_4_
#undef U_DT_MEDIAL
#define U_DT_MEDIAL U_DT_MEDIAL_3_4_
#undef U_DT_NARROW
#define U_DT_NARROW U_DT_NARROW_3_4_
#undef U_DT_NOBREAK
#define U_DT_NOBREAK U_DT_NOBREAK_3_4_
#undef U_DT_NONE
#define U_DT_NONE U_DT_NONE_3_4_
#undef U_DT_SMALL
#define U_DT_SMALL U_DT_SMALL_3_4_
#undef U_DT_SQUARE
#define U_DT_SQUARE U_DT_SQUARE_3_4_
#undef U_DT_SUB
#define U_DT_SUB U_DT_SUB_3_4_
#undef U_DT_SUPER
#define U_DT_SUPER U_DT_SUPER_3_4_
#undef U_DT_VERTICAL
#define U_DT_VERTICAL U_DT_VERTICAL_3_4_
#undef U_DT_WIDE
#define U_DT_WIDE U_DT_WIDE_3_4_
#undef U_DUPLICATE_KEYWORD
#define U_DUPLICATE_KEYWORD U_DUPLICATE_KEYWORD_3_4_
#undef U_EA_AMBIGUOUS
#define U_EA_AMBIGUOUS U_EA_AMBIGUOUS_3_4_
#undef U_EA_COUNT
#define U_EA_COUNT U_EA_COUNT_3_4_
#undef U_EA_FULLWIDTH
#define U_EA_FULLWIDTH U_EA_FULLWIDTH_3_4_
#undef U_EA_HALFWIDTH
#define U_EA_HALFWIDTH U_EA_HALFWIDTH_3_4_
#undef U_EA_NARROW
#define U_EA_NARROW U_EA_NARROW_3_4_
#undef U_EA_NEUTRAL
#define U_EA_NEUTRAL U_EA_NEUTRAL_3_4_
#undef U_EA_WIDE
#define U_EA_WIDE U_EA_WIDE_3_4_
#undef U_ENCLOSING_MARK
#define U_ENCLOSING_MARK U_ENCLOSING_MARK_3_4_
#undef U_END_PUNCTUATION
#define U_END_PUNCTUATION U_END_PUNCTUATION_3_4_
#undef U_ENUM_OUT_OF_SYNC_ERROR
#define U_ENUM_OUT_OF_SYNC_ERROR U_ENUM_OUT_OF_SYNC_ERROR_3_4_
#undef U_ERROR_LIMIT
#define U_ERROR_LIMIT U_ERROR_LIMIT_3_4_
#undef U_ERROR_WARNING_LIMIT
#define U_ERROR_WARNING_LIMIT U_ERROR_WARNING_LIMIT_3_4_
#undef U_ERROR_WARNING_START
#define U_ERROR_WARNING_START U_ERROR_WARNING_START_3_4_
#undef U_EUROPEAN_NUMBER
#define U_EUROPEAN_NUMBER U_EUROPEAN_NUMBER_3_4_
#undef U_EUROPEAN_NUMBER_SEPARATOR
#define U_EUROPEAN_NUMBER_SEPARATOR U_EUROPEAN_NUMBER_SEPARATOR_3_4_
#undef U_EUROPEAN_NUMBER_TERMINATOR
#define U_EUROPEAN_NUMBER_TERMINATOR U_EUROPEAN_NUMBER_TERMINATOR_3_4_
#undef U_EXTENDED_CHAR_NAME
#define U_EXTENDED_CHAR_NAME U_EXTENDED_CHAR_NAME_3_4_
#undef U_FILE_ACCESS_ERROR
#define U_FILE_ACCESS_ERROR U_FILE_ACCESS_ERROR_3_4_
#undef U_FINAL_PUNCTUATION
#define U_FINAL_PUNCTUATION U_FINAL_PUNCTUATION_3_4_
#undef U_FMT_PARSE_ERROR_LIMIT
#define U_FMT_PARSE_ERROR_LIMIT U_FMT_PARSE_ERROR_LIMIT_3_4_
#undef U_FMT_PARSE_ERROR_START
#define U_FMT_PARSE_ERROR_START U_FMT_PARSE_ERROR_START_3_4_
#undef U_FORMAT_CHAR
#define U_FORMAT_CHAR U_FORMAT_CHAR_3_4_
#undef U_GCB_CONTROL
#define U_GCB_CONTROL U_GCB_CONTROL_3_4_
#undef U_GCB_COUNT
#define U_GCB_COUNT U_GCB_COUNT_3_4_
#undef U_GCB_CR
#define U_GCB_CR U_GCB_CR_3_4_
#undef U_GCB_EXTEND
#define U_GCB_EXTEND U_GCB_EXTEND_3_4_
#undef U_GCB_L
#define U_GCB_L U_GCB_L_3_4_
#undef U_GCB_LF
#define U_GCB_LF U_GCB_LF_3_4_
#undef U_GCB_LV
#define U_GCB_LV U_GCB_LV_3_4_
#undef U_GCB_LVT
#define U_GCB_LVT U_GCB_LVT_3_4_
#undef U_GCB_OTHER
#define U_GCB_OTHER U_GCB_OTHER_3_4_
#undef U_GCB_PREPEND
#define U_GCB_PREPEND U_GCB_PREPEND_3_4_
#undef U_GCB_SPACING_MARK
#define U_GCB_SPACING_MARK U_GCB_SPACING_MARK_3_4_
#undef U_GCB_T
#define U_GCB_T U_GCB_T_3_4_
#undef U_GCB_V
#define U_GCB_V U_GCB_V_3_4_
#undef U_GENERAL_OTHER_TYPES
#define U_GENERAL_OTHER_TYPES U_GENERAL_OTHER_TYPES_3_4_
#undef U_HST_COUNT
#define U_HST_COUNT U_HST_COUNT_3_4_
#undef U_HST_LEADING_JAMO
#define U_HST_LEADING_JAMO U_HST_LEADING_JAMO_3_4_
#undef U_HST_LV_SYLLABLE
#define U_HST_LV_SYLLABLE U_HST_LV_SYLLABLE_3_4_
#undef U_HST_LVT_SYLLABLE
#define U_HST_LVT_SYLLABLE U_HST_LVT_SYLLABLE_3_4_
#undef U_HST_NOT_APPLICABLE
#define U_HST_NOT_APPLICABLE U_HST_NOT_APPLICABLE_3_4_
#undef U_HST_TRAILING_JAMO
#define U_HST_TRAILING_JAMO U_HST_TRAILING_JAMO_3_4_
#undef U_HST_VOWEL_JAMO
#define U_HST_VOWEL_JAMO U_HST_VOWEL_JAMO_3_4_
#undef U_IDNA_ACE_PREFIX_ERROR
#define U_IDNA_ACE_PREFIX_ERROR U_IDNA_ACE_PREFIX_ERROR_3_4_
#undef U_IDNA_CHECK_BIDI_ERROR
#define U_IDNA_CHECK_BIDI_ERROR U_IDNA_CHECK_BIDI_ERROR_3_4_
#undef U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR
#define U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR_3_4_
#undef U_IDNA_ERROR_LIMIT
#define U_IDNA_ERROR_LIMIT U_IDNA_ERROR_LIMIT_3_4_
#undef U_IDNA_ERROR_START
#define U_IDNA_ERROR_START U_IDNA_ERROR_START_3_4_
#undef U_IDNA_LABEL_TOO_LONG_ERROR
#define U_IDNA_LABEL_TOO_LONG_ERROR U_IDNA_LABEL_TOO_LONG_ERROR_3_4_
#undef U_IDNA_PROHIBITED_ERROR
#define U_IDNA_PROHIBITED_ERROR U_IDNA_PROHIBITED_ERROR_3_4_
#undef U_IDNA_STD3_ASCII_RULES_ERROR
#define U_IDNA_STD3_ASCII_RULES_ERROR U_IDNA_STD3_ASCII_RULES_ERROR_3_4_
#undef U_IDNA_UNASSIGNED_ERROR
#define U_IDNA_UNASSIGNED_ERROR U_IDNA_UNASSIGNED_ERROR_3_4_
#undef U_IDNA_VERIFICATION_ERROR
#define U_IDNA_VERIFICATION_ERROR U_IDNA_VERIFICATION_ERROR_3_4_
#undef U_IDNA_ZERO_LENGTH_LABEL_ERROR
#define U_IDNA_ZERO_LENGTH_LABEL_ERROR U_IDNA_ZERO_LENGTH_LABEL_ERROR_3_4_
#undef U_ILLEGAL_ARGUMENT_ERROR
#define U_ILLEGAL_ARGUMENT_ERROR U_ILLEGAL_ARGUMENT_ERROR_3_4_
#undef U_ILLEGAL_CHAR_FOUND
#define U_ILLEGAL_CHAR_FOUND U_ILLEGAL_CHAR_FOUND_3_4_
#undef U_ILLEGAL_CHAR_IN_SEGMENT
#define U_ILLEGAL_CHAR_IN_SEGMENT U_ILLEGAL_CHAR_IN_SEGMENT_3_4_
#undef U_ILLEGAL_CHARACTER
#define U_ILLEGAL_CHARACTER U_ILLEGAL_CHARACTER_3_4_
#undef U_ILLEGAL_ESCAPE_SEQUENCE
#define U_ILLEGAL_ESCAPE_SEQUENCE U_ILLEGAL_ESCAPE_SEQUENCE_3_4_
#undef U_ILLEGAL_PAD_POSITION
#define U_ILLEGAL_PAD_POSITION U_ILLEGAL_PAD_POSITION_3_4_
#undef U_INDEX_OUTOFBOUNDS_ERROR
#define U_INDEX_OUTOFBOUNDS_ERROR U_INDEX_OUTOFBOUNDS_ERROR_3_4_
#undef U_INITIAL_PUNCTUATION
#define U_INITIAL_PUNCTUATION U_INITIAL_PUNCTUATION_3_4_
#undef U_INTERNAL_PROGRAM_ERROR
#define U_INTERNAL_PROGRAM_ERROR U_INTERNAL_PROGRAM_ERROR_3_4_
#undef U_INTERNAL_TRANSLITERATOR_ERROR
#define U_INTERNAL_TRANSLITERATOR_ERROR U_INTERNAL_TRANSLITERATOR_ERROR_3_4_
#undef U_INVALID_CHAR_FOUND
#define U_INVALID_CHAR_FOUND U_INVALID_CHAR_FOUND_3_4_
#undef U_INVALID_FORMAT_ERROR
#define U_INVALID_FORMAT_ERROR U_INVALID_FORMAT_ERROR_3_4_
#undef U_INVALID_FUNCTION
#define U_INVALID_FUNCTION U_INVALID_FUNCTION_3_4_
#undef U_INVALID_ID
#define U_INVALID_ID U_INVALID_ID_3_4_
#undef U_INVALID_PROPERTY_PATTERN
#define U_INVALID_PROPERTY_PATTERN U_INVALID_PROPERTY_PATTERN_3_4_
#undef U_INVALID_RBT_SYNTAX
#define U_INVALID_RBT_SYNTAX U_INVALID_RBT_SYNTAX_3_4_
#undef U_INVALID_STATE_ERROR
#define U_INVALID_STATE_ERROR U_INVALID_STATE_ERROR_3_4_
#undef U_INVALID_TABLE_FILE
#define U_INVALID_TABLE_FILE U_INVALID_TABLE_FILE_3_4_
#undef U_INVALID_TABLE_FORMAT
#define U_INVALID_TABLE_FORMAT U_INVALID_TABLE_FORMAT_3_4_
#undef U_INVARIANT_CONVERSION_ERROR
#define U_INVARIANT_CONVERSION_ERROR U_INVARIANT_CONVERSION_ERROR_3_4_
#undef U_JG_AIN
#define U_JG_AIN U_JG_AIN_3_4_
#undef U_JG_ALAPH
#define U_JG_ALAPH U_JG_ALAPH_3_4_
#undef U_JG_ALEF
#define U_JG_ALEF U_JG_ALEF_3_4_
#undef U_JG_BEH
#define U_JG_BEH U_JG_BEH_3_4_
#undef U_JG_BETH
#define U_JG_BETH U_JG_BETH_3_4_
#undef U_JG_BURUSHASKI_YEH_BARREE
#define U_JG_BURUSHASKI_YEH_BARREE U_JG_BURUSHASKI_YEH_BARREE_3_4_
#undef U_JG_COUNT
#define U_JG_COUNT U_JG_COUNT_3_4_
#undef U_JG_DAL
#define U_JG_DAL U_JG_DAL_3_4_
#undef U_JG_DALATH_RISH
#define U_JG_DALATH_RISH U_JG_DALATH_RISH_3_4_
#undef U_JG_E
#define U_JG_E U_JG_E_3_4_
#undef U_JG_FE
#define U_JG_FE U_JG_FE_3_4_
#undef U_JG_FEH
#define U_JG_FEH U_JG_FEH_3_4_
#undef U_JG_FINAL_SEMKATH
#define U_JG_FINAL_SEMKATH U_JG_FINAL_SEMKATH_3_4_
#undef U_JG_GAF
#define U_JG_GAF U_JG_GAF_3_4_
#undef U_JG_GAMAL
#define U_JG_GAMAL U_JG_GAMAL_3_4_
#undef U_JG_HAH
#define U_JG_HAH U_JG_HAH_3_4_
#undef U_JG_HAMZA_ON_HEH_GOAL
#define U_JG_HAMZA_ON_HEH_GOAL U_JG_HAMZA_ON_HEH_GOAL_3_4_
#undef U_JG_HE
#define U_JG_HE U_JG_HE_3_4_
#undef U_JG_HEH
#define U_JG_HEH U_JG_HEH_3_4_
#undef U_JG_HEH_GOAL
#define U_JG_HEH_GOAL U_JG_HEH_GOAL_3_4_
#undef U_JG_HETH
#define U_JG_HETH U_JG_HETH_3_4_
#undef U_JG_KAF
#define U_JG_KAF U_JG_KAF_3_4_
#undef U_JG_KAPH
#define U_JG_KAPH U_JG_KAPH_3_4_
#undef U_JG_KHAPH
#define U_JG_KHAPH U_JG_KHAPH_3_4_
#undef U_JG_KNOTTED_HEH
#define U_JG_KNOTTED_HEH U_JG_KNOTTED_HEH_3_4_
#undef U_JG_LAM
#define U_JG_LAM U_JG_LAM_3_4_
#undef U_JG_LAMADH
#define U_JG_LAMADH U_JG_LAMADH_3_4_
#undef U_JG_MEEM
#define U_JG_MEEM U_JG_MEEM_3_4_
#undef U_JG_MIM
#define U_JG_MIM U_JG_MIM_3_4_
#undef U_JG_NO_JOINING_GROUP
#define U_JG_NO_JOINING_GROUP U_JG_NO_JOINING_GROUP_3_4_
#undef U_JG_NOON
#define U_JG_NOON U_JG_NOON_3_4_
#undef U_JG_NUN
#define U_JG_NUN U_JG_NUN_3_4_
#undef U_JG_PE
#define U_JG_PE U_JG_PE_3_4_
#undef U_JG_QAF
#define U_JG_QAF U_JG_QAF_3_4_
#undef U_JG_QAPH
#define U_JG_QAPH U_JG_QAPH_3_4_
#undef U_JG_REH
#define U_JG_REH U_JG_REH_3_4_
#undef U_JG_REVERSED_PE
#define U_JG_REVERSED_PE U_JG_REVERSED_PE_3_4_
#undef U_JG_SAD
#define U_JG_SAD U_JG_SAD_3_4_
#undef U_JG_SADHE
#define U_JG_SADHE U_JG_SADHE_3_4_
#undef U_JG_SEEN
#define U_JG_SEEN U_JG_SEEN_3_4_
#undef U_JG_SEMKATH
#define U_JG_SEMKATH U_JG_SEMKATH_3_4_
#undef U_JG_SHIN
#define U_JG_SHIN U_JG_SHIN_3_4_
#undef U_JG_SWASH_KAF
#define U_JG_SWASH_KAF U_JG_SWASH_KAF_3_4_
#undef U_JG_SYRIAC_WAW
#define U_JG_SYRIAC_WAW U_JG_SYRIAC_WAW_3_4_
#undef U_JG_TAH
#define U_JG_TAH U_JG_TAH_3_4_
#undef U_JG_TAW
#define U_JG_TAW U_JG_TAW_3_4_
#undef U_JG_TEH_MARBUTA
#define U_JG_TEH_MARBUTA U_JG_TEH_MARBUTA_3_4_
#undef U_JG_TETH
#define U_JG_TETH U_JG_TETH_3_4_
#undef U_JG_WAW
#define U_JG_WAW U_JG_WAW_3_4_
#undef U_JG_YEH
#define U_JG_YEH U_JG_YEH_3_4_
#undef U_JG_YEH_BARREE
#define U_JG_YEH_BARREE U_JG_YEH_BARREE_3_4_
#undef U_JG_YEH_WITH_TAIL
#define U_JG_YEH_WITH_TAIL U_JG_YEH_WITH_TAIL_3_4_
#undef U_JG_YUDH
#define U_JG_YUDH U_JG_YUDH_3_4_
#undef U_JG_YUDH_HE
#define U_JG_YUDH_HE U_JG_YUDH_HE_3_4_
#undef U_JG_ZAIN
#define U_JG_ZAIN U_JG_ZAIN_3_4_
#undef U_JG_ZHAIN
#define U_JG_ZHAIN U_JG_ZHAIN_3_4_
#undef U_JT_COUNT
#define U_JT_COUNT U_JT_COUNT_3_4_
#undef U_JT_DUAL_JOINING
#define U_JT_DUAL_JOINING U_JT_DUAL_JOINING_3_4_
#undef U_JT_JOIN_CAUSING
#define U_JT_JOIN_CAUSING U_JT_JOIN_CAUSING_3_4_
#undef U_JT_LEFT_JOINING
#define U_JT_LEFT_JOINING U_JT_LEFT_JOINING_3_4_
#undef U_JT_NON_JOINING
#define U_JT_NON_JOINING U_JT_NON_JOINING_3_4_
#undef U_JT_RIGHT_JOINING
#define U_JT_RIGHT_JOINING U_JT_RIGHT_JOINING_3_4_
#undef U_JT_TRANSPARENT
#define U_JT_TRANSPARENT U_JT_TRANSPARENT_3_4_
#undef U_LB_ALPHABETIC
#define U_LB_ALPHABETIC U_LB_ALPHABETIC_3_4_
#undef U_LB_AMBIGUOUS
#define U_LB_AMBIGUOUS U_LB_AMBIGUOUS_3_4_
#undef U_LB_BREAK_AFTER
#define U_LB_BREAK_AFTER U_LB_BREAK_AFTER_3_4_
#undef U_LB_BREAK_BEFORE
#define U_LB_BREAK_BEFORE U_LB_BREAK_BEFORE_3_4_
#undef U_LB_BREAK_BOTH
#define U_LB_BREAK_BOTH U_LB_BREAK_BOTH_3_4_
#undef U_LB_BREAK_SYMBOLS
#define U_LB_BREAK_SYMBOLS U_LB_BREAK_SYMBOLS_3_4_
#undef U_LB_CARRIAGE_RETURN
#define U_LB_CARRIAGE_RETURN U_LB_CARRIAGE_RETURN_3_4_
#undef U_LB_CLOSE_PUNCTUATION
#define U_LB_CLOSE_PUNCTUATION U_LB_CLOSE_PUNCTUATION_3_4_
#undef U_LB_COMBINING_MARK
#define U_LB_COMBINING_MARK U_LB_COMBINING_MARK_3_4_
#undef U_LB_COMPLEX_CONTEXT
#define U_LB_COMPLEX_CONTEXT U_LB_COMPLEX_CONTEXT_3_4_
#undef U_LB_CONTINGENT_BREAK
#define U_LB_CONTINGENT_BREAK U_LB_CONTINGENT_BREAK_3_4_
#undef U_LB_COUNT
#define U_LB_COUNT U_LB_COUNT_3_4_
#undef U_LB_EXCLAMATION
#define U_LB_EXCLAMATION U_LB_EXCLAMATION_3_4_
#undef U_LB_GLUE
#define U_LB_GLUE U_LB_GLUE_3_4_
#undef U_LB_H2
#define U_LB_H2 U_LB_H2_3_4_
#undef U_LB_H3
#define U_LB_H3 U_LB_H3_3_4_
#undef U_LB_HYPHEN
#define U_LB_HYPHEN U_LB_HYPHEN_3_4_
#undef U_LB_IDEOGRAPHIC
#define U_LB_IDEOGRAPHIC U_LB_IDEOGRAPHIC_3_4_
#undef U_LB_INFIX_NUMERIC
#define U_LB_INFIX_NUMERIC U_LB_INFIX_NUMERIC_3_4_
#undef U_LB_INSEPARABLE
#define U_LB_INSEPARABLE U_LB_INSEPARABLE_3_4_
#undef U_LB_INSEPERABLE
#define U_LB_INSEPERABLE U_LB_INSEPERABLE_3_4_
#undef U_LB_JL
#define U_LB_JL U_LB_JL_3_4_
#undef U_LB_JT
#define U_LB_JT U_LB_JT_3_4_
#undef U_LB_JV
#define U_LB_JV U_LB_JV_3_4_
#undef U_LB_LINE_FEED
#define U_LB_LINE_FEED U_LB_LINE_FEED_3_4_
#undef U_LB_MANDATORY_BREAK
#define U_LB_MANDATORY_BREAK U_LB_MANDATORY_BREAK_3_4_
#undef U_LB_NEXT_LINE
#define U_LB_NEXT_LINE U_LB_NEXT_LINE_3_4_
#undef U_LB_NONSTARTER
#define U_LB_NONSTARTER U_LB_NONSTARTER_3_4_
#undef U_LB_NUMERIC
#define U_LB_NUMERIC U_LB_NUMERIC_3_4_
#undef U_LB_OPEN_PUNCTUATION
#define U_LB_OPEN_PUNCTUATION U_LB_OPEN_PUNCTUATION_3_4_
#undef U_LB_POSTFIX_NUMERIC
#define U_LB_POSTFIX_NUMERIC U_LB_POSTFIX_NUMERIC_3_4_
#undef U_LB_PREFIX_NUMERIC
#define U_LB_PREFIX_NUMERIC U_LB_PREFIX_NUMERIC_3_4_
#undef U_LB_QUOTATION
#define U_LB_QUOTATION U_LB_QUOTATION_3_4_
#undef U_LB_SPACE
#define U_LB_SPACE U_LB_SPACE_3_4_
#undef U_LB_SURROGATE
#define U_LB_SURROGATE U_LB_SURROGATE_3_4_
#undef U_LB_UNKNOWN
#define U_LB_UNKNOWN U_LB_UNKNOWN_3_4_
#undef U_LB_WORD_JOINER
#define U_LB_WORD_JOINER U_LB_WORD_JOINER_3_4_
#undef U_LB_ZWSPACE
#define U_LB_ZWSPACE U_LB_ZWSPACE_3_4_
#undef U_LEFT_TO_RIGHT
#define U_LEFT_TO_RIGHT U_LEFT_TO_RIGHT_3_4_
#undef U_LEFT_TO_RIGHT_EMBEDDING
#define U_LEFT_TO_RIGHT_EMBEDDING U_LEFT_TO_RIGHT_EMBEDDING_3_4_
#undef U_LEFT_TO_RIGHT_OVERRIDE
#define U_LEFT_TO_RIGHT_OVERRIDE U_LEFT_TO_RIGHT_OVERRIDE_3_4_
#undef U_LETTER_NUMBER
#define U_LETTER_NUMBER U_LETTER_NUMBER_3_4_
#undef U_LINE_SEPARATOR
#define U_LINE_SEPARATOR U_LINE_SEPARATOR_3_4_
#undef U_LONG_PROPERTY_NAME
#define U_LONG_PROPERTY_NAME U_LONG_PROPERTY_NAME_3_4_
#undef U_LOWERCASE_LETTER
#define U_LOWERCASE_LETTER U_LOWERCASE_LETTER_3_4_
#undef U_MALFORMED_EXPONENTIAL_PATTERN
#define U_MALFORMED_EXPONENTIAL_PATTERN U_MALFORMED_EXPONENTIAL_PATTERN_3_4_
#undef U_MALFORMED_PRAGMA
#define U_MALFORMED_PRAGMA U_MALFORMED_PRAGMA_3_4_
#undef U_MALFORMED_RULE
#define U_MALFORMED_RULE U_MALFORMED_RULE_3_4_
#undef U_MALFORMED_SET
#define U_MALFORMED_SET U_MALFORMED_SET_3_4_
#undef U_MALFORMED_SYMBOL_REFERENCE
#define U_MALFORMED_SYMBOL_REFERENCE U_MALFORMED_SYMBOL_REFERENCE_3_4_
#undef U_MALFORMED_UNICODE_ESCAPE
#define U_MALFORMED_UNICODE_ESCAPE U_MALFORMED_UNICODE_ESCAPE_3_4_
#undef U_MALFORMED_VARIABLE_DEFINITION
#define U_MALFORMED_VARIABLE_DEFINITION U_MALFORMED_VARIABLE_DEFINITION_3_4_
#undef U_MALFORMED_VARIABLE_REFERENCE
#define U_MALFORMED_VARIABLE_REFERENCE U_MALFORMED_VARIABLE_REFERENCE_3_4_
#undef U_MATH_SYMBOL
#define U_MATH_SYMBOL U_MATH_SYMBOL_3_4_
#undef U_MEMORY_ALLOCATION_ERROR
#define U_MEMORY_ALLOCATION_ERROR U_MEMORY_ALLOCATION_ERROR_3_4_
#undef U_MESSAGE_PARSE_ERROR
#define U_MESSAGE_PARSE_ERROR U_MESSAGE_PARSE_ERROR_3_4_
#undef U_MISMATCHED_SEGMENT_DELIMITERS
#define U_MISMATCHED_SEGMENT_DELIMITERS U_MISMATCHED_SEGMENT_DELIMITERS_3_4_
#undef U_MISPLACED_ANCHOR_START
#define U_MISPLACED_ANCHOR_START U_MISPLACED_ANCHOR_START_3_4_
#undef U_MISPLACED_COMPOUND_FILTER
#define U_MISPLACED_COMPOUND_FILTER U_MISPLACED_COMPOUND_FILTER_3_4_
#undef U_MISPLACED_CURSOR_OFFSET
#define U_MISPLACED_CURSOR_OFFSET U_MISPLACED_CURSOR_OFFSET_3_4_
#undef U_MISPLACED_QUANTIFIER
#define U_MISPLACED_QUANTIFIER U_MISPLACED_QUANTIFIER_3_4_
#undef U_MISSING_OPERATOR
#define U_MISSING_OPERATOR U_MISSING_OPERATOR_3_4_
#undef U_MISSING_RESOURCE_ERROR
#define U_MISSING_RESOURCE_ERROR U_MISSING_RESOURCE_ERROR_3_4_
#undef U_MISSING_SEGMENT_CLOSE
#define U_MISSING_SEGMENT_CLOSE U_MISSING_SEGMENT_CLOSE_3_4_
#undef U_MODIFIER_LETTER
#define U_MODIFIER_LETTER U_MODIFIER_LETTER_3_4_
#undef U_MODIFIER_SYMBOL
#define U_MODIFIER_SYMBOL U_MODIFIER_SYMBOL_3_4_
#undef U_MULTIPLE_ANTE_CONTEXTS
#define U_MULTIPLE_ANTE_CONTEXTS U_MULTIPLE_ANTE_CONTEXTS_3_4_
#undef U_MULTIPLE_COMPOUND_FILTERS
#define U_MULTIPLE_COMPOUND_FILTERS U_MULTIPLE_COMPOUND_FILTERS_3_4_
#undef U_MULTIPLE_CURSORS
#define U_MULTIPLE_CURSORS U_MULTIPLE_CURSORS_3_4_
#undef U_MULTIPLE_DECIMAL_SEPARATORS
#define U_MULTIPLE_DECIMAL_SEPARATORS U_MULTIPLE_DECIMAL_SEPARATORS_3_4_
#undef U_MULTIPLE_DECIMAL_SEPERATORS
#define U_MULTIPLE_DECIMAL_SEPERATORS U_MULTIPLE_DECIMAL_SEPERATORS_3_4_
#undef U_MULTIPLE_EXPONENTIAL_SYMBOLS
#define U_MULTIPLE_EXPONENTIAL_SYMBOLS U_MULTIPLE_EXPONENTIAL_SYMBOLS_3_4_
#undef U_MULTIPLE_PAD_SPECIFIERS
#define U_MULTIPLE_PAD_SPECIFIERS U_MULTIPLE_PAD_SPECIFIERS_3_4_
#undef U_MULTIPLE_PERCENT_SYMBOLS
#define U_MULTIPLE_PERCENT_SYMBOLS U_MULTIPLE_PERCENT_SYMBOLS_3_4_
#undef U_MULTIPLE_PERMILL_SYMBOLS
#define U_MULTIPLE_PERMILL_SYMBOLS U_MULTIPLE_PERMILL_SYMBOLS_3_4_
#undef U_MULTIPLE_POST_CONTEXTS
#define U_MULTIPLE_POST_CONTEXTS U_MULTIPLE_POST_CONTEXTS_3_4_
#undef U_NO_SPACE_AVAILABLE
#define U_NO_SPACE_AVAILABLE U_NO_SPACE_AVAILABLE_3_4_
#undef U_NO_WRITE_PERMISSION
#define U_NO_WRITE_PERMISSION U_NO_WRITE_PERMISSION_3_4_
#undef U_NON_SPACING_MARK
#define U_NON_SPACING_MARK U_NON_SPACING_MARK_3_4_
#undef U_NT_COUNT
#define U_NT_COUNT U_NT_COUNT_3_4_
#undef U_NT_DECIMAL
#define U_NT_DECIMAL U_NT_DECIMAL_3_4_
#undef U_NT_DIGIT
#define U_NT_DIGIT U_NT_DIGIT_3_4_
#undef U_NT_NONE
#define U_NT_NONE U_NT_NONE_3_4_
#undef U_NT_NUMERIC
#define U_NT_NUMERIC U_NT_NUMERIC_3_4_
#undef U_OTHER_LETTER
#define U_OTHER_LETTER U_OTHER_LETTER_3_4_
#undef U_OTHER_NEUTRAL
#define U_OTHER_NEUTRAL U_OTHER_NEUTRAL_3_4_
#undef U_OTHER_NUMBER
#define U_OTHER_NUMBER U_OTHER_NUMBER_3_4_
#undef U_OTHER_PUNCTUATION
#define U_OTHER_PUNCTUATION U_OTHER_PUNCTUATION_3_4_
#undef U_OTHER_SYMBOL
#define U_OTHER_SYMBOL U_OTHER_SYMBOL_3_4_
#undef U_PARAGRAPH_SEPARATOR
#define U_PARAGRAPH_SEPARATOR U_PARAGRAPH_SEPARATOR_3_4_
#undef U_PARSE_CONTEXT_LEN
#define U_PARSE_CONTEXT_LEN U_PARSE_CONTEXT_LEN_3_4_
#undef U_PARSE_ERROR
#define U_PARSE_ERROR U_PARSE_ERROR_3_4_
#undef U_PARSE_ERROR_LIMIT
#define U_PARSE_ERROR_LIMIT U_PARSE_ERROR_LIMIT_3_4_
#undef U_PARSE_ERROR_START
#define U_PARSE_ERROR_START U_PARSE_ERROR_START_3_4_
#undef U_PATTERN_SYNTAX_ERROR
#define U_PATTERN_SYNTAX_ERROR U_PATTERN_SYNTAX_ERROR_3_4_
#undef U_POP_DIRECTIONAL_FORMAT
#define U_POP_DIRECTIONAL_FORMAT U_POP_DIRECTIONAL_FORMAT_3_4_
#undef U_PRIMARY_TOO_LONG_ERROR
#define U_PRIMARY_TOO_LONG_ERROR U_PRIMARY_TOO_LONG_ERROR_3_4_
#undef U_PRIVATE_USE_CHAR
#define U_PRIVATE_USE_CHAR U_PRIVATE_USE_CHAR_3_4_
#undef U_PROPERTY_NAME_CHOICE_COUNT
#define U_PROPERTY_NAME_CHOICE_COUNT U_PROPERTY_NAME_CHOICE_COUNT_3_4_
#undef U_REGEX_BAD_ESCAPE_SEQUENCE
#define U_REGEX_BAD_ESCAPE_SEQUENCE U_REGEX_BAD_ESCAPE_SEQUENCE_3_4_
#undef U_REGEX_BAD_INTERVAL
#define U_REGEX_BAD_INTERVAL U_REGEX_BAD_INTERVAL_3_4_
#undef U_REGEX_ERROR_LIMIT
#define U_REGEX_ERROR_LIMIT U_REGEX_ERROR_LIMIT_3_4_
#undef U_REGEX_ERROR_START
#define U_REGEX_ERROR_START U_REGEX_ERROR_START_3_4_
#undef U_REGEX_INTERNAL_ERROR
#define U_REGEX_INTERNAL_ERROR U_REGEX_INTERNAL_ERROR_3_4_
#undef U_REGEX_INVALID_BACK_REF
#define U_REGEX_INVALID_BACK_REF U_REGEX_INVALID_BACK_REF_3_4_
#undef U_REGEX_INVALID_FLAG
#define U_REGEX_INVALID_FLAG U_REGEX_INVALID_FLAG_3_4_
#undef U_REGEX_INVALID_RANGE
#define U_REGEX_INVALID_RANGE U_REGEX_INVALID_RANGE_3_4_
#undef U_REGEX_INVALID_STATE
#define U_REGEX_INVALID_STATE U_REGEX_INVALID_STATE_3_4_
#undef U_REGEX_LOOK_BEHIND_LIMIT
#define U_REGEX_LOOK_BEHIND_LIMIT U_REGEX_LOOK_BEHIND_LIMIT_3_4_
#undef U_REGEX_MAX_LT_MIN
#define U_REGEX_MAX_LT_MIN U_REGEX_MAX_LT_MIN_3_4_
#undef U_REGEX_MISMATCHED_PAREN
#define U_REGEX_MISMATCHED_PAREN U_REGEX_MISMATCHED_PAREN_3_4_
#undef U_REGEX_MISSING_CLOSE_BRACKET
#define U_REGEX_MISSING_CLOSE_BRACKET U_REGEX_MISSING_CLOSE_BRACKET_3_4_
#undef U_REGEX_NUMBER_TOO_BIG
#define U_REGEX_NUMBER_TOO_BIG U_REGEX_NUMBER_TOO_BIG_3_4_
#undef U_REGEX_OCTAL_TOO_BIG
#define U_REGEX_OCTAL_TOO_BIG U_REGEX_OCTAL_TOO_BIG_3_4_
#undef U_REGEX_PROPERTY_SYNTAX
#define U_REGEX_PROPERTY_SYNTAX U_REGEX_PROPERTY_SYNTAX_3_4_
#undef U_REGEX_RULE_SYNTAX
#define U_REGEX_RULE_SYNTAX U_REGEX_RULE_SYNTAX_3_4_
#undef U_REGEX_SET_CONTAINS_STRING
#define U_REGEX_SET_CONTAINS_STRING U_REGEX_SET_CONTAINS_STRING_3_4_
#undef U_REGEX_STACK_OVERFLOW
#define U_REGEX_STACK_OVERFLOW U_REGEX_STACK_OVERFLOW_3_4_
#undef U_REGEX_STOPPED_BY_CALLER
#define U_REGEX_STOPPED_BY_CALLER U_REGEX_STOPPED_BY_CALLER_3_4_
#undef U_REGEX_TIME_OUT
#define U_REGEX_TIME_OUT U_REGEX_TIME_OUT_3_4_
#undef U_REGEX_UNIMPLEMENTED
#define U_REGEX_UNIMPLEMENTED U_REGEX_UNIMPLEMENTED_3_4_
#undef U_RESOURCE_TYPE_MISMATCH
#define U_RESOURCE_TYPE_MISMATCH U_RESOURCE_TYPE_MISMATCH_3_4_
#undef U_RIGHT_TO_LEFT
#define U_RIGHT_TO_LEFT U_RIGHT_TO_LEFT_3_4_
#undef U_RIGHT_TO_LEFT_ARABIC
#define U_RIGHT_TO_LEFT_ARABIC U_RIGHT_TO_LEFT_ARABIC_3_4_
#undef U_RIGHT_TO_LEFT_EMBEDDING
#define U_RIGHT_TO_LEFT_EMBEDDING U_RIGHT_TO_LEFT_EMBEDDING_3_4_
#undef U_RIGHT_TO_LEFT_OVERRIDE
#define U_RIGHT_TO_LEFT_OVERRIDE U_RIGHT_TO_LEFT_OVERRIDE_3_4_
#undef U_RULE_MASK_ERROR
#define U_RULE_MASK_ERROR U_RULE_MASK_ERROR_3_4_
#undef U_SAFECLONE_ALLOCATED_WARNING
#define U_SAFECLONE_ALLOCATED_WARNING U_SAFECLONE_ALLOCATED_WARNING_3_4_
#undef U_SB_ATERM
#define U_SB_ATERM U_SB_ATERM_3_4_
#undef U_SB_CLOSE
#define U_SB_CLOSE U_SB_CLOSE_3_4_
#undef U_SB_COUNT
#define U_SB_COUNT U_SB_COUNT_3_4_
#undef U_SB_CR
#define U_SB_CR U_SB_CR_3_4_
#undef U_SB_EXTEND
#define U_SB_EXTEND U_SB_EXTEND_3_4_
#undef U_SB_FORMAT
#define U_SB_FORMAT U_SB_FORMAT_3_4_
#undef U_SB_LF
#define U_SB_LF U_SB_LF_3_4_
#undef U_SB_LOWER
#define U_SB_LOWER U_SB_LOWER_3_4_
#undef U_SB_NUMERIC
#define U_SB_NUMERIC U_SB_NUMERIC_3_4_
#undef U_SB_OLETTER
#define U_SB_OLETTER U_SB_OLETTER_3_4_
#undef U_SB_OTHER
#define U_SB_OTHER U_SB_OTHER_3_4_
#undef U_SB_SCONTINUE
#define U_SB_SCONTINUE U_SB_SCONTINUE_3_4_
#undef U_SB_SEP
#define U_SB_SEP U_SB_SEP_3_4_
#undef U_SB_SP
#define U_SB_SP U_SB_SP_3_4_
#undef U_SB_STERM
#define U_SB_STERM U_SB_STERM_3_4_
#undef U_SB_UPPER
#define U_SB_UPPER U_SB_UPPER_3_4_
#undef U_SEGMENT_SEPARATOR
#define U_SEGMENT_SEPARATOR U_SEGMENT_SEPARATOR_3_4_
#undef U_SHORT_PROPERTY_NAME
#define U_SHORT_PROPERTY_NAME U_SHORT_PROPERTY_NAME_3_4_
#undef U_SORT_KEY_TOO_SHORT_WARNING
#define U_SORT_KEY_TOO_SHORT_WARNING U_SORT_KEY_TOO_SHORT_WARNING_3_4_
#undef U_SPACE_SEPARATOR
#define U_SPACE_SEPARATOR U_SPACE_SEPARATOR_3_4_
#undef U_STANDARD_ERROR_LIMIT
#define U_STANDARD_ERROR_LIMIT U_STANDARD_ERROR_LIMIT_3_4_
#undef U_START_PUNCTUATION
#define U_START_PUNCTUATION U_START_PUNCTUATION_3_4_
#undef U_STATE_OLD_WARNING
#define U_STATE_OLD_WARNING U_STATE_OLD_WARNING_3_4_
#undef U_STATE_TOO_OLD_ERROR
#define U_STATE_TOO_OLD_ERROR U_STATE_TOO_OLD_ERROR_3_4_
#undef U_STRING_NOT_TERMINATED_WARNING
#define U_STRING_NOT_TERMINATED_WARNING U_STRING_NOT_TERMINATED_WARNING_3_4_
#undef U_STRINGPREP_CHECK_BIDI_ERROR
#define U_STRINGPREP_CHECK_BIDI_ERROR U_STRINGPREP_CHECK_BIDI_ERROR_3_4_
#undef U_STRINGPREP_PROHIBITED_ERROR
#define U_STRINGPREP_PROHIBITED_ERROR U_STRINGPREP_PROHIBITED_ERROR_3_4_
#undef U_STRINGPREP_UNASSIGNED_ERROR
#define U_STRINGPREP_UNASSIGNED_ERROR U_STRINGPREP_UNASSIGNED_ERROR_3_4_
#undef U_SURROGATE
#define U_SURROGATE U_SURROGATE_3_4_
#undef U_TITLECASE_LETTER
#define U_TITLECASE_LETTER U_TITLECASE_LETTER_3_4_
#undef U_TOO_MANY_ALIASES_ERROR
#define U_TOO_MANY_ALIASES_ERROR U_TOO_MANY_ALIASES_ERROR_3_4_
#undef U_TRAILING_BACKSLASH
#define U_TRAILING_BACKSLASH U_TRAILING_BACKSLASH_3_4_
#undef U_TRUNCATED_CHAR_FOUND
#define U_TRUNCATED_CHAR_FOUND U_TRUNCATED_CHAR_FOUND_3_4_
#undef U_UNASSIGNED
#define U_UNASSIGNED U_UNASSIGNED_3_4_
#undef U_UNCLOSED_SEGMENT
#define U_UNCLOSED_SEGMENT U_UNCLOSED_SEGMENT_3_4_
#undef U_UNDEFINED_KEYWORD
#define U_UNDEFINED_KEYWORD U_UNDEFINED_KEYWORD_3_4_
#undef U_UNDEFINED_SEGMENT_REFERENCE
#define U_UNDEFINED_SEGMENT_REFERENCE U_UNDEFINED_SEGMENT_REFERENCE_3_4_
#undef U_UNDEFINED_VARIABLE
#define U_UNDEFINED_VARIABLE U_UNDEFINED_VARIABLE_3_4_
#undef U_UNEXPECTED_TOKEN
#define U_UNEXPECTED_TOKEN U_UNEXPECTED_TOKEN_3_4_
#undef U_UNICODE_10_CHAR_NAME
#define U_UNICODE_10_CHAR_NAME U_UNICODE_10_CHAR_NAME_3_4_
#undef U_UNICODE_CHAR_NAME
#define U_UNICODE_CHAR_NAME U_UNICODE_CHAR_NAME_3_4_
#undef U_UNMATCHED_BRACES
#define U_UNMATCHED_BRACES U_UNMATCHED_BRACES_3_4_
#undef U_UNQUOTED_SPECIAL
#define U_UNQUOTED_SPECIAL U_UNQUOTED_SPECIAL_3_4_
#undef U_UNSUPPORTED_ATTRIBUTE
#define U_UNSUPPORTED_ATTRIBUTE U_UNSUPPORTED_ATTRIBUTE_3_4_
#undef U_UNSUPPORTED_ERROR
#define U_UNSUPPORTED_ERROR U_UNSUPPORTED_ERROR_3_4_
#undef U_UNSUPPORTED_ESCAPE_SEQUENCE
#define U_UNSUPPORTED_ESCAPE_SEQUENCE U_UNSUPPORTED_ESCAPE_SEQUENCE_3_4_
#undef U_UNSUPPORTED_PROPERTY
#define U_UNSUPPORTED_PROPERTY U_UNSUPPORTED_PROPERTY_3_4_
#undef U_UNTERMINATED_QUOTE
#define U_UNTERMINATED_QUOTE U_UNTERMINATED_QUOTE_3_4_
#undef U_UPPERCASE_LETTER
#define U_UPPERCASE_LETTER U_UPPERCASE_LETTER_3_4_
#undef U_USELESS_COLLATOR_ERROR
#define U_USELESS_COLLATOR_ERROR U_USELESS_COLLATOR_ERROR_3_4_
#undef U_USING_DEFAULT_WARNING
#define U_USING_DEFAULT_WARNING U_USING_DEFAULT_WARNING_3_4_
#undef U_USING_FALLBACK_WARNING
#define U_USING_FALLBACK_WARNING U_USING_FALLBACK_WARNING_3_4_
#undef U_VARIABLE_RANGE_EXHAUSTED
#define U_VARIABLE_RANGE_EXHAUSTED U_VARIABLE_RANGE_EXHAUSTED_3_4_
#undef U_VARIABLE_RANGE_OVERLAP
#define U_VARIABLE_RANGE_OVERLAP U_VARIABLE_RANGE_OVERLAP_3_4_
#undef U_WB_ALETTER
#define U_WB_ALETTER U_WB_ALETTER_3_4_
#undef U_WB_COUNT
#define U_WB_COUNT U_WB_COUNT_3_4_
#undef U_WB_CR
#define U_WB_CR U_WB_CR_3_4_
#undef U_WB_EXTEND
#define U_WB_EXTEND U_WB_EXTEND_3_4_
#undef U_WB_EXTENDNUMLET
#define U_WB_EXTENDNUMLET U_WB_EXTENDNUMLET_3_4_
#undef U_WB_FORMAT
#define U_WB_FORMAT U_WB_FORMAT_3_4_
#undef U_WB_KATAKANA
#define U_WB_KATAKANA U_WB_KATAKANA_3_4_
#undef U_WB_LF
#define U_WB_LF U_WB_LF_3_4_
#undef U_WB_MIDLETTER
#define U_WB_MIDLETTER U_WB_MIDLETTER_3_4_
#undef U_WB_MIDNUM
#define U_WB_MIDNUM U_WB_MIDNUM_3_4_
#undef U_WB_MIDNUMLET
#define U_WB_MIDNUMLET U_WB_MIDNUMLET_3_4_
#undef U_WB_NEWLINE
#define U_WB_NEWLINE U_WB_NEWLINE_3_4_
#undef U_WB_NUMERIC
#define U_WB_NUMERIC U_WB_NUMERIC_3_4_
#undef U_WB_OTHER
#define U_WB_OTHER U_WB_OTHER_3_4_
#undef U_WHITE_SPACE_NEUTRAL
#define U_WHITE_SPACE_NEUTRAL U_WHITE_SPACE_NEUTRAL_3_4_
#undef U_ZERO_ERROR
#define U_ZERO_ERROR U_ZERO_ERROR_3_4_
#undef UAcceptResult
#define UAcceptResult UAcceptResult_3_4_
#undef UBLOCK_AEGEAN_NUMBERS
#define UBLOCK_AEGEAN_NUMBERS UBLOCK_AEGEAN_NUMBERS_3_4_
#undef UBLOCK_ALPHABETIC_PRESENTATION_FORMS
#define UBLOCK_ALPHABETIC_PRESENTATION_FORMS UBLOCK_ALPHABETIC_PRESENTATION_FORMS_3_4_
#undef UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION
#define UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION_3_4_
#undef UBLOCK_ANCIENT_GREEK_NUMBERS
#define UBLOCK_ANCIENT_GREEK_NUMBERS UBLOCK_ANCIENT_GREEK_NUMBERS_3_4_
#undef UBLOCK_ANCIENT_SYMBOLS
#define UBLOCK_ANCIENT_SYMBOLS UBLOCK_ANCIENT_SYMBOLS_3_4_
#undef UBLOCK_ARABIC
#define UBLOCK_ARABIC UBLOCK_ARABIC_3_4_
#undef UBLOCK_ARABIC_PRESENTATION_FORMS_A
#define UBLOCK_ARABIC_PRESENTATION_FORMS_A UBLOCK_ARABIC_PRESENTATION_FORMS_A_3_4_
#undef UBLOCK_ARABIC_PRESENTATION_FORMS_B
#define UBLOCK_ARABIC_PRESENTATION_FORMS_B UBLOCK_ARABIC_PRESENTATION_FORMS_B_3_4_
#undef UBLOCK_ARABIC_SUPPLEMENT
#define UBLOCK_ARABIC_SUPPLEMENT UBLOCK_ARABIC_SUPPLEMENT_3_4_
#undef UBLOCK_ARMENIAN
#define UBLOCK_ARMENIAN UBLOCK_ARMENIAN_3_4_
#undef UBLOCK_ARROWS
#define UBLOCK_ARROWS UBLOCK_ARROWS_3_4_
#undef UBLOCK_BALINESE
#define UBLOCK_BALINESE UBLOCK_BALINESE_3_4_
#undef UBLOCK_BASIC_LATIN
#define UBLOCK_BASIC_LATIN UBLOCK_BASIC_LATIN_3_4_
#undef UBLOCK_BENGALI
#define UBLOCK_BENGALI UBLOCK_BENGALI_3_4_
#undef UBLOCK_BLOCK_ELEMENTS
#define UBLOCK_BLOCK_ELEMENTS UBLOCK_BLOCK_ELEMENTS_3_4_
#undef UBLOCK_BOPOMOFO
#define UBLOCK_BOPOMOFO UBLOCK_BOPOMOFO_3_4_
#undef UBLOCK_BOPOMOFO_EXTENDED
#define UBLOCK_BOPOMOFO_EXTENDED UBLOCK_BOPOMOFO_EXTENDED_3_4_
#undef UBLOCK_BOX_DRAWING
#define UBLOCK_BOX_DRAWING UBLOCK_BOX_DRAWING_3_4_
#undef UBLOCK_BRAILLE_PATTERNS
#define UBLOCK_BRAILLE_PATTERNS UBLOCK_BRAILLE_PATTERNS_3_4_
#undef UBLOCK_BUGINESE
#define UBLOCK_BUGINESE UBLOCK_BUGINESE_3_4_
#undef UBLOCK_BUHID
#define UBLOCK_BUHID UBLOCK_BUHID_3_4_
#undef UBLOCK_BYZANTINE_MUSICAL_SYMBOLS
#define UBLOCK_BYZANTINE_MUSICAL_SYMBOLS UBLOCK_BYZANTINE_MUSICAL_SYMBOLS_3_4_
#undef UBLOCK_CARIAN
#define UBLOCK_CARIAN UBLOCK_CARIAN_3_4_
#undef UBLOCK_CHAM
#define UBLOCK_CHAM UBLOCK_CHAM_3_4_
#undef UBLOCK_CHEROKEE
#define UBLOCK_CHEROKEE UBLOCK_CHEROKEE_3_4_
#undef UBLOCK_CJK_COMPATIBILITY
#define UBLOCK_CJK_COMPATIBILITY UBLOCK_CJK_COMPATIBILITY_3_4_
#undef UBLOCK_CJK_COMPATIBILITY_FORMS
#define UBLOCK_CJK_COMPATIBILITY_FORMS UBLOCK_CJK_COMPATIBILITY_FORMS_3_4_
#undef UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS
#define UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_3_4_
#undef UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT
#define UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT_3_4_
#undef UBLOCK_CJK_RADICALS_SUPPLEMENT
#define UBLOCK_CJK_RADICALS_SUPPLEMENT UBLOCK_CJK_RADICALS_SUPPLEMENT_3_4_
#undef UBLOCK_CJK_STROKES
#define UBLOCK_CJK_STROKES UBLOCK_CJK_STROKES_3_4_
#undef UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION
#define UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION_3_4_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS UBLOCK_CJK_UNIFIED_IDEOGRAPHS_3_4_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A_3_4_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_3_4_
#undef UBLOCK_COMBINING_DIACRITICAL_MARKS
#define UBLOCK_COMBINING_DIACRITICAL_MARKS UBLOCK_COMBINING_DIACRITICAL_MARKS_3_4_
#undef UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT
#define UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT_3_4_
#undef UBLOCK_COMBINING_HALF_MARKS
#define UBLOCK_COMBINING_HALF_MARKS UBLOCK_COMBINING_HALF_MARKS_3_4_
#undef UBLOCK_COMBINING_MARKS_FOR_SYMBOLS
#define UBLOCK_COMBINING_MARKS_FOR_SYMBOLS UBLOCK_COMBINING_MARKS_FOR_SYMBOLS_3_4_
#undef UBLOCK_CONTROL_PICTURES
#define UBLOCK_CONTROL_PICTURES UBLOCK_CONTROL_PICTURES_3_4_
#undef UBLOCK_COPTIC
#define UBLOCK_COPTIC UBLOCK_COPTIC_3_4_
#undef UBLOCK_COUNT
#define UBLOCK_COUNT UBLOCK_COUNT_3_4_
#undef UBLOCK_COUNTING_ROD_NUMERALS
#define UBLOCK_COUNTING_ROD_NUMERALS UBLOCK_COUNTING_ROD_NUMERALS_3_4_
#undef UBLOCK_CUNEIFORM
#define UBLOCK_CUNEIFORM UBLOCK_CUNEIFORM_3_4_
#undef UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION
#define UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION_3_4_
#undef UBLOCK_CURRENCY_SYMBOLS
#define UBLOCK_CURRENCY_SYMBOLS UBLOCK_CURRENCY_SYMBOLS_3_4_
#undef UBLOCK_CYPRIOT_SYLLABARY
#define UBLOCK_CYPRIOT_SYLLABARY UBLOCK_CYPRIOT_SYLLABARY_3_4_
#undef UBLOCK_CYRILLIC
#define UBLOCK_CYRILLIC UBLOCK_CYRILLIC_3_4_
#undef UBLOCK_CYRILLIC_EXTENDED_A
#define UBLOCK_CYRILLIC_EXTENDED_A UBLOCK_CYRILLIC_EXTENDED_A_3_4_
#undef UBLOCK_CYRILLIC_EXTENDED_B
#define UBLOCK_CYRILLIC_EXTENDED_B UBLOCK_CYRILLIC_EXTENDED_B_3_4_
#undef UBLOCK_CYRILLIC_SUPPLEMENT
#define UBLOCK_CYRILLIC_SUPPLEMENT UBLOCK_CYRILLIC_SUPPLEMENT_3_4_
#undef UBLOCK_CYRILLIC_SUPPLEMENTARY
#define UBLOCK_CYRILLIC_SUPPLEMENTARY UBLOCK_CYRILLIC_SUPPLEMENTARY_3_4_
#undef UBLOCK_DESERET
#define UBLOCK_DESERET UBLOCK_DESERET_3_4_
#undef UBLOCK_DEVANAGARI
#define UBLOCK_DEVANAGARI UBLOCK_DEVANAGARI_3_4_
#undef UBLOCK_DINGBATS
#define UBLOCK_DINGBATS UBLOCK_DINGBATS_3_4_
#undef UBLOCK_DOMINO_TILES
#define UBLOCK_DOMINO_TILES UBLOCK_DOMINO_TILES_3_4_
#undef UBLOCK_ENCLOSED_ALPHANUMERICS
#define UBLOCK_ENCLOSED_ALPHANUMERICS UBLOCK_ENCLOSED_ALPHANUMERICS_3_4_
#undef UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS
#define UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS_3_4_
#undef UBLOCK_ETHIOPIC
#define UBLOCK_ETHIOPIC UBLOCK_ETHIOPIC_3_4_
#undef UBLOCK_ETHIOPIC_EXTENDED
#define UBLOCK_ETHIOPIC_EXTENDED UBLOCK_ETHIOPIC_EXTENDED_3_4_
#undef UBLOCK_ETHIOPIC_SUPPLEMENT
#define UBLOCK_ETHIOPIC_SUPPLEMENT UBLOCK_ETHIOPIC_SUPPLEMENT_3_4_
#undef UBLOCK_GENERAL_PUNCTUATION
#define UBLOCK_GENERAL_PUNCTUATION UBLOCK_GENERAL_PUNCTUATION_3_4_
#undef UBLOCK_GEOMETRIC_SHAPES
#define UBLOCK_GEOMETRIC_SHAPES UBLOCK_GEOMETRIC_SHAPES_3_4_
#undef UBLOCK_GEORGIAN
#define UBLOCK_GEORGIAN UBLOCK_GEORGIAN_3_4_
#undef UBLOCK_GEORGIAN_SUPPLEMENT
#define UBLOCK_GEORGIAN_SUPPLEMENT UBLOCK_GEORGIAN_SUPPLEMENT_3_4_
#undef UBLOCK_GLAGOLITIC
#define UBLOCK_GLAGOLITIC UBLOCK_GLAGOLITIC_3_4_
#undef UBLOCK_GOTHIC
#define UBLOCK_GOTHIC UBLOCK_GOTHIC_3_4_
#undef UBLOCK_GREEK
#define UBLOCK_GREEK UBLOCK_GREEK_3_4_
#undef UBLOCK_GREEK_EXTENDED
#define UBLOCK_GREEK_EXTENDED UBLOCK_GREEK_EXTENDED_3_4_
#undef UBLOCK_GUJARATI
#define UBLOCK_GUJARATI UBLOCK_GUJARATI_3_4_
#undef UBLOCK_GURMUKHI
#define UBLOCK_GURMUKHI UBLOCK_GURMUKHI_3_4_
#undef UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS
#define UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS_3_4_
#undef UBLOCK_HANGUL_COMPATIBILITY_JAMO
#define UBLOCK_HANGUL_COMPATIBILITY_JAMO UBLOCK_HANGUL_COMPATIBILITY_JAMO_3_4_
#undef UBLOCK_HANGUL_JAMO
#define UBLOCK_HANGUL_JAMO UBLOCK_HANGUL_JAMO_3_4_
#undef UBLOCK_HANGUL_SYLLABLES
#define UBLOCK_HANGUL_SYLLABLES UBLOCK_HANGUL_SYLLABLES_3_4_
#undef UBLOCK_HANUNOO
#define UBLOCK_HANUNOO UBLOCK_HANUNOO_3_4_
#undef UBLOCK_HEBREW
#define UBLOCK_HEBREW UBLOCK_HEBREW_3_4_
#undef UBLOCK_HIGH_PRIVATE_USE_SURROGATES
#define UBLOCK_HIGH_PRIVATE_USE_SURROGATES UBLOCK_HIGH_PRIVATE_USE_SURROGATES_3_4_
#undef UBLOCK_HIGH_SURROGATES
#define UBLOCK_HIGH_SURROGATES UBLOCK_HIGH_SURROGATES_3_4_
#undef UBLOCK_HIRAGANA
#define UBLOCK_HIRAGANA UBLOCK_HIRAGANA_3_4_
#undef UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS
#define UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS_3_4_
#undef UBLOCK_INVALID_CODE
#define UBLOCK_INVALID_CODE UBLOCK_INVALID_CODE_3_4_
#undef UBLOCK_IPA_EXTENSIONS
#define UBLOCK_IPA_EXTENSIONS UBLOCK_IPA_EXTENSIONS_3_4_
#undef UBLOCK_KANBUN
#define UBLOCK_KANBUN UBLOCK_KANBUN_3_4_
#undef UBLOCK_KANGXI_RADICALS
#define UBLOCK_KANGXI_RADICALS UBLOCK_KANGXI_RADICALS_3_4_
#undef UBLOCK_KANNADA
#define UBLOCK_KANNADA UBLOCK_KANNADA_3_4_
#undef UBLOCK_KATAKANA
#define UBLOCK_KATAKANA UBLOCK_KATAKANA_3_4_
#undef UBLOCK_KATAKANA_PHONETIC_EXTENSIONS
#define UBLOCK_KATAKANA_PHONETIC_EXTENSIONS UBLOCK_KATAKANA_PHONETIC_EXTENSIONS_3_4_
#undef UBLOCK_KAYAH_LI
#define UBLOCK_KAYAH_LI UBLOCK_KAYAH_LI_3_4_
#undef UBLOCK_KHAROSHTHI
#define UBLOCK_KHAROSHTHI UBLOCK_KHAROSHTHI_3_4_
#undef UBLOCK_KHMER
#define UBLOCK_KHMER UBLOCK_KHMER_3_4_
#undef UBLOCK_KHMER_SYMBOLS
#define UBLOCK_KHMER_SYMBOLS UBLOCK_KHMER_SYMBOLS_3_4_
#undef UBLOCK_LAO
#define UBLOCK_LAO UBLOCK_LAO_3_4_
#undef UBLOCK_LATIN_1_SUPPLEMENT
#define UBLOCK_LATIN_1_SUPPLEMENT UBLOCK_LATIN_1_SUPPLEMENT_3_4_
#undef UBLOCK_LATIN_EXTENDED_A
#define UBLOCK_LATIN_EXTENDED_A UBLOCK_LATIN_EXTENDED_A_3_4_
#undef UBLOCK_LATIN_EXTENDED_ADDITIONAL
#define UBLOCK_LATIN_EXTENDED_ADDITIONAL UBLOCK_LATIN_EXTENDED_ADDITIONAL_3_4_
#undef UBLOCK_LATIN_EXTENDED_B
#define UBLOCK_LATIN_EXTENDED_B UBLOCK_LATIN_EXTENDED_B_3_4_
#undef UBLOCK_LATIN_EXTENDED_C
#define UBLOCK_LATIN_EXTENDED_C UBLOCK_LATIN_EXTENDED_C_3_4_
#undef UBLOCK_LATIN_EXTENDED_D
#define UBLOCK_LATIN_EXTENDED_D UBLOCK_LATIN_EXTENDED_D_3_4_
#undef UBLOCK_LEPCHA
#define UBLOCK_LEPCHA UBLOCK_LEPCHA_3_4_
#undef UBLOCK_LETTERLIKE_SYMBOLS
#define UBLOCK_LETTERLIKE_SYMBOLS UBLOCK_LETTERLIKE_SYMBOLS_3_4_
#undef UBLOCK_LIMBU
#define UBLOCK_LIMBU UBLOCK_LIMBU_3_4_
#undef UBLOCK_LINEAR_B_IDEOGRAMS
#define UBLOCK_LINEAR_B_IDEOGRAMS UBLOCK_LINEAR_B_IDEOGRAMS_3_4_
#undef UBLOCK_LINEAR_B_SYLLABARY
#define UBLOCK_LINEAR_B_SYLLABARY UBLOCK_LINEAR_B_SYLLABARY_3_4_
#undef UBLOCK_LOW_SURROGATES
#define UBLOCK_LOW_SURROGATES UBLOCK_LOW_SURROGATES_3_4_
#undef UBLOCK_LYCIAN
#define UBLOCK_LYCIAN UBLOCK_LYCIAN_3_4_
#undef UBLOCK_LYDIAN
#define UBLOCK_LYDIAN UBLOCK_LYDIAN_3_4_
#undef UBLOCK_MAHJONG_TILES
#define UBLOCK_MAHJONG_TILES UBLOCK_MAHJONG_TILES_3_4_
#undef UBLOCK_MALAYALAM
#define UBLOCK_MALAYALAM UBLOCK_MALAYALAM_3_4_
#undef UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS
#define UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS_3_4_
#undef UBLOCK_MATHEMATICAL_OPERATORS
#define UBLOCK_MATHEMATICAL_OPERATORS UBLOCK_MATHEMATICAL_OPERATORS_3_4_
#undef UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A
#define UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A_3_4_
#undef UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B
#define UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B_3_4_
#undef UBLOCK_MISCELLANEOUS_SYMBOLS
#define UBLOCK_MISCELLANEOUS_SYMBOLS UBLOCK_MISCELLANEOUS_SYMBOLS_3_4_
#undef UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS
#define UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS_3_4_
#undef UBLOCK_MISCELLANEOUS_TECHNICAL
#define UBLOCK_MISCELLANEOUS_TECHNICAL UBLOCK_MISCELLANEOUS_TECHNICAL_3_4_
#undef UBLOCK_MODIFIER_TONE_LETTERS
#define UBLOCK_MODIFIER_TONE_LETTERS UBLOCK_MODIFIER_TONE_LETTERS_3_4_
#undef UBLOCK_MONGOLIAN
#define UBLOCK_MONGOLIAN UBLOCK_MONGOLIAN_3_4_
#undef UBLOCK_MUSICAL_SYMBOLS
#define UBLOCK_MUSICAL_SYMBOLS UBLOCK_MUSICAL_SYMBOLS_3_4_
#undef UBLOCK_MYANMAR
#define UBLOCK_MYANMAR UBLOCK_MYANMAR_3_4_
#undef UBLOCK_NEW_TAI_LUE
#define UBLOCK_NEW_TAI_LUE UBLOCK_NEW_TAI_LUE_3_4_
#undef UBLOCK_NKO
#define UBLOCK_NKO UBLOCK_NKO_3_4_
#undef UBLOCK_NO_BLOCK
#define UBLOCK_NO_BLOCK UBLOCK_NO_BLOCK_3_4_
#undef UBLOCK_NUMBER_FORMS
#define UBLOCK_NUMBER_FORMS UBLOCK_NUMBER_FORMS_3_4_
#undef UBLOCK_OGHAM
#define UBLOCK_OGHAM UBLOCK_OGHAM_3_4_
#undef UBLOCK_OL_CHIKI
#define UBLOCK_OL_CHIKI UBLOCK_OL_CHIKI_3_4_
#undef UBLOCK_OLD_ITALIC
#define UBLOCK_OLD_ITALIC UBLOCK_OLD_ITALIC_3_4_
#undef UBLOCK_OLD_PERSIAN
#define UBLOCK_OLD_PERSIAN UBLOCK_OLD_PERSIAN_3_4_
#undef UBLOCK_OPTICAL_CHARACTER_RECOGNITION
#define UBLOCK_OPTICAL_CHARACTER_RECOGNITION UBLOCK_OPTICAL_CHARACTER_RECOGNITION_3_4_
#undef UBLOCK_ORIYA
#define UBLOCK_ORIYA UBLOCK_ORIYA_3_4_
#undef UBLOCK_OSMANYA
#define UBLOCK_OSMANYA UBLOCK_OSMANYA_3_4_
#undef UBLOCK_PHAGS_PA
#define UBLOCK_PHAGS_PA UBLOCK_PHAGS_PA_3_4_
#undef UBLOCK_PHAISTOS_DISC
#define UBLOCK_PHAISTOS_DISC UBLOCK_PHAISTOS_DISC_3_4_
#undef UBLOCK_PHOENICIAN
#define UBLOCK_PHOENICIAN UBLOCK_PHOENICIAN_3_4_
#undef UBLOCK_PHONETIC_EXTENSIONS
#define UBLOCK_PHONETIC_EXTENSIONS UBLOCK_PHONETIC_EXTENSIONS_3_4_
#undef UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT
#define UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT_3_4_
#undef UBLOCK_PRIVATE_USE
#define UBLOCK_PRIVATE_USE UBLOCK_PRIVATE_USE_3_4_
#undef UBLOCK_PRIVATE_USE_AREA
#define UBLOCK_PRIVATE_USE_AREA UBLOCK_PRIVATE_USE_AREA_3_4_
#undef UBLOCK_REJANG
#define UBLOCK_REJANG UBLOCK_REJANG_3_4_
#undef UBLOCK_RUNIC
#define UBLOCK_RUNIC UBLOCK_RUNIC_3_4_
#undef UBLOCK_SAURASHTRA
#define UBLOCK_SAURASHTRA UBLOCK_SAURASHTRA_3_4_
#undef UBLOCK_SHAVIAN
#define UBLOCK_SHAVIAN UBLOCK_SHAVIAN_3_4_
#undef UBLOCK_SINHALA
#define UBLOCK_SINHALA UBLOCK_SINHALA_3_4_
#undef UBLOCK_SMALL_FORM_VARIANTS
#define UBLOCK_SMALL_FORM_VARIANTS UBLOCK_SMALL_FORM_VARIANTS_3_4_
#undef UBLOCK_SPACING_MODIFIER_LETTERS
#define UBLOCK_SPACING_MODIFIER_LETTERS UBLOCK_SPACING_MODIFIER_LETTERS_3_4_
#undef UBLOCK_SPECIALS
#define UBLOCK_SPECIALS UBLOCK_SPECIALS_3_4_
#undef UBLOCK_SUNDANESE
#define UBLOCK_SUNDANESE UBLOCK_SUNDANESE_3_4_
#undef UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS
#define UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS_3_4_
#undef UBLOCK_SUPPLEMENTAL_ARROWS_A
#define UBLOCK_SUPPLEMENTAL_ARROWS_A UBLOCK_SUPPLEMENTAL_ARROWS_A_3_4_
#undef UBLOCK_SUPPLEMENTAL_ARROWS_B
#define UBLOCK_SUPPLEMENTAL_ARROWS_B UBLOCK_SUPPLEMENTAL_ARROWS_B_3_4_
#undef UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS
#define UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS_3_4_
#undef UBLOCK_SUPPLEMENTAL_PUNCTUATION
#define UBLOCK_SUPPLEMENTAL_PUNCTUATION UBLOCK_SUPPLEMENTAL_PUNCTUATION_3_4_
#undef UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A
#define UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A_3_4_
#undef UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B
#define UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B_3_4_
#undef UBLOCK_SYLOTI_NAGRI
#define UBLOCK_SYLOTI_NAGRI UBLOCK_SYLOTI_NAGRI_3_4_
#undef UBLOCK_SYRIAC
#define UBLOCK_SYRIAC UBLOCK_SYRIAC_3_4_
#undef UBLOCK_TAGALOG
#define UBLOCK_TAGALOG UBLOCK_TAGALOG_3_4_
#undef UBLOCK_TAGBANWA
#define UBLOCK_TAGBANWA UBLOCK_TAGBANWA_3_4_
#undef UBLOCK_TAGS
#define UBLOCK_TAGS UBLOCK_TAGS_3_4_
#undef UBLOCK_TAI_LE
#define UBLOCK_TAI_LE UBLOCK_TAI_LE_3_4_
#undef UBLOCK_TAI_XUAN_JING_SYMBOLS
#define UBLOCK_TAI_XUAN_JING_SYMBOLS UBLOCK_TAI_XUAN_JING_SYMBOLS_3_4_
#undef UBLOCK_TAMIL
#define UBLOCK_TAMIL UBLOCK_TAMIL_3_4_
#undef UBLOCK_TELUGU
#define UBLOCK_TELUGU UBLOCK_TELUGU_3_4_
#undef UBLOCK_THAANA
#define UBLOCK_THAANA UBLOCK_THAANA_3_4_
#undef UBLOCK_THAI
#define UBLOCK_THAI UBLOCK_THAI_3_4_
#undef UBLOCK_TIBETAN
#define UBLOCK_TIBETAN UBLOCK_TIBETAN_3_4_
#undef UBLOCK_TIFINAGH
#define UBLOCK_TIFINAGH UBLOCK_TIFINAGH_3_4_
#undef UBLOCK_UGARITIC
#define UBLOCK_UGARITIC UBLOCK_UGARITIC_3_4_
#undef UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS
#define UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_3_4_
#undef UBLOCK_VAI
#define UBLOCK_VAI UBLOCK_VAI_3_4_
#undef UBLOCK_VARIATION_SELECTORS
#define UBLOCK_VARIATION_SELECTORS UBLOCK_VARIATION_SELECTORS_3_4_
#undef UBLOCK_VARIATION_SELECTORS_SUPPLEMENT
#define UBLOCK_VARIATION_SELECTORS_SUPPLEMENT UBLOCK_VARIATION_SELECTORS_SUPPLEMENT_3_4_
#undef UBLOCK_VERTICAL_FORMS
#define UBLOCK_VERTICAL_FORMS UBLOCK_VERTICAL_FORMS_3_4_
#undef UBLOCK_YI_RADICALS
#define UBLOCK_YI_RADICALS UBLOCK_YI_RADICALS_3_4_
#undef UBLOCK_YI_SYLLABLES
#define UBLOCK_YI_SYLLABLES UBLOCK_YI_SYLLABLES_3_4_
#undef UBLOCK_YIJING_HEXAGRAM_SYMBOLS
#define UBLOCK_YIJING_HEXAGRAM_SYMBOLS UBLOCK_YIJING_HEXAGRAM_SYMBOLS_3_4_
#undef UBlockCode
#define UBlockCode UBlockCode_3_4_
#undef UCHAR_AGE
#define UCHAR_AGE UCHAR_AGE_3_4_
#undef UCHAR_ALPHABETIC
#define UCHAR_ALPHABETIC UCHAR_ALPHABETIC_3_4_
#undef UCHAR_ASCII_HEX_DIGIT
#define UCHAR_ASCII_HEX_DIGIT UCHAR_ASCII_HEX_DIGIT_3_4_
#undef UCHAR_BIDI_CLASS
#define UCHAR_BIDI_CLASS UCHAR_BIDI_CLASS_3_4_
#undef UCHAR_BIDI_CONTROL
#define UCHAR_BIDI_CONTROL UCHAR_BIDI_CONTROL_3_4_
#undef UCHAR_BIDI_MIRRORED
#define UCHAR_BIDI_MIRRORED UCHAR_BIDI_MIRRORED_3_4_
#undef UCHAR_BIDI_MIRRORING_GLYPH
#define UCHAR_BIDI_MIRRORING_GLYPH UCHAR_BIDI_MIRRORING_GLYPH_3_4_
#undef UCHAR_BINARY_LIMIT
#define UCHAR_BINARY_LIMIT UCHAR_BINARY_LIMIT_3_4_
#undef UCHAR_BINARY_START
#define UCHAR_BINARY_START UCHAR_BINARY_START_3_4_
#undef UCHAR_BLOCK
#define UCHAR_BLOCK UCHAR_BLOCK_3_4_
#undef UCHAR_CANONICAL_COMBINING_CLASS
#define UCHAR_CANONICAL_COMBINING_CLASS UCHAR_CANONICAL_COMBINING_CLASS_3_4_
#undef UCHAR_CASE_FOLDING
#define UCHAR_CASE_FOLDING UCHAR_CASE_FOLDING_3_4_
#undef UCHAR_CASE_SENSITIVE
#define UCHAR_CASE_SENSITIVE UCHAR_CASE_SENSITIVE_3_4_
#undef UCHAR_DASH
#define UCHAR_DASH UCHAR_DASH_3_4_
#undef UCHAR_DECOMPOSITION_TYPE
#define UCHAR_DECOMPOSITION_TYPE UCHAR_DECOMPOSITION_TYPE_3_4_
#undef UCHAR_DEFAULT_IGNORABLE_CODE_POINT
#define UCHAR_DEFAULT_IGNORABLE_CODE_POINT UCHAR_DEFAULT_IGNORABLE_CODE_POINT_3_4_
#undef UCHAR_DEPRECATED
#define UCHAR_DEPRECATED UCHAR_DEPRECATED_3_4_
#undef UCHAR_DIACRITIC
#define UCHAR_DIACRITIC UCHAR_DIACRITIC_3_4_
#undef UCHAR_DOUBLE_LIMIT
#define UCHAR_DOUBLE_LIMIT UCHAR_DOUBLE_LIMIT_3_4_
#undef UCHAR_DOUBLE_START
#define UCHAR_DOUBLE_START UCHAR_DOUBLE_START_3_4_
#undef UCHAR_EAST_ASIAN_WIDTH
#define UCHAR_EAST_ASIAN_WIDTH UCHAR_EAST_ASIAN_WIDTH_3_4_
#undef UCHAR_EXTENDER
#define UCHAR_EXTENDER UCHAR_EXTENDER_3_4_
#undef UCHAR_FULL_COMPOSITION_EXCLUSION
#define UCHAR_FULL_COMPOSITION_EXCLUSION UCHAR_FULL_COMPOSITION_EXCLUSION_3_4_
#undef UCHAR_GENERAL_CATEGORY
#define UCHAR_GENERAL_CATEGORY UCHAR_GENERAL_CATEGORY_3_4_
#undef UCHAR_GENERAL_CATEGORY_MASK
#define UCHAR_GENERAL_CATEGORY_MASK UCHAR_GENERAL_CATEGORY_MASK_3_4_
#undef UCHAR_GRAPHEME_BASE
#define UCHAR_GRAPHEME_BASE UCHAR_GRAPHEME_BASE_3_4_
#undef UCHAR_GRAPHEME_CLUSTER_BREAK
#define UCHAR_GRAPHEME_CLUSTER_BREAK UCHAR_GRAPHEME_CLUSTER_BREAK_3_4_
#undef UCHAR_GRAPHEME_EXTEND
#define UCHAR_GRAPHEME_EXTEND UCHAR_GRAPHEME_EXTEND_3_4_
#undef UCHAR_GRAPHEME_LINK
#define UCHAR_GRAPHEME_LINK UCHAR_GRAPHEME_LINK_3_4_
#undef UCHAR_HANGUL_SYLLABLE_TYPE
#define UCHAR_HANGUL_SYLLABLE_TYPE UCHAR_HANGUL_SYLLABLE_TYPE_3_4_
#undef UCHAR_HEX_DIGIT
#define UCHAR_HEX_DIGIT UCHAR_HEX_DIGIT_3_4_
#undef UCHAR_HYPHEN
#define UCHAR_HYPHEN UCHAR_HYPHEN_3_4_
#undef UCHAR_ID_CONTINUE
#define UCHAR_ID_CONTINUE UCHAR_ID_CONTINUE_3_4_
#undef UCHAR_ID_START
#define UCHAR_ID_START UCHAR_ID_START_3_4_
#undef UCHAR_IDEOGRAPHIC
#define UCHAR_IDEOGRAPHIC UCHAR_IDEOGRAPHIC_3_4_
#undef UCHAR_IDS_BINARY_OPERATOR
#define UCHAR_IDS_BINARY_OPERATOR UCHAR_IDS_BINARY_OPERATOR_3_4_
#undef UCHAR_IDS_TRINARY_OPERATOR
#define UCHAR_IDS_TRINARY_OPERATOR UCHAR_IDS_TRINARY_OPERATOR_3_4_
#undef UCHAR_INT_LIMIT
#define UCHAR_INT_LIMIT UCHAR_INT_LIMIT_3_4_
#undef UCHAR_INT_START
#define UCHAR_INT_START UCHAR_INT_START_3_4_
#undef UCHAR_INVALID_CODE
#define UCHAR_INVALID_CODE UCHAR_INVALID_CODE_3_4_
#undef UCHAR_ISO_COMMENT
#define UCHAR_ISO_COMMENT UCHAR_ISO_COMMENT_3_4_
#undef UCHAR_JOIN_CONTROL
#define UCHAR_JOIN_CONTROL UCHAR_JOIN_CONTROL_3_4_
#undef UCHAR_JOINING_GROUP
#define UCHAR_JOINING_GROUP UCHAR_JOINING_GROUP_3_4_
#undef UCHAR_JOINING_TYPE
#define UCHAR_JOINING_TYPE UCHAR_JOINING_TYPE_3_4_
#undef UCHAR_LEAD_CANONICAL_COMBINING_CLASS
#define UCHAR_LEAD_CANONICAL_COMBINING_CLASS UCHAR_LEAD_CANONICAL_COMBINING_CLASS_3_4_
#undef UCHAR_LINE_BREAK
#define UCHAR_LINE_BREAK UCHAR_LINE_BREAK_3_4_
#undef UCHAR_LOGICAL_ORDER_EXCEPTION
#define UCHAR_LOGICAL_ORDER_EXCEPTION UCHAR_LOGICAL_ORDER_EXCEPTION_3_4_
#undef UCHAR_LOWERCASE
#define UCHAR_LOWERCASE UCHAR_LOWERCASE_3_4_
#undef UCHAR_LOWERCASE_MAPPING
#define UCHAR_LOWERCASE_MAPPING UCHAR_LOWERCASE_MAPPING_3_4_
#undef UCHAR_MASK_LIMIT
#define UCHAR_MASK_LIMIT UCHAR_MASK_LIMIT_3_4_
#undef UCHAR_MASK_START
#define UCHAR_MASK_START UCHAR_MASK_START_3_4_
#undef UCHAR_MATH
#define UCHAR_MATH UCHAR_MATH_3_4_
#undef UCHAR_NAME
#define UCHAR_NAME UCHAR_NAME_3_4_
#undef UCHAR_NFC_INERT
#define UCHAR_NFC_INERT UCHAR_NFC_INERT_3_4_
#undef UCHAR_NFC_QUICK_CHECK
#define UCHAR_NFC_QUICK_CHECK UCHAR_NFC_QUICK_CHECK_3_4_
#undef UCHAR_NFD_INERT
#define UCHAR_NFD_INERT UCHAR_NFD_INERT_3_4_
#undef UCHAR_NFD_QUICK_CHECK
#define UCHAR_NFD_QUICK_CHECK UCHAR_NFD_QUICK_CHECK_3_4_
#undef UCHAR_NFKC_INERT
#define UCHAR_NFKC_INERT UCHAR_NFKC_INERT_3_4_
#undef UCHAR_NFKC_QUICK_CHECK
#define UCHAR_NFKC_QUICK_CHECK UCHAR_NFKC_QUICK_CHECK_3_4_
#undef UCHAR_NFKD_INERT
#define UCHAR_NFKD_INERT UCHAR_NFKD_INERT_3_4_
#undef UCHAR_NFKD_QUICK_CHECK
#define UCHAR_NFKD_QUICK_CHECK UCHAR_NFKD_QUICK_CHECK_3_4_
#undef UCHAR_NONCHARACTER_CODE_POINT
#define UCHAR_NONCHARACTER_CODE_POINT UCHAR_NONCHARACTER_CODE_POINT_3_4_
#undef UCHAR_NUMERIC_TYPE
#define UCHAR_NUMERIC_TYPE UCHAR_NUMERIC_TYPE_3_4_
#undef UCHAR_NUMERIC_VALUE
#define UCHAR_NUMERIC_VALUE UCHAR_NUMERIC_VALUE_3_4_
#undef UCHAR_PATTERN_SYNTAX
#define UCHAR_PATTERN_SYNTAX UCHAR_PATTERN_SYNTAX_3_4_
#undef UCHAR_PATTERN_WHITE_SPACE
#define UCHAR_PATTERN_WHITE_SPACE UCHAR_PATTERN_WHITE_SPACE_3_4_
#undef UCHAR_POSIX_ALNUM
#define UCHAR_POSIX_ALNUM UCHAR_POSIX_ALNUM_3_4_
#undef UCHAR_POSIX_BLANK
#define UCHAR_POSIX_BLANK UCHAR_POSIX_BLANK_3_4_
#undef UCHAR_POSIX_GRAPH
#define UCHAR_POSIX_GRAPH UCHAR_POSIX_GRAPH_3_4_
#undef UCHAR_POSIX_PRINT
#define UCHAR_POSIX_PRINT UCHAR_POSIX_PRINT_3_4_
#undef UCHAR_POSIX_XDIGIT
#define UCHAR_POSIX_XDIGIT UCHAR_POSIX_XDIGIT_3_4_
#undef UCHAR_QUOTATION_MARK
#define UCHAR_QUOTATION_MARK UCHAR_QUOTATION_MARK_3_4_
#undef UCHAR_RADICAL
#define UCHAR_RADICAL UCHAR_RADICAL_3_4_
#undef UCHAR_S_TERM
#define UCHAR_S_TERM UCHAR_S_TERM_3_4_
#undef UCHAR_SCRIPT
#define UCHAR_SCRIPT UCHAR_SCRIPT_3_4_
#undef UCHAR_SEGMENT_STARTER
#define UCHAR_SEGMENT_STARTER UCHAR_SEGMENT_STARTER_3_4_
#undef UCHAR_SENTENCE_BREAK
#define UCHAR_SENTENCE_BREAK UCHAR_SENTENCE_BREAK_3_4_
#undef UCHAR_SIMPLE_CASE_FOLDING
#define UCHAR_SIMPLE_CASE_FOLDING UCHAR_SIMPLE_CASE_FOLDING_3_4_
#undef UCHAR_SIMPLE_LOWERCASE_MAPPING
#define UCHAR_SIMPLE_LOWERCASE_MAPPING UCHAR_SIMPLE_LOWERCASE_MAPPING_3_4_
#undef UCHAR_SIMPLE_TITLECASE_MAPPING
#define UCHAR_SIMPLE_TITLECASE_MAPPING UCHAR_SIMPLE_TITLECASE_MAPPING_3_4_
#undef UCHAR_SIMPLE_UPPERCASE_MAPPING
#define UCHAR_SIMPLE_UPPERCASE_MAPPING UCHAR_SIMPLE_UPPERCASE_MAPPING_3_4_
#undef UCHAR_SOFT_DOTTED
#define UCHAR_SOFT_DOTTED UCHAR_SOFT_DOTTED_3_4_
#undef UCHAR_STRING_LIMIT
#define UCHAR_STRING_LIMIT UCHAR_STRING_LIMIT_3_4_
#undef UCHAR_STRING_START
#define UCHAR_STRING_START UCHAR_STRING_START_3_4_
#undef UCHAR_TERMINAL_PUNCTUATION
#define UCHAR_TERMINAL_PUNCTUATION UCHAR_TERMINAL_PUNCTUATION_3_4_
#undef UCHAR_TITLECASE_MAPPING
#define UCHAR_TITLECASE_MAPPING UCHAR_TITLECASE_MAPPING_3_4_
#undef UCHAR_TRAIL_CANONICAL_COMBINING_CLASS
#define UCHAR_TRAIL_CANONICAL_COMBINING_CLASS UCHAR_TRAIL_CANONICAL_COMBINING_CLASS_3_4_
#undef UCHAR_UNICODE_1_NAME
#define UCHAR_UNICODE_1_NAME UCHAR_UNICODE_1_NAME_3_4_
#undef UCHAR_UNIFIED_IDEOGRAPH
#define UCHAR_UNIFIED_IDEOGRAPH UCHAR_UNIFIED_IDEOGRAPH_3_4_
#undef UCHAR_UPPERCASE
#define UCHAR_UPPERCASE UCHAR_UPPERCASE_3_4_
#undef UCHAR_UPPERCASE_MAPPING
#define UCHAR_UPPERCASE_MAPPING UCHAR_UPPERCASE_MAPPING_3_4_
#undef UCHAR_VARIATION_SELECTOR
#define UCHAR_VARIATION_SELECTOR UCHAR_VARIATION_SELECTOR_3_4_
#undef UCHAR_WHITE_SPACE
#define UCHAR_WHITE_SPACE UCHAR_WHITE_SPACE_3_4_
#undef UCHAR_WORD_BREAK
#define UCHAR_WORD_BREAK UCHAR_WORD_BREAK_3_4_
#undef UCHAR_XID_CONTINUE
#define UCHAR_XID_CONTINUE UCHAR_XID_CONTINUE_3_4_
#undef UCHAR_XID_START
#define UCHAR_XID_START UCHAR_XID_START_3_4_
#undef UCharCategory
#define UCharCategory UCharCategory_3_4_
#undef UCharDirection
#define UCharDirection UCharDirection_3_4_
#undef UCharEnumTypeRange
#define UCharEnumTypeRange UCharEnumTypeRange_3_4_
#undef UCharIterator
#define UCharIterator UCharIterator_3_4_
#undef UCharIteratorCurrent
#define UCharIteratorCurrent UCharIteratorCurrent_3_4_
#undef UCharIteratorGetIndex
#define UCharIteratorGetIndex UCharIteratorGetIndex_3_4_
#undef UCharIteratorGetState
#define UCharIteratorGetState UCharIteratorGetState_3_4_
#undef UCharIteratorHasNext
#define UCharIteratorHasNext UCharIteratorHasNext_3_4_
#undef UCharIteratorHasPrevious
#define UCharIteratorHasPrevious UCharIteratorHasPrevious_3_4_
#undef UCharIteratorMove
#define UCharIteratorMove UCharIteratorMove_3_4_
#undef UCharIteratorNext
#define UCharIteratorNext UCharIteratorNext_3_4_
#undef UCharIteratorOrigin
#define UCharIteratorOrigin UCharIteratorOrigin_3_4_
#undef UCharIteratorPrevious
#define UCharIteratorPrevious UCharIteratorPrevious_3_4_
#undef UCharIteratorReserved
#define UCharIteratorReserved UCharIteratorReserved_3_4_
#undef UCharIteratorSetState
#define UCharIteratorSetState UCharIteratorSetState_3_4_
#undef UCharNameChoice
#define UCharNameChoice UCharNameChoice_3_4_
#undef UCOL_ALTERNATE_HANDLING
#define UCOL_ALTERNATE_HANDLING UCOL_ALTERNATE_HANDLING_3_4_
#undef UCOL_ATTRIBUTE_COUNT
#define UCOL_ATTRIBUTE_COUNT UCOL_ATTRIBUTE_COUNT_3_4_
#undef UCOL_ATTRIBUTE_VALUE_COUNT
#define UCOL_ATTRIBUTE_VALUE_COUNT UCOL_ATTRIBUTE_VALUE_COUNT_3_4_
#undef UCOL_BOUND_LOWER
#define UCOL_BOUND_LOWER UCOL_BOUND_LOWER_3_4_
#undef UCOL_BOUND_UPPER
#define UCOL_BOUND_UPPER UCOL_BOUND_UPPER_3_4_
#undef UCOL_BOUND_UPPER_LONG
#define UCOL_BOUND_UPPER_LONG UCOL_BOUND_UPPER_LONG_3_4_
#undef UCOL_BOUND_VALUE_COUNT
#define UCOL_BOUND_VALUE_COUNT UCOL_BOUND_VALUE_COUNT_3_4_
#undef UCOL_CASE_FIRST
#define UCOL_CASE_FIRST UCOL_CASE_FIRST_3_4_
#undef UCOL_CASE_LEVEL
#define UCOL_CASE_LEVEL UCOL_CASE_LEVEL_3_4_
#undef UCOL_CE_STRENGTH_LIMIT
#define UCOL_CE_STRENGTH_LIMIT UCOL_CE_STRENGTH_LIMIT_3_4_
#undef UCOL_DECOMPOSITION_MODE
#define UCOL_DECOMPOSITION_MODE UCOL_DECOMPOSITION_MODE_3_4_
#undef UCOL_DEFAULT
#define UCOL_DEFAULT UCOL_DEFAULT_3_4_
#undef UCOL_DEFAULT_STRENGTH
#define UCOL_DEFAULT_STRENGTH UCOL_DEFAULT_STRENGTH_3_4_
#undef UCOL_EQUAL
#define UCOL_EQUAL UCOL_EQUAL_3_4_
#undef UCOL_FRENCH_COLLATION
#define UCOL_FRENCH_COLLATION UCOL_FRENCH_COLLATION_3_4_
#undef UCOL_FULL_RULES
#define UCOL_FULL_RULES UCOL_FULL_RULES_3_4_
#undef UCOL_GREATER
#define UCOL_GREATER UCOL_GREATER_3_4_
#undef UCOL_HIRAGANA_QUATERNARY_MODE
#define UCOL_HIRAGANA_QUATERNARY_MODE UCOL_HIRAGANA_QUATERNARY_MODE_3_4_
#undef UCOL_IDENTICAL
#define UCOL_IDENTICAL UCOL_IDENTICAL_3_4_
#undef UCOL_LESS
#define UCOL_LESS UCOL_LESS_3_4_
#undef UCOL_LOWER_FIRST
#define UCOL_LOWER_FIRST UCOL_LOWER_FIRST_3_4_
#undef UCOL_NON_IGNORABLE
#define UCOL_NON_IGNORABLE UCOL_NON_IGNORABLE_3_4_
#undef UCOL_NORMALIZATION_MODE
#define UCOL_NORMALIZATION_MODE UCOL_NORMALIZATION_MODE_3_4_
#undef UCOL_NUMERIC_COLLATION
#define UCOL_NUMERIC_COLLATION UCOL_NUMERIC_COLLATION_3_4_
#undef UCOL_OFF
#define UCOL_OFF UCOL_OFF_3_4_
#undef UCOL_ON
#define UCOL_ON UCOL_ON_3_4_
#undef UCOL_PRIMARY
#define UCOL_PRIMARY UCOL_PRIMARY_3_4_
#undef UCOL_QUATERNARY
#define UCOL_QUATERNARY UCOL_QUATERNARY_3_4_
#undef UCOL_SECONDARY
#define UCOL_SECONDARY UCOL_SECONDARY_3_4_
#undef UCOL_SHIFTED
#define UCOL_SHIFTED UCOL_SHIFTED_3_4_
#undef UCOL_STRENGTH
#define UCOL_STRENGTH UCOL_STRENGTH_3_4_
#undef UCOL_STRENGTH_LIMIT
#define UCOL_STRENGTH_LIMIT UCOL_STRENGTH_LIMIT_3_4_
#undef UCOL_TAILORING_ONLY
#define UCOL_TAILORING_ONLY UCOL_TAILORING_ONLY_3_4_
#undef UCOL_TERTIARY
#define UCOL_TERTIARY UCOL_TERTIARY_3_4_
#undef UCOL_UPPER_FIRST
#define UCOL_UPPER_FIRST UCOL_UPPER_FIRST_3_4_
#undef UColAttribute
#define UColAttribute UColAttribute_3_4_
#undef UColAttributeValue
#define UColAttributeValue UColAttributeValue_3_4_
#undef UColBoundMode
#define UColBoundMode UColBoundMode_3_4_
#undef UCollationResult
#define UCollationResult UCollationResult_3_4_
#undef UCollationStrength
#define UCollationStrength UCollationStrength_3_4_
#undef UColRuleOption
#define UColRuleOption UColRuleOption_3_4_
#undef UDecompositionType
#define UDecompositionType UDecompositionType_3_4_
#undef UEastAsianWidth
#define UEastAsianWidth UEastAsianWidth_3_4_
#undef UEnumCharNamesFn
#define UEnumCharNamesFn UEnumCharNamesFn_3_4_
#undef UErrorCode
#define UErrorCode UErrorCode_3_4_
#undef UFieldPosition
#define UFieldPosition UFieldPosition_3_4_
#undef UGraphemeClusterBreak
#define UGraphemeClusterBreak UGraphemeClusterBreak_3_4_
#undef UHangulSyllableType
#define UHangulSyllableType UHangulSyllableType_3_4_
#undef UITER_CURRENT
#define UITER_CURRENT UITER_CURRENT_3_4_
#undef UITER_LENGTH
#define UITER_LENGTH UITER_LENGTH_3_4_
#undef UITER_LIMIT
#define UITER_LIMIT UITER_LIMIT_3_4_
#undef UITER_START
#define UITER_START UITER_START_3_4_
#undef UITER_UNKNOWN_INDEX
#define UITER_UNKNOWN_INDEX UITER_UNKNOWN_INDEX_3_4_
#undef UITER_ZERO
#define UITER_ZERO UITER_ZERO_3_4_
#undef UJoiningGroup
#define UJoiningGroup UJoiningGroup_3_4_
#undef UJoiningType
#define UJoiningType UJoiningType_3_4_
#undef ULayoutType
#define ULayoutType ULayoutType_3_4_
#undef ULineBreak
#define ULineBreak ULineBreak_3_4_
#undef ULOC_ACCEPT_FAILED
#define ULOC_ACCEPT_FAILED ULOC_ACCEPT_FAILED_3_4_
#undef ULOC_ACCEPT_FALLBACK
#define ULOC_ACCEPT_FALLBACK ULOC_ACCEPT_FALLBACK_3_4_
#undef ULOC_ACCEPT_VALID
#define ULOC_ACCEPT_VALID ULOC_ACCEPT_VALID_3_4_
#undef ULOC_ACTUAL_LOCALE
#define ULOC_ACTUAL_LOCALE ULOC_ACTUAL_LOCALE_3_4_
#undef ULOC_DATA_LOCALE_TYPE_LIMIT
#define ULOC_DATA_LOCALE_TYPE_LIMIT ULOC_DATA_LOCALE_TYPE_LIMIT_3_4_
#undef ULOC_LAYOUT_BTT
#define ULOC_LAYOUT_BTT ULOC_LAYOUT_BTT_3_4_
#undef ULOC_LAYOUT_LTR
#define ULOC_LAYOUT_LTR ULOC_LAYOUT_LTR_3_4_
#undef ULOC_LAYOUT_RTL
#define ULOC_LAYOUT_RTL ULOC_LAYOUT_RTL_3_4_
#undef ULOC_LAYOUT_TTB
#define ULOC_LAYOUT_TTB ULOC_LAYOUT_TTB_3_4_
#undef ULOC_LAYOUT_UNKNOWN
#define ULOC_LAYOUT_UNKNOWN ULOC_LAYOUT_UNKNOWN_3_4_
#undef ULOC_REQUESTED_LOCALE
#define ULOC_REQUESTED_LOCALE ULOC_REQUESTED_LOCALE_3_4_
#undef ULOC_VALID_LOCALE
#define ULOC_VALID_LOCALE ULOC_VALID_LOCALE_3_4_
#undef ULocDataLocaleType
#define ULocDataLocaleType ULocDataLocaleType_3_4_
#undef UNORM_DEFAULT
#define UNORM_DEFAULT UNORM_DEFAULT_3_4_
#undef UNORM_FCD
#define UNORM_FCD UNORM_FCD_3_4_
#undef UNORM_MAYBE
#define UNORM_MAYBE UNORM_MAYBE_3_4_
#undef UNORM_MODE_COUNT
#define UNORM_MODE_COUNT UNORM_MODE_COUNT_3_4_
#undef UNORM_NFC
#define UNORM_NFC UNORM_NFC_3_4_
#undef UNORM_NFD
#define UNORM_NFD UNORM_NFD_3_4_
#undef UNORM_NFKC
#define UNORM_NFKC UNORM_NFKC_3_4_
#undef UNORM_NFKD
#define UNORM_NFKD UNORM_NFKD_3_4_
#undef UNORM_NO
#define UNORM_NO UNORM_NO_3_4_
#undef UNORM_NONE
#define UNORM_NONE UNORM_NONE_3_4_
#undef UNORM_UNICODE_3_2
#define UNORM_UNICODE_3_2 UNORM_UNICODE_3_2_3_4_
#undef UNORM_YES
#define UNORM_YES UNORM_YES_3_4_
#undef UNORM2_COMPOSE
#define UNORM2_COMPOSE UNORM2_COMPOSE_3_4_
#undef UNORM2_COMPOSE_CONTIGUOUS
#define UNORM2_COMPOSE_CONTIGUOUS UNORM2_COMPOSE_CONTIGUOUS_3_4_
#undef UNORM2_DECOMPOSE
#define UNORM2_DECOMPOSE UNORM2_DECOMPOSE_3_4_
#undef UNORM2_FCD
#define UNORM2_FCD UNORM2_FCD_3_4_
#undef UNormalization2Mode
#define UNormalization2Mode UNormalization2Mode_3_4_
#undef UNormalizationCheckResult
#define UNormalizationCheckResult UNormalizationCheckResult_3_4_
#undef UNormalizationMode
#define UNormalizationMode UNormalizationMode_3_4_
#undef UNumericType
#define UNumericType UNumericType_3_4_
#undef UParseError
#define UParseError UParseError_3_4_
#undef UProperty
#define UProperty UProperty_3_4_
#undef UPropertyNameChoice
#define UPropertyNameChoice UPropertyNameChoice_3_4_
#undef URegistryKey
#define URegistryKey URegistryKey_3_4_
#undef USentenceBreak
#define USentenceBreak USentenceBreak_3_4_
#undef USerializedSet
#define USerializedSet USerializedSet_3_4_
#undef USET_ADD_CASE_MAPPINGS
#define USET_ADD_CASE_MAPPINGS USET_ADD_CASE_MAPPINGS_3_4_
#undef USET_CASE_INSENSITIVE
#define USET_CASE_INSENSITIVE USET_CASE_INSENSITIVE_3_4_
#undef USET_IGNORE_SPACE
#define USET_IGNORE_SPACE USET_IGNORE_SPACE_3_4_
#undef USET_SERIALIZED_STATIC_ARRAY_CAPACITY
#define USET_SERIALIZED_STATIC_ARRAY_CAPACITY USET_SERIALIZED_STATIC_ARRAY_CAPACITY_3_4_
#undef USET_SPAN_CONDITION_COUNT
#define USET_SPAN_CONDITION_COUNT USET_SPAN_CONDITION_COUNT_3_4_
#undef USET_SPAN_CONTAINED
#define USET_SPAN_CONTAINED USET_SPAN_CONTAINED_3_4_
#undef USET_SPAN_NOT_CONTAINED
#define USET_SPAN_NOT_CONTAINED USET_SPAN_NOT_CONTAINED_3_4_
#undef USET_SPAN_SIMPLE
#define USET_SPAN_SIMPLE USET_SPAN_SIMPLE_3_4_
#undef USetSpanCondition
#define USetSpanCondition USetSpanCondition_3_4_
#undef UWordBreakValues
#define UWordBreakValues UWordBreakValues_3_4_
#undef CharacterIterator
#define CharacterIterator CharacterIterator_3_4_
#undef Replaceable
#define Replaceable Replaceable_3_4_

#undef UnicodeString
#define UnicodeString UnicodeString_3_4_

#include "unicode/ucol.h"

#undef UnicodeString
#pragma option pop
//---------------------------------------------------------------------------
#endif
