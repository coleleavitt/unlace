_QWORD *__fastcall ida_mcp::tools::types::handle_deduplicate_members(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
        unsigned __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        char a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        __int64 a67)
{
  void *v67; // r13
  void *v68; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v70; // rax
  _BYTE *v71; // rbx
  __int64 idati; // rax
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r15
  __int64 *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  _BYTE *v84; // rbp
  unsigned __int64 v85; // r13
  _QWORD *v86; // rax
  _BYTE *v87; // rdi
  __int64 *v88; // rbx
  __m128i v89; // xmm0
  size_t v90; // rdx
  __int64 v91; // rax
  __int64 *v92; // rbp
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rbp
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __m128i v107; // xmm0
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  char *v111; // r12
  __int64 v112; // rdi
  __int64 v113; // rbp
  __int64 v114; // r12
  _QWORD *v115; // rbx
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  __m128i v119; // [rsp+0h] [rbp-228h] BYREF
  __int64 v120; // [rsp+10h] [rbp-218h]
  _QWORD *v121; // [rsp+18h] [rbp-210h]
  void **p_src; // [rsp+20h] [rbp-208h]
  __int128 *v123; // [rsp+28h] [rbp-200h]
  __m128i *v124; // [rsp+30h] [rbp-1F8h]
  int v125; // [rsp+38h] [rbp-1F0h]
  int v126; // [rsp+3Ch] [rbp-1ECh]
  __int64 *v127; // [rsp+40h] [rbp-1E8h]
  char *v128; // [rsp+48h] [rbp-1E0h]
  __int64 v129; // [rsp+50h] [rbp-1D8h] BYREF
  unsigned __int64 v130; // [rsp+58h] [rbp-1D0h]
  __int64 v131; // [rsp+60h] [rbp-1C8h]
  __int128 v132; // [rsp+68h] [rbp-1C0h]
  __int128 v133; // [rsp+78h] [rbp-1B0h]
  __int64 v134; // [rsp+88h] [rbp-1A0h]
  int v135; // [rsp+90h] [rbp-198h]
  void *src; // [rsp+A0h] [rbp-188h] BYREF
  unsigned __int64 v137; // [rsp+A8h] [rbp-180h]
  _QWORD v138[2]; // [rsp+B0h] [rbp-178h] BYREF
  char v139; // [rsp+C0h] [rbp-168h] BYREF
  __int128 v140; // [rsp+C8h] [rbp-160h] BYREF
  char v141; // [rsp+D8h] [rbp-150h]
  __m128i v142; // [rsp+E0h] [rbp-148h] BYREF
  char v143; // [rsp+F0h] [rbp-138h] BYREF
  __int128 v144; // [rsp+F8h] [rbp-130h]
  char v145; // [rsp+108h] [rbp-120h]
  __int64 v146; // [rsp+110h] [rbp-118h]
  __int64 v147; // [rsp+118h] [rbp-110h]
  char v148; // [rsp+120h] [rbp-108h] BYREF
  __int128 v149; // [rsp+128h] [rbp-100h]
  char v150; // [rsp+138h] [rbp-F0h]
  __int64 v151; // [rsp+140h] [rbp-E8h]
  __int64 v152; // [rsp+148h] [rbp-E0h]
  char v153; // [rsp+150h] [rbp-D8h] BYREF
  __m128i v154; // [rsp+158h] [rbp-D0h]
  char v155; // [rsp+168h] [rbp-C0h]
  __int64 v156; // [rsp+170h] [rbp-B8h]
  __int64 v157; // [rsp+178h] [rbp-B0h]
  _QWORD v158[3]; // [rsp+180h] [rbp-A8h] BYREF
  _QWORD v159[3]; // [rsp+198h] [rbp-90h] BYREF
  _QWORD v160[3]; // [rsp+1B0h] [rbp-78h] BYREF
  _QWORD v161[3]; // [rsp+1C8h] [rbp-60h] BYREF
  char v162; // [rsp+1E0h] [rbp-48h] BYREF
  unsigned __int64 v163; // [rsp+1E8h] [rbp-40h]

  v121 = a1;
  v163 = __readfsqword(0x28u);
  src = v138;
  v71 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v137 = 0;
  p_src = &src;
  LOBYTE(v138[0]) = 0;
  if ( *v71 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v71 )
    {
      case 0:
        v70 = "null";
        break;
      case 1:
        v70 = "object";
        break;
      case 2:
        v70 = (char *)"array";
        break;
      case 3:
        v70 = "string";
        break;
      case 4:
        v70 = "boolean";
        break;
      case 8:
        v70 = "binary";
        break;
      case 9:
        v70 = "discarded";
        break;
      default:
        v70 = "number";
        break;
    }
    v131 = (__int64)v70;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  idati = get_idati();
  v129 = 0;
  if ( !src )
    goto LABEL_32;
  *(_QWORD *)&v132 = src;
  WORD4(v132) = 256;
  if ( !idati )
  {
    v127 = &v129;
    idati = get_idati();
  }
  v131 = idati;
  v127 = &v129;
  if ( !(unsigned __int8)create_tinfo() )
  {
LABEL_32:
    v68 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)v158, "Type not found: ", (__int64)src, v137);
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    v127 = &v129;
    __cxa_throw(
      v68,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (get_tinfo_property() & 0x3F) != 0xD )
  {
    v73 = v129;
    if ( (get_tinfo_property() & 0x3F) != 0x1D )
      ida_mcp::tools::types::handle_deduplicate_members(
        v73,
        2,
        v74,
        v75,
        v76,
        v77,
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
        a59,
        a60,
        a61,
        a62,
        a63,
        a64,
        a65,
        a66,
        a67);
  }
  v131 = 0;
  v134 = 0;
  v135 = 1;
  v132 = 0;
  v133 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    v67 = __cxa_allocate_exception(0x10u);
    std::operator+<char>((__int64)v158, "Failed to get UDT details for: ", (__int64)src, v137);
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    __cxa_throw(
      v67,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v78 = v132;
  v126 = udt_type_data_t__deduplicate_members();
  v139 = 0;
  *(_QWORD *)&v140 = 0;
  v123 = &v140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v139 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v79,
    "name",
    v80,
    v81,
    v82,
    v83,
    v119.m128i_i32[0],
    v119.m128i_i32[2],
    v120);
  v141 = 0;
  v124 = &v142;
  v142.m128i_i64[0] = 0;
  v140 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v141 = 3;
  v84 = src;
  v85 = v137;
  v86 = (_QWORD *)operator new(0x20u);
  v87 = v86 + 2;
  v130 = v85;
  v88 = v86;
  *v86 = v86 + 2;
  if ( v85 > 0xF )
  {
    v117 = std::string::_M_create();
    *v88 = v117;
    v87 = (_BYTE *)v117;
    v118 = v130;
    v89 = (__m128i)(unsigned __int64)v88;
    v88[2] = v130;
    v90 = v118 + 1;
    if ( v118 )
    {
      v91 = -1;
      if ( !v90 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_25:
    *v87 = *v84;
    v91 = v130;
    goto LABEL_12;
  }
  v89 = (__m128i)(unsigned __int64)v86;
  v90 = v85 + 1;
  if ( !v85 )
    goto LABEL_25;
LABEL_11:
  v119 = v89;
  memcpy(v87, v84, v90);
  v91 = v130;
  v89 = _mm_load_si128(&v119);
LABEL_12:
  v88[1] = v91;
  v128 = &v139;
  v142 = v89;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v158,
    (const __m128i *)&v139);
  v158[2] = 0;
  v143 = 0;
  *(_QWORD *)&v144 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v92,
    "members_before",
    v93,
    v94,
    v95,
    v96,
    v119.m128i_i32[0],
    v119.m128i_i32[2],
    v120);
  v145 = 6;
  v146 = v78;
  v147 = 0;
  v144 = (unsigned __int64)v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v159,
    (const __m128i *)&v143);
  v159[2] = 0;
  v148 = 0;
  *(_QWORD *)&v149 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v148 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v97,
    "members_after",
    v98,
    v99,
    v100,
    v101,
    v119.m128i_i32[0],
    v119.m128i_i32[2],
    v120);
  v150 = 6;
  v151 = v132;
  v152 = 0;
  v149 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v160,
    (const __m128i *)&v148);
  v160[2] = 0;
  v153 = 0;
  v154.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v153 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v102,
    "removed",
    v103,
    v104,
    v105,
    v106,
    (int)v102,
    v119.m128i_i32[2],
    v120);
  v107 = _mm_loadl_epi64(&v119);
  v155 = 5;
  v156 = v126;
  v157 = 0;
  v154 = v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v161,
    (const __m128i *)&v153);
  v161[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v121,
    (__int64)v158,
    4,
    v108,
    v109,
    v110,
    v119.m128i_i32[0],
    v119.m128i_i64[1],
    v120,
    (int)v121,
    (int)p_src,
    (int)v123,
    (__int64)v124,
    v125,
    (int)v127,
    (int)v128,
    v129,
    v130,
    v131,
    v132,
    *((__int64 *)&v132 + 1));
  v111 = &v162;
  do
  {
    v111 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v111 != (char *)v158 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = v131;
  if ( v131 )
  {
    v113 = v132;
    if ( (_QWORD)v132 )
    {
      v114 = 0;
      do
      {
        while ( 1 )
        {
          v115 = (_QWORD *)(v112 + 144 * v114);
          clear_tinfo_t();
          if ( v115[5] )
          {
            v115[6] = 0;
            qfree();
          }
          if ( !v115[2] )
            break;
          v115[3] = 0;
          ++v114;
          qfree();
          v112 = v131;
          if ( v114 == v113 )
            goto LABEL_21;
        }
        ++v114;
        v112 = v131;
      }
      while ( v113 != v114 );
    }
LABEL_21:
    *(_QWORD *)&v132 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src != v138 )
    operator delete(src, v138[0] + 1LL);
  return v121;
}

