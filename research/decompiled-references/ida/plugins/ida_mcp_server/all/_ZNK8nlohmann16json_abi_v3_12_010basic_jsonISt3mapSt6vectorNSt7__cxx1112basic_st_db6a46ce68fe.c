__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rbp
  size_t v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rbx
  size_t v25; // rdx
  int v26; // eax
  _DWORD s2[14]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  strcpy((char *)s2, "tree");
  if ( *(_BYTE *)a1 != 1 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17);
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(v17 + 16);
  v19 = v17 + 8;
  if ( v18 )
  {
    v20 = v17 + 8;
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v18 + 40);
        if ( !v23 )
          break;
        v21 = 4;
        if ( v23 <= 4 )
          v21 = *(_QWORD *)(v18 + 40);
        v22 = memcmp(*(const void **)(v18 + 32), s2, v21);
        if ( v22 || (v22 = v23 - 4, (__int64)(v23 - 4) <= 0x7FFFFFFF) )
        {
          if ( v22 < 0 )
            break;
        }
        v20 = v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v18 )
          goto LABEL_12;
      }
      v18 = *(_QWORD *)(v18 + 24);
    }
    while ( v18 );
LABEL_12:
    if ( v19 != v20 )
    {
      v24 = *(_QWORD *)(v20 + 40);
      if ( v24 )
      {
        v25 = 4;
        if ( v24 <= 4 )
          v25 = *(_QWORD *)(v20 + 40);
        v26 = memcmp(s2, *(const void **)(v20 + 32), v25);
        if ( v26 || (v26 = 4 - v24, (__int64)(4 - v24) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v26 >= 0 )
            v19 = v20;
        }
      }
      else
      {
        v19 = v20;
      }
    }
  }
  return v19 + 64;
}

