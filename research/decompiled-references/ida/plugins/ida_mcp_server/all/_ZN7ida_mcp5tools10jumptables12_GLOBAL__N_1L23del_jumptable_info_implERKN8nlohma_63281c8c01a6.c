__int64 __fastcall ida_mcp::tools::jumptables::`anonymous namespace'::del_jumptable_info_impl(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  char v3; // bp
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // rax
  unsigned int v10; // r14d
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  size_t v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm0
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rax
  char *v26; // r12
  unsigned int v27; // r14d
  unsigned int v28; // r14d
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // edi
  unsigned __int64 v32; // r8
  char *v33; // rcx
  char *v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // ecx
  __int64 v37; // rdi
  __m128i v38; // [rsp+0h] [rbp-158h] BYREF
  void **v39; // [rsp+10h] [rbp-148h]
  char *v40; // [rsp+18h] [rbp-140h]
  size_t v41; // [rsp+28h] [rbp-130h]
  __int64 v42; // [rsp+30h] [rbp-128h]
  __int64 v43; // [rsp+38h] [rbp-120h]
  void *v44; // [rsp+40h] [rbp-118h] BYREF
  size_t v45; // [rsp+48h] [rbp-110h]
  _QWORD v46[2]; // [rsp+50h] [rbp-108h] BYREF
  char v47; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-F0h]
  char v49; // [rsp+78h] [rbp-E0h]
  __int128 v50; // [rsp+80h] [rbp-D8h]
  void *v51; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v52; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-B0h]
  __int64 v54; // [rsp+B0h] [rbp-A8h]
  __int64 v55; // [rsp+B8h] [rbp-A0h]
  __m128i v56; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-88h]
  __int64 v58; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-70h]
  char s[40]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+118h] [rbp-40h]

  v38.m128i_i64[1] = a1;
  v61 = __readfsqword(0x28u);
  v51 = &v52.m128i_u64[1];
  v52.m128i_i64[0] = 0;
  v52.m128i_i8[8] = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xFE5C1);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v51, v52.m128i_u64[0]);
  v43 = v2;
  v3 = v2;
  v42 = v1;
  if ( v51 != &v52.m128i_u64[1] )
    operator delete(v51, v52.m128i_i64[1] + 1);
  if ( !v3 )
    JUMPOUT(0xFE578);
  del_jumptable_info();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v47 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v4,
    "address",
    v5,
    v6,
    v7,
    v8,
    v38.m128i_i32[0],
    v38.m128i_i32[2],
    (__int64)v39);
  v48 = (unsigned __int64)v4;
  qsnprintf();
  v39 = &v44;
  v44 = v46;
  v9 = strlen(s);
  v41 = v9;
  v10 = v9;
  if ( v9 > 0xF )
  {
    v23 = (_QWORD *)std::string::_M_create();
    v44 = v23;
    v46[0] = v41;
  }
  else
  {
    if ( v9 == 1 )
    {
      LOBYTE(v46[0]) = s[0];
LABEL_8:
      v11 = v46;
      goto LABEL_9;
    }
    if ( !v9 )
      goto LABEL_8;
    v23 = v46;
  }
  if ( v10 >= 8 )
  {
    *v23 = *(_QWORD *)s;
    *(_QWORD *)((char *)v23 + v10 - 8) = *(_QWORD *)&s[v10 - 8];
    v24 = (unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v25 = (char *)v23 - v24;
    v26 = (char *)(s - v25);
    v27 = ((_DWORD)v25 + v10) & 0xFFFFFFF8;
    if ( v27 >= 8 )
    {
      v28 = v27 & 0xFFFFFFF8;
      v29 = 0;
      do
      {
        v30 = v29;
        v29 += 8;
        *(_QWORD *)(v24 + v30) = *(_QWORD *)&v26[v30];
      }
      while ( v29 < v28 );
    }
  }
  else if ( (v10 & 4) != 0 )
  {
    *(_DWORD *)v23 = *(_DWORD *)s;
    *(_DWORD *)((char *)v23 + v10 - 4) = *(_DWORD *)&s[v10 - 4];
  }
  else if ( v10 )
  {
    *(_BYTE *)v23 = s[0];
    if ( (v10 & 2) != 0 )
      *(_WORD *)((char *)v23 + v10 - 2) = *(_WORD *)&s[v10 - 2];
  }
  v9 = v41;
  v11 = v44;
LABEL_9:
  v45 = v9;
  *((_BYTE *)v11 + v9) = 0;
  v49 = 0;
  *(_QWORD *)&v50 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = 3;
  v12 = (_QWORD *)operator new(0x20u);
  v13 = v44;
  v14 = v12 + 2;
  v15 = v45;
  *v12 = v12 + 2;
  if ( v13 == v46 )
  {
    v31 = v15 + 1;
    if ( (unsigned int)(v15 + 1) >= 8 )
    {
      v12[2] = v46[0];
      *(_QWORD *)((char *)v14 + v31 - 8) = *(_QWORD *)((char *)&v46[-1] + v31);
      v32 = (unsigned __int64)(v12 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v33 = (char *)v14 - v32;
      v34 = (char *)((char *)v46 - v33);
      if ( (((_DWORD)v33 + v31) & 0xFFFFFFF8) >= 8 )
      {
        v35 = ((_DWORD)v33 + v31) & 0xFFFFFFF8;
        v36 = 0;
        do
        {
          v37 = v36;
          v36 += 8;
          *(_QWORD *)(v32 + v37) = *(_QWORD *)&v34[v37];
        }
        while ( v36 < v35 );
      }
    }
    else if ( (v31 & 4) != 0 )
    {
      *((_DWORD *)v12 + 4) = v46[0];
      *(_DWORD *)((char *)v14 + v31 - 4) = *(_DWORD *)((char *)&v45 + v31 + 4);
    }
    else if ( (_DWORD)v15 != -1 )
    {
      *((_BYTE *)v12 + 16) = v46[0];
      if ( (v31 & 2) != 0 )
        *(_WORD *)((char *)v14 + v31 - 2) = *(_WORD *)((char *)&v45 + v31 + 6);
    }
  }
  else
  {
    *v12 = v13;
    v12[2] = v46[0];
  }
  v12[1] = v15;
  v44 = v46;
  v45 = 0;
  LOBYTE(v46[0]) = 0;
  v40 = &v47;
  v50 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v56,
    (const __m128i *)&v47);
  v57 = 0;
  LOBYTE(v51) = 0;
  v52.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v51) = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v16,
    "success",
    v17,
    v18,
    v19,
    v20,
    (int)v16,
    v38.m128i_i32[2],
    (__int64)v39);
  v21 = _mm_loadl_epi64(&v38);
  v53 = 4;
  v54 = 1;
  v55 = 0;
  v52 = v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v58,
    (const __m128i *)&v51);
  v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v38.m128i_i64[1],
    &v56);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v44 != v46 )
    operator delete(v44, v46[0] + 1LL);
  return v38.m128i_i64[1];
}

