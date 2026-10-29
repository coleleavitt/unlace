__int64 __fastcall ida_mcp::tools::reg_search::`anonymous namespace'::find_register_access_impl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        nlohmann::json_abi_v3_12_0::detail::type_error *a8,
        int a9,
        __int64 a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        int a30,
        __int64 a31,
        int a32,
        int a33,
        int a34,
        __int64 a35,
        int a36,
        __int64 a37,
        int a38,
        int a39,
        char a40,
        __int64 a41,
        int a42,
        int a43,
        __int64 a44,
        __int64 a45,
        int a46,
        int a47,
        __int64 a48,
        __int64 a49,
        int a50,
        int a51,
        __int64 a52,
        __int64 a53,
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
        char a68,
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
        char *a80,
        int a81,
        int a82,
        int a83,
        char a84,
        int a85,
        int a86,
        int a87,
        char a88,
        int a89,
        int a90,
        int a91,
        char a92,
        int a93,
        int a94,
        int a95,
        char a96,
        int a97,
        int a98,
        char a99,
        int a100,
        int a101,
        char a102,
        int a103,
        int a104,
        char a105,
        int a106,
        int a107,
        char a108,
        int a109,
        int a110,
        char a111,
        int a112,
        int a113,
        char a114,
        int a115,
        int a116,
        char a117,
        char a118,
        int a119,
        char a120,
        int a121,
        int a122,
        char a123,
        char a124,
        int a125,
        int a126,
        int a127,
        int a128,
        int a129,
        int a130,
        int a131,
        int a132,
        int a133,
        int a134,
        int a135,
        int a136,
        int a137,
        int a138,
        int a139,
        int a140,
        char a141,
        int a142,
        int a143,
        int a144,
        int a145,
        int a146,
        __int64 a147)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v147; // r12
  char *v148; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v149; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v150; // r12
  char *v151; // rax
  char *v152; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v153; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v155; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v156; // r12
  const char *v157; // rbx
  char *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rbx
  __int64 v161; // rbp
  __int64 v162; // r13
  size_t v163; // rdx
  int v164; // eax
  unsigned __int64 v165; // r15
  unsigned __int64 v166; // rbx
  size_t v167; // rax
  int v168; // eax
  char v169; // al
  __int64 v170; // r15
  __int64 v171; // rbx
  __int64 v172; // r15
  __int64 v173; // rbp
  size_t v174; // rdx
  int v175; // eax
  unsigned __int64 v176; // r13
  unsigned __int64 v177; // rbx
  size_t v178; // rax
  int v179; // eax
  __int64 v180; // rbx
  unsigned __int64 v181; // r14
  __int64 func; // rax
  double *v183; // rdx
  size_t v184; // rax
  double *v185; // rax
  double *v186; // rsi
  __int64 v187; // rdx
  __int64 v188; // r8
  __int64 v189; // rax
  size_t v190; // rax
  unsigned int v191; // r12d
  int *v192; // rdx
  _QWORD *v193; // rax
  int *v194; // rdx
  _QWORD *v195; // rcx
  __int64 v196; // rsi
  __int64 v197; // rax
  const char *v198; // r12
  __int64 *v199; // rax
  void *v200; // r13
  __int64 *v201; // rbp
  size_t v202; // rax
  size_t v203; // r14
  __int64 v204; // rax
  _BYTE *v205; // r12
  unsigned __int64 v206; // r13
  _QWORD *v207; // rax
  _BYTE *v208; // rdi
  __int64 *v209; // rbp
  __m128i si128; // xmm0
  size_t v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 *v215; // rbp
  char v216; // al
  __m128i v217; // xmm0
  int v218; // edx
  int v219; // ecx
  int v220; // r8d
  int v221; // r9d
  __int64 v222; // rax
  __int64 v223; // r14
  __int8 v224; // si
  __int64 v225; // rax
  char *v226; // rbp
  unsigned __int64 v227; // rax
  __int64 *v228; // rbx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  _BYTE *v233; // rbp
  unsigned __int64 v234; // r12
  _QWORD *v235; // rax
  _BYTE *v236; // rdi
  __int64 *v237; // rbx
  __m128i v238; // xmm0
  size_t v239; // rdx
  __int64 v240; // rax
  __int64 *v241; // rbx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  _BYTE *v246; // rbp
  unsigned __int64 v247; // r12
  _QWORD *v248; // rax
  _BYTE *v249; // rdi
  __int64 *v250; // rbx
  __m128i v251; // xmm0
  size_t v252; // rdx
  __int64 v253; // rax
  __int64 *v254; // rbx
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rax
  __int64 *v260; // rbx
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  bool v265; // al
  __int64 *v266; // rbx
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  char *v271; // rbx
  _BYTE *v273; // r12
  unsigned __int64 v274; // r14
  _QWORD *v275; // rax
  _BYTE *v276; // rdi
  size_t v277; // rdx
  __int64 v278; // rax
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  int *v282; // rax
  _BYTE *v283; // rbp
  size_t v284; // rbx
  double *v285; // rdi
  unsigned int v286; // edi
  __int64 v287; // rdx
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 v291; // rax
  unsigned __int64 v292; // rax
  unsigned __int64 v293; // rdx
  char *v294; // rax
  char *v295; // rbp
  unsigned int v296; // r12d
  unsigned int v297; // r12d
  unsigned int v298; // eax
  __int64 v299; // rcx
  __int64 v300; // rcx
  __int64 v301; // rax
  __int64 v302; // rax
  unsigned __int64 v303; // r8
  char *v304; // rcx
  char *v305; // r9
  unsigned int v306; // edx
  unsigned int v307; // ecx
  __int64 v308; // rdi
  int v309; // eax
  __int64 v310; // rbp
  __int64 v311; // r13
  __int64 v312; // rbx
  __int64 v313; // r15
  size_t v314; // rdx
  int v315; // eax
  unsigned __int64 v316; // rbp
  __int64 v317; // rbp
  __int64 v318; // rbx
  __int64 v319; // rcx
  unsigned __int64 v320; // r15
  size_t v321; // rax
  int v322; // eax
  __int64 v323; // r15
  __int64 v324; // rbx
  size_t v325; // rdx
  int v326; // eax
  unsigned __int64 v327; // rbp
  __int64 v328; // rcx
  unsigned __int64 v329; // r15
  size_t v330; // rax
  int v331; // eax
  __int64 v332; // r15
  __int64 v333; // rbx
  __int64 v334; // r13
  size_t v335; // rdx
  int v336; // eax
  unsigned __int64 v337; // rbp
  unsigned __int64 v338; // r15
  size_t v339; // rax
  const void *v340; // rsi
  int v341; // eax
  __int64 v342; // r8
  char *v343; // rbp
  int *v344; // rax
  int *v345; // r15
  __int64 v346; // rax
  __int64 v347; // rax
  __int64 v348; // rax
  __int64 v349; // rax
  unsigned __int8 v350; // al
  int v351; // ecx
  int v352; // eax
  __int64 v353; // r15
  size_t v354; // rdx
  int v355; // eax
  unsigned __int64 v356; // rbp
  unsigned __int64 v357; // rbx
  size_t v358; // rax
  int v359; // eax
  char *v360; // rbp
  int *v361; // rax
  int *v362; // r15
  __int64 v363; // rbp
  unsigned __int64 v364; // rdi
  _BYTE *v365; // rax
  char *v366; // r8
  unsigned int v367; // esi
  unsigned int v368; // eax
  __int64 v369; // rdx
  std::runtime_error *v370; // rbp
  std::runtime_error *v371; // rbp
  int v372[4]; // [rsp+5C0h] [rbp-4A8h] BYREF
  nlohmann::json_abi_v3_12_0::detail::type_error *v373; // [rsp+5D0h] [rbp-498h]
  int v374[2]; // [rsp+5D8h] [rbp-490h]
  __int64 v375; // [rsp+5E0h] [rbp-488h]
  char v376[8]; // [rsp+5E8h] [rbp-480h]
  __int64 v377; // [rsp+5F0h] [rbp-478h]
  __int64 v378; // [rsp+5F8h] [rbp-470h]
  __int64 v379; // [rsp+600h] [rbp-468h]
  __int64 v380; // [rsp+608h] [rbp-460h]
  __int64 v381[2]; // [rsp+610h] [rbp-458h] BYREF
  __int64 v382; // [rsp+620h] [rbp-448h]
  int v383[2]; // [rsp+628h] [rbp-440h]
  __int64 v384; // [rsp+630h] [rbp-438h]
  __int64 p_src; // [rsp+638h] [rbp-430h]
  int v386[2]; // [rsp+640h] [rbp-428h]
  __int64 v387; // [rsp+648h] [rbp-420h]
  int v388[2]; // [rsp+650h] [rbp-418h]
  __int64 v389; // [rsp+658h] [rbp-410h]
  __int64 v390; // [rsp+660h] [rbp-408h]
  __int64 v391; // [rsp+668h] [rbp-400h]
  __int64 v392; // [rsp+670h] [rbp-3F8h]
  __int64 v393; // [rsp+678h] [rbp-3F0h]
  __int64 v394; // [rsp+680h] [rbp-3E8h]
  void **v395; // [rsp+688h] [rbp-3E0h]
  _QWORD *v396; // [rsp+690h] [rbp-3D8h]
  int v397[2]; // [rsp+698h] [rbp-3D0h]
  int v398; // [rsp+6A0h] [rbp-3C8h]
  __int8 v399; // [rsp+6A6h] [rbp-3C2h]
  char v400; // [rsp+6A7h] [rbp-3C1h]
  __int64 v401; // [rsp+6A8h] [rbp-3C0h]
  unsigned __int64 v402; // [rsp+6B8h] [rbp-3B0h]
  int v403[2]; // [rsp+6C4h] [rbp-3A4h]
  __int16 v404; // [rsp+6CCh] [rbp-39Ch]
  char v405[8]; // [rsp+6D0h] [rbp-398h] BYREF
  __int64 v406; // [rsp+6D8h] [rbp-390h]
  char v407[16]; // [rsp+6E0h] [rbp-388h] BYREF
  __int64 v408; // [rsp+6F0h] [rbp-378h]
  __int64 v409[3]; // [rsp+6F8h] [rbp-370h]
  __int64 v410; // [rsp+710h] [rbp-358h]
  __int64 v411[3]; // [rsp+718h] [rbp-350h]
  __m128i v412[2]; // [rsp+730h] [rbp-338h] BYREF
  void *v413; // [rsp+750h] [rbp-318h] BYREF
  unsigned __int64 v414; // [rsp+758h] [rbp-310h]
  _QWORD v415[2]; // [rsp+760h] [rbp-308h] BYREF
  void *v416; // [rsp+770h] [rbp-2F8h] BYREF
  unsigned __int64 v417; // [rsp+778h] [rbp-2F0h]
  __int64 v418; // [rsp+780h] [rbp-2E8h] BYREF
  void *src; // [rsp+790h] [rbp-2D8h] BYREF
  int v420[2]; // [rsp+798h] [rbp-2D0h]
  int v421[2]; // [rsp+7A0h] [rbp-2C8h] BYREF
  void *v422; // [rsp+7B0h] [rbp-2B8h]
  __m128 v423; // [rsp+7B8h] [rbp-2B0h] BYREF
  void *v424; // [rsp+7D0h] [rbp-298h] BYREF
  int v425[2]; // [rsp+7D8h] [rbp-290h]
  int v426[44]; // [rsp+7E0h] [rbp-288h] BYREF
  char v427[8]; // [rsp+890h] [rbp-1D8h] BYREF
  __int64 v428[2]; // [rsp+898h] [rbp-1D0h] BYREF
  char v429; // [rsp+8A8h] [rbp-1C0h]
  __int64 v430[2]; // [rsp+8B0h] [rbp-1B8h] BYREF
  char v431[8]; // [rsp+8C0h] [rbp-1A8h] BYREF
  __int64 v432[2]; // [rsp+8C8h] [rbp-1A0h] BYREF
  char v433; // [rsp+8D8h] [rbp-190h]
  __int64 v434[2]; // [rsp+8E0h] [rbp-188h] BYREF
  char v435[8]; // [rsp+8F0h] [rbp-178h] BYREF
  __int64 v436[2]; // [rsp+8F8h] [rbp-170h] BYREF
  char v437; // [rsp+908h] [rbp-160h]
  __int64 v438[2]; // [rsp+910h] [rbp-158h] BYREF
  char v439; // [rsp+920h] [rbp-148h] BYREF
  int v440[4]; // [rsp+928h] [rbp-140h]
  char v441; // [rsp+938h] [rbp-130h]
  char v442[8]; // [rsp+940h] [rbp-128h]
  int v443[2]; // [rsp+948h] [rbp-120h]
  void *v444; // [rsp+950h] [rbp-118h] BYREF
  __int128 s2; // [rsp+958h] [rbp-110h] BYREF
  char v446[16]; // [rsp+968h] [rbp-100h]
  int v447[2]; // [rsp+978h] [rbp-F0h]
  void *v448; // [rsp+980h] [rbp-E8h] BYREF
  int v449[2]; // [rsp+988h] [rbp-E0h]
  double s1[3]; // [rsp+990h] [rbp-D8h] BYREF
  int v451[2]; // [rsp+9A8h] [rbp-C0h]
  int v452[4]; // [rsp+9B0h] [rbp-B8h] BYREF
  int v453[2]; // [rsp+9C0h] [rbp-A8h]
  int v454[4]; // [rsp+9C8h] [rbp-A0h] BYREF
  int v455[2]; // [rsp+9D8h] [rbp-90h]
  int v456[4]; // [rsp+9E0h] [rbp-88h] BYREF
  int v457[2]; // [rsp+9F0h] [rbp-78h]
  char v458[8]; // [rsp+9F8h] [rbp-70h] BYREF
  char s[40]; // [rsp+A00h] [rbp-68h] BYREF
  unsigned __int64 v460; // [rsp+A28h] [rbp-40h]

  v394 = a1;
  v460 = __readfsqword(0x28u);
  v444 = (char *)&s2 + 8;
  *((_QWORD *)&s2 + 1) = 0x7265747369676572LL;
  *(_QWORD *)&s2 = 8;
  v446[0] = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v157 = "null";
        break;
      case 1:
        v157 = "object";
        break;
      case 2:
        v157 = "array";
        break;
      case 3:
        v157 = "string";
        break;
      case 4:
        v157 = "boolean";
        break;
      case 8:
        v157 = "binary";
        break;
      case 9:
        v157 = "discarded";
        break;
      default:
        v157 = "number";
        break;
    }
    LOBYTE(s1[0]) = 0;
    *(_QWORD *)v449 = 0;
    v448 = s1;
    strlen(v157);
    std::string::reserve();
    std::string::append((__int64)&v448, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)&v448, v157);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v159 = *(_QWORD *)(a2 + 8);
  v160 = *(_QWORD *)(v159 + 16);
  v161 = v159 + 8;
  if ( v160 )
  {
    v162 = v159 + 8;
    do
    {
      while ( 1 )
      {
        v165 = *(_QWORD *)(v160 + 40);
        if ( !v165 )
          break;
        v163 = 8;
        if ( v165 <= 8 )
          v163 = *(_QWORD *)(v160 + 40);
        v164 = memcmp(*(const void **)(v160 + 32), (char *)&s2 + 8, v163);
        if ( v164 || (v164 = v165 - 8, (__int64)(v165 - 8) <= 0x7FFFFFFF) )
        {
          if ( v164 < 0 )
            break;
        }
        v162 = v160;
        v160 = *(_QWORD *)(v160 + 16);
        if ( !v160 )
          goto LABEL_12;
      }
      v160 = *(_QWORD *)(v160 + 24);
    }
    while ( v160 );
LABEL_12:
    if ( v161 != v162 )
    {
      v166 = *(_QWORD *)(v162 + 40);
      if ( v166 )
      {
        v167 = 8;
        if ( v166 <= 8 )
          v167 = *(_QWORD *)(v162 + 40);
        v168 = memcmp((char *)&s2 + 8, *(const void **)(v162 + 32), v167);
        if ( v168 || (v168 = 8 - v166, (__int64)(8 - v166) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v168 >= 0 )
            v161 = v162;
        }
      }
      else
      {
        v161 = v162;
      }
    }
  }
  LOBYTE(v415[0]) = 0;
  v395 = &v413;
  v396 = v415;
  v413 = v415;
  v169 = *(_BYTE *)(v161 + 64);
  v414 = 0;
  v400 = v169;
  if ( v169 != 3 )
  {
    v156 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v161 + 64) )
    {
      case 0:
        v158 = "null";
        break;
      case 1:
        v158 = "object";
        break;
      case 2:
        v158 = (char *)"array";
        break;
      case 3:
        v158 = "string";
        break;
      case 4:
        v158 = "boolean";
        break;
      case 8:
        v158 = "binary";
        break;
      case 9:
        v158 = "discarded";
        break;
      default:
        v158 = "number";
        break;
    }
    v412[0].m128i_i64[0] = (__int64)v158;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v156,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v156,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  if ( *(_BYTE *)a2 != 1 )
  {
    v153 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v155 = "null";
        break;
      case 1:
        v155 = "object";
        break;
      case 2:
        v155 = (char *)"array";
        break;
      case 3:
        v155 = "string";
        break;
      case 4:
        v155 = "boolean";
        break;
      case 8:
        v155 = "binary";
        break;
      case 9:
        v155 = "discarded";
        break;
      default:
        v155 = "number";
        break;
    }
    v412[0].m128i_i64[0] = (__int64)v155;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v153,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v153,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v170 = *(_QWORD *)(a2 + 8);
  v171 = *(_QWORD *)(v170 + 16);
  if ( !v171 )
    goto LABEL_325;
  v172 = v170 + 8;
  v173 = v172;
  do
  {
    while ( 1 )
    {
      v176 = *(_QWORD *)(v171 + 40);
      if ( !v176 )
        break;
      v174 = 5;
      if ( v176 <= 5 )
        v174 = *(_QWORD *)(v171 + 40);
      v175 = memcmp(*(const void **)(v171 + 32), "limit", v174);
      if ( v175 || (v175 = v176 - 5, (__int64)(v176 - 5) <= 0x7FFFFFFF) )
      {
        if ( v175 < 0 )
          break;
      }
      v173 = v171;
      v171 = *(_QWORD *)(v171 + 16);
      if ( !v171 )
        goto LABEL_32;
    }
    v171 = *(_QWORD *)(v171 + 24);
  }
  while ( v171 );
LABEL_32:
  if ( v172 == v173 )
  {
LABEL_325:
    v372[0] = 50;
    goto LABEL_39;
  }
  v177 = *(_QWORD *)(v173 + 40);
  if ( !v177 )
    goto LABEL_257;
  v178 = 5;
  if ( v177 <= 5 )
    v178 = *(_QWORD *)(v173 + 40);
  v179 = memcmp(*(const void **)(v173 + 32), "limit", v178);
  v372[0] = 50;
  if ( v179 || (v179 = v177 - 5, (__int64)(v177 - 5) <= 0x7FFFFFFF) )
  {
    if ( v179 <= 0 )
    {
LABEL_257:
      v350 = *(_BYTE *)(v173 + 64);
      if ( v350 == 6 )
        goto LABEL_261;
      if ( v350 > 6u )
      {
        if ( v350 == 7 )
        {
          v351 = (int)*(double *)(v173 + 72);
          goto LABEL_262;
        }
      }
      else
      {
        if ( v350 == 4 )
        {
          v351 = *(unsigned __int8 *)(v173 + 72);
          goto LABEL_262;
        }
        if ( v350 == 5 )
        {
LABEL_261:
          v351 = *(_DWORD *)(v173 + 72);
LABEL_262:
          v352 = 50;
          if ( v351 > 0 )
            v352 = v351;
          v372[0] = v352;
          goto LABEL_39;
        }
      }
      v147 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)(v173 + 64) )
      {
        case 0:
          v148 = "null";
          break;
        case 1:
          v148 = "object";
          break;
        case 2:
          v148 = (char *)"array";
          break;
        case 3:
          v148 = "string";
          break;
        case 4:
          v148 = "boolean";
          break;
        case 8:
          v148 = "binary";
          break;
        case 9:
          v148 = "discarded";
          break;
        default:
          v148 = "number";
          break;
      }
      v412[0].m128i_i64[0] = (__int64)v148;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v147,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v147,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
  }
LABEL_39:
  v180 = getinf();
  *(_QWORD *)v383 = getinf();
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_40;
  v310 = *(_QWORD *)(a2 + 8);
  v311 = *(_QWORD *)(v310 + 16);
  if ( !v311 )
    goto LABEL_40;
  *(_QWORD *)v376 = v180;
  v312 = v311;
  v375 = v310 + 8;
  v313 = v310 + 8;
  v377 = v310 + 8;
  do
  {
    while ( 1 )
    {
      v316 = *(_QWORD *)(v312 + 40);
      if ( !v316 )
        break;
      v314 = 13;
      if ( v316 <= 0xD )
        v314 = *(_QWORD *)(v312 + 40);
      v315 = memcmp(*(const void **)(v312 + 32), "start_address", v314);
      if ( v315 || (v315 = v316 - 13, (__int64)(v316 - 13) <= 0x7FFFFFFF) )
      {
        if ( v315 < 0 )
          break;
      }
      v313 = v312;
      v312 = *(_QWORD *)(v312 + 16);
      if ( !v312 )
        goto LABEL_200;
    }
    v312 = *(_QWORD *)(v312 + 24);
  }
  while ( v312 );
LABEL_200:
  v317 = v377;
  v318 = *(_QWORD *)v376;
  v319 = v313;
  if ( v377 == v313 )
    goto LABEL_207;
  v320 = *(_QWORD *)(v313 + 40);
  if ( v320 )
  {
    v321 = 13;
    if ( v320 <= 0xD )
      v321 = v320;
    v322 = memcmp(*(const void **)(v319 + 32), "start_address", v321);
    if ( !v322 )
    {
      v322 = v320 - 13;
      if ( (__int64)(v320 - 13) > 0x7FFFFFFF )
        goto LABEL_207;
    }
    if ( v322 > 0 )
      goto LABEL_207;
  }
  v353 = v377;
  strcpy((char *)s1, "start_address");
  *(_QWORD *)v376 = v377;
  do
  {
    while ( 1 )
    {
      v356 = *(_QWORD *)(v311 + 40);
      if ( !v356 )
        break;
      v354 = 13;
      if ( v356 <= 0xD )
        v354 = *(_QWORD *)(v311 + 40);
      v355 = memcmp(*(const void **)(v311 + 32), s1, v354);
      if ( v355 || (v355 = v356 - 13, (__int64)(v356 - 13) <= 0x7FFFFFFF) )
      {
        if ( v355 < 0 )
          break;
      }
      v353 = v311;
      v311 = *(_QWORD *)(v311 + 16);
      if ( !v311 )
        goto LABEL_288;
    }
    v311 = *(_QWORD *)(v311 + 24);
  }
  while ( v311 );
LABEL_288:
  if ( *(_QWORD *)v376 != v353 )
  {
    v357 = *(_QWORD *)(v353 + 40);
    if ( v357 )
    {
      v358 = 13;
      if ( v357 <= 0xD )
        v358 = *(_QWORD *)(v353 + 40);
      v359 = memcmp(s1, *(const void **)(v353 + 32), v358);
      if ( v359 || (v359 = 13 - v357, (__int64)(13 - v357) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v359 < 0 )
          v353 = *(_QWORD *)v376;
        v375 = v353;
      }
    }
    else
    {
      v375 = v353;
    }
  }
  v444 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v375 + 64) != 3 )
  {
    v150 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v375 + 64) )
    {
      case 0:
        v151 = "null";
        break;
      case 1:
        v151 = "object";
        break;
      case 2:
        v151 = (char *)"array";
        break;
      case 3:
        v151 = "string";
        break;
      case 4:
        v151 = "boolean";
        break;
      case 8:
        v151 = "binary";
        break;
      case 9:
        v151 = "discarded";
        break;
      default:
        v151 = "number";
        break;
    }
    v412[0].m128i_i64[0] = (__int64)v151;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v150,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v150,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v360 = (char *)v444;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v444 == 48 && (*((_BYTE *)v444 + 1) & 0xDF) == 0x58 )
    v360 = (char *)v444 + 2;
  v361 = __errno_location();
  *v361 = 0;
  v362 = v361;
  v318 = __isoc23_strtoull();
  if ( v360 == (char *)v412[0].m128i_i64[0] || *(_BYTE *)v412[0].m128i_i64[0] || *v362 == 34 && v318 == -1 )
  {
    if ( v444 != (char *)&s2 + 8 )
      operator delete(v444, *((_QWORD *)&s2 + 1) + 1LL);
    v370 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v370, "Invalid start_address");
    __cxa_throw(
      v370,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v444 != (char *)&s2 + 8 )
    operator delete(v444, *((_QWORD *)&s2 + 1) + 1LL);
  if ( *(_BYTE *)a2 == 1 )
  {
    v363 = *(_QWORD *)(a2 + 8);
    v311 = *(_QWORD *)(v363 + 16);
    if ( v311 )
    {
      v317 = v363 + 8;
LABEL_207:
      *(_QWORD *)v376 = v318;
      v323 = v317;
      v324 = v311;
      v375 = v317;
      v377 = v317;
      do
      {
        while ( 1 )
        {
          v327 = *(_QWORD *)(v324 + 40);
          if ( !v327 )
            break;
          v325 = 11;
          if ( v327 <= 0xB )
            v325 = *(_QWORD *)(v324 + 40);
          v326 = memcmp(*(const void **)(v324 + 32), "end_address", v325);
          if ( v326 || (v326 = v327 - 11, (__int64)(v327 - 11) <= 0x7FFFFFFF) )
          {
            if ( v326 < 0 )
              break;
          }
          v323 = v324;
          v324 = *(_QWORD *)(v324 + 16);
          if ( !v324 )
            goto LABEL_216;
        }
        v324 = *(_QWORD *)(v324 + 24);
      }
      while ( v324 );
LABEL_216:
      v328 = v323;
      if ( v323 != v377 )
      {
        v329 = *(_QWORD *)(v323 + 40);
        if ( !v329 )
          goto LABEL_223;
        v330 = 11;
        if ( v329 <= 0xB )
          v330 = v329;
        v331 = memcmp(*(const void **)(v328 + 32), "end_address", v330);
        if ( v331 || (v332 = v329 - 11, v331 = v332, v332 <= 0x7FFFFFFF) )
        {
          if ( v331 <= 0 )
          {
LABEL_223:
            v333 = v311;
            v334 = v377;
            strcpy((char *)s1, "end_address");
            do
            {
              while ( 1 )
              {
                v337 = *(_QWORD *)(v333 + 40);
                if ( !v337 )
                  break;
                v335 = 11;
                if ( v337 <= 0xB )
                  v335 = *(_QWORD *)(v333 + 40);
                v336 = memcmp(*(const void **)(v333 + 32), s1, v335);
                if ( v336 || (v336 = v337 - 11, (__int64)(v337 - 11) <= 0x7FFFFFFF) )
                {
                  if ( v336 < 0 )
                    break;
                }
                v334 = v333;
                v333 = *(_QWORD *)(v333 + 16);
                if ( !v333 )
                  goto LABEL_232;
              }
              v333 = *(_QWORD *)(v333 + 24);
            }
            while ( v333 );
LABEL_232:
            if ( v377 != v334 )
            {
              v338 = *(_QWORD *)(v334 + 40);
              if ( v338 )
              {
                v339 = 11;
                v340 = *(const void **)(v334 + 32);
                *(_QWORD *)v376 = v334;
                if ( v338 <= 0xB )
                  v339 = v338;
                v341 = memcmp(s1, v340, v339);
                v342 = *(_QWORD *)v376;
                if ( v341 || (v341 = 11 - v338, (__int64)(11 - v338) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v341 < 0 )
                    v342 = v377;
                  v375 = v342;
                }
              }
              else
              {
                v375 = v334;
              }
            }
            v444 = (char *)&s2 + 8;
            *(_QWORD *)&s2 = 0;
            BYTE8(s2) = 0;
            if ( *(_BYTE *)(v375 + 64) != 3 )
            {
              v149 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
              switch ( *(_BYTE *)(v375 + 64) )
              {
                case 0:
                  v152 = "null";
                  break;
                case 1:
                  v152 = "object";
                  break;
                case 2:
                  v152 = (char *)"array";
                  break;
                case 3:
                  v152 = "string";
                  break;
                case 4:
                  v152 = "boolean";
                  break;
                case 8:
                  v152 = "binary";
                  break;
                case 9:
                  v152 = "discarded";
                  break;
                default:
                  v152 = "number";
                  break;
              }
              v412[0].m128i_i64[0] = (__int64)v152;
              nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                v149,
                302);
              std::string::_M_dispose();
              __cxa_throw(
                v149,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
            std::string::_M_assign();
            v343 = (char *)v444;
            if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v444 == 48 && (*((_BYTE *)v444 + 1) & 0xDF) == 0x58 )
              v343 = (char *)v444 + 2;
            v344 = __errno_location();
            *v344 = 0;
            v345 = v344;
            *(_QWORD *)v383 = __isoc23_strtoull();
            if ( v343 == (char *)v412[0].m128i_i64[0]
              || *(_BYTE *)v412[0].m128i_i64[0]
              || *v345 == 34 && *(_QWORD *)v383 == -1 )
            {
              if ( v444 != (char *)&s2 + 8 )
                operator delete(v444, *((_QWORD *)&s2 + 1) + 1LL);
              v371 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
              std::runtime_error::runtime_error(v371, "Invalid end_address");
              __cxa_throw(
                v371,
                (struct type_info *)&`typeinfo for'std::runtime_error,
                (void (*)(void *))&std::runtime_error::~runtime_error);
            }
            if ( v444 != (char *)&s2 + 8 )
              operator delete(v444, *((_QWORD *)&s2 + 1) + 1LL);
          }
        }
      }
    }
  }
