__int64 __fastcall ida_mcp::tools::database::handle_set_database_flag(int a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  unsigned int v14; // ebp
  unsigned __int8 v15; // r13
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 *v30; // rbx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r13
  size_t v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rcx
  size_t v39; // rdx
  int v40; // eax
  int v41; // [rsp+0h] [rbp-138h]
  _QWORD *v42; // [rsp+0h] [rbp-138h]
  __int64 v43; // [rsp+0h] [rbp-138h]
  __int64 v44; // [rsp+8h] [rbp-130h]
  int v45; // [rsp+8h] [rbp-130h]
  __int64 v46; // [rsp+8h] [rbp-130h]
  __int64 v47; // [rsp+10h] [rbp-128h]
  __int64 v48; // [rsp+10h] [rbp-128h]
  int v49; // [rsp+10h] [rbp-128h]
  int v50; // [rsp+18h] [rbp-120h]
  int v51; // [rsp+20h] [rbp-118h] BYREF
  __int128 v52; // [rsp+28h] [rbp-110h]
  int v53; // [rsp+38h] [rbp-100h]
  __int64 v54; // [rsp+40h] [rbp-F8h]
  __int64 v55; // [rsp+48h] [rbp-F0h]
  int v56; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v57; // [rsp+58h] [rbp-E0h]
  int v58; // [rsp+68h] [rbp-D0h]
  __int64 v59; // [rsp+70h] [rbp-C8h]
  __int64 v60; // [rsp+78h] [rbp-C0h]
  char v61; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+88h] [rbp-B0h]
  __int64 v63; // [rsp+98h] [rbp-A0h]
  __int64 v64; // [rsp+A0h] [rbp-98h]
  __int64 v65; // [rsp+A8h] [rbp-90h]
  _QWORD v66[3]; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD v67[3]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v68[3]; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+F8h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_61;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    goto LABEL_61;
  v4 = v2 + 8;
  v5 = v4;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 40);
      if ( !v8 )
        break;
      v6 = 4;
      if ( v8 <= 4 )
        v6 = *(_QWORD *)(v3 + 40);
      v7 = memcmp(*(const void **)(v3 + 32), "flag", v6);
      if ( v7 || (v7 = v8 - 4, (__int64)(v8 - 4) <= 0x7FFFFFFF) )
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
  if ( v4 == v5 )
    goto LABEL_61;
  v9 = *(_QWORD *)(v5 + 40);
  if ( v9 )
  {
    v10 = 4;
    if ( v9 <= 4 )
      v10 = *(_QWORD *)(v5 + 40);
    v11 = memcmp(*(const void **)(v5 + 32), "flag", v10);
    if ( !v11 )
    {
      v11 = v9 - 4;
      if ( (__int64)(v9 - 4) > 0x7FFFFFFF )
        goto LABEL_61;
    }
    if ( v11 > 0 )
      goto LABEL_61;
  }
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
LABEL_61:
    JUMPOUT(0x559B4);
  v12 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v13 = *(_BYTE *)v12;
  if ( *(_BYTE *)v12 == 6 )
    goto LABEL_24;
  if ( v13 > 6u )
  {
    if ( v13 == 7 )
    {
      v14 = (int)*(double *)(v12 + 8);
LABEL_25:
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_26;
      goto LABEL_31;
    }
    goto LABEL_60;
  }
  if ( v13 != 4 )
  {
    if ( v13 == 5 )
    {
LABEL_24:
      v14 = *(_DWORD *)(v12 + 8);
      goto LABEL_25;
    }
LABEL_60:
    JUMPOUT(0x558ED);
  }
  v14 = *(unsigned __int8 *)(v12 + 8);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_26;
LABEL_31:
  v32 = *(_QWORD *)(a2 + 8);
  v33 = *(_QWORD *)(v32 + 16);
  if ( v33 )
  {
    v44 = v32 + 8;
    v34 = v32 + 8;
    do
    {
      while ( 1 )
      {
        v37 = *(_QWORD *)(v33 + 40);
        if ( !v37 )
          break;
        v35 = 5;
        if ( v37 <= 5 )
          v35 = *(_QWORD *)(v33 + 40);
        v36 = memcmp(*(const void **)(v33 + 32), "value", v35);
        if ( v36 || (v36 = v37 - 5, (__int64)(v37 - 5) <= 0x7FFFFFFF) )
        {
          if ( v36 < 0 )
            break;
        }
        v34 = v33;
        v33 = *(_QWORD *)(v33 + 16);
        if ( !v33 )
          goto LABEL_41;
      }
      v33 = *(_QWORD *)(v33 + 24);
    }
    while ( v33 );
LABEL_41:
    if ( v44 != v34 )
    {
      v38 = *(_QWORD *)(v34 + 40);
      if ( !v38 )
        goto LABEL_64;
      v39 = 5;
      v44 = *(_QWORD *)(v34 + 40);
      if ( v38 <= 5 )
        v39 = *(_QWORD *)(v34 + 40);
      v40 = memcmp(*(const void **)(v34 + 32), "value", v39);
      if ( v40 || (v40 = v44 - 5, v44 - 5 <= 0x7FFFFFFF) )
      {
        if ( v40 <= 0 )
        {
LABEL_64:
          if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            LOBYTE(v50) = 0;
            nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
            v15 = 0;
            goto LABEL_27;
          }
        }
      }
    }
  }
LABEL_26:
  v15 = 1;
LABEL_27:
  set_database_flag();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v51) = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "flag", v17, v18, v19, v20, a1, v44, v47);
  LOBYTE(v53) = 6;
  v54 = v14;
  v55 = 0;
  v52 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (const __m128i *)&v51);
  LOBYTE(v56) = 0;
  v66[2] = 0;
  *(_QWORD *)&v57 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v56) = 3;
  v21 = operator new(0x20u);
  *(_DWORD *)(v21 + 16) = 1970037110;
  *(_QWORD *)v21 = v21 + 16;
  *(_BYTE *)(v21 + 20) = 101;
  *(_QWORD *)(v21 + 8) = 5;
  *(_BYTE *)(v21 + 21) = 0;
  LOBYTE(v58) = 4;
  v59 = v15;
  v60 = 0;
  v57 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v56);
  v67[2] = 0;
  v61 = 0;
  *(_QWORD *)&v62 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v61 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "success", v23, v24, v25, v26, v41, v45, v48);
  v63 = 4;
  v62 = (unsigned __int64)v22;
  v64 = 1;
  v65 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    (const __m128i *)&v61);
  v68[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v42,
    (__int64)v66,
    3,
    v27,
    v28,
    v29,
    (int)v42,
    v46,
    v49,
    v50,
    v51,
    v52,
    *((__int64 *)&v52 + 1),
    v53,
    v54,
    v55,
    v56,
    v57,
    *((__int64 *)&v57 + 1),
    v58,
    v59);
  v30 = &v69;
  do
  {
    v30 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v30 != v66 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v43;
}

