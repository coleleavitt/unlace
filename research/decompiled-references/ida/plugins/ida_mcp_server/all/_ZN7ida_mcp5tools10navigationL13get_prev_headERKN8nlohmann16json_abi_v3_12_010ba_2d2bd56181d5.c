__int64 __fastcall ida_mcp::tools::navigation::get_prev_head(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int8 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rbp
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rbp
  int v46; // [rsp+0h] [rbp-1D8h]
  int v47; // [rsp+0h] [rbp-1D8h]
  _QWORD *v48; // [rsp+0h] [rbp-1D8h]
  __int64 v49; // [rsp+0h] [rbp-1D8h]
  int v50; // [rsp+0h] [rbp-1D8h]
  _QWORD *v51; // [rsp+0h] [rbp-1D8h]
  __m128i v52; // [rsp+8h] [rbp-1D0h] BYREF
  __m128i *v53; // [rsp+18h] [rbp-1C0h]
  void **v54; // [rsp+20h] [rbp-1B8h]
  const char *v55; // [rsp+28h] [rbp-1B0h]
  char *v56; // [rsp+30h] [rbp-1A8h]
  __int64 *v57; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v58; // [rsp+40h] [rbp-198h]
  __int64 v59; // [rsp+48h] [rbp-190h]
  __m128i v60; // [rsp+50h] [rbp-188h] BYREF
  const char *v61; // [rsp+60h] [rbp-178h]
  __int128 v62; // [rsp+68h] [rbp-170h]
  void *v63; // [rsp+80h] [rbp-158h] BYREF
  __int64 v64; // [rsp+90h] [rbp-148h] BYREF
  void *v65; // [rsp+A0h] [rbp-138h]
  _QWORD v66[2]; // [rsp+B0h] [rbp-128h] BYREF
  char v67; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-110h]
  __int64 v69; // [rsp+E8h] [rbp-F0h]
  char v70; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+F8h] [rbp-E0h]
  __int64 v72; // [rsp+108h] [rbp-D0h]
  __int128 v73; // [rsp+110h] [rbp-C8h]
  void *v74; // [rsp+120h] [rbp-B8h] BYREF
  __m128i v75; // [rsp+128h] [rbp-B0h] BYREF
  _BYTE v76[24]; // [rsp+138h] [rbp-A0h]
  _QWORD v77[2]; // [rsp+150h] [rbp-88h] BYREF
  __int64 v78; // [rsp+160h] [rbp-78h]
  _QWORD v79[2]; // [rsp+168h] [rbp-70h] BYREF
  __int64 v80; // [rsp+178h] [rbp-60h]
  _QWORD v81[2]; // [rsp+180h] [rbp-58h] BYREF
  __int64 v82; // [rsp+190h] [rbp-48h]
  _QWORD v83[8]; // [rsp+198h] [rbp-40h] BYREF

  v83[0] = __readfsqword(0x28u);
  v75.m128i_i8[8] = 0;
  v6 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a1,
                   v52.m128i_i32[0],
                   v52.m128i_i32[2],
                   (__int64)v53,
                   (__int64)v54,
                   (char)v55,
                   (int)v56,
                   (int)v57,
                   v58);
  v74 = &v75.m128i_u64[1];
  v75.m128i_i64[0] = 0;
  if ( v6 != 3 )
    JUMPOUT(0x7645C);
  std::string::_M_assign();
  v7 = ida_mcp::parse_ea(v74, v75.m128i_u64[0]);
  v59 = v8;
  v9 = v8;
  v58 = v7;
  if ( v74 != &v75.m128i_u64[1] )
    operator delete(v74, v75.m128i_i64[1] + 1);
  if ( !v9 )
    JUMPOUT(0x760A6);
  getinf();
  v52.m128i_i64[0] = prev_head();
  if ( v52.m128i_i64[0] < v58 )
  {
    v61 = nullptr;
    v62 = 0;
    print_insn_mnem();
    *(_QWORD *)&v68 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v67 = 3;
    v26 = operator new(0x20u);
    strcpy((char *)(v26 + 16), "current_address");
    *(_QWORD *)v26 = v26 + 16;
    *(_QWORD *)(v26 + 8) = 15;
    v54 = &v63;
    v68 = (unsigned __int64)v26;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v69 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v77,
      (const __m128i *)&v67);
    v78 = 0;
    v70 = 0;
    *(_QWORD *)&v71 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v70 = 3;
    v27 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v27,
      "previous_address",
      v28,
      v29,
      v30,
      v31,
      v46,
      v52.m128i_i32[0],
      (__int64)&v67);
    v71 = (unsigned __int64)v27;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v73 + 1) = 0;
    v56 = &v70;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v79,
      (const __m128i *)&v70);
    v80 = 0;
    LOBYTE(v74) = 0;
    v75.m128i_i64[0] = 0;
    v53 = &v75;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v74) = 3;
    v32 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v32,
      "mnemonic",
      v33,
      v34,
      v35,
      v36,
      v50,
      (int)v32,
      v52.m128i_i64[1]);
    v75 = _mm_loadl_epi64(&v52);
    if ( (unsigned __int64)v62 <= 1 )
    {
      v52.m128i_i64[0] = 0;
      v6 = 0;
    }
    else
    {
      v60 = 0u;
      v55 = v61;
      v57 = &v60.m128i_i64[1];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v37 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v37,
        v55,
        v38,
        v39,
        v40,
        v41,
        (int)v51,
        (int)v37,
        v52.m128i_i64[1]);
    }
    v60.m128i_i8[0] = v6;
    *(_QWORD *)&v76[16] = 0;
    v60.m128i_i64[1] = v52.m128i_i64[0];
    *(__m128i *)v76 = _mm_load_si128(&v60);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v81,
      (const __m128i *)&v74);
    v82 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v51,
      (__int64)v77,
      3,
      v42,
      v43,
      v44,
      (int)v51,
      v52.m128i_i64[0],
      v52.m128i_i32[2],
      (int)v53,
      (int)v54,
      (int)v55,
      (__int64)v56,
      (int)v57,
      v58,
      v59,
      v60.m128i_i32[0],
      v60.m128i_i8[8],
      (__int64)v61,
      v62,
      *((__int64 *)&v62 + 1));
    v45 = v83;
    do
    {
      v45 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v45 != v77 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v65 != v66 )
      operator delete(v65, v66[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v63 != &v64 )
      operator delete(v63, v64 + 1);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v67 = 3;
    v10 = operator new(0x20u);
    strcpy((char *)(v10 + 16), "current_address");
    *(_QWORD *)v10 = v10 + 16;
    *(_QWORD *)(v10 + 8) = 15;
    v68 = (unsigned __int64)v10;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v69 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v77,
      (const __m128i *)&v67);
    v78 = 0;
    v70 = 0;
    *(_QWORD *)&v71 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v70 = 3;
    v11 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v11,
      "previous_address",
      v12,
      v13,
      v14,
      v15,
      v46,
      v52.m128i_i32[0],
      (__int64)&v67);
    v72 = 0;
    v71 = (unsigned __int64)v11;
    v73 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v79,
      (const __m128i *)&v70);
    v80 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    v75.m128i_i64[1] = 0;
    v76[0] = 0;
    *(_QWORD *)&v76[8] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v76[0] = 3;
    v16 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v16,
      "No previous item found",
      v17,
      v18,
      v19,
      v20,
      v47,
      (int)v16,
      v52.m128i_i64[1]);
    *(__m128i *)&v76[8] = _mm_loadl_epi64(&v52);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v81,
      (const __m128i *)&v74);
    v82 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v48,
      (__int64)v77,
      3,
      v21,
      v22,
      v23,
      (int)v48,
      v52.m128i_i64[0],
      v52.m128i_i32[2],
      (int)v53,
      (int)v54,
      (int)v55,
      (__int64)v56,
      (int)v57,
      v58,
      v59,
      v60.m128i_i32[0],
      v60.m128i_i8[8],
      (__int64)v61,
      v62,
      *((__int64 *)&v62 + 1));
    v24 = v83;
    do
    {
      v24 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v24 != v77 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v65 != v66 )
      operator delete(v65, v66[0] + 1LL);
  }
  return v49;
}

