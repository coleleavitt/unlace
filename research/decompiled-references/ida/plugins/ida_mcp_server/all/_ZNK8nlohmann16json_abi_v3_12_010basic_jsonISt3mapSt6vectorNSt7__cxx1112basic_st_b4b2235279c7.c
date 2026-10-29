__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        char a12,
        int a13,
        int a14,
        __int64 a15)
{
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbp
  size_t v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbx
  size_t v23; // rdx
  int v24; // eax
  _DWORD s2[14]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  strcpy((char *)s2, "address");
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
      a15);
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(v15 + 16);
  v17 = v15 + 8;
  if ( v16 )
  {
    v18 = v15 + 8;
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v16 + 40);
        if ( !v21 )
          break;
        v19 = 7;
        if ( v21 <= 7 )
          v19 = *(_QWORD *)(v16 + 40);
        v20 = memcmp(*(const void **)(v16 + 32), s2, v19);
        if ( v20 || (v20 = v21 - 7, (__int64)(v21 - 7) <= 0x7FFFFFFF) )
        {
          if ( v20 < 0 )
            break;
        }
        v18 = v16;
        v16 = *(_QWORD *)(v16 + 16);
        if ( !v16 )
          goto LABEL_12;
      }
      v16 = *(_QWORD *)(v16 + 24);
    }
    while ( v16 );
LABEL_12:
    if ( v17 != v18 )
    {
      v22 = *(_QWORD *)(v18 + 40);
      if ( v22 )
      {
        v23 = 7;
        if ( v22 <= 7 )
          v23 = *(_QWORD *)(v18 + 40);
        v24 = memcmp(s2, *(const void **)(v18 + 32), v23);
        if ( v24 || (v24 = 7 - v22, (__int64)(7 - v22) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v24 >= 0 )
            v17 = v18;
        }
      }
      else
      {
        v17 = v18;
      }
    }
  }
  return v17 + 64;
}

