__int64 __fastcall ida_mcp::tools::navigation::get_next_not_tail(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        char a33,
        char a34,
        int a35,
        char a36,
        int a37,
        int a38,
        char a39,
        char a40,
        int a41,
        char a42,
        char a43,
        int a44,
        char a45,
        int a46,
        int a47,
        __int64 a48,
        __int64 a49,
        char a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        __int64 a57)
{
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int8 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  char v64; // bl
  unsigned __int64 not_tail; // rax
  __int64 v66; // rax
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __m128i v72; // xmm0
  __int64 *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // rbp
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __m128i v83; // xmm0
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // rbp
  __int64 v89; // rax
  __int64 *v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // r12
  int v104; // [rsp+0h] [rbp-1D8h]
  int v105; // [rsp+0h] [rbp-1D8h]
  _QWORD *v106; // [rsp+0h] [rbp-1D8h]
  __int64 v107; // [rsp+0h] [rbp-1D8h]
  int v108; // [rsp+0h] [rbp-1D8h]
  _QWORD *v109; // [rsp+0h] [rbp-1D8h]
  __m128i v110; // [rsp+8h] [rbp-1D0h] BYREF
  __int128 *v111; // [rsp+18h] [rbp-1C0h]
  void **v112; // [rsp+20h] [rbp-1B8h]
  const char *v113; // [rsp+28h] [rbp-1B0h]
  char *v114; // [rsp+30h] [rbp-1A8h]
  __int64 *v115; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v116; // [rsp+40h] [rbp-198h]
  __int64 v117; // [rsp+48h] [rbp-190h]
  __m128i v118; // [rsp+50h] [rbp-188h] BYREF
  const char *v119; // [rsp+60h] [rbp-178h]
  __int128 v120; // [rsp+68h] [rbp-170h]
  void *v121; // [rsp+80h] [rbp-158h] BYREF
  __int64 v122; // [rsp+90h] [rbp-148h] BYREF
  void *v123[2]; // [rsp+A0h] [rbp-138h] BYREF
  _QWORD v124[2]; // [rsp+B0h] [rbp-128h] BYREF
  char v125; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v126; // [rsp+C8h] [rbp-110h]
  __int64 v127; // [rsp+E8h] [rbp-F0h]
  char v128; // [rsp+F0h] [rbp-E8h] BYREF
  __m128i v129; // [rsp+F8h] [rbp-E0h]
  __int64 v130; // [rsp+108h] [rbp-D0h]
  __int128 v131; // [rsp+110h] [rbp-C8h]
  void *v132; // [rsp+120h] [rbp-B8h] BYREF
  __int128 v133; // [rsp+128h] [rbp-B0h] BYREF
  _BYTE v134[24]; // [rsp+138h] [rbp-A0h]
  _QWORD v135[2]; // [rsp+150h] [rbp-88h] BYREF
  __int64 v136; // [rsp+160h] [rbp-78h]
  _QWORD v137[2]; // [rsp+168h] [rbp-70h] BYREF
  __int64 v138; // [rsp+178h] [rbp-60h]
  _QWORD v139[2]; // [rsp+180h] [rbp-58h] BYREF
  __int64 v140; // [rsp+190h] [rbp-48h]
  _QWORD v141[8]; // [rsp+198h] [rbp-40h] BYREF

  v141[0] = __readfsqword(0x28u);
  BYTE8(v133) = 0;
  v61 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                    a2,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a1,
                    v110.m128i_i32[0],
                    v110.m128i_i32[2],
                    (__int64)v111,
                    (__int64)v112,
                    (char)v113,
                    (int)v114,
                    (int)v115,
                    v116);
  v132 = (char *)&v133 + 8;
  *(_QWORD *)&v133 = 0;
  if ( v61 != 3 )
    ida_mcp::tools::navigation::get_next_not_tail(
      a2,
      a2,
      v57,
      v58,
      v59,
      v60,
      (__int64)a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      a31,
      a32,
      a33,
      a34,
      a35,
      a36,
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47,
      a48,
      a49,
      a50,
      a51,
      a52,
      a53,
      a54,
      a55,
      a56,
      a57);
  std::string::_M_assign();
  v62 = ida_mcp::parse_ea(v132, v133);
  v117 = v63;
  v64 = v63;
  v116 = v62;
  if ( v132 != (char *)&v133 + 8 )
    operator delete(v132, *((_QWORD *)&v133 + 1) + 1LL);
  if ( !v64 )
    JUMPOUT(0x77EE7);
  not_tail = next_not_tail();
  if ( not_tail == -1 || v116 >= not_tail )
  {
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v89 = operator new(0x20u);
    *(_QWORD *)v89 = v89 + 16;
    strcpy((char *)(v89 + 16), "current_address");
    *(_QWORD *)(v89 + 8) = 15;
    v126 = (unsigned __int64)v89;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v135,
      (const __m128i *)&v125);
    v136 = 0;
    v128 = 0;
    v129.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v128 = 3;
    v90 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v90,
      "next_address",
      v91,
      v92,
      v93,
      v94,
      v104,
      (int)v123,
      (__int64)&v125);
    v130 = 0;
    v129 = (__m128i)(unsigned __int64)v90;
    v131 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v137,
      (const __m128i *)&v128);
    v138 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    *((_QWORD *)&v133 + 1) = 0;
    v134[0] = 0;
    *(_QWORD *)&v134[8] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v134[0] = 3;
    v95 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v95,
      "No next non-tail item found",
      v96,
      v97,
      v98,
      v99,
      v108,
      v110.m128i_i32[0],
      v110.m128i_i64[1]);
    *(_OWORD *)&v134[8] = (unsigned __int64)v95;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v139,
      (const __m128i *)&v132);
    v140 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v109,
      (__int64)v135,
      3,
      v100,
      v101,
      v102,
      (int)v109,
      v110.m128i_i64[0],
      v110.m128i_i32[2],
      (int)v111,
      (int)v112,
      (int)v113,
      (__int64)v114,
      (int)v115,
      v116,
      v117,
      v118.m128i_i32[0],
      v118.m128i_i8[8],
      (__int64)v119,
      v120,
      *((__int64 *)&v120 + 1));
    v103 = v141;
    do
    {
      v103 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v103 != v135 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v123[0] != v124 )
      operator delete(v123[0], v124[0] + 1LL);
  }
  else
  {
    v119 = nullptr;
    v120 = 0;
    print_insn_mnem();
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v66 = operator new(0x20u);
    *(_QWORD *)v66 = v66 + 16;
    strcpy((char *)(v66 + 16), "current_address");
    *(_QWORD *)(v66 + 8) = 15;
    v112 = &v121;
    v126 = (unsigned __int64)v66;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v127 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v135,
      (const __m128i *)&v125);
    v136 = 0;
    v128 = 0;
    v129.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v128 = 3;
    v67 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v67,
      "next_address",
      v68,
      v69,
      v70,
      v71,
      v104,
      (int)v67,
      (__int64)&v125);
    v72 = _mm_loadl_epi64(&v110);
    v110.m128i_i64[0] = (__int64)v123;
    v129 = v72;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v131 + 1) = 0;
    v114 = &v128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v137,
      (const __m128i *)&v128);
    v138 = 0;
    LOBYTE(v132) = 0;
    *(_QWORD *)&v133 = 0;
    v111 = &v133;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v132) = 3;
    v73 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v73,
      "mnemonic",
      v74,
      v75,
      v76,
      v77,
      v105,
      v110.m128i_i32[0],
      v110.m128i_i64[1]);
    v133 = (unsigned __int64)v73;
    if ( (unsigned __int64)v120 <= 1 )
    {
      v78 = nullptr;
      v61 = 0;
    }
    else
    {
      v118 = 0u;
      v113 = v119;
      v115 = &v118.m128i_i64[1];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v78 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v78,
        v113,
        v79,
        v80,
        v81,
        v82,
        (int)v106,
        v110.m128i_i32[0],
        v110.m128i_i64[1]);
    }
    v118.m128i_i8[0] = v61;
    v118.m128i_i64[1] = (__int64)v78;
    v83 = _mm_load_si128(&v118);
    *(_QWORD *)&v134[16] = 0;
    *(__m128i *)v134 = v83;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v139,
      (const __m128i *)&v132);
    v140 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v106,
      (__int64)v135,
      3,
      v84,
      v85,
      v86,
      (int)v106,
      v110.m128i_i64[0],
      v110.m128i_i32[2],
      (int)v111,
      (int)v112,
      (int)v113,
      (__int64)v114,
      (int)v115,
      v116,
      v117,
      v118.m128i_i32[0],
      v118.m128i_i8[8],
      (__int64)v119,
      v120,
      *((__int64 *)&v120 + 1));
    v87 = v141;
    do
    {
      v87 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v87 != v135 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v123[0] != v124 )
      operator delete(v123[0], v124[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v121 != &v122 )
      operator delete(v121, v122 + 1);
    if ( v119 )
    {
      *(_QWORD *)&v120 = 0;
      qfree();
    }
  }
  return v107;
}

