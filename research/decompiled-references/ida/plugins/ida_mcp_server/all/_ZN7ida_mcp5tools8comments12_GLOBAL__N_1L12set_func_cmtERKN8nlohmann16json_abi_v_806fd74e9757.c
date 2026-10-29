_QWORD *__fastcall ida_mcp::tools::comments::`anonymous namespace'::set_func_cmt(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
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
        int a76,
        int a77,
        char a78,
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
        char a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        int a105,
        int a106,
        int a107,
        int a108,
        int a109,
        int a110,
        int a111,
        int a112,
        int a113,
        int a114,
        int a115,
        int a116,
        __int64 a117)
{
  void *v117; // rbp
  const char *v118; // rbx
  void *v119; // rbp
  const char *v120; // rbx
  void *v121; // rbp
  const char *v122; // rbx
  void *exception; // rbp
  const char *v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // r14
  __int64 v128; // r15
  size_t v129; // rdx
  int v130; // eax
  unsigned __int64 v131; // rbp
  unsigned __int64 v132; // rbx
  size_t v133; // rdx
  int v134; // eax
  char *v135; // r14
  int *v136; // rax
  int *v137; // r15
  std::runtime_error *v138; // rbx
  __int64 v139; // rax
  __int64 v140; // r14
  __int64 v141; // r15
  __int64 v142; // rbp
  size_t v143; // rdx
  int v144; // eax
  unsigned __int64 v145; // rbx
  unsigned __int64 v146; // r14
  size_t v147; // rdx
  int v148; // eax
  unsigned __int8 v149; // r15
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  size_t v155; // rax
  unsigned int v156; // ebx
  _QWORD *v157; // rdx
  _QWORD *v158; // rax
  _QWORD *v159; // rdx
  _QWORD *v160; // rcx
  size_t v161; // rsi
  __int64 v162; // rax
  _BYTE *v163; // r13
  unsigned __int64 v164; // r14
  _QWORD *v165; // rax
  _BYTE *v166; // rdi
  __int64 *v167; // rbx
  __m128i v168; // xmm0
  size_t v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  size_t v172; // rax
  unsigned int v173; // r13d
  _QWORD *v174; // rdx
  _QWORD *v175; // rax
  _QWORD *v176; // rdx
  _QWORD *v177; // rcx
  size_t v178; // rsi
  __int64 v179; // rax
  _BYTE *v180; // r14
  unsigned __int64 v181; // r13
  _QWORD *v182; // rax
  _BYTE *v183; // rdi
  __int64 *v184; // rbx
  __m128i v185; // xmm0
  size_t v186; // rcx
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  char *v190; // r13
  _QWORD *v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // rax
  unsigned __int64 v195; // rax
  __int64 v196; // rax
  size_t v197; // rax
  unsigned __int64 v198; // rcx
  char *v199; // rax
  char *v200; // rbx
  unsigned int v201; // r13d
  unsigned int v202; // r13d
  unsigned int v203; // eax
  __int64 v204; // rdx
  unsigned __int64 v205; // rcx
  char *v206; // rax
  char *v207; // rsi
  unsigned int v208; // ebx
  unsigned int v209; // ebx
  unsigned int v210; // eax
  __int64 v211; // rdx
  unsigned int v212; // edi
  unsigned int v213; // edi
  unsigned __int64 v214; // r8
  char *v215; // rcx
  char *v216; // r9
  unsigned int v217; // edx
  unsigned int v218; // ecx
  __int64 v219; // rdi
  unsigned __int64 v220; // r8
  char *v221; // rcx
  char *v222; // r9
  unsigned int v223; // edx
  unsigned int v224; // ecx
  __int64 v225; // rdi
  __int64 v226; // [rsp+8h] [rbp-3B0h]
  __m128i v228; // [rsp+50h] [rbp-368h] BYREF
  __m128i *v229; // [rsp+60h] [rbp-358h]
  __int128 *v230; // [rsp+68h] [rbp-350h]
  __int128 *v231; // [rsp+70h] [rbp-348h]
  __m128i *v232; // [rsp+78h] [rbp-340h]
  _QWORD *v233; // [rsp+80h] [rbp-338h]
  _QWORD *v234; // [rsp+88h] [rbp-330h]
  unsigned __int8 v235; // [rsp+97h] [rbp-321h]
  void **v236; // [rsp+98h] [rbp-320h]
  void **v237; // [rsp+A0h] [rbp-318h]
  char *v238; // [rsp+A8h] [rbp-310h]
  char *v239; // [rsp+B0h] [rbp-308h]
  char *v240; // [rsp+B8h] [rbp-300h]
  __m128i v241; // [rsp+C0h] [rbp-2F8h] BYREF
  unsigned __int64 v242; // [rsp+D0h] [rbp-2E8h]
  size_t v243; // [rsp+D8h] [rbp-2E0h]
  char *s; // [rsp+E0h] [rbp-2D8h]
  __int128 v245; // [rsp+E8h] [rbp-2D0h]
  void *v246; // [rsp+100h] [rbp-2B8h]
  unsigned __int64 v247; // [rsp+108h] [rbp-2B0h]
  _QWORD v248[2]; // [rsp+110h] [rbp-2A8h] BYREF
  void *src; // [rsp+120h] [rbp-298h]
  unsigned __int64 v250; // [rsp+128h] [rbp-290h]
  _QWORD v251[2]; // [rsp+130h] [rbp-288h] BYREF
  void *v252; // [rsp+140h] [rbp-278h] BYREF
  size_t v253; // [rsp+148h] [rbp-270h]
  _QWORD v254[2]; // [rsp+150h] [rbp-268h] BYREF
  void *v255; // [rsp+160h] [rbp-258h] BYREF
  size_t v256; // [rsp+168h] [rbp-250h]
  _QWORD v257[2]; // [rsp+170h] [rbp-248h] BYREF
  char v258; // [rsp+180h] [rbp-238h] BYREF
  int v259[4]; // [rsp+188h] [rbp-230h]
  char v260; // [rsp+198h] [rbp-220h]
  int v261[4]; // [rsp+1A0h] [rbp-218h]
  char v262; // [rsp+1B0h] [rbp-208h] BYREF
  char v263[16]; // [rsp+1B8h] [rbp-200h]
  char v264; // [rsp+1C8h] [rbp-1F0h]
  __m128i v265; // [rsp+1D0h] [rbp-1E8h] BYREF
  char v266; // [rsp+1E0h] [rbp-1D8h] BYREF
  __int128 v267; // [rsp+1E8h] [rbp-1D0h] BYREF
  char v268; // [rsp+1F8h] [rbp-1C0h]
  __int128 v269; // [rsp+200h] [rbp-1B8h] BYREF
  char v270; // [rsp+210h] [rbp-1A8h] BYREF
  __int128 v271; // [rsp+218h] [rbp-1A0h] BYREF
  char v272; // [rsp+228h] [rbp-190h]
  __m128i v273; // [rsp+230h] [rbp-188h] BYREF
  char v274; // [rsp+240h] [rbp-178h] BYREF
  __int128 v275; // [rsp+248h] [rbp-170h]
  char v276; // [rsp+258h] [rbp-160h]
  __int64 v277; // [rsp+260h] [rbp-158h]
  __int64 v278; // [rsp+268h] [rbp-150h]
  void *v279; // [rsp+270h] [rbp-148h] BYREF
  __int128 s2; // [rsp+278h] [rbp-140h] BYREF
  char v281; // [rsp+288h] [rbp-130h] BYREF
  __int64 v282; // [rsp+290h] [rbp-128h]
  __int64 v283; // [rsp+298h] [rbp-120h]
  __m128i v284; // [rsp+2A0h] [rbp-118h] BYREF
  __int64 v285; // [rsp+2B0h] [rbp-108h] BYREF
  _QWORD v286[3]; // [rsp+2B8h] [rbp-100h] BYREF
  _QWORD v287[3]; // [rsp+2D0h] [rbp-E8h] BYREF
  _QWORD v288[3]; // [rsp+2E8h] [rbp-D0h] BYREF
  _QWORD v289[3]; // [rsp+300h] [rbp-B8h] BYREF
  _QWORD v290[2]; // [rsp+318h] [rbp-A0h] BYREF
  __int64 v291; // [rsp+328h] [rbp-90h]
  int v292[6]; // [rsp+330h] [rbp-88h] BYREF
  _BYTE v293[8]; // [rsp+348h] [rbp-70h]
  char v294[40]; // [rsp+350h] [rbp-68h] BYREF
  unsigned __int64 v295; // [rsp+378h] [rbp-40h]

  v295 = __readfsqword(0x28u);
  v279 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v124 = "null";
        break;
      case 1:
        v124 = "object";
        break;
      case 2:
        v124 = "array";
        break;
      case 3:
        v124 = "string";
        break;
      case 4:
        v124 = "boolean";
        break;
      case 8:
        v124 = "binary";
        break;
      case 9:
        v124 = "discarded";
        break;
      default:
        v124 = "number";
        break;
    }
    v284.m128i_i64[0] = (__int64)&v285;
    v284.m128i_i64[1] = 0;
    LOBYTE(v285) = 0;
    strlen(v124);
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
  v125 = *(_QWORD *)(a2 + 8);
  v126 = *(_QWORD *)(v125 + 16);
  v127 = v125 + 8;
  if ( v126 )
  {
    v128 = v125 + 8;
    do
    {
      while ( 1 )
      {
        v131 = *(_QWORD *)(v126 + 40);
        if ( !v131 )
          break;
        v129 = 7;
        if ( v131 <= 7 )
          v129 = *(_QWORD *)(v126 + 40);
        v130 = memcmp(*(const void **)(v126 + 32), (char *)&s2 + 8, v129);
        if ( v130 || (v130 = v131 - 7, (__int64)(v131 - 7) <= 0x7FFFFFFF) )
        {
          if ( v130 < 0 )
            break;
        }
        v128 = v126;
        v126 = *(_QWORD *)(v126 + 16);
        if ( !v126 )
          goto LABEL_12;
      }
      v126 = *(_QWORD *)(v126 + 24);
    }
    while ( v126 );
LABEL_12:
    if ( v127 != v128 )
    {
      v132 = *(_QWORD *)(v128 + 40);
      if ( v132 )
      {
        v133 = 7;
        if ( v132 <= 7 )
          v133 = *(_QWORD *)(v128 + 40);
        v134 = memcmp((char *)&s2 + 8, *(const void **)(v128 + 32), v133);
        if ( v134 || (v134 = 7 - v132, (__int64)(7 - v132) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v134 >= 0 )
            v127 = v128;
        }
      }
      else
      {
        v127 = v128;
      }
    }
  }
  v279 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v127 + 64) != 3 )
  {
    v117 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v127 + 64) )
    {
      case 0:
        v118 = "null";
        break;
      case 1:
        v118 = "object";
        break;
      case 2:
        v118 = "array";
        break;
      case 3:
        v118 = "string";
        break;
      case 4:
        v118 = "boolean";
        break;
      case 8:
        v118 = "binary";
        break;
      case 9:
        v118 = "discarded";
        break;
      default:
        v118 = "number";
        break;
    }
    LOBYTE(v285) = 0;
    v284.m128i_i64[1] = 0;
    v284.m128i_i64[0] = (__int64)&v285;
    strlen(v118);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v117,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v117,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v135 = (char *)v279;
  v136 = __errno_location();
  *v136 = 0;
  v137 = v136;
  v226 = __isoc23_strtoull();
  if ( v135 == s || *s || *v137 == 34 && v226 == -1 )
  {
    if ( v279 != (char *)&s2 + 8 )
      operator delete(v279, *((_QWORD *)&s2 + 1) + 1LL);
    v138 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v138, "Invalid address format");
    __cxa_throw(
      v138,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v279 != (char *)&s2 + 8 )
    operator delete(v279, *((_QWORD *)&s2 + 1) + 1LL);
  DWORD2(s2) = 1835888483;
  v279 = (char *)&s2 + 8;
  *(_DWORD *)((char *)&s2 + 11) = 1953391981;
  *(_QWORD *)&s2 = 7;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    v119 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v120 = "null";
        break;
      case 1:
        v120 = "object";
        break;
      case 2:
        v120 = "array";
        break;
      case 3:
        v120 = "string";
        break;
      case 4:
        v120 = "boolean";
        break;
      case 8:
        v120 = "binary";
        break;
      case 9:
        v120 = "discarded";
        break;
      default:
        v120 = "number";
        break;
    }
    LOBYTE(v285) = 0;
    v284.m128i_i64[1] = 0;
    v284.m128i_i64[0] = (__int64)&v285;
    strlen(v120);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v119,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v119,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v139 = *(_QWORD *)(a2 + 8);
  v140 = *(_QWORD *)(v139 + 16);
  v141 = v139 + 8;
  if ( v140 )
  {
    v142 = v139 + 8;
    do
    {
      while ( 1 )
      {
        v145 = *(_QWORD *)(v140 + 40);
        if ( !v145 )
          break;
        v143 = 7;
        if ( v145 <= 7 )
          v143 = *(_QWORD *)(v140 + 40);
        v144 = memcmp(*(const void **)(v140 + 32), (char *)&s2 + 8, v143);
        if ( v144 || (v144 = v145 - 7, (__int64)(v145 - 7) <= 0x7FFFFFFF) )
        {
          if ( v144 < 0 )
            break;
        }
        v142 = v140;
        v140 = *(_QWORD *)(v140 + 16);
        if ( !v140 )
          goto LABEL_41;
      }
      v140 = *(_QWORD *)(v140 + 24);
    }
    while ( v140 );
LABEL_41:
    if ( v141 != v142 )
    {
      v146 = *(_QWORD *)(v142 + 40);
      if ( v146 )
      {
        v147 = 7;
        if ( v146 <= 7 )
          v147 = *(_QWORD *)(v142 + 40);
        v148 = memcmp((char *)&s2 + 8, *(const void **)(v142 + 32), v147);
        if ( v148 || (v148 = 7 - v146, (__int64)(7 - v146) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v148 >= 0 )
            v141 = v142;
        }
      }
      else
      {
        v141 = v142;
      }
    }
  }
  LOBYTE(v248[0]) = 0;
  v233 = v248;
  v246 = v248;
  v247 = 0;
  if ( *(_BYTE *)(v141 + 64) != 3 )
  {
    v121 = __cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v141 + 64) )
    {
      case 0:
        v122 = "null";
        break;
      case 1:
        v122 = "object";
        break;
      case 2:
        v122 = "array";
        break;
      case 3:
        v122 = "string";
        break;
      case 4:
        v122 = "boolean";
        break;
      case 8:
        v122 = "binary";
        break;
      case 9:
        v122 = "discarded";
        break;
      default:
        v122 = "number";
        break;
    }
    v284.m128i_i64[0] = (__int64)&v285;
    v284.m128i_i64[1] = 0;
    LOBYTE(v285) = 0;
    strlen(v122);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)v121,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v121,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  LOBYTE(s) = 0;
  v149 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[11],bool,0>();
  if ( !get_func() )
    ida_mcp::tools::comments::`anonymous namespace'::set_func_cmt(
      v226,
      (__int64)"repeatable",
      v150,
      v151,
      v152,
      v153,
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
      a97,
      a98,
      a99,
      a100,
      a101,
      a102,
      a103,
      a104,
      a105,
      a106,
      a107,
      a108,
      a109,
      a110,
      a111,
      a112,
      a113,
      a114,
      a115,
      a116,
      a117);
  LOBYTE(v251[0]) = 0;
  v234 = v251;
  src = v251;
  s = nullptr;
  v250 = 0;
  v245 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    strlen(v294);
    std::string::_M_replace();
  }
  else
  {
    if ( (_QWORD)v245 )
      strlen(s);
    std::string::_M_replace();
  }
  v235 = set_func_cmt();
  v258 = 0;
  *(_QWORD *)v259 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v258 = 3;
  v154 = operator new(0x20u);
  strcpy((char *)(v154 + 16), "query_address");
  *(_QWORD *)v154 = v154 + 16;
  *(_QWORD *)(v154 + 8) = 13;
  *(_OWORD *)v259 = (unsigned __int64)v154;
  qsnprintf();
  v236 = &v252;
  v252 = v254;
  v155 = strlen((const char *)v292);
  v243 = v155;
  v156 = v155;
  if ( v155 > 0xF )
  {
    v192 = (_QWORD *)std::string::_M_create();
    v252 = v192;
    v254[0] = v243;
  }
  else
  {
    if ( v155 == 1 )
    {
      LOBYTE(v254[0]) = v292[0];
      goto LABEL_58;
    }
    if ( !v155 )
    {
LABEL_58:
      v157 = v254;
      goto LABEL_59;
    }
    v192 = v254;
  }
  if ( v156 >= 8 )
  {
    *v192 = *(_QWORD *)v292;
    *(_QWORD *)((char *)v192 + v156 - 8) = *(_QWORD *)((char *)&v292[-2] + v156);
    v205 = (unsigned __int64)(v192 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v206 = (char *)v192 - v205;
    v207 = (char *)((char *)v292 - v206);
    v208 = ((_DWORD)v206 + v156) & 0xFFFFFFF8;
    if ( v208 >= 8 )
    {
      v209 = v208 & 0xFFFFFFF8;
      v210 = 0;
      do
      {
        v211 = v210;
        v210 += 8;
        *(_QWORD *)(v205 + v211) = *(_QWORD *)&v207[v211];
      }
      while ( v210 < v209 );
    }
  }
  else if ( (v156 & 4) != 0 )
  {
    *(_DWORD *)v192 = v292[0];
    *(_DWORD *)((char *)v192 + v156 - 4) = *(int *)((char *)&v292[-1] + v156);
  }
  else if ( v156 )
  {
    *(_BYTE *)v192 = v292[0];
    if ( (v156 & 2) != 0 )
      *(_WORD *)((char *)v192 + v156 - 2) = *(_WORD *)((char *)&v291 + v156 + 6);
  }
  v155 = v243;
  v157 = v252;
LABEL_59:
  v253 = v155;
  *((_BYTE *)v157 + v155) = 0;
  v260 = 0;
  *(_QWORD *)v261 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v260 = 3;
  v158 = (_QWORD *)operator new(0x20u);
  v159 = v252;
  v160 = v158 + 2;
  v161 = v253;
  *v158 = v158 + 2;
  if ( v159 == v254 )
  {
    v212 = v161 + 1;
    if ( (unsigned int)(v161 + 1) >= 8 )
    {
      v158[2] = v254[0];
      *(_QWORD *)((char *)v160 + v212 - 8) = *(_QWORD *)((char *)&v254[-1] + v212);
      v214 = (unsigned __int64)(v158 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v215 = (char *)v160 - v214;
      v216 = (char *)((char *)v254 - v215);
      if ( (((_DWORD)v215 + v212) & 0xFFFFFFF8) >= 8 )
      {
        v217 = ((_DWORD)v215 + v212) & 0xFFFFFFF8;
        v218 = 0;
        do
        {
          v219 = v218;
          v218 += 8;
          *(_QWORD *)(v214 + v219) = *(_QWORD *)&v216[v219];
        }
        while ( v218 < v217 );
      }
    }
    else if ( (v212 & 4) != 0 )
    {
      *((_DWORD *)v158 + 4) = v254[0];
      *(_DWORD *)((char *)v160 + v212 - 4) = *(_DWORD *)((char *)&v253 + v212 + 4);
    }
    else if ( (_DWORD)v161 != -1 )
    {
      *((_BYTE *)v158 + 16) = v254[0];
      if ( (v212 & 2) != 0 )
        *(_WORD *)((char *)v160 + v212 - 2) = *(_WORD *)((char *)&v253 + v212 + 6);
    }
  }
  else
  {
    *v158 = v159;
    v158[2] = v254[0];
  }
  v158[1] = v161;
  v238 = &v258;
  v252 = v254;
  v253 = 0;
  LOBYTE(v254[0]) = 0;
  *(_OWORD *)v261 = (unsigned __int64)v158;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v284,
    (const __m128i *)&v258);
  v285 = 0;
  v262 = 0;
  *(_QWORD *)v263 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v262 = 3;
  v162 = operator new(0x20u);
  strcpy((char *)(v162 + 16), "function_name");
  *(_QWORD *)v162 = v162 + 16;
  *(_QWORD *)(v162 + 8) = 13;
  v264 = 0;
  v265.m128i_i64[0] = 0;
  v229 = &v265;
  *(_OWORD *)v263 = (unsigned __int64)v162;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v264 = 3;
  v163 = src;
  v164 = v250;
  v165 = (_QWORD *)operator new(0x20u);
  v166 = v165 + 2;
  v242 = v164;
  v167 = v165;
  *v165 = v165 + 2;
  if ( v164 <= 0xF )
  {
    v168 = (__m128i)(unsigned __int64)v165;
    v169 = v164 + 1;
    if ( v164 )
    {
LABEL_63:
      v228 = v168;
      memcpy(v166, v163, v169);
      v170 = v242;
      v168 = _mm_load_si128(&v228);
      goto LABEL_64;
    }
    goto LABEL_90;
  }
  v194 = std::string::_M_create();
  *v167 = v194;
  v166 = (_BYTE *)v194;
  v195 = v242;
  v168 = (__m128i)(unsigned __int64)v167;
  v167[2] = v242;
  v169 = v195 + 1;
  if ( !v195 )
  {
LABEL_90:
    *v166 = *v163;
    v170 = v242;
    goto LABEL_64;
  }
  v170 = -1;
  if ( v169 )
    goto LABEL_63;
LABEL_64:
  v167[1] = v170;
  v240 = &v262;
  v265 = v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v286,
    (const __m128i *)&v262);
  v286[2] = 0;
  v266 = 0;
  *(_QWORD *)&v267 = 0;
  v228.m128i_i64[0] = (__int64)&v267;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v266 = 3;
  v171 = operator new(0x20u);
  *(_QWORD *)v171 = v171 + 16;
  strcpy((char *)(v171 + 16), "function_start");
  *(_QWORD *)(v171 + 8) = 14;
  v267 = (unsigned __int64)v171;
  qsnprintf();
  v237 = &v255;
  v255 = v257;
  v172 = strlen(v294);
  v243 = v172;
  v173 = v172;
  if ( v172 > 0xF )
  {
    v193 = (_QWORD *)std::string::_M_create();
    v255 = v193;
    v257[0] = v243;
  }
  else
  {
    if ( v172 == 1 )
    {
      LOBYTE(v257[0]) = v294[0];
      goto LABEL_67;
    }
    if ( !v172 )
    {
LABEL_67:
      v174 = v257;
      goto LABEL_68;
    }
    v193 = v257;
  }
  if ( v173 >= 8 )
  {
    *v193 = *(_QWORD *)v294;
    *(_QWORD *)((char *)v193 + v173 - 8) = *(_QWORD *)&v293[v173];
    v198 = (unsigned __int64)(v193 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v199 = (char *)v193 - v198;
    v200 = (char *)(v294 - v199);
    v201 = ((_DWORD)v199 + v173) & 0xFFFFFFF8;
    if ( v201 >= 8 )
    {
      v202 = v201 & 0xFFFFFFF8;
      v203 = 0;
      do
      {
        v204 = v203;
        v203 += 8;
        *(_QWORD *)(v198 + v204) = *(_QWORD *)&v200[v204];
      }
      while ( v203 < v202 );
    }
  }
  else if ( (v173 & 4) != 0 )
  {
    *(_DWORD *)v193 = *(_DWORD *)v294;
    *(_DWORD *)((char *)v193 + v173 - 4) = *(_DWORD *)&v293[v173 + 4];
  }
  else if ( v173 )
  {
    *(_BYTE *)v193 = v294[0];
    if ( (v173 & 2) != 0 )
      *(_WORD *)((char *)v193 + v173 - 2) = *(_WORD *)&v293[v173 + 6];
  }
  v172 = v243;
  v174 = v255;
LABEL_68:
  v256 = v172;
  *((_BYTE *)v174 + v172) = 0;
  v268 = 0;
  *(_QWORD *)&v269 = 0;
  v230 = &v269;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v268 = 3;
  v175 = (_QWORD *)operator new(0x20u);
  v176 = v255;
  v177 = v175 + 2;
  v178 = v256;
  *v175 = v175 + 2;
  if ( v176 == v257 )
  {
    v213 = v178 + 1;
    if ( (unsigned int)(v178 + 1) >= 8 )
    {
      v175[2] = v257[0];
      *(_QWORD *)((char *)v177 + v213 - 8) = *(_QWORD *)((char *)&v257[-1] + v213);
      v220 = (unsigned __int64)(v175 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v221 = (char *)v177 - v220;
      v222 = (char *)((char *)v257 - v221);
      if ( (((_DWORD)v221 + v213) & 0xFFFFFFF8) >= 8 )
      {
        v223 = ((_DWORD)v221 + v213) & 0xFFFFFFF8;
        v224 = 0;
        do
        {
          v225 = v224;
          v224 += 8;
          *(_QWORD *)(v220 + v225) = *(_QWORD *)&v222[v225];
        }
        while ( v224 < v223 );
      }
    }
    else if ( (v213 & 4) != 0 )
    {
      *((_DWORD *)v175 + 4) = v257[0];
      *(_DWORD *)((char *)v177 + v213 - 4) = *(_DWORD *)((char *)&v256 + v213 + 4);
    }
    else if ( (_DWORD)v178 != -1 )
    {
      *((_BYTE *)v175 + 16) = v257[0];
      if ( (v213 & 2) != 0 )
        *(_WORD *)((char *)v177 + v213 - 2) = *(_WORD *)((char *)&v256 + v213 + 6);
    }
  }
  else
  {
    *v175 = v176;
    v175[2] = v257[0];
  }
  v175[1] = v178;
  v255 = v257;
  v256 = 0;
  LOBYTE(v257[0]) = 0;
  v239 = &v266;
  v269 = (unsigned __int64)v175;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v287,
    (const __m128i *)&v266);
  v287[2] = 0;
  v270 = 0;
  *(_QWORD *)&v271 = 0;
  v231 = &v271;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v270 = 3;
  v179 = operator new(0x20u);
  strcpy((char *)(v179 + 16), "comment");
  *(_QWORD *)v179 = v179 + 16;
  *(_QWORD *)(v179 + 8) = 7;
  v272 = 0;
  v273.m128i_i64[0] = 0;
  v232 = &v273;
  v271 = (unsigned __int64)v179;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v272 = 3;
  v180 = v246;
  v181 = v247;
  v182 = (_QWORD *)operator new(0x20u);
  v183 = v182 + 2;
  v243 = v181;
  v184 = v182;
  *v182 = v182 + 2;
  if ( v181 > 0xF )
  {
    v196 = std::string::_M_create();
    *v184 = v196;
    v183 = (_BYTE *)v196;
    v197 = v243;
    v185 = (__m128i)(unsigned __int64)v184;
    v184[2] = v243;
    v186 = v197 + 1;
    if ( v197 )
    {
      v187 = -1;
      if ( !v186 )
        goto LABEL_73;
      goto LABEL_72;
    }
LABEL_88:
    *v183 = *v180;
    v187 = v243;
    goto LABEL_73;
  }
  v185 = (__m128i)(unsigned __int64)v182;
  v186 = v181 + 1;
  if ( !v181 )
    goto LABEL_88;
LABEL_72:
  v241 = v185;
  memcpy(v183, v180, v186);
  v187 = v243;
  v185 = _mm_load_si128(&v241);
LABEL_73:
  v184[1] = v187;
  v241.m128i_i64[0] = (__int64)&v270;
  v273 = v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v288,
    (const __m128i *)&v270);
  v288[2] = 0;
  v274 = 0;
  *(_QWORD *)&v275 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v274 = 3;
  v188 = operator new(0x20u);
  *(_QWORD *)v188 = v188 + 16;
  strcpy((char *)(v188 + 16), "repeatable");
  *(_QWORD *)(v188 + 8) = 10;
  v276 = 4;
  v277 = v149;
  v278 = 0;
  v275 = (unsigned __int64)v188;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v289,
    (const __m128i *)&v274);
  v289[2] = 0;
  LOBYTE(v279) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v279) = 3;
  v189 = operator new(0x20u);
  strcpy((char *)(v189 + 16), "success");
  v190 = (char *)v290;
  *(_QWORD *)v189 = v189 + 16;
  *(_QWORD *)(v189 + 8) = 7;
  v281 = 4;
  v282 = v235;
  v283 = 0;
  s2 = (unsigned __int64)v189;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v290,
    (const __m128i *)&v279);
  v291 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v284,
    6);
  do
  {
    v190 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v190 != &v281 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v255 != v257 )
    operator delete(v255, v257[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v252 != v254 )
    operator delete(v252, v254[0] + 1LL);
  if ( src != v234 )
    operator delete(src, v251[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v245 = 0;
    qfree();
  }
  if ( v246 != v233 )
    operator delete(v246, v248[0] + 1LL);
  return a1;
}

