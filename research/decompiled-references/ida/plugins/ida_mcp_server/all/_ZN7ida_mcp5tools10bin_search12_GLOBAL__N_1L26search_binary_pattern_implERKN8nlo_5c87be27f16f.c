__int64 __fastcall ida_mcp::tools::bin_search::`anonymous namespace'::search_binary_pattern_impl(
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        char a26,
        char a27,
        int a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char a38,
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
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        __int64 a105)
{
  char *v105; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v107; // rbp
  char *v108; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v109; // r12
  char *v110; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v111; // r12
  char *v112; // rax
  const char *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rbp
  __int64 v116; // r13
  __int64 v117; // r14
  size_t v118; // rdx
  int v119; // eax
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // rbp
  size_t v122; // rdx
  int v123; // eax
  char v124; // al
  int v125; // eax
  int v126; // edx
  unsigned __int64 v127; // r14
  __int64 *v128; // rbp
  __int8 v129; // al
  __m128i v130; // xmm0
  __int64 v131; // rax
  __int8 v132; // si
  __int64 v133; // rax
  char v134; // r13
  unsigned __int64 v135; // rax
  unsigned __int64 binary; // r14
  __int64 *func; // rbx
  __int64 v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  double *v143; // rdx
  size_t v144; // rax
  double *v145; // rax
  double *v146; // rdx
  __int64 v147; // rdi
  double v148; // rsi
  __int64 v149; // rax
  size_t v150; // rax
  unsigned int v151; // r12d
  _QWORD *v152; // rdx
  _QWORD *v153; // rax
  _QWORD *v154; // rdx
  _QWORD *v155; // rcx
  size_t v156; // rsi
  __int64 v157; // rax
  _QWORD *v158; // rax
  unsigned __int64 v159; // rdx
  _BYTE *v160; // rdi
  size_t v161; // rcx
  __int64 v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rax
  _BYTE *v165; // rbp
  unsigned __int64 v166; // r12
  _QWORD *v167; // rax
  _BYTE *v168; // rdi
  __int64 *v169; // rbx
  __m128i si128; // xmm0
  size_t v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  bool v177; // al
  __int64 v178; // rax
  _BYTE *v179; // r12
  size_t v180; // rbp
  double *v181; // rdi
  unsigned int v182; // edi
  unsigned int v183; // r12d
  __int64 v184; // rax
  unsigned __int64 v185; // rax
  unsigned __int64 v186; // rdx
  char *v187; // rax
  char *v188; // rbp
  unsigned int v189; // r12d
  unsigned int v190; // r12d
  unsigned int v191; // eax
  __int64 v192; // rcx
  __int64 v193; // rdi
  __int64 v194; // rax
  __int64 v195; // rax
  unsigned __int64 v196; // r8
  char *v197; // rcx
  char *v198; // r9
  unsigned int v199; // edx
  unsigned int v200; // ecx
  __int64 v201; // rdi
  __m128i *v202; // rbp
  double *v204; // rdx
  __int64 v205; // rax
  __int64 v206; // r13
  __int64 v207; // r15
  __int64 v208; // rbp
  size_t v209; // rdx
  int v210; // eax
  unsigned __int64 v211; // rbx
  void *v212; // rbx
  unsigned __int64 v213; // rbp
  size_t v214; // rdx
  int v215; // eax
  nlohmann::json_abi_v3_12_0::detail::type_error *v216; // r15
  __int64 v217; // rbp
  size_t v218; // rdx
  int v219; // eax
  unsigned __int64 v220; // rbx
  unsigned __int64 v221; // rbp
  size_t v222; // rdx
  int v223; // eax
  nlohmann::json_abi_v3_12_0::detail::type_error *v224; // r15
  size_t v225; // rdx
  int v226; // eax
  unsigned __int64 v227; // rbx
  void *v228; // rbx
  unsigned __int64 v229; // rbp
  size_t v230; // rax
  int v231; // eax
  char *v232; // rbp
  int *v233; // rax
  int *v234; // r13
  __int64 v235; // rax
  __int64 v236; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v237; // r14
  size_t v238; // rdx
  int v239; // eax
  unsigned __int64 v240; // r15
  unsigned __int64 v241; // rbp
  size_t v242; // rax
  int v243; // eax
  char *v244; // rbp
  int *v245; // rax
  int *v246; // r13
  __int64 v247; // rax
  unsigned __int64 v248; // rcx
  char *v249; // rdx
  char *v250; // rbp
  unsigned int v251; // eax
  unsigned int v252; // edx
  __int64 v253; // rsi
  unsigned __int64 v254; // rcx
  _BYTE *v255; // rax
  char *v256; // r8
  unsigned int v257; // edx
  unsigned int v258; // eax
  __int64 v259; // rsi
  __int64 v260; // rax
  __int64 v261; // r8
  __m128i *v262; // rbp
  unsigned __int64 v263; // rdx
  __int64 v264; // rax
  char *v265; // rcx
  const void *v266; // rsi
  signed __int64 v267; // rdx
  char *v268; // rax
  __int64 v269; // rax
  __int64 v270; // rdx
  _QWORD *v271; // rax
  unsigned __int64 v272; // rdx
  _BYTE *v273; // rdi
  _QWORD *v274; // rbp
  size_t v275; // rcx
  __int64 v276; // rax
  _QWORD *v277; // rax
  __int64 *v278; // rdx
  unsigned __int64 v279; // rbp
  __int64 v280; // rax
  __int64 v281; // rdi
  _QWORD *v282; // rax
  __int64 v283; // rsi
  __int64 v284; // rcx
  __int64 v285; // rbp
  void *v286; // rax
  __int64 v287; // rax
  __int64 v288; // rcx
  int *v289; // rdi
  __int64 v290; // rax
  __int64 v291; // rcx
  __int64 v292; // rsi
  __int64 v293; // rdx
  __int64 v294; // rax
  __int64 v295; // rdx
  __int64 v296; // rax
  std::runtime_error *v297; // rbp
  std::runtime_error *v298; // rbp
  __int64 v299; // rax
  __int64 v300; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v301[2]; // [rsp+10h] [rbp-348h] BYREF
  int v302[2]; // [rsp+20h] [rbp-338h]
  char v303[8]; // [rsp+28h] [rbp-330h]
  int v304[2]; // [rsp+30h] [rbp-328h]
  void *v305; // [rsp+38h] [rbp-320h]
  int v306[2]; // [rsp+40h] [rbp-318h]
  unsigned __int64 v307; // [rsp+48h] [rbp-310h]
  int v308[2]; // [rsp+50h] [rbp-308h]
  char v309[8]; // [rsp+58h] [rbp-300h]
  void *src; // [rsp+60h] [rbp-2F8h]
  __int64 *v311; // [rsp+68h] [rbp-2F0h]
  __int64 v312; // [rsp+70h] [rbp-2E8h]
  void **v313; // [rsp+78h] [rbp-2E0h]
  _QWORD *v314; // [rsp+80h] [rbp-2D8h]
  int v315; // [rsp+88h] [rbp-2D0h]
  char v316; // [rsp+8Fh] [rbp-2C9h]
  unsigned __int64 v317; // [rsp+90h] [rbp-2C8h]
  __int64 v318; // [rsp+98h] [rbp-2C0h]
  char v319; // [rsp+A0h] [rbp-2B8h]
  int v320[2]; // [rsp+A8h] [rbp-2B0h]
  __m128i v321; // [rsp+B0h] [rbp-2A8h] BYREF
  __m128i v322[2]; // [rsp+C0h] [rbp-298h] BYREF
  void *v323; // [rsp+E0h] [rbp-278h] BYREF
  unsigned __int64 v324; // [rsp+E8h] [rbp-270h]
  _QWORD v325[2]; // [rsp+F0h] [rbp-268h] BYREF
  void *v326; // [rsp+100h] [rbp-258h]
  __m128 v327; // [rsp+108h] [rbp-250h] BYREF
  void *v328; // [rsp+120h] [rbp-238h] BYREF
  size_t v329; // [rsp+128h] [rbp-230h]
  _QWORD v330[10]; // [rsp+130h] [rbp-228h] BYREF
  __int64 v331; // [rsp+180h] [rbp-1D8h] BYREF
  int v332[4]; // [rsp+188h] [rbp-1D0h]
  char v333; // [rsp+198h] [rbp-1C0h]
  __m128i v334; // [rsp+1A0h] [rbp-1B8h]
  char v335; // [rsp+1B0h] [rbp-1A8h] BYREF
  int v336[4]; // [rsp+1B8h] [rbp-1A0h] BYREF
  char v337; // [rsp+1C8h] [rbp-190h]
  __int64 v338; // [rsp+1D0h] [rbp-188h]
  __int64 v339; // [rsp+1D8h] [rbp-180h]
  __int64 v340; // [rsp+1E0h] [rbp-178h] BYREF
  __int128 v341; // [rsp+1E8h] [rbp-170h]
  char v342; // [rsp+1F8h] [rbp-160h]
  __int64 v343; // [rsp+200h] [rbp-158h]
  __int64 v344; // [rsp+208h] [rbp-150h]
  int v345; // [rsp+210h] [rbp-148h] BYREF
  char v346[16]; // [rsp+218h] [rbp-140h] BYREF
  char v347; // [rsp+228h] [rbp-130h]
  int v348[4]; // [rsp+230h] [rbp-128h] BYREF
  void *v349; // [rsp+240h] [rbp-118h] BYREF
  __int128 s2; // [rsp+248h] [rbp-110h] BYREF
  __m128i v351; // [rsp+258h] [rbp-100h]
  __int64 v352; // [rsp+268h] [rbp-F0h]
  __m128i v353; // [rsp+270h] [rbp-E8h] BYREF
  double s1[2]; // [rsp+280h] [rbp-D8h] BYREF
  __int64 v355; // [rsp+298h] [rbp-C0h]
  _QWORD v356[3]; // [rsp+2A0h] [rbp-B8h] BYREF
  _QWORD v357[3]; // [rsp+2B8h] [rbp-A0h] BYREF
  _QWORD v358[3]; // [rsp+2D0h] [rbp-88h] BYREF
  char v359[8]; // [rsp+2E8h] [rbp-70h] BYREF
  char s[8]; // [rsp+2F0h] [rbp-68h] BYREF
  unsigned __int64 v361; // [rsp+318h] [rbp-40h]

  v312 = a1;
  v361 = __readfsqword(0x28u);
  v349 = (char *)&s2 + 8;
  DWORD2(s2) = 1953784176;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1852990836;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v113 = "null";
        break;
      case 1:
        v113 = "object";
        break;
      case 2:
        v113 = "array";
        break;
      case 3:
        v113 = "string";
        break;
      case 4:
        v113 = "boolean";
        break;
      case 8:
        v113 = "binary";
        break;
      case 9:
        v113 = "discarded";
        break;
      default:
        v113 = "number";
        break;
    }
    LOBYTE(s1[0]) = 0;
    v353.m128i_i64[0] = (__int64)s1;
    v353.m128i_i64[1] = 0;
    strlen(v113);
    std::string::reserve();
    std::string::append((__int64)&v353, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v353, v113);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v114 = *(_QWORD *)(a2 + 8);
  v115 = *(_QWORD *)(v114 + 16);
  v116 = v114 + 8;
  if ( v115 )
  {
    v117 = v114 + 8;
    do
    {
      while ( 1 )
      {
        v120 = *(_QWORD *)(v115 + 40);
        if ( !v120 )
          break;
        v118 = 7;
        if ( v120 <= 7 )
          v118 = *(_QWORD *)(v115 + 40);
        v119 = memcmp(*(const void **)(v115 + 32), (char *)&s2 + 8, v118);
        if ( v119 || (v119 = v120 - 7, (__int64)(v120 - 7) <= 0x7FFFFFFF) )
        {
          if ( v119 < 0 )
            break;
        }
        v117 = v115;
        v115 = *(_QWORD *)(v115 + 16);
        if ( !v115 )
          goto LABEL_12;
      }
      v115 = *(_QWORD *)(v115 + 24);
    }
    while ( v115 );
LABEL_12:
    if ( v116 != v117 )
    {
      v121 = *(_QWORD *)(v117 + 40);
      if ( v121 )
      {
        v122 = 7;
        if ( v121 <= 7 )
          v122 = *(_QWORD *)(v117 + 40);
        v123 = memcmp((char *)&s2 + 8, *(const void **)(v117 + 32), v122);
        if ( v123 || (v123 = 7 - v121, (__int64)(7 - v121) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v123 >= 0 )
            v116 = v117;
        }
      }
      else
      {
        v116 = v117;
      }
    }
  }
  LOBYTE(v325[0]) = 0;
  v313 = &v323;
  v314 = v325;
  v323 = v325;
  v124 = *(_BYTE *)(v116 + 64);
  v324 = 0;
  v316 = v124;
  if ( v124 != 3 )
  {
    v107 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v116 + 64) )
    {
      case 0:
        v108 = "null";
        break;
      case 1:
        v108 = "object";
        break;
      case 2:
        v108 = (char *)"array";
        break;
      case 3:
        v108 = "string";
        break;
      case 4:
        v108 = "boolean";
        break;
      case 8:
        v108 = "binary";
        break;
      case 9:
        v108 = "discarded";
        break;
      default:
        v108 = "number";
        break;
    }
    v322[0].m128i_i64[0] = (__int64)v108;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v107,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v107,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v322[0].m128i_i32[0] = 100;
  *(_QWORD *)v302 = v322;
  v125 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  v126 = 100;
  if ( v125 > 0 )
    v126 = v125;
  *(_DWORD *)v303 = v126;
  v127 = getinf();
  *(_QWORD *)v306 = getinf();
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_24;
  v205 = *(_QWORD *)(a2 + 8);
  v206 = *(_QWORD *)(v205 + 16);
  if ( !v206 )
    goto LABEL_24;
  v207 = v205 + 8;
  v305 = (char *)&s2 + 8;
  v208 = v206;
  v301[0] = (nlohmann::json_abi_v3_12_0::detail::type_error *)(v205 + 8);
  *(_QWORD *)v304 = v205 + 8;
  do
  {
    while ( 1 )
    {
      v211 = *(_QWORD *)(v208 + 40);
      if ( !v211 )
        break;
      v209 = 13;
      if ( v211 <= 0xD )
        v209 = *(_QWORD *)(v208 + 40);
      v210 = memcmp(*(const void **)(v208 + 32), "start_address", v209);
      if ( v210 || (v210 = v211 - 13, (__int64)(v211 - 13) <= 0x7FFFFFFF) )
      {
        if ( v210 < 0 )
          break;
      }
      v207 = v208;
      v208 = *(_QWORD *)(v208 + 16);
      if ( !v208 )
        goto LABEL_154;
    }
    v208 = *(_QWORD *)(v208 + 24);
  }
  while ( v208 );
LABEL_154:
  v212 = v305;
  if ( v301[0] != (nlohmann::json_abi_v3_12_0::detail::type_error *)v207 )
  {
    v213 = *(_QWORD *)(v207 + 40);
    if ( !v213 )
      goto LABEL_207;
    v214 = 13;
    if ( v213 <= 0xD )
      v214 = *(_QWORD *)(v207 + 40);
    v215 = memcmp(*(const void **)(v207 + 32), "start_address", v214);
    if ( v215 || (v215 = v213 - 13, (__int64)(v213 - 13) <= 0x7FFFFFFF) )
    {
      if ( v215 <= 0 )
      {
LABEL_207:
        v237 = v301[0];
        strcpy((char *)s1, "start_address");
        do
        {
          while ( 1 )
          {
            v240 = *(_QWORD *)(v206 + 40);
            if ( !v240 )
              break;
            v238 = 13;
            if ( v240 <= 0xD )
              v238 = *(_QWORD *)(v206 + 40);
            v239 = memcmp(*(const void **)(v206 + 32), s1, v238);
            if ( v239 || (v239 = v240 - 13, (__int64)(v240 - 13) <= 0x7FFFFFFF) )
            {
              if ( v239 < 0 )
                break;
            }
            v237 = (nlohmann::json_abi_v3_12_0::detail::type_error *)v206;
            v206 = *(_QWORD *)(v206 + 16);
            if ( !v206 )
              goto LABEL_216;
          }
          v206 = *(_QWORD *)(v206 + 24);
        }
        while ( v206 );
LABEL_216:
        if ( v301[0] != v237 )
        {
          v241 = *((_QWORD *)v237 + 5);
          if ( v241 )
          {
            v242 = 13;
            if ( v241 <= 0xD )
              v242 = *((_QWORD *)v237 + 5);
            v243 = memcmp(s1, *((const void **)v237 + 4), v242);
            if ( v243 || (v243 = 13 - v241, (__int64)(13 - v241) >= (__int64)0xFFFFFFFF80000000LL) )
            {
              if ( v243 < 0 )
                v237 = v301[0];
              *(_QWORD *)v304 = v237;
            }
          }
          else
          {
            *(_QWORD *)v304 = v237;
          }
        }
        v349 = v305;
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        if ( *(_BYTE *)(*(_QWORD *)v304 + 64LL) != 3 )
        {
          v111 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *(_BYTE *)(*(_QWORD *)v304 + 64LL) )
          {
            case 0:
              v112 = "null";
              break;
            case 1:
              v112 = "object";
              break;
            case 2:
              v112 = (char *)"array";
              break;
            case 3:
              v112 = "string";
              break;
            case 4:
              v112 = "boolean";
              break;
            case 8:
              v112 = "binary";
              break;
            case 9:
              v112 = "discarded";
              break;
            default:
              v112 = "number";
              break;
          }
          v322[0].m128i_i64[0] = (__int64)v112;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v111,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v111,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        v244 = (char *)v349;
        if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v349 == 48 && (*((_BYTE *)v349 + 1) & 0xDF) == 0x58 )
          v244 = (char *)v349 + 2;
        v245 = __errno_location();
        *v245 = 0;
        v246 = v245;
        v127 = __isoc23_strtoull();
        if ( v244 == (char *)v322[0].m128i_i64[0] || *(_BYTE *)v322[0].m128i_i64[0] || *v246 == 34 && v127 == -1 )
        {
          if ( v349 != v212 )
            operator delete(v349, *((_QWORD *)&s2 + 1) + 1LL);
          v297 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
          std::runtime_error::runtime_error(v297, "Invalid start_address");
          __cxa_throw(
            v297,
            (struct type_info *)&`typeinfo for'std::runtime_error,
            (void (*)(void *))&std::runtime_error::~runtime_error);
        }
        if ( v349 != v212 )
          operator delete(v349, *((_QWORD *)&s2 + 1) + 1LL);
        if ( *(_BYTE *)a2 != 1 )
          goto LABEL_24;
        v247 = *(_QWORD *)(a2 + 8);
        v206 = *(_QWORD *)(v247 + 16);
        if ( !v206 )
          goto LABEL_24;
        v301[0] = (nlohmann::json_abi_v3_12_0::detail::type_error *)(v247 + 8);
      }
    }
  }
  v216 = v301[0];
  v305 = v212;
  v217 = v206;
  *(nlohmann::json_abi_v3_12_0::detail::type_error **)v304 = v301[0];
  do
  {
    while ( 1 )
    {
      v220 = *(_QWORD *)(v217 + 40);
      if ( !v220 )
        break;
      v218 = 11;
      if ( v220 <= 0xB )
        v218 = *(_QWORD *)(v217 + 40);
      v219 = memcmp(*(const void **)(v217 + 32), "end_address", v218);
      if ( v219 || (v219 = v220 - 11, (__int64)(v220 - 11) <= 0x7FFFFFFF) )
      {
        if ( v219 < 0 )
          break;
      }
      v216 = (nlohmann::json_abi_v3_12_0::detail::type_error *)v217;
      v217 = *(_QWORD *)(v217 + 16);
      if ( !v217 )
        goto LABEL_170;
    }
    v217 = *(_QWORD *)(v217 + 24);
  }
  while ( v217 );
