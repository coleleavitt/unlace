__int64 __fastcall ida_mcp::tools::offsets::`anonymous namespace'::handle_get_offset_expression(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
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
        char a26,
        int a27,
        int a28,
        char a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        char a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        __int64 a59)
{
  std::runtime_error *exception; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  char v66; // bl
  __int64 *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // rax
  _QWORD *v77; // rdx
  _QWORD *v78; // rcx
  __int64 v79; // rsi
  __int64 *v80; // r15
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  char *v98; // r12
  unsigned int v100; // edi
  unsigned __int64 v101; // r8
  int v102; // edx
  char *v103; // rcx
  unsigned int v104; // edi
  unsigned int v105; // edi
  unsigned int v106; // edx
  __int64 v107; // r9
  __m128i v108; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v109; // [rsp+10h] [rbp-1D8h]
  __int128 *v110; // [rsp+18h] [rbp-1D0h]
  char *v111; // [rsp+20h] [rbp-1C8h]
  void **v112; // [rsp+28h] [rbp-1C0h]
  __int64 v113; // [rsp+30h] [rbp-1B8h]
  __int64 v114; // [rsp+38h] [rbp-1B0h]
  __int64 v115; // [rsp+40h] [rbp-1A8h]
  __int128 v116; // [rsp+48h] [rbp-1A0h]
  char v117; // [rsp+58h] [rbp-190h]
  __int64 v118; // [rsp+60h] [rbp-188h]
  __int128 v119; // [rsp+68h] [rbp-180h]
  void *v120; // [rsp+80h] [rbp-168h] BYREF
  __int64 v121; // [rsp+88h] [rbp-160h]
  _QWORD v122[2]; // [rsp+90h] [rbp-158h] BYREF
  char v123; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v124; // [rsp+A8h] [rbp-140h] BYREF
  char v125; // [rsp+B8h] [rbp-130h]
  __int128 v126; // [rsp+C0h] [rbp-128h] BYREF
  char v127; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v128; // [rsp+D8h] [rbp-110h]
  char v129; // [rsp+E8h] [rbp-100h]
  __int64 v130; // [rsp+F0h] [rbp-F8h]
  __int64 v131; // [rsp+F8h] [rbp-F0h]
  void *v132; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v133; // [rsp+108h] [rbp-E0h] BYREF
  char v134; // [rsp+118h] [rbp-D0h]
  __m128i v135; // [rsp+120h] [rbp-C8h]
  _QWORD v136[3]; // [rsp+130h] [rbp-B8h] BYREF
  _QWORD v137[3]; // [rsp+148h] [rbp-A0h] BYREF
  _QWORD v138[3]; // [rsp+160h] [rbp-88h] BYREF
  char v139; // [rsp+178h] [rbp-70h] BYREF
  char v140[40]; // [rsp+180h] [rbp-68h] BYREF
  unsigned __int64 v141; // [rsp+1A8h] [rbp-40h]

  v108.m128i_i64[1] = a1;
  v141 = __readfsqword(0x28u);
  v132 = (char *)&v133 + 8;
  *(_QWORD *)&v133 = 0;
  BYTE8(v133) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::offsets::`anonymous namespace'::handle_get_offset_expression(
      a2,
      (__int64)"address",
      v60,
      v61,
      v62,
      v63,
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
      a57,
      a58,
      a59);
  std::string::_M_assign();
  v64 = ida_mcp::parse_ea(v132, v133);
  v114 = v65;
  v66 = v65;
  v113 = v64;
  if ( v132 != (char *)&v133 + 8 )
    operator delete(v132, *((_QWORD *)&v133 + 1) + 1LL);
  if ( !v66 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v116 = 0;
  v119 = 0;
  v115 = 0;
  v118 = 0;
  print_operand();
  tag_remove();
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v67,
    "address",
    v68,
    v69,
    v70,
    v71,
    v108.m128i_i32[0],
    v108.m128i_i32[2],
    (__int64)&v124);
  v124 = (unsigned __int64)v67;
  qsnprintf();
  v112 = &v120;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v120,
    v140,
    v72,
    v73,
    v74,
    v75,
    v108.m128i_i32[0],
    v108.m128i_i32[2],
    v109);
  v125 = 0;
  v110 = &v126;
  *(_QWORD *)&v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v76 = (_QWORD *)operator new(0x20u);
  v77 = v120;
  v78 = v76 + 2;
  v79 = v121;
  *v76 = v76 + 2;
  if ( v77 == v122 )
  {
    v100 = v79 + 1;
    if ( (unsigned int)(v79 + 1) >= 8 )
    {
      v76[2] = v122[0];
      *(_QWORD *)((char *)v78 + v100 - 8) = *(_QWORD *)((char *)&v122[-1] + v100);
      v101 = (unsigned __int64)(v76 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v102 = (_DWORD)v78 - v101;
      v103 = (char *)((char *)v122 - ((char *)v78 - v101));
      v104 = (v102 + v100) & 0xFFFFFFF8;
      if ( v104 >= 8 )
      {
        v105 = v104 & 0xFFFFFFF8;
        v106 = 0;
        do
        {
          v107 = v106;
          v106 += 8;
          *(_QWORD *)(v101 + v107) = *(_QWORD *)&v103[v107];
        }
        while ( v106 < v105 );
      }
    }
    else if ( (v100 & 4) != 0 )
    {
      *((_DWORD *)v76 + 4) = v122[0];
      *(_DWORD *)((char *)v78 + v100 - 4) = *(_DWORD *)((char *)&v121 + v100 + 4);
    }
    else if ( (_DWORD)v79 != -1 )
    {
      *((_BYTE *)v76 + 16) = v122[0];
      if ( (v100 & 2) != 0 )
        *(_WORD *)((char *)v78 + v100 - 2) = *(_WORD *)((char *)&v121 + v100 + 6);
    }
  }
  else
  {
    *v76 = v77;
    v76[2] = v122[0];
  }
  v76[1] = v79;
  v120 = v122;
  v121 = 0;
  LOBYTE(v122[0]) = 0;
  v111 = &v123;
  v126 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v136,
    (const __m128i *)&v123);
  v136[2] = 0;
  v127 = 0;
  *(_QWORD *)&v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v80,
    "operand",
    v81,
    v82,
    v83,
    v84,
    v108.m128i_i32[0],
    v108.m128i_i32[2],
    v109);
  v129 = 5;
  v130 = 0;
  v131 = 0;
  v128 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v137,
    (const __m128i *)&v127);
  v137[2] = 0;
  LOBYTE(v132) = 0;
  *(_QWORD *)&v133 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v132) = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v85,
    "expression",
    v86,
    v87,
    v88,
    v89,
    v108.m128i_i32[0],
    v108.m128i_i32[2],
    v109);
  v133 = (unsigned __int64)v85;
  if ( (_QWORD)v119 )
    v108.m128i_i64[0] = v118;
  else
    v108.m128i_i64[0] = (__int64)_qstring<char>::c_str(void)const::nullstr;
  v134 = 0;
  v135.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v134 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v90,
    (const char *)v108.m128i_i64[0],
    v91,
    v92,
    v93,
    v94,
    (int)v90,
    v108.m128i_i32[2],
    v109);
  v135 = _mm_loadl_epi64(&v108);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v138,
    (const __m128i *)&v132);
  v138[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v108.m128i_i64[1],
    (__int64)v136,
    3,
    v95,
    v96,
    v97,
    v108.m128i_i32[0],
    v108.m128i_i64[1],
    v109,
    (int)v110,
    (int)v111,
    (int)v112,
    v113,
    v114,
    v115,
    v116,
    SDWORD2(v116),
    v117,
    v118,
    v119,
    *((__int64 *)&v119 + 1));
  v98 = &v139;
  do
  {
    v98 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v98 != (char *)v136 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v120 != v122 )
    operator delete(v120, v122[0] + 1LL);
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree();
  }
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree();
  }
  return v108.m128i_i64[1];
}

