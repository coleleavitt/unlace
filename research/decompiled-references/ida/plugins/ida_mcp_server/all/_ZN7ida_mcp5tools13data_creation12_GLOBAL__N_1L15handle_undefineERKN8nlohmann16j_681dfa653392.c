__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_undefine(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        char a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        char a31,
        char a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        __int64 a40,
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
        int a54,
        __int64 a55)
{
  void *exception; // r12
  const char *v56; // rbp
  void *v57; // r12
  char *v58; // rax
  void *v59; // rbp
  char *v60; // rax
  __int64 v61; // rbx
  size_t *v62; // r12
  __int64 v63; // rax
  __int64 v64; // r13
  _QWORD *v65; // r15
  const void *v66; // rdi
  size_t v67; // rbp
  size_t v68; // rbx
  _QWORD *v69; // r14
  __int64 v70; // r13
  size_t v71; // rdx
  int v72; // eax
  __int64 v73; // rbp
  size_t v74; // r14
  _QWORD *v75; // rcx
  size_t v76; // rbp
  size_t v77; // rdx
  int v78; // eax
  __int64 v79; // r14
  char *v80; // rbp
  int *v81; // rax
  int *v82; // r15
  __int64 v83; // r12
  std::runtime_error *v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // r15
  __int64 v88; // r14
  size_t v89; // rdx
  int v90; // eax
  unsigned __int64 v91; // rbp
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r15
  unsigned __int8 v98; // al
  __int64 *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _QWORD *v108; // rax
  __int64 *v109; // rdx
  _QWORD *v110; // rcx
  __int64 v111; // rsi
  __int64 *v112; // rbp
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  char *v125; // rbp
  unsigned int v127; // edx
  unsigned __int64 v128; // rdi
  char *v129; // rcx
  char *v130; // r8
  unsigned int v131; // edx
  unsigned int v132; // edx
  unsigned int v133; // ecx
  __int64 v134; // r9
  int v135; // [rsp+0h] [rbp-1C8h]
  int v136; // [rsp+0h] [rbp-1C8h]
  int v137; // [rsp+0h] [rbp-1C8h]
  int v138; // [rsp+0h] [rbp-1C8h]
  const __m128i *v139; // [rsp+0h] [rbp-1C8h]
  int v140; // [rsp+8h] [rbp-1C0h]
  int v141; // [rsp+8h] [rbp-1C0h]
  int v142; // [rsp+8h] [rbp-1C0h]
  int v143; // [rsp+8h] [rbp-1C0h]
  _QWORD *v144; // [rsp+8h] [rbp-1C0h]
  __int64 v145; // [rsp+8h] [rbp-1C0h]
  __int64 v146; // [rsp+10h] [rbp-1B8h]
  __int64 v147; // [rsp+10h] [rbp-1B8h]
  __int64 v148; // [rsp+10h] [rbp-1B8h]
  __int64 v149; // [rsp+10h] [rbp-1B8h]
  int v150; // [rsp+10h] [rbp-1B8h]
  int v151; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 v152; // [rsp+1Fh] [rbp-1A9h]
  __int64 v153; // [rsp+30h] [rbp-198h]
  int v154; // [rsp+38h] [rbp-190h]
  int v155; // [rsp+3Ch] [rbp-18Ch] BYREF
  char *v156; // [rsp+40h] [rbp-188h]
  __int64 v157; // [rsp+48h] [rbp-180h]
  __int64 v158; // [rsp+50h] [rbp-178h]
  unsigned __int64 v159; // [rsp+58h] [rbp-170h]
  void *v160; // [rsp+60h] [rbp-168h] BYREF
  __int64 v161; // [rsp+68h] [rbp-160h]
  __int64 v162[2]; // [rsp+70h] [rbp-158h] BYREF
  char v163; // [rsp+80h] [rbp-148h] BYREF
  __int128 v164; // [rsp+88h] [rbp-140h]
  char v165; // [rsp+98h] [rbp-130h]
  __int128 v166; // [rsp+A0h] [rbp-128h] BYREF
  char v167; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v168; // [rsp+B8h] [rbp-110h]
  char v169; // [rsp+C8h] [rbp-100h]
  __int64 v170; // [rsp+D0h] [rbp-F8h]
  __int64 v171; // [rsp+D8h] [rbp-F0h]
  void *s2; // [rsp+E0h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+E8h] [rbp-E0h] BYREF
  char v174; // [rsp+F8h] [rbp-D0h]
  __int64 v175; // [rsp+100h] [rbp-C8h]
  __int64 v176; // [rsp+108h] [rbp-C0h]
  _QWORD v177[2]; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v178; // [rsp+120h] [rbp-A8h] BYREF
  _QWORD v179[3]; // [rsp+128h] [rbp-A0h] BYREF
  _QWORD v180[3]; // [rsp+140h] [rbp-88h] BYREF
  char v181; // [rsp+158h] [rbp-70h] BYREF
  char v182[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v183; // [rsp+188h] [rbp-40h]

  v183 = __readfsqword(0x28u);
  v61 = a2;
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, (int)&s2, a1, v146);
  v62 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v56 = "null";
        break;
      case 1:
        v56 = "object";
        break;
      case 2:
        v56 = "array";
        break;
      case 3:
        v56 = "string";
        break;
      case 4:
        v56 = "boolean";
        break;
      case 8:
        v56 = "binary";
        break;
      case 9:
        v56 = "discarded";
        break;
      default:
        v56 = "number";
        break;
    }
    LOBYTE(v178) = 0;
    v177[0] = &v178;
    v177[1] = 0;
    strlen(v56);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v63 = *(_QWORD *)(a2 + 8);
  v64 = *(_QWORD *)(v63 + 16);
  if ( !v64 )
  {
    v65 = (_QWORD *)(v63 + 8);
    goto LABEL_25;
  }
  v147 = a2;
  v65 = (_QWORD *)(v63 + 8);
  v66 = *(const void **)(v64 + 32);
  v67 = *(_QWORD *)(v64 + 40);
  v68 = n[0];
  v69 = *(_QWORD **)(v63 + 16);
  v70 = v63 + 8;
  while ( 1 )
  {
    v71 = v67;
    if ( v68 <= v67 )
      v71 = v68;
    if ( !v71 || (v72 = memcmp(v66, v62, v71)) == 0 )
    {
      v73 = v67 - v68;
      if ( v73 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v73 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v72 = v73;
    }
    if ( v72 < 0 )
      break;
LABEL_4:
    v65 = v69;
    v69 = (_QWORD *)v69[2];
    if ( !v69 )
      goto LABEL_15;
LABEL_5:
    v66 = (const void *)v69[4];
    v67 = v69[5];
  }
  v69 = (_QWORD *)v69[3];
  if ( v69 )
    goto LABEL_5;
LABEL_15:
  v74 = v68;
  v75 = (_QWORD *)v70;
  v61 = a2;
  if ( (_QWORD *)v70 != v65 )
  {
    v76 = v65[5];
    v77 = v76;
    if ( v74 <= v76 )
      v77 = v74;
    if ( v77 && (v147 = v70, v78 = memcmp(v62, (const void *)v65[4], v77), v75 = (_QWORD *)v70, v78) )
    {
LABEL_23:
      if ( v78 < 0 )
        v65 = v75;
    }
    else
    {
      v79 = v74 - v76;
      if ( v79 <= 0x7FFFFFFF )
      {
        if ( v79 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v78 = v79;
          goto LABEL_23;
        }
        v65 = v75;
      }
    }
  }
LABEL_25:
  if ( v62 != &n[1] )
    operator delete(v62, n[1] + 1);
  s2 = &n[1];
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  if ( *((_BYTE *)v65 + 64) != 3 )
  {
    v57 = __cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v65 + 64) )
    {
      case 0:
        v58 = "null";
        break;
      case 1:
        v58 = "object";
        break;
      case 2:
        v58 = (char *)"array";
        break;
      case 3:
        v58 = "string";
        break;
      case 4:
        v58 = "boolean";
        break;
      case 8:
        v58 = "binary";
        break;
      case 9:
        v58 = "discarded";
        break;
      default:
        v58 = "number";
        break;
    }
    v156 = v58;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v57,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v57,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v80 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v80 = (char *)s2 + 2;
  v81 = __errno_location();
  *v81 = 0;
  v82 = v81;
  v83 = __isoc23_strtoull();
  if ( v80 == v156 || *v156 || *v82 == 34 && v83 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    v84 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v84, "Invalid address");
    __cxa_throw(
      v84,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  if ( *(_BYTE *)v61 != 1 )
  {
    v59 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)v61 )
    {
      case 0:
        v60 = "null";
        break;
      case 1:
        v60 = "object";
        break;
      case 2:
        v60 = (char *)"array";
        break;
      case 3:
        v60 = "string";
        break;
      case 4:
        v60 = "boolean";
        break;
      case 8:
        v60 = "binary";
        break;
      case 9:
        v60 = "discarded";
        break;
      default:
        v60 = "number";
        break;
    }
    v156 = v60;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v59,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v59,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v156 = (char *)v61;
  v159 = 0x8000000000000000LL;
  v85 = *(_QWORD *)(v61 + 8);
  v158 = 0;
  v86 = *(_QWORD *)(v85 + 16);
  if ( !v86 )
    goto LABEL_54;
  v87 = v85 + 8;
  v88 = v85 + 8;
  do
  {
    while ( 1 )
    {
      v91 = *(_QWORD *)(v86 + 40);
      if ( !v91 )
        break;
      v89 = 4;
      if ( v91 <= 4 )
        v89 = *(_QWORD *)(v86 + 40);
      v90 = memcmp(*(const void **)(v86 + 32), "size", v89);
      if ( v90 || (v90 = v91 - 4, (__int64)(v91 - 4) <= 0x7FFFFFFF) )
      {
        if ( v90 < 0 )
          break;
      }
      v88 = v86;
      v86 = *(_QWORD *)(v86 + 16);
      if ( !v86 )
        goto LABEL_50;
    }
    v86 = *(_QWORD *)(v86 + 24);
  }
  while ( v86 );