LABEL_170:
  if ( v301[0] != v216 )
  {
    v221 = *((_QWORD *)v216 + 5);
    if ( !v221 )
      goto LABEL_177;
    v222 = 11;
    if ( v221 <= 0xB )
      v222 = *((_QWORD *)v216 + 5);
    v223 = memcmp(*((const void **)v216 + 4), "end_address", v222);
    if ( v223 || (v223 = v221 - 11, (__int64)(v221 - 11) <= 0x7FFFFFFF) )
    {
      if ( v223 <= 0 )
      {
LABEL_177:
        v224 = v301[0];
        strcpy((char *)s1, "end_address");
        do
        {
          while ( 1 )
          {
            v227 = *(_QWORD *)(v206 + 40);
            if ( !v227 )
              break;
            v225 = 11;
            if ( v227 <= 0xB )
              v225 = *(_QWORD *)(v206 + 40);
            v226 = memcmp(*(const void **)(v206 + 32), s1, v225);
            if ( v226 || (v226 = v227 - 11, (__int64)(v227 - 11) <= 0x7FFFFFFF) )
            {
              if ( v226 < 0 )
                break;
            }
            v224 = (nlohmann::json_abi_v3_12_0::detail::type_error *)v206;
            v206 = *(_QWORD *)(v206 + 16);
            if ( !v206 )
              goto LABEL_186;
          }
          v206 = *(_QWORD *)(v206 + 24);
        }
        while ( v206 );
LABEL_186:
        v228 = v305;
        if ( v301[0] != v224 )
        {
          v229 = *((_QWORD *)v224 + 5);
          if ( v229 )
          {
            v230 = 11;
            if ( v229 <= 0xB )
              v230 = *((_QWORD *)v224 + 5);
            v231 = memcmp(s1, *((const void **)v224 + 4), v230);
            if ( v231 || (v231 = 11 - v229, (__int64)(11 - v229) >= (__int64)0xFFFFFFFF80000000LL) )
            {
              if ( v231 < 0 )
                v224 = v301[0];
              *(_QWORD *)v304 = v224;
            }
          }
          else
          {
            *(_QWORD *)v304 = v224;
          }
        }
        v349 = v305;
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        if ( *(_BYTE *)(*(_QWORD *)v304 + 64LL) != 3 )
        {
          v109 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *(_BYTE *)(*(_QWORD *)v304 + 64LL) )
          {
            case 0:
              v110 = "null";
              break;
            case 1:
              v110 = "object";
              break;
            case 2:
              v110 = (char *)"array";
              break;
            case 3:
              v110 = "string";
              break;
            case 4:
              v110 = "boolean";
              break;
            case 8:
              v110 = "binary";
              break;
            case 9:
              v110 = "discarded";
              break;
            default:
              v110 = "number";
              break;
          }
          v322[0].m128i_i64[0] = (__int64)v110;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v109,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v109,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        v232 = (char *)v349;
        if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v349 == 48 && (*((_BYTE *)v349 + 1) & 0xDF) == 0x58 )
          v232 = (char *)v349 + 2;
        v233 = __errno_location();
        *v233 = 0;
        v234 = v233;
        *(_QWORD *)v306 = __isoc23_strtoull();
        if ( v232 == (char *)v322[0].m128i_i64[0]
          || *(_BYTE *)v322[0].m128i_i64[0]
          || *v234 == 34 && *(_QWORD *)v306 == -1 )
        {
          if ( v349 != v228 )
            operator delete(v349, *((_QWORD *)&s2 + 1) + 1LL);
          v298 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
          std::runtime_error::runtime_error(v298, "Invalid end_address");
          __cxa_throw(
            v298,
            (struct type_info *)&`typeinfo for'std::runtime_error,
            (void (*)(void *))&std::runtime_error::~runtime_error);
        }
        if ( v349 != v228 )
          operator delete(v349, *((_QWORD *)&s2 + 1) + 1LL);
      }
    }
  }
LABEL_24:
  v322[0].m128i_i32[0] = 16;
  v315 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v307 = *(int *)v303;
  while ( 1 )
  {
    v134 = v319;
    if ( v319 == 1 )
    {
      v135 = *(_QWORD *)(*(_QWORD *)v320 + 40LL);
LABEL_38:
      if ( v135 >= v307 )
        break;
      goto LABEL_39;
    }
    if ( v319 != 2 )
    {
      if ( !v319 )
        goto LABEL_39;
      v135 = 1;
      goto LABEL_38;
    }
    if ( (__int64)(*(_QWORD *)(*(_QWORD *)v320 + 8LL) - **(_QWORD **)v320) >> 4 >= v307 )
      break;
LABEL_39:
    if ( v127 >= *(_QWORD *)v306 )
      break;
    binary = find_binary();
    if ( binary >= *(_QWORD *)v306 )
      break;
    func = (__int64 *)get_func();
    v327.m128_u64[0] = 0;
    v301[0] = (nlohmann::json_abi_v3_12_0::detail::type_error *)&v327.m128_u16[4];
    v326 = &v327.m128_u16[4];
    v327.m128_i8[8] = 0;
    if ( !func )
      goto LABEL_53;
    v138 = *func;
    memset(v322, 0, 24);
    if ( get_func_name() <= 0 )
    {
      qsnprintf();
      v353.m128i_i64[0] = (__int64)s1;
      v144 = strlen(s);
      v321.m128i_i64[0] = v144;
      v183 = v144;
      if ( v144 > 0xF )
      {
        v353.m128i_i64[0] = std::string::_M_create();
        v204 = (double *)v353.m128i_i64[0];
        s1[0] = *(double *)v321.m128i_i64;
      }
      else
      {
        if ( v144 == 1 )
        {
          LOBYTE(s1[0]) = s[0];
LABEL_101:
          v143 = s1;
          goto LABEL_46;
        }
        if ( !v144 )
          goto LABEL_101;
        v204 = s1;
      }
      if ( v183 >= 8 )
      {
        *v204 = *(double *)s;
        *(double *)((char *)v204 + v183 - 8) = *(double *)&v359[v183];
        v248 = (unsigned __int64)(v204 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v249 = (char *)v204 - v248;
        v250 = (char *)(s - v249);
        if ( ((v183 + (_DWORD)v249) & 0xFFFFFFF8) >= 8 )
        {
          v251 = (v183 + (_DWORD)v249) & 0xFFFFFFF8;
          v252 = 0;
          do
          {
            v253 = v252;
            v252 += 8;
            *(_QWORD *)(v248 + v253) = *(_QWORD *)&v250[v253];
          }
          while ( v252 < v251 );
        }
      }
      else if ( (v183 & 4) != 0 )
      {
        *(_DWORD *)v204 = *(_DWORD *)s;
        *(_DWORD *)((char *)v204 + v183 - 4) = *(_DWORD *)&v359[v183 + 4];
      }
      else if ( v183 )
      {
        *(_BYTE *)v204 = s[0];
        if ( (v183 & 2) != 0 )
          *(_WORD *)((char *)v204 + v183 - 2) = *(_WORD *)&v359[v183 + 6];
      }
      v144 = v321.m128i_i64[0];
      v143 = (double *)v353.m128i_i64[0];
    }
    else
    {
      if ( !v322[0].m128i_i64[1] )
      {
        v353.m128i_i64[0] = (__int64)s1;
LABEL_45:
        v143 = s1;
        v144 = 0;
        goto LABEL_46;
      }
      v179 = (_BYTE *)v322[0].m128i_i64[0];
      v353.m128i_i64[0] = (__int64)s1;
      if ( !v322[0].m128i_i64[0] )
        ida_mcp::tools::bin_search::`anonymous namespace'::search_binary_pattern_impl(
          *(__int64 *)v302,
          v138,
          v139,
          v140,
          v141,
          v142,
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
          a105);
      v144 = strlen((const char *)v322[0].m128i_i64[0]);
      v321.m128i_i64[0] = v144;
      v180 = v144;
      if ( v144 > 0xF )
      {
        v353.m128i_i64[0] = std::string::_M_create();
        v181 = (double *)v353.m128i_i64[0];
        s1[0] = *(double *)v321.m128i_i64;
LABEL_92:
        memcpy(v181, v179, v180);
        v144 = v321.m128i_i64[0];
        v143 = (double *)v353.m128i_i64[0];
        goto LABEL_46;
      }
      if ( v144 != 1 )
      {
        v181 = s1;
        if ( !v144 )
          goto LABEL_45;
        goto LABEL_92;
      }
      LOBYTE(s1[0]) = *v179;
      v143 = s1;
    }
LABEL_46:
    v353.m128i_i64[1] = v144;
    *((_BYTE *)v143 + v144) = 0;
    if ( v322[0].m128i_i64[0] )
    {
      v322[0].m128i_i64[1] = 0;
      qfree();
      v145 = (double *)v326;
      v146 = (double *)v326;
      if ( v326 != v301[0] )
        goto LABEL_48;
    }
    else
    {
      v145 = (double *)v326;
      v146 = (double *)v326;
      if ( v326 != v301[0] )
      {
LABEL_48:
        v147 = v353.m128i_i64[1];
        if ( (double *)v353.m128i_i64[0] != s1 )
        {
          v148 = *(double *)&v327.m128_u64[1];
          v326 = (void *)v353.m128i_i64[0];
          v327 = _mm_loadh_ps(s1);
          if ( v145 )
          {
            v353.m128i_i64[0] = (__int64)v145;
            s1[0] = v148;
            goto LABEL_51;
          }
          goto LABEL_75;
        }
        goto LABEL_110;
      }
    }
    v147 = v353.m128i_i64[1];
    if ( (double *)v353.m128i_i64[0] != s1 )
    {
      v326 = (void *)v353.m128i_i64[0];
      v327 = _mm_loadh_ps(s1);
LABEL_75:
      v353.m128i_i64[0] = (__int64)s1;
      v146 = s1;
      goto LABEL_51;
    }
LABEL_110:
    if ( v147 )
    {
      if ( v147 == 1 )
      {
        *(_BYTE *)v145 = LOBYTE(s1[0]);
        v145 = (double *)v326;
        v147 = v353.m128i_i64[1];
        goto LABEL_117;
      }
      if ( (unsigned int)v147 >= 8 )
      {
        *v145 = s1[0];
        *(double *)((char *)v145 + (unsigned int)v147 - 8) = *(double *)((char *)&v353.m128i_i64[1] + (unsigned int)v147);
        v254 = (unsigned __int64)(v145 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v255 = (char *)v145 - v254;
        v256 = (char *)((char *)s1 - v255);
        if ( (((_DWORD)v255 + (_DWORD)v147) & 0xFFFFFFF8) >= 8 )
        {
          v257 = ((_DWORD)v255 + v147) & 0xFFFFFFF8;
          v258 = 0;
          do
          {
            v259 = v258;
            v258 += 8;
            *(_QWORD *)(v254 + v259) = *(_QWORD *)&v256[v259];
          }
          while ( v258 < v257 );
        }
LABEL_116:
        v145 = (double *)v326;
        v147 = v353.m128i_i64[1];
        goto LABEL_117;
      }
      if ( (v147 & 4) != 0 )
      {
        *(_DWORD *)v145 = LODWORD(s1[0]);
        *(_DWORD *)((char *)v145 + (unsigned int)v147 - 4) = *(__int32 *)((char *)&v353.m128i_i32[3] + (unsigned int)v147);
        v145 = (double *)v326;
        v147 = v353.m128i_i64[1];
        goto LABEL_117;
      }
      if ( (_DWORD)v147 )
      {
        *(_BYTE *)v145 = LOBYTE(s1[0]);
        if ( (v147 & 2) != 0 )
        {
          *(_WORD *)((char *)v145 + (unsigned int)v147 - 2) = *(__int16 *)((char *)&v353.m128i_i16[7]
                                                                         + (unsigned int)v147);
          v145 = (double *)v326;
          v147 = v353.m128i_i64[1];
          goto LABEL_117;
        }
        goto LABEL_116;
      }
    }
LABEL_117:
    v327.m128_u64[0] = v147;
    *((_BYTE *)v145 + v147) = 0;
    v146 = (double *)v353.m128i_i64[0];
LABEL_51:
    *(_BYTE *)v146 = 0;
    if ( (double *)v353.m128i_i64[0] != s1 )
      operator delete((void *)v353.m128i_i64[0], *(_QWORD *)&s1[0] + 1LL);
LABEL_53:
    LOBYTE(v345) = 0;
    *(_QWORD *)v303 = v346;
    *(_QWORD *)v346 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v345) = 3;
    v149 = operator new(0x20u);
    *(_QWORD *)v149 = v149 + 16;
    strcpy((char *)(v149 + 16), "address");
    *(_QWORD *)(v149 + 8) = 7;
    *(_OWORD *)v346 = (unsigned __int64)v149;
    qsnprintf();
    v305 = &v328;
    v328 = v330;
    v150 = strlen(s);
    v322[0].m128i_i64[0] = v150;
    v151 = v150;
    if ( v150 > 0xF )
    {
      v163 = (_QWORD *)std::string::_M_create();
      v328 = v163;
      v330[0] = v322[0].m128i_i64[0];
    }
    else
    {
      if ( v150 == 1 )
      {
        LOBYTE(v330[0]) = s[0];
LABEL_56:
        v152 = v330;
        goto LABEL_57;
      }
      if ( !v150 )
        goto LABEL_56;
      v163 = v330;
    }
    if ( v151 >= 8 )
    {
      *v163 = *(_QWORD *)s;
      *(_QWORD *)((char *)v163 + v151 - 8) = *(_QWORD *)&v359[v151];
      v186 = (unsigned __int64)(v163 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v187 = (char *)v163 - v186;
      v188 = (char *)(s - v187);
      v189 = ((_DWORD)v187 + v151) & 0xFFFFFFF8;
      if ( v189 >= 8 )
      {
        v190 = v189 & 0xFFFFFFF8;
        v191 = 0;
        do
        {
          v192 = v191;
          v191 += 8;
          *(_QWORD *)(v186 + v192) = *(_QWORD *)&v188[v192];
        }
        while ( v191 < v190 );
      }
    }
    else if ( (v151 & 4) != 0 )
    {
      *(_DWORD *)v163 = *(_DWORD *)s;
      *(_DWORD *)((char *)v163 + v151 - 4) = *(_DWORD *)&v359[v151 + 4];
    }
    else if ( v151 )
    {
      *(_BYTE *)v163 = s[0];
      if ( (v151 & 2) != 0 )
        *(_WORD *)((char *)v163 + v151 - 2) = *(_WORD *)&v359[v151 + 6];
    }
    v150 = v322[0].m128i_i64[0];
    v152 = v328;
LABEL_57:
    v329 = v150;
    *((_BYTE *)v152 + v150) = 0;
    v347 = 0;
    *(_QWORD *)v348 = 0;
    *(_QWORD *)v304 = v348;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v347 = 3;
    v153 = (_QWORD *)operator new(0x20u);
    v154 = v328;
    v155 = v153 + 2;
    v156 = v329;
    *v153 = v153 + 2;
    if ( v154 == v330 )
    {
      v182 = v156 + 1;
      if ( (unsigned int)(v156 + 1) >= 8 )
      {
        v153[2] = v330[0];
        *(_QWORD *)((char *)v155 + v182 - 8) = *(_QWORD *)((char *)&v330[-1] + v182);
        v196 = (unsigned __int64)(v153 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v197 = (char *)v155 - v196;
        v198 = (char *)((char *)v330 - v197);
        if ( (((_DWORD)v197 + v182) & 0xFFFFFFF8) >= 8 )
        {
          v199 = ((_DWORD)v197 + v182) & 0xFFFFFFF8;
          v200 = 0;
          do
          {
            v201 = v200;
            v200 += 8;
            *(_QWORD *)(v196 + v201) = *(_QWORD *)&v198[v201];
          }
          while ( v200 < v199 );
        }
      }
      else if ( (v182 & 4) != 0 )
      {
        *((_DWORD *)v153 + 4) = v330[0];
        *(_DWORD *)((char *)v155 + v182 - 4) = *(_DWORD *)((char *)&v329 + v182 + 4);
      }
      else if ( (_DWORD)v156 != -1 )
      {
        *((_BYTE *)v153 + 16) = v330[0];
        if ( (v182 & 2) != 0 )
          *(_WORD *)((char *)v155 + v182 - 2) = *(_WORD *)((char *)&v329 + v182 + 6);
      }
    }
    else
    {
      *v153 = v154;
      v153[2] = v330[0];
    }
    v153[1] = v156;
    v328 = v330;
    v329 = 0;
    LOBYTE(v330[0]) = 0;
    *(_QWORD *)v308 = &v345;
    *(_OWORD *)v348 = (unsigned __int64)v153;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v353,
      (const __m128i *)&v345);
    s1[0] = 0.0;
    LOBYTE(v349) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v349) = 3;
    v157 = operator new(0x20u);
    *(_QWORD *)v157 = v157 + 16;
    strcpy((char *)(v157 + 16), "function");
    *(_QWORD *)(v157 + 8) = 8;
    s2 = (unsigned __int64)v157;
    if ( !v327.m128_u64[0] )
    {
      v128 = nullptr;
      v129 = 0;
      goto LABEL_26;
    }
    v321 = 0u;
    v311 = &v321.m128i_i64[1];
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    src = v326;
    *(_QWORD *)v309 = v327.m128_u64[0];
    v158 = (_QWORD *)operator new(0x20u);
    v159 = *(_QWORD *)v309;
    v160 = v158 + 2;
    v128 = v158;
    *v158 = v158 + 2;
    v317 = v159;
    if ( v159 > 0xF )
    {
      v184 = std::string::_M_create();
      *v128 = v184;
      v160 = (_BYTE *)v184;
      v185 = v317;
      v128[2] = v317;
      v161 = v185 + 1;
      if ( !v185 )
      {
LABEL_102:
        *v160 = *(_BYTE *)src;
        v162 = v317;
        goto LABEL_63;
      }
      v162 = -1;
      if ( !v161 )
        goto LABEL_63;
    }
    else
    {
      v161 = v159 + 1;
      if ( !v159 )
        goto LABEL_102;
    }
    memcpy(v160, src, v161);
    v162 = v317;
LABEL_63:
    v128[1] = v162;
    v129 = 3;
LABEL_26:
    v321.m128i_i64[1] = (__int64)v128;
    v321.m128i_i8[0] = v129;
    v130 = _mm_load_si128(&v321);
    v352 = 0;
    v351 = v130;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &s1[1],
      (const __m128i *)&v349);
    v322[0].m128i_i8[0] = 0;
    v355 = 0;
    v322[0].m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      *(_QWORD **)v302,
      &v353);
    LOBYTE(src) = v322[0].m128i_i8[0];
    *(_QWORD *)v309 = v322[0].m128i_i64[1];
    if ( !v134 )
    {
      v319 = 2;
      v131 = operator new(0x18u);
      *(_QWORD *)(v131 + 16) = 0;
      *(_QWORD *)v320 = v131;
      *(_OWORD *)v131 = 0;
LABEL_28:
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v132 = v322[0].m128i_i8[0];
      v133 = v322[0].m128i_i64[1];
      goto LABEL_29;
    }
    if ( v134 != 2 )
    {
      v301[0] = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( v134 )
      {
        case 1:
          v105 = "object";
          break;
        case 3:
          v105 = "string";
          break;
        case 4:
          v105 = "boolean";
          break;
        case 8:
          v105 = "binary";
          break;
        case 9:
          v105 = "discarded";
          break;
        default:
          v105 = "number";
          break;
      }
      v318 = (__int64)v105;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      *(_QWORD *)v306 = &v331;
      std::string::basic_string<std::allocator<char>>(&v331, "");
      std::string::basic_string<std::allocator<char>>(&v340, "type_error");
      nlohmann::json_abi_v3_12_0::detail::exception::name();
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
      std::string::_M_dispose();
      std::string::_M_dispose();
      std::string::_M_dispose();
      nlohmann::json_abi_v3_12_0::detail::type_error::type_error(v301[0], 308, (const char *)v330[6]);
      std::string::_M_dispose();
      std::string::_M_dispose();
      __cxa_throw(
        v301[0],
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v193 = *(_QWORD *)v320;
    v194 = *(_QWORD *)(*(_QWORD *)v320 + 8LL);
    if ( v194 == *(_QWORD *)(*(_QWORD *)v320 + 16LL) )
      goto LABEL_28;
    v195 = v194 + 16;
    v132 = 0;
    *(__m128i *)(v195 - 16) = _mm_load_si128(v322);
    *(_QWORD *)(v193 + 8) = v195;
    v133 = 0;
LABEL_29:
    v322[0].m128i_i64[1] = v133;
    v322[0].m128i_i8[0] = v132;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v328 != v330 )
      operator delete(v328, v330[0] + 1LL);
    if ( v326 != v301[0] )
      operator delete(v326, v327.m128_u64[1] + 1);
    v127 = binary + 1;
  }
  LOBYTE(v331) = 0;
  *(_QWORD *)v332 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v331) = 3;
  v164 = operator new(0x20u);
  strcpy((char *)(v164 + 16), "pattern");
  *(_QWORD *)v164 = v164 + 16;
  *(_QWORD *)(v164 + 8) = 7;
  v333 = 0;
  v334.m128i_i64[0] = 0;
  *(_OWORD *)v332 = (unsigned __int64)v164;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v333 = 3;
  v165 = v323;
  v166 = v324;
  v167 = (_QWORD *)operator new(0x20u);
  v168 = v167 + 2;
  v318 = v166;
  v169 = v167;
  *v167 = v167 + 2;
  if ( v166 > 0xF )
  {
    v235 = std::string::_M_create();
    *v169 = v235;
    v168 = (_BYTE *)v235;
    v236 = v318;
    si128 = (__m128i)(unsigned __int64)v169;
    v169[2] = v318;
    v171 = v236 + 1;
    if ( !v236 )
      goto LABEL_138;
    v172 = -1;
    if ( v171 )
    {
LABEL_79:
      *(__m128i *)v301 = si128;
      memcpy(v168, v165, v171);
      v172 = v318;
      si128 = _mm_load_si128((const __m128i *)v301);
    }
  }
  else
  {
    si128 = (__m128i)(unsigned __int64)v167;
    v171 = v166 + 1;
    if ( v166 )
      goto LABEL_79;
LABEL_138:
    *v168 = *v165;
    v172 = v318;
  }
  v169[1] = v172;
  *(_QWORD *)v306 = &v331;
  v334 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v353,
    (const __m128i *)&v331);
  s1[0] = 0.0;
  v335 = 0;
  *(_QWORD *)v336 = 0;
  v301[0] = (nlohmann::json_abi_v3_12_0::detail::type_error *)v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v335 = 3;
  v173 = operator new(0x20u);
  *(_DWORD *)(v173 + 16) = 1768186226;
  *(_QWORD *)v173 = v173 + 16;
  *(_BYTE *)(v173 + 20) = 120;
  *(_QWORD *)(v173 + 8) = 5;
  *(_BYTE *)(v173 + 21) = 0;
  v337 = 5;
  v338 = v315;
  v339 = 0;
  *(_OWORD *)v336 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v335);
  v355 = 0;
  LOBYTE(v340) = 0;
  *(_QWORD *)&v341 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v340) = 3;
  v174 = operator new(0x20u);
  strcpy((char *)(v174 + 16), "match_count");
  *(_QWORD *)v174 = v174 + 16;
  *(_QWORD *)(v174 + 8) = 11;
  v341 = (unsigned __int64)v174;
  if ( v134 == 1 )
  {
    v175 = *(_QWORD *)(*(_QWORD *)v320 + 40LL);
  }
  else if ( v134 == 2 )
  {
    v175 = (__int64)(*(_QWORD *)(*(_QWORD *)v320 + 8LL) - **(_QWORD **)v320) >> 4;
  }
  else
  {
    v175 = v134 != 0;
  }
  v342 = 6;
  v343 = v175;
  v344 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v356,
    (const __m128i *)&v340);
  v356[2] = 0;
  LOBYTE(v345) = 0;
  *(_QWORD *)v346 = 0;
  *(_QWORD *)v303 = v346;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v345) = 3;
  v176 = operator new(0x20u);
  *(_QWORD *)v176 = v176 + 16;
  strcpy((char *)(v176 + 16), "truncated");
  *(_QWORD *)(v176 + 8) = 9;
  *(_OWORD *)v346 = (unsigned __int64)v176;
  if ( v134 == 1 )
  {
    v177 = *(_QWORD *)(*(_QWORD *)v320 + 40LL) >= v307;
  }
  else if ( v134 == 2 )
  {
    v177 = (__int64)(*(_QWORD *)(*(_QWORD *)v320 + 8LL) - **(_QWORD **)v320) >> 4 >= v307;
  }
  else
  {
    v177 = 0;
    if ( v134 )
      v177 = v307 == 1;
  }
  v347 = 4;
  *(_QWORD *)v348 = v177;
  *(_QWORD *)&v348[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v357,
    (const __m128i *)&v345);
  v357[2] = 0;
  LOBYTE(v349) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v349) = 3;
  v178 = operator new(0x20u);
  strcpy((char *)(v178 + 16), "results");
  *(_QWORD *)v178 = v178 + 16;
  *(_QWORD *)(v178 + 8) = 7;
  v351.m128i_i64[1] = 0;
  v351.m128i_i8[0] = v134;
  s2 = (unsigned __int64)v178;
  switch ( v134 )
  {
    case 1:
      *(_QWORD *)v302 = *(_QWORD *)v320;
      v287 = operator new(0x30u);
      v288 = *(_QWORD *)v302;
      *(_QWORD *)(v287 + 16) = 0;
      v274 = (_QWORD *)v287;
      *(_DWORD *)(v287 + 8) = 0;
      v289 = *(int **)(v288 + 16);
      *(_QWORD *)(v287 + 24) = v287 + 8;
      *(_QWORD *)(v287 + 32) = v287 + 8;
      *(_QWORD *)(v287 + 40) = 0;
      if ( v289 )
      {
        v290 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v289,
                 v287 + 8);
        v291 = *(_QWORD *)v302;
        v292 = v290;
        do
        {
          v293 = v290;
          v290 = *(_QWORD *)(v290 + 16);
        }
        while ( v290 );
        v274[3] = v293;
        v294 = v292;
        do
        {
          v295 = v294;
          v294 = *(_QWORD *)(v294 + 24);
        }
        while ( v294 );
        v296 = *(_QWORD *)(v291 + 40);
        v274[4] = v295;
        v274[2] = v292;
        v274[5] = v296;
      }
      goto LABEL_272;
    case 2:
      *(_QWORD *)v304 = *(_QWORD *)v320;
      v277 = (_QWORD *)operator new(0x18u);
      v278 = *(__int64 **)v304;
      v305 = v277;
      v279 = *(_QWORD *)(*(_QWORD *)v304 + 8LL) - **(_QWORD **)v304;
      v277[2] = 0;
      *(_OWORD *)v277 = 0;
      if ( v279 )
      {
        v280 = operator new(v279);
        v278 = *(__int64 **)v304;
        v281 = v280;
      }
      else
      {
        v281 = 0;
      }
      v282 = v305;
      *(__m128i *)v305 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v281, (__m128i)(unsigned __int64)v281);
      v282[2] = v281 + v279;
      v283 = v278[1];
      v284 = *v278;
      v321.m128i_i64[0] = v281;
      *(_QWORD *)v304 = v283;
      v322[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v281, (__m128i)(unsigned __int64)&v321);
      if ( v283 != v284 )
      {
        v285 = v284;
        do
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v285 += 16;
          v281 = v321.m128i_i64[0] + 16;
          v321.m128i_i64[0] += 16;
        }
        while ( *(_QWORD *)v304 != v285 );
      }
      v286 = v305;
      *((_QWORD *)v305 + 1) = v281;
      v351.m128i_i64[1] = (__int64)v286;
      goto LABEL_132;
    case 3:
      v270 = *(_QWORD *)(*(_QWORD *)v320 + 8LL);
      v305 = **(void ***)v320;
      *(_QWORD *)v304 = v270;
      v271 = (_QWORD *)operator new(0x20u);
      v272 = *(_QWORD *)v304;
      v273 = v271 + 2;
      v274 = v271;
      *v271 = v271 + 2;
      v322[0].m128i_i64[0] = v272;
      if ( v272 <= 0xF )
      {
        v275 = v272 + 1;
        if ( v272 )
        {
LABEL_258:
          memcpy(v273, v305, v275);
          v276 = v322[0].m128i_i64[0];
          goto LABEL_259;
        }
        goto LABEL_294;
      }
      v299 = std::string::_M_create();
      *v274 = v299;
      v273 = (_BYTE *)v299;
      v300 = v322[0].m128i_i64[0];
      v274[2] = v322[0].m128i_i64[0];
      v275 = v300 + 1;
      if ( !v300 )
      {
LABEL_294:
        *v273 = *(_BYTE *)v305;
        v276 = v322[0].m128i_i64[0];
        goto LABEL_259;
      }
      v276 = -1;
      if ( v275 )
        goto LABEL_258;
