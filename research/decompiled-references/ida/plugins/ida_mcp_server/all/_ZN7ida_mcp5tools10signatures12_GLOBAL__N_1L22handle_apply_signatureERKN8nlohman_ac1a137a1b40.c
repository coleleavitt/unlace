_QWORD *__fastcall ida_mcp::tools::signatures::`anonymous namespace'::handle_apply_signature(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  int v13; // ebx
  const char *v14; // r12
  __int64 v15; // rax
  _BYTE *v16; // r13
  unsigned __int64 v17; // r14
  _QWORD *v18; // rax
  _BYTE *v19; // rdi
  __int64 *v20; // rbp
  __m128i si128; // xmm0
  size_t v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rbx
  size_t v27; // rax
  _QWORD *v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // rbx
  unsigned __int64 v34; // rax
  char *v35; // rdx
  const char *v36; // r12
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v45[4]; // [rsp+20h] [rbp-168h] BYREF
  int v46[2]; // [rsp+30h] [rbp-158h]
  int v47[2]; // [rsp+38h] [rbp-150h]
  int v48[2]; // [rsp+48h] [rbp-140h]
  void *src; // [rsp+50h] [rbp-138h]
  int v50[2]; // [rsp+58h] [rbp-130h]
  int v51[2]; // [rsp+60h] [rbp-128h] BYREF
  int v52; // [rsp+70h] [rbp-118h] BYREF
  int v53[4]; // [rsp+78h] [rbp-110h]
  char v54; // [rsp+88h] [rbp-100h]
  int v55[4]; // [rsp+90h] [rbp-F8h]
  char v56; // [rsp+A0h] [rbp-E8h] BYREF
  int v57[4]; // [rsp+A8h] [rbp-E0h] BYREF
  char v58; // [rsp+B8h] [rbp-D0h]
  __int64 v59; // [rsp+C0h] [rbp-C8h]
  __int64 v60; // [rsp+C8h] [rbp-C0h]
  char *v61; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+D8h] [rbp-B0h] BYREF
  char v63; // [rsp+E8h] [rbp-A0h]
  __int128 v64; // [rsp+F0h] [rbp-98h]
  __m128i v65; // [rsp+100h] [rbp-88h] BYREF
  __int64 v66; // [rsp+110h] [rbp-78h]
  _QWORD v67[3]; // [rsp+118h] [rbp-70h] BYREF
  _QWORD v68[3]; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+148h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
  BYTE12(s2) = 0;
  DWORD2(s2) = 1701667182;
  *(_QWORD *)&s2 = 4;
  v61 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x11DD06);
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
        v6 = 4;
        if ( v8 <= 4 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
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
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 4;
        if ( v9 <= 4 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 4 - v9, (__int64)(4 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
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
  LOBYTE(v51[0]) = 0;
  src = v51;
  *(_QWORD *)v50 = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x11DBFC);
  std::string::_M_assign();
  v12 = plan_to_apply_idasgn();
  v13 = v12;
  switch ( v12 )
  {
    case 0LL:
      v14 = "ok";
      break;
    case 1LL:
      v14 = "signature_not_found";
      break;
    case 2LL:
      v14 = "already_applied";
      break;
    case 3LL:
      v14 = "already_current";
      break;
    case 4LL:
      v14 = "already_planned";
      break;
    default:
      v14 = "error";
      break;
  }
  LOBYTE(v52) = 0;
  *(_QWORD *)v53 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v52) = 3;
  v15 = operator new(0x20u);
  *(_QWORD *)v15 = v15 + 16;
  strcpy((char *)(v15 + 16), "name");
  *(_QWORD *)(v15 + 8) = 4;
  v54 = 0;
  *(_QWORD *)v55 = 0;
  *(_OWORD *)v53 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v16 = src;
  v17 = *(_QWORD *)v50;
  v54 = 3;
  v18 = (_QWORD *)operator new(0x20u);
  v19 = v18 + 2;
  *(_QWORD *)v48 = *(_QWORD *)v50;
  v20 = v18;
  *v18 = v18 + 2;
  if ( v17 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v18;
    v22 = v17 + 1;
    if ( v17 )
    {
LABEL_26:
      *(__m128i *)v45 = si128;
      memcpy(v19, v16, v22);
      v23 = *(_QWORD *)v48;
      si128 = _mm_load_si128((const __m128i *)v45);
      goto LABEL_27;
    }
    goto LABEL_44;
  }
  v42 = std::string::_M_create();
  *v20 = v42;
  v19 = (_BYTE *)v42;
  v43 = *(_QWORD *)v48;
  si128 = (__m128i)(unsigned __int64)v20;
  v20[2] = *(_QWORD *)v48;
  v22 = v43 + 1;
  if ( !v43 )
  {
LABEL_44:
    *v19 = *v16;
    v23 = *(_QWORD *)v48;
    goto LABEL_27;
  }
  v23 = -1;
  if ( v22 )
    goto LABEL_26;
LABEL_27:
  v20[1] = v23;
  *(_QWORD *)v47 = &v52;
  *(__m128i *)v55 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v65,
    (const __m128i *)&v52,
    2);
  v66 = 0;
  v56 = 0;
  *(_QWORD *)v57 = 0;
  *(_QWORD *)v45 = v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = 3;
  v24 = operator new(0x20u);
  *(_QWORD *)v24 = v24 + 16;
  strcpy((char *)(v24 + 16), "result");
  *(_QWORD *)(v24 + 8) = 6;
  v58 = 5;
  v59 = v13;
  v60 = 0;
  *(_OWORD *)v57 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v56,
    2);
  v67[2] = 0;
  LOBYTE(v61) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v61) = 3;
  v25 = operator new(0x20u);
  *(_QWORD *)v25 = v25 + 16;
  strcpy((char *)(v25 + 16), "result_name");
  *(_QWORD *)(v25 + 8) = 11;
  v63 = 0;
  *(_QWORD *)&v64 = 0;
  s2 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = 3;
  v26 = (__int64 *)operator new(0x20u);
  *v26 = (__int64)(v26 + 2);
  *(_QWORD *)v46 = v26 + 2;
  v27 = strlen(v14);
  v28 = *(_QWORD **)v46;
  *(_QWORD *)v48 = v27;
  v29 = v27;
  if ( v27 > 0xF )
  {
    *(_QWORD *)v46 = v27;
    v41 = std::string::_M_create();
    *v26 = v41;
    v28 = (_QWORD *)v41;
    v29 = v46[0];
    v26[2] = *(_QWORD *)v48;
  }
  if ( v29 >= 8 )
  {
    *v28 = *(_QWORD *)v14;
    *(_QWORD *)((char *)v28 + v29 - 8) = *(_QWORD *)&v14[v29 - 8];
    v34 = (unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v35 = (char *)v28 - v34;
    v36 = (const char *)(v14 - v35);
    v37 = ((_DWORD)v35 + v29) & 0xFFFFFFF8;
    if ( v37 >= 8 )
    {
      v38 = v37 & 0xFFFFFFF8;
      v39 = 0;
      do
      {
        v40 = v39;
        v39 += 8;
        *(_QWORD *)(v34 + v40) = *(_QWORD *)&v36[v40];
      }
      while ( v39 < v38 );
    }
  }
  else if ( (v29 & 4) != 0 )
  {
    *(_DWORD *)v28 = *(_DWORD *)v14;
    *(_DWORD *)((char *)v28 + v29 - 4) = *(_DWORD *)&v14[v29 - 4];
  }
  else if ( v29 )
  {
    *(_BYTE *)v28 = *v14;
    if ( (v29 & 2) != 0 )
      *(_WORD *)((char *)v28 + v29 - 2) = *(_WORD *)&v14[v29 - 2];
  }
  v30 = *v26;
  v31 = *(_QWORD *)v48;
  v26[1] = *(_QWORD *)v48;
  *(_BYTE *)(v30 + v31) = 0;
  v64 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    (const __m128i *)&v61,
    2);
  v68[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v65,
    3);
  v32 = (__m128i *)&v69;
  do
  {
    v32 = (__m128i *)((char *)v32 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v32 != &v65 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src != v51 )
    operator delete(src, *(_QWORD *)v51 + 1LL);
  return a1;
}

