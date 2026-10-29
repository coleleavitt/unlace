// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC1IRA8_KcA8_cLi0EEEOT_'
unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(
        __int64 a1,
        const char *a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 result; // rax
  int v10; // [rsp+0h] [rbp-28h]
  int v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 8);
  *(v3 - 1) = 0;
  *v3 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)a1 = 3;
  v4 = (__int64 *)operator new(0x20u);
  result = std::string::basic_string<std::allocator<char>>(v4, a2, v5, v6, v7, v8, v10, v11, v12);
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

