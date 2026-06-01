_QWORD *__fastcall ida_mcp::tools::decl_compiler::`anonymous namespace'::parse_decls_impl(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  size_t v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i *v17; // r14
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // r12
  size_t v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r13
  size_t v27; // rdx
  int v28; // eax
  __int64 v29; // r12
  size_t v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r13
  size_t v34; // rax
  int v35; // eax
  unsigned __int8 v36; // al
  __int64 v37; // [rsp+18h] [rbp-150h]
  __int64 v38; // [rsp+40h] [rbp-128h]
  int v39; // [rsp+50h] [rbp-118h] BYREF
  char v40[16]; // [rsp+58h] [rbp-110h]
  char v41; // [rsp+68h] [rbp-100h]
  _BOOL8 v42; // [rsp+70h] [rbp-F8h]
  __int64 v43; // [rsp+78h] [rbp-F0h]
  char v44; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+88h] [rbp-E0h]
  char v46; // [rsp+98h] [rbp-D0h]
  __int64 v47; // [rsp+A0h] [rbp-C8h]
  __int64 v48; // [rsp+A8h] [rbp-C0h]
  char *v49; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+B8h] [rbp-B0h] BYREF
  char v51[8]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-98h]
  __int64 v53; // [rsp+D8h] [rbp-90h]
  __m128i v54; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD s1[4]; // [rsp+F0h] [rbp-78h] BYREF
  _QWORD v56[3]; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+128h] [rbp-40h] BYREF

  v57 = __readfsqword(0x28u);
  v49 = (char *)&s2 + 8;
  *((_QWORD *)&s2 + 1) = 0x746172616C636564LL;
  strcpy(v51, "ions");
  *(_QWORD *)&s2 = 12;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x104733);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 12;
        if ( v8 <= 0xC )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 12, (__int64)(v8 - 12) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 12;
        if ( v9 <= 0xC )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 12 - v9, (__int64)(12 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  LOBYTE(v38) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x1045DD);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v19 = *(_QWORD *)(a2 + 8);
    v20 = *(_QWORD *)(v19 + 16);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v19 + 16);
      v37 = v19 + 8;
      v22 = v19 + 8;
      do
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(v21 + 40);
          if ( !v25 )
            break;
          v23 = 14;
          if ( v25 <= 0xE )
            v23 = *(_QWORD *)(v21 + 40);
          v24 = memcmp(*(const void **)(v21 + 32), "pack_alignment", v23);
          if ( v24 || (v24 = v25 - 14, (__int64)(v25 - 14) <= 0x7FFFFFFF) )
          {
            if ( v24 < 0 )
              break;
          }
          v22 = v21;
          v21 = *(_QWORD *)(v21 + 16);
          if ( !v21 )
            goto LABEL_36;
        }
        v21 = *(_QWORD *)(v21 + 24);
      }
      while ( v21 );
LABEL_36:
      if ( v37 != v22 )
      {
        v26 = *(_QWORD *)(v22 + 40);
        if ( !v26 )
          goto LABEL_43;
        v27 = 14;
        if ( v26 <= 0xE )
          v27 = *(_QWORD *)(v22 + 40);
        v28 = memcmp(*(const void **)(v22 + 32), "pack_alignment", v27);
        if ( v28 || (v28 = v26 - 14, (__int64)(v26 - 14) <= 0x7FFFFFFF) )
        {
          if ( v28 <= 0 )
          {
LABEL_43:
            v29 = v37;
            strcpy((char *)s1, "pack_alignment");
            do
            {
              while ( 1 )
              {
                v32 = *(_QWORD *)(v20 + 40);
                if ( !v32 )
                  break;
                v30 = 14;
                if ( v32 <= 0xE )
                  v30 = *(_QWORD *)(v20 + 40);
                v31 = memcmp(*(const void **)(v20 + 32), s1, v30);
                if ( v31 || (v31 = v32 - 14, (__int64)(v32 - 14) <= 0x7FFFFFFF) )
                {
                  if ( v31 < 0 )
                    break;
                }
                v29 = v20;
                v20 = *(_QWORD *)(v20 + 16);
                if ( !v20 )
                  goto LABEL_52;
              }
              v20 = *(_QWORD *)(v20 + 24);
            }
            while ( v20 );
LABEL_52:
            if ( v37 != v29 )
            {
              v33 = *(_QWORD *)(v29 + 40);
              if ( v33 )
              {
                v34 = 14;
                if ( v33 <= 0xE )
                  v34 = *(_QWORD *)(v29 + 40);
                v35 = memcmp(s1, *(const void **)(v29 + 32), v34);
                if ( v35 || (v35 = 14 - v33, (__int64)(14 - v33) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v35 < 0 )
                    v29 = v37;
                  v37 = v29;
                }
              }
              else
              {
                v37 = v29;
              }
            }
            if ( *(_BYTE *)(v37 + 64) )
            {
              v36 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              if ( v36 != 6 )
              {
                if ( v36 > 6u )
                {
                  if ( v36 == 7 )
                    goto LABEL_22;
                }
                else if ( v36 == 4 || v36 == 5 )
                {
                  goto LABEL_22;
                }
                JUMPOUT(0x10458D);
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  get_idati();
  v12 = parse_decls();
  LOBYTE(v39) = 0;
  v13 = v12;
  *(_QWORD *)v40 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v39) = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "success");
  *(_QWORD *)(v14 + 8) = 7;
  v41 = 4;
  v43 = 0;
  *(_OWORD *)v40 = (unsigned __int64)v14;
  v42 = (_DWORD)v13 == 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v54,
    (const __m128i *)&v39);
  s1[0] = 0;
  v44 = 0;
  *(_QWORD *)&v45 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v44 = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "error_count");
  *(_QWORD *)(v15 + 8) = 11;
  v46 = 5;
  v47 = v13;
  v48 = 0;
  v45 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v44);
  s1[3] = 0;
  LOBYTE(v49) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v49) = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "input_length");
  *(_QWORD *)(v16 + 8) = 12;
  v51[0] = 6;
  v52 = 0;
  v53 = 0;
  s2 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v56,
    (const __m128i *)&v49);
  v56[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v54,
    3);
  v17 = (__m128i *)&v57;
  do
  {
    v17 = (__m128i *)((char *)v17 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v17 != &v54 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

