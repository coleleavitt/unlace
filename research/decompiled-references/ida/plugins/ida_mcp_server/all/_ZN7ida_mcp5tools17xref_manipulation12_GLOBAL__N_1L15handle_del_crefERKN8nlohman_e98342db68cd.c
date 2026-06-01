__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_cref(
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
        int a11,
        __int64 a12,
        __int64 a13,
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
        char a36,
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
        __int64 a54,
        __int64 a55,
        char a56,
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
        int a67,
        int a68,
        int a69,
        int a70,
        int a71,
        int a72,
        __int64 a73)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  nlohmann::json_abi_v3_12_0::detail::type_error *v74; // r12
  char *v75; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v76; // r12
  std::runtime_error *v77; // rbx
  char *v78; // rax
  char *v79; // rax
  __int64 v80; // rbx
  _BYTE *v81; // r12
  int v82; // eax
  char v83; // dl
  char v84; // r14
  _BYTE *v85; // r13
  __int64 v86; // rax
  int v87; // edx
  char v88; // r15
  __int64 v89; // r14
  __int64 v90; // rbp
  __int64 v91; // r14
  __int64 v92; // r15
  unsigned __int64 v93; // rbx
  size_t v94; // rdx
  int v95; // eax
  unsigned __int8 v96; // al
  __int64 *v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _QWORD *v106; // rax
  _QWORD *v107; // rdx
  _QWORD *v108; // rcx
  __int64 v109; // rsi
  __int64 *v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  _QWORD *v119; // rax
  _QWORD *v120; // rdx
  _QWORD *v121; // rcx
  __int64 v122; // rsi
  __int64 *v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  char *v131; // rbp
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  unsigned int v137; // edx
  unsigned int v138; // edx
  unsigned __int64 v139; // rdi
  char *v140; // rcx
  char *v141; // r8
  unsigned int v142; // edx
  unsigned int v143; // edx
  unsigned int v144; // ecx
  __int64 v145; // r9
  unsigned __int64 v146; // rdi
  char *v147; // rcx
  char *v148; // r8
  unsigned int v149; // edx
  unsigned int v150; // edx
  unsigned int v151; // ecx
  __int64 v152; // r9
  int v153; // [rsp+0h] [rbp-258h]
  int v154; // [rsp+0h] [rbp-258h]
  int v155; // [rsp+0h] [rbp-258h]
  int v156; // [rsp+0h] [rbp-258h]
  const __m128i *v157; // [rsp+0h] [rbp-258h]
  int v158; // [rsp+8h] [rbp-250h]
  int v159; // [rsp+8h] [rbp-250h]
  int v160; // [rsp+8h] [rbp-250h]
  int v161; // [rsp+8h] [rbp-250h]
  _QWORD *v162; // [rsp+8h] [rbp-250h]
  __int64 v163; // [rsp+8h] [rbp-250h]
  __int64 v164; // [rsp+10h] [rbp-248h]
  __int64 v165; // [rsp+10h] [rbp-248h]
  __int64 v166; // [rsp+10h] [rbp-248h]
  __int64 v167; // [rsp+10h] [rbp-248h]
  int v168; // [rsp+10h] [rbp-248h]
  int v169; // [rsp+28h] [rbp-230h]
  unsigned __int8 v170; // [rsp+2Fh] [rbp-229h]
  int v171; // [rsp+50h] [rbp-208h]
  char v172; // [rsp+58h] [rbp-200h]
  __int64 v173; // [rsp+60h] [rbp-1F8h]
  int v174; // [rsp+68h] [rbp-1F0h]
  __int64 v175[4]; // [rsp+70h] [rbp-1E8h] BYREF
  _QWORD v176[4]; // [rsp+90h] [rbp-1C8h] BYREF
  void *v177; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v178; // [rsp+B8h] [rbp-1A0h]
  _QWORD v179[2]; // [rsp+C0h] [rbp-198h] BYREF
  void *v180; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v181; // [rsp+D8h] [rbp-180h]
  _QWORD v182[2]; // [rsp+E0h] [rbp-178h] BYREF
  char v183; // [rsp+F0h] [rbp-168h] BYREF
  __int128 v184; // [rsp+F8h] [rbp-160h]
  char v185; // [rsp+108h] [rbp-150h]
  __int128 v186; // [rsp+110h] [rbp-148h] BYREF
  char v187; // [rsp+120h] [rbp-138h] BYREF
  __int128 v188; // [rsp+128h] [rbp-130h] BYREF
  char v189; // [rsp+138h] [rbp-120h]
  __int128 v190; // [rsp+140h] [rbp-118h] BYREF
  void *v191; // [rsp+150h] [rbp-108h] BYREF
  __int128 v192; // [rsp+158h] [rbp-100h] BYREF
  char v193; // [rsp+168h] [rbp-F0h]
  __int64 v194; // [rsp+170h] [rbp-E8h]
  __int64 v195; // [rsp+178h] [rbp-E0h]
  _QWORD v196[3]; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD v197[3]; // [rsp+198h] [rbp-C0h] BYREF
  _QWORD v198[3]; // [rsp+1B0h] [rbp-A8h] BYREF
  char v199; // [rsp+1C8h] [rbp-90h] BYREF
  char v200[32]; // [rsp+1D0h] [rbp-88h] BYREF
  char v201[40]; // [rsp+1F0h] [rbp-68h] BYREF
  unsigned __int64 v202; // [rsp+218h] [rbp-40h]

  v202 = __readfsqword(0x28u);
  v80 = a2;
  v191 = (char *)&v192 + 8;
  v81 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v192 = 0;
  BYTE8(v192) = 0;
  if ( *v81 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v81 )
    {
      case 0:
        v79 = "null";
        break;
      case 1:
        v79 = "object";
        break;
      case 2:
        v79 = (char *)"array";
        break;
      case 3:
        v79 = "string";
        break;
      case 4:
        v79 = "boolean";
        break;
      case 8:
        v79 = "binary";
        break;
      case 9:
        v79 = "discarded";
        break;
      default:
        v79 = "number";
        break;
    }
    v176[0] = v79;
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
  v82 = ida_mcp::parse_ea(v191, v192);
  v172 = v83;
  v84 = v83;
  v171 = v82;
  if ( v191 != (char *)&v192 + 8 )
    operator delete(v191, *((_QWORD *)&v192 + 1) + 1LL);
  v191 = (char *)&v192 + 8;
  *(_QWORD *)&v192 = 0;
  v85 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v192) = 0;
  if ( *v85 != 3 )
  {
    v74 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v85 )
    {
      case 0:
        v75 = "null";
        break;
      case 1:
        v75 = "object";
        break;
      case 2:
        v75 = (char *)"array";
        break;
      case 3:
        v75 = "string";
        break;
      case 4:
        v75 = "boolean";
        break;
      case 8:
        v75 = "binary";
        break;
      case 9:
        v75 = "discarded";
        break;
      default:
        v75 = "number";
        break;
    }
    v176[0] = v75;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v74,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v74,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v86 = ida_mcp::parse_ea(v191, v192);
  v174 = v87;
  v88 = v87;
  v173 = v86;
  if ( v191 != (char *)&v192 + 8 )
    operator delete(v191, *((_QWORD *)&v192 + 1) + 1LL);
  if ( !v84 || !v88 )
  {
    v77 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v77, "Invalid address");
    __cxa_throw(
      v77,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1 )
  {
    v76 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v78 = "null";
        break;
      case 1:
        v78 = "object";
        break;
      case 2:
        v78 = (char *)"array";
        break;
      case 3:
        v78 = "string";
        break;
      case 4:
        v78 = "boolean";
        break;
      case 8:
        v78 = "binary";
        break;
      case 9:
        v78 = "discarded";
        break;
      default:
        v78 = "number";
        break;
    }
    v176[0] = v78;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v76,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v76,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v89 = *(_QWORD *)(a2 + 8);
  v175[0] = a2;
  v175[2] = 0;
  v90 = *(_QWORD *)(v89 + 16);
  v91 = v89 + 8;
  v175[3] = 0x8000000000000000LL;
  v92 = v91;
  if ( v90 )
  {
    v164 = a2;
    do
    {
      v93 = *(_QWORD *)(v90 + 40);
      if ( !v93 )
        goto LABEL_35;
      v94 = 6;
      if ( v93 <= 6 )
        v94 = *(_QWORD *)(v90 + 40);
      if ( ((v95 = memcmp(*(const void **)(v90 + 32), "expand", v94)) != 0
         || (v95 = v93 - 6, (__int64)(v93 - 6) <= 0x7FFFFFFF))
        && v95 < 0 )
      {
LABEL_35:
        v90 = *(_QWORD *)(v90 + 24);
      }
      else
      {
        v92 = v90;
        v90 = *(_QWORD *)(v90 + 16);
      }
    }
    while ( v90 );
    v80 = a2;
    if ( v91 != v92 && std::string::compare(*(void **)(v92 + 32), *(_QWORD *)(v92 + 40), "expand") > 0 )
      v92 = v91;
  }
  v175[1] = v92;
  v176[0] = v80;
  v176[2] = 0;
  v176[3] = 0x8000000000000000LL;
  v176[1] = v91;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_()
    && *(_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->() != 4 )
  {
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_del_cref(
      (__int64)v175,
      (__int64)v176,
      v133,
      v134,
      v135,
      v136,
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
      a67,
      a68,
      a69,
      a70,
      a71,
      a72,
      a73);
  }
  v96 = del_cref();
  v183 = 0;
  v170 = v96;
  *(_QWORD *)&v184 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v183 = 3;
  v97 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v97, "from", v98, v99, v100, v101, (int)&v191, a1, v164);
  v184 = (unsigned __int64)v97;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v177, v200, v102, v103, v104, v105, v153, v158, v165);
  v185 = 0;
  *(_QWORD *)&v186 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v185 = 3;
  v106 = (_QWORD *)operator new(0x20u);
  v107 = v177;
  v108 = v106 + 2;
  v109 = v178;
  *v106 = v106 + 2;
  if ( v107 == v179 )
  {
    v138 = v109 + 1;
    if ( (unsigned int)(v109 + 1) >= 8 )
    {
      v106[2] = v179[0];
      *(_QWORD *)((char *)v108 + v138 - 8) = *(_QWORD *)((char *)&v179[-1] + v138);
      v146 = (unsigned __int64)(v106 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v147 = (char *)v108 - v146;
      v148 = (char *)((char *)v179 - v147);
      v149 = ((_DWORD)v147 + v138) & 0xFFFFFFF8;
      if ( v149 >= 8 )
      {
        v150 = v149 & 0xFFFFFFF8;
        v151 = 0;
        do
        {
          v152 = v151;
          v151 += 8;
          *(_QWORD *)(v146 + v152) = *(_QWORD *)&v148[v152];
        }
        while ( v151 < v150 );
      }
    }
    else if ( (v138 & 4) != 0 )
    {
      *((_DWORD *)v106 + 4) = v179[0];
      *(_DWORD *)((char *)v108 + v138 - 4) = *(_DWORD *)((char *)&v178 + v138 + 4);
    }
    else if ( (_DWORD)v109 != -1 )
    {
      *((_BYTE *)v106 + 16) = v179[0];
      if ( (v138 & 2) != 0 )
        *(_WORD *)((char *)v108 + v138 - 2) = *(_WORD *)((char *)&v178 + v138 + 6);
    }
  }
  else
  {
    *v106 = v107;
    v106[2] = v179[0];
  }
  v106[1] = v109;
  v177 = v179;
  LOBYTE(v179[0]) = 0;
  v178 = 0;
  v186 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v196,
    (const __m128i *)&v183,
    2,
    1);
  v196[2] = 0;
  v187 = 0;
  *(_QWORD *)&v188 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v187 = 3;
  v110 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v110, "to", v111, v112, v113, v114, v154, v159, (__int64)&v186);
  v188 = (unsigned __int64)v110;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v180, v201, v115, v116, v117, v118, v155, v160, v166);
  v189 = 0;
  *(_QWORD *)&v190 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v189 = 3;
  v119 = (_QWORD *)operator new(0x20u);
  v120 = v180;
  v121 = v119 + 2;
  v122 = v181;
  *v119 = v119 + 2;
  if ( v120 == v182 )
  {
    v137 = v122 + 1;
    if ( (unsigned int)(v122 + 1) >= 8 )
    {
      v119[2] = v182[0];
      *(_QWORD *)((char *)v121 + v137 - 8) = *(_QWORD *)((char *)&v182[-1] + v137);
      v139 = (unsigned __int64)(v119 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v140 = (char *)v121 - v139;
      v141 = (char *)((char *)v182 - v140);
      v142 = ((_DWORD)v140 + v137) & 0xFFFFFFF8;
      if ( v142 >= 8 )
      {
        v143 = v142 & 0xFFFFFFF8;
        v144 = 0;
        do
        {
          v145 = v144;
          v144 += 8;
          *(_QWORD *)(v139 + v145) = *(_QWORD *)&v141[v145];
        }
        while ( v144 < v143 );
      }
    }
    else if ( (v137 & 4) != 0 )
    {
      *((_DWORD *)v119 + 4) = v182[0];
      *(_DWORD *)((char *)v121 + v137 - 4) = *(_DWORD *)((char *)&v181 + v137 + 4);
    }
    else if ( (_DWORD)v122 != -1 )
    {
      *((_BYTE *)v119 + 16) = v182[0];
      if ( (v137 & 2) != 0 )
        *(_WORD *)((char *)v121 + v137 - 2) = *(_WORD *)((char *)&v181 + v137 + 6);
    }
  }
  else
  {
    *v119 = v120;
    v119[2] = v182[0];
  }
  v119[1] = v122;
  v180 = v182;
  v181 = 0;
  LOBYTE(v182[0]) = 0;
  v190 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v197,
    (const __m128i *)&v187,
    2,
    1);
  v197[2] = 0;
  LOBYTE(v191) = 0;
  *(_QWORD *)&v192 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v191) = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "success", v124, v125, v126, v127, v156, v161, v167);
  v193 = 4;
  v194 = v170;
  v195 = 0;
  v192 = (unsigned __int64)v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    v157,
    2,
    1);
  v198[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v162,
    (__int64)v196,
    3,
    v128,
    v129,
    v130,
    (int)v157,
    (__int64)v162,
    v168,
    (int)&v188,
    (int)&v190,
    v169,
    (__int64)&v183,
    (int)&v187,
    (int)&v177,
    (int)&v180,
    v171,
    v172,
    v173,
    v174,
    v175[0]);
  v131 = &v199;
  do
  {
    v131 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v131 != (char *)v196 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v180 != v182 )
    operator delete(v180, v182[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v177 != v179 )
    operator delete(v177, v179[0] + 1LL);
  return v163;
}

