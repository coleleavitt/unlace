// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC2IRA10_KcA10_cLi0EEEOT_'
unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[10],char [10],0>(
        __int64 a1,
        const char *a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  void *v5; // r12
  __int64 *v6; // rbx
  size_t v7; // rax
  size_t v8; // rcx
  __int64 v10; // rax
  size_t v11; // [rsp+8h] [rbp-40h]
  size_t v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = (_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  *(v3 - 1) = 0;
  *v3 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)a1 = 3;
  v4 = (__int64 *)operator new(0x20u);
  v5 = v4 + 2;
  v6 = v4;
  *v4 = (__int64)(v4 + 2);
  v7 = strlen(a2);
  v12 = v7;
  v8 = v7;
  if ( v7 > 0xF )
  {
    v11 = v7;
    v10 = std::string::_M_create();
    *v6 = v10;
    v5 = (void *)v10;
    v8 = v11;
    v6[2] = v12;
    goto LABEL_8;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_4;
LABEL_8:
    memcpy(v5, a2, v8);
    v7 = v12;
    v5 = (void *)*v6;
    goto LABEL_4;
  }
  *((_BYTE *)v6 + 16) = *a2;
LABEL_4:
  v6[1] = v7;
  *(_QWORD *)(a1 + 8) = v6;
  *((_BYTE *)v5 + v7) = 0;
  return v13 - __readfsqword(0x28u);
}