LABEL_50:
  if ( v87 == v88 || std::string::compare(*(void **)(v88 + 32), *(_QWORD *)(v88 + 40), "size") > 0 )
  {
LABEL_54:
    v97 = 1;
  }
  else
  {
    v157 = v88;
    v155 = 0;
    v92 = nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
    v97 = 0;
    if ( &loc_FFFFF != (_UNKNOWN *)-1LL )
      ida_mcp::tools::data_creation::`anonymous namespace'::handle_undefine(
        v92,
        (__int64)&v155,
        v93,
        v94,
        v95,
        v96,
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
        a55);
  }
  v98 = del_items();
  v163 = 0;
  v152 = v98;
  *(_QWORD *)&v164 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v163 = 3;
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v99, "address", v100, v101, v102, v103, v135, v140, v147);
  v164 = (unsigned __int64)v99;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v160, v182, v104, v105, v106, v107, v136, v141, v148);
  v165 = 0;
  *(_QWORD *)&v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = 3;
  v108 = (_QWORD *)operator new(0x20u);
  v109 = (__int64 *)v160;
  v110 = v108 + 2;
  v111 = v161;
  *v108 = v108 + 2;
  if ( v109 == v162 )
  {
    v127 = v111 + 1;
    if ( (unsigned int)(v111 + 1) >= 8 )
    {
      v108[2] = v162[0];
      *(_QWORD *)((char *)v110 + v127 - 8) = *(__int64 *)((char *)&v162[-1] + v127);
      v128 = (unsigned __int64)(v108 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v129 = (char *)v110 - v128;
      v130 = (char *)((char *)v162 - v129);
      v131 = ((_DWORD)v129 + v127) & 0xFFFFFFF8;
      if ( v131 >= 8 )
      {
        v132 = v131 & 0xFFFFFFF8;
        v133 = 0;
        do
        {
          v134 = v133;
          v133 += 8;
          *(_QWORD *)(v128 + v134) = *(_QWORD *)&v130[v134];
        }
        while ( v133 < v132 );
      }
    }
    else if ( (v127 & 4) != 0 )
    {
      *((_DWORD *)v108 + 4) = v162[0];
      *(_DWORD *)((char *)v110 + v127 - 4) = *(_DWORD *)((char *)&v161 + v127 + 4);
    }
    else if ( (_DWORD)v111 != -1 )
    {
      *((_BYTE *)v108 + 16) = v162[0];
      if ( (v127 & 2) != 0 )
        *(_WORD *)((char *)v110 + v127 - 2) = *(_WORD *)((char *)&v161 + v127 + 6);
    }
  }
  else
  {
    *v108 = v109;
    v108[2] = v162[0];
  }
  v108[1] = v111;
  v160 = v162;
  v161 = 0;
  LOBYTE(v162[0]) = 0;
  v166 = (unsigned __int64)v108;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v177,
    (const __m128i *)&v163);
  v178 = 0;
  v167 = 0;
  *(_QWORD *)&v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "size", v113, v114, v115, v116, v137, v142, (__int64)&v166);
  v169 = 6;
  v170 = v97;
  v171 = 0;
  v168 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v179,
    (const __m128i *)&v167);
  v179[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "success", v118, v119, v120, v121, v138, v143, v149);
  v174 = 4;
  v175 = v152;
  v176 = 0;
  *(_OWORD *)n = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v180,
    v139);
  v180[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v144,
    (__int64)v177,
    3,
    v122,
    v123,
    v124,
    (int)v139,
    (__int64)v144,
    v150,
    v151,
    (int)&v163,
    (int)&v160,
    v153,
    v154,
    (int)v156,
    v157,
    v158,
    v159,
    (__int64)v160,
    v161,
    v162[0]);
  v125 = &v181;
  do
  {
    v125 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v125 != (char *)v177 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v160 != v162 )
    operator delete(v160, v162[0] + 1);
  return v145;
}

