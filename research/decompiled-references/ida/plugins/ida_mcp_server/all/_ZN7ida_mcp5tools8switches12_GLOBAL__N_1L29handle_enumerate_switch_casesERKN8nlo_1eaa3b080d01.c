__int64 __fastcall ida_mcp::tools::switches::`anonymous namespace'::handle_enumerate_switch_cases(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        int a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        char a26,
        __int64 a27,
        char a28,
        __int64 a29,
        char a30,
        __int64 a31,
        int a32,
        int a33,
        char a34,
        __int64 a35,
        int a36,
        int a37,
        int a38,
        int a39,
        __int64 a40,
        __int64 a41,
        int a42,
        int a43,
        __int64 a44,
        __int64 a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        __int64 a60,
        __int64 a61,
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
        int a73,
        int a74,
        int a75,
        char a76,
        int a77,
        int a78,
        int a79,
        int a80,
        int a81,
        int a82,
        int a83,
        int a84,
        int a85,
        int a86,
        int a87,
        int a88,
        int a89,
        int a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        __int64 a97)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v98; // r12
  char *v99; // rax
  void *v100; // rbp
  void *v101; // rbp
  char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 v105; // r13
  __int64 v106; // r14
  size_t v107; // rax
  int v108; // eax
  unsigned __int64 v109; // rbp
  unsigned __int64 v110; // rbx
  size_t v111; // rax
  int v112; // eax
  char v113; // al
  void *v114; // rbp
  int *v115; // rax
  int *v116; // r13
  std::runtime_error *v117; // rbx
  size_t v118; // rax
  unsigned int v119; // ebx
  _QWORD *v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // rdx
  _QWORD *v123; // rbx
  size_t v124; // rcx
  __int64 v125; // rax
  size_t v126; // rax
  unsigned int v127; // ebx
  _QWORD *v128; // rdx
  _QWORD *v129; // rax
  _QWORD *v130; // rdx
  _QWORD *v131; // rbx
  size_t v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  char v135; // si
  __int64 v136; // rdx
  __int64 v137; // rax
  size_t v138; // rax
  unsigned int v139; // ebx
  char *v140; // rdx
  _QWORD *v141; // rax
  _QWORD *v142; // rdx
  _QWORD *v143; // rbx
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 *func; // rax
  __int64 v147; // rsi
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  _QWORD *v152; // rax
  _QWORD *v153; // rdx
  _QWORD *v154; // rbp
  size_t v155; // rsi
  __int64 v156; // rax
  char v157; // si
  __int64 v158; // rdx
  _QWORD *v160; // rdx
  _QWORD *v161; // rax
  char *v162; // rax
  unsigned __int64 v163; // rsi
  char *v164; // rax
  char *v165; // rdx
  unsigned int v166; // eax
  unsigned int v167; // eax
  unsigned int v168; // ecx
  __int64 v169; // rdi
  unsigned __int64 v170; // rcx
  char *v171; // rax
  char *v172; // rbp
  unsigned int v173; // eax
  unsigned int v174; // eax
  unsigned int v175; // edx
  __int64 v176; // rsi
  unsigned __int64 v177; // rcx
  char *v178; // rbp
  unsigned int v179; // eax
  unsigned int v180; // edx
  __int64 v181; // rsi
  _QWORD *v182; // rdx
  size_t v183; // rax
  unsigned int v184; // eax
  unsigned int v185; // eax
  unsigned int v186; // eax
  unsigned int v187; // r12d
  unsigned __int64 v188; // rsi
  char *v189; // rdx
  char *v190; // rdi
  unsigned int v191; // eax
  unsigned int v192; // eax
  unsigned int v193; // edx
  __int64 v194; // r8
  unsigned __int64 v195; // rsi
  char *v196; // rdx
  char *v197; // rdi
  unsigned int v198; // eax
  unsigned int v199; // eax
  unsigned int v200; // edx
  __int64 v201; // r8
  unsigned __int64 v202; // rcx
  char *v203; // rdx
  char *v204; // r8
  unsigned int v205; // eax
  unsigned int v206; // eax
  unsigned int v207; // edx
  __int64 v208; // rdi
  unsigned int v209; // eax
  unsigned __int64 v210; // rcx
  char *v211; // rdx
  char *v212; // r8
  unsigned int v213; // eax
  unsigned int v214; // eax
  unsigned int v215; // edx
  __int64 v216; // rdi
  _QWORD *v217; // rax
  unsigned __int64 v218; // rcx
  char *v219; // rax
  char *v220; // rsi
  unsigned int v221; // eax
  char *v222; // r15
  unsigned int v223; // eax
  unsigned int v224; // edx
  __int64 v225; // rsi
  __int64 v227; // [rsp+68h] [rbp-2B0h]
  size_t v228; // [rsp+88h] [rbp-290h]
  size_t v229; // [rsp+90h] [rbp-288h]
  size_t v230; // [rsp+98h] [rbp-280h]
  __int64 v231; // [rsp+D8h] [rbp-240h]
  size_t v232; // [rsp+E0h] [rbp-238h]
  char *v233; // [rsp+130h] [rbp-1E8h] BYREF
  __int128 v234; // [rsp+138h] [rbp-1E0h]
  __int64 v235; // [rsp+150h] [rbp-1C8h]
  __m128i si128; // [rsp+158h] [rbp-1C0h]
  __int128 v237; // [rsp+168h] [rbp-1B0h]
  __int64 v238; // [rsp+178h] [rbp-1A0h]
  __int64 v239; // [rsp+180h] [rbp-198h]
  __int64 v240; // [rsp+188h] [rbp-190h]
  __int64 v241; // [rsp+190h] [rbp-188h]
  __int64 v242; // [rsp+198h] [rbp-180h]
  __int64 v243; // [rsp+1A0h] [rbp-178h]
  __int64 v244; // [rsp+1A8h] [rbp-170h]
  __int64 v245; // [rsp+1B0h] [rbp-168h]
  __int128 v246; // [rsp+1B8h] [rbp-160h]
  void *v247; // [rsp+1D0h] [rbp-148h]
  size_t v248; // [rsp+1D8h] [rbp-140h]
  _QWORD v249[2]; // [rsp+1E0h] [rbp-138h] BYREF
  void *v250; // [rsp+1F0h] [rbp-128h]
  size_t v251; // [rsp+1F8h] [rbp-120h]
  _QWORD v252[2]; // [rsp+200h] [rbp-118h] BYREF
  void *v253; // [rsp+210h] [rbp-108h]
  __int64 v254; // [rsp+218h] [rbp-100h]
  char s2[16]; // [rsp+220h] [rbp-F8h] BYREF
  void *v256; // [rsp+230h] [rbp-E8h]
  size_t v257; // [rsp+238h] [rbp-E0h]
  _QWORD s1[2]; // [rsp+240h] [rbp-D8h] BYREF
  char v259[24]; // [rsp+250h] [rbp-C8h] BYREF
  _BYTE v260[8]; // [rsp+268h] [rbp-B0h]
  char v261[24]; // [rsp+270h] [rbp-A8h] BYREF
  _BYTE v262[8]; // [rsp+288h] [rbp-90h]
  char v263[24]; // [rsp+290h] [rbp-88h] BYREF
  _BYTE v264[8]; // [rsp+2A8h] [rbp-70h]
  char v265[40]; // [rsp+2B0h] [rbp-68h] BYREF
  unsigned __int64 v266; // [rsp+2D8h] [rbp-40h]

  v266 = __readfsqword(0x28u);
  v253 = s2;
  strcpy(s2, "address");
  v254 = 7;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v102 = "null";
        break;
      case 1:
        v102 = "object";
        break;
      case 2:
        v102 = (char *)"array";
        break;
      case 3:
        v102 = "string";
        break;
      case 4:
        v102 = "boolean";
        break;
      case 8:
        v102 = "binary";
        break;
      case 9:
        v102 = "discarded";
        break;
      default:
        v102 = "number";
        break;
    }
    v235 = (__int64)v102;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v103 = *(_QWORD *)(a2 + 8);
  v104 = *(_QWORD *)(v103 + 16);
  v105 = v103 + 8;
  if ( v104 )
  {
    v106 = v103 + 8;
    do
    {
      while ( 1 )
      {
        v109 = *(_QWORD *)(v104 + 40);
        if ( !v109 )
          break;
        v107 = 7;
        if ( v109 <= 7 )
          v107 = *(_QWORD *)(v104 + 40);
        v108 = memcmp(*(const void **)(v104 + 32), s2, v107);
        if ( v108 || (v108 = v109 - 7, (__int64)(v109 - 7) <= 0x7FFFFFFF) )
        {
          if ( v108 < 0 )
            break;
        }
        v106 = v104;
        v104 = *(_QWORD *)(v104 + 16);
        if ( !v104 )
          goto LABEL_12;
      }
      v104 = *(_QWORD *)(v104 + 24);
    }
    while ( v104 );
LABEL_12:
    if ( v105 != v106 )
    {
      v110 = *(_QWORD *)(v106 + 40);
      if ( v110 )
      {
        v111 = 7;
        if ( v110 <= 7 )
          v111 = *(_QWORD *)(v106 + 40);
        v112 = memcmp(s2, *(const void **)(v106 + 32), v111);
        if ( v112 || (v112 = 7 - v110, (__int64)(7 - v110) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v112 >= 0 )
            v105 = v106;
        }
      }
      else
      {
        v105 = v106;
      }
    }
  }
  s2[0] = 0;
  v113 = *(_BYTE *)(v105 + 64);
  v253 = s2;
  v254 = 0;
  if ( v113 != 3 )
  {
    v98 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v105 + 64) )
    {
      case 0:
        v99 = "null";
        break;
      case 1:
        v99 = "object";
        break;
      case 2:
        v99 = (char *)"array";
        break;
      case 3:
        v99 = "string";
        break;
      case 4:
        v99 = "boolean";
        break;
      case 8:
        v99 = "binary";
        break;
      case 9:
        v99 = "discarded";
        break;
      default:
        v99 = "number";
        break;
    }
    v235 = (__int64)v99;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v98,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v98,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v114 = v253;
  v115 = __errno_location();
  *v115 = 0;
  v116 = v115;
  v227 = __isoc23_strtoull();
  if ( v114 == (void *)v235 || *(_BYTE *)v235 || *v116 == 34 && v227 == -1 )
  {
    if ( v253 != s2 )
      operator delete(v253, *(_QWORD *)s2 + 1LL);
    v117 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v117, "Invalid address format");
    __cxa_throw(
      v117,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v253 != s2 )
    operator delete(v253, *(_QWORD *)s2 + 1LL);
  v235 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  v237 = -1;
  v238 = 0;
  v239 = 0;
  v240 = 0;
  v241 = 0xFFFFFFFFLL;
  v242 = 0;
  v243 = 2;
  v244 = -1;
  v245 = 0;
  v246 = 0;
  if ( get_switch_info() <= 0 )
  {
    v101 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v101,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( !(unsigned __int8)calc_switch_cases() )
  {
    v100 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v100,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  v247 = v249;
  v118 = strlen(v259);
  v228 = v118;
  v119 = v118;
  if ( v118 > 0xF )
  {
    v247 = (void *)std::string::_M_create();
    v160 = v247;
    v249[0] = v228;
  }
  else
  {
    if ( v118 == 1 )
    {
      LOBYTE(v249[0]) = v259[0];
      goto LABEL_35;
    }
    if ( !v118 )
    {
LABEL_35:
      v120 = v249;
      goto LABEL_36;
    }
    v160 = v249;
  }
  if ( v119 >= 8 )
  {
    *v160 = *(_QWORD *)v259;
    *(_QWORD *)((char *)v160 + v119 - 8) = *(_QWORD *)((char *)&s1[1] + v119);
    v177 = (unsigned __int64)(v160 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v178 = (char *)(v259 - ((char *)v160 - v177));
    if ( ((v119 + (_DWORD)v160 - (_DWORD)v177) & 0xFFFFFFF8) >= 8 )
    {
      v179 = (v119 + (_DWORD)v160 - v177) & 0xFFFFFFF8;
      v180 = 0;
      do
      {
        v181 = v180;
        v180 += 8;
        *(_QWORD *)(v177 + v181) = *(_QWORD *)&v178[v181];
      }
      while ( v180 < v179 );
    }
  }
  else if ( (v119 & 4) != 0 )
  {
    *(_DWORD *)v160 = *(_DWORD *)v259;
    *(_DWORD *)((char *)v160 + v119 - 4) = *(_DWORD *)((char *)&s1[1] + v119 + 4);
  }
  else if ( v119 )
  {
    *(_BYTE *)v160 = v259[0];
    if ( (v119 & 2) != 0 )
      *(_WORD *)((char *)v160 + v119 - 2) = *(_WORD *)((char *)&s1[1] + v119 + 6);
  }
  v118 = v228;
  v120 = v247;
LABEL_36:
  v248 = v118;
  *((_BYTE *)v120 + v118) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = (_QWORD *)operator new(0x20u);
  v122 = v121 + 2;
  v123 = v121;
  v124 = v248;
  *v121 = v121 + 2;
  if ( v247 == v249 )
  {
    v185 = v124 + 1;
    if ( (unsigned int)(v124 + 1) >= 8 )
    {
      v123[2] = v249[0];
      *(_QWORD *)((char *)v122 + v185 - 8) = *(_QWORD *)((char *)&v249[-1] + v185);
      v188 = (unsigned __int64)(v123 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v189 = (char *)v122 - v188;
      v190 = (char *)((char *)v249 - v189);
      v191 = ((_DWORD)v189 + v185) & 0xFFFFFFF8;
      if ( v191 >= 8 )
      {
        v192 = v191 & 0xFFFFFFF8;
        v193 = 0;
        do
        {
          v194 = v193;
          v193 += 8;
          *(_QWORD *)(v188 + v194) = *(_QWORD *)&v190[v194];
        }
        while ( v193 < v192 );
      }
    }
    else if ( (v185 & 4) != 0 )
    {
      *((_DWORD *)v123 + 4) = v249[0];
      *(_DWORD *)((char *)v122 + v185 - 4) = *(_DWORD *)((char *)&v248 + v185 + 4);
    }
    else if ( (_DWORD)v124 != -1 )
    {
      *((_BYTE *)v123 + 16) = v249[0];
      if ( (v185 & 2) != 0 )
        *(_WORD *)((char *)v122 + v185 - 2) = *(_WORD *)((char *)&v248 + v185 + 6);
    }
  }
  else
  {
    *v121 = v247;
    v121[2] = v249[0];
  }
  v123[1] = v124;
  v247 = v249;
  v248 = 0;
  LOBYTE(v249[0]) = 0;
  v125 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v125 = 3;
  *(_QWORD *)(v125 + 8) = v123;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v247 != v249 )
    operator delete(v247, v249[0] + 1LL);
  qsnprintf();
  v250 = v252;
  v126 = strlen(v261);
  v229 = v126;
  v127 = v126;
  if ( v126 > 0xF )
  {
    v161 = (_QWORD *)std::string::_M_create();
    v250 = v161;
    v252[0] = v229;
  }
  else
  {
    if ( v126 == 1 )
    {
      LOBYTE(v252[0]) = v261[0];
      goto LABEL_43;
    }
    if ( !v126 )
    {
LABEL_43:
      v128 = v252;
      goto LABEL_44;
    }
    v161 = v252;
  }
  if ( v127 >= 8 )
  {
    *v161 = *(_QWORD *)v261;
    *(_QWORD *)((char *)v161 + v127 - 8) = *(_QWORD *)&v260[v127];
    v170 = (unsigned __int64)(v161 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v171 = (char *)v161 - v170;
    v172 = (char *)(v261 - v171);
    v173 = (v127 + (_DWORD)v171) & 0xFFFFFFF8;
    if ( v173 >= 8 )
    {
      v174 = v173 & 0xFFFFFFF8;
      v175 = 0;
      do
      {
        v176 = v175;
        v175 += 8;
        *(_QWORD *)(v170 + v176) = *(_QWORD *)&v172[v176];
      }
      while ( v175 < v174 );
    }
  }
  else if ( (v127 & 4) != 0 )
  {
    *(_DWORD *)v161 = *(_DWORD *)v261;
    *(_DWORD *)((char *)v161 + v127 - 4) = *(_DWORD *)&v260[v127 + 4];
  }
  else if ( v127 )
  {
    *(_BYTE *)v161 = v261[0];
    if ( (v127 & 2) != 0 )
      *(_WORD *)((char *)v161 + v127 - 2) = *(_WORD *)&v260[v127 + 6];
  }
  v126 = v229;
  v128 = v250;
LABEL_44:
  v251 = v126;
  *((_BYTE *)v128 + v126) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = (_QWORD *)operator new(0x20u);
  v130 = v129 + 2;
  v131 = v129;
  v132 = v251;
  *v129 = v129 + 2;
  if ( v250 == v252 )
  {
    v184 = v132 + 1;
    if ( (unsigned int)(v132 + 1) >= 8 )
    {
      v131[2] = v252[0];
      *(_QWORD *)((char *)v130 + v184 - 8) = *(_QWORD *)((char *)&v252[-1] + v184);
      v195 = (unsigned __int64)(v131 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v196 = (char *)v130 - v195;
      v197 = (char *)((char *)v252 - v196);
      v198 = ((_DWORD)v196 + v184) & 0xFFFFFFF8;
      if ( v198 >= 8 )
      {
        v199 = v198 & 0xFFFFFFF8;
        v200 = 0;
        do
        {
          v201 = v200;
          v200 += 8;
          *(_QWORD *)(v195 + v201) = *(_QWORD *)&v197[v201];
        }
        while ( v200 < v199 );
      }
    }
    else if ( (v184 & 4) != 0 )
    {
      *((_DWORD *)v131 + 4) = v252[0];
      *(_DWORD *)((char *)v130 + v184 - 4) = *(_DWORD *)((char *)&v251 + v184 + 4);
    }
    else if ( (_DWORD)v132 != -1 )
    {
      *((_BYTE *)v131 + 16) = v252[0];
      if ( (v184 & 2) != 0 )
        *(_WORD *)((char *)v130 + v184 - 2) = *(_WORD *)((char *)&v251 + v184 + 6);
    }
  }
  else
  {
    *v129 = v250;
    v129[2] = v252[0];
  }
  v131[1] = v132;
  v250 = v252;
  v251 = 0;
  LOBYTE(v252[0]) = 0;
  v133 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v133 = 3;
  *(_QWORD *)(v133 + 8) = v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v250 != v252 )
    operator delete(v250, v252[0] + 1LL);
  v134 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v135 = *(_BYTE *)v134;
  v136 = *(_QWORD *)(v134 + 8);
  *(_BYTE *)v134 = 6;
  LOBYTE(v233) = v135;
  *(_QWORD *)(v134 + 8) = 0;
  *(_QWORD *)&v234 = v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v137 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v137 = 0;
  *(_QWORD *)(v137 + 8) = v231;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_QWORD)v237 == -1 )
    goto LABEL_67;
  qsnprintf();
  v253 = s2;
  v138 = strlen(v263);
  v230 = v138;
  v139 = v138;
  if ( v138 > 0xF )
  {
    v162 = (char *)std::string::_M_create();
    v253 = v162;
    *(_QWORD *)s2 = v230;
  }
  else
  {
    if ( v138 == 1 )
    {
      s2[0] = v263[0];
      goto LABEL_52;
    }
    if ( !v138 )
    {
LABEL_52:
      v140 = s2;
      goto LABEL_53;
    }
    v162 = s2;
  }
  if ( v139 < 8 )
  {
    if ( (v139 & 4) != 0 )
    {
      *(_DWORD *)v162 = *(_DWORD *)v263;
      *(_DWORD *)&v162[v139 - 4] = *(_DWORD *)&v262[v139 + 4];
    }
    else if ( v139 )
    {
      *v162 = v263[0];
      if ( (v139 & 2) != 0 )
        *(_WORD *)&v162[v139 - 2] = *(_WORD *)&v262[v139 + 6];
    }
  }
  else
  {
    v163 = (unsigned __int64)(v162 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v162 = *(_QWORD *)v263;
    *(_QWORD *)&v162[v139 - 8] = *(_QWORD *)&v262[v139];
    v164 = &v162[-v163];
    v165 = (char *)(v263 - v164);
    v166 = (v139 + (_DWORD)v164) & 0xFFFFFFF8;
    if ( v166 >= 8 )
    {
      v167 = v166 & 0xFFFFFFF8;
      v168 = 0;
      do
      {
        v169 = v168;
        v168 += 8;
        *(_QWORD *)(v163 + v169) = *(_QWORD *)&v165[v169];
      }
      while ( v168 < v167 );
    }
  }
  v138 = v230;
  v140 = (char *)v253;
LABEL_53:
  v254 = v138;
  v140[v138] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v141 = (_QWORD *)operator new(0x20u);
  v142 = v141 + 2;
  v143 = v141;
  v144 = v254;
  *v141 = v141 + 2;
  if ( v253 == s2 )
  {
    v186 = v144 + 1;
    if ( (unsigned int)(v144 + 1) >= 8 )
    {
      v143[2] = *(_QWORD *)s2;
      *(_QWORD *)((char *)v142 + v186 - 8) = *(_QWORD *)&s2[v186 - 8];
      v202 = (unsigned __int64)(v143 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v203 = (char *)v142 - v202;
      v204 = (char *)(s2 - v203);
      v205 = ((_DWORD)v203 + v186) & 0xFFFFFFF8;
      if ( v205 >= 8 )
      {
        v206 = v205 & 0xFFFFFFF8;
        v207 = 0;
        do
        {
          v208 = v207;
          v207 += 8;
          *(_QWORD *)(v202 + v208) = *(_QWORD *)&v204[v208];
        }
        while ( v207 < v206 );
      }
    }
    else if ( (v186 & 4) != 0 )
    {
      *((_DWORD *)v143 + 4) = *(_DWORD *)s2;
      *(_DWORD *)((char *)v142 + v186 - 4) = *(_DWORD *)&s2[v186 - 4];
    }
    else if ( (_DWORD)v144 != -1 )
    {
      *((_BYTE *)v143 + 16) = s2[0];
      if ( (v186 & 2) != 0 )
        *(_WORD *)((char *)v142 + v186 - 2) = *(_WORD *)&s2[v186 - 2];
    }
  }
  else
  {
    *v141 = v253;
    v141[2] = *(_QWORD *)s2;
  }
  v143[1] = v144;
  v253 = s2;
  v254 = 0;
  s2[0] = 0;
  v145 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v145 = 3;
  *(_QWORD *)(v145 + 8) = v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v253 != s2 )
    operator delete(v253, *(_QWORD *)s2 + 1LL);
  func = (__int64 *)get_func();
  if ( func )
  {
    v147 = *func;
    v233 = nullptr;
    v234 = 0;
    if ( get_func_name() > 0 )
    {
      if ( (_QWORD)v234 )
        ida_mcp::tools::switches::`anonymous namespace'::handle_enumerate_switch_cases(
          (__int64)&v233,
          v147,
          v148,
          v149,
          v150,
          v151,
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
          a73,
          a74,
          a75,
          a76,
          a77,
          a78,
          a79,
          a80,
          a81,
          a82,
          a83,
          a84,
          a85,
          a86,
          a87,
          a88,
          a89,
          a90,
          a91,
          a92,
          a93,
          a94,
          a95,
          a96,
          a97);
      v256 = s1;
      v182 = s1;
      v183 = 0;
      goto LABEL_61;
    }
    qsnprintf();
    v256 = s1;
    v183 = strlen(v265);
    v232 = v183;
    v187 = v183;
    if ( v183 > 0xF )
    {
      v217 = (_QWORD *)std::string::_M_create();
      v256 = v217;
      s1[0] = v232;
    }
    else
    {
      if ( v183 == 1 )
      {
        LOBYTE(s1[0]) = v265[0];
        goto LABEL_126;
      }
      if ( !v183 )
      {
LABEL_126:
        v182 = s1;
LABEL_61:
        v257 = v183;
        *((_BYTE *)v182 + v183) = 0;
        if ( v233 )
        {
          *(_QWORD *)&v234 = 0;
          qfree();
        }
        v233 = nullptr;
        *(_QWORD *)&v234 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v152 = (_QWORD *)operator new(0x20u);
        v153 = v152 + 2;
        v154 = v152;
        v155 = v257;
        *v152 = v152 + 2;
        if ( v256 == s1 )
        {
          v209 = v155 + 1;
          if ( (unsigned int)(v155 + 1) >= 8 )
          {
            v154[2] = s1[0];
            *(_QWORD *)((char *)v153 + v209 - 8) = *(_QWORD *)((char *)&s1[-1] + v209);
            v210 = (unsigned __int64)(v154 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v211 = (char *)v153 - v210;
            v212 = (char *)((char *)s1 - v211);
            v213 = ((_DWORD)v211 + v209) & 0xFFFFFFF8;
            if ( v213 >= 8 )
            {
              v214 = v213 & 0xFFFFFFF8;
              v215 = 0;
              do
              {
                v216 = v215;
                v215 += 8;
                *(_QWORD *)(v210 + v216) = *(_QWORD *)&v212[v216];
              }
              while ( v215 < v214 );
            }
          }
          else if ( (v209 & 4) != 0 )
          {
            *((_DWORD *)v154 + 4) = s1[0];
            *(_DWORD *)((char *)v153 + v209 - 4) = *(_DWORD *)((char *)&v257 + v209 + 4);
          }
          else if ( (_DWORD)v155 != -1 )
          {
            *((_BYTE *)v154 + 16) = s1[0];
            if ( (v209 & 2) != 0 )
              *(_WORD *)((char *)v153 + v209 - 2) = *(_WORD *)((char *)&v257 + v209 + 6);
          }
        }
        else
        {
          *v152 = v256;
          v152[2] = s1[0];
        }
        v154[1] = v155;
        v256 = s1;
        v257 = 0;
        LOBYTE(s1[0]) = 0;
        v156 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v157 = *(_BYTE *)v156;
        v158 = *(_QWORD *)(v156 + 8);
        *(_BYTE *)v156 = 3;
        *(_QWORD *)(v156 + 8) = v154;
        LOBYTE(v233) = v157;
        *(_QWORD *)&v234 = v158;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v256 != s1 )
          operator delete(v256, s1[0] + 1LL);
        goto LABEL_67;
      }
      v217 = s1;
    }
    if ( v187 >= 8 )
    {
      *v217 = *(_QWORD *)v265;
      *(_QWORD *)((char *)v217 + v187 - 8) = *(_QWORD *)&v264[v187];
      v218 = (unsigned __int64)(v217 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v219 = (char *)v217 - v218;
      v220 = (char *)(v265 - v219);
      v221 = (v187 + (_DWORD)v219) & 0xFFFFFFF8;
      v222 = v220;
      if ( v221 >= 8 )
      {
        v223 = v221 & 0xFFFFFFF8;
        v224 = 0;
        do
        {
          v225 = v224;
          v224 += 8;
          *(_QWORD *)(v218 + v225) = *(_QWORD *)&v222[v225];
        }
        while ( v224 < v223 );
      }
    }
    else if ( (v187 & 4) != 0 )
    {
      *(_DWORD *)v217 = *(_DWORD *)v265;
      *(_DWORD *)((char *)v217 + v187 - 4) = *(_DWORD *)&v264[v187 + 4];
    }
    else if ( v187 )
    {
      *(_BYTE *)v217 = v265[0];
      if ( (v187 & 2) != 0 )
        *(_WORD *)((char *)v217 + v187 - 2) = *(_WORD *)&v264[v187 + 6];
    }
    v183 = v232;
    v182 = v256;
    goto LABEL_61;
  }
LABEL_67:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v245 )
  {
    *(_QWORD *)&v246 = 0;
    qfree();
  }
  return a1;
}