LABEL_40:
  v401 = (__int64)&v416;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<char const(&)[4],char const(&)[12],std::string,0>();
  if ( v417 == 4 )
  {
    v309 = 1;
    if ( *(_DWORD *)v416 == 1684104562 )
      v309 = 513;
    v398 = v309;
    goto LABEL_45;
  }
  if ( v417 == 5 )
  {
    if ( *(_DWORD *)v416 == 1953067639 && *((_BYTE *)v416 + 4) == 101 )
    {
      v398 = 1025;
      goto LABEL_45;
    }
    goto LABEL_44;
  }
  v398 = 1;
  if ( v417 == 3 )
  {
    if ( *(_WORD *)v416 == 28257 && *((_BYTE *)v416 + 2) == 121 )
    {
      v398 = 1537;
      goto LABEL_45;
    }
LABEL_44:
    v398 = 1;
  }
LABEL_45:
  v405[0] = 0;
  v406 = 0;
  *(_QWORD *)v397 = v405;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v376[0] = v405[0];
  v387 = v406;
  if ( v405[0] == 1 )
  {
    v227 = *(_QWORD *)(v406 + 40);
    *(_QWORD *)v388 = v372[0];
    goto LABEL_97;
  }
  if ( v376[0] == 2 )
  {
    *(_QWORD *)v388 = v372[0];
    goto LABEL_96;
  }
  if ( v376[0] )
  {
    v227 = 1;
    *(_QWORD *)v388 = v372[0];
    goto LABEL_97;
  }
  *(_QWORD *)v388 = v372[0];
  while ( 1 )
  {
    v181 = *(_QWORD *)v383;
    v404 = 0;
    *(_QWORD *)v403 = 0;
    *(_QWORD *)v372 = find_reg_access();
    if ( *(_QWORD *)v372 >= v181 )
    {
LABEL_98:
      v377 = (__int64)v428;
      v390 = (__int64)v427;
      goto LABEL_99;
    }
    v408 = 0;
    *(_OWORD *)v409 = 0;
    generate_disasm_line();
    v410 = 0;
    *(_OWORD *)v411 = 0;
    tag_remove();
    LOBYTE(v421[0]) = 0;
    p_src = (__int64)&src;
    *(_QWORD *)v386 = v421;
    src = v421;
    *(_QWORD *)v420 = 0;
    std::string::_M_replace();
    func = get_func();
    v423.m128_u64[0] = 0;
    v375 = (__int64)&v423.m128_i64[1];
    v422 = &v423.m128_u16[4];
    v423.m128_i8[8] = 0;
    if ( func )
    {
      memset(v412, 0, 24);
      if ( get_func_name() <= 0 )
      {
        qsnprintf();
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&v448,
          s,
          v287,
          v288,
          v289,
          v290,
          v372[0],
          v372[2],
          (__int64)v373);
LABEL_56:
        if ( v412[0].m128i_i64[0] )
        {
          v412[0].m128i_i64[1] = 0;
          qfree();
          v185 = (double *)v422;
          v186 = (double *)v422;
          if ( v422 != (void *)v375 )
            goto LABEL_58;
        }
        else
        {
          v185 = (double *)v422;
          v186 = (double *)v422;
          if ( v422 != (void *)v375 )
          {
LABEL_58:
            v187 = *(_QWORD *)v449;
            if ( v448 != s1 )
            {
              v188 = v423.m128_i64[1];
              v422 = v448;
              v423 = _mm_loadh_ps(s1);
              if ( v185 )
              {
                v448 = v185;
                *(_QWORD *)&s1[0] = v188;
                goto LABEL_61;
              }
              goto LABEL_143;
            }
            goto LABEL_165;
          }
        }
        if ( v448 != s1 )
        {
          v422 = v448;
          v423 = _mm_loadh_ps(s1);
LABEL_143:
          v448 = s1;
          v186 = s1;
          goto LABEL_61;
        }
        v187 = *(_QWORD *)v449;
LABEL_165:
        if ( v187 )
        {
          if ( v187 == 1 )
          {
            *(_BYTE *)v185 = LOBYTE(s1[0]);
            v185 = (double *)v422;
            v187 = *(_QWORD *)v449;
            goto LABEL_172;
          }
          if ( (unsigned int)v187 >= 8 )
          {
            *v185 = s1[0];
            *(double *)((char *)v185 + (unsigned int)v187 - 8) = *(double *)((char *)v449 + (unsigned int)v187);
            v364 = (unsigned __int64)(v185 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v365 = (char *)v185 - v364;
            v366 = (char *)((char *)s1 - v365);
            if ( (((_DWORD)v365 + (_DWORD)v187) & 0xFFFFFFF8) >= 8 )
            {
              v367 = ((_DWORD)v365 + v187) & 0xFFFFFFF8;
              v368 = 0;
              do
              {
                v369 = v368;
                v368 += 8;
                *(_QWORD *)(v364 + v369) = *(_QWORD *)&v366[v369];
              }
              while ( v368 < v367 );
            }
LABEL_171:
            v185 = (double *)v422;
            v187 = *(_QWORD *)v449;
            goto LABEL_172;
          }
          if ( (v187 & 4) != 0 )
          {
            *(_DWORD *)v185 = LODWORD(s1[0]);
            *(_DWORD *)((char *)v185 + (unsigned int)v187 - 4) = *(int *)((char *)&v449[1] + (unsigned int)v187);
            v185 = (double *)v422;
            v187 = *(_QWORD *)v449;
            goto LABEL_172;
          }
          if ( (_DWORD)v187 )
          {
            *(_BYTE *)v185 = LOBYTE(s1[0]);
            if ( (v187 & 2) != 0 )
            {
              *(_WORD *)((char *)v185 + (unsigned int)v187 - 2) = *(_WORD *)((char *)&v449[1] + (unsigned int)v187 + 2);
              v185 = (double *)v422;
              v187 = *(_QWORD *)v449;
              goto LABEL_172;
            }
            goto LABEL_171;
          }
        }
LABEL_172:
        v423.m128_u64[0] = v187;
        *((_BYTE *)v185 + v187) = 0;
        v186 = (double *)v448;
LABEL_61:
        *(_BYTE *)v186 = 0;
        if ( v448 != s1 )
          operator delete(v448, *(_QWORD *)&s1[0] + 1LL);
        goto LABEL_63;
      }
      if ( !v412[0].m128i_i64[1] )
      {
        v448 = s1;
LABEL_54:
        v183 = s1;
        v184 = 0;
LABEL_55:
        *(_QWORD *)v449 = v184;
        *((_BYTE *)v183 + v184) = 0;
        goto LABEL_56;
      }
      v283 = (_BYTE *)v412[0].m128i_i64[0];
      v448 = s1;
      if ( !v412[0].m128i_i64[0] )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v184 = strlen((const char *)v412[0].m128i_i64[0]);
      *(_QWORD *)v407 = v184;
      v284 = v184;
      if ( v184 <= 0xF )
      {
        if ( v184 == 1 )
        {
          LOBYTE(s1[0]) = *v283;
          v183 = s1;
          goto LABEL_55;
        }
        v285 = s1;
        if ( !v184 )
          goto LABEL_54;
      }
      else
      {
        v448 = (void *)std::string::_M_create();
        v285 = (double *)v448;
        s1[0] = *(double *)v407;
      }
      memcpy(v285, v283, v284);
      v184 = *(_QWORD *)v407;
      v183 = (double *)v448;
      goto LABEL_55;
    }
LABEL_63:
    v427[0] = 0;
    v377 = (__int64)v428;
    v428[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v427[0] = 3;
    v189 = operator new(0x20u);
    strcpy((char *)(v189 + 16), "address");
    *(_QWORD *)v189 = v189 + 16;
    *(_QWORD *)(v189 + 8) = 7;
    *(_OWORD *)v428 = (unsigned __int64)v189;
    qsnprintf();
    v389 = (__int64)&v424;
    v424 = v426;
    v190 = strlen(s);
    v412[0].m128i_i64[0] = v190;
    v191 = v190;
    if ( v190 > 0xF )
    {
      v282 = (int *)std::string::_M_create();
      v424 = v282;
      *(_QWORD *)v426 = v412[0].m128i_i64[0];
    }
    else
    {
      if ( v190 == 1 )
      {
        LOBYTE(v426[0]) = s[0];
LABEL_66:
        v192 = v426;
        goto LABEL_67;
      }
      if ( !v190 )
        goto LABEL_66;
      v282 = v426;
    }
    if ( v191 >= 8 )
    {
      *(_QWORD *)v282 = *(_QWORD *)s;
      *(_QWORD *)((char *)v282 + v191 - 8) = *(_QWORD *)&v458[v191];
      v293 = (unsigned __int64)(v282 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v294 = (char *)v282 - v293;
      v295 = (char *)(s - v294);
      v296 = ((_DWORD)v294 + v191) & 0xFFFFFFF8;
      if ( v296 >= 8 )
      {
        v297 = v296 & 0xFFFFFFF8;
        v298 = 0;
        do
        {
          v299 = v298;
          v298 += 8;
          *(_QWORD *)(v293 + v299) = *(_QWORD *)&v295[v299];
        }
        while ( v298 < v297 );
      }
    }
    else if ( (v191 & 4) != 0 )
    {
      *v282 = *(_DWORD *)s;
      *(int *)((char *)v282 + v191 - 4) = *(_DWORD *)&v458[v191 + 4];
    }
    else if ( v191 )
    {
      *(_BYTE *)v282 = s[0];
      if ( (v191 & 2) != 0 )
        *(_WORD *)((char *)v282 + v191 - 2) = *(_WORD *)&v458[v191 + 6];
    }
    v190 = v412[0].m128i_i64[0];
    v192 = (int *)v424;
LABEL_67:
    *(_QWORD *)v425 = v190;
    *((_BYTE *)v192 + v190) = 0;
    v429 = 0;
    v430[0] = 0;
    v378 = (__int64)v430;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v429 = 3;
    v193 = (_QWORD *)operator new(0x20u);
    v194 = (int *)v424;
    v195 = v193 + 2;
    v196 = *(_QWORD *)v425;
    *v193 = v193 + 2;
    if ( v194 == v426 )
    {
      v286 = v196 + 1;
      if ( (unsigned int)(v196 + 1) >= 8 )
      {
        v193[2] = *(_QWORD *)v426;
        *(_QWORD *)((char *)v195 + v286 - 8) = *(_QWORD *)((char *)v425 + v286);
        v303 = (unsigned __int64)(v193 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v304 = (char *)v195 - v303;
        v305 = (char *)((char *)v426 - v304);
        if ( (((_DWORD)v304 + v286) & 0xFFFFFFF8) >= 8 )
        {
          v306 = ((_DWORD)v304 + v286) & 0xFFFFFFF8;
          v307 = 0;
          do
          {
            v308 = v307;
            v307 += 8;
            *(_QWORD *)(v303 + v308) = *(_QWORD *)&v305[v308];
          }
          while ( v307 < v306 );
        }
      }
      else if ( (v286 & 4) != 0 )
      {
        *((_DWORD *)v193 + 4) = v426[0];
        *(_DWORD *)((char *)v195 + v286 - 4) = *(int *)((char *)&v425[1] + v286);
      }
      else if ( (_DWORD)v196 != -1 )
      {
        *((_BYTE *)v193 + 16) = v426[0];
        if ( (v286 & 2) != 0 )
          *(_WORD *)((char *)v195 + v286 - 2) = *(_WORD *)((char *)&v425[1] + v286 + 2);
      }
    }
    else
    {
      *v193 = v194;
      v193[2] = *(_QWORD *)v426;
    }
    v193[1] = v196;
    v424 = v426;
    *(_QWORD *)v425 = 0;
    LOBYTE(v426[0]) = 0;
    v390 = (__int64)v427;
    *(_OWORD *)v430 = (unsigned __int64)v193;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v448,
      (const __m128i *)v427);
    s1[0] = 0.0;
    v431[0] = 0;
    v432[0] = 0;
    v379 = (__int64)v432;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v431[0] = 3;
    v197 = operator new(0x20u);
    strcpy((char *)(v197 + 16), "disassembly");
    *(_QWORD *)v197 = v197 + 16;
    *(_QWORD *)(v197 + 8) = 11;
    *(_OWORD *)v432 = (unsigned __int64)v197;
    if ( v411[0] )
      v198 = (const char *)v410;
    else
      v198 = _qstring<char>::c_str(void)const::nullstr;
    v433 = 0;
    v380 = (__int64)v434;
    v434[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v433 = 3;
    v199 = (__int64 *)operator new(0x20u);
    v200 = v199 + 2;
    v201 = v199;
    *v199 = (__int64)(v199 + 2);
    if ( !v198 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v202 = strlen(v198);
    v412[0].m128i_i64[0] = v202;
    v203 = v202;
    if ( v202 > 0xF )
    {
      v281 = std::string::_M_create();
      *v201 = v281;
      v200 = (void *)v281;
      v201[2] = v412[0].m128i_i64[0];
    }
    else
    {
      if ( v202 == 1 )
      {
        *((_BYTE *)v201 + 16) = *v198;
        goto LABEL_75;
      }
      if ( !v202 )
        goto LABEL_75;
    }
    memcpy(v200, v198, v203);
    v202 = v412[0].m128i_i64[0];
    v200 = (void *)*v201;
LABEL_75:
    v201[1] = v202;
    *((_BYTE *)v200 + v202) = 0;
    v391 = (__int64)v431;
    *(_OWORD *)v434 = (unsigned __int64)v201;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &s1[1],
      (const __m128i *)v431);
    *(_QWORD *)v451 = 0;
    v435[0] = 0;
    v436[0] = 0;
    v382 = (__int64)v436;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v435[0] = 3;
    v204 = operator new(0x20u);
    *(_QWORD *)v204 = v204 + 16;
    strcpy((char *)(v204 + 16), "access_type");
    *(_QWORD *)(v204 + 8) = 11;
    v437 = 0;
    v438[0] = 0;
    v384 = (__int64)v438;
    *(_OWORD *)v436 = (unsigned __int64)v204;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v437 = 3;
    v205 = src;
    v206 = *(_QWORD *)v420;
    v207 = (_QWORD *)operator new(0x20u);
    v208 = v207 + 2;
    *(_QWORD *)v407 = v206;
    v209 = v207;
    *v207 = v207 + 2;
    if ( v206 <= 0xF )
    {
      si128 = (__m128i)(unsigned __int64)v207;
      v211 = v206 + 1;
      if ( v206 )
        goto LABEL_77;
LABEL_126:
      *v208 = *v205;
      v212 = *(_QWORD *)v407;
      goto LABEL_78;
    }
    v279 = std::string::_M_create();
    *v209 = v279;
    v208 = (_BYTE *)v279;
    v280 = *(_QWORD *)v407;
    si128 = (__m128i)(unsigned __int64)v209;
    v209[2] = *(_QWORD *)v407;
    v211 = v280 + 1;
    if ( !v280 )
      goto LABEL_126;
    v212 = -1;
    if ( v211 )
    {
LABEL_77:
      *(__m128i *)v381 = si128;
      memcpy(v208, v205, v211);
      v212 = *(_QWORD *)v407;
      si128 = _mm_load_si128((const __m128i *)v381);
    }
LABEL_78:
    v209[1] = v212;
    v392 = (__int64)v435;
    *(__m128i *)v438 = si128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v452,
      (const __m128i *)v435);
    *(_QWORD *)v453 = 0;
    v439 = 0;
    *(_QWORD *)v440 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v439 = 3;
    v213 = operator new(0x20u);
    strcpy((char *)(v213 + 16), "operand");
    *(_QWORD *)v213 = v213 + 16;
    *(_QWORD *)(v213 + 8) = 7;
    v441 = 6;
    *(_QWORD *)v442 = HIBYTE(v404);
    *(_QWORD *)v443 = 0;
    *(_OWORD *)v440 = (unsigned __int64)v213;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v454,
      (const __m128i *)&v439);
    *(_QWORD *)v455 = 0;
    LOBYTE(v444) = 0;
    *(_QWORD *)&s2 = 0;
    v381[0] = (__int64)&s2;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v444) = 3;
    v214 = operator new(0x20u);
    *(_QWORD *)v214 = v214 + 16;
    strcpy((char *)(v214 + 16), "function");
    *(_QWORD *)(v214 + 8) = 8;
    s2 = (unsigned __int64)v214;
    if ( !v423.m128_u64[0] )
    {
      v215 = nullptr;
      v216 = 0;
      goto LABEL_80;
    }
    memset(v407, 0, sizeof(v407));
    v393 = (__int64)&v407[8];
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v273 = v422;
    v274 = v423.m128_u64[0];
    v275 = (_QWORD *)operator new(0x20u);
    v276 = v275 + 2;
    v402 = v274;
    v215 = v275;
    *v275 = v275 + 2;
    if ( v274 > 0xF )
    {
      v291 = std::string::_M_create();
      *v215 = v291;
      v276 = (_BYTE *)v291;
      v292 = v402;
      v215[2] = v402;
      v277 = v292 + 1;
      if ( !v292 )
      {
LABEL_156:
        *v276 = *v273;
        v278 = v402;
        goto LABEL_123;
      }
      v278 = -1;
      if ( !v277 )
        goto LABEL_123;
    }
    else
    {
      v277 = v274 + 1;
      if ( !v274 )
        goto LABEL_156;
    }
    memcpy(v276, v273, v277);
    v278 = v402;
LABEL_123:
    v215[1] = v278;
    v216 = 3;
LABEL_80:
    *(_QWORD *)&v407[8] = v215;
    v407[0] = v216;
    v217 = _mm_load_si128((const __m128i *)v407);
    *(_QWORD *)v447 = 0;
    *(__m128i *)v446 = v217;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v456,
      (const __m128i *)&v444);
    v373 = (nlohmann::json_abi_v3_12_0::detail::type_error *)&v448;
    *(_QWORD *)v457 = 0;
    *(_QWORD *)v374 = 5;
    v412[0].m128i_i8[0] = 0;
    v412[0].m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v399 = v412[0].m128i_i8[0];
    v393 = v412[0].m128i_i64[1];
    if ( v376[0] )
    {
      if ( v376[0] != 2 )
        ida_mcp::tools::reg_search::`anonymous namespace'::find_register_access_impl(
          (int)v412,
          (int)&v448,
          v218,
          v219,
          v220,
          v221,
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
          a117,
          a118,
          a119,
          a120,
          a121,
          a122,
          a123,
          a124,
          a125,
          a126,
          a127,
          a128,
          a129,
          a130,
          a131,
          a132,
          a133,
          a134,
          a135,
          a136,
          a137,
          a138,
          a139,
          a140,
          a141,
          a142,
          a143,
          a144,
          a145,
          a146,
          a147);
      v300 = v387;
      v301 = *(_QWORD *)(v387 + 8);
      if ( v301 != *(_QWORD *)(v387 + 16) )
      {
        v302 = v301 + 16;
        v224 = 0;
        *(__m128i *)(v302 - 16) = _mm_load_si128(v412);
        *(_QWORD *)(v300 + 8) = v302;
        v225 = 0;
        goto LABEL_83;
      }
      v223 = v387;
    }
    else
    {
      v222 = operator new(0x18u);
      *(_QWORD *)(v222 + 16) = 0;
      v223 = v222;
      *(_OWORD *)v222 = 0;
    }
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v387 = v223;
    v224 = v412[0].m128i_i8[0];
    v225 = v412[0].m128i_i64[1];
LABEL_83:
    v412[0].m128i_i8[0] = v224;
    v226 = v458;
    v412[0].m128i_i64[1] = v225;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v226 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v226 != (char *)&v448 );
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
    if ( v424 != v426 )
      operator delete(v424, *(_QWORD *)v426 + 1LL);
    if ( next_head() == -1 )
      break;
    if ( v422 != (void *)v375 )
      operator delete(v422, v423.m128_u64[1] + 1);
    if ( src != *(void **)v386 )
      operator delete(src, *(_QWORD *)v421 + 1LL);
    if ( v410 )
    {
      v411[0] = 0;
      qfree();
    }
    if ( v408 )
    {
      v409[0] = 0;
      qfree();
    }
LABEL_96:
    v376[0] = 2;
    v227 = (__int64)(*(_QWORD *)(v387 + 8) - *(_QWORD *)v387) >> 4;
LABEL_97:
    if ( v227 >= *(_QWORD *)v388 )
      goto LABEL_98;
  }
  if ( v422 != (void *)v375 )
    operator delete(v422, v423.m128_u64[1] + 1);
  if ( src != *(void **)v386 )
    operator delete(src, *(_QWORD *)v421 + 1LL);
  if ( v410 )
  {
    v411[0] = 0;
    qfree();
  }
  if ( v408 )
  {
    v409[0] = 0;
    qfree();
  }
  v376[0] = 2;
LABEL_99:
  v427[0] = 0;
  v428[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v427[0] = 3;
  v228 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v228,
    "register",
    v229,
    v230,
    v231,
    v232,
    v372[0],
    v372[2],
    (__int64)v373);
  v429 = 0;
  v378 = (__int64)v430;
  v430[0] = 0;
  *(_OWORD *)v428 = (unsigned __int64)v228;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v429 = 3;
  v233 = v413;
  v234 = v414;
  v235 = (_QWORD *)operator new(0x20u);
  v236 = v235 + 2;
  v410 = v234;
  v237 = v235;
  *v235 = v235 + 2;
  if ( v234 > 0xF )
  {
    v348 = std::string::_M_create();
    *v237 = v348;
    v236 = (_BYTE *)v348;
    v349 = v410;
    v238 = (__m128i)(unsigned __int64)v237;
    v237[2] = v410;
    v239 = v349 + 1;
    if ( !v349 )
      goto LABEL_186;
    v240 = -1;
    if ( v239 )
    {
LABEL_101:
      *(__m128i *)v372 = v238;
      memcpy(v236, v233, v239);
      v240 = v410;
      v238 = _mm_load_si128((const __m128i *)v372);
    }
  }
  else
  {
    v238 = (__m128i)(unsigned __int64)v235;
    v239 = v234 + 1;
    if ( v234 )
      goto LABEL_101;
LABEL_186:
    *v236 = *v233;
    v240 = v410;
  }
  v237[1] = v240;
  *(__m128i *)v430 = v238;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v448,
    (const __m128i *)v390);
  s1[0] = 0.0;
  v431[0] = 0;
  v432[0] = 0;
  v379 = (__int64)v432;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v431[0] = 3;
  v241 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v241,
    "access_filter",
    v242,
    v243,
    v244,
    v245,
    v372[0],
    v372[2],
    (__int64)v373);
  v433 = 0;
  v380 = (__int64)v434;
  v434[0] = 0;
  *(_OWORD *)v432 = (unsigned __int64)v241;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v433 = 3;
  v246 = v416;
  v247 = v417;
  v248 = (_QWORD *)operator new(0x20u);
  v249 = v248 + 2;
  v412[0].m128i_i64[0] = v247;
  v250 = v248;
  *v248 = v248 + 2;
  if ( v247 > 0xF )
  {
    v346 = std::string::_M_create();
    *v250 = v346;
    v249 = (_BYTE *)v346;
    v347 = v412[0].m128i_i64[0];
    v251 = (__m128i)(unsigned __int64)v250;
    v250[2] = v412[0].m128i_i64[0];
    v252 = v347 + 1;
    if ( !v347 )
      goto LABEL_185;
    v253 = -1;
    if ( v252 )
    {
LABEL_104:
      *(__m128i *)v372 = v251;
      memcpy(v249, v246, v252);
      v253 = v412[0].m128i_i64[0];
      v251 = _mm_load_si128((const __m128i *)v372);
    }
  }
  else
  {
    v251 = (__m128i)(unsigned __int64)v248;
    v252 = v247 + 1;
    if ( v247 )
      goto LABEL_104;
LABEL_185:
    *v249 = *v246;
    v253 = v412[0].m128i_i64[0];
  }
  v250[1] = v253;
  v391 = (__int64)v431;
  *(__m128i *)v434 = v251;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)v431);
  *(_QWORD *)v451 = 0;
  v435[0] = 0;
  v436[0] = 0;
  v382 = (__int64)v436;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v435[0] = 3;
  v254 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v254,
    "match_count",
    v255,
    v256,
    v257,
    v258,
    v372[0],
    v372[2],
    (__int64)v373);
  *(_OWORD *)v436 = (unsigned __int64)v254;
  if ( v376[0] == 1 )
  {
    v259 = *(_QWORD *)(v387 + 40);
  }
  else if ( v376[0] == 2 )
  {
    v259 = (__int64)(*(_QWORD *)(v387 + 8) - *(_QWORD *)v387) >> 4;
  }
  else
  {
    v259 = v376[0] != 0;
  }
  v437 = 6;
  v438[0] = v259;
  v438[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v452,
    (const __m128i *)v435);
  *(_QWORD *)v453 = 0;
  v439 = 0;
  *(_QWORD *)v440 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v439 = 3;
  v260 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v260,
    "truncated",
    v261,
    v262,
    v263,
    v264,
    v372[0],
    v372[2],
    (__int64)v373);
  *(_OWORD *)v440 = (unsigned __int64)v260;
  if ( v376[0] == 1 )
  {
    v265 = *(_QWORD *)(v387 + 40) >= *(_QWORD *)v388;
  }
  else if ( v376[0] == 2 )
  {
    v265 = (unsigned __int64)((__int64)(*(_QWORD *)(v387 + 8) - *(_QWORD *)v387) >> 4) >= *(_QWORD *)v388;
  }
  else
  {
    v265 = 0;
    if ( v376[0] )
      v265 = *(_QWORD *)v388 == 1;
  }
  v441 = 4;
  *(_QWORD *)v442 = v265;
  *(_QWORD *)v443 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v454,
    (const __m128i *)&v439);
  *(_QWORD *)v455 = 0;
  LOBYTE(v444) = 0;
  *(_QWORD *)&s2 = 0;
  v381[0] = (__int64)&s2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v444) = 3;
  v266 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v266,
    "results",
    v267,
    v268,
    v269,
    v270,
    v372[0],
    v372[2],
    (__int64)v373);
  s2 = (unsigned __int64)v266;
  v405[0] = v376[0];
  v406 = v387;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)v447 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v456,
    (const __m128i *)&v444);
  *(_QWORD *)v457 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v271 = v458;
  do
  {
    v271 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v271 != (char *)&v448 );
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
  if ( v416 != &v418 )
    operator delete(v416, v418 + 1);
  if ( v413 != v396 )
    operator delete(v413, v415[0] + 1LL);
  return v394;
}

