__int64 __fastcall ida_mcp::tools::read_bytes::`anonymous namespace'::handle_read_bytes(
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
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
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
        __int64 a46,
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
        char a76,
        int a77,
        int a78,
        int a79,
        int a80,
        int a81,
        char a82,
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
        int a117,
        int a118,
        int a119,
        int a120,
        int a121,
        int a122,
        int a123,
        int a124,
        int a125,
        int a126,
        int a127,
        int a128,
        int a129,
        char a130,
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
        int a141,
        int a142,
        int a143,
        int a144,
        int a145,
        int a146,
        int a147,
        int a148,
        int a149,
        int a150,
        int a151,
        int a152,
        int a153,
        int a154,
        int a155,
        int a156,
        int a157,
        int a158,
        int a159,
        int a160,
        int a161,
        int a162,
        int a163,
        int a164,
        int a165,
        int a166,
        int a167,
        int a168,
        int a169,
        int a170,
        int a171,
        int a172,
        int a173,
        int a174,
        int a175,
        int a176,
        int a177,
        int a178,
        int a179,
        int a180,
        int a181,
        int a182,
        __int64 a183)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v183; // rbp
  char *v184; // rax
  std::runtime_error *v185; // rbx
  void *v186; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v187; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v189; // rax
  char *v190; // rax
  __int64 v191; // rax
  __int64 v192; // rbx
  __int64 v193; // r14
  __int64 v194; // r15
  size_t v195; // rdx
  int v196; // eax
  unsigned __int64 v197; // r13
  unsigned __int64 v198; // rbx
  size_t v199; // rax
  int v200; // eax
  __int64 v201; // r13
  int *v202; // rax
  int *v203; // r14
  std::runtime_error *v204; // rbx
  __int64 v205; // rax
  __int64 v206; // rbp
  __int64 v207; // r14
  __int64 v208; // r13
  size_t v209; // rdx
  int v210; // eax
  unsigned __int64 v211; // r12
  unsigned __int64 v212; // rbp
  size_t v213; // rax
  int v214; // eax
  unsigned __int64 v215; // rbp
  _BYTE *v216; // r12
  _DWORD *v217; // rdx
  unsigned int v218; // eax
  __int64 bytes; // rax
  size_t v220; // r14
  char *v221; // rbp
  std::ios_base *v222; // rcx
  __int64 v223; // r14
  __int64 v224; // r12
  __int64 v225; // rax
  __int64 v226; // rcx
  __m128i si128; // xmm1
  unsigned __int64 v228; // r15
  __int64 v229; // rsi
  __int8 *v230; // rdx
  int v231; // eax
  _QWORD *v232; // r15
  __m128i v233; // xmm2
  char *v234; // r14
  char *v235; // r15
  char v236; // si
  __int64 v237; // rax
  void *v238; // rcx
  _QWORD *v239; // rdx
  void *v240; // rcx
  _QWORD *v241; // rdx
  __int64 v242; // rax
  __int64 v243; // rax
  std::ios_base *v244; // rdi
  unsigned __int64 v245; // r12
  std::ios_base *v246; // rsi
  _BYTE *v247; // rdx
  unsigned __int64 v248; // rcx
  unsigned __int64 v249; // r15
  char v250; // r10
  std::ios_base *v251; // rsi
  _BYTE *v252; // rdx
  unsigned __int64 v253; // rcx
  unsigned __int64 v254; // r15
  char v255; // r15
  std::ios_base *v256; // rsi
  _BYTE *v257; // rdx
  unsigned __int64 v258; // rcx
  unsigned __int64 v259; // rbp
  unsigned int v260; // ebp
  unsigned __int64 v261; // rcx
  unsigned __int64 v262; // r15
  char v263; // r10
  std::ios_base *v264; // rsi
  char v265; // r10
  unsigned int v266; // eax
  unsigned int v267; // eax
  std::ios_base *v268; // r9
  __int64 v269; // rax
  size_t v270; // rax
  unsigned int v271; // r12d
  _BYTE *v272; // rdx
  _QWORD *v273; // rax
  _QWORD *v274; // rcx
  __int64 *v275; // rdx
  size_t v276; // rsi
  __int64 v277; // rax
  __int64 v278; // rax
  std::ios_base *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rax
  __int64 v282; // r12
  _QWORD *v283; // rbp
  std::ios_base *v284; // rax
  void **v285; // r13
  size_t v286; // rcx
  __int64 v287; // rax
  _QWORD *v288; // rax
  _BYTE *v289; // r15
  unsigned __int64 v290; // r14
  _QWORD *v291; // rax
  _BYTE *v292; // rdi
  __int64 *v293; // r12
  __int64 v294; // rax
  unsigned __int64 v295; // rax
  std::ios_base *v296; // rax
  __int64 v297; // rax
  std::ios_base *v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rax
  __int64 v301; // r12
  _QWORD *v302; // rbp
  std::ios_base *v303; // rax
  void **v304; // r13
  size_t v305; // rcx
  __int64 v306; // rax
  _QWORD *v307; // rax
  _BYTE *v308; // r15
  unsigned __int64 v309; // r14
  _QWORD *v310; // rax
  _BYTE *v311; // rdi
  __int64 *v312; // r12
  __int64 v313; // rax
  unsigned __int64 v314; // rax
  std::ios_base *v315; // rax
  __int64 v316; // rax
  unsigned __int64 v317; // r12
  _QWORD *v318; // rax
  _BYTE *v319; // rdi
  __int64 *v320; // rbp
  __m128i v321; // xmm0
  size_t v322; // rdx
  __int64 v323; // rax
  int *v324; // rbx
  void **v325; // rbx
  void **v326; // rbx
  unsigned __int64 v328; // rsi
  char *v329; // rdx
  char *v330; // r8
  unsigned int v331; // eax
  unsigned int v332; // eax
  unsigned int v333; // edx
  __int64 v334; // rdi
  unsigned __int64 v335; // rsi
  char *v336; // rdx
  char *v337; // r14
  unsigned int v338; // eax
  unsigned int v339; // eax
  unsigned int v340; // edx
  __int64 v341; // rdi
  _QWORD *v342; // rdx
  unsigned __int64 v343; // r15
  _BYTE *v344; // rdi
  __int64 v345; // rax
  __int64 v346; // rax
  unsigned __int8 v347; // al
  int v348; // edx
  _BYTE *v349; // rax
  _BYTE *v350; // rcx
  unsigned int v351; // edi
  size_t v352; // r12
  unsigned __int64 v353; // r12
  __int64 v354; // rax
  char *v355; // r13
  size_t v356; // r15
  unsigned __int64 v357; // rcx
  char *v358; // rdx
  char *v359; // rbp
  unsigned int v360; // eax
  unsigned int v361; // edx
  __int64 v362; // rsi
  unsigned __int64 v363; // r8
  char *v364; // rcx
  char *v365; // r11
  unsigned int v366; // edx
  unsigned int v367; // ecx
  __int64 v368; // rdi
  std::ios_base *src; // [rsp+8h] [rbp-5C0h]
  _BYTE *srca; // [rsp+8h] [rbp-5C0h]
  void **v371; // [rsp+10h] [rbp-5B8h]
  void **v372; // [rsp+18h] [rbp-5B0h]
  int v373[2]; // [rsp+20h] [rbp-5A8h]
  std::ios_base *v374; // [rsp+28h] [rbp-5A0h]
  std::ios_base *v375; // [rsp+28h] [rbp-5A0h]
  int v376[4]; // [rsp+30h] [rbp-598h] BYREF
  void *v377; // [rsp+40h] [rbp-588h]
  std::ios_base *v378; // [rsp+48h] [rbp-580h]
  int v379[4]; // [rsp+50h] [rbp-578h] BYREF
  void **v380; // [rsp+60h] [rbp-568h]
  void **v381; // [rsp+68h] [rbp-560h]
  std::locale *v382; // [rsp+70h] [rbp-558h]
  std::locale *v383; // [rsp+78h] [rbp-550h]
  __int128 *v384; // [rsp+80h] [rbp-548h]
  int *v385; // [rsp+88h] [rbp-540h]
  void *v386; // [rsp+90h] [rbp-538h]
  void *v387; // [rsp+98h] [rbp-530h]
  __int128 *v388; // [rsp+A0h] [rbp-528h]
  __int128 *v389; // [rsp+A8h] [rbp-520h]
  _BYTE **v390; // [rsp+B0h] [rbp-518h]
  char v391[8]; // [rsp+B8h] [rbp-510h]
  void **v392; // [rsp+C0h] [rbp-508h]
  char *v393; // [rsp+C8h] [rbp-500h]
  char *v394; // [rsp+D0h] [rbp-4F8h]
  char *v395; // [rsp+D8h] [rbp-4F0h]
  char v396; // [rsp+EFh] [rbp-4D9h]
  _QWORD *v397; // [rsp+F0h] [rbp-4D8h] BYREF
  unsigned __int64 v398; // [rsp+F8h] [rbp-4D0h] BYREF
  _QWORD *v399; // [rsp+100h] [rbp-4C8h] BYREF
  unsigned __int64 v400; // [rsp+108h] [rbp-4C0h] BYREF
  __m128i v401; // [rsp+110h] [rbp-4B8h]
  void *v402; // [rsp+120h] [rbp-4A8h] BYREF
  void **v403; // [rsp+128h] [rbp-4A0h]
  void **v404; // [rsp+130h] [rbp-498h]
  _BYTE *v405; // [rsp+140h] [rbp-488h] BYREF
  void **v406; // [rsp+148h] [rbp-480h]
  void **v407; // [rsp+150h] [rbp-478h]
  void *v408; // [rsp+160h] [rbp-468h]
  std::ios_base *v409; // [rsp+168h] [rbp-460h]
  int v410[2]; // [rsp+170h] [rbp-458h] BYREF
  void *v411; // [rsp+180h] [rbp-448h] BYREF
  size_t v412; // [rsp+188h] [rbp-440h]
  __int64 v413[2]; // [rsp+190h] [rbp-438h] BYREF
  char v414; // [rsp+1A0h] [rbp-428h] BYREF
  __int128 v415; // [rsp+1A8h] [rbp-420h] BYREF
  char v416; // [rsp+1B8h] [rbp-410h]
  __int128 v417; // [rsp+1C0h] [rbp-408h] BYREF
  char v418; // [rsp+1D0h] [rbp-3F8h] BYREF
  __int128 v419; // [rsp+1D8h] [rbp-3F0h] BYREF
  char v420; // [rsp+1E8h] [rbp-3E0h]
  __int128 *v421; // [rsp+1F0h] [rbp-3D8h]
  __int64 v422; // [rsp+1F8h] [rbp-3D0h]
  char v423; // [rsp+200h] [rbp-3C8h] BYREF
  __int128 v424; // [rsp+208h] [rbp-3C0h] BYREF
  char v425; // [rsp+218h] [rbp-3B0h]
  __int128 v426; // [rsp+220h] [rbp-3A8h] BYREF
  void *v427; // [rsp+230h] [rbp-398h] BYREF
  __int128 v428; // [rsp+238h] [rbp-390h] BYREF
  char v429; // [rsp+248h] [rbp-380h]
  int v430[4]; // [rsp+250h] [rbp-378h] BYREF
  __m256i v431; // [rsp+260h] [rbp-368h] BYREF
  __m128i v432; // [rsp+280h] [rbp-348h]
  __int128 v433; // [rsp+290h] [rbp-338h]
  char v434[8]; // [rsp+2A0h] [rbp-328h] BYREF
  int v435; // [rsp+2A8h] [rbp-320h]
  void *v436; // [rsp+2B0h] [rbp-318h]
  __int64 v437; // [rsp+2B8h] [rbp-310h]
  _QWORD v438[2]; // [rsp+2C0h] [rbp-308h] BYREF
  _QWORD v439[28]; // [rsp+2D0h] [rbp-2F8h] BYREF
  __int16 v440; // [rsp+3B0h] [rbp-218h]
  __int128 v441; // [rsp+3B8h] [rbp-210h]
  __int128 v442; // [rsp+3C8h] [rbp-200h]
  int v443[4]; // [rsp+3E0h] [rbp-1E8h] BYREF
  int v444[4]; // [rsp+3F0h] [rbp-1D8h] BYREF
  __int128 v445; // [rsp+400h] [rbp-1C8h]
  int v446[4]; // [rsp+410h] [rbp-1B8h] BYREF
  __int64 v447; // [rsp+420h] [rbp-1A8h] BYREF
  __int64 v448; // [rsp+428h] [rbp-1A0h] BYREF
  void *v449; // [rsp+430h] [rbp-198h]
  __int64 v450; // [rsp+438h] [rbp-190h]
  int v451[2]; // [rsp+440h] [rbp-188h] BYREF
  char *v452; // [rsp+450h] [rbp-178h] BYREF
  char v453; // [rsp+458h] [rbp-170h] BYREF
  __int64 v454; // [rsp+528h] [rbp-A0h]
  __int16 v455; // [rsp+530h] [rbp-98h]
  __int128 v456; // [rsp+538h] [rbp-90h]
  __int128 v457; // [rsp+548h] [rbp-80h]
  _BYTE v458[8]; // [rsp+558h] [rbp-70h]
  char s[40]; // [rsp+560h] [rbp-68h] BYREF
  unsigned __int64 v460; // [rsp+588h] [rbp-40h]

  *(_QWORD *)v391 = a1;
  v460 = __readfsqword(0x28u);
  v431.m256i_i64[0] = (__int64)&v431.m256i_i64[2];
  strcpy(&v431.m256i_i8[16], "address");
  v431.m256i_i64[1] = 7;
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::read_bytes::`anonymous namespace'::handle_read_bytes(
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
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
      a147,
      a148,
      a149,
      a150,
      a151,
      a152,
      a153,
      a154,
      a155,
      a156,
      a157,
      a158,
      a159,
      a160,
      a161,
      a162,
      a163,
      a164,
      a165,
      a166,
      a167,
      a168,
      a169,
      a170,
      a171,
      a172,
      a173,
      a174,
      a175,
      a176,
      a177,
      a178,
      a179,
      a180,
      a181,
      a182,
      a183);
  v191 = *(_QWORD *)(a2 + 8);
  v192 = *(_QWORD *)(v191 + 16);
  v193 = v191 + 8;
  if ( v192 )
  {
    v194 = v191 + 8;
    do
    {
      while ( 1 )
      {
        v197 = *(_QWORD *)(v192 + 40);
        if ( !v197 )
          break;
        v195 = 7;
        if ( v197 <= 7 )
          v195 = *(_QWORD *)(v192 + 40);
        v196 = memcmp(*(const void **)(v192 + 32), &v431.m256i_u64[2], v195);
        if ( v196 || (v196 = v197 - 7, (__int64)(v197 - 7) <= 0x7FFFFFFF) )
        {
          if ( v196 < 0 )
            break;
        }
        v194 = v192;
        v192 = *(_QWORD *)(v192 + 16);
        if ( !v192 )
          goto LABEL_12;
      }
      v192 = *(_QWORD *)(v192 + 24);
    }
    while ( v192 );
LABEL_12:
    if ( v193 != v194 )
    {
      v198 = *(_QWORD *)(v194 + 40);
      if ( v198 )
      {
        v199 = 7;
        if ( v198 <= 7 )
          v199 = *(_QWORD *)(v194 + 40);
        v200 = memcmp(&v431.m256i_u64[2], *(const void **)(v194 + 32), v199);
        if ( v200 || (v200 = 7 - v198, (__int64)(7 - v198) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v200 >= 0 )
            v193 = v194;
        }
      }
      else
      {
        v193 = v194;
      }
    }
  }
  v431.m256i_i64[0] = (__int64)&v431.m256i_i64[2];
  v431.m256i_i64[1] = 0;
  v431.m256i_i8[16] = 0;
  if ( *(_BYTE *)(v193 + 64) != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v193 + 64) )
    {
      case 0:
        v190 = "null";
        break;
      case 1:
        v190 = "object";
        break;
      case 2:
        v190 = (char *)"array";
        break;
      case 3:
        v190 = "string";
        break;
      case 4:
        v190 = "boolean";
        break;
      case 8:
        v190 = "binary";
        break;
      case 9:
        v190 = "discarded";
        break;
      default:
        v190 = "number";
        break;
    }
    v405 = v190;
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
  v201 = v431.m256i_i64[0];
  v202 = __errno_location();
  *v202 = 0;
  v203 = v202;
  v390 = &v405;
  v388 = (__int128 *)__isoc23_strtoull();
  if ( (_BYTE *)v201 == v405 || *v405 || *v203 == 34 && v388 == (__int128 *)-1LL )
  {
    if ( (unsigned __int64 *)v431.m256i_i64[0] != &v431.m256i_u64[2] )
      operator delete((void *)v431.m256i_i64[0], v431.m256i_i64[2] + 1);
    v204 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v204, "Invalid address format");
    __cxa_throw(
      v204,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (unsigned __int64 *)v431.m256i_i64[0] != &v431.m256i_u64[2] )
    operator delete((void *)v431.m256i_i64[0], v431.m256i_i64[2] + 1);
  if ( *(_BYTE *)a2 != 1 )
  {
    v187 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v189 = "null";
        break;
      case 1:
        v189 = "object";
        break;
      case 2:
        v189 = (char *)"array";
        break;
      case 3:
        v189 = "string";
        break;
      case 4:
        v189 = "boolean";
        break;
      case 8:
        v189 = "binary";
        break;
      case 9:
        v189 = "discarded";
        break;
      default:
        v189 = "number";
        break;
    }
    v405 = v189;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v187,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v187,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v205 = *(_QWORD *)(a2 + 8);
  v206 = *(_QWORD *)(v205 + 16);
  if ( !v206 )
    goto LABEL_304;
  v207 = v205 + 8;
  v208 = v205 + 8;
  do
  {
    while ( 1 )
    {
      v211 = *(_QWORD *)(v206 + 40);
      if ( !v211 )
        break;
      v209 = 4;
      if ( v211 <= 4 )
        v209 = *(_QWORD *)(v206 + 40);
      v210 = memcmp(*(const void **)(v206 + 32), "size", v209);
      if ( v210 || (v210 = v211 - 4, (__int64)(v211 - 4) <= 0x7FFFFFFF) )
      {
        if ( v210 < 0 )
          break;
      }
      v208 = v206;
      v206 = *(_QWORD *)(v206 + 16);
      if ( !v206 )
        goto LABEL_41;
    }
    v206 = *(_QWORD *)(v206 + 24);
  }
  while ( v206 );
