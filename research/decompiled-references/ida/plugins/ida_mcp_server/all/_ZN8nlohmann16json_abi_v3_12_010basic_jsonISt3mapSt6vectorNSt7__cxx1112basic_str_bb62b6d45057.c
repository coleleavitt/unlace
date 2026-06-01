// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC2IRKS9_S9_Li0EEEOT_'
__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>(
        __int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *(v2 - 1) = 0;
  *v2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)a1 = 3;
  v3 = (_QWORD *)operator new(0x20u);
  *v3 = v3 + 2;
  result = std::string::_M_construct<true>();
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}

