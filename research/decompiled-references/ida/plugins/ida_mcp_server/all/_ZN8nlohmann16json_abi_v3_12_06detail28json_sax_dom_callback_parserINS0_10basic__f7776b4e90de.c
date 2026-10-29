// Alternative name is '_ZN8nlohmann16json_abi_v3_12_06detail19json_sax_dom_parserINS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEENS1_22iterator_input_adapterIN9__gnu_cxx17__normal_iteratorIPKcSB_EEEEE11parse_errorINS1_12out_of_rangeEEEbmRKSB_RKT_.part.0'
void __fastcall __noreturn nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::out_of_range>(
        __int64 a1)
{
  _DWORD *exception; // rbx

  exception = __cxa_allocate_exception(0x20u);
  *(_QWORD *)exception = off_4444D0;
  exception[2] = *(_DWORD *)(a1 + 8);
  std::runtime_error::runtime_error((std::runtime_error *)(exception + 4), (const std::runtime_error *)(a1 + 16));
  *(_QWORD *)exception = off_444570;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::out_of_range,
    (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::out_of_range::~out_of_range);
}