LABEL_41:
  if ( v207 == v208 )
    goto LABEL_304;
  v212 = *(_QWORD *)(v208 + 40);
  if ( v212 )
  {
    v213 = 4;
    if ( v212 <= 4 )
      v213 = *(_QWORD *)(v208 + 40);
    if ( (v214 = memcmp(*(const void **)(v208 + 32), "size", v213)) == 0
      && (v214 = v212 - 4, (__int64)(v212 - 4) > 0x7FFFFFFF)
      || v214 > 0 )
    {
LABEL_304:
      if ( (unsigned __int8)is_loaded() )
      {
        v215 = 16;
        v377 = (void *)operator new(0x10u);
        v216 = (char *)v377 + 16;
        v217 = (char *)v377 + 1;
        *(_BYTE *)v377 = 0;
        v218 = 15;
        goto LABEL_50;
      }
LABEL_301:
      JUMPOUT(0xBD43C);
    }
  }
  v347 = *(_BYTE *)(v208 + 64);
  if ( v347 == 6 )
    goto LABEL_220;
  if ( v347 > 6u )
  {
    if ( v347 != 7 )
      goto LABEL_267;
    v348 = (int)*(double *)(v208 + 72);
  }
  else
  {
    if ( v347 != 4 )
    {
      if ( v347 == 5 )
      {
LABEL_220:
        v348 = *(_DWORD *)(v208 + 72);
        goto LABEL_221;
      }
LABEL_267:
      v183 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)(v208 + 64) )
      {
        case 0:
          v184 = "null";
          break;
        case 1:
          v184 = "object";
          break;
        case 2:
          v184 = (char *)"array";
          break;
        case 3:
          v184 = "string";
          break;
        case 4:
          v184 = "boolean";
          break;
        case 8:
          v184 = "binary";
          break;
        case 9:
          v184 = "discarded";
          break;
        default:
          v184 = "number";
          break;
      }
      v405 = v184;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v183,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v183,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v348 = *(unsigned __int8 *)(v208 + 72);
  }
