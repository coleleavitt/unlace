_QWORD *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_parse_type_declaration(_QWORD *a1)
{
  __int8 v1; // r13
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  _QWORD *v4; // rax
  _BYTE *v5; // rdi
  __int64 *v6; // rbx
  __m128i v7; // xmm0
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r15
  const char *v12; // rsi
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 *v27; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+0h] [rbp-1F0h]
  int v32; // [rsp+0h] [rbp-1F0h]
  int v33; // [rsp+8h] [rbp-1E8h]
  char *v34; // [rsp+8h] [rbp-1E8h]
  __int64 v35; // [rsp+10h] [rbp-1E0h]
  const char *v36; // [rsp+18h] [rbp-1D8h]
  __m128i v37; // [rsp+20h] [rbp-1D0h] BYREF
  __int64 *v38; // [rsp+30h] [rbp-1C0h]
  void *src; // [rsp+38h] [rbp-1B8h]
  __m128i *v40; // [rsp+40h] [rbp-1B0h]
  __int128 *v41; // [rsp+48h] [rbp-1A8h]
  void **v42; // [rsp+50h] [rbp-1A0h]
  _QWORD *v43; // [rsp+58h] [rbp-198h]
  __int64 v44; // [rsp+60h] [rbp-190h]
  __int64 v45; // [rsp+68h] [rbp-188h]
  __m128i v46; // [rsp+70h] [rbp-180h] BYREF
  const char *v47; // [rsp+80h] [rbp-170h]
  __int128 v48; // [rsp+88h] [rbp-168h]
  char *v49; // [rsp+A0h] [rbp-150h]
  __int128 v50; // [rsp+A8h] [rbp-148h]
  void *v51; // [rsp+C0h] [rbp-130h] BYREF
  unsigned __int64 v52; // [rsp+C8h] [rbp-128h]
  _QWORD v53[2]; // [rsp+D0h] [rbp-120h] BYREF
  char v54; // [rsp+E0h] [rbp-110h] BYREF
  __int128 v55; // [rsp+E8h] [rbp-108h] BYREF
  char v56; // [rsp+F8h] [rbp-F8h]
  __m128i v57; // [rsp+100h] [rbp-F0h] BYREF
  char v58; // [rsp+110h] [rbp-E0h] BYREF
  __int128 v59; // [rsp+118h] [rbp-D8h] BYREF
  char v60; // [rsp+128h] [rbp-C8h]
  __int128 v61; // [rsp+130h] [rbp-C0h] BYREF
  char v62; // [rsp+140h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+148h] [rbp-A8h]
  __m128i v64; // [rsp+158h] [rbp-98h]
  __int64 v65; // [rsp+168h] [rbp-88h]
  _QWORD v66[3]; // [rsp+170h] [rbp-80h] BYREF
  _QWORD v67[3]; // [rsp+188h] [rbp-68h] BYREF
  _QWORD v68[3]; // [rsp+1A0h] [rbp-50h] BYREF
  unsigned __int64 v69; // [rsp+1B8h] [rbp-38h] BYREF

  v43 = a1;
  v69 = __readfsqword(0x28u);
  LOBYTE(v53[0]) = 0;
  v51 = v53;
  v1 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v42 = &v51;
  v52 = 0;
  if ( v1 != 3 )
    JUMPOUT(0x90C3A);
  std::string::_M_assign();
  v45 = 0;
  v47 = nullptr;
  v48 = 0;
  if ( !(unsigned __int8)parse_decl() )
    JUMPOUT(0x90D4F);
  v50 = 0;
  v49 = nullptr;
  print_tinfo();
  v54 = 0;
  *(_QWORD *)&v55 = 0;
  v41 = &v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v54 = 3;
  v2 = operator new(0x20u);
  v56 = 0;
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "declaration");
  *(_QWORD *)(v2 + 8) = 11;
  v40 = &v57;
  v57.m128i_i64[0] = 0;
  v55 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = 3;
  v3 = v52;
  src = v51;
  v4 = (_QWORD *)operator new(0x20u);
  v5 = v4 + 2;
  v46.m128i_i64[0] = v3;
  v6 = v4;
  *v4 = v4 + 2;
  if ( v3 <= 0xF )
  {
    v7 = (__m128i)(unsigned __int64)v4;
    v8 = v3 + 1;
    if ( v3 )
    {
LABEL_5:
      v37 = v7;
      memcpy(v5, src, v8);
      v9 = v46.m128i_i64[0];
      v7 = _mm_load_si128(&v37);
      goto LABEL_6;
    }
    goto LABEL_19;
  }
  v29 = std::string::_M_create();
  *v6 = v29;
  v5 = (_BYTE *)v29;
  v30 = v46.m128i_i64[0];
  v7 = (__m128i)(unsigned __int64)v6;
  v6[2] = v46.m128i_i64[0];
  v8 = v30 + 1;
  if ( !v30 )
  {
LABEL_19:
    *v5 = *(_BYTE *)src;
    v9 = v46.m128i_i64[0];
    goto LABEL_6;
  }
  v9 = -1;
  if ( v8 )
    goto LABEL_5;
LABEL_6:
  v6[1] = v9;
  v57 = v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (const __m128i *)&v54);
  v66[2] = 0;
  v58 = 0;
  *(_QWORD *)&v59 = 0;
  src = &v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = 3;
  v10 = operator new(0x20u);
  strcpy((char *)(v10 + 16), "parsed_type");
  *(_QWORD *)v10 = v10 + 16;
  *(_QWORD *)(v10 + 8) = 11;
  v59 = (unsigned __int64)v10;
  if ( (_QWORD)v50 )
    v11 = v49;
  else
    v11 = _qstring<char>::c_str(void)const::nullstr;
  v60 = 0;
  v37.m128i_i64[0] = (__int64)&v61;
  *(_QWORD *)&v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v60 = 3;
  v12 = v11;
  v38 = (__int64 *)operator new(0x20u);
  v13 = v38;
  std::string::basic_string<std::allocator<char>>(v38, v12, v14, v15, v16, v17, v31, v33, (__int64)&v54);
  v34 = &v58;
  v61 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v58);
  v67[2] = 0;
  v62 = 0;
  *(_QWORD *)&v63 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v62 = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "name");
  *(_QWORD *)(v18 + 8) = 4;
  v63 = (unsigned __int64)v18;
  if ( (unsigned __int64)v48 <= 1 )
  {
    v38 = nullptr;
    v1 = 0;
  }
  else
  {
    v46 = 0u;
    v36 = v47;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v38 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v38,
      v36,
      v19,
      v20,
      v21,
      v22,
      (int)&v46.m128i_i32[2],
      (int)&v58,
      v35);
  }
  v46.m128i_i8[0] = v1;
  v65 = 0;
  v46.m128i_i64[1] = (__int64)v38;
  v23 = _mm_load_si128(&v46);
  v38 = (__int64 *)&v62;
  v64 = v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v68,
    (const __m128i *)&v62);
  v68[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v43,
    (__int64)v66,
    3,
    v24,
    v25,
    v26,
    v32,
    (__int64)v34,
    v35,
    (int)v36,
    v37.m128i_i32[0],
    v37.m128i_i32[2],
    (__int64)v38,
    (int)src,
    (int)v40,
    (int)v41,
    (int)v42,
    (char)v43,
    v44,
    v45,
    v46.m128i_i64[0]);
  v27 = &v69;
  do
  {
    v27 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v27 != v66 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v51 != v53 )
    operator delete(v51, v53[0] + 1LL);
  return v43;
}

