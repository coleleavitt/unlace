// Alternative name is '_ZNSt19_UninitDestroyGuardIPN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS1_14adl_serializerES4_IhSaIhEEvEEvED2Ev'
_QWORD *__fastcall std::_UninitDestroyGuard<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,void>::~_UninitDestroyGuard(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  _QWORD *i; // r14

  result = (_QWORD *)a1[1];
  if ( result )
  {
    result = (_QWORD *)*result;
    v2 = (_QWORD *)*a1;
    for ( i = result;
          i != v2;
          result = (_QWORD *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy() )
    {
      v2 += 2;
    }
  }
  return result;
}

