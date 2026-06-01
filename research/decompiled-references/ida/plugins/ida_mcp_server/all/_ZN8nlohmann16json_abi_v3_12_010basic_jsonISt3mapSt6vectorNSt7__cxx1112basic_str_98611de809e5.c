// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC2IS9_S9_Li0EEEOT_'
_QWORD *__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>(
        __int64 a1,
        char **a2)
{
  _QWORD *v3; // rdi
  _QWORD *result; // rax
  char *v6; // rcx
  _QWORD *v7; // rsi
  char *v8; // rdx
  char *v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 v11; // r8
  char *v12; // rsi
  char *v13; // r10
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // r9

  v3 = (_QWORD *)(a1 + 8);
  *(v3 - 1) = 0;
  *v3 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)a1 = 3;
  result = (_QWORD *)operator new(0x20u);
  v6 = *a2;
  v7 = result + 2;
  v8 = (char *)(a2 + 2);
  v9 = a2[1];
  *result = result + 2;
  if ( v6 == (char *)(a2 + 2) )
  {
    v10 = (_DWORD)v9 + 1;
    if ( (unsigned int)((_DWORD)v9 + 1) >= 8 )
    {
      result[2] = a2[2];
      *(_QWORD *)((char *)v7 + v10 - 8) = *(_QWORD *)&v8[v10 - 8];
      v11 = (unsigned __int64)(result + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = (char *)v7 - v11;
      v13 = (char *)(v8 - v12);
      v14 = ((_DWORD)v12 + v10) & 0xFFFFFFF8;
      if ( v14 >= 8 )
      {
        v15 = v14 & 0xFFFFFFF8;
        v16 = 0;
        do
        {
          v17 = v16;
          v16 += 8;
          *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
        }
        while ( v16 < v15 );
      }
    }
    else if ( (v10 & 4) != 0 )
    {
      *((_DWORD *)result + 4) = *((_DWORD *)a2 + 4);
      *(_DWORD *)((char *)v7 + v10 - 4) = *(_DWORD *)&v8[v10 - 4];
    }
    else if ( (_DWORD)v9 != -1 )
    {
      *((_BYTE *)result + 16) = *((_BYTE *)a2 + 16);
      if ( (v10 & 2) != 0 )
        *(_WORD *)((char *)v7 + v10 - 2) = *(_WORD *)&v8[v10 - 2];
    }
  }
  else
  {
    *result = v6;
    result[2] = a2[2];
  }
  *a2 = v8;
  a2[1] = nullptr;
  result[1] = v9;
  *((_BYTE *)a2 + 16) = 0;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}

