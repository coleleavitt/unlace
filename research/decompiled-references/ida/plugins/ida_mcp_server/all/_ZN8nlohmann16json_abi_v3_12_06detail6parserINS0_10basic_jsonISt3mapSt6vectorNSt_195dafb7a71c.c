// Alternative name is '_ZN8nlohmann16json_abi_v3_12_06detail6parserINS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEENS1_22iterator_input_adapterIPKcEEED1Ev'
__int64 (__fastcall *__fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::~parser(
        _QWORD *a1))(_QWORD *, _QWORD *, __int64)
{
  _QWORD *v2; // rdi
  void *v3; // rdi
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax

  v2 = (_QWORD *)a1[15];
  if ( v2 != a1 + 17 )
    operator delete(v2, a1[17] + 1LL);
  v3 = (void *)a1[12];
  if ( v3 )
    operator delete(v3, a1[14] - (_QWORD)v3);
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[2];
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(a1, a1, 3);
  return result;
}

