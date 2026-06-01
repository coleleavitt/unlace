__int64 __fastcall ida_mcp::tools::strings::list_strings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        int a23,
        __int64 a24,
        __int64 a25,
        int a26,
        int a27,
        __int64 a28,
        __int64 a29,
        int a30,
        int a31,
        char a32,
        __int64 a33,
        int a34,
        int a35,
        char a36,
        char a37,
        __int64 a38,
        __int64 a39,
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
        char a58,
        int a59,
        int a60,
        char a61,
        char a62,
        int a63,
        char a64,
        int a65,
        int a66,
        char a67,
        char a68,
        int a69,
        char a70,
        int a71,
        int a72,
        char a73,
        char a74,
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
        char a88,
        char a89,
        int a90,
        char a91,
        char a92,
        int a93,
        char a94,
        char a95,
        int a96,
        char a97,
        char a98,
        int a99,
        char a100,
        char a101,
        int a102,
        char a103,
        char a104,
        int a105,
        char a106,
        char a107,
        int a108,
        char a109,
        char a110,
        int a111,
        int a112,
        int a113,
        int a114,
        int a115,
        __int64 a116,
        int a117,
        int a118,
        int a119,
        int a120,
        int a121,
        int a122,
        int a123,
        int a124,
        char a125,
        int a126,
        int a127,
        char a128,
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
        __int64 a159)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v159; // rbp
  const char *v160; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rbx
  __int64 v165; // r14
  __int64 v166; // r13
  unsigned __int64 v167; // rbp
  size_t v168; // rdx
  int v169; // eax
  unsigned __int64 v170; // rbx
  size_t v171; // rdx
  int v172; // eax
  __int64 v173; // r13
  __int64 v174; // rbp
  __int64 v175; // r13
  __int64 v176; // rbx
  __int64 v177; // r14
  size_t v178; // rdx
  int v179; // eax
  unsigned __int64 v180; // r12
  unsigned __int64 v181; // rbx
  size_t v182; // rdx
  __int64 v183; // r12
  int v184; // eax
  __int64 v185; // rbx
  size_t v186; // rdx
  int v187; // eax
  unsigned __int64 v188; // r14
  unsigned __int64 v189; // rbp
  size_t v190; // rdx
  int v191; // eax
  unsigned __int64 func_qty; // rbp
  unsigned __int64 strlist_qty; // rax
  unsigned __int64 v194; // r15
  char v195; // bp
  _QWORD *v196; // r13
  char *v197; // rbx
  unsigned __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  const char *v203; // rsi
  bool v204; // al
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 *v208; // rbx
  __int8 v209; // al
  __m128i v210; // xmm0
  __int64 v211; // rax
  int *v212; // rbx
  unsigned __int8 v214; // al
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 *v217; // rbx
  __int8 v218; // al
  __m128i v219; // xmm0
  __int64 v220; // rax
  __m128i v221; // xmm0
  __int64 v222; // rax
  unsigned __int64 v223; // rsi
  unsigned int v224; // r12d
  unsigned int v225; // ecx
  __int64 v226; // rbx
  _BYTE *v227; // r8
  unsigned int v228; // r12d
  unsigned __int64 v229; // rsi
  unsigned __int64 v230; // r9
  unsigned __int64 v231; // rax
  unsigned __int64 v232; // rcx
  unsigned __int64 v233; // rax
  __int64 v234; // rdx
  __int8 v235; // al
  void **v236; // rdi
  _QWORD *v237; // rax
  _DWORD *v238; // r8
  __int64 v239; // r9
  _QWORD *v240; // rsi
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rsi
  __int64 v245; // rdx
  _QWORD *v246; // rax
  _QWORD *v247; // rdx
  _QWORD *v248; // rcx
  __int64 v249; // rsi
  __int64 *v250; // r12
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 *v255; // r12
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 *v260; // rbp
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 *v265; // rbp
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // r9
  char *v270; // rbp
  __int64 *v271; // rbp
  _BYTE *v272; // r14
  unsigned __int64 v273; // r15
  _QWORD *v274; // rax
  _BYTE *v275; // rdi
  size_t v276; // rdx
  __int64 v277; // rax
  __int64 v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  _QWORD *v283; // rax
  _OWORD *v284; // rcx
  _QWORD *v285; // rsi
  __int64 v286; // rdi
  __int64 v287; // rax
  _QWORD *v288; // rax
  unsigned __int64 v289; // rdx
  _BYTE *v290; // rdi
  __int64 *v291; // r14
  __m128i v292; // xmm0
  size_t v293; // rcx
  __int64 v294; // rax
  __int64 *v295; // rax
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __m128i v300; // xmm0
  int *v301; // rbx
  char *v302; // rbx
  char *v303; // r14
  int v304; // edi
  _BYTE *v305; // r13
  unsigned __int64 v306; // r14
  _QWORD *v307; // rax
  _BYTE *v308; // rdi
  size_t v309; // rdx
  __int64 v310; // rax
  unsigned __int64 v311; // rax
  __m128i v312; // xmm0
  __m128i v313; // xmm0
  unsigned __int64 v314; // rsi
  unsigned int v315; // ebx
  unsigned int v316; // ecx
  __int64 v317; // rbp
  unsigned int v318; // ebx
  __int8 *v319; // rdi
  unsigned __int64 v320; // r8
  unsigned __int64 v321; // rax
  unsigned __int64 v322; // rcx
  unsigned __int64 v323; // rax
  __int64 v324; // rdx
  __int8 v325; // al
  _QWORD *v326; // rax
  _OWORD *v327; // rcx
  _QWORD *v328; // rsi
  __int64 v329; // rdi
  int *v330; // rbp
  __int64 *v331; // rbx
  __int8 v332; // al
  __m128i v333; // xmm0
  __m128i v334; // xmm0
  __int64 *v335; // rbp
  __int64 v336; // rdx
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  int *v340; // rbp
  char *v341; // r15
  char *v342; // rbx
  int v343; // edi
  __int64 v344; // rax
  __int64 v345; // rax
  __int64 v346; // rax
  unsigned __int64 v347; // rax
  __int64 v348; // rcx
  unsigned int v349; // edx
  _DWORD *v350; // r8
  __int64 v351; // rdx
  _DWORD *v352; // rcx
  __int64 v353; // rdi
  __int64 v354; // rax
  __int64 v355; // rax
  unsigned int v356; // ecx
  unsigned __int64 v357; // rdi
  char *v358; // rcx
  char *v359; // r8
  unsigned int v360; // edx
  unsigned int v361; // edx
  unsigned int v362; // ecx
  __int64 v363; // r9
  _BYTE *v364; // rbp
  unsigned __int64 v365; // r13
  _QWORD *v366; // rax
  _BYTE *v367; // rdi
  size_t v368; // rdx
  __int64 v369; // rax
  __int64 v370; // rcx
  __int64 v371; // rdi
  __int64 v372; // rdi
  __int64 v373; // r8
  unsigned __int64 v374; // r8
  char *v375; // rsi
  char *v376; // r9
  unsigned int v377; // ecx
  unsigned int v378; // ecx
  unsigned int v379; // esi
  __int64 v380; // r10
  __int64 v381; // rax
  __int64 v382; // rax
  unsigned int v383; // ecx
  unsigned __int64 v384; // r8
  char *v385; // rsi
  char *v386; // r9
  unsigned int v387; // ecx
  unsigned int v388; // ecx
  unsigned int v389; // esi
  __int64 v390; // r10
  int v391; // [rsp+0h] [rbp-508h]
  int v392; // [rsp+0h] [rbp-508h]
  int v393; // [rsp+0h] [rbp-508h]
  int v394; // [rsp+0h] [rbp-508h]
  int v395; // [rsp+0h] [rbp-508h]
  int v396; // [rsp+8h] [rbp-500h]
  int v397[2]; // [rsp+8h] [rbp-500h]
  int v398; // [rsp+8h] [rbp-500h]
  int v399; // [rsp+8h] [rbp-500h]
  int v400; // [rsp+8h] [rbp-500h]
  int v401; // [rsp+8h] [rbp-500h]
  int *v402; // [rsp+10h] [rbp-4F8h]
  __int64 v403; // [rsp+10h] [rbp-4F8h]
  __int64 v404; // [rsp+10h] [rbp-4F8h]
  __int64 v405; // [rsp+10h] [rbp-4F8h]
  int v406[2]; // [rsp+10h] [rbp-4F8h]
  int v407[2]; // [rsp+10h] [rbp-4F8h]
  __int64 v409; // [rsp+28h] [rbp-4E0h]
  bool v410; // [rsp+28h] [rbp-4E0h]
  int v411[2]; // [rsp+30h] [rbp-4D8h]
  int v412[4]; // [rsp+40h] [rbp-4C8h] BYREF
  void *v413; // [rsp+50h] [rbp-4B8h]
  char v414[8]; // [rsp+58h] [rbp-4B0h]
  _OWORD *v415; // [rsp+60h] [rbp-4A8h]
  __int128 *v416; // [rsp+68h] [rbp-4A0h]
  char *v417; // [rsp+70h] [rbp-498h]
  void **v418; // [rsp+78h] [rbp-490h]
  int *v419; // [rsp+80h] [rbp-488h]
  __int64 v420; // [rsp+88h] [rbp-480h]
  __int64 *v421; // [rsp+90h] [rbp-478h]
  char *v422; // [rsp+98h] [rbp-470h]
  __m128i v423; // [rsp+A0h] [rbp-468h] BYREF
  _BYTE *v424; // [rsp+B0h] [rbp-458h]
  const __m128i *v425; // [rsp+B8h] [rbp-450h]
  unsigned __int64 v426; // [rsp+C8h] [rbp-440h]
  char v427; // [rsp+D0h] [rbp-438h] BYREF
  _QWORD *v428; // [rsp+D8h] [rbp-430h]
  __int64 v429; // [rsp+E0h] [rbp-428h]
  __int64 v430; // [rsp+E8h] [rbp-420h]
  __m128i v431; // [rsp+F0h] [rbp-418h] BYREF
  __m128i v432; // [rsp+100h] [rbp-408h] BYREF
  void *src; // [rsp+120h] [rbp-3E8h] BYREF
  __int128 *v434; // [rsp+128h] [rbp-3E0h]
  _QWORD v435[2]; // [rsp+130h] [rbp-3D8h] BYREF
  void *v436; // [rsp+140h] [rbp-3C8h] BYREF
  __int64 v437; // [rsp+148h] [rbp-3C0h]
  _QWORD v438[2]; // [rsp+150h] [rbp-3B8h] BYREF
  int v439[2]; // [rsp+160h] [rbp-3A8h]
  __int64 v440; // [rsp+168h] [rbp-3A0h]
  _QWORD v441[2]; // [rsp+170h] [rbp-398h] BYREF
  void *v442; // [rsp+180h] [rbp-388h]
  __int64 v443; // [rsp+188h] [rbp-380h]
  _QWORD v444[2]; // [rsp+190h] [rbp-378h] BYREF
  char v445; // [rsp+1A0h] [rbp-368h] BYREF
  int v446[4]; // [rsp+1A8h] [rbp-360h] BYREF
  __int64 v447; // [rsp+1B8h] [rbp-350h]
  __int128 v448; // [rsp+1C0h] [rbp-348h]
  char v449; // [rsp+1D0h] [rbp-338h] BYREF
  char v450[16]; // [rsp+1D8h] [rbp-330h] BYREF
  __m128i v451; // [rsp+1E8h] [rbp-320h]
  __int64 v452; // [rsp+1F8h] [rbp-310h]
  char *v453; // [rsp+200h] [rbp-308h] BYREF
  _OWORD v454[2]; // [rsp+208h] [rbp-300h] BYREF
  __int64 v455; // [rsp+228h] [rbp-2E0h]
  void *v456; // [rsp+230h] [rbp-2D8h] BYREF
  __int128 v457; // [rsp+238h] [rbp-2D0h] BYREF
  char v458; // [rsp+248h] [rbp-2C0h]
  __int128 v459; // [rsp+250h] [rbp-2B8h] BYREF
  void *v460; // [rsp+260h] [rbp-2A8h] BYREF
  __int128 v461; // [rsp+268h] [rbp-2A0h] BYREF
  char v462; // [rsp+278h] [rbp-290h]
  unsigned __int64 v463; // [rsp+280h] [rbp-288h]
  __int64 v464; // [rsp+288h] [rbp-280h]
  _OWORD *v465; // [rsp+290h] [rbp-278h] BYREF
  __int128 v466; // [rsp+298h] [rbp-270h] BYREF
  char v467; // [rsp+2A8h] [rbp-260h]
  __int128 v468; // [rsp+2B0h] [rbp-258h]
  char v469; // [rsp+2C0h] [rbp-248h] BYREF
  __int64 v470[2]; // [rsp+2C8h] [rbp-240h]
  _BYTE v471[24]; // [rsp+2D8h] [rbp-230h] BYREF
  int v472; // [rsp+2F0h] [rbp-218h] BYREF
  int v473[4]; // [rsp+2F8h] [rbp-210h]
  _BYTE v474[24]; // [rsp+308h] [rbp-200h] BYREF
  __int64 v475; // [rsp+320h] [rbp-1E8h] BYREF
  int v476[4]; // [rsp+328h] [rbp-1E0h] BYREF
  __int64 v477; // [rsp+338h] [rbp-1D0h] BYREF
  __int128 v478; // [rsp+340h] [rbp-1C8h]
  _QWORD v479[3]; // [rsp+350h] [rbp-1B8h] BYREF
  char v480; // [rsp+368h] [rbp-1A0h] BYREF
  int v481[2]; // [rsp+370h] [rbp-198h] BYREF
  __int64 v482; // [rsp+378h] [rbp-190h]
  __int64 v483; // [rsp+380h] [rbp-188h] BYREF
  int v484[4]; // [rsp+388h] [rbp-180h] BYREF
  __int64 v485; // [rsp+398h] [rbp-170h]
  int v486[4]; // [rsp+3A0h] [rbp-168h] BYREF
  __int64 v487; // [rsp+3B0h] [rbp-158h]
  int v488[4]; // [rsp+3B8h] [rbp-150h] BYREF
  __int64 v489; // [rsp+3C8h] [rbp-140h]
  int v490[4]; // [rsp+3D0h] [rbp-138h] BYREF
  __int64 v491; // [rsp+3E0h] [rbp-128h]
  char v492; // [rsp+3E8h] [rbp-120h] BYREF
  __m128i si128; // [rsp+3F0h] [rbp-118h] BYREF
  __m128i v494; // [rsp+400h] [rbp-108h]
  __m128i v495; // [rsp+410h] [rbp-F8h]
  __m128i v496; // [rsp+420h] [rbp-E8h]
  __m128i v497; // [rsp+430h] [rbp-D8h]
  __m128i v498; // [rsp+440h] [rbp-C8h]
  __m128i v499; // [rsp+450h] [rbp-B8h]
  __m128i v500; // [rsp+460h] [rbp-A8h]
  __m128i v501; // [rsp+470h] [rbp-98h]
  __m128i v502; // [rsp+480h] [rbp-88h]
  __m128i v503; // [rsp+490h] [rbp-78h]
  __m128i v504[2]; // [rsp+4A0h] [rbp-68h]
  unsigned __int64 v505; // [rsp+4C8h] [rbp-40h]

  v505 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x69566);
  v163 = *(_QWORD *)(a2 + 8);
  v164 = *(_QWORD *)(v163 + 16);
  if ( !v164 )
    goto LABEL_19;
  v165 = v163 + 8;
  v166 = v163 + 8;
  do
  {
    v167 = *(_QWORD *)(v164 + 40);
    if ( !v167 )
      goto LABEL_100;
    v168 = 5;
    if ( v167 <= 5 )
      v168 = *(_QWORD *)(v164 + 40);
    if ( ((v169 = memcmp(*(const void **)(v164 + 32), "query", v168)) != 0
       || (v169 = v167 - 5, (__int64)(v167 - 5) <= 0x7FFFFFFF))
      && v169 < 0 )
    {
LABEL_100:
      v164 = *(_QWORD *)(v164 + 24);
    }
    else
    {
      v166 = v164;
      v164 = *(_QWORD *)(v164 + 16);
    }
  }
  while ( v164 );
  if ( v165 == v166 )
    goto LABEL_19;
  v170 = *(_QWORD *)(v166 + 40);
  if ( !v170 )
    goto LABEL_101;
  v171 = 5;
  if ( v170 <= 5 )
    v171 = *(_QWORD *)(v166 + 40);
  if ( ((v172 = memcmp(*(const void **)(v166 + 32), "query", v171)) != 0
     || (v172 = v170 - 5, (__int64)(v170 - 5) <= 0x7FFFFFFF))
    && v172 <= 0 )
  {
LABEL_101:
    LOBYTE(v435[0]) = 0;
    src = v435;
    v434 = nullptr;
    if ( *(_BYTE *)(v166 + 64) != 3 )
    {
      exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)(v166 + 64) )
      {
        case 0:
          v162 = "null";
          break;
        case 1:
          v162 = "object";
          break;
        case 2:
          v162 = (char *)"array";
          break;
        case 3:
          v162 = "string";
          break;
        case 4:
          v162 = "boolean";
          break;
        case 8:
          v162 = "binary";
          break;
        case 9:
          v162 = "discarded";
          break;
        default:
          v162 = "number";
          break;
      }
      v432.m128i_i64[0] = (__int64)v162;
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
  }
  else
  {
LABEL_19:
    std::string::basic_string<std::allocator<char>>((__int64 *)&src, "", a3, a4, a5, a6, v391, v396, (__int64)v402);
  }
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x69594);
  v173 = *(_QWORD *)(a2 + 8);
  v174 = *(_QWORD *)(v173 + 16);
  if ( !v174 )
  {
    LODWORD(v183) = 100;
LABEL_52:
    LOBYTE(v415) = 0;
    goto LABEL_53;
  }
  v175 = v173 + 8;
  v176 = v174;
  v177 = v175;
  do
  {
    while ( 1 )
    {
      v180 = *(_QWORD *)(v176 + 40);
      if ( !v180 )
        break;
      v178 = 5;
      if ( v180 <= 5 )
        v178 = *(_QWORD *)(v176 + 40);
      v179 = memcmp(*(const void **)(v176 + 32), "limit", v178);
      if ( v179 || (v179 = v180 - 5, (__int64)(v180 - 5) <= 0x7FFFFFFF) )
      {
        if ( v179 < 0 )
          break;
      }
      v177 = v176;
      v176 = *(_QWORD *)(v176 + 16);
      if ( !v176 )
        goto LABEL_31;
    }
    v176 = *(_QWORD *)(v176 + 24);
  }
  while ( v176 );
