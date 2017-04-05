#ifndef _ICU_46_H
#define _ICU_46_H
//---------------------------------------------------------------------------
#pragma option push

#undef __BYTESTREAM_H__
#undef __CURRENCYAMOUNT_H__
#undef __CURRENCYUNIT_H__
#undef __DTINTRV_H__
#undef __DTITVFMT_H__
#undef __DTITVINF_H__
#undef __DTPTNGEN_H__
#undef __ERRORCODE_H__
#undef __ICU_DATA_VER_H__
#undef __ICU_UCNV_SEL_H__
#undef __IDNA_H__
#undef __LAYOUTENGINE_H
#undef __LEFONTINSTANCE_H
#undef __LEGLYPHFILTER__H
#undef __LEGLYPHSTORAGE_H
#undef __LEINSERTIONLIST_H
#undef __LELANGUAGES_H
#undef __LESCRIPTS_H
#undef __LESWAPS_H
#undef __LETYPES_H
#undef __LOCALPOINTER_H__
#undef __LOENGINE_H
#undef __MEASURE_H__
#undef __MEASUREUNIT_H__
#undef __NORMALIZER2_H__
#undef __PARAGRAPHLAYOUT_H
#undef __PLAYOUT_H
#undef __PLRUNS_H
#undef __RUNARRAYS_H
#undef __STD_STRING_H__
#undef __STDC_CONSTANT_MACROS
#undef __STRINGPIECE_H__
#undef __TMUNIT_H__
#undef __TMUTAMT_H__
#undef __TMUTFMT_H__
#undef __UCASEMAP_H__
#undef __UCLEAN_H__
#undef __UCONFIG_H__
#undef __UCSDET_H
#undef __UDATA_H__
#undef __UDATPG_H__
#undef __UENUM_H
#undef __UIDNA_H__
#undef __UITER_H__
#undef __ULDNAMES_H__
#undef __ULOCDATA_H__
#undef __UMACHINE_H__
#undef __UNORM2_H__
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
#undef _BMS_H
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
#undef AndConstraint
#undef AnnualTimeZoneRule
#undef AnyTransliterator
#undef ArabicOpenTypeLayoutEngine
#undef ArabicShaping
#undef ArgExtractor
#undef B_M_SEARCH_H
#undef BackwardUTrie2StringIterator
#undef BadCharacterTable
#undef BasicCalendarFactory
#undef BasicTimeZone
#undef BASICTZ_H
#undef BinarySearchLookupTable
#undef BMPSet
#undef bms_close
#undef bms_close_4_6
#undef bms_empty
#undef bms_empty_4_6
#undef bms_getData
#undef bms_getData_4_6
#undef bms_open
#undef bms_open_4_6
#undef bms_search
#undef bms_search_4_6
#undef bms_setTargetString
#undef bms_setTargetString_4_6
#undef BoyerMooreSearch
#undef BreakIterator
#undef BreakTransliterator
#undef BRKITER_H
#undef BuddhistCalendar
#undef BuildCompactTrieHorizontalNode
#undef BuildCompactTrieNode
#undef BuildCompactTrieVerticalNode
#undef BuilderScriptSet
#undef buildWSConfusableData
#undef ByteSink
#undef Calendar
#undef CALENDAR_H
#undef CalendarAstronomer
#undef CalendarCache
#undef CalendarData
#undef CalendarService
#undef CANITER_H
#undef CANITER_SKIP_ZEROES
#undef CanonicalIterator
#undef CanonIterData
#undef CanonIterDataSingleton
#undef CanonMarkFilter
#undef CanonShaping
#undef CAPACITY_GROW_LIMIT
#undef CaseMapTransliterator
#undef CEBuffer
#undef CECalendar
#undef CEList
#undef CELIST_BUFFER_SIZE
#undef CEToStringsMap
#undef CFactory
#undef ChainingContextualSubstitutionFormat1Subtable
#undef ChainingContextualSubstitutionFormat2Subtable
#undef ChainingContextualSubstitutionFormat3Subtable
#undef ChainingContextualSubstitutionSubtable
#undef CharacterIterator
#undef CharacterNode
#undef CHARITER_H
#undef CharsetDetector
#undef CharsetMatch
#undef CharsetRecog_2022
#undef CharsetRecog_2022CN
#undef CharsetRecog_2022JP
#undef CharsetRecog_2022KR
#undef CharsetRecog_8859_1
#undef CharsetRecog_8859_1_da
#undef CharsetRecog_8859_1_de
#undef CharsetRecog_8859_1_en
#undef CharsetRecog_8859_1_es
#undef CharsetRecog_8859_1_fr
#undef CharsetRecog_8859_1_it
#undef CharsetRecog_8859_1_nl
#undef CharsetRecog_8859_1_no
#undef CharsetRecog_8859_1_pt
#undef CharsetRecog_8859_1_sv
#undef CharsetRecog_8859_2
#undef CharsetRecog_8859_2_cs
#undef CharsetRecog_8859_2_hu
#undef CharsetRecog_8859_2_pl
#undef CharsetRecog_8859_2_ro
#undef CharsetRecog_8859_5
#undef CharsetRecog_8859_5_ru
#undef CharsetRecog_8859_6
#undef CharsetRecog_8859_6_ar
#undef CharsetRecog_8859_7
#undef CharsetRecog_8859_7_el
#undef CharsetRecog_8859_8
#undef CharsetRecog_8859_8_he
#undef CharsetRecog_8859_8_I_he
#undef CharsetRecog_8859_9
#undef CharsetRecog_8859_9_tr
#undef CharsetRecog_big5
#undef CharsetRecog_euc
#undef CharsetRecog_euc_jp
#undef CharsetRecog_euc_kr
#undef CharsetRecog_gb_18030
#undef CharsetRecog_IBM420_ar
#undef CharsetRecog_IBM420_ar_ltr
#undef CharsetRecog_IBM420_ar_rtl
#undef CharsetRecog_IBM424_he
#undef CharsetRecog_IBM424_he_ltr
#undef CharsetRecog_IBM424_he_rtl
#undef CharsetRecog_KOI8_R
#undef CharsetRecog_mbcs
#undef CharsetRecog_sbcs
#undef CharsetRecog_sjis
#undef CharsetRecog_Unicode
#undef CharsetRecog_UTF_16_BE
#undef CharsetRecog_UTF_16_LE
#undef CharsetRecog_UTF_32
#undef CharsetRecog_UTF_32_BE
#undef CharsetRecog_UTF_32_LE
#undef CharsetRecog_UTF8
#undef CharsetRecog_windows_1251
#undef CharsetRecog_windows_1256
#undef CharsetRecognizer
#undef CharString
#undef CharSubstitutionFilter
#undef CheckedArrayByteSink
#undef ChineseCalendar
#undef ChoiceFormat
#undef CHOICFMT_H
#undef ClassDefFormat1Table
#undef ClassDefFormat2Table
#undef ClassDefinitionTable
#undef ClockMath
#undef cmemory_cleanup
#undef cmemory_inUse
#undef COLEITR_H
#undef COLL_DATA_H
#undef COLL_H
#undef CollationElementIterator
#undef CollationKey
#undef CollationLocaleListEnumeration
#undef Collator
#undef CollatorFactory
#undef CollData
#undef CollDataCache
#undef CollDataCacheEntry
#undef collIterate
#undef CompactTrieDictionary
#undef CompactTrieEnumeration
#undef ComposeNormalizer2
#undef CompoundTransliterator
#undef ConfusabledataBuilder
#undef ContextualGlyphSubstitutionProcessor
#undef ContextualSubstitutionBase
#undef ContextualSubstitutionFormat1Subtable
#undef ContextualSubstitutionFormat2Subtable
#undef ContextualSubstitutionFormat3Subtable
#undef ContextualSubstitutionSubtable
#undef CopticCalendar
#undef CoverageFormat1Table
#undef CoverageFormat2Table
#undef CoverageTable
#undef CurrencyAmount
#undef CurrencyFormat
#undef CurrencyPluralInfo
#undef CurrencyUnit
#undef CURRPINF_H
#undef CursiveAttachmentSubtable
#undef d2utable
#undef DATEFMT_H
#undef DateFormat
#undef DateFormatSymbols
#undef DateInterval
#undef DateIntervalFormat
#undef DateIntervalInfo
#undef DateTimeMatcher
#undef DateTimePatternGenerator
#undef DateTimeRule
#undef DBBI_H
#undef DCFMTSYM_H
#undef DecimalFormat
#undef DecimalFormatSymbols
#undef DECIMFMT_H
#undef DecomposeNormalizer2
#undef DECPOWERS
#undef DECSTICKYTAB
#undef DefaultCalendarFactory
#undef DefaultCharMapper
#undef deleteCEList
#undef deleteChars
#undef deleteCollDataCacheEntry
#undef deleteStringList
#undef deleteUnicodeStringKey
#undef DeviceTable
#undef DictionaryBreakEngine
#undef DigitList
#undef DistanceInfo
#undef DTFMTSYM_H
#undef DTRedundantEnumeration
#undef DTRULE_H
#undef DTSkeletonEnumeration
#undef EnumToOffset
#undef ErrorCode
#undef EscapeTransliterator
#undef EthiopicCalendar
#undef EventListener
#undef ExtensionSubtable
#undef FALSE
#undef FCDNormalizer2
#undef FCDTrieSingleton
#undef FeatureListTable
#undef FIELDPOS_H
#undef FieldPosition
#undef FieldPositionHandler
#undef FieldPositionIterator
#undef FieldPositionIteratorHandler
#undef FieldPositionOnlyHandler
#undef FilteredNormalizer2
#undef FMTABLE_H
#undef FontRuns
#undef Format
#undef FORMAT_H
#undef Format1AnchorTable
#undef Format2AnchorTable
#undef Format3AnchorTable
#undef FormatNameEnumeration
#undef FormatParser
#undef Formattable
#undef ForwardCharacterIterator
#undef ForwardUTrie2StringIterator
#undef FPOSITER_H
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
#undef GoodSuffixTable
#undef Grego
#undef GREGOCAL_H
#undef GregorianCalendar
#undef GXLayoutEngine
#undef HangulOpenTypeLayoutEngine
#undef HanOpenTypeLayoutEngine
#undef HebrewCalendar
#undef ICU_USE_THREADS
#undef ICU_Utility
#undef ICUBreakIteratorFactory
#undef ICUBreakIteratorService
#undef ICUCollatorFactory
#undef ICUCollatorService
#undef ICUDataTable
#undef ICULanguageBreakFactory
#undef ICULocaleService
#undef ICUNotifier
#undef ICUNumberFormatFactory
#undef ICUNumberFormatService
#undef ICUPLUG_H
#undef ICUResourceBundleFactory
#undef ICUService
#undef ICUServiceFactory
#undef ICUServiceKey
#undef IDNA
#undef IEEE_754
#undef IndianCalendar
#undef IndicClassTable
#undef IndicOpenTypeLayoutEngine
#undef IndicRearrangementProcessor
#undef IndicReordering
#undef INITIAL_CAPACITY
#undef InitialTimeZoneRule
#undef InputText
#undef INT16_MAX
#undef INT16_MIN
#undef INT32_MAX
#undef INT32_MIN
#undef INT64_C
#undef INT8_MAX
#undef INT8_MIN
#undef IntegralPartSubstitution
#undef IslamicCalendar
#undef IteratedChar
#undef izrule_clone
#undef izrule_close
#undef izrule_equals
#undef izrule_getDSTSavings
#undef izrule_getDynamicClassID
#undef izrule_getFinalStart
#undef izrule_getFirstStart
#undef izrule_getName
#undef izrule_getNextStart
#undef izrule_getPreviousStart
#undef izrule_getRawOffset
#undef izrule_getStaticClassID
#undef izrule_isEquivalentTo
#undef izrule_open
#undef JapaneseCalendar
#undef KernTable
#undef KEY_BUFFER_SIZE
#undef KeywordEnumeration
#undef KhmerClassTable
#undef KhmerOpenTypeLayoutEngine
#undef KhmerReordering
#undef LanguageBreakEngine
#undef LanguageBreakFactory
#undef LayoutEngine
#undef LE_ARRAY_COPY
#undef LE_ARRAY_SIZE
#undef LE_CLIENT_MASK
#undef LE_CLIENT_SHIFT
#undef le_close
#undef le_create
#undef LE_DELETE_ARRAY
#undef LE_FAILURE
#undef LE_GET_CLIENT
#undef LE_GET_GLYPH
#undef LE_GET_SUB_FONT
#undef le_getCharIndices
#undef le_getCharIndicesWithBase
#undef le_getGlyphCount
#undef le_getGlyphPosition
#undef le_getGlyphPositions
#undef le_getGlyphs
#undef LE_GLYPH_MASK
#undef LE_GLYPH_SHIFT
#undef LE_GROW_ARRAY
#undef le_layoutChars
#undef LE_MAKE_TAG
#undef LE_NEW_ARRAY
#undef le_reset
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
#undef LigatureSubstitutionProcessor
#undef LigatureSubstitutionSubtable
#undef LNnn
#undef Locale
#undef locale_get_default
#undef locale_getKeywords
#undef locale_getKeywordsStart
#undef locale_set_default
#undef locale_set_default_internal
#undef LocaleBased
#undef LocaleDisplayNames
#undef LocaleDisplayNamesImpl
#undef LocaleKey
#undef LocaleKeyFactory
#undef LocaleRuns
#undef LocaleUtility
#undef LocalizationInfo
#undef LocDataParser
#undef LOCDSPNM_H
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
#undef MutableTrieDictionary
#undef MutableTrieEnumeration
#undef NameToEnum
#undef NameUnicodeTransliterator
#undef NFFactory
#undef NFKDBuffer
#undef NFRule
#undef NFRuleSet
#undef NFSubstitution
#undef NGramParser
#undef NonContextualGlyphSubstitutionProcessor
#undef NonContiguousEnumToOffset
#undef NoopNormalizer2
#undef Norm2AllModes
#undef NormalizationTransliterator
#undef Normalizer
#undef Normalizer2
#undef Normalizer2Factory
#undef Normalizer2Impl
#undef Normalizer2WithImpl
#undef NORMLZR_H
#undef NULL
#undef NullSubstitution
#undef NullTransliterator
#undef NumberFormat
#undef NumberFormatFactory
#undef NumberingSystem
#undef NumeratorSubstitution
#undef NUMFMT_H
#undef NUMSYS
#undef NUMSYS_NAME_CAPACITY
#undef OlsonTimeZone
#undef OpenTypeLayoutEngine
#undef OpenTypeUtilities
#undef OrConstraint
#undef PairPositioningFormat1Subtable
#undef PairPositioningFormat2Subtable
#undef PairPositioningSubtable
#undef ParagraphLayout
#undef ParseData
#undef PARSEERR_H
#undef PARSEPOS_H
#undef ParsePosition
#undef PatternMap
#undef PatternMapIterator
#undef PCEBuffer
#undef PersianCalendar
#undef pl_addFontRun
#undef pl_addFontRun_4_6
#undef pl_addLocaleRun
#undef pl_addLocaleRun_4_6
#undef pl_addValueRun
#undef pl_addValueRun_4_6
#undef pl_close
#undef pl_close_4_6
#undef pl_closeFontRuns
#undef pl_closeFontRuns_4_6
#undef pl_closeLine
#undef pl_closeLine_4_6
#undef pl_closeLocaleRuns
#undef pl_closeLocaleRuns_4_6
#undef pl_closeValueRuns
#undef pl_closeValueRuns_4_6
#undef pl_countLineRuns
#undef pl_countLineRuns_4_6
#undef pl_create
#undef pl_getAscent
#undef pl_getAscent_4_6
#undef pl_getDescent
#undef pl_getDescent_4_6
#undef pl_getFontRunCount
#undef pl_getFontRunCount_4_6
#undef pl_getFontRunFont
#undef pl_getFontRunFont_4_6
#undef pl_getFontRunLastLimit
#undef pl_getFontRunLastLimit_4_6
#undef pl_getFontRunLimit
#undef pl_getFontRunLimit_4_6
#undef pl_getLeading
#undef pl_getLeading_4_6
#undef pl_getLineAscent
#undef pl_getLineAscent_4_6
#undef pl_getLineDescent
#undef pl_getLineDescent_4_6
#undef pl_getLineLeading
#undef pl_getLineLeading_4_6
#undef pl_getLineVisualRun
#undef pl_getLineVisualRun_4_6
#undef pl_getLineWidth
#undef pl_getLineWidth_4_6
#undef pl_getLocaleRunCount
#undef pl_getLocaleRunCount_4_6
#undef pl_getLocaleRunLastLimit
#undef pl_getLocaleRunLastLimit_4_6
#undef pl_getLocaleRunLimit
#undef pl_getLocaleRunLimit_4_6
#undef pl_getLocaleRunLocale
#undef pl_getLocaleRunLocale_4_6
#undef pl_getParagraphLevel
#undef pl_getParagraphLevel_4_6
#undef pl_getTextDirection
#undef pl_getTextDirection_4_6
#undef pl_getValueRunCount
#undef pl_getValueRunCount_4_6
#undef pl_getValueRunLastLimit
#undef pl_getValueRunLastLimit_4_6
#undef pl_getValueRunLimit
#undef pl_getValueRunLimit_4_6
#undef pl_getValueRunValue
#undef pl_getValueRunValue_4_6
#undef pl_getVisualRunAscent
#undef pl_getVisualRunAscent_4_6
#undef pl_getVisualRunDescent
#undef pl_getVisualRunDescent_4_6
#undef pl_getVisualRunDirection
#undef pl_getVisualRunDirection_4_6
#undef pl_getVisualRunFont
#undef pl_getVisualRunFont_4_6
#undef pl_getVisualRunGlyphCount
#undef pl_getVisualRunGlyphCount_4_6
#undef pl_getVisualRunGlyphs
#undef pl_getVisualRunGlyphs_4_6
#undef pl_getVisualRunGlyphToCharMap
#undef pl_getVisualRunGlyphToCharMap_4_6
#undef pl_getVisualRunLeading
#undef pl_getVisualRunLeading_4_6
#undef pl_getVisualRunPositions
#undef pl_getVisualRunPositions_4_6
#undef pl_isComplex
#undef pl_line
#undef pl_line_4_6
#undef pl_nextLine
#undef pl_nextLine_4_6
#undef pl_openEmptyFontRuns
#undef pl_openEmptyFontRuns_4_6
#undef pl_openEmptyLocaleRuns
#undef pl_openEmptyLocaleRuns_4_6
#undef pl_openEmptyValueRuns
#undef pl_openEmptyValueRuns_4_6
#undef pl_openFontRuns
#undef pl_openFontRuns_4_6
#undef pl_openLocaleRuns
#undef pl_openLocaleRuns_4_6
#undef pl_openValueRuns
#undef pl_openValueRuns_4_6
#undef pl_paragraph
#undef pl_paragraph_4_6
#undef pl_reflow
#undef pl_reflow_4_6
#undef pl_resetFontRuns
#undef pl_resetFontRuns_4_6
#undef pl_resetLocaleRuns
#undef pl_resetLocaleRuns_4_6
#undef pl_resetValueRuns
#undef pl_resetValueRuns_4_6
#undef pl_visualRun
#undef pl_visualRun_4_6
#undef PluralFormat
#undef PluralKeywordEnumeration
#undef PluralRules
#undef PLURFMT
#undef PLURRULE
#undef PropertyAliases
#undef PtnElem
#undef PtnSkeleton
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
#undef RBTZ_H
#undef RCEBuffer
#undef REGEX_H
#undef RegexCompile
#undef RegexMatcher
#undef RegexPattern
#undef RegexPatternDump
#undef RegexPatternDump_4_6
#undef RegexStaticSets
#undef RegularExpression
#undef RelativeDateFormat
#undef RemoveTransliterator
#undef ReorderingBuffer
#undef REP_H
#undef Replaceable
#undef ReplaceableGlue
#undef res_countArrayItems
#undef res_findResource
#undef res_getAlias
#undef res_getArrayItem
#undef res_getBinary
#undef res_getIntVector
#undef res_getPublicType
#undef res_getResource
#undef res_getString
#undef res_getTableItemByIndex
#undef res_getTableItemByKey
#undef res_load
#undef res_read
#undef res_unload
#undef RESBUND_H
#undef ResourceBundle
#undef RiseSetCoordFunc
#undef RuleBasedBreakIterator
#undef RuleBasedCollator
#undef RuleBasedNumberFormat
#undef RuleBasedTimeZone
#undef RuleBasedTransliterator
#undef RuleChain
#undef RuleCharacterIterator
#undef RuleHalf
#undef RuleParser
#undef RunArray
#undef SafeZoneStringFormatPtr
#undef SameValueSubstitution
#undef SCHRITER_H
#undef ScriptListTable
#undef ScriptRunIterator
#undef ScriptSet
#undef ScriptTable
#undef SEARCH_H
#undef SearchIterator
#undef SegmentArrayProcessor
#undef SegmentSingleProcessor
#undef SelectFormat
#undef SELFMT
#undef ServiceEnumeration
#undef ServiceListener
#undef SHAPE_TAIL_NEW_UNICODE
#undef SHAPE_TAIL_TYPE_MASK
#undef SimpleArrayProcessor
#undef SimpleDateFormat
#undef SimpleFactory
#undef SimpleLocaleKeyFactory
#undef SimpleNumberFormatFactory
#undef SimpleSingleton
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
#undef SpoofData
#undef SpoofImpl
#undef SPUString
#undef SPUStringPool
#undef StateTableProcessor
#undef STRENUM_H
#undef STRING_LIST_BUFFER_SIZE
#undef StringCharacterIterator
#undef StringEnumeration
#undef StringList
#undef StringLocalizationInfo
#undef StringMatcher
#undef StringPair
#undef StringPiece
#undef StringReplacer
#undef StringSearch
#undef StringToCEsMap
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
#undef TaiwanCalendar
#undef Target
#undef TBLCOLL_H
#undef TernaryNode
#undef TextTrieMap
#undef TextTrieMapSearchResultHandler
#undef ThaiBreakEngine
#undef ThaiLayoutEngine
#undef ThaiShaping
#undef TibetanClassTable
#undef TibetanOpenTypeLayoutEngine
#undef TibetanReordering
#undef TimeArrayTimeZoneRule
#undef TimeUnit
#undef TimeUnitAmount
#undef TimeUnitFormat
#undef TimeZone
#undef TIMEZONE_H
#undef TimeZoneRule
#undef TimeZoneTransition
#undef TitlecaseTransliterator
#undef tmutfmtHashTableValueComparator
#undef TRANSLIT_H
#undef TransliterationRule
#undef TransliterationRuleData
#undef TransliterationRuleSet
#undef Transliterator
#undef TransliteratorAlias
#undef TransliteratorEntry
#undef TransliteratorIDParser
#undef TransliteratorParser
#undef TransliteratorRegistry
#undef TransliteratorSpec
#undef triedict_swap
#undef TrieWordDictionary
#undef TrimmedArrayProcessor
#undef TriStateSingleton
#undef TRUE
#undef TZEnumeration
#undef TZRULE_H
#undef TZTRANS_H
#undef U_ALIGN_CODE
#undef U_ASCII_FAMILY
#undef U_ATTRIBUTE_DEPRECATED
#undef u_austrcpy
#undef u_austrncpy
#undef U_BIDI_CLASS_DEFAULT
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
#undef U_CHARSET_IS_UTF8
#undef u_charsToUChars
#undef u_charType
#undef u_cleanup
#undef u_cleanup_4_6
#undef U_CNV_SAFECLONE_BUFFERSIZE
#undef U_COL_SAFECLONE_BUFFERSIZE
#undef U_COMMON_API
#undef U_COMPARE_CODE_POINT_ORDER
#undef U_COMPARE_IGNORE_CASE
#undef U_COPYRIGHT_STRING
#undef U_COPYRIGHT_STRING_LENGTH
#undef u_countChar32
#undef U_DATA_API
#undef U_DAYLIGHT
#undef U_DEBUG
#undef U_DECLARE_UTF16
#undef U_DEF_ICUDATA_ENTRY_POINT
#undef U_DEF2_ICUDATA_ENTRY_POINT
#undef U_DEFAULT_SHOW_DRAFT
#undef U_DEFINE_LOCAL_OPEN_POINTER
#undef U_DEPRECATED
#undef u_digit
#undef U_DISABLE_RENAMING
#undef U_DRAFT
#undef U_EBCDIC_FAMILY
#undef U_ENABLE_DYLOAD
#undef U_ENABLE_TRACING
#undef u_enumCharNames
#undef u_enumCharTypes
#undef U_EOF
#undef u_errorName
#undef U_ETHER
#undef U_EXPORT
#undef U_EXPORT2
#undef u_fadopt
#undef U_FAILURE
#undef u_fclose
#undef u_feof
#undef u_fflush
#undef u_fgetc
#undef u_fgetcodepage
#undef u_fgetConverter
#undef u_fgetcx
#undef u_fgetfile
#undef u_fgetlocale
#undef u_fgets
#undef U_FILE_ALT_SEP_CHAR
#undef U_FILE_ALT_SEP_STRING
#undef u_file_read
#undef U_FILE_SEP_CHAR
#undef U_FILE_SEP_STRING
#undef u_file_write
#undef u_file_write_flush
#undef u_finit
#undef u_flushDefaultConverter
#undef U_FOLD_CASE_DEFAULT
#undef U_FOLD_CASE_EXCLUDE_SPECIAL_I
#undef u_foldCase
#undef u_fopen
#undef u_forDigit
#undef u_formatMessage
#undef u_formatMessageWithError
#undef u_fprintf
#undef u_fprintf_u
#undef u_fputc
#undef u_fputs
#undef u_frewind
#undef u_fscanf
#undef u_fscanf_u
#undef u_fsetcodepage
#undef u_fsetlocale
#undef u_fsettransliterator
#undef u_fstropen
#undef u_fungetc
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
#undef u_getDataVersion
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
#undef u_hasBinaryProperty
#undef U_HAVE_DEBUG_LOCATION_NEW
#undef U_HAVE_INT16_T
#undef U_HAVE_INT32_T
#undef U_HAVE_INT64_T
#undef U_HAVE_INT8_T
#undef U_HAVE_INTTYPES_H
#undef U_HAVE_LIB_SUFFIX
#undef U_HAVE_MMAP
#undef U_HAVE_MSVC_2003_OR_EARLIER
#undef U_HAVE_NAMESPACE
#undef U_HAVE_PLACEMENT_NEW
#undef U_HAVE_POPEN
#undef U_HAVE_RBNF
#undef U_HAVE_STD_STRING
#undef U_HAVE_UINT16_T
#undef U_HAVE_UINT32_T
#undef U_HAVE_UINT64_T
#undef U_HAVE_UINT8_T
#undef U_HAVE_WCHAR_H
#undef U_HAVE_WCSCPY
#undef U_HIDE_DRAFT_API
#undef U_HIDE_INTERNAL_API
#undef U_I18N_API
#undef U_ICU_DATA_KEY
#undef U_ICU_DATA_VERSION
#undef U_ICU_ENTRY_POINT_RENAME
#undef U_ICU_NAMESPACE
#undef U_ICU_STD_BUNDLE
#undef U_ICU_VERSION
#undef U_ICU_VERSION_BUILDLEVEL_NUM
#undef U_ICU_VERSION_BUNDLE
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
#undef U_IS_SURROGATE_TRAIL
#undef U_IS_TRAIL
#undef U_IS_UNICODE_CHAR
#undef U_IS_UNICODE_NONCHAR
#undef u_isalnum
#undef u_isalnumPOSIX
#undef u_isalpha
#undef u_isbase
#undef u_isblank
#undef u_iscntrl
#undef u_isDataOlder
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
#undef U_NO_THROW
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
#undef u_setAtomicIncDecFunctions_4_6
#undef u_setDataDirectory
#undef u_setMemoryFunctions
#undef u_setMemoryFunctions_4_6
#undef u_setMutexFunctions
#undef u_setMutexFunctions_4_6
#undef U_SHAPE_AGGREGATE_TASHKEEL
#undef U_SHAPE_AGGREGATE_TASHKEEL_MASK
#undef U_SHAPE_AGGREGATE_TASHKEEL_NOOP
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
#undef U_SHAPE_LAMALEF_AUTO
#undef U_SHAPE_LAMALEF_BEGIN
#undef U_SHAPE_LAMALEF_END
#undef U_SHAPE_LAMALEF_MASK
#undef U_SHAPE_LAMALEF_NEAR
#undef U_SHAPE_LAMALEF_RESIZE
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
#undef U_SHAPE_PRESERVE_PRESENTATION
#undef U_SHAPE_PRESERVE_PRESENTATION_MASK
#undef U_SHAPE_PRESERVE_PRESENTATION_NOOP
#undef U_SHAPE_SEEN_MASK
#undef U_SHAPE_SEEN_TWOCELL_NEAR
#undef U_SHAPE_SPACES_RELATIVE_TO_TEXT_BEGIN_END
#undef U_SHAPE_SPACES_RELATIVE_TO_TEXT_MASK
#undef U_SHAPE_TASHKEEL_BEGIN
#undef U_SHAPE_TASHKEEL_END
#undef U_SHAPE_TASHKEEL_MASK
#undef U_SHAPE_TASHKEEL_REPLACE_BY_TATWEEL
#undef U_SHAPE_TASHKEEL_RESIZE
#undef U_SHAPE_TEXT_DIRECTION_LOGICAL
#undef U_SHAPE_TEXT_DIRECTION_MASK
#undef U_SHAPE_TEXT_DIRECTION_VISUAL_LTR
#undef U_SHAPE_TEXT_DIRECTION_VISUAL_RTL
#undef U_SHAPE_YEHHAMZA_MASK
#undef U_SHAPE_YEHHAMZA_TWOCELL_NEAR
#undef u_shapeArabic
#undef U_SHOW_CPLUSPLUS_API
#undef U_SIZEOF_UCHAR
#undef U_SIZEOF_WCHAR_T
#undef u_snprintf
#undef u_snprintf_u
#undef u_sprintf
#undef u_sprintf_u
#undef u_sscanf
#undef u_sscanf_u
#undef U_STABLE
#undef U_STANDARD_CPP_NAMESPACE
#undef U_STD_NS
#undef U_STD_NS_USE
#undef U_STD_NSQ
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
#undef u_strFromJavaModifiedUTF8WithSub
#undef u_strFromPunycode
#undef u_strFromUTF32
#undef u_strFromUTF32WithSub
#undef u_strFromUTF8
#undef u_strFromUTF8Lenient
#undef u_strFromUTF8WithSub
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
#undef u_strToJavaModifiedUTF8
#undef u_strtok_r
#undef u_strToLower
#undef u_strToPunycode
#undef u_strToTitle
#undef u_strToUpper
#undef u_strToUTF32
#undef u_strToUTF32WithSub
#undef u_strToUTF8
#undef u_strToUTF8WithSub
#undef u_strToWCS
#undef U_SUCCESS
#undef u_terminateChars
#undef u_terminateUChar32s
#undef u_terminateUChars
#undef u_terminateWChars
#undef U_TIMEZONE
#undef U_TITLECASE_NO_BREAK_ADJUSTMENT
#undef U_TITLECASE_NO_LOWERCASE
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
#undef U_USE_USRDATA
#undef U_USING_ICU_NAMESPACE
#undef U_USRDATA_NAME
#undef U_VERSION_DELIMITER
#undef u_versionFromString
#undef u_versionFromUString
#undef u_versionToString
#undef u_vformatMessage
#undef u_vformatMessageWithError
#undef u_vfprintf
#undef u_vfprintf_u
#undef u_vfscanf
#undef u_vfscanf_u
#undef u_vparseMessage
#undef u_vparseMessageWithError
#undef u_vsnprintf
#undef u_vsnprintf_u
#undef u_vsprintf
#undef u_vsprintf_u
#undef u_vsscanf
#undef u_vsscanf_u
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
#undef U16_IS_SURROGATE_TRAIL
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
#undef ubidi_addPropertyStarts
#undef ubidi_close
#undef ubidi_countParagraphs
#undef ubidi_countRuns
#undef UBIDI_DEFAULT_LTR
#undef UBIDI_DEFAULT_RTL
#undef UBIDI_DO_MIRRORING
#undef ubidi_getBaseDirection
#undef ubidi_getBaseDirection_4_6
#undef ubidi_getClass
#undef ubidi_getClassCallback
#undef ubidi_getCustomizedClass
#undef ubidi_getDirection
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
#undef ubidi_getProcessedLength
#undef ubidi_getReorderingMode
#undef ubidi_getReorderingOptions
#undef ubidi_getResultLength
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
#undef UBIDI_MAP_NOWHERE
#undef UBIDI_MAX_EXPLICIT_LEVEL
#undef ubidi_open
#undef ubidi_openSized
#undef ubidi_orderParagraphsLTR
#undef UBIDI_OUTPUT_REVERSE
#undef UBIDI_REMOVE_BIDI_CONTROLS
#undef ubidi_reorderLogical
#undef ubidi_reorderVisual
#undef ubidi_setClassCallback
#undef ubidi_setInverse
#undef ubidi_setLine
#undef ubidi_setPara
#undef ubidi_setReorderingMode
#undef ubidi_setReorderingOptions
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
#undef ubrk_getRuleStatus
#undef ubrk_getRuleStatusVec
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
#undef ubrk_swap
#undef UBRK_TYPEDEF_UBREAK_ITERATOR
#undef ucal_add
#undef ucal_clear
#undef ucal_clearField
#undef ucal_clone
#undef ucal_close
#undef ucal_countAvailable
#undef ucal_equivalentTo
#undef ucal_get
#undef ucal_getAttribute
#undef ucal_getAvailable
#undef ucal_getCanonicalTimeZoneID
#undef ucal_getDayOfWeekType
#undef ucal_getDefaultTimeZone
#undef ucal_getDSTSavings
#undef ucal_getGregorianChange
#undef ucal_getKeywordValuesForLocale
#undef ucal_getLimit
#undef ucal_getLocaleByType
#undef ucal_getMillis
#undef ucal_getNow
#undef ucal_getTimeZoneDisplayName
#undef ucal_getType
#undef ucal_getTZDataVersion
#undef ucal_getWeekendTransition
#undef UCAL_H
#undef ucal_inDaylightTime
#undef ucal_isSet
#undef ucal_isWeekend
#undef ucal_open
#undef ucal_openCountryTimeZones
#undef ucal_openTimeZones
#undef ucal_roll
#undef ucal_set
#undef ucal_setAttribute
#undef ucal_setDate
#undef ucal_setDateTime
#undef ucal_setDefaultTimeZone
#undef ucal_setGregorianChange
#undef ucal_setMillis
#undef ucal_setTimeZone
#undef ucase_addCaseClosure
#undef ucase_addPropertyStarts
#undef ucase_addStringCaseClosure
#undef ucase_fold
#undef ucase_getCaseLocale
#undef ucase_getSingleton
#undef ucase_getType
#undef ucase_getTypeOrIgnorable
#undef ucase_hasBinaryProperty
#undef ucase_isCaseSensitive
#undef ucase_isSoftDotted
#undef ucase_toFullFolding
#undef ucase_toFullLower
#undef ucase_toFullTitle
#undef ucase_toFullUpper
#undef ucase_tolower
#undef ucase_totitle
#undef ucase_toupper
#undef ucasemap_close
#undef ucasemap_getBreakIterator
#undef ucasemap_getLocale
#undef ucasemap_getOptions
#undef ucasemap_open
#undef ucasemap_setBreakIterator
#undef ucasemap_setLocale
#undef ucasemap_setOptions
#undef ucasemap_toTitle
#undef ucasemap_utf8FoldCase
#undef ucasemap_utf8ToLower
#undef ucasemap_utf8ToTitle
#undef ucasemap_utf8ToUpper
#undef UCAT_H
#undef ucd_close
#undef ucd_close_4_6
#undef ucd_flushCache
#undef ucd_flushCache_4_6
#undef ucd_freeCache
#undef ucd_freeCache_4_6
#undef ucd_getCollator
#undef ucd_getCollator_4_6
#undef ucd_open
#undef ucd_open_4_6
#undef uchar_addPropertyStarts
#undef UCHAR_H
#undef UCHAR_MAX_VALUE
#undef UCHAR_MIN_VALUE
#undef uchar_swapNames
#undef UCharCharacterIterator
#undef UCHRITER_H
#undef ucln_cleanupOne
#undef ucln_common_registerCleanup
#undef ucln_i18n_registerCleanup
#undef ucln_io_registerCleanup
#undef ucln_lib_cleanup
#undef UCLN_NO_AUTO_CLEANUP
#undef ucln_registerCleanup
#undef ucnv_bld_countAvailableConverters
#undef ucnv_bld_getAvailableConverter
#undef ucnv_canCreateConverter
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
#undef UCNV_ESCAPE_CSS2
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
#undef ucnv_io_countKnownConverters
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
#undef ucnv_MBCSGetFilteredUnicodeSetForUnicode
#undef ucnv_MBCSGetType
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
#undef ucnv_setDefaultName_4_6
#undef ucnv_setFallback
#undef ucnv_setFromUCallBack
#undef ucnv_setSubstChars
#undef ucnv_setSubstString
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
#undef ucnv_toUnicode
#undef ucnv_toUWriteCodePoint
#undef ucnv_toUWriteUChars
#undef ucnv_unload
#undef ucnv_unloadSharedDataIfReady
#undef ucnv_usesFallback
#undef UCNV_VALUE_SEP_CHAR
#undef UCNV_VALUE_SEP_STRING
#undef UCNV_VERSION_OPTION_STRING
#undef ucnvsel_close
#undef ucnvsel_open
#undef ucnvsel_openFromSerialized
#undef ucnvsel_selectForString
#undef ucnvsel_selectForUTF8
#undef ucnvsel_serialize
#undef ucol_allocWeights
#undef ucol_assembleTailoringTable
#undef UCOL_BUILDER_VERSION
#undef ucol_buildPermutationTable
#undef ucol_calcSortKey
#undef ucol_calcSortKeySimpleTertiary
#undef ucol_cloneBinary
#undef ucol_cloneRuleData
#undef ucol_close
#undef ucol_closeElements
#undef ucol_countAvailable
#undef ucol_createElements
#undef ucol_doCE
#undef ucol_equal
#undef ucol_equals
#undef ucol_equals_4_6
#undef ucol_findReorderingEntry
#undef ucol_forceHanImplicit
#undef ucol_forceHanImplicit_4_6
#undef ucol_forgetUCA
#undef ucol_forgetUCA_4_6
#undef ucol_freeOffsetBuffer
#undef ucol_getAttribute
#undef ucol_getAttributeOrDefault
#undef ucol_getAttributeOrDefault_4_6
#undef ucol_getAvailable
#undef ucol_getBound
#undef ucol_getCEStrengthDifference
#undef ucol_getContractions
#undef ucol_getContractions_4_6
#undef ucol_getContractionsAndExpansions
#undef ucol_getDisplayName
#undef ucol_getFirstCE
#undef ucol_getFunctionalEquivalent
#undef ucol_getKeywords
#undef ucol_getKeywordValues
#undef ucol_getKeywordValuesForLocale
#undef ucol_getLeadBytesForReorderCode
#undef ucol_getLocale
#undef ucol_getLocale_4_6
#undef ucol_getLocaleByType
#undef ucol_getMaxExpansion
#undef ucol_getNextCE
#undef ucol_getOffset
#undef ucol_getPrevCE
#undef ucol_getReorderCodes
#undef ucol_getReorderCodes_4_6
#undef ucol_getReorderCodesForLeadByte
#undef ucol_getRules
#undef ucol_getRulesEx
#undef ucol_getShortDefinitionString
#undef ucol_getSortKey
#undef ucol_getSortKeySize
#undef ucol_getSortKeyWithAllocation
#undef ucol_getStrength
#undef ucol_getTailoredSet
#undef ucol_getUCAVersion
#undef ucol_getUnsafeSet
#undef ucol_getUnsafeSet_4_6
#undef ucol_getVariableTop
#undef ucol_getVersion
#undef ucol_greater
#undef ucol_greaterOrEqual
#undef UCOL_H
#undef ucol_initBuffers
#undef ucol_initCollator
#undef ucol_initInverseUCA
#undef ucol_initUCA
#undef ucol_inv_getNextCE
#undef ucol_inv_getPrevCE
#undef ucol_isTailored
#undef ucol_keyHashCode
#undef ucol_looksLikeCollationBinary
#undef ucol_mergeSortkeys
#undef ucol_next
#undef ucol_nextProcessed
#undef ucol_nextProcessed_4_6
#undef ucol_nextSortKeyPart
#undef ucol_nextWeight
#undef ucol_normalizeShortDefinitionString
#undef UCOL_NULLORDER
#undef ucol_open
#undef ucol_open_internal
#undef ucol_openAvailableLocales
#undef ucol_openBinary
#undef ucol_openElements
#undef ucol_openFromShortString
#undef ucol_openRules
#undef ucol_openRulesForImport
#undef ucol_prepareShortStringOpen
#undef ucol_prepareShortStringOpen_4_6
#undef ucol_previous
#undef ucol_previousProcessed
#undef ucol_previousProcessed_4_6
#undef ucol_primaryOrder
#undef UCOL_PROCESSED_NULLORDER
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
#undef ucol_setReorderCodes
#undef ucol_setReorderCodes_4_6
#undef ucol_setReqValidLocales
#undef ucol_setStrength
#undef ucol_setText
#undef ucol_setVariableTop
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
#undef ucol_tok_getRulesFromBundle
#undef ucol_tok_initTokenList
#undef ucol_tok_parseNextToken
#undef ucol_updateInternalState
#undef UCOLEITR_H
#undef UCollationPCE
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
#undef ucsdet_close
#undef ucsdet_detect
#undef ucsdet_detectAll
#undef ucsdet_enableInputFilter
#undef ucsdet_getAllDetectableCharsets
#undef ucsdet_getConfidence
#undef ucsdet_getLanguage
#undef ucsdet_getName
#undef ucsdet_getUChars
#undef ucsdet_isInputFilterEnabled
#undef ucsdet_open
#undef ucsdet_setDeclaredEncoding
#undef ucsdet_setText
#undef ucurr_countCurrencies
#undef ucurr_forLocale
#undef ucurr_forLocaleAndDate
#undef ucurr_getDefaultFractionDigits
#undef ucurr_getKeywordValuesForLocale
#undef ucurr_getName
#undef ucurr_getPluralName
#undef ucurr_getRoundingIncrement
#undef ucurr_openISOCurrencies
#undef ucurr_register
#undef ucurr_unregister
#undef UDAT_ABBR_MONTH
#undef UDAT_ABBR_MONTH_DAY
#undef UDAT_ABBR_MONTH_WEEKDAY_DAY
#undef UDAT_ABBR_STANDALONE_MONTH
#undef udat_applyPattern
#undef udat_applyPatternRelative
#undef udat_applyPatternRelative_4_6
#undef udat_clone
#undef udat_close
#undef udat_countAvailable
#undef udat_countSymbols
#undef UDAT_DAY
#undef udat_format
#undef udat_get2DigitYearStart
#undef udat_getAvailable
#undef udat_getCalendar
#undef udat_getLocaleByType
#undef udat_getNumberFormat
#undef udat_getSymbols
#undef UDAT_H
#undef UDAT_HOUR
#undef UDAT_HOUR_GENERIC_TZ
#undef UDAT_HOUR_MINUTE
#undef UDAT_HOUR_MINUTE_GENERIC_TZ
#undef UDAT_HOUR_MINUTE_SECOND
#undef UDAT_HOUR_MINUTE_TZ
#undef UDAT_HOUR_TZ
#undef UDAT_HOUR24_MINUTE
#undef UDAT_HOUR24_MINUTE_SECOND
#undef udat_isLenient
#undef UDAT_MINUTE_SECOND
#undef UDAT_MONTH
#undef UDAT_MONTH_DAY
#undef UDAT_MONTH_WEEKDAY_DAY
#undef UDAT_NUM_MONTH
#undef UDAT_NUM_MONTH_DAY
#undef UDAT_NUM_MONTH_WEEKDAY_DAY
#undef udat_open
#undef udat_parse
#undef udat_parseCalendar
#undef udat_set2DigitYearStart
#undef udat_setCalendar
#undef udat_setLenient
#undef udat_setNumberFormat
#undef udat_setSymbols
#undef UDAT_STANDALONE_MONTH
#undef udat_toCalendarDateField
#undef udat_toPattern
#undef udat_toPatternRelativeDate
#undef udat_toPatternRelativeDate_4_6
#undef udat_toPatternRelativeTime
#undef udat_toPatternRelativeTime_4_6
#undef UDAT_YEAR
#undef UDAT_YEAR_ABBR_MONTH
#undef UDAT_YEAR_ABBR_MONTH_DAY
#undef UDAT_YEAR_ABBR_MONTH_WEEKDAY_DAY
#undef UDAT_YEAR_ABBR_QUARTER
#undef UDAT_YEAR_MONTH
#undef UDAT_YEAR_MONTH_DAY
#undef UDAT_YEAR_MONTH_WEEKDAY_DAY
#undef UDAT_YEAR_NUM_MONTH
#undef UDAT_YEAR_NUM_MONTH_DAY
#undef UDAT_YEAR_NUM_MONTH_WEEKDAY_DAY
#undef UDAT_YEAR_QUARTER
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
#undef udata_swapDataHeader
#undef udata_swapInvStringBlock
#undef UDatamemory_assign
#undef UDataMemory_createNewInstance
#undef UDataMemory_init
#undef UDataMemory_isLoaded
#undef UDataMemory_normalizeDataPointer
#undef UDataMemory_setData
#undef UDataPathIterator
#undef udatpg_addPattern
#undef udatpg_clone
#undef udatpg_close
#undef udatpg_getAppendItemFormat
#undef udatpg_getAppendItemName
#undef udatpg_getBaseSkeleton
#undef udatpg_getBestPattern
#undef udatpg_getBestPatternWithOptions
#undef udatpg_getDateTimeFormat
#undef udatpg_getDecimal
#undef udatpg_getPatternForSkeleton
#undef udatpg_getSkeleton
#undef udatpg_open
#undef udatpg_openBaseSkeletons
#undef udatpg_openEmpty
#undef udatpg_openSkeletons
#undef udatpg_replaceFieldTypes
#undef udatpg_replaceFieldTypesWithOptions
#undef udatpg_setAppendItemFormat
#undef udatpg_setAppendItemName
#undef udatpg_setDateTimeFormat
#undef udatpg_setDecimal
#undef UDEPRCTD_H
#undef UDRAFT_H
#undef uenum_close
#undef uenum_count
#undef uenum_next
#undef uenum_nextDefault
#undef uenum_openCharStringsEnumeration
#undef uenum_openFromStringEnumeration
#undef uenum_reset
#undef uenum_unext
#undef uenum_unextDefault
#undef ufile_close_translit
#undef ufile_fill_uchar_buffer
#undef ufile_flush_io
#undef ufile_flush_translit
#undef ufile_getch
#undef ufile_getch32
#undef ufmt_64tou
#undef ufmt_defaultCPToUnicode
#undef ufmt_digitvalue
#undef ufmt_isdigit
#undef ufmt_ptou
#undef ufmt_uto64
#undef ufmt_utop
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
#undef uhash_deleteUObject
#undef uhash_equals
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
#undef uhash_init
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
#undef uhash_setValueComparator
#undef uhash_setValueDeleter
#undef uidna_close
#undef uidna_close_4_6
#undef uidna_compare
#undef uidna_IDNToASCII
#undef uidna_IDNToUnicode
#undef UIDNA_INFO_INITIALIZER
#undef uidna_labelToASCII
#undef uidna_labelToASCII_4_6
#undef uidna_labelToASCII_UTF8
#undef uidna_labelToASCII_UTF8_4_6
#undef uidna_labelToUnicode
#undef uidna_labelToUnicode_4_6
#undef uidna_labelToUnicodeUTF8
#undef uidna_labelToUnicodeUTF8_4_6
#undef uidna_nameToASCII
#undef uidna_nameToASCII_4_6
#undef uidna_nameToASCII_UTF8
#undef uidna_nameToASCII_UTF8_4_6
#undef uidna_nameToUnicode
#undef uidna_nameToUnicode_4_6
#undef uidna_nameToUnicodeUTF8
#undef uidna_nameToUnicodeUTF8_4_6
#undef uidna_openUTS46
#undef uidna_openUTS46_4_6
#undef uidna_toASCII
#undef uidna_toUnicode
#undef UINT16_MAX
#undef UINT32_MAX
#undef UINT64_C
#undef UINT8_MAX
#undef UINTRNAL_H
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
#undef uldn_close
#undef uldn_getDialectHandling
#undef uldn_getLocale
#undef uldn_keyDisplayName
#undef uldn_keyValueDisplayName
#undef uldn_languageDisplayName
#undef uldn_localeDisplayName
#undef uldn_open
#undef uldn_regionDisplayName
#undef uldn_scriptCodeDisplayName
#undef uldn_scriptDisplayName
#undef uldn_variantDisplayName
#undef ulist_addItemBeginList
#undef ulist_addItemEndList
#undef ulist_close_keyword_values_iterator
#undef ulist_containsString
#undef ulist_count_keyword_values
#undef ulist_createEmptyList
#undef ulist_deleteList
#undef ulist_getListFromEnum
#undef ulist_getListSize
#undef ulist_getNext
#undef ulist_next_keyword_value
#undef ulist_reset_keyword_values_iterator
#undef ulist_resetList
#undef uloc_acceptLanguage
#undef uloc_acceptLanguageFromHTTP
#undef uloc_addLikelySubtags
#undef ULOC_CANADA
#undef ULOC_CANADA_FRENCH
#undef uloc_canonicalize
#undef ULOC_CHINA
#undef ULOC_CHINESE
#undef uloc_countAvailable
#undef ULOC_COUNTRY_CAPACITY
#undef ULOC_ENGLISH
#undef uloc_forLanguageTag
#undef uloc_forLanguageTag_4_6
#undef ULOC_FRANCE
#undef ULOC_FRENCH
#undef ULOC_FULLNAME_CAPACITY
#undef ULOC_GERMAN
#undef ULOC_GERMANY
#undef uloc_getAvailable
#undef uloc_getBaseName
#undef uloc_getCharacterOrientation
#undef uloc_getCountry
#undef uloc_getCurrentCountryID
#undef uloc_getCurrentLanguageID
#undef uloc_getDefault
#undef uloc_getDefault_4_6
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
#undef uloc_getLineOrientation
#undef uloc_getLocaleForLCID
#undef uloc_getName
#undef uloc_getParent
#undef uloc_getScript
#undef uloc_getTableStringWithFallback
#undef uloc_getVariant
#undef ULOC_H
#undef ULOC_ITALIAN
#undef ULOC_ITALY
#undef ULOC_JAPAN
#undef ULOC_JAPANESE
#undef ULOC_KEYWORD_AND_VALUES_CAPACITY
#undef ULOC_KEYWORD_ASSIGN
#undef ULOC_KEYWORD_ASSIGN_UNICODE
#undef ULOC_KEYWORD_ITEM_SEPARATOR
#undef ULOC_KEYWORD_ITEM_SEPARATOR_UNICODE
#undef ULOC_KEYWORD_SEPARATOR
#undef ULOC_KEYWORD_SEPARATOR_UNICODE
#undef ULOC_KEYWORDS_CAPACITY
#undef ULOC_KOREA
#undef ULOC_KOREAN
#undef ULOC_LANG_CAPACITY
#undef uloc_minimizeSubtags
#undef uloc_openKeywordList
#undef uloc_openKeywords
#undef ULOC_PRC
#undef ULOC_SCRIPT_CAPACITY
#undef uloc_setDefault
#undef uloc_setDefault_4_6
#undef uloc_setKeywordValue
#undef ULOC_SIMPLIFIED_CHINESE
#undef ULOC_TAIWAN
#undef uloc_toLanguageTag
#undef uloc_toLanguageTag_4_6
#undef ULOC_TRADITIONAL_CHINESE
#undef ULOC_UK
#undef ULOC_US
#undef ulocdata_close
#undef ulocdata_getCLDRVersion
#undef ulocdata_getDelimiter
#undef ulocdata_getExemplarSet
#undef ulocdata_getLocaleDisplayPattern
#undef ulocdata_getLocaleSeparator
#undef ulocdata_getMeasurementSystem
#undef ulocdata_getNoSubstitute
#undef ulocdata_getPaperSize
#undef ulocdata_open
#undef ulocdata_setNoSubstitute
#undef ulocimp_getCountry
#undef ulocimp_getLanguage
#undef ulocimp_getScript
#undef ULocRuns
#undef UMemory
#undef UMISC_H
#undef umsg_applyPattern
#undef umsg_autoQuoteApostrophe
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
#undef UnhandledEngine
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
#undef UnicodeSetStringSpan
#undef UnicodeString
#undef UNIFILT_H
#undef UNIFUNCT_H
#undef UNIMATCH_H
#undef UNIREPL_H
#undef uniset_getUnicode32Instance
#undef UNISTR_H
#undef unorm_closeIter
#undef unorm_compare
#undef UNORM_COMPARE_NORM_OPTIONS_SHIFT
#undef unorm_concatenate
#undef unorm_getFCDTrieIndex
#undef unorm_getQuickCheck
#undef UNORM_H
#undef UNORM_INPUT_IS_FCD
#undef unorm_isNormalized
#undef unorm_isNormalizedWithOptions
#undef unorm_next
#undef unorm_normalize
#undef unorm_openIter
#undef unorm_previous
#undef unorm_quickCheck
#undef unorm_quickCheckWithOptions
#undef unorm_setIter
#undef unorm2_append
#undef unorm2_close
#undef unorm2_getDecomposition
#undef unorm2_getDecomposition_4_6
#undef unorm2_getInstance
#undef unorm2_hasBoundaryAfter
#undef unorm2_hasBoundaryBefore
#undef unorm2_isInert
#undef unorm2_isNormalized
#undef unorm2_normalize
#undef unorm2_normalizeSecondAndAppend
#undef unorm2_openFiltered
#undef unorm2_quickCheck
#undef unorm2_spanQuickCheckYes
#undef unorm2_swap
#undef unum_applyPattern
#undef unum_clone
#undef unum_close
#undef unum_countAvailable
#undef unum_format
#undef unum_formatDecimal
#undef unum_formatDouble
#undef unum_formatDoubleCurrency
#undef unum_formatInt64
#undef unum_getAttribute
#undef unum_getAvailable
#undef unum_getDoubleAttribute
#undef unum_getLocaleByType
#undef unum_getSymbol
#undef unum_getTextAttribute
#undef unum_open
#undef unum_parse
#undef unum_parseDecimal
#undef unum_parseDouble
#undef unum_parseDoubleCurrency
#undef unum_parseInt64
#undef unum_setAttribute
#undef unum_setDoubleAttribute
#undef unum_setSymbol
#undef unum_setTextAttribute
#undef unum_toPattern
#undef UObject
#undef UOBJECT_DEFINE_ABSTRACT_RTTI_IMPLEMENTATION
#undef UOBJECT_DEFINE_NO_RTTI_IMPLEMENTATION
#undef UOBJECT_DEFINE_RTTI_IMPLEMENTATION
#undef UOBSLETE_H
#undef uplug_closeLibrary
#undef uplug_findLibrary
#undef uplug_getConfiguration
#undef uplug_getConfiguration_4_6
#undef uplug_getContext
#undef uplug_getContext_4_6
#undef uplug_getCurrentLevel
#undef uplug_getCurrentLevel_4_6
#undef uplug_getLibrary
#undef uplug_getLibrary_4_6
#undef uplug_getLibraryName
#undef uplug_getLibraryName_4_6
#undef uplug_getPluginFile
#undef uplug_getPlugInternal
#undef uplug_getPlugLevel
#undef uplug_getPlugLevel_4_6
#undef uplug_getPlugLoadStatus
#undef uplug_getPlugLoadStatus_4_6
#undef uplug_getPlugName
#undef uplug_getPlugName_4_6
#undef uplug_getSymbolName
#undef uplug_getSymbolName_4_6
#undef uplug_init
#undef uplug_loadPlugFromEntrypoint
#undef uplug_loadPlugFromEntrypoint_4_6
#undef uplug_loadPlugFromLibrary
#undef uplug_loadPlugFromLibrary_4_6
#undef UPLUG_NAME_MAX
#undef uplug_nextPlug
#undef uplug_nextPlug_4_6
#undef uplug_openLibrary
#undef uplug_removePlug
#undef uplug_removePlug_4_6
#undef uplug_setContext
#undef uplug_setContext_4_6
#undef uplug_setPlugLevel
#undef uplug_setPlugLevel_4_6
#undef uplug_setPlugName
#undef uplug_setPlugName_4_6
#undef uplug_setPlugNoUnload
#undef uplug_setPlugNoUnload_4_6
#undef UPLUG_TOKEN
#undef upname_swap
#undef UppercaseTransliterator
#undef uprops_getSource
#undef upropsvec_addPropertyStarts
#undef uprv_aestrncpy
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
#undef uprv_collIterateAtEnd
#undef uprv_compareASCIIPropertyNames
#undef uprv_compareEBCDICPropertyNames
#undef uprv_compareInvAscii
#undef uprv_compareInvEbcdic
#undef uprv_compareInvEbcdicAsAscii
#undef uprv_convertToLCID
#undef uprv_convertToPosix
#undef uprv_copyAscii
#undef uprv_copyEbcdic
#undef uprv_decContextClearStatus
#undef uprv_decContextDefault
#undef uprv_decContextGetRounding
#undef uprv_decContextGetStatus
#undef uprv_decContextRestoreStatus
#undef uprv_decContextSaveStatus
#undef uprv_decContextSetRounding
#undef uprv_decContextSetStatus
#undef uprv_decContextSetStatusFromString
#undef uprv_decContextSetStatusFromStringQuiet
#undef uprv_decContextSetStatusQuiet
#undef uprv_decContextStatusToString
#undef uprv_decContextTestEndian
#undef uprv_decContextTestSavedStatus
#undef uprv_decContextTestStatus
#undef uprv_decContextZeroStatus
#undef uprv_decNumberAbs
#undef uprv_decNumberAdd
#undef uprv_decNumberAnd
#undef uprv_decNumberClass
#undef uprv_decNumberClassToString
#undef uprv_decNumberCompare
#undef uprv_decNumberCompareSignal
#undef uprv_decNumberCompareTotal
#undef uprv_decNumberCompareTotalMag
#undef uprv_decNumberCopy
#undef uprv_decNumberCopyAbs
#undef uprv_decNumberCopyNegate
#undef uprv_decNumberCopySign
#undef uprv_decNumberDivide
#undef uprv_decNumberDivideInteger
#undef uprv_decNumberExp
#undef uprv_decNumberFMA
#undef uprv_decNumberFromInt32
#undef uprv_decNumberFromString
#undef uprv_decNumberFromUInt32
#undef uprv_decNumberGetBCD
#undef uprv_decNumberInvert
#undef uprv_decNumberIsNormal
#undef uprv_decNumberIsSubnormal
#undef uprv_decNumberLn
#undef uprv_decNumberLog10
#undef uprv_decNumberLogB
#undef uprv_decNumberMax
#undef uprv_decNumberMaxMag
#undef uprv_decNumberMin
#undef uprv_decNumberMinMag
#undef uprv_decNumberMinus
#undef uprv_decNumberMultiply
#undef uprv_decNumberNextMinus
#undef uprv_decNumberNextPlus
#undef uprv_decNumberNextToward
#undef uprv_decNumberNormalize
#undef uprv_decNumberOr
#undef uprv_decNumberPlus
#undef uprv_decNumberPower
#undef uprv_decNumberQuantize
#undef uprv_decNumberReduce
#undef uprv_decNumberRemainder
#undef uprv_decNumberRemainderNear
#undef uprv_decNumberRescale
#undef uprv_decNumberRotate
#undef uprv_decNumberSameQuantum
#undef uprv_decNumberScaleB
#undef uprv_decNumberSetBCD
#undef uprv_decNumberShift
#undef uprv_decNumberSquareRoot
#undef uprv_decNumberSubtract
#undef uprv_decNumberToEngString
#undef uprv_decNumberToInt32
#undef uprv_decNumberToIntegralExact
#undef uprv_decNumberToIntegralValue
#undef uprv_decNumberToString
#undef uprv_decNumberToUInt32
#undef uprv_decNumberTrim
#undef uprv_decNumberVersion
#undef uprv_decNumberXor
#undef uprv_decNumberZero
#undef uprv_delete_collIterate
#undef uprv_dl_close
#undef uprv_dl_open
#undef uprv_dl_sym
#undef uprv_eastrncpy
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
#undef uprv_getDefaultCodepage_4_6
#undef uprv_getDefaultLocaleID
#undef uprv_getDefaultLocaleID_4_6
#undef uprv_getInfinity
#undef uprv_getMaxCharNameLength
#undef uprv_getMaxValues
#undef uprv_getNaN
#undef uprv_getRawUTCtime
#undef uprv_getStaticCurrencyName
#undef uprv_getUTCtime
#undef uprv_haveProperties
#undef uprv_init_collIterate
#undef uprv_init_pce
#undef uprv_int32Comparator
#undef uprv_isInfinite
#undef uprv_isInvariantString
#undef uprv_isInvariantUString
#undef uprv_isNaN
#undef uprv_isNegativeInfinity
#undef uprv_isPositiveInfinity
#undef uprv_isRuleWhiteSpace
#undef uprv_itou
#undef uprv_log
#undef uprv_malloc
#undef uprv_mapFile
#undef uprv_max
#undef uprv_maximumPtr
#undef uprv_maxMantissa
#undef uprv_min
#undef uprv_modf
#undef uprv_new_collIterate
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
#undef uprv_uca_closeTempTable
#undef uprv_uca_getCodePointFromRaw
#undef uprv_uca_getImplicitFromRaw
#undef uprv_uca_getRawFromCodePoint
#undef uprv_uca_getRawFromImplicit
#undef uprv_uca_initImplicitConstants
#undef uprv_uca_initTempTable
#undef uprv_uint16Comparator
#undef uprv_uint32Comparator
#undef uprv_unmapFile
#undef upvec_cloneArray
#undef upvec_close
#undef upvec_compact
#undef upvec_compactToUTrie2Handler
#undef upvec_compactToUTrie2WithRowIndexes
#undef upvec_getArray
#undef upvec_getRow
#undef upvec_getValue
#undef upvec_open
#undef upvec_setValue
#undef uregex_appendReplacement
#undef uregex_appendReplacementUText
#undef uregex_appendTail
#undef uregex_appendTailUText
#undef uregex_clone
#undef uregex_close
#undef uregex_end
#undef uregex_end64
#undef uregex_end64_4_6
#undef uregex_find
#undef uregex_find64
#undef uregex_find64_4_6
#undef uregex_findNext
#undef uregex_flags
#undef uregex_getFindProgressCallback
#undef uregex_getFindProgressCallback_4_6
#undef uregex_getMatchCallback
#undef uregex_getStackLimit
#undef uregex_getText
#undef uregex_getTimeLimit
#undef uregex_getUText
#undef uregex_group
#undef uregex_groupCount
#undef uregex_groupUText
#undef uregex_groupUTextDeep
#undef UREGEX_H
#undef uregex_hasAnchoringBounds
#undef uregex_hasTransparentBounds
#undef uregex_hitEnd
#undef uregex_lookingAt
#undef uregex_lookingAt64
#undef uregex_lookingAt64_4_6
#undef uregex_matches
#undef uregex_matches64
#undef uregex_matches64_4_6
#undef uregex_open
#undef uregex_openC
#undef uregex_openUText
#undef uregex_pattern
#undef uregex_patternUText
#undef uregex_patternUText_4_6
#undef uregex_regionEnd
#undef uregex_regionEnd64
#undef uregex_regionEnd64_4_6
#undef uregex_regionStart
#undef uregex_regionStart64
#undef uregex_regionStart64_4_6
#undef uregex_replaceAll
#undef uregex_replaceAllUText
#undef uregex_replaceFirst
#undef uregex_replaceFirstUText
#undef uregex_requireEnd
#undef uregex_reset
#undef uregex_reset64
#undef uregex_reset64_4_6
#undef uregex_setFindProgressCallback
#undef uregex_setFindProgressCallback_4_6
#undef uregex_setMatchCallback
#undef uregex_setRegion
#undef uregex_setRegion64
#undef uregex_setRegion64_4_6
#undef uregex_setRegionAndStart
#undef uregex_setRegionAndStart_4_6
#undef uregex_setStackLimit
#undef uregex_setText
#undef uregex_setTimeLimit
#undef uregex_setUText
#undef uregex_split
#undef uregex_splitUText
#undef uregex_start
#undef uregex_start64
#undef uregex_start64_4_6
#undef uregex_ucstr_unescape_charAt
#undef uregex_useAnchoringBounds
#undef uregex_useTransparentBounds
#undef uregex_utext_unescape_charAt
#undef URENAME_H
#undef ures_close
#undef ures_copyResb
#undef ures_countArrayItems
#undef ures_countArrayItems_4_6
#undef ures_findResource
#undef ures_findSubResource
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
#undef ures_getLocale_4_6
#undef ures_getLocaleByType
#undef ures_getLocaleInternal
#undef ures_getName
#undef ures_getNextResource
#undef ures_getNextString
#undef ures_getSize
#undef ures_getString
#undef ures_getStringByIndex
#undef ures_getStringByKey
#undef ures_getStringByKeyWithFallback
#undef ures_getType
#undef ures_getUInt
#undef ures_getUTF8String
#undef ures_getUTF8StringByIndex
#undef ures_getUTF8StringByKey
#undef ures_getVersion
#undef ures_getVersionByKey
#undef ures_getVersionNumber
#undef ures_getVersionNumber_4_6
#undef ures_getVersionNumberInternal
#undef URES_H
#undef ures_hasNext
#undef ures_initStackObject
#undef ures_open
#undef ures_openAvailableLocales
#undef ures_openDirect
#undef ures_openFillIn
#undef ures_openFillIn_4_6
#undef ures_openU
#undef ures_resetIterator
#undef ures_swap
#undef US_INV
#undef uscript_closeRun
#undef uscript_getCode
#undef uscript_getName
#undef uscript_getScript
#undef uscript_getScriptExtensions
#undef uscript_getScriptExtensions_4_6
#undef uscript_getShortName
#undef USCRIPT_H
#undef uscript_hasScript
#undef uscript_hasScript_4_6
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
#undef usearch_search
#undef usearch_search_4_6
#undef usearch_searchBackwards
#undef usearch_searchBackwards_4_6
#undef usearch_setAttribute
#undef usearch_setBreakIterator
#undef usearch_setCollator
#undef usearch_setOffset
#undef usearch_setPattern
#undef usearch_setText
#undef uset_add
#undef uset_addAll
#undef uset_addAllCodePoints
#undef uset_addRange
#undef uset_addString
#undef uset_applyIntPropertyValue
#undef uset_applyPattern
#undef uset_applyPropertyAlias
#undef uset_charAt
#undef uset_clear
#undef uset_clone
#undef uset_cloneAsThawed
#undef uset_close
#undef uset_closeOver
#undef uset_compact
#undef uset_complement
#undef uset_complementAll
#undef uset_contains
#undef uset_containsAll
#undef uset_containsAllCodePoints
#undef uset_containsNone
#undef uset_containsRange
#undef uset_containsSome
#undef uset_containsString
#undef uset_equals
#undef uset_freeze
#undef uset_getItem
#undef uset_getItemCount
#undef uset_getSerializedRange
#undef uset_getSerializedRangeCount
#undef uset_getSerializedSet
#undef uset_indexOf
#undef uset_isEmpty
#undef uset_isFrozen
#undef uset_open
#undef uset_openEmpty
#undef uset_openPattern
#undef uset_openPatternOptions
#undef uset_remove
#undef uset_removeAll
#undef uset_removeAllStrings
#undef uset_removeRange
#undef uset_removeString
#undef uset_resemblesPattern
#undef uset_retain
#undef uset_retainAll
#undef uset_serialize
#undef uset_serializedContains
#undef uset_set
#undef uset_setSerializedToOne
#undef uset_size
#undef uset_span
#undef uset_spanBack
#undef uset_spanBackUTF8
#undef uset_spanUTF8
#undef uset_toPattern
#undef USETITER_H
#undef uspoof_areConfusable
#undef uspoof_areConfusableUnicodeString
#undef uspoof_areConfusableUTF8
#undef uspoof_check
#undef uspoof_checkUnicodeString
#undef uspoof_checkUTF8
#undef uspoof_clone
#undef uspoof_close
#undef uspoof_getAllowedChars
#undef uspoof_getAllowedLocales
#undef uspoof_getAllowedUnicodeSet
#undef uspoof_getChecks
#undef uspoof_getSkeleton
#undef uspoof_getSkeletonUnicodeString
#undef uspoof_getSkeletonUTF8
#undef USPOOF_H
#undef uspoof_open
#undef uspoof_openFromSerialized
#undef uspoof_openFromSource
#undef uspoof_serialize
#undef uspoof_setAllowedChars
#undef uspoof_setAllowedLocales
#undef uspoof_setAllowedUnicodeSet
#undef uspoof_setChecks
#undef uspoof_swap
#undef USPREP_ALLOW_UNASSIGNED
#undef usprep_close
#undef USPREP_DEFAULT
#undef usprep_open
#undef usprep_openByType
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
#undef USYSTEM_H
#undef utext_caseCompare
#undef utext_caseCompare_4_6
#undef utext_caseCompareNativeLimit
#undef utext_caseCompareNativeLimit_4_6
#undef utext_char32At
#undef utext_clone
#undef utext_close
#undef utext_compare
#undef utext_compare_4_6
#undef utext_compareNativeLimit
#undef utext_compareNativeLimit_4_6
#undef utext_copy
#undef utext_current32
#undef UTEXT_CURRENT32
#undef utext_equals
#undef utext_extract
#undef utext_freeze
#undef utext_getNativeIndex
#undef UTEXT_GETNATIVEINDEX
#undef utext_getPreviousNativeIndex
#undef utext_hasMetaData
#undef UTEXT_INITIALIZER
#undef utext_isLengthExpensive
#undef utext_isWritable
#undef utext_moveIndex32
#undef utext_nativeLength
#undef UTEXT_NEXT32
#undef utext_next32
#undef utext_next32From
#undef utext_openCharacterIterator
#undef utext_openConstUnicodeString
#undef utext_openReplaceable
#undef utext_openUChars
#undef utext_openUnicodeString
#undef utext_openUTF8
#undef UTEXT_PREVIOUS32
#undef utext_previous32
#undef utext_previous32From
#undef utext_replace
#undef UTEXT_SETNATIVEINDEX
#undef utext_setNativeIndex
#undef utext_setup
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
#undef utf8_appendCharSafeBody_4_6
#undef UTF8_ARRAY_SIZE
#undef UTF8_BACK_1_SAFE
#undef UTF8_BACK_1_UNSAFE
#undef UTF8_BACK_N_SAFE
#undef UTF8_BACK_N_UNSAFE
#undef utf8_back1SafeBody
#undef utf8_back1SafeBody_4_6
#undef UTF8_CHAR_LENGTH
#undef UTF8_COUNT_TRAIL_BYTES
#undef utf8_countTrailBytes
#undef utf8_countTrailBytes_4_6
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
#undef utf8_nextCharSafeBody_4_6
#undef UTF8_PREV_CHAR_SAFE
#undef UTF8_PREV_CHAR_UNSAFE
#undef utf8_prevCharSafeBody
#undef utf8_prevCharSafeBody_4_6
#undef UTF8_SET_CHAR_LIMIT_SAFE
#undef UTF8_SET_CHAR_LIMIT_UNSAFE
#undef UTF8_SET_CHAR_START_SAFE
#undef UTF8_SET_CHAR_START_UNSAFE
#undef util64_fromDouble
#undef util64_pow
#undef util64_tou
#undef utmscale_fromInt64
#undef utmscale_getTimeScaleValue
#undef UTMSCALE_H
#undef utmscale_toInt64
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
#undef utrans_getAvailableID_4_6
#undef utrans_getID
#undef utrans_getID_4_6
#undef utrans_getUnicodeID
#undef UTRANS_H
#undef utrans_open
#undef utrans_open_4_6
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
#undef utrans_transliterator_cleanup
#undef utrans_transUChars
#undef utrans_unregister
#undef utrans_unregister_4_6
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
#undef utrie2_clone
#undef utrie2_cloneAsThawed
#undef utrie2_close
#undef utrie2_enum
#undef utrie2_enumForLeadSurrogate
#undef utrie2_freeze
#undef utrie2_fromUTrie
#undef utrie2_get32
#undef utrie2_get32FromLeadSurrogateCodeUnit
#undef utrie2_getVersion
#undef utrie2_internalU8NextIndex
#undef utrie2_internalU8PrevIndex
#undef utrie2_isFrozen
#undef utrie2_open
#undef utrie2_openDummy
#undef utrie2_openFromSerialized
#undef utrie2_serialize
#undef utrie2_set32
#undef utrie2_set32ForLeadSurrogateCodeUnit
#undef utrie2_setRange32
#undef utrie2_swap
#undef utrie2_swapAnyVersion
#undef UTrie2Singleton
#undef UTS46
#undef UTYPES_H
#undef UVector
#undef UVector32
#undef UVector64
#undef UVERNUM_H
#undef UVERSION_H
#undef ValueRecord
#undef ValueRuns
#undef VTimeZone
#undef VTZONE_H
#undef VTZReader
#undef VTZWriter
#undef vzone_clone
#undef vzone_close
#undef vzone_countTransitionRules
#undef vzone_equals
#undef vzone_getDynamicClassID
#undef vzone_getLastModified
#undef vzone_getNextTransition
#undef vzone_getOffset
#undef vzone_getOffset2
#undef vzone_getOffset3
#undef vzone_getPreviousTransition
#undef vzone_getRawOffset
#undef vzone_getStaticClassID
#undef vzone_getTZURL
#undef vzone_hasSameRules
#undef vzone_inDaylightTime
#undef vzone_openData
#undef vzone_openID
#undef vzone_setLastModified
#undef vzone_setRawOffset
#undef vzone_setTZURL
#undef vzone_useDaylightTime
#undef vzone_write
#undef vzone_writeFromStart
#undef vzone_writeSimple
#undef XP_CPLUSPLUS
#undef ZoneMeta
#undef ZoneStringFormat
#undef ZoneStringInfo
#undef ZoneStrings
#undef ZoneStringSearchResultHandler
#undef zrule_close
#undef zrule_equals
#undef zrule_getDSTSavings
#undef zrule_getName
#undef zrule_getRawOffset
#undef zrule_isEquivalentTo
#undef ZSFCache
#undef ZSFCacheEntry
#undef ZSFStringPool
#undef ZSFStringPoolChunk
#undef ztrans_adoptFrom
#undef ztrans_adoptTo
#undef ztrans_clone
#undef ztrans_close
#undef ztrans_equals
#undef ztrans_getDynamicClassID
#undef ztrans_getFrom
#undef ztrans_getStaticClassID
#undef ztrans_getTime
#undef ztrans_getTo
#undef ztrans_open
#undef ztrans_openEmpty
#undef ztrans_setFrom
#undef ztrans_setTime
#undef ztrans_setTo

