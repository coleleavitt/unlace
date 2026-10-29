// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC2IRS9_S9_Li0EEEOT_'
unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  _BYTE *v4; // r13
  unsigned __int64 v5; // r12
  _QWORD *v6; // rax
  _BYTE *v7; // rdi
  __int64 *v8; // rbp
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v3 = (_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  *(v3 - 1) = 0;
  *v3 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)a1 = 3;
  v6 = (_QWORD *)operator new(0x20u);
  v7 = v6 + 2;
  v8 = v6;
  *v6 = v6 + 2;
  if ( v5 <= 0xF )
  {
    v9 = v5 + 1;
    if ( !v5 )
    {
      *v7 = *v4;
      v10 = v5;
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v12 = std::string::_M_create();
  *v8 = v12;
  v7 = (_BYTE *)v12;
  v8[2] = v5;
  v9 = v5 + 1;
  v10 = -1;
  if ( v5 != -1 )
  {
LABEL_3:
    memcpy(v7, v4, v9);
    v10 = v5;
  }
LABEL_4:
  v8[1] = v10;
  *(_QWORD *)(a1 + 8) = v8;
  return v13 - __readfsqword(0x28u);
}