LABEL_31:
  if ( v175 == v177 )
  {
    LODWORD(v183) = 100;
  }
  else
  {
    v181 = *(_QWORD *)(v177 + 40);
    if ( v181 )
    {
      v182 = 5;
      LODWORD(v183) = 100;
      if ( v181 <= 5 )
        v182 = *(_QWORD *)(v177 + 40);
      v184 = memcmp(*(const void **)(v177 + 32), "limit", v182);
      if ( !v184 )
      {
        v184 = v181 - 5;
        if ( (__int64)(v181 - 5) > 0x7FFFFFFF )
          goto LABEL_37;
      }
      if ( v184 > 0 )
        goto LABEL_37;
    }
    v214 = *(_BYTE *)(v177 + 64);
    if ( v214 == 6 )
      goto LABEL_107;
    if ( v214 > 6u )
    {
      if ( v214 == 7 )
      {
        LODWORD(v183) = (int)*(double *)(v177 + 72);
        if ( (int)v183 > 1000 )
          LODWORD(v183) = 1000;
        goto LABEL_37;
      }
      goto LABEL_309;
    }
    if ( v214 != 4 )
    {
      if ( v214 == 5 )
      {
LABEL_107:
        v183 = *(_QWORD *)(v177 + 72);
        if ( (int)v183 > 1000 )
          LODWORD(v183) = 1000;
        goto LABEL_37;
      }
LABEL_309:
      JUMPOUT(0x6977B);
    }
    LODWORD(v183) = *(unsigned __int8 *)(v177 + 72);
  }
