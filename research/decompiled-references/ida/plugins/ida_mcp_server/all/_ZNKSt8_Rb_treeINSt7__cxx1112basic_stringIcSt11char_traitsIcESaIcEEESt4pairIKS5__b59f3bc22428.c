__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r13
  size_t v5; // rbx
  size_t v6; // rdx
  size_t v7; // r15
  int v8; // eax
  __int64 v9; // rbx
  size_t v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // rbx

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return v2;
  v4 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 + 40);
      v6 = strlen(a2);
      v7 = v6;
      if ( v5 <= v6 )
        v6 = v5;
      if ( v6 )
      {
        v8 = memcmp(*(const void **)(v3 + 32), a2, v6);
        if ( v8 )
          goto LABEL_11;
      }
      v9 = v5 - v7;
      if ( v9 <= 0x7FFFFFFF )
        break;
LABEL_3:
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        goto LABEL_13;
    }
    if ( v9 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_12;
    v8 = v9;
LABEL_11:
    if ( v8 >= 0 )
      goto LABEL_3;
LABEL_12:
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v3 );
LABEL_13:
  if ( v2 != v4 )
  {
    v10 = *(_QWORD *)(v4 + 40);
    v11 = v7;
    if ( v10 <= v7 )
      v11 = *(_QWORD *)(v4 + 40);
    if ( v11 && (v12 = memcmp(*(const void **)(v4 + 32), a2, v11)) != 0 )
    {
LABEL_21:
      if ( v12 <= 0 )
        return v4;
    }
    else
    {
      v13 = v10 - v7;
      if ( v13 <= 0x7FFFFFFF )
      {
        if ( v13 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v12 = v13;
          goto LABEL_21;
        }
        return v4;
      }
    }
  }
  return v2;
}