LABEL_221:
  v215 = v348;
  if ( (unsigned __int64)v348 > 0x1000 )
    v215 = 4096;
  if ( !v348 )
  {
    v185 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v185, "Size must be > 0");
    __cxa_throw(
      v185,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( !(unsigned __int8)is_loaded() )
    goto LABEL_301;
  v349 = (_BYTE *)operator new(v215);
  v350 = &v349[v215];
  v377 = v349;
  v216 = v349 + 1;
  *v349 = 0;
  v393 = &v349[v215];
  v218 = v215 - 1;
  if ( v215 == 1 )
  {
    v215 = 1;
    goto LABEL_53;
  }
  v217 = v216;
  v216 = v350;
LABEL_50:
  if ( v218 < 8 )
  {
    if ( (v218 & 4) != 0 )
    {
      *v217 = 0;
      *(_DWORD *)((char *)v217 + v218 - 4) = 0;
    }
    else if ( v218 )
    {
      *(_BYTE *)v217 = 0;
      if ( (v218 & 2) != 0 )
        *(_WORD *)((char *)v217 + v218 - 2) = 0;
    }
  }
  else
  {
    *(_QWORD *)v217 = 0;
    *(_QWORD *)((char *)v217 + v218 - 8) = 0;
    memset(
      (void *)((unsigned __int64)(v217 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((v218 + (_DWORD)v217 - (((_DWORD)v217 + 8) & 0xFFFFFFF8)) >> 3));
  }
  v393 = v216;
LABEL_53:
  bytes = get_bytes();
  v389 = (__int128 *)bytes;
  if ( bytes <= 0 )
  {
    v186 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v186,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v220 = v216 - (_BYTE *)v377;
  src = (std::ios_base *)bytes;
  if ( v216 - (_BYTE *)v377 < (unsigned __int64)bytes )
  {
    v343 = bytes - v220;
    if ( v393 - v216 < bytes - v220 )
    {
      if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v343 )
        std::__throw_length_error("vector::_M_default_append");
      v352 = bytes - v220;
      if ( v220 >= v343 )
        v352 = v220;
      v353 = v220 + v352;
      if ( v353 > 0x7FFFFFFFFFFFFFFFLL )
        v353 = 0x7FFFFFFFFFFFFFFFLL;
      v354 = operator new(v353);
      *(_BYTE *)(v354 + v220) = 0;
      v355 = (char *)v354;
      v356 = v343 - 1;
      if ( v356 )
        memset((void *)(v354 + v220 + 1), 0, v356);
      if ( v220 )
        memcpy(v355, v377, v220);
      operator delete(v377, v215);
      v377 = v355;
      v393 = &v355[v353];
    }
    else
    {
      *v216 = 0;
      v344 = v216 + 1;
      if ( v343 != 1 )
      {
        memset(v344, 0, v343 - 1);
        v344 = &v216[v343];
      }
      src = (std::ios_base *)(v344 - (_BYTE *)v377);
    }
  }
  else
  {
    src = (std::ios_base *)bytes;
  }
  v381 = nullptr;
  v372 = nullptr;
  v221 = (char *)v377;
  v386 = nullptr;
  v222 = src;
  v380 = nullptr;
  v378 = (std::ios_base *)v439;
  v371 = nullptr;
  v387 = nullptr;
  *(_QWORD *)v376 = 0;
  *(__m128i *)v379 = _mm_unpacklo_epi64(
                       (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                       (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( src )
  {
    do
    {
      v223 = (__int64)v222 - *(_QWORD *)v376;
      if ( (unsigned __int64)v222 - *(_QWORD *)v376 > 0x10 )
        v223 = 16;
      std::ios_base::ios_base(v378);
      v441 = 0;
      v440 = 0;
      v442 = 0;
      v439[0] = (char *)&`vtable for'std::ios + 16;
      v439[27] = 0;
      v224 = `VTT for'std::ostringstream[1];
      v225 = `VTT for'std::ostringstream[2];
      v226 = *(_QWORD *)(v224 - 24);
      v431.m256i_i64[0] = v224;
      *(_QWORD *)v373 = v225;
      *(__int64 *)((char *)v431.m256i_i64 + v226) = v225;
      std::ios::init();
      si128 = _mm_load_si128((const __m128i *)v379);
      *(_OWORD *)&v431.m256i_u64[2] = 0;
      *(__m128i *)v431.m256i_i8 = si128;
      v439[0] = (char *)&`vtable for'std::ostringstream + 64;
      v382 = (std::locale *)v434;
      v432 = 0;
      v433 = 0;
      std::locale::locale((std::locale *)v434);
      v435 = 16;
      LOBYTE(v438[0]) = 0;
      v431.m256i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
      v384 = (__int128 *)v438;
      v436 = v438;
      v437 = 0;
      std::ios::init();
      v228 = 0;
      do
      {
        while ( 1 )
        {
          v229 = v431.m256i_i64[0];
          v230 = &v431.m256i_i8[*(_QWORD *)(v431.m256i_i64[0] - 24)];
          v231 = *((_DWORD *)v230 + 6);
          *((_QWORD *)v230 + 2) = 2;
          *((_DWORD *)v230 + 6) = v231 & 0xFFFFFFB5 | 8;
          *(_WORD *)((char *)&v439[14] + *(_QWORD *)(v229 - 24)) = 304;
          std::ostream::operator<<();
          if ( v228 < v223 - 1 )
            break;
          if ( ++v228 == v223 )
            goto LABEL_63;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v228;
      }
      while ( v228 != v223 );
LABEL_63:
      std::ios_base::ios_base((std::ios_base *)&v452);
      v455 = 0;
      v456 = 0;
      v457 = 0;
      v232 = (_QWORD *)((char *)v443 + *(_QWORD *)(v224 - 24));
      v452 = (char *)&`vtable for'std::ios + 16;
      v454 = 0;
      *(_QWORD *)v443 = v224;
      *v232 = *(_QWORD *)v373;
      std::ios::init();
      v233 = _mm_load_si128((const __m128i *)v379);
      *(_OWORD *)v444 = 0;
      *(__m128i *)v443 = v233;
      v452 = (char *)&`vtable for'std::ostringstream + 64;
      v383 = (std::locale *)&v447;
      v445 = 0;
      *(_OWORD *)v446 = 0;
      std::locale::locale((std::locale *)&v447);
      LODWORD(v448) = 16;
      v450 = 0;
      *(_QWORD *)&v443[2] = (char *)&`vtable for'std::stringbuf + 16;
      v385 = v451;
      v449 = v451;
      LOBYTE(v451[0]) = 0;
      std::ios::init();
      v234 = &v221[v223];
      v235 = v221;
      do
      {
        while ( 1 )
        {
          v236 = *v235;
          if ( (unsigned __int8)(*v235 - 32) > 0x5Eu )
            v236 = 46;
          v237 = *(_QWORD *)(*(_QWORD *)v443 - 24LL);
          v396 = v236;
          if ( !*(_QWORD *)((char *)v444 + v237) )
            break;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( ++v235 == v234 )
            goto LABEL_69;
        }
        std::ostream::put((std::ostream *)v443, v236);
        ++v235;
      }
      while ( v235 != v234 );
LABEL_69:
      *(_QWORD *)&v428 = 0;
      v427 = (char *)&v428 + 8;
      BYTE8(v428) = 0;
      if ( (_QWORD)v433 )
        std::string::_M_replace();
      else
        std::string::_M_assign();
      if ( v371 == v380 )
      {
        v402 = v387;
        v403 = v371;
        v404 = v371;
        v392 = &v402;
        std::vector<std::string>::_M_realloc_append<std::string>();
        v387 = v402;
        v371 = v403;
        v380 = v404;
        if ( v427 != (char *)&v428 + 8 )
          operator delete(v427, *((_QWORD *)&v428 + 1) + 1LL);
      }
      else
      {
        v238 = (void *)v428;
        v239 = v371 + 2;
        *v371 = v371 + 2;
        if ( v427 == (char *)&v428 + 8 )
        {
          v266 = (_DWORD)v238 + 1;
          if ( (unsigned int)((_DWORD)v238 + 1) >= 8 )
          {
            *v239 = *((_QWORD *)&v428 + 1);
            *(_QWORD *)((char *)v239 + v266 - 8) = *(_QWORD *)((char *)&v428 + v266);
            v328 = (unsigned __int64)(v371 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v329 = (char *)v239 - v328;
            v330 = (char *)((char *)&v428 + 8 - v329);
            v331 = ((_DWORD)v329 + v266) & 0xFFFFFFF8;
            if ( v331 >= 8 )
            {
              v332 = v331 & 0xFFFFFFF8;
              v333 = 0;
              do
              {
                v334 = v333;
                v333 += 8;
                *(_QWORD *)(v328 + v334) = *(_QWORD *)&v330[v334];
              }
              while ( v333 < v332 );
            }
          }
          else if ( (v266 & 4) != 0 )
          {
            *(_DWORD *)v239 = DWORD2(v428);
            *(_DWORD *)((char *)v239 + v266 - 4) = *(_DWORD *)((char *)&v428 + v266 + 4);
          }
          else if ( (_DWORD)v238 != -1 )
          {
            *(_BYTE *)v239 = BYTE8(v428);
            if ( (v266 & 2) != 0 )
              *(_WORD *)((char *)v239 + v266 - 2) = *(_WORD *)((char *)&v428 + v266 + 6);
          }
        }
        else
        {
          *v371 = v427;
          v371[2] = *((void **)&v428 + 1);
        }
        v371[1] = v238;
        v371 += 4;
      }
      v427 = (char *)&v428 + 8;
      *(_QWORD *)&v428 = 0;
      BYTE8(v428) = 0;
      if ( *(_QWORD *)v446 )
        std::string::_M_replace();
      else
        std::string::_M_assign();
      if ( v372 == v381 )
      {
        v405 = v386;
        v406 = v372;
        v407 = v372;
        std::vector<std::string>::_M_realloc_append<std::string>();
        v386 = v405;
        v372 = v406;
        v381 = v407;
        if ( v427 != (char *)&v428 + 8 )
          operator delete(v427, *((_QWORD *)&v428 + 1) + 1LL);
      }
      else
      {
        v240 = (void *)v428;
        v241 = v372 + 2;
        *v372 = v372 + 2;
        if ( v427 == (char *)&v428 + 8 )
        {
          v267 = (_DWORD)v240 + 1;
          if ( (unsigned int)((_DWORD)v240 + 1) >= 8 )
          {
            *v241 = *((_QWORD *)&v428 + 1);
            *(_QWORD *)((char *)v241 + v267 - 8) = *(_QWORD *)((char *)&v428 + v267);
            v335 = (unsigned __int64)(v372 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v336 = (char *)v241 - v335;
            v337 = (char *)((char *)&v428 + 8 - v336);
            v338 = ((_DWORD)v336 + v267) & 0xFFFFFFF8;
            if ( v338 >= 8 )
            {
              v339 = v338 & 0xFFFFFFF8;
              v340 = 0;
              do
              {
                v341 = v340;
                v340 += 8;
                *(_QWORD *)(v335 + v341) = *(_QWORD *)&v337[v341];
              }
              while ( v340 < v339 );
            }
          }
          else if ( (v267 & 4) != 0 )
          {
            *(_DWORD *)v241 = DWORD2(v428);
            *(_DWORD *)((char *)v241 + v267 - 4) = *(_DWORD *)((char *)&v428 + v267 + 4);
          }
          else if ( (_DWORD)v240 != -1 )
          {
            *(_BYTE *)v241 = BYTE8(v428);
            if ( (v267 & 2) != 0 )
              *(_WORD *)((char *)v241 + v267 - 2) = *(_WORD *)((char *)&v428 + v267 + 6);
          }
        }
        else
        {
          *v372 = v427;
          v372[2] = *((void **)&v428 + 1);
        }
        v372[1] = v240;
        v372 += 4;
      }
      *(_QWORD *)v443 = (char *)&`vtable for'std::ostringstream + 24;
      v452 = (char *)&`vtable for'std::ostringstream + 64;
      if ( v449 != v385 )
        operator delete(v449, *(_QWORD *)v451 + 1LL);
      *(_QWORD *)&v443[2] = (char *)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v383);
      v242 = *(_QWORD *)(v224 - 24);
      *(_QWORD *)v443 = v224;
      *(_QWORD *)((char *)v443 + v242) = *(_QWORD *)v373;
      v452 = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)&v452);
      v431.m256i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
      v439[0] = (char *)&`vtable for'std::ostringstream + 64;
      if ( v436 != v384 )
        operator delete(v436, v438[0] + 1LL);
      v221 += 16;
      v431.m256i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
      std::locale::~locale(v382);
      v243 = *(_QWORD *)(v224 - 24);
      v431.m256i_i64[0] = v224;
      v244 = v378;
      *(__int64 *)((char *)v431.m256i_i64 + v243) = *(_QWORD *)v373;
      v439[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base(v244);
      *(_QWORD *)v376 += 16LL;
      v222 = src;
    }
    while ( *(_QWORD *)v376 < (unsigned __int64)src );
  }
  LOBYTE(v410[0]) = 0;
  v408 = v410;
  v409 = nullptr;
  if ( v222 )
  {
    v245 = 1;
    v246 = nullptr;
    while ( 1 )
    {
      v260 = (unsigned __int8)*((char *)v377 + v245 - 1) << 16;
      if ( v245 < (unsigned __int64)src )
        v260 |= *((unsigned __int8 *)v377 + v245) << 8;
      v268 = (std::ios_base *)(v245 + 1);
      if ( v245 + 1 < (unsigned __int64)src )
        v260 |= *((unsigned __int8 *)v377 + v245 + 1);
      v261 = 15;
      v262 = (unsigned __int64)v246 + 1;
      v263 = aAbcdefghijklmn[v260 >> 18];
      if ( v408 != v410 )
        v261 = *(_QWORD *)v410;
      if ( v261 >= v262 )
      {
        *((_BYTE *)v246 + (_QWORD)v408) = v263;
        v409 = (std::ios_base *)((char *)v246 + 1);
        *((_BYTE *)v246 + (_QWORD)v408 + 1) = 0;
      }
      else
      {
        v378 = (std::ios_base *)(v245 + 1);
        LOBYTE(v376[0]) = v263;
        std::string::_M_mutate();
        v268 = (std::ios_base *)(v245 + 1);
        *((_BYTE *)v246 + (_QWORD)v408) = v376[0];
        v409 = (std::ios_base *)((char *)v246 + 1);
        *((_BYTE *)v408 + v262) = 0;
      }
      v264 = v409;
      v265 = aAbcdefghijklmn[(v260 >> 12) & 0x3F];
      v247 = v408;
      v248 = 15;
      v249 = (unsigned __int64)v409 + 1;
      if ( v408 != v410 )
        v248 = *(_QWORD *)v410;
      if ( v248 < v249 )
      {
        LOBYTE(v378) = aAbcdefghijklmn[(v260 >> 12) & 0x3F];
        *(_QWORD *)v376 = v268;
        std::string::_M_mutate();
        v247 = v408;
        v265 = (char)v378;
        v268 = *(std::ios_base **)v376;
      }
      *((_BYTE *)v264 + (_QWORD)v247) = v265;
      v250 = 61;
      v409 = (std::ios_base *)v249;
      *((_BYTE *)v408 + v249) = 0;
      v251 = v409;
      if ( v245 < (unsigned __int64)src )
        v250 = aAbcdefghijklmn[(v260 >> 6) & 0x3F];
      v252 = v408;
      v253 = 15;
      v254 = (unsigned __int64)v409 + 1;
      if ( v408 != v410 )
        v253 = *(_QWORD *)v410;
      if ( v253 < v254 )
      {
        v378 = v268;
        LOBYTE(v376[0]) = v250;
        v375 = v409;
        std::string::_M_mutate();
        v252 = v408;
        v268 = v378;
        v250 = v376[0];
        v251 = v375;
      }
      *((_BYTE *)v251 + (_QWORD)v252) = v250;
      v409 = (std::ios_base *)v254;
      v255 = 61;
      *((_BYTE *)v251 + (_QWORD)v408 + 1) = 0;
      v256 = v409;
      if ( v268 < src )
        v255 = aAbcdefghijklmn[v260 & 0x3F];
      v257 = v408;
      v258 = 15;
      v259 = (unsigned __int64)v409 + 1;
      if ( v408 != v410 )
        v258 = *(_QWORD *)v410;
      if ( v258 < v259 )
      {
        v374 = v409;
        std::string::_M_mutate();
        v257 = v408;
        v256 = v374;
      }
      *((_BYTE *)v256 + (_QWORD)v257) = v255;
      v409 = (std::ios_base *)v259;
      *((_BYTE *)v256 + (_QWORD)v408 + 1) = 0;
      if ( v245 + 2 >= (unsigned __int64)src )
        break;
      v246 = v409;
      v245 += 3LL;
    }
  }
  v414 = 0;
  v382 = (std::locale *)&v415;
  *(_QWORD *)&v415 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v414 = 3;
  v269 = operator new(0x20u);
  strcpy((char *)(v269 + 16), "address");
  *(_QWORD *)v269 = v269 + 16;
  *(_QWORD *)(v269 + 8) = 7;
  v415 = (unsigned __int64)v269;
  qsnprintf();
  v392 = &v411;
  v411 = v413;
  v270 = strlen(s);
  v401.m128i_i64[0] = v270;
  v271 = v270;
  if ( v270 > 0xF )
  {
    v411 = (void *)std::string::_M_create();
    v342 = v411;
    v413[0] = v401.m128i_i64[0];
  }
  else
  {
    if ( v270 == 1 )
    {
      LOBYTE(v413[0]) = s[0];
      goto LABEL_139;
    }
    if ( !v270 )
    {
LABEL_139:
      v272 = v413;
      goto LABEL_140;
    }
    v342 = v413;
  }
  if ( v271 >= 8 )
  {
    *v342 = *(_QWORD *)s;
    *(_QWORD *)((char *)v342 + v271 - 8) = *(_QWORD *)&v458[v271];
    v357 = (unsigned __int64)(v342 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v358 = (char *)v342 - v357;
    v359 = (char *)(s - v358);
    if ( ((v271 + (_DWORD)v358) & 0xFFFFFFF8) >= 8 )
    {
      v360 = (v271 + (_DWORD)v358) & 0xFFFFFFF8;
      v361 = 0;
      do
      {
        v362 = v361;
        v361 += 8;
        *(_QWORD *)(v357 + v362) = *(_QWORD *)&v359[v362];
      }
      while ( v361 < v360 );
    }
  }
  else if ( (v271 & 4) != 0 )
  {
    *(_DWORD *)v342 = *(_DWORD *)s;
    *(_DWORD *)((char *)v342 + v271 - 4) = *(_DWORD *)&v458[v271 + 4];
  }
  else if ( v271 )
  {
    *(_BYTE *)v342 = s[0];
    if ( (v271 & 2) != 0 )
      *(_WORD *)((char *)v342 + v271 - 2) = *(_WORD *)&v458[v271 + 6];
  }
  v270 = v401.m128i_i64[0];
  v272 = v411;
LABEL_140:
  v412 = v270;
  v272[v270] = 0;
  v416 = 0;
  *(_QWORD *)&v417 = 0;
  v383 = (std::locale *)&v417;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v416 = 3;
  v273 = (_QWORD *)operator new(0x20u);
  v274 = v273 + 2;
  v275 = (__int64 *)v411;
  v276 = v412;
  *v273 = v273 + 2;
  if ( v275 == v413 )
  {
    v351 = v276 + 1;
    if ( (unsigned int)(v276 + 1) >= 8 )
    {
      v273[2] = v413[0];
      *(_QWORD *)((char *)v274 + v351 - 8) = *(__int64 *)((char *)&v413[-1] + v351);
      v363 = (unsigned __int64)(v273 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v364 = (char *)v274 - v363;
      v365 = (char *)((char *)v413 - v364);
      if ( (((_DWORD)v364 + v351) & 0xFFFFFFF8) >= 8 )
      {
        v366 = ((_DWORD)v364 + v351) & 0xFFFFFFF8;
        v367 = 0;
        do
        {
          v368 = v367;
          v367 += 8;
          *(_QWORD *)(v363 + v368) = *(_QWORD *)&v365[v368];
        }
        while ( v367 < v366 );
      }
    }
    else if ( (v351 & 4) != 0 )
    {
      *((_DWORD *)v273 + 4) = v413[0];
      *(_DWORD *)((char *)v274 + v351 - 4) = *(_DWORD *)((char *)&v412 + v351 + 4);
    }
    else if ( (_DWORD)v276 != -1 )
    {
      *((_BYTE *)v273 + 16) = v413[0];
      if ( (v351 & 2) != 0 )
        *(_WORD *)((char *)v274 + v351 - 2) = *(_WORD *)((char *)&v412 + v351 + 6);
    }
  }
  else
  {
    *v273 = v275;
    v273[2] = v413[0];
  }
  v273[1] = v276;
  v412 = 0;
  v411 = v413;
  v394 = &v414;
  LOBYTE(v413[0]) = 0;
  v417 = (unsigned __int64)v273;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v443,
    (const __m128i *)&v414);
  *(_QWORD *)v444 = 0;
  v418 = 0;
  *(_QWORD *)&v419 = 0;
  v384 = &v419;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v418 = 3;
  v277 = operator new(0x20u);
  strcpy((char *)(v277 + 16), "size");
  *(_QWORD *)v277 = v277 + 16;
  *(_QWORD *)(v277 + 8) = 4;
  v420 = 5;
  v421 = v389;
  v422 = 0;
  v419 = (unsigned __int64)v277;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v444[2],
    (const __m128i *)&v418);
  *((_QWORD *)&v445 + 1) = 0;
  v423 = 0;
  *(_QWORD *)&v424 = 0;
  v385 = (int *)&v424;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v278 = operator new(0x20u);
  *(_QWORD *)v278 = v278 + 16;
  strcpy((char *)(v278 + 16), "hex_lines");
  *(_QWORD *)(v278 + 8) = 9;
  v425 = 0;
  *(_QWORD *)&v426 = 0;
  v388 = &v426;
  v424 = (unsigned __int64)v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v425 = 2;
  v279 = (std::ios_base *)operator new(0x18u);
  v280 = (char *)v371 - (_BYTE *)v387;
  v378 = v279;
  *((_QWORD *)v279 + 2) = 0;
  *(_OWORD *)v279 = 0;
  v281 = v280 >> 5;
  if ( v280 < 0 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  v282 = 2 * v281;
  if ( v281 )
    v283 = (_QWORD *)operator new(16 * v281);
  else
    v283 = nullptr;
  v284 = v378;
  v397 = v283;
  *(__m128i *)v378 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v283, (__m128i)(unsigned __int64)v283);
  *((_QWORD *)v284 + 2) = &v283[v282];
  v401 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v283, (__m128i)(unsigned __int64)&v397);
  if ( v371 != v387 )
  {
    v285 = (void **)v387;
    *(_QWORD *)v376 = &v398;
    while ( 1 )
    {
      *v283 = 0;
      v283[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      *(_BYTE *)v283 = 3;
      v289 = *v285;
      v290 = (unsigned __int64)v285[1];
      v291 = (_QWORD *)operator new(0x20u);
      v292 = v291 + 2;
      v398 = v290;
      v293 = v291;
      *v291 = v291 + 2;
      if ( v290 <= 0xF )
        break;
      v294 = std::string::_M_create();
      *v293 = v294;
      v292 = (_BYTE *)v294;
      v295 = v398;
      v293[2] = v398;
      v286 = v295 + 1;
      if ( !v295 )
      {
LABEL_154:
        *v292 = *v289;
        v287 = v398;
        goto LABEL_149;
      }
      v287 = -1;
      if ( v286 )
        goto LABEL_148;
LABEL_149:
      v293[1] = v287;
      v288 = v397;
      v285 += 4;
      v283[1] = v293;
      v283 = v288 + 2;
      v397 = v288 + 2;
      if ( v371 == v285 )
        goto LABEL_155;
    }
    v286 = v290 + 1;
    if ( !v290 )
      goto LABEL_154;
LABEL_148:
    memcpy(v292, v289, v286);
    v287 = v398;
    goto LABEL_149;
  }
LABEL_155:
  v296 = v378;
  *((_QWORD *)v378 + 1) = v283;
  v395 = &v423;
  v426 = (unsigned __int64)v296;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v446,
    (const __m128i *)&v423);
  v447 = 0;
  LOBYTE(v427) = 0;
  *(_QWORD *)&v428 = 0;
  v389 = &v428;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v427) = 3;
  v297 = operator new(0x20u);
  *(_QWORD *)v297 = v297 + 16;
  strcpy((char *)(v297 + 16), "ascii_lines");
  *(_QWORD *)(v297 + 8) = 11;
  v429 = 0;
  *(_QWORD *)v430 = 0;
  *(_QWORD *)v379 = v430;
  v428 = (unsigned __int64)v297;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v429 = 2;
  v298 = (std::ios_base *)operator new(0x18u);
  v299 = (char *)v372 - (_BYTE *)v386;
  v378 = v298;
  *((_QWORD *)v298 + 2) = 0;
  *(_OWORD *)v298 = 0;
  v300 = v299 >> 5;
  if ( v299 < 0 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  v301 = 2 * v300;
  if ( v300 )
    v302 = (_QWORD *)operator new(16 * v300);
  else
    v302 = nullptr;
  v303 = v378;
  v399 = v302;
  *(__m128i *)v378 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v302, (__m128i)(unsigned __int64)v302);
  *((_QWORD *)v303 + 2) = &v302[v301];
  v401 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v302, (__m128i)(unsigned __int64)&v399);
  if ( v386 != v372 )
  {
    v304 = (void **)v386;
    *(_QWORD *)v376 = &v400;
    while ( 1 )
    {
      *v302 = 0;
      v302[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      *(_BYTE *)v302 = 3;
      v308 = *v304;
      v309 = (unsigned __int64)v304[1];
      v310 = (_QWORD *)operator new(0x20u);
      v311 = v310 + 2;
      v400 = v309;
      v312 = v310;
      *v310 = v310 + 2;
      if ( v309 <= 0xF )
        break;
      v313 = std::string::_M_create();
      *v312 = v313;
      v311 = (_BYTE *)v313;
      v314 = v400;
      v312[2] = v400;
      v305 = v314 + 1;
      if ( !v314 )
      {
LABEL_167:
        *v311 = *v308;
        v306 = v400;
        goto LABEL_162;
      }
      v306 = -1;
      if ( v305 )
        goto LABEL_161;
LABEL_162:
      v312[1] = v306;
      v307 = v399;
      v304 += 4;
      v302[1] = v312;
      v302 = v307 + 2;
      v399 = v307 + 2;
      if ( v372 == v304 )
        goto LABEL_168;
    }
    v305 = v309 + 1;
    if ( !v309 )
      goto LABEL_167;
LABEL_161:
    memcpy(v311, v308, v305);
    v306 = v400;
    goto LABEL_162;
  }
LABEL_168:
  v315 = v378;
  *((_QWORD *)v378 + 1) = v302;
  *(_OWORD *)v430 = (unsigned __int64)v315;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v448,
    (const __m128i *)&v427);
  v450 = 0;
  v431.m256i_i8[0] = 0;
  v431.m256i_i64[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v431.m256i_i8[0] = 3;
  v316 = operator new(0x20u);
  *(_QWORD *)v316 = v316 + 16;
  strcpy((char *)(v316 + 16), "base64");
  *(_QWORD *)(v316 + 8) = 6;
  v431.m256i_i8[24] = 0;
  v432.m128i_i64[0] = 0;
  *(_OWORD *)&v431.m256i_u64[1] = (unsigned __int64)v316;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v431.m256i_i8[24] = 3;
  v317 = (unsigned __int64)v409;
  srca = v408;
  v318 = (_QWORD *)operator new(0x20u);
  v319 = v318 + 2;
  v401.m128i_i64[0] = v317;
  v320 = v318;
  *v318 = v318 + 2;
  if ( v317 > 0xF )
  {
    v345 = std::string::_M_create();
    *v320 = v345;
    v319 = (_BYTE *)v345;
    v346 = v401.m128i_i64[0];
    v321 = (__m128i)(unsigned __int64)v320;
    v320[2] = v401.m128i_i64[0];
    v322 = v346 + 1;
    if ( v346 )
    {
      v323 = -1;
      if ( !v322 )
        goto LABEL_171;
      goto LABEL_170;
    }
LABEL_200:
    *v319 = *srca;
    v323 = v401.m128i_i64[0];
    goto LABEL_171;
  }
  v321 = (__m128i)(unsigned __int64)v318;
  v322 = v317 + 1;
  if ( !v317 )
    goto LABEL_200;
LABEL_170:
  *(__m128i *)v376 = v321;
  memcpy(v319, srca, v322);
  v323 = v401.m128i_i64[0];
  v321 = _mm_load_si128((const __m128i *)v376);
LABEL_171:
  v320[1] = v323;
  v432 = v321;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v451,
    (const __m128i *)&v431);
  v452 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v391,
    (const __m128i *)v443,
    5);
  v324 = (int *)&v453;
  do
  {
    v324 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v324 != v443 );
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
  if ( v411 != v413 )
    operator delete(v411, v413[0] + 1);
  if ( v408 != v410 )
    operator delete(v408, *(_QWORD *)v410 + 1LL);
  v325 = (void **)v386;
  if ( v386 != v372 )
  {
    do
    {
      if ( *v325 != v325 + 2 )
        operator delete(*v325, (unsigned __int64)v325[2] + 1);
      v325 += 4;
    }
    while ( v325 != v372 );
  }
  if ( v386 )
    operator delete(v386, (char *)v381 - (_BYTE *)v386);
  v326 = (void **)v387;
  if ( v371 != v387 )
  {
    do
    {
      if ( *v326 != v326 + 2 )
        operator delete(*v326, (unsigned __int64)v326[2] + 1);
      v326 += 4;
    }
    while ( v371 != v326 );
  }
  if ( v387 )
    operator delete(v387, (char *)v380 - (_BYTE *)v387);
  operator delete(v377, v393 - (_BYTE *)v377);
  return *(_QWORD *)v391;
}