LABEL_37:
  v185 = v175;
  do
  {
    while ( 1 )
    {
      v188 = *(_QWORD *)(v174 + 40);
      if ( !v188 )
        break;
      v186 = 14;
      if ( v188 <= 0xE )
        v186 = *(_QWORD *)(v174 + 40);
      v187 = memcmp(*(const void **)(v174 + 32), "case_sensitive", v186);
      if ( v187 || (v187 = v188 - 14, (__int64)(v188 - 14) <= 0x7FFFFFFF) )
      {
        if ( v187 < 0 )
          break;
      }
      v185 = v174;
      v174 = *(_QWORD *)(v174 + 16);
      if ( !v174 )
        goto LABEL_46;
    }
    v174 = *(_QWORD *)(v174 + 24);
  }
  while ( v174 );
LABEL_46:
  if ( v175 == v185 )
    goto LABEL_52;
  v189 = *(_QWORD *)(v185 + 40);
  if ( v189 )
  {
    v190 = 14;
    if ( v189 <= 0xE )
      v190 = *(_QWORD *)(v185 + 40);
    v191 = memcmp(*(const void **)(v185 + 32), "case_sensitive", v190);
    if ( !v191 )
    {
      v191 = v189 - 14;
      if ( (__int64)(v189 - 14) > 0x7FFFFFFF )
        goto LABEL_52;
    }
    if ( v191 > 0 )
      goto LABEL_52;
  }
  if ( *(_BYTE *)(v185 + 64) != 4 )
  {
    v159 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v185 + 64) )
    {
      case 0:
        v160 = "null";
        break;
      case 1:
        v160 = "object";
        break;
      case 2:
        v160 = "array";
        break;
      case 3:
        v160 = "string";
        break;
      case 4:
        v160 = "boolean";
        break;
      case 8:
        v160 = "binary";
        break;
      case 9:
        v160 = "discarded";
        break;
      default:
        v160 = "number";
        break;
    }
    *(_QWORD *)v481 = &v483;
    v482 = 0;
    LOBYTE(v483) = 0;
    strlen(v160);
    std::string::reserve();
    std::string::append();
    std::string::append();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v159,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v159,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  LOBYTE(v415) = *(_BYTE *)(v185 + 72);
