__int64 __fastcall ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_del_segment(
        int a1,
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
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        __int64 a24,
        int a25,
        int a26,
        int a27,
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
        char a50,
        int a51,
        int a52,
        int a53,
        int a54,
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
        __int64 a65)
{
  void *v65; // r13
  std::runtime_error *v66; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  char *v68; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v69; // r12
  char *v70; // rax
  _BYTE *v72; // rbp
  int v73; // eax
  int v74; // edx
  char v75; // bp
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r15
  __int64 v83; // rbp
  __int64 v84; // r15
  __int64 v85; // rbx
  unsigned __int64 v86; // r14
  size_t v87; // rdx
  int v88; // eax
  unsigned __int8 v89; // bl
  __int64 *v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rax
  _QWORD *v100; // rdx
  _QWORD *v101; // rcx
  __int64 v102; // rsi
  __int64 *v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  const char *v108; // r15
  __int64 *v109; // r12
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 *v114; // r12
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  char *v122; // rbx
  unsigned __int8 *v124; // rbp
  unsigned __int8 v125; // al
  unsigned int v126; // edx
  unsigned __int64 v127; // rdi
  char *v128; // rcx
  char *v129; // r8
  unsigned int v130; // edx
  unsigned int v131; // edx
  unsigned int v132; // ecx
  __int64 v133; // r9
  int v134; // [rsp+0h] [rbp-218h]
  int v135; // [rsp+0h] [rbp-218h]
  int v136; // [rsp+0h] [rbp-218h]
  int v137; // [rsp+0h] [rbp-218h]
  const __m128i *v138; // [rsp+0h] [rbp-218h]
  int v139; // [rsp+8h] [rbp-210h]
  int v140; // [rsp+8h] [rbp-210h]
  int v141; // [rsp+8h] [rbp-210h]
  int v142; // [rsp+8h] [rbp-210h]
  _QWORD *v143; // [rsp+8h] [rbp-210h]
  __int64 v144; // [rsp+8h] [rbp-210h]
  __int64 v145; // [rsp+10h] [rbp-208h]
  __int64 v146; // [rsp+10h] [rbp-208h]
  __int64 v147; // [rsp+10h] [rbp-208h]
  __int64 v148; // [rsp+10h] [rbp-208h]
  int v149; // [rsp+10h] [rbp-208h]
  int v150; // [rsp+40h] [rbp-1D8h]
  int v151; // [rsp+48h] [rbp-1D0h]
  const char *v152; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v153; // [rsp+58h] [rbp-1C0h]
  int v154; // [rsp+68h] [rbp-1B0h]
  __int64 v155; // [rsp+70h] [rbp-1A8h]
  __int64 v156; // [rsp+78h] [rbp-1A0h]
  __int64 v157; // [rsp+80h] [rbp-198h]
  unsigned __int64 v158; // [rsp+88h] [rbp-190h]
  __int64 v159; // [rsp+90h] [rbp-188h]
  __int64 v160; // [rsp+98h] [rbp-180h]
  __int64 v161; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v162; // [rsp+A8h] [rbp-170h]
  void *v163; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v164; // [rsp+B8h] [rbp-160h]
  _QWORD v165[2]; // [rsp+C0h] [rbp-158h] BYREF
  char v166; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v167; // [rsp+D8h] [rbp-140h] BYREF
  char v168; // [rsp+E8h] [rbp-130h]
  __int128 v169; // [rsp+F0h] [rbp-128h] BYREF
  char v170; // [rsp+100h] [rbp-118h] BYREF
  __int128 v171; // [rsp+108h] [rbp-110h] BYREF
  char v172; // [rsp+118h] [rbp-100h]
  __int128 v173; // [rsp+120h] [rbp-F8h]
  void *v174; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v175; // [rsp+138h] [rbp-E0h] BYREF
  char v176; // [rsp+148h] [rbp-D0h]
  __int64 v177; // [rsp+150h] [rbp-C8h]
  __int64 v178; // [rsp+158h] [rbp-C0h]
  _QWORD v179[3]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD v180[3]; // [rsp+178h] [rbp-A0h] BYREF
  _QWORD v181[3]; // [rsp+190h] [rbp-88h] BYREF
  char v182; // [rsp+1A8h] [rbp-70h] BYREF
  char v183[40]; // [rsp+1B0h] [rbp-68h] BYREF
  unsigned __int64 v184; // [rsp+1D8h] [rbp-40h]

  v184 = __readfsqword(0x28u);
  v174 = (char *)&v175 + 8;
  v72 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v175 = 0;
  BYTE8(v175) = 0;
  if ( *v72 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v72 )
    {
      case 0:
        v68 = "null";
        break;
      case 1:
        v68 = "object";
        break;
      case 2:
        v68 = (char *)"array";
        break;
      case 3:
        v68 = "string";
        break;
      case 4:
        v68 = "boolean";
        break;
      case 8:
        v68 = "binary";
        break;
      case 9:
        v68 = "discarded";
        break;
      default:
        v68 = "number";
        break;
    }
    v159 = (__int64)v68;
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
  v73 = ida_mcp::parse_ea(v174, v175);
  v151 = v74;
  v75 = v74;
  v150 = v73;
  if ( v174 != (char *)&v175 + 8 )
    operator delete(v174, *((_QWORD *)&v175 + 1) + 1LL);
  if ( !v75 )
  {
    v66 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v66, "Invalid address");
    __cxa_throw(
      v66,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v76 = getseg();
  if ( !v76 )
  {
    v65 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v65,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v77 = v76;
  v152 = nullptr;
  v153 = 0;
  get_segm_name();
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_del_segment(
      (__int64)&v152,
      v77,
      v78,
      v79,
      v80,
      v81,
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
      a65);
  v82 = *(_QWORD *)(a2 + 8);
  v155 = a2;
  v157 = 0;
  v83 = *(_QWORD *)(v82 + 16);
  v84 = v82 + 8;
  v158 = 0x8000000000000000LL;
  v85 = v84;
  if ( v83 )
  {
    do
    {
      v86 = *(_QWORD *)(v83 + 40);
      if ( !v86 )
        goto LABEL_31;
      v87 = 5;
      if ( v86 <= 5 )
        v87 = *(_QWORD *)(v83 + 40);
      if ( ((v88 = memcmp(*(const void **)(v83 + 32), "flags", v87)) != 0
         || (v88 = v86 - 5, (__int64)(v86 - 5) <= 0x7FFFFFFF))
        && v88 < 0 )
      {
LABEL_31:
        v83 = *(_QWORD *)(v83 + 24);
      }
      else
      {
        v85 = v83;
        v83 = *(_QWORD *)(v83 + 16);
      }
    }
    while ( v83 );
    if ( v84 != v85 && std::string::compare(*(void **)(v85 + 32), *(_QWORD *)(v85 + 40), "flags") > 0 )
      v85 = v84;
  }
  v156 = v85;
  v159 = a2;
  v161 = 0;
  v162 = 0x8000000000000000LL;
  v160 = v84;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    v124 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v125 = *v124;
    if ( *v124 != 6 )
    {
      if ( v125 > 6u )
      {
        if ( v125 == 7 )
          goto LABEL_20;
      }
      else if ( v125 == 4 || v125 == 5 )
      {
        goto LABEL_20;
      }
      v69 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *v124 )
      {
        case 0u:
          v70 = "null";
          break;
        case 1u:
          v70 = "object";
          break;
        case 2u:
          v70 = (char *)"array";
          break;
        case 3u:
          v70 = "string";
          break;
        case 4u:
          v70 = "boolean";
          break;
        case 8u:
          v70 = "binary";
          break;
        case 9u:
          v70 = "discarded";
          break;
        default:
          v70 = "number";
          break;
      }
      v159 = (__int64)v70;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v69,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v69,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
  }
LABEL_20:
  v89 = del_segm();
  v166 = 0;
  *(_QWORD *)&v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v166 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "address", v91, v92, v93, v94, (int)&v174, a1, v145);
  v167 = (unsigned __int64)v90;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v163, v183, v95, v96, v97, v98, v134, v139, v146);
  v168 = 0;
  *(_QWORD *)&v169 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v99 = (_QWORD *)operator new(0x20u);
  v100 = v163;
  v101 = v99 + 2;
  v102 = v164;
  *v99 = v99 + 2;
  if ( v100 == v165 )
  {
    v126 = v102 + 1;
    if ( (unsigned int)(v102 + 1) >= 8 )
    {
      v99[2] = v165[0];
      *(_QWORD *)((char *)v101 + v126 - 8) = *(_QWORD *)((char *)&v165[-1] + v126);
      v127 = (unsigned __int64)(v99 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v128 = (char *)v101 - v127;
      v129 = (char *)((char *)v165 - v128);
      v130 = ((_DWORD)v128 + v126) & 0xFFFFFFF8;
      if ( v130 >= 8 )
      {
        v131 = v130 & 0xFFFFFFF8;
        v132 = 0;
        do
        {
          v133 = v132;
          v132 += 8;
          *(_QWORD *)(v127 + v133) = *(_QWORD *)&v129[v133];
        }
        while ( v132 < v131 );
      }
    }
    else if ( (v126 & 4) != 0 )
    {
      *((_DWORD *)v99 + 4) = v165[0];
      *(_DWORD *)((char *)v101 + v126 - 4) = *(_DWORD *)((char *)&v164 + v126 + 4);
    }
    else if ( (_DWORD)v102 != -1 )
    {
      *((_BYTE *)v99 + 16) = v165[0];
      if ( (v126 & 2) != 0 )
        *(_WORD *)((char *)v101 + v126 - 2) = *(_WORD *)((char *)&v164 + v126 + 6);
    }
  }
  else
  {
    *v99 = v100;
    v99[2] = v165[0];
  }
  v99[1] = v102;
  v163 = v165;
  LOBYTE(v165[0]) = 0;
  v164 = 0;
  v169 = (unsigned __int64)v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    (const __m128i *)&v166,
    2,
    1);
  v179[2] = 0;
  v170 = 0;
  *(_QWORD *)&v171 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v103,
    "deleted_name",
    v104,
    v105,
    v106,
    v107,
    v135,
    v140,
    (__int64)&v169);
  v171 = (unsigned __int64)v103;
  if ( (_QWORD)v153 )
    v108 = v152;
  else
    v108 = _qstring<char>::c_str(void)const::nullstr;
  v172 = 0;
  *(_QWORD *)&v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v109 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v109, v108, v110, v111, v112, v113, v136, v141, v147);
  v173 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v180,
    (const __m128i *)&v170,
    2,
    1);
  v180[2] = 0;
  LOBYTE(v174) = 0;
  *(_QWORD *)&v175 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v174) = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "success", v115, v116, v117, v118, v137, v142, v148);
  v176 = 4;
  v177 = v89;
  v178 = 0;
  v175 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v181,
    v138,
    2,
    1);
  v181[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v143,
    (__int64)v179,
    3,
    v119,
    v120,
    v121,
    (int)v138,
    (__int64)v143,
    v149,
    (int)&v171,
    (int)&v167,
    (int)&v166,
    (__int64)&v170,
    (int)&v163,
    v150,
    v151,
    (int)v152,
    v153,
    *((__int64 *)&v153 + 1),
    v154,
    v155);
  v122 = &v182;
  do
  {
    v122 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v122 != (char *)v179 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v163 != v165 )
    operator delete(v163, v165[0] + 1LL);
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree();
  }
  return v144;
}

