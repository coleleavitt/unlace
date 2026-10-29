__int64 __fastcall ida_mcp::tools::auto_analysis::`anonymous namespace'::handle_is_auto_analysis_complete(__int64 a1)
{
  int auto_state; // eax
  const char *v2; // r14
  const char *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  size_t v8; // rax
  _QWORD *v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rax
  __m128i si128; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rbx
  unsigned __int64 v22; // rax
  char *v23; // rdx
  const char *v24; // r14
  unsigned int v25; // r15d
  unsigned int v26; // r15d
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  size_t v30; // [rsp+30h] [rbp-1C8h]
  size_t v31; // [rsp+48h] [rbp-1B0h]
  char v32; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+150h] [rbp-A8h]
  __int64 v34; // [rsp+168h] [rbp-90h]
  __int64 v35; // [rsp+180h] [rbp-78h]
  __int64 v36; // [rsp+198h] [rbp-60h]
  __int64 v37; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+1B8h] [rbp-40h] BYREF

  v38 = __readfsqword(0x28u);
  auto_state = get_auto_state();
  if ( auto_state == 30 )
  {
    v2 = "AU_PROC (making procedures)";
    v3 = "Auto-analysis is still running. Results may be incomplete. Wait for completion before performing comprehensive analysis.";
  }
  else if ( auto_state <= 30 )
  {
    if ( auto_state )
    {
      if ( auto_state == 20 )
      {
        v2 = "AU_CODE (making code)";
        v3 = "Auto-analysis is still running. Results may be incomplete. Wait for completion before performing comprehensive analysis.";
        goto LABEL_9;
      }
      goto LABEL_19;
    }
    v2 = "AU_NONE (idle)";
    v3 = "Auto-analysis is complete. Database is ready for queries.";
  }
  else
  {
    if ( auto_state != 40 )
    {
      if ( auto_state == 200 )
      {
        v2 = "AU_FINAL (final pass)";
        v3 = "Auto-analysis is still running. Results may be incomplete. Wait for completion before performing comprehensive analysis.";
        goto LABEL_9;
      }
LABEL_19:
      v2 = "Unknown";
      v3 = "Auto-analysis is still running. Results may be incomplete. Wait for completion before performing comprehensive analysis.";
      goto LABEL_9;
    }
    v2 = "AU_USED (reanalyzing)";
    v3 = "Auto-analysis is still running. Results may be incomplete. Wait for completion before performing comprehensive analysis.";
  }
LABEL_9:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v4 = operator new(0x20u);
  strcpy((char *)(v4 + 16), "is_complete");
  *(_QWORD *)v4 = v4 + 16;
  *(_QWORD *)(v4 + 8) = 11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v33 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "state_value");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v34 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v6 = operator new(0x20u);
  strcpy((char *)(v6 + 16), "state_name");
  *(_QWORD *)v6 = v6 + 16;
  *(_QWORD *)(v6 + 8) = 10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v7 = (__int64 *)operator new(0x20u);
  *v7 = (__int64)(v7 + 2);
  v8 = strlen(v2);
  v9 = v7 + 2;
  v31 = v8;
  v10 = v8;
  if ( v8 > 0xF )
  {
    v29 = std::string::_M_create();
    *v7 = v29;
    v9 = (_QWORD *)v29;
    v7[2] = v31;
  }
  if ( v10 >= 8 )
  {
    *v9 = *(_QWORD *)v2;
    *(_QWORD *)((char *)v9 + v10 - 8) = *(_QWORD *)&v2[v10 - 8];
    v22 = (unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v23 = (char *)v9 - v22;
    v24 = (const char *)(v2 - v23);
    v25 = ((_DWORD)v23 + v10) & 0xFFFFFFF8;
    if ( v25 >= 8 )
    {
      v26 = v25 & 0xFFFFFFF8;
      v27 = 0;
      do
      {
        v28 = v27;
        v27 += 8;
        *(_QWORD *)(v22 + v28) = *(_QWORD *)&v24[v28];
      }
      while ( v27 < v26 );
    }
  }
  else if ( (v10 & 4) != 0 )
  {
    *(_DWORD *)v9 = *(_DWORD *)v2;
    *(_DWORD *)((char *)v9 + v10 - 4) = *(_DWORD *)&v2[v10 - 4];
  }
  else if ( v10 )
  {
    *(_BYTE *)v9 = *v2;
    if ( (v10 & 2) != 0 )
      *(_WORD *)((char *)v9 + v10 - 2) = *(_WORD *)&v2[v10 - 2];
  }
  v11 = *v7;
  v7[1] = v31;
  *(_BYTE *)(v11 + v31) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v35 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v12 = (__int64 *)operator new(0x20u);
  *v12 = (__int64)(v12 + 2);
  v13 = std::string::_M_create();
  *v12 = v13;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E23C0);
  v12[2] = 18;
  *(__m128i *)v13 = si128;
  *(_WORD *)(v13 + 16) = 29545;
  v15 = *v12;
  v12[1] = 18;
  *(_BYTE *)(v15 + 18) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v36 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "note");
  *(_QWORD *)(v16 + 8) = 4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = (__int64 *)operator new(0x20u);
  *v17 = (__int64)(v17 + 2);
  v30 = strlen(v3);
  v18 = (_QWORD *)std::string::_M_create();
  *v17 = (__int64)v18;
  v17[2] = v30;
  *v18 = *(_QWORD *)v3;
  *(_QWORD *)((char *)v18 + (unsigned int)v30 - 8) = *(_QWORD *)&v3[(unsigned int)v30 - 8];
  qmemcpy(
    (void *)((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v3 - ((const char *)v18 - ((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v18 - (((_DWORD)v18 + 8) & 0xFFFFFFF8) + (unsigned int)v30) >> 3));
  v19 = *v17;
  v17[1] = v30;
  *(_BYTE *)(v19 + v30) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v37 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v20 = &v38;
  do
  {
    v20 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v20 != (unsigned __int64 *)&v32 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