LABEL_53:
  func_qty = get_func_qty();
  strlist_qty = get_strlist_qty();
  v194 = strlist_qty;
  if ( strlist_qty > 0x186A0 )
  {
    v445 = 0;
    *(_QWORD *)v412 = v446;
    *(_QWORD *)v446 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v445 = 3;
    v215 = operator new(0x20u);
    *(_DWORD *)(v215 + 16) = 1853189987;
    *(_QWORD *)v215 = v215 + 16;
    *(_BYTE *)(v215 + 20) = 116;
    *(_QWORD *)(v215 + 8) = 5;
    *(_BYTE *)(v215 + 21) = 0;
    *(_OWORD *)v446 = (unsigned __int64)v215;
    v447 = 5;
    v448 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v481,
      (const __m128i *)&v445);
    v483 = 0;
    v449 = 0;
    *(_QWORD *)v450 = 0;
    *(_QWORD *)v414 = v450;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v449 = 3;
    v216 = operator new(0x20u);
    *(_BYTE *)(v216 + 20) = 121;
    *(_QWORD *)v216 = v216 + 16;
    *(_DWORD *)(v216 + 16) = 1919251825;
    *(_QWORD *)(v216 + 8) = 5;
    *(_BYTE *)(v216 + 21) = 0;
    *(_OWORD *)v450 = (unsigned __int64)v216;
    if ( !v434 )
    {
      v217 = nullptr;
      v218 = 0;
      goto LABEL_114;
    }
    v431 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v305 = src;
    v306 = (unsigned __int64)v434;
    v307 = (_QWORD *)operator new(0x20u);
    v308 = v307 + 2;
    v429 = v306;
    v217 = v307;
    *v307 = v307 + 2;
    if ( v306 > 0xF )
    {
      v354 = std::string::_M_create();
      *v217 = v354;
      v308 = (_BYTE *)v354;
      v355 = v429;
      v217[2] = v429;
      v309 = v355 + 1;
      if ( v355 )
      {
        v310 = -1;
        if ( !v309 )
          goto LABEL_162;
        goto LABEL_161;
      }
    }
    else
    {
      v309 = v306 + 1;
      if ( v306 )
      {
LABEL_161:
        memcpy(v308, v305, v309);
        v310 = v429;
LABEL_162:
        v217[1] = v310;
        v218 = 3;
LABEL_114:
        v431.m128i_i8[0] = v218;
        v431.m128i_i64[1] = (__int64)v217;
        v219 = _mm_load_si128(&v431);
        v452 = 0;
        v422 = &v449;
        v451 = v219;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v484,
          (const __m128i *)&v449);
        v485 = 0;
        LOBYTE(v453) = 0;
        *(_QWORD *)&v454[0] = 0;
        v415 = v454;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v453) = 3;
        v220 = operator new(0x20u);
        strcpy((char *)(v220 + 16), "strings");
        *(_QWORD *)v220 = v220 + 16;
        *(_QWORD *)(v220 + 8) = 7;
        v432.m128i_i8[0] = 0;
        v432.m128i_i64[1] = 0;
        v454[0] = (unsigned __int64)v220;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v221 = _mm_load_si128(&v432);
        v421 = (__int64 *)&v453;
        v455 = 0;
        v454[1] = v221;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v486,
          (const __m128i *)&v453);
        v487 = 0;
        LOBYTE(v456) = 0;
        *(_QWORD *)&v457 = 0;
        v416 = &v457;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v456) = 3;
        v222 = operator new(0x20u);
        v223 = v194;
        *(_QWORD *)v222 = v222 + 16;
        v224 = 1;
        strcpy((char *)(v222 + 16), "note");
        *(_QWORD *)(v222 + 8) = 4;
        v457 = (unsigned __int64)v222;
        while ( 1 )
        {
          v225 = v224;
          v224 += 4;
          if ( v223 <= 0x1869F )
            break;
          if ( v223 <= 0xF423F )
          {
            v224 = v225 + 5;
            break;
          }
          if ( v223 <= 0x98967F )
          {
            v224 = v225 + 6;
            break;
          }
          if ( v223 <= 0x5F5E0FF )
          {
            v224 = v225 + 7;
            break;
          }
          v223 /= 0x2710u;
        }
        v226 = v224;
        v437 = 0;
        v436 = v438;
        LOBYTE(v438[0]) = 0;
        std::string::reserve();
        v227 = v436;
        v228 = v224 - 1;
        v229 = v194;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
        v494 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
        v495 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
        v496 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
        v497 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
        v498 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
        v499 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
        v500 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
        v501 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
        v502 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
        v503 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
        v504[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
        *(__m128i *)((char *)v504 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
        do
        {
          v230 = v229;
          v231 = v229;
          v232 = 100 * (v229 / 0x64);
          v229 /= 0x64u;
          v233 = v231 - v232;
          v227[v228] = si128.m128i_i8[2 * v233 + 1];
          v234 = v228 - 1;
          v228 -= 2;
          v227[v234] = si128.m128i_i8[2 * v233];
        }
        while ( v230 > 0x270F );
        v235 = v229 + 48;
        if ( v230 > 0x3E7 )
        {
          v227[1] = si128.m128i_i8[2 * v229 + 1];
          v235 = si128.m128i_i8[2 * v229];
        }
        *v227 = v235;
        v437 = v226;
        v236 = &v436;
        *((_BYTE *)v436 + v226) = 0;
        v237 = (_QWORD *)std::string::_M_replace();
        v240 = v441;
        v241 = (__int64)(v237 + 2);
        *(_QWORD *)v439 = v441;
        if ( (_QWORD *)*v237 == v237 + 2 )
        {
          v238 = v441;
          v236 = (void **)(v237 + 2);
          v348 = v237[1] + 1LL;
          if ( (unsigned int)v348 >= 8 )
          {
            LODWORD(v372) = 0;
            v239 = (unsigned int)v348 & 0xFFFFFFF8;
            do
            {
              v373 = (unsigned int)v372;
              v372 = (unsigned int)(v372 + 8);
              *(_QWORD *)((char *)v441 + v373) = *(_QWORD *)(v241 + v373);
            }
            while ( (unsigned int)v372 < (unsigned int)v239 );
            v238 = (_DWORD *)((char *)v441 + v372);
            v236 = (void **)(v241 + v372);
          }
          v240 = nullptr;
          if ( (v348 & 4) != 0 )
          {
            *v238 = *(_DWORD *)v236;
            v240 = (_QWORD *)&byte_4;
          }
          if ( (v348 & 2) != 0 )
          {
            v239 = *(unsigned __int16 *)((char *)v240 + (_QWORD)v236);
            *(_WORD *)((char *)v240 + (_QWORD)v238) = v239;
            v240 = (_QWORD *)((char *)v240 + 2);
          }
          if ( (v348 & 1) != 0 )
            *((_BYTE *)v240 + (_QWORD)v238) = *((_BYTE *)v240 + (_QWORD)v236);
        }
        else
        {
          *(_QWORD *)v439 = *v237;
          v441[0] = v237[2];
        }
        v242 = v237[1];
        *v237 = v241;
        v237[1] = 0;
        *((_BYTE *)v237 + 16) = 0;
        v440 = v242;
        if ( (unsigned __int64)(v242 - 0x7FFFFFFFFFFFFF9ALL) <= 0x64 )
          ida_mcp::tools::strings::list_strings(
            (__int64)v236,
            (__int64)v240,
            v241,
            v242,
            (__int64)v238,
            v239,
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
            a159);
        v243 = std::string::_M_append();
        v244 = v243 + 16;
        v442 = v444;
        if ( *(_QWORD *)v243 == v243 + 16 )
        {
          v350 = v444;
          v351 = *(_QWORD *)(v243 + 8) + 1LL;
          v352 = (_DWORD *)(v243 + 16);
          if ( (unsigned int)v351 >= 8 )
          {
            LODWORD(v370) = 0;
            do
            {
              v371 = (unsigned int)v370;
              v370 = (unsigned int)(v370 + 8);
              *(_QWORD *)((char *)v444 + v371) = *(_QWORD *)(v244 + v371);
            }
            while ( (unsigned int)v370 < ((unsigned int)v351 & 0xFFFFFFF8) );
            v350 = (_DWORD *)((char *)v444 + v370);
            v352 = (_DWORD *)(v244 + v370);
          }
          v353 = 0;
          if ( (v351 & 4) != 0 )
          {
            *v350 = *v352;
            v353 = 4;
          }
          if ( (v351 & 2) != 0 )
          {
            *(_WORD *)((char *)v350 + v353) = *(_WORD *)((char *)v352 + v353);
            v353 += 2;
          }
          if ( (v351 & 1) != 0 )
            *((_BYTE *)v350 + v353) = *((_BYTE *)v352 + v353);
        }
        else
        {
          v442 = *(void **)v243;
          v444[0] = *(_QWORD *)(v243 + 16);
        }
        v245 = *(_QWORD *)(v243 + 8);
        *(_QWORD *)v243 = v244;
        *(_QWORD *)(v243 + 8) = 0;
        *(_BYTE *)(v243 + 16) = 0;
        v443 = v245;
        v458 = 0;
        *(_QWORD *)&v459 = 0;
        v417 = (char *)&v459;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v458 = 3;
        v246 = (_QWORD *)operator new(0x20u);
        v247 = v442;
        v248 = v246 + 2;
        v249 = v443;
        *v246 = v246 + 2;
        if ( v247 == v444 )
        {
          v349 = v249 + 1;
          if ( (unsigned int)(v249 + 1) >= 8 )
          {
            v246[2] = v444[0];
            *(_QWORD *)((char *)v248 + v349 - 8) = *(_QWORD *)((char *)&v444[-1] + v349);
            v357 = (unsigned __int64)(v246 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v358 = (char *)v248 - v357;
            v359 = (char *)((char *)v444 - v358);
            v360 = ((_DWORD)v358 + v349) & 0xFFFFFFF8;
            if ( v360 >= 8 )
            {
              v361 = v360 & 0xFFFFFFF8;
              v362 = 0;
              do
              {
                v363 = v362;
                v362 += 8;
                *(_QWORD *)(v357 + v363) = *(_QWORD *)&v359[v363];
              }
              while ( v362 < v361 );
            }
          }
          else if ( (v349 & 4) != 0 )
          {
            *((_DWORD *)v246 + 4) = v444[0];
            *(_DWORD *)((char *)v248 + v349 - 4) = *(_DWORD *)((char *)&v443 + v349 + 4);
          }
          else if ( (_DWORD)v249 != -1 )
          {
            *((_BYTE *)v246 + 16) = v444[0];
            if ( (v349 & 2) != 0 )
              *(_WORD *)((char *)v248 + v349 - 2) = *(_WORD *)((char *)&v443 + v349 + 6);
          }
        }
        else
        {
          *v246 = v247;
          v246[2] = v444[0];
        }
        v246[1] = v249;
        v442 = v444;
        v443 = 0;
        LOBYTE(v444[0]) = 0;
        v418 = &v456;
        v459 = (unsigned __int64)v246;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v488,
          (const __m128i *)&v456);
        v489 = 0;
        LOBYTE(v472) = 0;
        *(_QWORD *)v473 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v472) = 3;
        v250 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v250,
          "diagnostic",
          v251,
          v252,
          v253,
          v254,
          v391,
          (int)&v436,
          (__int64)v481);
        LOBYTE(v460) = 0;
        v419 = (int *)&v461;
        *(_QWORD *)&v461 = 0;
        *(_OWORD *)v473 = (unsigned __int64)v250;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v460) = 3;
        v255 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v255,
          "function_count",
          v256,
          v257,
          v258,
          v259,
          v392,
          v398,
          v403);
        v462 = 6;
        v463 = func_qty;
        v464 = 0;
        v461 = (unsigned __int64)v255;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v475,
          (const __m128i *)&v460);
        *(_QWORD *)&v476[2] = 0;
        LOBYTE(v465) = 0;
        *(_QWORD *)&v466 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v465) = 3;
        v260 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v260, "string_count", v261, v262, v263, v264, v393, v399, v404);
        v467 = 6;
        v468 = v194;
        v466 = (unsigned __int64)v260;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v477,
          (const __m128i *)&v465);
        *((_QWORD *)&v478 + 1) = 0;
        v469 = 0;
        v470[0] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v469 = 3;
        v265 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v265,
          "is_large_binary",
          v266,
          v267,
          v268,
          v269,
          v394,
          v400,
          v405);
        *(_QWORD *)v471 = 4;
        *(_OWORD *)v470 = (unsigned __int64)v265;
        *(_QWORD *)&v471[8] = 1;
        *(_QWORD *)&v471[16] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v479,
          (const __m128i *)&v469);
        v479[2] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        *(_QWORD *)&v474[16] = 0;
        v413 = &v472;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v490,
          (const __m128i *)&v472);
        v491 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v270 = &v492;
        do
        {
          v270 -= 24;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v270 != *(char **)v406 );
        v271 = (__int64 *)&v480;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        do
        {
          v271 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v271 != &v475 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v442 != v444 )
          operator delete(v442, v444[0] + 1LL);
        std::string::_M_dispose();
        if ( v436 != v438 )
          operator delete(v436, v438[0] + 1LL);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_97;
      }
    }
    *v308 = *v305;
    v310 = v429;
    goto LABEL_162;
  }
  if ( strlist_qty || func_qty > 0xC34F )
    goto LABEL_56;
  build_strlist();
  v311 = get_strlist_qty();
  v194 = v311;
  if ( !v311 )
  {
    v421 = (__int64 *)&v465;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[6],char [6],0>();
    v467 = 5;
    *((_QWORD *)&v466 + 1) = 0;
    v468 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v481,
      (const __m128i *)&v465);
    v483 = 0;
    v425 = (const __m128i *)&v469;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[6],char [6],0>();
    v470[1] = 0;
    if ( !v434 )
    {
      v331 = nullptr;
      v332 = 0;
      goto LABEL_198;
    }
    v431 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v364 = src;
    v365 = (unsigned __int64)v434;
    v366 = (_QWORD *)operator new(0x20u);
    v367 = v366 + 2;
    v432.m128i_i64[0] = v365;
    v331 = v366;
    *v366 = v366 + 2;
    if ( v365 > 0xF )
    {
      v381 = std::string::_M_create();
      *v331 = v381;
      v367 = (_BYTE *)v381;
      v382 = v432.m128i_i64[0];
      v331[2] = v432.m128i_i64[0];
      v368 = v382 + 1;
      if ( v382 )
      {
        v369 = -1;
        if ( !v368 )
          goto LABEL_251;
        goto LABEL_250;
      }
    }
    else
    {
      v368 = v365 + 1;
      if ( v365 )
      {
LABEL_250:
        memcpy(v367, v364, v368);
        v369 = v432.m128i_i64[0];
LABEL_251:
        v331[1] = v369;
        v332 = 3;
LABEL_198:
        v431.m128i_i8[0] = v332;
        v431.m128i_i64[1] = (__int64)v331;
        v333 = _mm_load_si128(&v431);
        *(_QWORD *)&v471[16] = 0;
        *(__m128i *)v471 = v333;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v484,
          v425);
        v485 = 0;
        v413 = &v472;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
        *(_QWORD *)&v473[2] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v334 = _mm_load_si128(&v432);
        *(_QWORD *)&v474[16] = 0;
        *(__m128i *)v474 = v334;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v486,
          (const __m128i *)&v472);
        v487 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
        *(_QWORD *)&v476[2] = 0;
        LOBYTE(v477) = 0;
        *(_QWORD *)&v478 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v477) = 3;
        v335 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v335,
          "String list is empty after build. Database may not contain strings.",
          v336,
          v337,
          v338,
          v339,
          v391,
          v396,
          (__int64)v481);
        v478 = (unsigned __int64)v335;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v488,
          (const __m128i *)&v475);
        v489 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v340 = v490;
        do
        {
          v340 -= 6;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v340 != *(int **)v407 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_97;
      }
    }
    *v367 = *v364;
    v369 = v432.m128i_i64[0];
    goto LABEL_251;
  }
  if ( v311 <= 0x186A0 )
  {
LABEL_56:
    v427 = 0;
    v428 = nullptr;
    *(_QWORD *)v414 = &v427;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v418 = &v456;
    v195 = v427;
    v416 = v434;
    v196 = v428;
    v417 = (char *)&v457 + 8;
    v456 = (char *)&v457 + 8;
    if ( (_BYTE)v415 )
    {
      std::string::_M_construct<true>();
    }
    else
    {
      std::string::_M_construct<true>();
      v302 = (char *)v456;
      v303 = (char *)v456 + v457;
      if ( v456 != (char *)v456 + (_QWORD)v457 )
      {
        do
        {
          v304 = *v302++;
          *(v302 - 1) = tolower(v304);
        }
        while ( v302 != v303 );
      }
    }
    if ( v194 )
    {
      v197 = nullptr;
      if ( v195 == 1 )
      {
        *(_QWORD *)v397 = (int)v183;
LABEL_111:
        v198 = v196[5];
        v195 = 1;
      }
      else
      {
        if ( v195 == 2 )
        {
          *(_QWORD *)v397 = (int)v183;
          goto LABEL_86;
        }
        if ( v195 )
        {
          *(_QWORD *)v397 = (int)v183;
LABEL_64:
          v198 = 1;
        }
        else
        {
          v198 = 0;
          *(_QWORD *)v397 = (int)v183;
        }
      }
      if ( v198 < *(_QWORD *)v397 )
      {
        while ( 1 )
        {
          v429 = -1;
          v430 = 0;
          if ( !(unsigned __int8)get_strlist_item()
            || v429 == -1
            || SHIDWORD(v430) > 32
            || !(_DWORD)v430
            || (int)v430 > 0x100000 )
          {
            goto LABEL_83;
          }
          memset(&v432, 0, 24);
          if ( get_strlit_contents() <= 0 )
            goto LABEL_81;
          v203 = (const char *)v432.m128i_i64[0];
          if ( !v432.m128i_i64[1] )
            v203 = (const char *)&_qstring<char>::c_str(void)const::nullstr;
          std::string::basic_string<std::allocator<char>>(
            (__int64 *)&v460,
            v203,
            v199,
            v200,
            v201,
            v202,
            v391,
            v397[0],
            (__int64)v402);
          if ( !(_QWORD)v461 )
            goto LABEL_79;
          if ( v416 )
          {
            if ( (_BYTE)v415 )
            {
              v204 = std::string::find() != -1;
            }
            else
            {
              v402 = v481;
              *(_QWORD *)v481 = &v483;
              std::string::_M_construct<true>();
              if ( *(_QWORD *)v481 + v482 != *(_QWORD *)v481 )
              {
                v409 = v194;
                v341 = (char *)(*(_QWORD *)v481 + v482);
                *(_QWORD *)v411 = v197;
                v342 = *(char **)v481;
                do
                {
                  v343 = *v342++;
                  *(v342 - 1) = tolower(v343);
                }
                while ( v342 != v341 );
                v194 = v409;
                v197 = *(char **)v411;
              }
              v410 = std::string::find() != -1;
              std::string::_M_dispose();
              v204 = v410;
            }
            if ( !v204 )
            {
LABEL_79:
              if ( v460 != (char *)&v461 + 8 )
                operator delete(v460, *((_QWORD *)&v461 + 1) + 1LL);
LABEL_81:
              if ( !v432.m128i_i64[0] )
                goto LABEL_83;
LABEL_82:
              v432.m128i_i64[1] = 0;
              qfree();
              goto LABEL_83;
            }
          }
          v469 = 0;
          v470[0] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v469 = 3;
          v278 = operator new(0x20u);
          *(_QWORD *)v278 = v278 + 16;
          strcpy((char *)(v278 + 16), "address");
          *(_QWORD *)(v278 + 8) = 7;
          *(_OWORD *)v470 = (unsigned __int64)v278;
          qsnprintf();
          v421 = (__int64 *)&v465;
          std::string::basic_string<std::allocator<char>>(
            (__int64 *)&v465,
            si128.m128i_i8,
            v279,
            v280,
            v281,
            v282,
            v391,
            v397[0],
            (__int64)&si128);
          v471[0] = 0;
          v422 = &v471[8];
          *(_QWORD *)&v471[8] = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v471[0] = 3;
          v283 = (_QWORD *)operator new(0x20u);
          v284 = v465;
          v285 = v283 + 2;
          v286 = v466;
          *v283 = v283 + 2;
          if ( v284 == (__int128 *)((char *)&v466 + 8) )
          {
            v356 = v286 + 1;
            if ( (unsigned int)(v286 + 1) >= 8 )
            {
              v283[2] = *((_QWORD *)&v466 + 1);
              *(_QWORD *)((char *)v285 + v356 - 8) = *(_QWORD *)((char *)&v466 + v356);
              v374 = (unsigned __int64)(v283 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v375 = (char *)v285 - v374;
              v376 = (char *)((char *)&v466 + 8 - v375);
              v377 = ((_DWORD)v375 + v356) & 0xFFFFFFF8;
              if ( v377 >= 8 )
              {
                v378 = v377 & 0xFFFFFFF8;
                v379 = 0;
                do
                {
                  v380 = v379;
                  v379 += 8;
                  *(_QWORD *)(v374 + v380) = *(_QWORD *)&v376[v380];
                }
                while ( v379 < v378 );
              }
            }
            else if ( (v356 & 4) != 0 )
            {
              *((_DWORD *)v283 + 4) = DWORD2(v466);
              *(_DWORD *)((char *)v285 + v356 - 4) = *(_DWORD *)((char *)&v466 + v356 + 4);
            }
            else if ( (_DWORD)v286 != -1 )
            {
              *((_BYTE *)v283 + 16) = BYTE8(v466);
              if ( (v356 & 2) != 0 )
                *(_WORD *)((char *)v285 + v356 - 2) = *(_WORD *)((char *)&v466 + v356 + 6);
            }
          }
          else
          {
            *v283 = v284;
            v283[2] = *((_QWORD *)&v466 + 1);
          }
          v283[1] = v286;
          v425 = (const __m128i *)&v469;
          v465 = (__int128 *)((char *)&v466 + 8);
          *(_QWORD *)&v466 = 0;
          BYTE8(v466) = 0;
          *(_OWORD *)&v471[8] = (unsigned __int64)v283;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v481,
            (const __m128i *)&v469);
          v483 = 0;
          LOBYTE(v472) = 0;
          *(_QWORD *)v473 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v472) = 3;
          v287 = operator new(0x20u);
          strcpy((char *)(v287 + 16), "content");
          *(_QWORD *)v287 = v287 + 16;
          *(_QWORD *)(v287 + 8) = 7;
          v474[0] = 0;
          *(_QWORD *)&v474[8] = 0;
          v424 = &v474[8];
          *(_OWORD *)v473 = (unsigned __int64)v287;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v474[0] = 3;
          v413 = v460;
          *(_QWORD *)v412 = v461;
          v288 = (_QWORD *)operator new(0x20u);
          v289 = *(_QWORD *)v412;
          v290 = v288 + 2;
          v291 = v288;
          *v288 = v288 + 2;
          v426 = v289;
          if ( v289 > 0xF )
          {
            v346 = std::string::_M_create();
            *v291 = v346;
            v290 = (_BYTE *)v346;
            v347 = v426;
            v292 = (__m128i)(unsigned __int64)v291;
            v291[2] = v426;
            v293 = v347 + 1;
            if ( !v347 )
            {
LABEL_195:
              *v290 = *(_BYTE *)v413;
              v294 = v426;
              goto LABEL_151;
            }
            v294 = -1;
            if ( !v293 )
              goto LABEL_151;
          }
          else
          {
            v292 = (__m128i)(unsigned __int64)v288;
            v293 = v289 + 1;
            if ( !v289 )
              goto LABEL_195;
          }
          *(__m128i *)v412 = v292;
          memcpy(v290, v413, v293);
          v294 = v426;
          v292 = _mm_load_si128((const __m128i *)v412);
LABEL_151:
          v291[1] = v294;
          v413 = &v472;
          *(__m128i *)&v474[8] = v292;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v484,
            (const __m128i *)&v472);
          v485 = 0;
          LOBYTE(v475) = 0;
          *(_QWORD *)v476 = 0;
          *(_QWORD *)v412 = v476;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v475) = 3;
          v295 = (__int64 *)operator new(0x20u);
          v423 = (__m128i)(unsigned __int64)v295;
          std::string::basic_string<std::allocator<char>>(
            v295,
            "length",
            v296,
            v297,
            v298,
            v299,
            v395,
            v401,
            (__int64)v481);
          v300 = _mm_load_si128(&v423);
          LOBYTE(v477) = 6;
          v478 = (unsigned __int64)v461;
          *(__m128i *)v476 = v300;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v486,
            (const __m128i *)&v475);
          v431.m128i_i8[0] = 0;
          v419 = v402;
          v487 = 0;
          v420 = 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v427 = v195;
          v428 = v196;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          v195 = v427;
          v196 = v428;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v413 = v197;
          v301 = v488;
          do
          {
            v301 -= 6;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v301 != v402 );
          v197 = (char *)v413;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
          std::string::_M_dispose();
          if ( v432.m128i_i64[0] )
            goto LABEL_82;
