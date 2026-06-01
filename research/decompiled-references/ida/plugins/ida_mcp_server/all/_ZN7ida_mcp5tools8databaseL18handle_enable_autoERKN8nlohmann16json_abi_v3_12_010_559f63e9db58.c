_QWORD *__fastcall ida_mcp::tools::database::handle_enable_auto(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // r12
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r13
  size_t v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  size_t v20; // rdx
  int v21; // eax
  int v22; // [rsp+0h] [rbp-128h]
  __int64 v23; // [rsp+8h] [rbp-120h]
  int v24; // [rsp+10h] [rbp-118h] BYREF
  __int128 v25; // [rsp+18h] [rbp-110h]
  int v26; // [rsp+28h] [rbp-100h]
  __int64 v27; // [rsp+30h] [rbp-F8h]
  __int64 v28; // [rsp+38h] [rbp-F0h]
  int v29; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-E0h]
  char v31; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+60h] [rbp-C8h]
  __int64 v33; // [rsp+68h] [rbp-C0h]
  __int64 v34; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+78h] [rbp-B0h]
  __int64 v36; // [rsp+88h] [rbp-A0h]
  __int64 v37; // [rsp+90h] [rbp-98h]
  __int64 v38; // [rsp+98h] [rbp-90h]
  _QWORD v39[3]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v40[3]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v41[3]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+E8h] [rbp-40h] BYREF

  v42 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(v12 + 16);
  if ( !v13 )
    goto LABEL_2;
  v14 = v12 + 8;
  v15 = v12 + 8;
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v13 + 40);
      if ( !v18 )
        break;
      v16 = 6;
      if ( v18 <= 6 )
        v16 = *(_QWORD *)(v13 + 40);
      v17 = memcmp(*(const void **)(v13 + 32), "enable", v16);
      if ( v17 || (v17 = v18 - 6, (__int64)(v18 - 6) <= 0x7FFFFFFF) )
      {
        if ( v17 < 0 )
          break;
      }
      v15 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_16;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v13 );
LABEL_16:
  if ( v14 == v15 )
    goto LABEL_2;
  v19 = *(_QWORD *)(v15 + 40);
  if ( v19 )
  {
    v20 = 6;
    if ( v19 <= 6 )
      v20 = *(_QWORD *)(v15 + 40);
    v21 = memcmp(*(const void **)(v15 + 32), "enable", v20);
    if ( !v21 )
    {
      v21 = v19 - 6;
      if ( (__int64)(v19 - 6) > 0x7FFFFFFF )
        goto LABEL_2;
    }
    if ( v21 > 0 )
      goto LABEL_2;
  }
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    HIBYTE(v23) = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v2 = 0;
  }
  else
  {
LABEL_2:
    v2 = 1;
  }
  *(_QWORD *)&v25 = 0;
  v3 = enable_auto();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v24) = 3;
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "enable");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 6;
  v27 = v2;
  LOBYTE(v26) = 4;
  v28 = 0;
  v25 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v39,
    (const __m128i *)&v24);
  LOBYTE(v29) = 0;
  v39[2] = 0;
  *(_QWORD *)&v30 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v29) = 3;
  v5 = operator new(0x20u);
  *(_QWORD *)v5 = v5 + 16;
  strcpy((char *)(v5 + 16), "previous_state");
  *(_QWORD *)(v5 + 8) = 14;
  v31 = 4;
  v32 = v3;
  v33 = 0;
  v30 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v40,
    (const __m128i *)&v29);
  LOBYTE(v34) = 0;
  v40[2] = 0;
  *(_QWORD *)&v35 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v34) = 3;
  v6 = operator new(0x20u);
  strcpy((char *)(v6 + 16), "success");
  *(_QWORD *)v6 = v6 + 16;
  *(_QWORD *)(v6 + 8) = 7;
  v36 = 4;
  v37 = 1;
  v38 = 0;
  v35 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v41,
    (const __m128i *)&v34);
  v41[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v39,
    3,
    v7,
    v8,
    v9,
    v22,
    v23,
    v24,
    v25,
    SDWORD2(v25),
    v26,
    v27,
    v28,
    v29,
    v30,
    SDWORD2(v30),
    v31,
    v32,
    v33,
    v34);
  v10 = &v42;
  do
  {
    v10 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v10 != v39 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