#undef icu
#define icu icu_4_6_
#undef U_AMBIGUOUS_ALIAS_WARNING
#define U_AMBIGUOUS_ALIAS_WARNING U_AMBIGUOUS_ALIAS_WARNING_4_6_
#undef U_ARABIC_NUMBER
#define U_ARABIC_NUMBER U_ARABIC_NUMBER_4_6_
#undef U_ARGUMENT_TYPE_MISMATCH
#define U_ARGUMENT_TYPE_MISMATCH U_ARGUMENT_TYPE_MISMATCH_4_6_
#undef U_BAD_VARIABLE_DEFINITION
#define U_BAD_VARIABLE_DEFINITION U_BAD_VARIABLE_DEFINITION_4_6_
#undef U_BLOCK_SEPARATOR
#define U_BLOCK_SEPARATOR U_BLOCK_SEPARATOR_4_6_
#undef U_BOUNDARY_NEUTRAL
#define U_BOUNDARY_NEUTRAL U_BOUNDARY_NEUTRAL_4_6_
#undef U_BRK_ASSIGN_ERROR
#define U_BRK_ASSIGN_ERROR U_BRK_ASSIGN_ERROR_4_6_
#undef U_BRK_ERROR_LIMIT
#define U_BRK_ERROR_LIMIT U_BRK_ERROR_LIMIT_4_6_
#undef U_BRK_ERROR_START
#define U_BRK_ERROR_START U_BRK_ERROR_START_4_6_
#undef U_BRK_HEX_DIGITS_EXPECTED
#define U_BRK_HEX_DIGITS_EXPECTED U_BRK_HEX_DIGITS_EXPECTED_4_6_
#undef U_BRK_INIT_ERROR
#define U_BRK_INIT_ERROR U_BRK_INIT_ERROR_4_6_
#undef U_BRK_INTERNAL_ERROR
#define U_BRK_INTERNAL_ERROR U_BRK_INTERNAL_ERROR_4_6_
#undef U_BRK_MALFORMED_RULE_TAG
#define U_BRK_MALFORMED_RULE_TAG U_BRK_MALFORMED_RULE_TAG_4_6_
#undef U_BRK_MISMATCHED_PAREN
#define U_BRK_MISMATCHED_PAREN U_BRK_MISMATCHED_PAREN_4_6_
#undef U_BRK_NEW_LINE_IN_QUOTED_STRING
#define U_BRK_NEW_LINE_IN_QUOTED_STRING U_BRK_NEW_LINE_IN_QUOTED_STRING_4_6_
#undef U_BRK_RULE_EMPTY_SET
#define U_BRK_RULE_EMPTY_SET U_BRK_RULE_EMPTY_SET_4_6_
#undef U_BRK_RULE_SYNTAX
#define U_BRK_RULE_SYNTAX U_BRK_RULE_SYNTAX_4_6_
#undef U_BRK_SEMICOLON_EXPECTED
#define U_BRK_SEMICOLON_EXPECTED U_BRK_SEMICOLON_EXPECTED_4_6_
#undef U_BRK_UNCLOSED_SET
#define U_BRK_UNCLOSED_SET U_BRK_UNCLOSED_SET_4_6_
#undef U_BRK_UNDEFINED_VARIABLE
#define U_BRK_UNDEFINED_VARIABLE U_BRK_UNDEFINED_VARIABLE_4_6_
#undef U_BRK_UNRECOGNIZED_OPTION
#define U_BRK_UNRECOGNIZED_OPTION U_BRK_UNRECOGNIZED_OPTION_4_6_
#undef U_BRK_VARIABLE_REDFINITION
#define U_BRK_VARIABLE_REDFINITION U_BRK_VARIABLE_REDFINITION_4_6_
#undef U_BUFFER_OVERFLOW_ERROR
#define U_BUFFER_OVERFLOW_ERROR U_BUFFER_OVERFLOW_ERROR_4_6_
#undef U_CE_NOT_FOUND_ERROR
#define U_CE_NOT_FOUND_ERROR U_CE_NOT_FOUND_ERROR_4_6_
#undef U_CHAR_CATEGORY_COUNT
#define U_CHAR_CATEGORY_COUNT U_CHAR_CATEGORY_COUNT_4_6_
#undef U_CHAR_DIRECTION_COUNT
#define U_CHAR_DIRECTION_COUNT U_CHAR_DIRECTION_COUNT_4_6_
#undef U_CHAR_NAME_CHOICE_COUNT
#define U_CHAR_NAME_CHOICE_COUNT U_CHAR_NAME_CHOICE_COUNT_4_6_
#undef U_COLLATOR_VERSION_MISMATCH
#define U_COLLATOR_VERSION_MISMATCH U_COLLATOR_VERSION_MISMATCH_4_6_
#undef U_COMBINING_SPACING_MARK
#define U_COMBINING_SPACING_MARK U_COMBINING_SPACING_MARK_4_6_
#undef U_COMMON_NUMBER_SEPARATOR
#define U_COMMON_NUMBER_SEPARATOR U_COMMON_NUMBER_SEPARATOR_4_6_
#undef U_CONNECTOR_PUNCTUATION
#define U_CONNECTOR_PUNCTUATION U_CONNECTOR_PUNCTUATION_4_6_
#undef U_CONTROL_CHAR
#define U_CONTROL_CHAR U_CONTROL_CHAR_4_6_
#undef U_CURRENCY_SYMBOL
#define U_CURRENCY_SYMBOL U_CURRENCY_SYMBOL_4_6_
#undef U_DASH_PUNCTUATION
#define U_DASH_PUNCTUATION U_DASH_PUNCTUATION_4_6_
#undef U_DECIMAL_DIGIT_NUMBER
#define U_DECIMAL_DIGIT_NUMBER U_DECIMAL_DIGIT_NUMBER_4_6_
#undef U_DEFAULT_KEYWORD_MISSING
#define U_DEFAULT_KEYWORD_MISSING U_DEFAULT_KEYWORD_MISSING_4_6_
#undef U_DIFFERENT_UCA_VERSION
#define U_DIFFERENT_UCA_VERSION U_DIFFERENT_UCA_VERSION_4_6_
#undef U_DIR_NON_SPACING_MARK
#define U_DIR_NON_SPACING_MARK U_DIR_NON_SPACING_MARK_4_6_
#undef U_DT_CANONICAL
#define U_DT_CANONICAL U_DT_CANONICAL_4_6_
#undef U_DT_CIRCLE
#define U_DT_CIRCLE U_DT_CIRCLE_4_6_
#undef U_DT_COMPAT
#define U_DT_COMPAT U_DT_COMPAT_4_6_
#undef U_DT_COUNT
#define U_DT_COUNT U_DT_COUNT_4_6_
#undef U_DT_FINAL
#define U_DT_FINAL U_DT_FINAL_4_6_
#undef U_DT_FONT
#define U_DT_FONT U_DT_FONT_4_6_
#undef U_DT_FRACTION
#define U_DT_FRACTION U_DT_FRACTION_4_6_
#undef U_DT_INITIAL
#define U_DT_INITIAL U_DT_INITIAL_4_6_
#undef U_DT_ISOLATED
#define U_DT_ISOLATED U_DT_ISOLATED_4_6_
#undef U_DT_MEDIAL
#define U_DT_MEDIAL U_DT_MEDIAL_4_6_
#undef U_DT_NARROW
#define U_DT_NARROW U_DT_NARROW_4_6_
#undef U_DT_NOBREAK
#define U_DT_NOBREAK U_DT_NOBREAK_4_6_
#undef U_DT_NONE
#define U_DT_NONE U_DT_NONE_4_6_
#undef U_DT_SMALL
#define U_DT_SMALL U_DT_SMALL_4_6_
#undef U_DT_SQUARE
#define U_DT_SQUARE U_DT_SQUARE_4_6_
#undef U_DT_SUB
#define U_DT_SUB U_DT_SUB_4_6_
#undef U_DT_SUPER
#define U_DT_SUPER U_DT_SUPER_4_6_
#undef U_DT_VERTICAL
#define U_DT_VERTICAL U_DT_VERTICAL_4_6_
#undef U_DT_WIDE
#define U_DT_WIDE U_DT_WIDE_4_6_
#undef U_DUPLICATE_KEYWORD
#define U_DUPLICATE_KEYWORD U_DUPLICATE_KEYWORD_4_6_
#undef U_EA_AMBIGUOUS
#define U_EA_AMBIGUOUS U_EA_AMBIGUOUS_4_6_
#undef U_EA_COUNT
#define U_EA_COUNT U_EA_COUNT_4_6_
#undef U_EA_FULLWIDTH
#define U_EA_FULLWIDTH U_EA_FULLWIDTH_4_6_
#undef U_EA_HALFWIDTH
#define U_EA_HALFWIDTH U_EA_HALFWIDTH_4_6_
#undef U_EA_NARROW
#define U_EA_NARROW U_EA_NARROW_4_6_
#undef U_EA_NEUTRAL
#define U_EA_NEUTRAL U_EA_NEUTRAL_4_6_
#undef U_EA_WIDE
#define U_EA_WIDE U_EA_WIDE_4_6_
#undef U_ENCLOSING_MARK
#define U_ENCLOSING_MARK U_ENCLOSING_MARK_4_6_
#undef U_END_PUNCTUATION
#define U_END_PUNCTUATION U_END_PUNCTUATION_4_6_
#undef U_ENUM_OUT_OF_SYNC_ERROR
#define U_ENUM_OUT_OF_SYNC_ERROR U_ENUM_OUT_OF_SYNC_ERROR_4_6_
#undef U_ERROR_LIMIT
#define U_ERROR_LIMIT U_ERROR_LIMIT_4_6_
#undef U_ERROR_WARNING_LIMIT
#define U_ERROR_WARNING_LIMIT U_ERROR_WARNING_LIMIT_4_6_
#undef U_ERROR_WARNING_START
#define U_ERROR_WARNING_START U_ERROR_WARNING_START_4_6_
#undef U_EUROPEAN_NUMBER
#define U_EUROPEAN_NUMBER U_EUROPEAN_NUMBER_4_6_
#undef U_EUROPEAN_NUMBER_SEPARATOR
#define U_EUROPEAN_NUMBER_SEPARATOR U_EUROPEAN_NUMBER_SEPARATOR_4_6_
#undef U_EUROPEAN_NUMBER_TERMINATOR
#define U_EUROPEAN_NUMBER_TERMINATOR U_EUROPEAN_NUMBER_TERMINATOR_4_6_
#undef U_EXTENDED_CHAR_NAME
#define U_EXTENDED_CHAR_NAME U_EXTENDED_CHAR_NAME_4_6_
#undef U_FILE_ACCESS_ERROR
#define U_FILE_ACCESS_ERROR U_FILE_ACCESS_ERROR_4_6_
#undef U_FINAL_PUNCTUATION
#define U_FINAL_PUNCTUATION U_FINAL_PUNCTUATION_4_6_
#undef U_FMT_PARSE_ERROR_LIMIT
#define U_FMT_PARSE_ERROR_LIMIT U_FMT_PARSE_ERROR_LIMIT_4_6_
#undef U_FMT_PARSE_ERROR_START
#define U_FMT_PARSE_ERROR_START U_FMT_PARSE_ERROR_START_4_6_
#undef U_FORMAT_CHAR
#define U_FORMAT_CHAR U_FORMAT_CHAR_4_6_
#undef U_GCB_CONTROL
#define U_GCB_CONTROL U_GCB_CONTROL_4_6_
#undef U_GCB_COUNT
#define U_GCB_COUNT U_GCB_COUNT_4_6_
#undef U_GCB_CR
#define U_GCB_CR U_GCB_CR_4_6_
#undef U_GCB_EXTEND
#define U_GCB_EXTEND U_GCB_EXTEND_4_6_
#undef U_GCB_L
#define U_GCB_L U_GCB_L_4_6_
#undef U_GCB_LF
#define U_GCB_LF U_GCB_LF_4_6_
#undef U_GCB_LV
#define U_GCB_LV U_GCB_LV_4_6_
#undef U_GCB_LVT
#define U_GCB_LVT U_GCB_LVT_4_6_
#undef U_GCB_OTHER
#define U_GCB_OTHER U_GCB_OTHER_4_6_
#undef U_GCB_PREPEND
#define U_GCB_PREPEND U_GCB_PREPEND_4_6_
#undef U_GCB_SPACING_MARK
#define U_GCB_SPACING_MARK U_GCB_SPACING_MARK_4_6_
#undef U_GCB_T
#define U_GCB_T U_GCB_T_4_6_
#undef U_GCB_V
#define U_GCB_V U_GCB_V_4_6_
#undef U_GENERAL_OTHER_TYPES
#define U_GENERAL_OTHER_TYPES U_GENERAL_OTHER_TYPES_4_6_
#undef U_HST_COUNT
#define U_HST_COUNT U_HST_COUNT_4_6_
#undef U_HST_LEADING_JAMO
#define U_HST_LEADING_JAMO U_HST_LEADING_JAMO_4_6_
#undef U_HST_LV_SYLLABLE
#define U_HST_LV_SYLLABLE U_HST_LV_SYLLABLE_4_6_
#undef U_HST_LVT_SYLLABLE
#define U_HST_LVT_SYLLABLE U_HST_LVT_SYLLABLE_4_6_
#undef U_HST_NOT_APPLICABLE
#define U_HST_NOT_APPLICABLE U_HST_NOT_APPLICABLE_4_6_
#undef U_HST_TRAILING_JAMO
#define U_HST_TRAILING_JAMO U_HST_TRAILING_JAMO_4_6_
#undef U_HST_VOWEL_JAMO
#define U_HST_VOWEL_JAMO U_HST_VOWEL_JAMO_4_6_
#undef U_IDNA_ACE_PREFIX_ERROR
#define U_IDNA_ACE_PREFIX_ERROR U_IDNA_ACE_PREFIX_ERROR_4_6_
#undef U_IDNA_CHECK_BIDI_ERROR
#define U_IDNA_CHECK_BIDI_ERROR U_IDNA_CHECK_BIDI_ERROR_4_6_
#undef U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR
#define U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR_4_6_
#undef U_IDNA_ERROR_LIMIT
#define U_IDNA_ERROR_LIMIT U_IDNA_ERROR_LIMIT_4_6_
#undef U_IDNA_ERROR_START
#define U_IDNA_ERROR_START U_IDNA_ERROR_START_4_6_
#undef U_IDNA_LABEL_TOO_LONG_ERROR
#define U_IDNA_LABEL_TOO_LONG_ERROR U_IDNA_LABEL_TOO_LONG_ERROR_4_6_
#undef U_IDNA_PROHIBITED_ERROR
#define U_IDNA_PROHIBITED_ERROR U_IDNA_PROHIBITED_ERROR_4_6_
#undef U_IDNA_STD3_ASCII_RULES_ERROR
#define U_IDNA_STD3_ASCII_RULES_ERROR U_IDNA_STD3_ASCII_RULES_ERROR_4_6_
#undef U_IDNA_UNASSIGNED_ERROR
#define U_IDNA_UNASSIGNED_ERROR U_IDNA_UNASSIGNED_ERROR_4_6_
#undef U_IDNA_VERIFICATION_ERROR
#define U_IDNA_VERIFICATION_ERROR U_IDNA_VERIFICATION_ERROR_4_6_
#undef U_IDNA_ZERO_LENGTH_LABEL_ERROR
#define U_IDNA_ZERO_LENGTH_LABEL_ERROR U_IDNA_ZERO_LENGTH_LABEL_ERROR_4_6_
#undef U_ILLEGAL_ARGUMENT_ERROR
#define U_ILLEGAL_ARGUMENT_ERROR U_ILLEGAL_ARGUMENT_ERROR_4_6_
#undef U_ILLEGAL_CHAR_FOUND
#define U_ILLEGAL_CHAR_FOUND U_ILLEGAL_CHAR_FOUND_4_6_
#undef U_ILLEGAL_CHAR_IN_SEGMENT
#define U_ILLEGAL_CHAR_IN_SEGMENT U_ILLEGAL_CHAR_IN_SEGMENT_4_6_
#undef U_ILLEGAL_CHARACTER
#define U_ILLEGAL_CHARACTER U_ILLEGAL_CHARACTER_4_6_
#undef U_ILLEGAL_ESCAPE_SEQUENCE
#define U_ILLEGAL_ESCAPE_SEQUENCE U_ILLEGAL_ESCAPE_SEQUENCE_4_6_
#undef U_ILLEGAL_PAD_POSITION
#define U_ILLEGAL_PAD_POSITION U_ILLEGAL_PAD_POSITION_4_6_
#undef U_INDEX_OUTOFBOUNDS_ERROR
#define U_INDEX_OUTOFBOUNDS_ERROR U_INDEX_OUTOFBOUNDS_ERROR_4_6_
#undef U_INITIAL_PUNCTUATION
#define U_INITIAL_PUNCTUATION U_INITIAL_PUNCTUATION_4_6_
#undef U_INTERNAL_PROGRAM_ERROR
#define U_INTERNAL_PROGRAM_ERROR U_INTERNAL_PROGRAM_ERROR_4_6_
#undef U_INTERNAL_TRANSLITERATOR_ERROR
#define U_INTERNAL_TRANSLITERATOR_ERROR U_INTERNAL_TRANSLITERATOR_ERROR_4_6_
#undef U_INVALID_CHAR_FOUND
#define U_INVALID_CHAR_FOUND U_INVALID_CHAR_FOUND_4_6_
#undef U_INVALID_FORMAT_ERROR
#define U_INVALID_FORMAT_ERROR U_INVALID_FORMAT_ERROR_4_6_
#undef U_INVALID_FUNCTION
#define U_INVALID_FUNCTION U_INVALID_FUNCTION_4_6_
#undef U_INVALID_ID
#define U_INVALID_ID U_INVALID_ID_4_6_
#undef U_INVALID_PROPERTY_PATTERN
#define U_INVALID_PROPERTY_PATTERN U_INVALID_PROPERTY_PATTERN_4_6_
#undef U_INVALID_RBT_SYNTAX
#define U_INVALID_RBT_SYNTAX U_INVALID_RBT_SYNTAX_4_6_
#undef U_INVALID_STATE_ERROR
#define U_INVALID_STATE_ERROR U_INVALID_STATE_ERROR_4_6_
#undef U_INVALID_TABLE_FILE
#define U_INVALID_TABLE_FILE U_INVALID_TABLE_FILE_4_6_
#undef U_INVALID_TABLE_FORMAT
#define U_INVALID_TABLE_FORMAT U_INVALID_TABLE_FORMAT_4_6_
#undef U_INVARIANT_CONVERSION_ERROR
#define U_INVARIANT_CONVERSION_ERROR U_INVARIANT_CONVERSION_ERROR_4_6_
#undef U_JG_AIN
#define U_JG_AIN U_JG_AIN_4_6_
#undef U_JG_ALAPH
#define U_JG_ALAPH U_JG_ALAPH_4_6_
#undef U_JG_ALEF
#define U_JG_ALEF U_JG_ALEF_4_6_
#undef U_JG_BEH
#define U_JG_BEH U_JG_BEH_4_6_
#undef U_JG_BETH
#define U_JG_BETH U_JG_BETH_4_6_
#undef U_JG_BURUSHASKI_YEH_BARREE
#define U_JG_BURUSHASKI_YEH_BARREE U_JG_BURUSHASKI_YEH_BARREE_4_6_
#undef U_JG_COUNT
#define U_JG_COUNT U_JG_COUNT_4_6_
#undef U_JG_DAL
#define U_JG_DAL U_JG_DAL_4_6_
#undef U_JG_DALATH_RISH
#define U_JG_DALATH_RISH U_JG_DALATH_RISH_4_6_
#undef U_JG_E
#define U_JG_E U_JG_E_4_6_
#undef U_JG_FE
#define U_JG_FE U_JG_FE_4_6_
#undef U_JG_FEH
#define U_JG_FEH U_JG_FEH_4_6_
#undef U_JG_FINAL_SEMKATH
#define U_JG_FINAL_SEMKATH U_JG_FINAL_SEMKATH_4_6_
#undef U_JG_GAF
#define U_JG_GAF U_JG_GAF_4_6_
#undef U_JG_GAMAL
#define U_JG_GAMAL U_JG_GAMAL_4_6_
#undef U_JG_HAH
#define U_JG_HAH U_JG_HAH_4_6_
#undef U_JG_HAMZA_ON_HEH_GOAL
#define U_JG_HAMZA_ON_HEH_GOAL U_JG_HAMZA_ON_HEH_GOAL_4_6_
#undef U_JG_HE
#define U_JG_HE U_JG_HE_4_6_
#undef U_JG_HEH
#define U_JG_HEH U_JG_HEH_4_6_
#undef U_JG_HEH_GOAL
#define U_JG_HEH_GOAL U_JG_HEH_GOAL_4_6_
#undef U_JG_HETH
#define U_JG_HETH U_JG_HETH_4_6_
#undef U_JG_KAF
#define U_JG_KAF U_JG_KAF_4_6_
#undef U_JG_KAPH
#define U_JG_KAPH U_JG_KAPH_4_6_
#undef U_JG_KHAPH
#define U_JG_KHAPH U_JG_KHAPH_4_6_
#undef U_JG_KNOTTED_HEH
#define U_JG_KNOTTED_HEH U_JG_KNOTTED_HEH_4_6_
#undef U_JG_LAM
#define U_JG_LAM U_JG_LAM_4_6_
#undef U_JG_LAMADH
#define U_JG_LAMADH U_JG_LAMADH_4_6_
#undef U_JG_MEEM
#define U_JG_MEEM U_JG_MEEM_4_6_
#undef U_JG_MIM
#define U_JG_MIM U_JG_MIM_4_6_
#undef U_JG_NO_JOINING_GROUP
#define U_JG_NO_JOINING_GROUP U_JG_NO_JOINING_GROUP_4_6_
#undef U_JG_NOON
#define U_JG_NOON U_JG_NOON_4_6_
#undef U_JG_NUN
#define U_JG_NUN U_JG_NUN_4_6_
#undef U_JG_PE
#define U_JG_PE U_JG_PE_4_6_
#undef U_JG_QAF
#define U_JG_QAF U_JG_QAF_4_6_
#undef U_JG_QAPH
#define U_JG_QAPH U_JG_QAPH_4_6_
#undef U_JG_REH
#define U_JG_REH U_JG_REH_4_6_
#undef U_JG_REVERSED_PE
#define U_JG_REVERSED_PE U_JG_REVERSED_PE_4_6_
#undef U_JG_SAD
#define U_JG_SAD U_JG_SAD_4_6_
#undef U_JG_SADHE
#define U_JG_SADHE U_JG_SADHE_4_6_
#undef U_JG_SEEN
#define U_JG_SEEN U_JG_SEEN_4_6_
#undef U_JG_SEMKATH
#define U_JG_SEMKATH U_JG_SEMKATH_4_6_
#undef U_JG_SHIN
#define U_JG_SHIN U_JG_SHIN_4_6_
#undef U_JG_SWASH_KAF
#define U_JG_SWASH_KAF U_JG_SWASH_KAF_4_6_
#undef U_JG_SYRIAC_WAW
#define U_JG_SYRIAC_WAW U_JG_SYRIAC_WAW_4_6_
#undef U_JG_TAH
#define U_JG_TAH U_JG_TAH_4_6_
#undef U_JG_TAW
#define U_JG_TAW U_JG_TAW_4_6_
#undef U_JG_TEH_MARBUTA
#define U_JG_TEH_MARBUTA U_JG_TEH_MARBUTA_4_6_
#undef U_JG_TETH
#define U_JG_TETH U_JG_TETH_4_6_
#undef U_JG_WAW
#define U_JG_WAW U_JG_WAW_4_6_
#undef U_JG_YEH
#define U_JG_YEH U_JG_YEH_4_6_
#undef U_JG_YEH_BARREE
#define U_JG_YEH_BARREE U_JG_YEH_BARREE_4_6_
#undef U_JG_YEH_WITH_TAIL
#define U_JG_YEH_WITH_TAIL U_JG_YEH_WITH_TAIL_4_6_
#undef U_JG_YUDH
#define U_JG_YUDH U_JG_YUDH_4_6_
#undef U_JG_YUDH_HE
#define U_JG_YUDH_HE U_JG_YUDH_HE_4_6_
#undef U_JG_ZAIN
#define U_JG_ZAIN U_JG_ZAIN_4_6_
#undef U_JG_ZHAIN
#define U_JG_ZHAIN U_JG_ZHAIN_4_6_
#undef U_JT_COUNT
#define U_JT_COUNT U_JT_COUNT_4_6_
#undef U_JT_DUAL_JOINING
#define U_JT_DUAL_JOINING U_JT_DUAL_JOINING_4_6_
#undef U_JT_JOIN_CAUSING
#define U_JT_JOIN_CAUSING U_JT_JOIN_CAUSING_4_6_
#undef U_JT_LEFT_JOINING
#define U_JT_LEFT_JOINING U_JT_LEFT_JOINING_4_6_
#undef U_JT_NON_JOINING
#define U_JT_NON_JOINING U_JT_NON_JOINING_4_6_
#undef U_JT_RIGHT_JOINING
#define U_JT_RIGHT_JOINING U_JT_RIGHT_JOINING_4_6_
#undef U_JT_TRANSPARENT
#define U_JT_TRANSPARENT U_JT_TRANSPARENT_4_6_
#undef U_LB_ALPHABETIC
#define U_LB_ALPHABETIC U_LB_ALPHABETIC_4_6_
#undef U_LB_AMBIGUOUS
#define U_LB_AMBIGUOUS U_LB_AMBIGUOUS_4_6_
#undef U_LB_BREAK_AFTER
#define U_LB_BREAK_AFTER U_LB_BREAK_AFTER_4_6_
#undef U_LB_BREAK_BEFORE
#define U_LB_BREAK_BEFORE U_LB_BREAK_BEFORE_4_6_
#undef U_LB_BREAK_BOTH
#define U_LB_BREAK_BOTH U_LB_BREAK_BOTH_4_6_
#undef U_LB_BREAK_SYMBOLS
#define U_LB_BREAK_SYMBOLS U_LB_BREAK_SYMBOLS_4_6_
#undef U_LB_CARRIAGE_RETURN
#define U_LB_CARRIAGE_RETURN U_LB_CARRIAGE_RETURN_4_6_
#undef U_LB_CLOSE_PUNCTUATION
#define U_LB_CLOSE_PUNCTUATION U_LB_CLOSE_PUNCTUATION_4_6_
#undef U_LB_COMBINING_MARK
#define U_LB_COMBINING_MARK U_LB_COMBINING_MARK_4_6_
#undef U_LB_COMPLEX_CONTEXT
#define U_LB_COMPLEX_CONTEXT U_LB_COMPLEX_CONTEXT_4_6_
#undef U_LB_CONTINGENT_BREAK
#define U_LB_CONTINGENT_BREAK U_LB_CONTINGENT_BREAK_4_6_
#undef U_LB_COUNT
#define U_LB_COUNT U_LB_COUNT_4_6_
#undef U_LB_EXCLAMATION
#define U_LB_EXCLAMATION U_LB_EXCLAMATION_4_6_
#undef U_LB_GLUE
#define U_LB_GLUE U_LB_GLUE_4_6_
#undef U_LB_H2
#define U_LB_H2 U_LB_H2_4_6_
#undef U_LB_H3
#define U_LB_H3 U_LB_H3_4_6_
#undef U_LB_HYPHEN
#define U_LB_HYPHEN U_LB_HYPHEN_4_6_
#undef U_LB_IDEOGRAPHIC
#define U_LB_IDEOGRAPHIC U_LB_IDEOGRAPHIC_4_6_
#undef U_LB_INFIX_NUMERIC
#define U_LB_INFIX_NUMERIC U_LB_INFIX_NUMERIC_4_6_
#undef U_LB_INSEPARABLE
#define U_LB_INSEPARABLE U_LB_INSEPARABLE_4_6_
#undef U_LB_INSEPERABLE
#define U_LB_INSEPERABLE U_LB_INSEPERABLE_4_6_
#undef U_LB_JL
#define U_LB_JL U_LB_JL_4_6_
#undef U_LB_JT
#define U_LB_JT U_LB_JT_4_6_
#undef U_LB_JV
#define U_LB_JV U_LB_JV_4_6_
#undef U_LB_LINE_FEED
#define U_LB_LINE_FEED U_LB_LINE_FEED_4_6_
#undef U_LB_MANDATORY_BREAK
#define U_LB_MANDATORY_BREAK U_LB_MANDATORY_BREAK_4_6_
#undef U_LB_NEXT_LINE
#define U_LB_NEXT_LINE U_LB_NEXT_LINE_4_6_
#undef U_LB_NONSTARTER
#define U_LB_NONSTARTER U_LB_NONSTARTER_4_6_
#undef U_LB_NUMERIC
#define U_LB_NUMERIC U_LB_NUMERIC_4_6_
#undef U_LB_OPEN_PUNCTUATION
#define U_LB_OPEN_PUNCTUATION U_LB_OPEN_PUNCTUATION_4_6_
#undef U_LB_POSTFIX_NUMERIC
#define U_LB_POSTFIX_NUMERIC U_LB_POSTFIX_NUMERIC_4_6_
#undef U_LB_PREFIX_NUMERIC
#define U_LB_PREFIX_NUMERIC U_LB_PREFIX_NUMERIC_4_6_
#undef U_LB_QUOTATION
#define U_LB_QUOTATION U_LB_QUOTATION_4_6_
#undef U_LB_SPACE
#define U_LB_SPACE U_LB_SPACE_4_6_
#undef U_LB_SURROGATE
#define U_LB_SURROGATE U_LB_SURROGATE_4_6_
#undef U_LB_UNKNOWN
#define U_LB_UNKNOWN U_LB_UNKNOWN_4_6_
#undef U_LB_WORD_JOINER
#define U_LB_WORD_JOINER U_LB_WORD_JOINER_4_6_
#undef U_LB_ZWSPACE
#define U_LB_ZWSPACE U_LB_ZWSPACE_4_6_
#undef U_LEFT_TO_RIGHT
#define U_LEFT_TO_RIGHT U_LEFT_TO_RIGHT_4_6_
#undef U_LEFT_TO_RIGHT_EMBEDDING
#define U_LEFT_TO_RIGHT_EMBEDDING U_LEFT_TO_RIGHT_EMBEDDING_4_6_
#undef U_LEFT_TO_RIGHT_OVERRIDE
#define U_LEFT_TO_RIGHT_OVERRIDE U_LEFT_TO_RIGHT_OVERRIDE_4_6_
#undef U_LETTER_NUMBER
#define U_LETTER_NUMBER U_LETTER_NUMBER_4_6_
#undef U_LINE_SEPARATOR
#define U_LINE_SEPARATOR U_LINE_SEPARATOR_4_6_
#undef U_LONG_PROPERTY_NAME
#define U_LONG_PROPERTY_NAME U_LONG_PROPERTY_NAME_4_6_
#undef U_LOWERCASE_LETTER
#define U_LOWERCASE_LETTER U_LOWERCASE_LETTER_4_6_
#undef U_MALFORMED_EXPONENTIAL_PATTERN
#define U_MALFORMED_EXPONENTIAL_PATTERN U_MALFORMED_EXPONENTIAL_PATTERN_4_6_
#undef U_MALFORMED_PRAGMA
#define U_MALFORMED_PRAGMA U_MALFORMED_PRAGMA_4_6_
#undef U_MALFORMED_RULE
#define U_MALFORMED_RULE U_MALFORMED_RULE_4_6_
#undef U_MALFORMED_SET
#define U_MALFORMED_SET U_MALFORMED_SET_4_6_
#undef U_MALFORMED_SYMBOL_REFERENCE
#define U_MALFORMED_SYMBOL_REFERENCE U_MALFORMED_SYMBOL_REFERENCE_4_6_
#undef U_MALFORMED_UNICODE_ESCAPE
#define U_MALFORMED_UNICODE_ESCAPE U_MALFORMED_UNICODE_ESCAPE_4_6_
#undef U_MALFORMED_VARIABLE_DEFINITION
#define U_MALFORMED_VARIABLE_DEFINITION U_MALFORMED_VARIABLE_DEFINITION_4_6_
#undef U_MALFORMED_VARIABLE_REFERENCE
#define U_MALFORMED_VARIABLE_REFERENCE U_MALFORMED_VARIABLE_REFERENCE_4_6_
#undef U_MATH_SYMBOL
#define U_MATH_SYMBOL U_MATH_SYMBOL_4_6_
#undef U_MEMORY_ALLOCATION_ERROR
#define U_MEMORY_ALLOCATION_ERROR U_MEMORY_ALLOCATION_ERROR_4_6_
#undef U_MESSAGE_PARSE_ERROR
#define U_MESSAGE_PARSE_ERROR U_MESSAGE_PARSE_ERROR_4_6_
#undef U_MISMATCHED_SEGMENT_DELIMITERS
#define U_MISMATCHED_SEGMENT_DELIMITERS U_MISMATCHED_SEGMENT_DELIMITERS_4_6_
#undef U_MISPLACED_ANCHOR_START
#define U_MISPLACED_ANCHOR_START U_MISPLACED_ANCHOR_START_4_6_
#undef U_MISPLACED_COMPOUND_FILTER
#define U_MISPLACED_COMPOUND_FILTER U_MISPLACED_COMPOUND_FILTER_4_6_
#undef U_MISPLACED_CURSOR_OFFSET
#define U_MISPLACED_CURSOR_OFFSET U_MISPLACED_CURSOR_OFFSET_4_6_
#undef U_MISPLACED_QUANTIFIER
#define U_MISPLACED_QUANTIFIER U_MISPLACED_QUANTIFIER_4_6_
#undef U_MISSING_OPERATOR
#define U_MISSING_OPERATOR U_MISSING_OPERATOR_4_6_
#undef U_MISSING_RESOURCE_ERROR
#define U_MISSING_RESOURCE_ERROR U_MISSING_RESOURCE_ERROR_4_6_
#undef U_MISSING_SEGMENT_CLOSE
#define U_MISSING_SEGMENT_CLOSE U_MISSING_SEGMENT_CLOSE_4_6_
#undef U_MODIFIER_LETTER
#define U_MODIFIER_LETTER U_MODIFIER_LETTER_4_6_
#undef U_MODIFIER_SYMBOL
#define U_MODIFIER_SYMBOL U_MODIFIER_SYMBOL_4_6_
#undef U_MULTIPLE_ANTE_CONTEXTS
#define U_MULTIPLE_ANTE_CONTEXTS U_MULTIPLE_ANTE_CONTEXTS_4_6_
#undef U_MULTIPLE_COMPOUND_FILTERS
#define U_MULTIPLE_COMPOUND_FILTERS U_MULTIPLE_COMPOUND_FILTERS_4_6_
#undef U_MULTIPLE_CURSORS
#define U_MULTIPLE_CURSORS U_MULTIPLE_CURSORS_4_6_
#undef U_MULTIPLE_DECIMAL_SEPARATORS
#define U_MULTIPLE_DECIMAL_SEPARATORS U_MULTIPLE_DECIMAL_SEPARATORS_4_6_
#undef U_MULTIPLE_DECIMAL_SEPERATORS
#define U_MULTIPLE_DECIMAL_SEPERATORS U_MULTIPLE_DECIMAL_SEPERATORS_4_6_
#undef U_MULTIPLE_EXPONENTIAL_SYMBOLS
#define U_MULTIPLE_EXPONENTIAL_SYMBOLS U_MULTIPLE_EXPONENTIAL_SYMBOLS_4_6_
#undef U_MULTIPLE_PAD_SPECIFIERS
#define U_MULTIPLE_PAD_SPECIFIERS U_MULTIPLE_PAD_SPECIFIERS_4_6_
#undef U_MULTIPLE_PERCENT_SYMBOLS
#define U_MULTIPLE_PERCENT_SYMBOLS U_MULTIPLE_PERCENT_SYMBOLS_4_6_
#undef U_MULTIPLE_PERMILL_SYMBOLS
#define U_MULTIPLE_PERMILL_SYMBOLS U_MULTIPLE_PERMILL_SYMBOLS_4_6_
#undef U_MULTIPLE_POST_CONTEXTS
#define U_MULTIPLE_POST_CONTEXTS U_MULTIPLE_POST_CONTEXTS_4_6_
#undef U_NO_SPACE_AVAILABLE
#define U_NO_SPACE_AVAILABLE U_NO_SPACE_AVAILABLE_4_6_
#undef U_NO_WRITE_PERMISSION
#define U_NO_WRITE_PERMISSION U_NO_WRITE_PERMISSION_4_6_
#undef U_NON_SPACING_MARK
#define U_NON_SPACING_MARK U_NON_SPACING_MARK_4_6_
#undef U_NT_COUNT
#define U_NT_COUNT U_NT_COUNT_4_6_
#undef U_NT_DECIMAL
#define U_NT_DECIMAL U_NT_DECIMAL_4_6_
#undef U_NT_DIGIT
#define U_NT_DIGIT U_NT_DIGIT_4_6_
#undef U_NT_NONE
#define U_NT_NONE U_NT_NONE_4_6_
#undef U_NT_NUMERIC
#define U_NT_NUMERIC U_NT_NUMERIC_4_6_
#undef U_OTHER_LETTER
#define U_OTHER_LETTER U_OTHER_LETTER_4_6_
#undef U_OTHER_NEUTRAL
#define U_OTHER_NEUTRAL U_OTHER_NEUTRAL_4_6_
#undef U_OTHER_NUMBER
#define U_OTHER_NUMBER U_OTHER_NUMBER_4_6_
#undef U_OTHER_PUNCTUATION
#define U_OTHER_PUNCTUATION U_OTHER_PUNCTUATION_4_6_
#undef U_OTHER_SYMBOL
#define U_OTHER_SYMBOL U_OTHER_SYMBOL_4_6_
#undef U_PARAGRAPH_SEPARATOR
#define U_PARAGRAPH_SEPARATOR U_PARAGRAPH_SEPARATOR_4_6_
#undef U_PARSE_CONTEXT_LEN
#define U_PARSE_CONTEXT_LEN U_PARSE_CONTEXT_LEN_4_6_
#undef U_PARSE_ERROR
#define U_PARSE_ERROR U_PARSE_ERROR_4_6_
#undef U_PARSE_ERROR_LIMIT
#define U_PARSE_ERROR_LIMIT U_PARSE_ERROR_LIMIT_4_6_
#undef U_PARSE_ERROR_START
#define U_PARSE_ERROR_START U_PARSE_ERROR_START_4_6_
#undef U_PATTERN_SYNTAX_ERROR
#define U_PATTERN_SYNTAX_ERROR U_PATTERN_SYNTAX_ERROR_4_6_
#undef U_POP_DIRECTIONAL_FORMAT
#define U_POP_DIRECTIONAL_FORMAT U_POP_DIRECTIONAL_FORMAT_4_6_
#undef U_PRIMARY_TOO_LONG_ERROR
#define U_PRIMARY_TOO_LONG_ERROR U_PRIMARY_TOO_LONG_ERROR_4_6_
#undef U_PRIVATE_USE_CHAR
#define U_PRIVATE_USE_CHAR U_PRIVATE_USE_CHAR_4_6_
#undef U_PROPERTY_NAME_CHOICE_COUNT
#define U_PROPERTY_NAME_CHOICE_COUNT U_PROPERTY_NAME_CHOICE_COUNT_4_6_
#undef U_REGEX_BAD_ESCAPE_SEQUENCE
#define U_REGEX_BAD_ESCAPE_SEQUENCE U_REGEX_BAD_ESCAPE_SEQUENCE_4_6_
#undef U_REGEX_BAD_INTERVAL
#define U_REGEX_BAD_INTERVAL U_REGEX_BAD_INTERVAL_4_6_
#undef U_REGEX_ERROR_LIMIT
#define U_REGEX_ERROR_LIMIT U_REGEX_ERROR_LIMIT_4_6_
#undef U_REGEX_ERROR_START
#define U_REGEX_ERROR_START U_REGEX_ERROR_START_4_6_
#undef U_REGEX_INTERNAL_ERROR
#define U_REGEX_INTERNAL_ERROR U_REGEX_INTERNAL_ERROR_4_6_
#undef U_REGEX_INVALID_BACK_REF
#define U_REGEX_INVALID_BACK_REF U_REGEX_INVALID_BACK_REF_4_6_
#undef U_REGEX_INVALID_FLAG
#define U_REGEX_INVALID_FLAG U_REGEX_INVALID_FLAG_4_6_
#undef U_REGEX_INVALID_RANGE
#define U_REGEX_INVALID_RANGE U_REGEX_INVALID_RANGE_4_6_
#undef U_REGEX_INVALID_STATE
#define U_REGEX_INVALID_STATE U_REGEX_INVALID_STATE_4_6_
#undef U_REGEX_LOOK_BEHIND_LIMIT
#define U_REGEX_LOOK_BEHIND_LIMIT U_REGEX_LOOK_BEHIND_LIMIT_4_6_
#undef U_REGEX_MAX_LT_MIN
#define U_REGEX_MAX_LT_MIN U_REGEX_MAX_LT_MIN_4_6_
#undef U_REGEX_MISMATCHED_PAREN
#define U_REGEX_MISMATCHED_PAREN U_REGEX_MISMATCHED_PAREN_4_6_
#undef U_REGEX_MISSING_CLOSE_BRACKET
#define U_REGEX_MISSING_CLOSE_BRACKET U_REGEX_MISSING_CLOSE_BRACKET_4_6_
#undef U_REGEX_NUMBER_TOO_BIG
#define U_REGEX_NUMBER_TOO_BIG U_REGEX_NUMBER_TOO_BIG_4_6_
#undef U_REGEX_OCTAL_TOO_BIG
#define U_REGEX_OCTAL_TOO_BIG U_REGEX_OCTAL_TOO_BIG_4_6_
#undef U_REGEX_PROPERTY_SYNTAX
#define U_REGEX_PROPERTY_SYNTAX U_REGEX_PROPERTY_SYNTAX_4_6_
#undef U_REGEX_RULE_SYNTAX
#define U_REGEX_RULE_SYNTAX U_REGEX_RULE_SYNTAX_4_6_
#undef U_REGEX_SET_CONTAINS_STRING
#define U_REGEX_SET_CONTAINS_STRING U_REGEX_SET_CONTAINS_STRING_4_6_
#undef U_REGEX_STACK_OVERFLOW
#define U_REGEX_STACK_OVERFLOW U_REGEX_STACK_OVERFLOW_4_6_
#undef U_REGEX_STOPPED_BY_CALLER
#define U_REGEX_STOPPED_BY_CALLER U_REGEX_STOPPED_BY_CALLER_4_6_
#undef U_REGEX_TIME_OUT
#define U_REGEX_TIME_OUT U_REGEX_TIME_OUT_4_6_
#undef U_REGEX_UNIMPLEMENTED
#define U_REGEX_UNIMPLEMENTED U_REGEX_UNIMPLEMENTED_4_6_
#undef U_RESOURCE_TYPE_MISMATCH
#define U_RESOURCE_TYPE_MISMATCH U_RESOURCE_TYPE_MISMATCH_4_6_
#undef U_RIGHT_TO_LEFT
#define U_RIGHT_TO_LEFT U_RIGHT_TO_LEFT_4_6_
#undef U_RIGHT_TO_LEFT_ARABIC
#define U_RIGHT_TO_LEFT_ARABIC U_RIGHT_TO_LEFT_ARABIC_4_6_
#undef U_RIGHT_TO_LEFT_EMBEDDING
#define U_RIGHT_TO_LEFT_EMBEDDING U_RIGHT_TO_LEFT_EMBEDDING_4_6_
#undef U_RIGHT_TO_LEFT_OVERRIDE
#define U_RIGHT_TO_LEFT_OVERRIDE U_RIGHT_TO_LEFT_OVERRIDE_4_6_
#undef U_RULE_MASK_ERROR
#define U_RULE_MASK_ERROR U_RULE_MASK_ERROR_4_6_
#undef U_SAFECLONE_ALLOCATED_WARNING
#define U_SAFECLONE_ALLOCATED_WARNING U_SAFECLONE_ALLOCATED_WARNING_4_6_
#undef U_SB_ATERM
#define U_SB_ATERM U_SB_ATERM_4_6_
#undef U_SB_CLOSE
#define U_SB_CLOSE U_SB_CLOSE_4_6_
#undef U_SB_COUNT
#define U_SB_COUNT U_SB_COUNT_4_6_
#undef U_SB_CR
#define U_SB_CR U_SB_CR_4_6_
#undef U_SB_EXTEND
#define U_SB_EXTEND U_SB_EXTEND_4_6_
#undef U_SB_FORMAT
#define U_SB_FORMAT U_SB_FORMAT_4_6_
#undef U_SB_LF
#define U_SB_LF U_SB_LF_4_6_
#undef U_SB_LOWER
#define U_SB_LOWER U_SB_LOWER_4_6_
#undef U_SB_NUMERIC
#define U_SB_NUMERIC U_SB_NUMERIC_4_6_
#undef U_SB_OLETTER
#define U_SB_OLETTER U_SB_OLETTER_4_6_
#undef U_SB_OTHER
#define U_SB_OTHER U_SB_OTHER_4_6_
#undef U_SB_SCONTINUE
#define U_SB_SCONTINUE U_SB_SCONTINUE_4_6_
#undef U_SB_SEP
#define U_SB_SEP U_SB_SEP_4_6_
#undef U_SB_SP
#define U_SB_SP U_SB_SP_4_6_
#undef U_SB_STERM
#define U_SB_STERM U_SB_STERM_4_6_
#undef U_SB_UPPER
#define U_SB_UPPER U_SB_UPPER_4_6_
#undef U_SEGMENT_SEPARATOR
#define U_SEGMENT_SEPARATOR U_SEGMENT_SEPARATOR_4_6_
#undef U_SHORT_PROPERTY_NAME
#define U_SHORT_PROPERTY_NAME U_SHORT_PROPERTY_NAME_4_6_
#undef U_SORT_KEY_TOO_SHORT_WARNING
#define U_SORT_KEY_TOO_SHORT_WARNING U_SORT_KEY_TOO_SHORT_WARNING_4_6_
#undef U_SPACE_SEPARATOR
#define U_SPACE_SEPARATOR U_SPACE_SEPARATOR_4_6_
#undef U_STANDARD_ERROR_LIMIT
#define U_STANDARD_ERROR_LIMIT U_STANDARD_ERROR_LIMIT_4_6_
#undef U_START_PUNCTUATION
#define U_START_PUNCTUATION U_START_PUNCTUATION_4_6_
#undef U_STATE_OLD_WARNING
#define U_STATE_OLD_WARNING U_STATE_OLD_WARNING_4_6_
#undef U_STATE_TOO_OLD_ERROR
#define U_STATE_TOO_OLD_ERROR U_STATE_TOO_OLD_ERROR_4_6_
#undef U_STRING_NOT_TERMINATED_WARNING
#define U_STRING_NOT_TERMINATED_WARNING U_STRING_NOT_TERMINATED_WARNING_4_6_
#undef U_STRINGPREP_CHECK_BIDI_ERROR
#define U_STRINGPREP_CHECK_BIDI_ERROR U_STRINGPREP_CHECK_BIDI_ERROR_4_6_
#undef U_STRINGPREP_PROHIBITED_ERROR
#define U_STRINGPREP_PROHIBITED_ERROR U_STRINGPREP_PROHIBITED_ERROR_4_6_
#undef U_STRINGPREP_UNASSIGNED_ERROR
#define U_STRINGPREP_UNASSIGNED_ERROR U_STRINGPREP_UNASSIGNED_ERROR_4_6_
#undef U_SURROGATE
#define U_SURROGATE U_SURROGATE_4_6_
#undef U_TITLECASE_LETTER
#define U_TITLECASE_LETTER U_TITLECASE_LETTER_4_6_
#undef U_TOO_MANY_ALIASES_ERROR
#define U_TOO_MANY_ALIASES_ERROR U_TOO_MANY_ALIASES_ERROR_4_6_
#undef U_TRAILING_BACKSLASH
#define U_TRAILING_BACKSLASH U_TRAILING_BACKSLASH_4_6_
#undef U_TRUNCATED_CHAR_FOUND
#define U_TRUNCATED_CHAR_FOUND U_TRUNCATED_CHAR_FOUND_4_6_
#undef U_UNASSIGNED
#define U_UNASSIGNED U_UNASSIGNED_4_6_
#undef U_UNCLOSED_SEGMENT
#define U_UNCLOSED_SEGMENT U_UNCLOSED_SEGMENT_4_6_
#undef U_UNDEFINED_KEYWORD
#define U_UNDEFINED_KEYWORD U_UNDEFINED_KEYWORD_4_6_
#undef U_UNDEFINED_SEGMENT_REFERENCE
#define U_UNDEFINED_SEGMENT_REFERENCE U_UNDEFINED_SEGMENT_REFERENCE_4_6_
#undef U_UNDEFINED_VARIABLE
#define U_UNDEFINED_VARIABLE U_UNDEFINED_VARIABLE_4_6_
#undef U_UNEXPECTED_TOKEN
#define U_UNEXPECTED_TOKEN U_UNEXPECTED_TOKEN_4_6_
#undef U_UNICODE_10_CHAR_NAME
#define U_UNICODE_10_CHAR_NAME U_UNICODE_10_CHAR_NAME_4_6_
#undef U_UNICODE_CHAR_NAME
#define U_UNICODE_CHAR_NAME U_UNICODE_CHAR_NAME_4_6_
#undef U_UNMATCHED_BRACES
#define U_UNMATCHED_BRACES U_UNMATCHED_BRACES_4_6_
#undef U_UNQUOTED_SPECIAL
#define U_UNQUOTED_SPECIAL U_UNQUOTED_SPECIAL_4_6_
#undef U_UNSUPPORTED_ATTRIBUTE
#define U_UNSUPPORTED_ATTRIBUTE U_UNSUPPORTED_ATTRIBUTE_4_6_
#undef U_UNSUPPORTED_ERROR
#define U_UNSUPPORTED_ERROR U_UNSUPPORTED_ERROR_4_6_
#undef U_UNSUPPORTED_ESCAPE_SEQUENCE
#define U_UNSUPPORTED_ESCAPE_SEQUENCE U_UNSUPPORTED_ESCAPE_SEQUENCE_4_6_
#undef U_UNSUPPORTED_PROPERTY
#define U_UNSUPPORTED_PROPERTY U_UNSUPPORTED_PROPERTY_4_6_
#undef U_UNTERMINATED_QUOTE
#define U_UNTERMINATED_QUOTE U_UNTERMINATED_QUOTE_4_6_
#undef U_UPPERCASE_LETTER
#define U_UPPERCASE_LETTER U_UPPERCASE_LETTER_4_6_
#undef U_USELESS_COLLATOR_ERROR
#define U_USELESS_COLLATOR_ERROR U_USELESS_COLLATOR_ERROR_4_6_
#undef U_USING_DEFAULT_WARNING
#define U_USING_DEFAULT_WARNING U_USING_DEFAULT_WARNING_4_6_
#undef U_USING_FALLBACK_WARNING
#define U_USING_FALLBACK_WARNING U_USING_FALLBACK_WARNING_4_6_
#undef U_VARIABLE_RANGE_EXHAUSTED
#define U_VARIABLE_RANGE_EXHAUSTED U_VARIABLE_RANGE_EXHAUSTED_4_6_
#undef U_VARIABLE_RANGE_OVERLAP
#define U_VARIABLE_RANGE_OVERLAP U_VARIABLE_RANGE_OVERLAP_4_6_
#undef U_WB_ALETTER
#define U_WB_ALETTER U_WB_ALETTER_4_6_
#undef U_WB_COUNT
#define U_WB_COUNT U_WB_COUNT_4_6_
#undef U_WB_CR
#define U_WB_CR U_WB_CR_4_6_
#undef U_WB_EXTEND
#define U_WB_EXTEND U_WB_EXTEND_4_6_
#undef U_WB_EXTENDNUMLET
#define U_WB_EXTENDNUMLET U_WB_EXTENDNUMLET_4_6_
#undef U_WB_FORMAT
#define U_WB_FORMAT U_WB_FORMAT_4_6_
#undef U_WB_KATAKANA
#define U_WB_KATAKANA U_WB_KATAKANA_4_6_
#undef U_WB_LF
#define U_WB_LF U_WB_LF_4_6_
#undef U_WB_MIDLETTER
#define U_WB_MIDLETTER U_WB_MIDLETTER_4_6_
#undef U_WB_MIDNUM
#define U_WB_MIDNUM U_WB_MIDNUM_4_6_
#undef U_WB_MIDNUMLET
#define U_WB_MIDNUMLET U_WB_MIDNUMLET_4_6_
#undef U_WB_NEWLINE
#define U_WB_NEWLINE U_WB_NEWLINE_4_6_
#undef U_WB_NUMERIC
#define U_WB_NUMERIC U_WB_NUMERIC_4_6_
#undef U_WB_OTHER
#define U_WB_OTHER U_WB_OTHER_4_6_
#undef U_WHITE_SPACE_NEUTRAL
#define U_WHITE_SPACE_NEUTRAL U_WHITE_SPACE_NEUTRAL_4_6_
#undef U_ZERO_ERROR
#define U_ZERO_ERROR U_ZERO_ERROR_4_6_
#undef UAcceptResult
#define UAcceptResult UAcceptResult_4_6_
#undef UBLOCK_AEGEAN_NUMBERS
#define UBLOCK_AEGEAN_NUMBERS UBLOCK_AEGEAN_NUMBERS_4_6_
#undef UBLOCK_ALPHABETIC_PRESENTATION_FORMS
#define UBLOCK_ALPHABETIC_PRESENTATION_FORMS UBLOCK_ALPHABETIC_PRESENTATION_FORMS_4_6_
#undef UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION
#define UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION_4_6_
#undef UBLOCK_ANCIENT_GREEK_NUMBERS
#define UBLOCK_ANCIENT_GREEK_NUMBERS UBLOCK_ANCIENT_GREEK_NUMBERS_4_6_
#undef UBLOCK_ANCIENT_SYMBOLS
#define UBLOCK_ANCIENT_SYMBOLS UBLOCK_ANCIENT_SYMBOLS_4_6_
#undef UBLOCK_ARABIC
#define UBLOCK_ARABIC UBLOCK_ARABIC_4_6_
#undef UBLOCK_ARABIC_PRESENTATION_FORMS_A
#define UBLOCK_ARABIC_PRESENTATION_FORMS_A UBLOCK_ARABIC_PRESENTATION_FORMS_A_4_6_
#undef UBLOCK_ARABIC_PRESENTATION_FORMS_B
#define UBLOCK_ARABIC_PRESENTATION_FORMS_B UBLOCK_ARABIC_PRESENTATION_FORMS_B_4_6_
#undef UBLOCK_ARABIC_SUPPLEMENT
#define UBLOCK_ARABIC_SUPPLEMENT UBLOCK_ARABIC_SUPPLEMENT_4_6_
#undef UBLOCK_ARMENIAN
#define UBLOCK_ARMENIAN UBLOCK_ARMENIAN_4_6_
#undef UBLOCK_ARROWS
#define UBLOCK_ARROWS UBLOCK_ARROWS_4_6_
#undef UBLOCK_BALINESE
#define UBLOCK_BALINESE UBLOCK_BALINESE_4_6_
#undef UBLOCK_BASIC_LATIN
#define UBLOCK_BASIC_LATIN UBLOCK_BASIC_LATIN_4_6_
#undef UBLOCK_BENGALI
#define UBLOCK_BENGALI UBLOCK_BENGALI_4_6_
#undef UBLOCK_BLOCK_ELEMENTS
#define UBLOCK_BLOCK_ELEMENTS UBLOCK_BLOCK_ELEMENTS_4_6_
#undef UBLOCK_BOPOMOFO
#define UBLOCK_BOPOMOFO UBLOCK_BOPOMOFO_4_6_
#undef UBLOCK_BOPOMOFO_EXTENDED
#define UBLOCK_BOPOMOFO_EXTENDED UBLOCK_BOPOMOFO_EXTENDED_4_6_
#undef UBLOCK_BOX_DRAWING
#define UBLOCK_BOX_DRAWING UBLOCK_BOX_DRAWING_4_6_
#undef UBLOCK_BRAILLE_PATTERNS
#define UBLOCK_BRAILLE_PATTERNS UBLOCK_BRAILLE_PATTERNS_4_6_
#undef UBLOCK_BUGINESE
#define UBLOCK_BUGINESE UBLOCK_BUGINESE_4_6_
#undef UBLOCK_BUHID
#define UBLOCK_BUHID UBLOCK_BUHID_4_6_
#undef UBLOCK_BYZANTINE_MUSICAL_SYMBOLS
#define UBLOCK_BYZANTINE_MUSICAL_SYMBOLS UBLOCK_BYZANTINE_MUSICAL_SYMBOLS_4_6_
#undef UBLOCK_CARIAN
#define UBLOCK_CARIAN UBLOCK_CARIAN_4_6_
#undef UBLOCK_CHAM
#define UBLOCK_CHAM UBLOCK_CHAM_4_6_
#undef UBLOCK_CHEROKEE
#define UBLOCK_CHEROKEE UBLOCK_CHEROKEE_4_6_
#undef UBLOCK_CJK_COMPATIBILITY
#define UBLOCK_CJK_COMPATIBILITY UBLOCK_CJK_COMPATIBILITY_4_6_
#undef UBLOCK_CJK_COMPATIBILITY_FORMS
#define UBLOCK_CJK_COMPATIBILITY_FORMS UBLOCK_CJK_COMPATIBILITY_FORMS_4_6_
#undef UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS
#define UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_4_6_
#undef UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT
#define UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT_4_6_
#undef UBLOCK_CJK_RADICALS_SUPPLEMENT
#define UBLOCK_CJK_RADICALS_SUPPLEMENT UBLOCK_CJK_RADICALS_SUPPLEMENT_4_6_
#undef UBLOCK_CJK_STROKES
#define UBLOCK_CJK_STROKES UBLOCK_CJK_STROKES_4_6_
#undef UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION
#define UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION_4_6_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS UBLOCK_CJK_UNIFIED_IDEOGRAPHS_4_6_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A_4_6_
#undef UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B
#define UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_4_6_
#undef UBLOCK_COMBINING_DIACRITICAL_MARKS
#define UBLOCK_COMBINING_DIACRITICAL_MARKS UBLOCK_COMBINING_DIACRITICAL_MARKS_4_6_
#undef UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT
#define UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT_4_6_
#undef UBLOCK_COMBINING_HALF_MARKS
#define UBLOCK_COMBINING_HALF_MARKS UBLOCK_COMBINING_HALF_MARKS_4_6_
#undef UBLOCK_COMBINING_MARKS_FOR_SYMBOLS
#define UBLOCK_COMBINING_MARKS_FOR_SYMBOLS UBLOCK_COMBINING_MARKS_FOR_SYMBOLS_4_6_
#undef UBLOCK_CONTROL_PICTURES
#define UBLOCK_CONTROL_PICTURES UBLOCK_CONTROL_PICTURES_4_6_
#undef UBLOCK_COPTIC
#define UBLOCK_COPTIC UBLOCK_COPTIC_4_6_
#undef UBLOCK_COUNT
#define UBLOCK_COUNT UBLOCK_COUNT_4_6_
#undef UBLOCK_COUNTING_ROD_NUMERALS
#define UBLOCK_COUNTING_ROD_NUMERALS UBLOCK_COUNTING_ROD_NUMERALS_4_6_
#undef UBLOCK_CUNEIFORM
#define UBLOCK_CUNEIFORM UBLOCK_CUNEIFORM_4_6_
#undef UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION
#define UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION_4_6_
#undef UBLOCK_CURRENCY_SYMBOLS
#define UBLOCK_CURRENCY_SYMBOLS UBLOCK_CURRENCY_SYMBOLS_4_6_
#undef UBLOCK_CYPRIOT_SYLLABARY
#define UBLOCK_CYPRIOT_SYLLABARY UBLOCK_CYPRIOT_SYLLABARY_4_6_
#undef UBLOCK_CYRILLIC
#define UBLOCK_CYRILLIC UBLOCK_CYRILLIC_4_6_
#undef UBLOCK_CYRILLIC_EXTENDED_A
#define UBLOCK_CYRILLIC_EXTENDED_A UBLOCK_CYRILLIC_EXTENDED_A_4_6_
#undef UBLOCK_CYRILLIC_EXTENDED_B
#define UBLOCK_CYRILLIC_EXTENDED_B UBLOCK_CYRILLIC_EXTENDED_B_4_6_
#undef UBLOCK_CYRILLIC_SUPPLEMENT
#define UBLOCK_CYRILLIC_SUPPLEMENT UBLOCK_CYRILLIC_SUPPLEMENT_4_6_
#undef UBLOCK_CYRILLIC_SUPPLEMENTARY
#define UBLOCK_CYRILLIC_SUPPLEMENTARY UBLOCK_CYRILLIC_SUPPLEMENTARY_4_6_
#undef UBLOCK_DESERET
#define UBLOCK_DESERET UBLOCK_DESERET_4_6_
#undef UBLOCK_DEVANAGARI
#define UBLOCK_DEVANAGARI UBLOCK_DEVANAGARI_4_6_
#undef UBLOCK_DINGBATS
#define UBLOCK_DINGBATS UBLOCK_DINGBATS_4_6_
#undef UBLOCK_DOMINO_TILES
#define UBLOCK_DOMINO_TILES UBLOCK_DOMINO_TILES_4_6_
#undef UBLOCK_ENCLOSED_ALPHANUMERICS
#define UBLOCK_ENCLOSED_ALPHANUMERICS UBLOCK_ENCLOSED_ALPHANUMERICS_4_6_
#undef UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS
#define UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS_4_6_
#undef UBLOCK_ETHIOPIC
#define UBLOCK_ETHIOPIC UBLOCK_ETHIOPIC_4_6_
#undef UBLOCK_ETHIOPIC_EXTENDED
#define UBLOCK_ETHIOPIC_EXTENDED UBLOCK_ETHIOPIC_EXTENDED_4_6_
#undef UBLOCK_ETHIOPIC_SUPPLEMENT
#define UBLOCK_ETHIOPIC_SUPPLEMENT UBLOCK_ETHIOPIC_SUPPLEMENT_4_6_
#undef UBLOCK_GENERAL_PUNCTUATION
#define UBLOCK_GENERAL_PUNCTUATION UBLOCK_GENERAL_PUNCTUATION_4_6_
#undef UBLOCK_GEOMETRIC_SHAPES
#define UBLOCK_GEOMETRIC_SHAPES UBLOCK_GEOMETRIC_SHAPES_4_6_
#undef UBLOCK_GEORGIAN
#define UBLOCK_GEORGIAN UBLOCK_GEORGIAN_4_6_
#undef UBLOCK_GEORGIAN_SUPPLEMENT
#define UBLOCK_GEORGIAN_SUPPLEMENT UBLOCK_GEORGIAN_SUPPLEMENT_4_6_
#undef UBLOCK_GLAGOLITIC
#define UBLOCK_GLAGOLITIC UBLOCK_GLAGOLITIC_4_6_
#undef UBLOCK_GOTHIC
#define UBLOCK_GOTHIC UBLOCK_GOTHIC_4_6_
#undef UBLOCK_GREEK
#define UBLOCK_GREEK UBLOCK_GREEK_4_6_
#undef UBLOCK_GREEK_EXTENDED
#define UBLOCK_GREEK_EXTENDED UBLOCK_GREEK_EXTENDED_4_6_
#undef UBLOCK_GUJARATI
#define UBLOCK_GUJARATI UBLOCK_GUJARATI_4_6_
#undef UBLOCK_GURMUKHI
#define UBLOCK_GURMUKHI UBLOCK_GURMUKHI_4_6_
#undef UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS
#define UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS_4_6_
#undef UBLOCK_HANGUL_COMPATIBILITY_JAMO
#define UBLOCK_HANGUL_COMPATIBILITY_JAMO UBLOCK_HANGUL_COMPATIBILITY_JAMO_4_6_
#undef UBLOCK_HANGUL_JAMO
#define UBLOCK_HANGUL_JAMO UBLOCK_HANGUL_JAMO_4_6_
#undef UBLOCK_HANGUL_SYLLABLES
#define UBLOCK_HANGUL_SYLLABLES UBLOCK_HANGUL_SYLLABLES_4_6_
#undef UBLOCK_HANUNOO
#define UBLOCK_HANUNOO UBLOCK_HANUNOO_4_6_
#undef UBLOCK_HEBREW
#define UBLOCK_HEBREW UBLOCK_HEBREW_4_6_
#undef UBLOCK_HIGH_PRIVATE_USE_SURROGATES
#define UBLOCK_HIGH_PRIVATE_USE_SURROGATES UBLOCK_HIGH_PRIVATE_USE_SURROGATES_4_6_
#undef UBLOCK_HIGH_SURROGATES
#define UBLOCK_HIGH_SURROGATES UBLOCK_HIGH_SURROGATES_4_6_
#undef UBLOCK_HIRAGANA
#define UBLOCK_HIRAGANA UBLOCK_HIRAGANA_4_6_
#undef UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS
#define UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS_4_6_
#undef UBLOCK_INVALID_CODE
#define UBLOCK_INVALID_CODE UBLOCK_INVALID_CODE_4_6_
#undef UBLOCK_IPA_EXTENSIONS
#define UBLOCK_IPA_EXTENSIONS UBLOCK_IPA_EXTENSIONS_4_6_
#undef UBLOCK_KANBUN
#define UBLOCK_KANBUN UBLOCK_KANBUN_4_6_
#undef UBLOCK_KANGXI_RADICALS
#define UBLOCK_KANGXI_RADICALS UBLOCK_KANGXI_RADICALS_4_6_
#undef UBLOCK_KANNADA
#define UBLOCK_KANNADA UBLOCK_KANNADA_4_6_
#undef UBLOCK_KATAKANA
#define UBLOCK_KATAKANA UBLOCK_KATAKANA_4_6_
#undef UBLOCK_KATAKANA_PHONETIC_EXTENSIONS
#define UBLOCK_KATAKANA_PHONETIC_EXTENSIONS UBLOCK_KATAKANA_PHONETIC_EXTENSIONS_4_6_
#undef UBLOCK_KAYAH_LI
#define UBLOCK_KAYAH_LI UBLOCK_KAYAH_LI_4_6_
#undef UBLOCK_KHAROSHTHI
#define UBLOCK_KHAROSHTHI UBLOCK_KHAROSHTHI_4_6_
#undef UBLOCK_KHMER
#define UBLOCK_KHMER UBLOCK_KHMER_4_6_
#undef UBLOCK_KHMER_SYMBOLS
#define UBLOCK_KHMER_SYMBOLS UBLOCK_KHMER_SYMBOLS_4_6_
#undef UBLOCK_LAO
#define UBLOCK_LAO UBLOCK_LAO_4_6_
#undef UBLOCK_LATIN_1_SUPPLEMENT
#define UBLOCK_LATIN_1_SUPPLEMENT UBLOCK_LATIN_1_SUPPLEMENT_4_6_
#undef UBLOCK_LATIN_EXTENDED_A
#define UBLOCK_LATIN_EXTENDED_A UBLOCK_LATIN_EXTENDED_A_4_6_
#undef UBLOCK_LATIN_EXTENDED_ADDITIONAL
#define UBLOCK_LATIN_EXTENDED_ADDITIONAL UBLOCK_LATIN_EXTENDED_ADDITIONAL_4_6_
#undef UBLOCK_LATIN_EXTENDED_B
#define UBLOCK_LATIN_EXTENDED_B UBLOCK_LATIN_EXTENDED_B_4_6_
#undef UBLOCK_LATIN_EXTENDED_C
#define UBLOCK_LATIN_EXTENDED_C UBLOCK_LATIN_EXTENDED_C_4_6_
#undef UBLOCK_LATIN_EXTENDED_D
#define UBLOCK_LATIN_EXTENDED_D UBLOCK_LATIN_EXTENDED_D_4_6_
#undef UBLOCK_LEPCHA
#define UBLOCK_LEPCHA UBLOCK_LEPCHA_4_6_
#undef UBLOCK_LETTERLIKE_SYMBOLS
#define UBLOCK_LETTERLIKE_SYMBOLS UBLOCK_LETTERLIKE_SYMBOLS_4_6_
#undef UBLOCK_LIMBU
#define UBLOCK_LIMBU UBLOCK_LIMBU_4_6_
#undef UBLOCK_LINEAR_B_IDEOGRAMS
#define UBLOCK_LINEAR_B_IDEOGRAMS UBLOCK_LINEAR_B_IDEOGRAMS_4_6_
#undef UBLOCK_LINEAR_B_SYLLABARY
#define UBLOCK_LINEAR_B_SYLLABARY UBLOCK_LINEAR_B_SYLLABARY_4_6_
#undef UBLOCK_LOW_SURROGATES
#define UBLOCK_LOW_SURROGATES UBLOCK_LOW_SURROGATES_4_6_
#undef UBLOCK_LYCIAN
#define UBLOCK_LYCIAN UBLOCK_LYCIAN_4_6_
#undef UBLOCK_LYDIAN
#define UBLOCK_LYDIAN UBLOCK_LYDIAN_4_6_
#undef UBLOCK_MAHJONG_TILES
#define UBLOCK_MAHJONG_TILES UBLOCK_MAHJONG_TILES_4_6_
#undef UBLOCK_MALAYALAM
#define UBLOCK_MALAYALAM UBLOCK_MALAYALAM_4_6_
#undef UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS
#define UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS_4_6_
#undef UBLOCK_MATHEMATICAL_OPERATORS
#define UBLOCK_MATHEMATICAL_OPERATORS UBLOCK_MATHEMATICAL_OPERATORS_4_6_
#undef UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A
#define UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A_4_6_
#undef UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B
#define UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B_4_6_
#undef UBLOCK_MISCELLANEOUS_SYMBOLS
#define UBLOCK_MISCELLANEOUS_SYMBOLS UBLOCK_MISCELLANEOUS_SYMBOLS_4_6_
#undef UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS
#define UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS_4_6_
#undef UBLOCK_MISCELLANEOUS_TECHNICAL
#define UBLOCK_MISCELLANEOUS_TECHNICAL UBLOCK_MISCELLANEOUS_TECHNICAL_4_6_
#undef UBLOCK_MODIFIER_TONE_LETTERS
#define UBLOCK_MODIFIER_TONE_LETTERS UBLOCK_MODIFIER_TONE_LETTERS_4_6_
#undef UBLOCK_MONGOLIAN
#define UBLOCK_MONGOLIAN UBLOCK_MONGOLIAN_4_6_
#undef UBLOCK_MUSICAL_SYMBOLS
#define UBLOCK_MUSICAL_SYMBOLS UBLOCK_MUSICAL_SYMBOLS_4_6_
#undef UBLOCK_MYANMAR
#define UBLOCK_MYANMAR UBLOCK_MYANMAR_4_6_
#undef UBLOCK_NEW_TAI_LUE
#define UBLOCK_NEW_TAI_LUE UBLOCK_NEW_TAI_LUE_4_6_
#undef UBLOCK_NKO
#define UBLOCK_NKO UBLOCK_NKO_4_6_
#undef UBLOCK_NO_BLOCK
#define UBLOCK_NO_BLOCK UBLOCK_NO_BLOCK_4_6_
#undef UBLOCK_NUMBER_FORMS
#define UBLOCK_NUMBER_FORMS UBLOCK_NUMBER_FORMS_4_6_
#undef UBLOCK_OGHAM
#define UBLOCK_OGHAM UBLOCK_OGHAM_4_6_
#undef UBLOCK_OL_CHIKI
#define UBLOCK_OL_CHIKI UBLOCK_OL_CHIKI_4_6_
#undef UBLOCK_OLD_ITALIC
#define UBLOCK_OLD_ITALIC UBLOCK_OLD_ITALIC_4_6_
#undef UBLOCK_OLD_PERSIAN
#define UBLOCK_OLD_PERSIAN UBLOCK_OLD_PERSIAN_4_6_
#undef UBLOCK_OPTICAL_CHARACTER_RECOGNITION
#define UBLOCK_OPTICAL_CHARACTER_RECOGNITION UBLOCK_OPTICAL_CHARACTER_RECOGNITION_4_6_
#undef UBLOCK_ORIYA
#define UBLOCK_ORIYA UBLOCK_ORIYA_4_6_
#undef UBLOCK_OSMANYA
#define UBLOCK_OSMANYA UBLOCK_OSMANYA_4_6_
#undef UBLOCK_PHAGS_PA
#define UBLOCK_PHAGS_PA UBLOCK_PHAGS_PA_4_6_
#undef UBLOCK_PHAISTOS_DISC
#define UBLOCK_PHAISTOS_DISC UBLOCK_PHAISTOS_DISC_4_6_
#undef UBLOCK_PHOENICIAN
#define UBLOCK_PHOENICIAN UBLOCK_PHOENICIAN_4_6_
#undef UBLOCK_PHONETIC_EXTENSIONS
#define UBLOCK_PHONETIC_EXTENSIONS UBLOCK_PHONETIC_EXTENSIONS_4_6_
#undef UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT
#define UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT_4_6_
#undef UBLOCK_PRIVATE_USE
#define UBLOCK_PRIVATE_USE UBLOCK_PRIVATE_USE_4_6_
#undef UBLOCK_PRIVATE_USE_AREA
#define UBLOCK_PRIVATE_USE_AREA UBLOCK_PRIVATE_USE_AREA_4_6_
#undef UBLOCK_REJANG
#define UBLOCK_REJANG UBLOCK_REJANG_4_6_
#undef UBLOCK_RUNIC
#define UBLOCK_RUNIC UBLOCK_RUNIC_4_6_
#undef UBLOCK_SAURASHTRA
#define UBLOCK_SAURASHTRA UBLOCK_SAURASHTRA_4_6_
#undef UBLOCK_SHAVIAN
#define UBLOCK_SHAVIAN UBLOCK_SHAVIAN_4_6_
#undef UBLOCK_SINHALA
#define UBLOCK_SINHALA UBLOCK_SINHALA_4_6_
#undef UBLOCK_SMALL_FORM_VARIANTS
#define UBLOCK_SMALL_FORM_VARIANTS UBLOCK_SMALL_FORM_VARIANTS_4_6_
#undef UBLOCK_SPACING_MODIFIER_LETTERS
#define UBLOCK_SPACING_MODIFIER_LETTERS UBLOCK_SPACING_MODIFIER_LETTERS_4_6_
#undef UBLOCK_SPECIALS
#define UBLOCK_SPECIALS UBLOCK_SPECIALS_4_6_
#undef UBLOCK_SUNDANESE
#define UBLOCK_SUNDANESE UBLOCK_SUNDANESE_4_6_
#undef UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS
#define UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS_4_6_
#undef UBLOCK_SUPPLEMENTAL_ARROWS_A
#define UBLOCK_SUPPLEMENTAL_ARROWS_A UBLOCK_SUPPLEMENTAL_ARROWS_A_4_6_
#undef UBLOCK_SUPPLEMENTAL_ARROWS_B
#define UBLOCK_SUPPLEMENTAL_ARROWS_B UBLOCK_SUPPLEMENTAL_ARROWS_B_4_6_
#undef UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS
#define UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS_4_6_
#undef UBLOCK_SUPPLEMENTAL_PUNCTUATION
#define UBLOCK_SUPPLEMENTAL_PUNCTUATION UBLOCK_SUPPLEMENTAL_PUNCTUATION_4_6_
#undef UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A
#define UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A_4_6_
#undef UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B
#define UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B_4_6_
#undef UBLOCK_SYLOTI_NAGRI
#define UBLOCK_SYLOTI_NAGRI UBLOCK_SYLOTI_NAGRI_4_6_
#undef UBLOCK_SYRIAC
#define UBLOCK_SYRIAC UBLOCK_SYRIAC_4_6_
#undef UBLOCK_TAGALOG
#define UBLOCK_TAGALOG UBLOCK_TAGALOG_4_6_
#undef UBLOCK_TAGBANWA
#define UBLOCK_TAGBANWA UBLOCK_TAGBANWA_4_6_
#undef UBLOCK_TAGS
#define UBLOCK_TAGS UBLOCK_TAGS_4_6_
#undef UBLOCK_TAI_LE
#define UBLOCK_TAI_LE UBLOCK_TAI_LE_4_6_
#undef UBLOCK_TAI_XUAN_JING_SYMBOLS
#define UBLOCK_TAI_XUAN_JING_SYMBOLS UBLOCK_TAI_XUAN_JING_SYMBOLS_4_6_
#undef UBLOCK_TAMIL
#define UBLOCK_TAMIL UBLOCK_TAMIL_4_6_
#undef UBLOCK_TELUGU
#define UBLOCK_TELUGU UBLOCK_TELUGU_4_6_
#undef UBLOCK_THAANA
#define UBLOCK_THAANA UBLOCK_THAANA_4_6_
#undef UBLOCK_THAI
#define UBLOCK_THAI UBLOCK_THAI_4_6_
#undef UBLOCK_TIBETAN
#define UBLOCK_TIBETAN UBLOCK_TIBETAN_4_6_
#undef UBLOCK_TIFINAGH
#define UBLOCK_TIFINAGH UBLOCK_TIFINAGH_4_6_
#undef UBLOCK_UGARITIC
#define UBLOCK_UGARITIC UBLOCK_UGARITIC_4_6_
#undef UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS
#define UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_4_6_
#undef UBLOCK_VAI
#define UBLOCK_VAI UBLOCK_VAI_4_6_
#undef UBLOCK_VARIATION_SELECTORS
#define UBLOCK_VARIATION_SELECTORS UBLOCK_VARIATION_SELECTORS_4_6_
#undef UBLOCK_VARIATION_SELECTORS_SUPPLEMENT
#define UBLOCK_VARIATION_SELECTORS_SUPPLEMENT UBLOCK_VARIATION_SELECTORS_SUPPLEMENT_4_6_
#undef UBLOCK_VERTICAL_FORMS
#define UBLOCK_VERTICAL_FORMS UBLOCK_VERTICAL_FORMS_4_6_
#undef UBLOCK_YI_RADICALS
#define UBLOCK_YI_RADICALS UBLOCK_YI_RADICALS_4_6_
#undef UBLOCK_YI_SYLLABLES
#define UBLOCK_YI_SYLLABLES UBLOCK_YI_SYLLABLES_4_6_
#undef UBLOCK_YIJING_HEXAGRAM_SYMBOLS
#define UBLOCK_YIJING_HEXAGRAM_SYMBOLS UBLOCK_YIJING_HEXAGRAM_SYMBOLS_4_6_
#undef UBlockCode
#define UBlockCode UBlockCode_4_6_
#undef UCHAR_AGE
#define UCHAR_AGE UCHAR_AGE_4_6_
#undef UCHAR_ALPHABETIC
#define UCHAR_ALPHABETIC UCHAR_ALPHABETIC_4_6_
#undef UCHAR_ASCII_HEX_DIGIT
#define UCHAR_ASCII_HEX_DIGIT UCHAR_ASCII_HEX_DIGIT_4_6_
#undef UCHAR_BIDI_CLASS
#define UCHAR_BIDI_CLASS UCHAR_BIDI_CLASS_4_6_
#undef UCHAR_BIDI_CONTROL
#define UCHAR_BIDI_CONTROL UCHAR_BIDI_CONTROL_4_6_
#undef UCHAR_BIDI_MIRRORED
#define UCHAR_BIDI_MIRRORED UCHAR_BIDI_MIRRORED_4_6_
#undef UCHAR_BIDI_MIRRORING_GLYPH
#define UCHAR_BIDI_MIRRORING_GLYPH UCHAR_BIDI_MIRRORING_GLYPH_4_6_
#undef UCHAR_BINARY_LIMIT
#define UCHAR_BINARY_LIMIT UCHAR_BINARY_LIMIT_4_6_
#undef UCHAR_BINARY_START
#define UCHAR_BINARY_START UCHAR_BINARY_START_4_6_
#undef UCHAR_BLOCK
#define UCHAR_BLOCK UCHAR_BLOCK_4_6_
#undef UCHAR_CANONICAL_COMBINING_CLASS
#define UCHAR_CANONICAL_COMBINING_CLASS UCHAR_CANONICAL_COMBINING_CLASS_4_6_
#undef UCHAR_CASE_FOLDING
#define UCHAR_CASE_FOLDING UCHAR_CASE_FOLDING_4_6_
#undef UCHAR_CASE_SENSITIVE
#define UCHAR_CASE_SENSITIVE UCHAR_CASE_SENSITIVE_4_6_
#undef UCHAR_DASH
#define UCHAR_DASH UCHAR_DASH_4_6_
#undef UCHAR_DECOMPOSITION_TYPE
#define UCHAR_DECOMPOSITION_TYPE UCHAR_DECOMPOSITION_TYPE_4_6_
#undef UCHAR_DEFAULT_IGNORABLE_CODE_POINT
#define UCHAR_DEFAULT_IGNORABLE_CODE_POINT UCHAR_DEFAULT_IGNORABLE_CODE_POINT_4_6_
#undef UCHAR_DEPRECATED
#define UCHAR_DEPRECATED UCHAR_DEPRECATED_4_6_
#undef UCHAR_DIACRITIC
#define UCHAR_DIACRITIC UCHAR_DIACRITIC_4_6_
#undef UCHAR_DOUBLE_LIMIT
#define UCHAR_DOUBLE_LIMIT UCHAR_DOUBLE_LIMIT_4_6_
#undef UCHAR_DOUBLE_START
#define UCHAR_DOUBLE_START UCHAR_DOUBLE_START_4_6_
#undef UCHAR_EAST_ASIAN_WIDTH
#define UCHAR_EAST_ASIAN_WIDTH UCHAR_EAST_ASIAN_WIDTH_4_6_
#undef UCHAR_EXTENDER
#define UCHAR_EXTENDER UCHAR_EXTENDER_4_6_
#undef UCHAR_FULL_COMPOSITION_EXCLUSION
#define UCHAR_FULL_COMPOSITION_EXCLUSION UCHAR_FULL_COMPOSITION_EXCLUSION_4_6_
#undef UCHAR_GENERAL_CATEGORY
#define UCHAR_GENERAL_CATEGORY UCHAR_GENERAL_CATEGORY_4_6_
#undef UCHAR_GENERAL_CATEGORY_MASK
#define UCHAR_GENERAL_CATEGORY_MASK UCHAR_GENERAL_CATEGORY_MASK_4_6_
#undef UCHAR_GRAPHEME_BASE
#define UCHAR_GRAPHEME_BASE UCHAR_GRAPHEME_BASE_4_6_
#undef UCHAR_GRAPHEME_CLUSTER_BREAK
#define UCHAR_GRAPHEME_CLUSTER_BREAK UCHAR_GRAPHEME_CLUSTER_BREAK_4_6_
#undef UCHAR_GRAPHEME_EXTEND
#define UCHAR_GRAPHEME_EXTEND UCHAR_GRAPHEME_EXTEND_4_6_
#undef UCHAR_GRAPHEME_LINK
#define UCHAR_GRAPHEME_LINK UCHAR_GRAPHEME_LINK_4_6_
#undef UCHAR_HANGUL_SYLLABLE_TYPE
#define UCHAR_HANGUL_SYLLABLE_TYPE UCHAR_HANGUL_SYLLABLE_TYPE_4_6_
#undef UCHAR_HEX_DIGIT
#define UCHAR_HEX_DIGIT UCHAR_HEX_DIGIT_4_6_
#undef UCHAR_HYPHEN
#define UCHAR_HYPHEN UCHAR_HYPHEN_4_6_
#undef UCHAR_ID_CONTINUE
#define UCHAR_ID_CONTINUE UCHAR_ID_CONTINUE_4_6_
#undef UCHAR_ID_START
#define UCHAR_ID_START UCHAR_ID_START_4_6_
#undef UCHAR_IDEOGRAPHIC
#define UCHAR_IDEOGRAPHIC UCHAR_IDEOGRAPHIC_4_6_
#undef UCHAR_IDS_BINARY_OPERATOR
#define UCHAR_IDS_BINARY_OPERATOR UCHAR_IDS_BINARY_OPERATOR_4_6_
#undef UCHAR_IDS_TRINARY_OPERATOR
#define UCHAR_IDS_TRINARY_OPERATOR UCHAR_IDS_TRINARY_OPERATOR_4_6_
#undef UCHAR_INT_LIMIT
#define UCHAR_INT_LIMIT UCHAR_INT_LIMIT_4_6_
#undef UCHAR_INT_START
#define UCHAR_INT_START UCHAR_INT_START_4_6_
#undef UCHAR_INVALID_CODE
#define UCHAR_INVALID_CODE UCHAR_INVALID_CODE_4_6_
#undef UCHAR_ISO_COMMENT
#define UCHAR_ISO_COMMENT UCHAR_ISO_COMMENT_4_6_
#undef UCHAR_JOIN_CONTROL
#define UCHAR_JOIN_CONTROL UCHAR_JOIN_CONTROL_4_6_
#undef UCHAR_JOINING_GROUP
#define UCHAR_JOINING_GROUP UCHAR_JOINING_GROUP_4_6_
#undef UCHAR_JOINING_TYPE
#define UCHAR_JOINING_TYPE UCHAR_JOINING_TYPE_4_6_
#undef UCHAR_LEAD_CANONICAL_COMBINING_CLASS
#define UCHAR_LEAD_CANONICAL_COMBINING_CLASS UCHAR_LEAD_CANONICAL_COMBINING_CLASS_4_6_
#undef UCHAR_LINE_BREAK
#define UCHAR_LINE_BREAK UCHAR_LINE_BREAK_4_6_
#undef UCHAR_LOGICAL_ORDER_EXCEPTION
#define UCHAR_LOGICAL_ORDER_EXCEPTION UCHAR_LOGICAL_ORDER_EXCEPTION_4_6_
#undef UCHAR_LOWERCASE
#define UCHAR_LOWERCASE UCHAR_LOWERCASE_4_6_
#undef UCHAR_LOWERCASE_MAPPING
#define UCHAR_LOWERCASE_MAPPING UCHAR_LOWERCASE_MAPPING_4_6_
#undef UCHAR_MASK_LIMIT
#define UCHAR_MASK_LIMIT UCHAR_MASK_LIMIT_4_6_
#undef UCHAR_MASK_START
#define UCHAR_MASK_START UCHAR_MASK_START_4_6_
#undef UCHAR_MATH
#define UCHAR_MATH UCHAR_MATH_4_6_
#undef UCHAR_NAME
#define UCHAR_NAME UCHAR_NAME_4_6_
#undef UCHAR_NFC_INERT
#define UCHAR_NFC_INERT UCHAR_NFC_INERT_4_6_
#undef UCHAR_NFC_QUICK_CHECK
#define UCHAR_NFC_QUICK_CHECK UCHAR_NFC_QUICK_CHECK_4_6_
#undef UCHAR_NFD_INERT
#define UCHAR_NFD_INERT UCHAR_NFD_INERT_4_6_
#undef UCHAR_NFD_QUICK_CHECK
#define UCHAR_NFD_QUICK_CHECK UCHAR_NFD_QUICK_CHECK_4_6_
#undef UCHAR_NFKC_INERT
#define UCHAR_NFKC_INERT UCHAR_NFKC_INERT_4_6_
#undef UCHAR_NFKC_QUICK_CHECK
#define UCHAR_NFKC_QUICK_CHECK UCHAR_NFKC_QUICK_CHECK_4_6_
#undef UCHAR_NFKD_INERT
#define UCHAR_NFKD_INERT UCHAR_NFKD_INERT_4_6_
#undef UCHAR_NFKD_QUICK_CHECK
#define UCHAR_NFKD_QUICK_CHECK UCHAR_NFKD_QUICK_CHECK_4_6_
#undef UCHAR_NONCHARACTER_CODE_POINT
#define UCHAR_NONCHARACTER_CODE_POINT UCHAR_NONCHARACTER_CODE_POINT_4_6_
#undef UCHAR_NUMERIC_TYPE
#define UCHAR_NUMERIC_TYPE UCHAR_NUMERIC_TYPE_4_6_
#undef UCHAR_NUMERIC_VALUE
#define UCHAR_NUMERIC_VALUE UCHAR_NUMERIC_VALUE_4_6_
#undef UCHAR_PATTERN_SYNTAX
#define UCHAR_PATTERN_SYNTAX UCHAR_PATTERN_SYNTAX_4_6_
#undef UCHAR_PATTERN_WHITE_SPACE
#define UCHAR_PATTERN_WHITE_SPACE UCHAR_PATTERN_WHITE_SPACE_4_6_
#undef UCHAR_POSIX_ALNUM
#define UCHAR_POSIX_ALNUM UCHAR_POSIX_ALNUM_4_6_
#undef UCHAR_POSIX_BLANK
#define UCHAR_POSIX_BLANK UCHAR_POSIX_BLANK_4_6_
#undef UCHAR_POSIX_GRAPH
#define UCHAR_POSIX_GRAPH UCHAR_POSIX_GRAPH_4_6_
#undef UCHAR_POSIX_PRINT
#define UCHAR_POSIX_PRINT UCHAR_POSIX_PRINT_4_6_
#undef UCHAR_POSIX_XDIGIT
#define UCHAR_POSIX_XDIGIT UCHAR_POSIX_XDIGIT_4_6_
#undef UCHAR_QUOTATION_MARK
#define UCHAR_QUOTATION_MARK UCHAR_QUOTATION_MARK_4_6_
#undef UCHAR_RADICAL
#define UCHAR_RADICAL UCHAR_RADICAL_4_6_
#undef UCHAR_S_TERM
#define UCHAR_S_TERM UCHAR_S_TERM_4_6_
#undef UCHAR_SCRIPT
#define UCHAR_SCRIPT UCHAR_SCRIPT_4_6_
#undef UCHAR_SEGMENT_STARTER
#define UCHAR_SEGMENT_STARTER UCHAR_SEGMENT_STARTER_4_6_
#undef UCHAR_SENTENCE_BREAK
#define UCHAR_SENTENCE_BREAK UCHAR_SENTENCE_BREAK_4_6_
#undef UCHAR_SIMPLE_CASE_FOLDING
#define UCHAR_SIMPLE_CASE_FOLDING UCHAR_SIMPLE_CASE_FOLDING_4_6_
#undef UCHAR_SIMPLE_LOWERCASE_MAPPING
#define UCHAR_SIMPLE_LOWERCASE_MAPPING UCHAR_SIMPLE_LOWERCASE_MAPPING_4_6_
#undef UCHAR_SIMPLE_TITLECASE_MAPPING
#define UCHAR_SIMPLE_TITLECASE_MAPPING UCHAR_SIMPLE_TITLECASE_MAPPING_4_6_
#undef UCHAR_SIMPLE_UPPERCASE_MAPPING
#define UCHAR_SIMPLE_UPPERCASE_MAPPING UCHAR_SIMPLE_UPPERCASE_MAPPING_4_6_
#undef UCHAR_SOFT_DOTTED
#define UCHAR_SOFT_DOTTED UCHAR_SOFT_DOTTED_4_6_
#undef UCHAR_STRING_LIMIT
#define UCHAR_STRING_LIMIT UCHAR_STRING_LIMIT_4_6_
#undef UCHAR_STRING_START
#define UCHAR_STRING_START UCHAR_STRING_START_4_6_
#undef UCHAR_TERMINAL_PUNCTUATION
#define UCHAR_TERMINAL_PUNCTUATION UCHAR_TERMINAL_PUNCTUATION_4_6_
#undef UCHAR_TITLECASE_MAPPING
#define UCHAR_TITLECASE_MAPPING UCHAR_TITLECASE_MAPPING_4_6_
#undef UCHAR_TRAIL_CANONICAL_COMBINING_CLASS
#define UCHAR_TRAIL_CANONICAL_COMBINING_CLASS UCHAR_TRAIL_CANONICAL_COMBINING_CLASS_4_6_
#undef UCHAR_UNICODE_1_NAME
#define UCHAR_UNICODE_1_NAME UCHAR_UNICODE_1_NAME_4_6_
#undef UCHAR_UNIFIED_IDEOGRAPH
#define UCHAR_UNIFIED_IDEOGRAPH UCHAR_UNIFIED_IDEOGRAPH_4_6_
#undef UCHAR_UPPERCASE
#define UCHAR_UPPERCASE UCHAR_UPPERCASE_4_6_
#undef UCHAR_UPPERCASE_MAPPING
#define UCHAR_UPPERCASE_MAPPING UCHAR_UPPERCASE_MAPPING_4_6_
#undef UCHAR_VARIATION_SELECTOR
#define UCHAR_VARIATION_SELECTOR UCHAR_VARIATION_SELECTOR_4_6_
#undef UCHAR_WHITE_SPACE
#define UCHAR_WHITE_SPACE UCHAR_WHITE_SPACE_4_6_
#undef UCHAR_WORD_BREAK
#define UCHAR_WORD_BREAK UCHAR_WORD_BREAK_4_6_
#undef UCHAR_XID_CONTINUE
#define UCHAR_XID_CONTINUE UCHAR_XID_CONTINUE_4_6_
#undef UCHAR_XID_START
#define UCHAR_XID_START UCHAR_XID_START_4_6_
#undef UCharCategory
#define UCharCategory UCharCategory_4_6_
#undef UCharDirection
#define UCharDirection UCharDirection_4_6_
#undef UCharEnumTypeRange
#define UCharEnumTypeRange UCharEnumTypeRange_4_6_
#undef UCharIterator
#define UCharIterator UCharIterator_4_6_
#undef UCharIteratorCurrent
#define UCharIteratorCurrent UCharIteratorCurrent_4_6_
#undef UCharIteratorGetIndex
#define UCharIteratorGetIndex UCharIteratorGetIndex_4_6_
#undef UCharIteratorGetState
#define UCharIteratorGetState UCharIteratorGetState_4_6_
#undef UCharIteratorHasNext
#define UCharIteratorHasNext UCharIteratorHasNext_4_6_
#undef UCharIteratorHasPrevious
#define UCharIteratorHasPrevious UCharIteratorHasPrevious_4_6_
#undef UCharIteratorMove
#define UCharIteratorMove UCharIteratorMove_4_6_
#undef UCharIteratorNext
#define UCharIteratorNext UCharIteratorNext_4_6_
#undef UCharIteratorOrigin
#define UCharIteratorOrigin UCharIteratorOrigin_4_6_
#undef UCharIteratorPrevious
#define UCharIteratorPrevious UCharIteratorPrevious_4_6_
#undef UCharIteratorReserved
#define UCharIteratorReserved UCharIteratorReserved_4_6_
#undef UCharIteratorSetState
#define UCharIteratorSetState UCharIteratorSetState_4_6_
#undef UCharNameChoice
#define UCharNameChoice UCharNameChoice_4_6_
#undef UCOL_ALTERNATE_HANDLING
#define UCOL_ALTERNATE_HANDLING UCOL_ALTERNATE_HANDLING_4_6_
#undef UCOL_ATTRIBUTE_COUNT
#define UCOL_ATTRIBUTE_COUNT UCOL_ATTRIBUTE_COUNT_4_6_
#undef UCOL_ATTRIBUTE_VALUE_COUNT
#define UCOL_ATTRIBUTE_VALUE_COUNT UCOL_ATTRIBUTE_VALUE_COUNT_4_6_
#undef UCOL_BOUND_LOWER
#define UCOL_BOUND_LOWER UCOL_BOUND_LOWER_4_6_
#undef UCOL_BOUND_UPPER
#define UCOL_BOUND_UPPER UCOL_BOUND_UPPER_4_6_
#undef UCOL_BOUND_UPPER_LONG
#define UCOL_BOUND_UPPER_LONG UCOL_BOUND_UPPER_LONG_4_6_
#undef UCOL_BOUND_VALUE_COUNT
#define UCOL_BOUND_VALUE_COUNT UCOL_BOUND_VALUE_COUNT_4_6_
#undef UCOL_CASE_FIRST
#define UCOL_CASE_FIRST UCOL_CASE_FIRST_4_6_
#undef UCOL_CASE_LEVEL
#define UCOL_CASE_LEVEL UCOL_CASE_LEVEL_4_6_
#undef UCOL_CE_STRENGTH_LIMIT
#define UCOL_CE_STRENGTH_LIMIT UCOL_CE_STRENGTH_LIMIT_4_6_
#undef UCOL_DECOMPOSITION_MODE
#define UCOL_DECOMPOSITION_MODE UCOL_DECOMPOSITION_MODE_4_6_
#undef UCOL_DEFAULT
#define UCOL_DEFAULT UCOL_DEFAULT_4_6_
#undef UCOL_DEFAULT_STRENGTH
#define UCOL_DEFAULT_STRENGTH UCOL_DEFAULT_STRENGTH_4_6_
#undef UCOL_EQUAL
#define UCOL_EQUAL UCOL_EQUAL_4_6_
#undef UCOL_FRENCH_COLLATION
#define UCOL_FRENCH_COLLATION UCOL_FRENCH_COLLATION_4_6_
#undef UCOL_FULL_RULES
#define UCOL_FULL_RULES UCOL_FULL_RULES_4_6_
#undef UCOL_GREATER
#define UCOL_GREATER UCOL_GREATER_4_6_
#undef UCOL_HIRAGANA_QUATERNARY_MODE
#define UCOL_HIRAGANA_QUATERNARY_MODE UCOL_HIRAGANA_QUATERNARY_MODE_4_6_
#undef UCOL_IDENTICAL
#define UCOL_IDENTICAL UCOL_IDENTICAL_4_6_
#undef UCOL_LESS
#define UCOL_LESS UCOL_LESS_4_6_
#undef UCOL_LOWER_FIRST
#define UCOL_LOWER_FIRST UCOL_LOWER_FIRST_4_6_
#undef UCOL_NON_IGNORABLE
#define UCOL_NON_IGNORABLE UCOL_NON_IGNORABLE_4_6_
#undef UCOL_NORMALIZATION_MODE
#define UCOL_NORMALIZATION_MODE UCOL_NORMALIZATION_MODE_4_6_
#undef UCOL_NUMERIC_COLLATION
#define UCOL_NUMERIC_COLLATION UCOL_NUMERIC_COLLATION_4_6_
#undef UCOL_OFF
#define UCOL_OFF UCOL_OFF_4_6_
#undef UCOL_ON
#define UCOL_ON UCOL_ON_4_6_
#undef UCOL_PRIMARY
#define UCOL_PRIMARY UCOL_PRIMARY_4_6_
#undef UCOL_QUATERNARY
#define UCOL_QUATERNARY UCOL_QUATERNARY_4_6_
#undef UCOL_SECONDARY
#define UCOL_SECONDARY UCOL_SECONDARY_4_6_
#undef UCOL_SHIFTED
#define UCOL_SHIFTED UCOL_SHIFTED_4_6_
#undef UCOL_STRENGTH
#define UCOL_STRENGTH UCOL_STRENGTH_4_6_
#undef UCOL_STRENGTH_LIMIT
#define UCOL_STRENGTH_LIMIT UCOL_STRENGTH_LIMIT_4_6_
#undef UCOL_TAILORING_ONLY
#define UCOL_TAILORING_ONLY UCOL_TAILORING_ONLY_4_6_
#undef UCOL_TERTIARY
#define UCOL_TERTIARY UCOL_TERTIARY_4_6_
#undef UCOL_UPPER_FIRST
#define UCOL_UPPER_FIRST UCOL_UPPER_FIRST_4_6_
#undef UColAttribute
#define UColAttribute UColAttribute_4_6_
#undef UColAttributeValue
#define UColAttributeValue UColAttributeValue_4_6_
#undef UColBoundMode
#define UColBoundMode UColBoundMode_4_6_
#undef UCollationResult
#define UCollationResult UCollationResult_4_6_
#undef UCollationStrength
#define UCollationStrength UCollationStrength_4_6_
#undef UColRuleOption
#define UColRuleOption UColRuleOption_4_6_
#undef UDecompositionType
#define UDecompositionType UDecompositionType_4_6_
#undef UEastAsianWidth
#define UEastAsianWidth UEastAsianWidth_4_6_
#undef UEnumCharNamesFn
#define UEnumCharNamesFn UEnumCharNamesFn_4_6_
#undef UErrorCode
#define UErrorCode UErrorCode_4_6_
#undef UFieldPosition
#define UFieldPosition UFieldPosition_4_6_
#undef UGraphemeClusterBreak
#define UGraphemeClusterBreak UGraphemeClusterBreak_4_6_
#undef UHangulSyllableType
#define UHangulSyllableType UHangulSyllableType_4_6_
#undef UITER_CURRENT
#define UITER_CURRENT UITER_CURRENT_4_6_
#undef UITER_LENGTH
#define UITER_LENGTH UITER_LENGTH_4_6_
#undef UITER_LIMIT
#define UITER_LIMIT UITER_LIMIT_4_6_
#undef UITER_START
#define UITER_START UITER_START_4_6_
#undef UITER_UNKNOWN_INDEX
#define UITER_UNKNOWN_INDEX UITER_UNKNOWN_INDEX_4_6_
#undef UITER_ZERO
#define UITER_ZERO UITER_ZERO_4_6_
#undef UJoiningGroup
#define UJoiningGroup UJoiningGroup_4_6_
#undef UJoiningType
#define UJoiningType UJoiningType_4_6_
#undef ULayoutType
#define ULayoutType ULayoutType_4_6_
#undef ULineBreak
#define ULineBreak ULineBreak_4_6_
#undef ULOC_ACCEPT_FAILED
#define ULOC_ACCEPT_FAILED ULOC_ACCEPT_FAILED_4_6_
#undef ULOC_ACCEPT_FALLBACK
#define ULOC_ACCEPT_FALLBACK ULOC_ACCEPT_FALLBACK_4_6_
#undef ULOC_ACCEPT_VALID
#define ULOC_ACCEPT_VALID ULOC_ACCEPT_VALID_4_6_
#undef ULOC_ACTUAL_LOCALE
#define ULOC_ACTUAL_LOCALE ULOC_ACTUAL_LOCALE_4_6_
#undef ULOC_DATA_LOCALE_TYPE_LIMIT
#define ULOC_DATA_LOCALE_TYPE_LIMIT ULOC_DATA_LOCALE_TYPE_LIMIT_4_6_
#undef ULOC_LAYOUT_BTT
#define ULOC_LAYOUT_BTT ULOC_LAYOUT_BTT_4_6_
#undef ULOC_LAYOUT_LTR
#define ULOC_LAYOUT_LTR ULOC_LAYOUT_LTR_4_6_
#undef ULOC_LAYOUT_RTL
#define ULOC_LAYOUT_RTL ULOC_LAYOUT_RTL_4_6_
#undef ULOC_LAYOUT_TTB
#define ULOC_LAYOUT_TTB ULOC_LAYOUT_TTB_4_6_
#undef ULOC_LAYOUT_UNKNOWN
#define ULOC_LAYOUT_UNKNOWN ULOC_LAYOUT_UNKNOWN_4_6_
#undef ULOC_REQUESTED_LOCALE
#define ULOC_REQUESTED_LOCALE ULOC_REQUESTED_LOCALE_4_6_
#undef ULOC_VALID_LOCALE
#define ULOC_VALID_LOCALE ULOC_VALID_LOCALE_4_6_
#undef ULocDataLocaleType
#define ULocDataLocaleType ULocDataLocaleType_4_6_
#undef UNORM_DEFAULT
#define UNORM_DEFAULT UNORM_DEFAULT_4_6_
#undef UNORM_FCD
#define UNORM_FCD UNORM_FCD_4_6_
#undef UNORM_MAYBE
#define UNORM_MAYBE UNORM_MAYBE_4_6_
#undef UNORM_MODE_COUNT
#define UNORM_MODE_COUNT UNORM_MODE_COUNT_4_6_
#undef UNORM_NFC
#define UNORM_NFC UNORM_NFC_4_6_
#undef UNORM_NFD
#define UNORM_NFD UNORM_NFD_4_6_
#undef UNORM_NFKC
#define UNORM_NFKC UNORM_NFKC_4_6_
#undef UNORM_NFKD
#define UNORM_NFKD UNORM_NFKD_4_6_
#undef UNORM_NO
#define UNORM_NO UNORM_NO_4_6_
#undef UNORM_NONE
#define UNORM_NONE UNORM_NONE_4_6_
#undef UNORM_UNICODE_3_2
#define UNORM_UNICODE_3_2 UNORM_UNICODE_3_2_4_6_
#undef UNORM_YES
#define UNORM_YES UNORM_YES_4_6_
#undef UNORM2_COMPOSE
#define UNORM2_COMPOSE UNORM2_COMPOSE_4_6_
#undef UNORM2_COMPOSE_CONTIGUOUS
#define UNORM2_COMPOSE_CONTIGUOUS UNORM2_COMPOSE_CONTIGUOUS_4_6_
#undef UNORM2_DECOMPOSE
#define UNORM2_DECOMPOSE UNORM2_DECOMPOSE_4_6_
#undef UNORM2_FCD
#define UNORM2_FCD UNORM2_FCD_4_6_
#undef UNormalization2Mode
#define UNormalization2Mode UNormalization2Mode_4_6_
#undef UNormalizationCheckResult
#define UNormalizationCheckResult UNormalizationCheckResult_4_6_
#undef UNormalizationMode
#define UNormalizationMode UNormalizationMode_4_6_
#undef UNumericType
#define UNumericType UNumericType_4_6_
#undef UParseError
#define UParseError UParseError_4_6_
#undef UProperty
#define UProperty UProperty_4_6_
#undef UPropertyNameChoice
#define UPropertyNameChoice UPropertyNameChoice_4_6_
#undef URegistryKey
#define URegistryKey URegistryKey_4_6_
#undef USentenceBreak
#define USentenceBreak USentenceBreak_4_6_
#undef USerializedSet
#define USerializedSet USerializedSet_4_6_
#undef USET_ADD_CASE_MAPPINGS
#define USET_ADD_CASE_MAPPINGS USET_ADD_CASE_MAPPINGS_4_6_
#undef USET_CASE_INSENSITIVE
#define USET_CASE_INSENSITIVE USET_CASE_INSENSITIVE_4_6_
#undef USET_IGNORE_SPACE
#define USET_IGNORE_SPACE USET_IGNORE_SPACE_4_6_
#undef USET_SERIALIZED_STATIC_ARRAY_CAPACITY
#define USET_SERIALIZED_STATIC_ARRAY_CAPACITY USET_SERIALIZED_STATIC_ARRAY_CAPACITY_4_6_
#undef USET_SPAN_CONDITION_COUNT
#define USET_SPAN_CONDITION_COUNT USET_SPAN_CONDITION_COUNT_4_6_
#undef USET_SPAN_CONTAINED
#define USET_SPAN_CONTAINED USET_SPAN_CONTAINED_4_6_
#undef USET_SPAN_NOT_CONTAINED
#define USET_SPAN_NOT_CONTAINED USET_SPAN_NOT_CONTAINED_4_6_
#undef USET_SPAN_SIMPLE
#define USET_SPAN_SIMPLE USET_SPAN_SIMPLE_4_6_
#undef USetSpanCondition
#define USetSpanCondition USetSpanCondition_4_6_
#undef UWordBreakValues
#define UWordBreakValues UWordBreakValues_4_6_
#undef CharacterIterator
#define CharacterIterator CharacterIterator_4_6_
#undef Replaceable
#define Replaceable Replaceable_4_6_

#undef UnicodeString
#define UnicodeString UnicodeString_4_6_

#include "unicode/ucol.h"

#undef UnicodeString
#pragma option pop
//---------------------------------------------------------------------------
#endif