LABEL_83:
          if ( ++v197 == (char *)v194 )
            break;
          if ( v195 == 1 )
            goto LABEL_111;
          if ( v195 == 2 )
          {
LABEL_86:
            v195 = 2;
            if ( (unsigned __int64)((__int64)(v196[1] - *v196) >> 4) >= *(_QWORD *)v397 )
              break;
          }
          else if ( v195 )
          {
            goto LABEL_64;
          }
        }
      }
    }
    v469 = 0;
    v470[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v469 = 3;
    v205 = operator new(0x20u);
    *(_BYTE *)(v205 + 20) = 116;
    *(_QWORD *)v205 = v205 + 16;
    *(_DWORD *)(v205 + 16) = 1853189987;
    *(_QWORD *)(v205 + 8) = 5;
    *(_BYTE *)(v205 + 21) = 0;
    *(_OWORD *)v470 = (unsigned __int64)v205;
    if ( v195 == 1 )
    {
      v206 = v196[5];
    }
    else if ( v195 == 2 )
    {
      v206 = (__int64)(v196[1] - *v196) >> 4;
    }
    else
    {
      v206 = v195 != 0;
    }
    *(_QWORD *)&v471[8] = v206;
    v471[0] = 6;
    *(_QWORD *)&v471[16] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v481,
      (const __m128i *)&v469);
    v483 = 0;
    LOBYTE(v472) = 0;
    *(_QWORD *)v473 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v472) = 3;
    v207 = operator new(0x20u);
    *(_BYTE *)(v207 + 20) = 121;
    *(_QWORD *)v207 = v207 + 16;
    *(_DWORD *)(v207 + 16) = 1919251825;
    *(_QWORD *)(v207 + 8) = 5;
    *(_BYTE *)(v207 + 21) = 0;
    *(_OWORD *)v473 = (unsigned __int64)v207;
    if ( !v434 )
    {
      v208 = nullptr;
      v209 = 0;
      goto LABEL_92;
    }
    v432 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v272 = src;
    v273 = (unsigned __int64)v434;
    v274 = (_QWORD *)operator new(0x20u);
    v275 = v274 + 2;
    v431.m128i_i64[0] = v273;
    v208 = v274;
    *v274 = v274 + 2;
    if ( v273 > 0xF )
    {
      v344 = std::string::_M_create();
      *v208 = v344;
      v275 = (_BYTE *)v344;
      v345 = v431.m128i_i64[0];
      v208[2] = v431.m128i_i64[0];
      v276 = v345 + 1;
      if ( v345 )
      {
        v277 = -1;
        if ( !v276 )
          goto LABEL_145;
        goto LABEL_144;
      }
    }
    else
    {
      v276 = v273 + 1;
      if ( v273 )
      {
LABEL_144:
        memcpy(v275, v272, v276);
        v277 = v431.m128i_i64[0];
LABEL_145:
        v208[1] = v277;
        v209 = 3;
LABEL_92:
        v432.m128i_i8[0] = v209;
        v432.m128i_i64[1] = (__int64)v208;
        v210 = _mm_load_si128(&v432);
        *(_QWORD *)&v474[16] = 0;
        v413 = &v472;
        *(__m128i *)v474 = v210;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v484,
          (const __m128i *)&v472);
        v485 = 0;
        LOBYTE(v475) = 0;
        *(_QWORD *)v476 = 0;
        *(_QWORD *)v412 = v476;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v475) = 3;
        v211 = operator new(0x20u);
        strcpy((char *)(v211 + 16), "strings");
        *(_QWORD *)v211 = v211 + 16;
        *(_QWORD *)(v211 + 8) = 7;
        v427 = v195;
        v428 = v196;
        *(_OWORD *)v476 = (unsigned __int64)v211;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        *((_QWORD *)&v478 + 1) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v486,
          (const __m128i *)&v475);
        v487 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v212 = v488;
        do
        {
          v212 -= 6;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v212 != v481 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v456 != v417 )
          operator delete(v456, *((_QWORD *)&v457 + 1) + 1LL);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_97;
      }
    }
    *v275 = *v272;
    v277 = v431.m128i_i64[0];
    goto LABEL_145;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[6],char [6],0>();
  v467 = 5;
  *((_QWORD *)&v466 + 1) = 0;
  v468 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v481,
    (const __m128i *)&v465);
  v483 = 0;
  v425 = (const __m128i *)&v469;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[6],char [6],0>();
  v470[1] = 0;
  if ( v434 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string&,std::string,0>();
  v431.m128i_i8[0] = 0;
  v431.m128i_i64[1] = 0;
  v312 = _mm_load_si128(&v431);
  *(_QWORD *)&v471[16] = 0;
  *(__m128i *)v471 = v312;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v484,
    v425);
  v485 = 0;
  v413 = &v472;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *(_QWORD *)&v473[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v313 = _mm_load_si128(&v432);
  *(_QWORD *)&v474[16] = 0;
  *(__m128i *)v474 = v313;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v486,
    (const __m128i *)&v472);
  v487 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
  *(_QWORD *)&v476[2] = 0;
  v314 = v194;
  v315 = 1;
  while ( 1 )
  {
    v316 = v315;
    v315 += 4;
    if ( v314 <= 0x1869F )
      break;
    if ( v314 <= 0xF423F )
    {
      v315 = v316 + 5;
      break;
    }
    if ( v314 <= 0x98967F )
    {
      v315 = v316 + 6;
      break;
    }
    if ( v314 <= 0x5F5E0FF )
    {
      v315 = v316 + 7;
      break;
    }
    v314 /= 0x2710u;
  }
  v317 = v315;
  *(_QWORD *)&v454[0] = 0;
  v421 = (__int64 *)&v453;
  v453 = (char *)v454 + 8;
  BYTE8(v454[0]) = 0;
  std::string::reserve();
  v318 = v315 - 1;
  v319 = v453;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v494 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v495 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v496 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v497 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v498 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v499 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v500 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v501 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v502 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v503 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v504[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v504 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  do
  {
    v320 = v194;
    v321 = v194;
    v322 = 100 * (v194 / 0x64);
    v194 /= 0x64u;
    v323 = v321 - v322;
    v319[v318] = si128.m128i_i8[2 * v323 + 1];
    v324 = v318 - 1;
    v318 -= 2;
    v319[v324] = si128.m128i_i8[2 * v323];
  }
  while ( v320 > 0x270F );
  v325 = v194 + 48;
  if ( v320 > 0x3E7 )
  {
    v319[1] = si128.m128i_i8[2 * v194 + 1];
    v325 = si128.m128i_i8[2 * v194];
  }
  *v319 = v325;
  *(_QWORD *)&v454[0] = v317;
  v453[v317] = 0;
  std::string::_M_replace();
  v418 = &v456;
  std::string::basic_string();
  std::string::append();
  std::string::basic_string();
  LOBYTE(v477) = 0;
  *(_QWORD *)&v478 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v477) = 3;
  v326 = (_QWORD *)operator new(0x20u);
  v327 = v460;
  v328 = v326 + 2;
  v329 = v461;
  *v326 = v326 + 2;
  if ( v327 == (__int128 *)((char *)&v461 + 8) )
  {
    v383 = v329 + 1;
    if ( (unsigned int)(v329 + 1) >= 8 )
    {
      v326[2] = *((_QWORD *)&v461 + 1);
      *(_QWORD *)((char *)v328 + v383 - 8) = *(_QWORD *)((char *)&v461 + v383);
      v384 = (unsigned __int64)(v326 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v385 = (char *)v328 - v384;
      v386 = (char *)((char *)&v461 + 8 - v385);
      v387 = ((_DWORD)v385 + v383) & 0xFFFFFFF8;
      if ( v387 >= 8 )
      {
        v388 = v387 & 0xFFFFFFF8;
        v389 = 0;
        do
        {
          v390 = v389;
          v389 += 8;
          *(_QWORD *)(v384 + v390) = *(_QWORD *)&v386[v390];
        }
        while ( v389 < v388 );
      }
    }
    else if ( (v383 & 4) != 0 )
    {
      *((_DWORD *)v326 + 4) = DWORD2(v461);
      *(_DWORD *)((char *)v328 + v383 - 4) = *(_DWORD *)((char *)&v461 + v383 + 4);
    }
    else if ( (_DWORD)v329 != -1 )
    {
      *((_BYTE *)v326 + 16) = BYTE8(v461);
      if ( (v383 & 2) != 0 )
        *(_WORD *)((char *)v328 + v383 - 2) = *(_WORD *)((char *)&v461 + v383 + 6);
    }
  }
  else
  {
    *v326 = v327;
    v326[2] = *((_QWORD *)&v461 + 1);
  }
  v326[1] = v329;
  v460 = (char *)&v461 + 8;
  *(_QWORD *)&v461 = 0;
  BYTE8(v461) = 0;
  v478 = (unsigned __int64)v326;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v488,
    (const __m128i *)&v475);
  v489 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v330 = v490;
  do
  {
    v330 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v330 != v481 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  std::string::_M_dispose();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_97:
  if ( src != v435 )
    operator delete(src, v435[0] + 1LL);
  return a1;
}