LABEL_259:
      v274[1] = v276;
LABEL_272:
      v351.m128i_i64[1] = (__int64)v274;
LABEL_132:
      v352 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v358,
        (const __m128i *)&v349);
      v358[2] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v202 = (__m128i *)v359;
      do
      {
        v202 = (__m128i *)((char *)v202 - 24);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v202 != &v353 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v323 != v314 )
        operator delete(v323, v325[0] + 1LL);
      return v312;
    case 4:
      v351.m128i_i8[8] = v320[0];
      goto LABEL_132;
    case 5:
    case 6:
      v351.m128i_i64[1] = *(_QWORD *)v320;
      goto LABEL_132;
    case 7:
      v351.m128i_i64[1] = *(_QWORD *)v320;
      goto LABEL_132;
    case 8:
      *(_QWORD *)v302 = *(_QWORD *)v320;
      v260 = operator new(0x28u);
      v261 = *(_QWORD *)v302;
      v262 = (__m128i *)v260;
      v263 = *(_QWORD *)(*(_QWORD *)v302 + 8LL) - **(_QWORD **)v302;
      *(_QWORD *)(v260 + 16) = 0;
      *(_OWORD *)v260 = 0;
      if ( v263 )
      {
        *(_QWORD *)v304 = v261;
        *(_QWORD *)v302 = v263;
        v264 = operator new(v263);
        v263 = *(_QWORD *)v302;
        v261 = *(_QWORD *)v304;
        v265 = (char *)v264;
      }
      else
      {
        v265 = nullptr;
      }
      v262[1].m128i_i64[0] = (__int64)&v265[v263];
      *v262 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v265, (__m128i)(unsigned __int64)v265);
      v266 = *(const void **)v261;
      v267 = *(_QWORD *)(v261 + 8) - *(_QWORD *)v261;
      if ( v267 > 0 )
      {
        *(_QWORD *)v304 = v261;
        *(_QWORD *)v302 = v267;
        v268 = (char *)memcpy(v265, v266, v267);
        v261 = *(_QWORD *)v304;
        v265 = &v268[*(_QWORD *)v302];
      }
      v269 = *(_QWORD *)(v261 + 24);
      v262->m128i_i64[1] = (__int64)v265;
      v262[1].m128i_i64[1] = v269;
      v262[2].m128i_i8[0] = *(_BYTE *)(v261 + 32);
      v351.m128i_i64[1] = (__int64)v262;
      goto LABEL_132;
    default:
      goto LABEL_132;
  }
}

