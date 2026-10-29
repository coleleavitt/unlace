__int64 __fastcall ida_mcp::tools::navigation::get_prev_not_tail(
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
        char a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        char a26,
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
        char a46,
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
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int8 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  char v64; // bl
  __int64 *v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rbp
  __int64 v85; // rax
  __int64 *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rbp
  int v105; // [rsp+0h] [rbp-1D8h]
  int v106; // [rsp+0h] [rbp-1D8h]
  int v107; // [rsp+0h] [rbp-1D8h]
  _QWORD *v108; // [rsp+0h] [rbp-1D8h]
  __int64 v109; // [rsp+0h] [rbp-1D8h]
  int v110; // [rsp+0h] [rbp-1D8h]
  _QWORD *v111; // [rsp+0h] [rbp-1D8h]
  __m128i v112; // [rsp+8h] [rbp-1D0h] BYREF
  char *v113; // [rsp+18h] [rbp-1C0h]
  void **v114; // [rsp+20h] [rbp-1B8h]
  const char *v115; // [rsp+28h] [rbp-1B0h]
  char *v116; // [rsp+30h] [rbp-1A8h]
  __int64 *v117; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v118; // [rsp+40h] [rbp-198h]
  __int64 v119; // [rsp+48h] [rbp-190h]
  __m128i v120; // [rsp+50h] [rbp-188h] BYREF
  const char *v121; // [rsp+60h] [rbp-178h]
  __int128 v122; // [rsp+68h] [rbp-170h]
  void *v123; // [rsp+80h] [rbp-158h] BYREF
  __int64 v124; // [rsp+90h] [rbp-148h] BYREF
  void *v125; // [rsp+A0h] [rbp-138h]
  _QWORD v126[2]; // [rsp+B0h] [rbp-128h] BYREF
  char v127; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v128; // [rsp+C8h] [rbp-110h]
  __int64 v129; // [rsp+E8h] [rbp-F0h]
  char v130; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v131; // [rsp+F8h] [rbp-E0h]
  __int64 v132; // [rsp+108h] [rbp-D0h]
  __int128 v133; // [rsp+110h] [rbp-C8h]
  void *v134; // [rsp+120h] [rbp-B8h] BYREF
  char v135[16]; // [rsp+128h] [rbp-B0h] BYREF
  _BYTE v136[24]; // [rsp+138h] [rbp-A0h]
  _QWORD v137[2]; // [rsp+150h] [rbp-88h] BYREF
  __int64 v138; // [rsp+160h] [rbp-78h]
  _QWORD v139[2]; // [rsp+168h] [rbp-70h] BYREF
  __int64 v140; // [rsp+178h] [rbp-60h]
  _QWORD v141[2]; // [rsp+180h] [rbp-58h] BYREF
  __int64 v142; // [rsp+190h] [rbp-48h]
  __int64 v143[8]; // [rsp+198h] [rbp-40h] BYREF

  v143[0] = __readfsqword(0x28u);
  v135[8] = 0;
  v61 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                    a2,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a1,
                    v112.m128i_i32[0],
                    v112.m128i_i32[2],
                    (__int64)v113,
                    (__int64)v114,
                    (char)v115,
                    (int)v116,
                    (int)v117,
                    v118);
  v134 = &v135[8];
  *(_QWORD *)v135 = 0;
  if ( v61 != 3 )
    ida_mcp::tools::navigation::get_prev_not_tail(
      a2,
      a2,
      v57,
      v58,
      v59,
      v60,
      a7,
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
  v62 = ida_mcp::parse_ea(v134, *(unsigned __int64 *)v135);
  v119 = v63;
  v64 = v63;
  v118 = v62;
  if ( v134 != &v135[8] )
    operator delete(v134, *(_QWORD *)&v135[8] + 1LL);
  if ( !v64 )
    JUMPOUT(0x77C95);
  v112.m128i_i64[0] = prev_not_tail();
  if ( v112.m128i_i64[0] < v118 )
  {
    v121 = nullptr;
    v122 = 0;
    print_insn_mnem();
    *(_QWORD *)&v128 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v85 = operator new(0x20u);
    strcpy((char *)(v85 + 16), "current_address");
    *(_QWORD *)v85 = v85 + 16;
    *(_QWORD *)(v85 + 8) = 15;
    v114 = &v123;
    v128 = (unsigned __int64)v85;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v129 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v137,
      (const __m128i *)&v127);
    v138 = 0;
    v130 = 0;
    *(_QWORD *)&v131 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v130 = 3;
    v86 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v86,
      "previous_address",
      v87,
      v88,
      v89,
      v90,
      v105,
      v112.m128i_i32[0],
      (__int64)&v127);
    v131 = (unsigned __int64)v86;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v133 + 1) = 0;
    v116 = &v130;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v139,
      (const __m128i *)&v130);
    v140 = 0;
    LOBYTE(v134) = 0;
    *(_QWORD *)v135 = 0;
    v113 = v135;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v134) = 3;
    v91 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v91,
      "mnemonic",
      v92,
      v93,
      v94,
      v95,
      v110,
      (int)v91,
      v112.m128i_i64[1]);
    *(__m128i *)v135 = _mm_loadl_epi64(&v112);
    if ( (unsigned __int64)v122 <= 1 )
    {
      v112.m128i_i64[0] = 0;
      v61 = 0;
    }
    else
    {
      v120 = 0u;
      v115 = v121;
      v117 = &v120.m128i_i64[1];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v96 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v96,
        v115,
        v97,
        v98,
        v99,
        v100,
        (int)v111,
        (int)v96,
        v112.m128i_i64[1]);
    }
    v120.m128i_i8[0] = v61;
    *(_QWORD *)&v136[16] = 0;
    v120.m128i_i64[1] = v112.m128i_i64[0];
    *(__m128i *)v136 = _mm_load_si128(&v120);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v141,
      (const __m128i *)&v134);
    v142 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v111,
      (__int64)v137,
      3,
      v101,
      v102,
      v103,
      (int)v111,
      v112.m128i_i64[0],
      v112.m128i_i32[2],
      (int)v113,
      (int)v114,
      (int)v115,
      (__int64)v116,
      (int)v117,
      v118,
      v119,
      v120.m128i_i32[0],
      v120.m128i_i8[8],
      (__int64)v121,
      v122,
      *((__int64 *)&v122 + 1));
    v104 = v143;
    do
    {
      v104 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v104 != v137 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v125 != v126 )
      operator delete(v125, v126[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v123 != &v124 )
      operator delete(v123, v124 + 1);
    if ( v121 )
    {
      *(_QWORD *)&v122 = 0;
      qfree();
    }
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v65 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v65,
      "current_address",
      v66,
      v67,
      v68,
      v69,
      v105,
      v112.m128i_i32[0],
      v112.m128i_i64[1]);
    v128 = (unsigned __int64)v65;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v129 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v137,
      (const __m128i *)&v127);
    v138 = 0;
    v130 = 0;
    *(_QWORD *)&v131 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v130 = 3;
    v70 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v70,
      "previous_address",
      v71,
      v72,
      v73,
      v74,
      v106,
      v112.m128i_i32[0],
      (__int64)&v127);
    v132 = 0;
    v131 = (unsigned __int64)v70;
    v133 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v139,
      (const __m128i *)&v130);
    v140 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    *(_QWORD *)&v135[8] = 0;
    v136[0] = 0;
    *(_QWORD *)&v136[8] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v136[0] = 3;
    v75 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v75,
      "No previous non-tail item found",
      v76,
      v77,
      v78,
      v79,
      v107,
      (int)v75,
      v112.m128i_i64[1]);
    *(__m128i *)&v136[8] = _mm_loadl_epi64(&v112);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v141,
      (const __m128i *)&v134);
    v142 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v108,
      (__int64)v137,
      3,
      v80,
      v81,
      v82,
      (int)v108,
      v112.m128i_i64[0],
      v112.m128i_i32[2],
      (int)v113,
      (int)v114,
      (int)v115,
      (__int64)v116,
      (int)v117,
      v118,
      v119,
      v120.m128i_i32[0],
      v120.m128i_i8[8],
      (__int64)v121,
      v122,
      *((__int64 *)&v122 + 1));
    v83 = v143;
    do
    {
      v83 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v83 != v137 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v125 != v126 )
      operator delete(v125, v126[0] + 1LL);
  }
  return v109;
}

