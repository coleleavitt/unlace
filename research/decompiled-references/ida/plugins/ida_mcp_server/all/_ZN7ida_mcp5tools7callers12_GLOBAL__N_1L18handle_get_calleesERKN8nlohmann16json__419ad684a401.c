__int64 __fastcall ida_mcp::tools::callers::`anonymous namespace'::handle_get_callees(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  char *v5; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v7; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v8; // rbp
  void *v9; // rbx
  char *v10; // rax
  unsigned int v11; // ebp
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r13
  size_t v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  size_t v22; // rax
  int v23; // eax
  char *v24; // rbx
  int *v25; // rax
  int *v26; // r12
  __int64 v27; // rbp
  __int64 func; // r12
  __m128i v29; // xmm2
  void *v30; // rcx
  __m128i v31; // xmm1
  void *v32; // rax
  char i; // al
  __int64 v34; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r14
  char v41; // al
  bool v42; // cc
  bool v43; // zf
  char *v44; // rax
  char *v45; // rax
  unsigned int v46; // r14d
  __int64 *v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rdi
  _QWORD *v50; // r14
  void *v51; // rdx
  __int64 v52; // rax
  char v53; // si
  __int64 v54; // rdx
  char *v55; // rax
  unsigned int v56; // r15d
  __int64 *v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rdi
  _QWORD *v60; // r14
  void *v61; // rdx
  __int64 v62; // rax
  char v63; // si
  __int64 v64; // rdx
  char *v65; // r15
  __int64 *v66; // rax
  __int64 *v67; // r14
  char *v68; // rax
  __int64 v69; // rcx
  void *v70; // r8
  __int64 v71; // rax
  char v72; // si
  __int64 v73; // rdx
  _QWORD *v74; // rax
  _QWORD *v75; // r13
  char *v76; // rdi
  _QWORD *v77; // r14
  size_t v78; // rax
  char *v79; // rsi
  size_t v80; // rdi
  unsigned __int64 v81; // rcx
  char *v82; // r13
  unsigned int v83; // eax
  char *v84; // rdx
  unsigned int v85; // eax
  unsigned int v86; // esi
  __int64 v87; // r8
  __int64 v88; // rax
  char v89; // si
  __int64 v90; // rdx
  char v91; // r13
  __int64 v92; // rax
  char v93; // si
  __int64 v94; // rdx
  __int64 v95; // rcx
  char *v96; // rax
  unsigned int v97; // ebx
  __int64 *v98; // rdx
  _QWORD *v99; // rax
  _QWORD *v100; // rsi
  _QWORD *v101; // rbx
  void *v102; // rdx
  __int64 v103; // rax
  char v104; // si
  __int64 v105; // rdx
  __int64 v106; // rax
  std::runtime_error *v107; // rbx
  unsigned __int64 head; // rbx
  int v109; // eax
  const char *v110; // r12
  __int64 v111; // rbp
  __int64 v112; // rax
  char v113; // si
  __int64 v114; // rdx
  char *v115; // rax
  unsigned int v116; // ecx
  void *v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rbp
  _DWORD *v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  char v124; // si
  __int64 v125; // rdx
  const char *v126; // rbp
  _QWORD *v127; // rax
  char *v128; // rax
  _QWORD *v129; // rdx
  unsigned int v130; // ecx
  unsigned __int64 v131; // rsi
  int v132; // eax
  signed __int64 v133; // rdx
  unsigned int v134; // eax
  unsigned int v135; // eax
  unsigned int v136; // ecx
  __int64 v137; // rdi
  void *v138; // rbp
  char *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rax
  char v142; // si
  __int64 v143; // rdx
  __int64 *v144; // rbp
  char *v145; // rax
  _QWORD *v146; // rdx
  unsigned int v147; // ecx
  unsigned __int64 v148; // rsi
  char *v149; // rdx
  const char *v150; // r12
  unsigned int v151; // eax
  unsigned int v152; // edx
  __int64 v153; // rcx
  char *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rax
  char v157; // si
  __int64 v158; // rdx
  __int64 v159; // rax
  char v160; // si
  __int64 v161; // rdx
  char *v162; // r12
  __int64 *v163; // rax
  __int64 *v164; // rbp
  char *v165; // rax
  __int64 v166; // rcx
  char *v167; // r8
  __int64 v168; // rax
  char v169; // si
  __int64 v170; // rdx
  char v171; // r13
  __int64 v172; // rax
  char v173; // si
  __int64 v174; // rdx
  char v175; // r13
  __int64 v176; // rax
  char v177; // bp
  __int64 v178; // rax
  __int64 *v179; // rax
  __int64 *v180; // rax
  __int64 v181; // rax
  char *v182; // rax
  unsigned int v183; // r10d
  unsigned int v184; // r10d
  __int64 v185; // rax
  char *v186; // rax
  unsigned int v187; // r13d
  _QWORD *v188; // rdx
  __int64 v189; // rax
  _QWORD *v190; // rdx
  _QWORD *v191; // rcx
  __int128 v192; // xmm0
  __int64 v193; // rax
  char *v194; // rsi
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  const __m128i *v199; // r15
  const __m128i *v200; // rbx
  void *v201; // rbx
  __int64 v202; // rsi
  __int64 *v204; // rax
  unsigned __int64 v205; // rsi
  char *v206; // rax
  char *v207; // r14
  unsigned int v208; // eax
  unsigned int v209; // eax
  unsigned int v210; // edx
  __int64 v211; // rcx
  unsigned __int64 v212; // rsi
  char *v213; // rax
  char *v214; // r13
  unsigned int v215; // eax
  unsigned int v216; // eax
  unsigned int v217; // edx
  __int64 v218; // rcx
  __int64 v219; // rax
  char v220; // bp
  __int64 *v221; // rbp
  __int64 v222; // rax
  char *v223; // rdx
  __m128i v224; // xmm0
  __m128i v225; // xmm0
  char *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rax
  char v229; // si
  __int64 v230; // rdx
  char v231; // cl
  _QWORD *v232; // rax
  __int64 v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  _QWORD *v236; // rcx
  unsigned __int64 v237; // r8
  unsigned int v238; // ecx
  __int64 v239; // rsi
  unsigned int v240; // edi
  unsigned __int64 v241; // r8
  unsigned int v242; // ecx
  __int64 v243; // rsi
  unsigned __int64 v244; // rdi
  char *v245; // rax
  char *v246; // r14
  unsigned int v247; // eax
  unsigned int v248; // eax
  unsigned int v249; // edx
  __int64 v250; // rcx
  _QWORD *v251; // rax
  unsigned int v252; // edi
  unsigned __int64 v253; // r8
  char *v254; // r11
  unsigned int v255; // eax
  unsigned int v256; // edx
  __int64 v257; // rsi
  __int64 *v258; // rbp
  __int64 v259; // rax
  char *v260; // rdx
  __m128i v261; // xmm0
  char *v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rax
  char v265; // si
  __int64 v266; // rdx
  unsigned __int64 v267; // rsi
  char *v268; // rax
  char *v269; // rbp
  unsigned int v270; // eax
  unsigned int v271; // eax
  unsigned int v272; // edx
  __int64 v273; // rcx
  unsigned __int64 v274; // r8
  char *v275; // r9
  unsigned int v276; // eax
  unsigned int v277; // ecx
  __int64 v278; // rsi
  unsigned __int64 v279; // rcx
  char *v280; // rax
  char *v281; // r12
  unsigned int v282; // eax
  unsigned int v283; // eax
  unsigned int v284; // edx
  __int64 v285; // rsi
  unsigned int v286; // edi
  char v287; // cl
  void *v288; // rcx
  char *v289; // rax
  unsigned __int64 v290; // r8
  unsigned __int64 v291; // rax
  char *v292; // r9
  unsigned int v293; // eax
  unsigned int v294; // eax
  unsigned int v295; // edx
  __int64 v296; // rdi
  char *v297; // rax
  unsigned int v298; // ebp
  void *v299; // rdx
  _QWORD *v300; // rax
  _QWORD *v301; // rdx
  _QWORD *v302; // rbp
  char *v303; // rcx
  __int64 v304; // rsi
  __int64 v305; // rax
  char v306; // si
  __int64 v307; // rdx
  __int64 *v308; // rbp
  __int64 v309; // rax
  __int64 v310; // rdx
  __m128i v311; // xmm0
  __int64 v312; // rax
  __int64 v313; // rdx
  __int64 v314; // rax
  char v315; // si
  __int64 v316; // rdx
  char *v317; // r12
  __int64 *v318; // rax
  __int64 *v319; // rbp
  char *v320; // rax
  __int64 v321; // rcx
  void *v322; // r8
  __int64 v323; // rax
  char v324; // si
  __int64 v325; // rdx
  __int64 *v326; // rbp
  __int64 v327; // rax
  __int64 v328; // rdx
  __m128i v329; // xmm0
  __int64 v330; // rax
  __int64 v331; // rdx
  __int64 v332; // rax
  char v333; // si
  __int64 v334; // rdx
  _QWORD *v335; // rax
  unsigned int v336; // eax
  unsigned __int64 v337; // rdi
  char *v338; // rax
  char *v339; // rdx
  unsigned int v340; // eax
  unsigned int v341; // eax
  unsigned int v342; // ecx
  __int64 v343; // rsi
  unsigned __int64 v344; // rdi
  char *v345; // rdx
  char *v346; // r11
  unsigned int v347; // eax
  unsigned int v348; // eax
  unsigned int v349; // edx
  __int64 v350; // rcx
  __int64 v351; // rax
  int v352[4]; // [rsp+0h] [rbp-4D8h] BYREF
  void *v353[2]; // [rsp+10h] [rbp-4C8h] BYREF
  void *v354; // [rsp+20h] [rbp-4B8h]
  void *v355[2]; // [rsp+28h] [rbp-4B0h] BYREF
  char v356[8]; // [rsp+38h] [rbp-4A0h]
  _QWORD *v357; // [rsp+40h] [rbp-498h]
  void *s1; // [rsp+48h] [rbp-490h]
  char *v359; // [rsp+50h] [rbp-488h]
  void *dest; // [rsp+58h] [rbp-480h]
  char **v361; // [rsp+60h] [rbp-478h]
  char v362; // [rsp+6Dh] [rbp-46Bh]
  char v363; // [rsp+6Eh] [rbp-46Ah]
  bool v364; // [rsp+6Fh] [rbp-469h]
  const __m128i *v365; // [rsp+70h] [rbp-468h]
  unsigned __int64 v366; // [rsp+78h] [rbp-460h]
  char v367[8]; // [rsp+80h] [rbp-458h]
  char *v368; // [rsp+88h] [rbp-450h]
  __int64 v369; // [rsp+98h] [rbp-440h]
  char v370; // [rsp+A0h] [rbp-438h] BYREF
  _QWORD *v371; // [rsp+A8h] [rbp-430h]
  __int64 v372; // [rsp+B0h] [rbp-428h]
  __int64 v373; // [rsp+B8h] [rbp-420h]
  __int64 v374; // [rsp+C0h] [rbp-418h]
  __int64 v375; // [rsp+C8h] [rbp-410h] BYREF
  char *v376; // [rsp+D0h] [rbp-408h] BYREF
  __int128 v377; // [rsp+D8h] [rbp-400h]
  __int64 v378; // [rsp+F0h] [rbp-3E8h]
  __int64 v379; // [rsp+F8h] [rbp-3E0h] BYREF
  char v380; // [rsp+100h] [rbp-3D8h]
  char *v381; // [rsp+110h] [rbp-3C8h]
  __int128 v382; // [rsp+118h] [rbp-3C0h]
  char *v383; // [rsp+130h] [rbp-3A8h] BYREF
  __int128 v384; // [rsp+138h] [rbp-3A0h]
  char v385; // [rsp+148h] [rbp-390h]
  int v386; // [rsp+158h] [rbp-380h] BYREF
  __m128i v387; // [rsp+160h] [rbp-378h]
  void *v388; // [rsp+170h] [rbp-368h]
  __int64 v389; // [rsp+178h] [rbp-360h]
  char *v390; // [rsp+180h] [rbp-358h]
  int v391; // [rsp+188h] [rbp-350h] BYREF
  __m128i v392; // [rsp+190h] [rbp-348h]
  int *v393; // [rsp+1A0h] [rbp-338h]
  __int64 v394; // [rsp+1A8h] [rbp-330h]
  void *v395; // [rsp+1B0h] [rbp-328h] BYREF
  char *v396; // [rsp+1B8h] [rbp-320h]
  _QWORD v397[2]; // [rsp+1C0h] [rbp-318h] BYREF
  unsigned __int8 v398; // [rsp+1D0h] [rbp-308h] BYREF
  __int128 v399; // [rsp+1D8h] [rbp-300h]
  char v400; // [rsp+1E8h] [rbp-2F0h]
  __int128 v401; // [rsp+1F0h] [rbp-2E8h]
  char v402; // [rsp+200h] [rbp-2D8h] BYREF
  __int128 v403; // [rsp+208h] [rbp-2D0h]
  char v404; // [rsp+218h] [rbp-2C0h]
  __int64 v405; // [rsp+220h] [rbp-2B8h]
  __int64 v406; // [rsp+228h] [rbp-2B0h]
  void *v407; // [rsp+230h] [rbp-2A8h] BYREF
  __int128 s2; // [rsp+238h] [rbp-2A0h] BYREF
  __int64 v409; // [rsp+258h] [rbp-280h]
  void *v410[2]; // [rsp+260h] [rbp-278h] BYREF
  __int64 v411; // [rsp+270h] [rbp-268h] BYREF
  char v412[8]; // [rsp+278h] [rbp-260h] BYREF
  __int64 v413; // [rsp+280h] [rbp-258h]
  __int64 v414; // [rsp+288h] [rbp-250h]
  char v415[16]; // [rsp+290h] [rbp-248h] BYREF
  __int64 v416; // [rsp+2A0h] [rbp-238h]
  _QWORD v417[2]; // [rsp+2A8h] [rbp-230h] BYREF
  __int128 v418; // [rsp+2B8h] [rbp-220h]
  __int64 v419; // [rsp+2C8h] [rbp-210h]
  __int64 v420; // [rsp+2D0h] [rbp-208h]
  __int64 v421; // [rsp+2D8h] [rbp-200h]
  __int128 v422; // [rsp+2E0h] [rbp-1F8h]
  __int64 v423; // [rsp+2F0h] [rbp-1E8h]
  __int64 v424; // [rsp+2F8h] [rbp-1E0h]
  __int64 v425; // [rsp+300h] [rbp-1D8h]
  __int128 v426; // [rsp+308h] [rbp-1D0h]
  __int64 v427; // [rsp+318h] [rbp-1C0h]
  __int64 v428; // [rsp+320h] [rbp-1B8h]
  __int64 v429; // [rsp+328h] [rbp-1B0h]
  __int128 v430; // [rsp+330h] [rbp-1A8h]
  __int64 v431; // [rsp+340h] [rbp-198h]
  __int64 v432; // [rsp+348h] [rbp-190h]
  __int64 v433; // [rsp+350h] [rbp-188h]
  __int128 v434; // [rsp+358h] [rbp-180h]
  __int64 v435; // [rsp+368h] [rbp-170h]
  __int64 v436; // [rsp+370h] [rbp-168h]
  __int64 v437; // [rsp+378h] [rbp-160h]
  __int128 v438; // [rsp+380h] [rbp-158h]
  __int64 v439; // [rsp+390h] [rbp-148h]
  __int64 v440; // [rsp+398h] [rbp-140h]
  __int64 v441; // [rsp+3A0h] [rbp-138h]
  __int128 v442; // [rsp+3A8h] [rbp-130h]
  __int64 v443; // [rsp+3B8h] [rbp-120h]
  int v444; // [rsp+3C0h] [rbp-118h]
  _BYTE v445[8]; // [rsp+3C8h] [rbp-110h]
  char v446[24]; // [rsp+3D0h] [rbp-108h] BYREF
  _BYTE v447[8]; // [rsp+3E8h] [rbp-F0h]
  char v448[24]; // [rsp+3F0h] [rbp-E8h] BYREF
  _BYTE v449[8]; // [rsp+408h] [rbp-D0h]
  char v450[24]; // [rsp+410h] [rbp-C8h] BYREF
  _BYTE v451[8]; // [rsp+428h] [rbp-B0h]
  char v452[24]; // [rsp+430h] [rbp-A8h] BYREF
  _BYTE v453[8]; // [rsp+448h] [rbp-90h]
  char v454[24]; // [rsp+450h] [rbp-88h] BYREF
  _BYTE v455[8]; // [rsp+468h] [rbp-70h]
  char s[40]; // [rsp+470h] [rbp-68h] BYREF
  unsigned __int64 v457; // [rsp+498h] [rbp-40h]

  *(_QWORD *)v367 = a1;
  v457 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  s1 = (char *)&s2 + 8;
  v407 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = (char *)"array";
        break;
      case 3:
        v7 = "string";
        break;
      case 4:
        v7 = "boolean";
        break;
      case 8:
        v7 = "binary";
        break;
      case 9:
        v7 = "discarded";
        break;
      default:
        v7 = "number";
        break;
    }
    v390 = v7;
    *(_QWORD *)v356 = v410;
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
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = v14 + 8;
  if ( v15 )
  {
    v17 = v14 + 8;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v15 + 40);
        if ( !v20 )
          break;
        v18 = 7;
        if ( v20 <= 7 )
          v18 = *(_QWORD *)(v15 + 40);
        v19 = memcmp(*(const void **)(v15 + 32), (char *)&s2 + 8, v18);
        if ( v19 || (v19 = v20 - 7, (__int64)(v20 - 7) <= 0x7FFFFFFF) )
        {
          if ( v19 < 0 )
            break;
        }
        v17 = v15;
        v15 = *(_QWORD *)(v15 + 16);
        if ( !v15 )
          goto LABEL_12;
      }
      v15 = *(_QWORD *)(v15 + 24);
    }
    while ( v15 );
LABEL_12:
    if ( v16 != v17 )
    {
      v21 = *(_QWORD *)(v17 + 40);
      if ( v21 )
      {
        v22 = 7;
        if ( v21 <= 7 )
          v22 = *(_QWORD *)(v17 + 40);
        v23 = memcmp(s1, *(const void **)(v17 + 32), v22);
        if ( v23 || (v23 = 7 - v21, (__int64)(7 - v21) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v23 >= 0 )
            v16 = v17;
        }
      }
      else
      {
        v16 = v17;
      }
    }
  }
  BYTE8(s2) = 0;
  v365 = (const __m128i *)&v407;
  *(_QWORD *)&s2 = 0;
  v407 = s1;
  v363 = *(_BYTE *)(v16 + 64);
  if ( v363 != 3 )
  {
    v8 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v16 + 64) )
    {
      case 0:
        v13 = "null";
        break;
      case 1:
        v13 = "object";
        break;
      case 2:
        v13 = (char *)"array";
        break;
      case 3:
        v13 = "string";
        break;
      case 4:
        v13 = "boolean";
        break;
      case 8:
        v13 = "binary";
        break;
      case 9:
        v13 = "discarded";
        break;
      default:
        v13 = "number";
        break;
    }
    v390 = v13;
    *(_QWORD *)v356 = v410;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v8,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v8,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v24 = (char *)v407;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v407 == 48 && (*((_BYTE *)v407 + 1) & 0xDF) == 0x58 )
    v24 = (char *)v407 + 2;
  v25 = __errno_location();
  *v25 = 0;
  v26 = v25;
  v361 = &v383;
  v27 = __isoc23_strtoull();
  if ( v24 == v383 || *v383 || v27 == -1 && *v26 == 34 )
  {
    if ( v407 != s1 )
      operator delete(v407, *((_QWORD *)&s2 + 1) + 1LL);
    v107 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v107, "Invalid address format");
    __cxa_throw(
      v107,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v355[0] = &v386;
  *(__m128 *)v352 = _mm_loadh_ps((const double *)v355);
  *(__m128i *)v353 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v391);
  if ( v407 != s1 )
    operator delete(v407, *((_QWORD *)&s2 + 1) + 1LL);
  func = get_func();
  if ( !func )
  {
    v9 = __cxa_allocate_exception(0x10u);
    qsnprintf();
    v407 = s1;
    v10 = (char *)strlen(s);
    v383 = v10;
    v11 = (unsigned int)v10;
    if ( (unsigned __int64)v10 > 0xF )
    {
      v12 = (char *)std::string::_M_create();
      v407 = v12;
      *((_QWORD *)&s2 + 1) = v383;
LABEL_421:
      qmemcpy(v12, s, v11);
      goto LABEL_422;
    }
    if ( v10 == (_BYTE *)&dword_0 + 1 )
    {
      BYTE8(s2) = s[0];
    }
    else if ( v10 )
    {
      v12 = (char *)s1;
      goto LABEL_421;
    }
LABEL_422:
    *(_QWORD *)&s2 = v383;
    v383[(_QWORD)v407] = 0;
    std::string::insert();
    *(_QWORD *)v356 = v410;
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v368 = &v370;
  v370 = 0;
  v371 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v29 = _mm_load_si128((const __m128i *)v353);
  v30 = *(void **)(func + 8);
  v386 = 0;
  v31 = _mm_load_si128((const __m128i *)v352);
  v389 = 0;
  v354 = v30;
  v362 = v370;
  v391 = 0;
  v357 = v371;
  v393 = &v391;
  v388 = v355[0];
  v32 = *(void **)func;
  v394 = 0;
  v366 = (unsigned __int64)v32;
  v353[0] = v32;
  v387 = v31;
  v392 = v29;
  if ( v32 >= v30 )
    goto LABEL_96;
  do
  {
    for ( i = xrefblk_t_first_from(); i; i = xrefblk_t_next_from() )
    {
      if ( BYTE8(v382) && (unsigned __int8)(BYTE9(v382) - 16) <= 3u )
      {
        v34 = v382;
        v35 = (_QWORD *)v387.m128i_i64[0];
        v372 = v382;
        if ( !v387.m128i_i64[0] )
          goto LABEL_42;
        v36 = v355[0];
        do
        {
          while ( 1 )
          {
            v37 = v35[2];
            v38 = v35[3];
            if ( v35[4] >= (unsigned __int64)v382 )
              break;
            v35 = (_QWORD *)v35[3];
            if ( !v38 )
              goto LABEL_40;
          }
          v36 = v35;
          v35 = (_QWORD *)v35[2];
        }
        while ( v37 );
LABEL_40:
        if ( v36 == v355[0] || (unsigned __int64)v382 < v36[4] )
        {
LABEL_42:
          std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>();
          v39 = get_func();
          v383 = nullptr;
          v384 = 0;
          if ( v39 )
          {
            v378 = -1;
            v40 = calc_thunk_func_target();
            v364 = v34 != v40 && v40 != -1;
            if ( !v364 )
            {
              get_func_name();
              goto LABEL_45;
            }
            if ( get_func() )
            {
              get_func_name();
              v41 = BYTE9(v382);
              v42 = BYTE9(v382) <= 0x12u;
              if ( BYTE9(v382) == 18 )
              {
LABEL_188:
                v359 = "Jump_Far";
                goto LABEL_51;
              }
LABEL_46:
              if ( v42 )
              {
                v359 = "Call_Far";
                if ( v41 != 16 )
                {
                  v43 = v41 == 17;
                  v44 = "Call_Near";
                  if ( !v43 )
                    v44 = "Code_Unknown";
                  v359 = v44;
                }
              }
              else
              {
                v43 = v41 == 19;
                v182 = "Jump_Near";
                if ( !v43 )
                  v182 = "Code_Unknown";
                v359 = v182;
              }
LABEL_51:
              *(_QWORD *)&v377 = 0;
              qsnprintf();
              *(_QWORD *)v356 = v410;
              v410[0] = &v411;
              v45 = (char *)strlen(v446);
              v378 = (__int64)v45;
              v46 = (unsigned int)v45;
              if ( (unsigned __int64)v45 > 0xF )
              {
                v180 = (__int64 *)std::string::_M_create();
                v410[0] = v180;
                v411 = v378;
                goto LABEL_175;
              }
              if ( v45 == (_BYTE *)&dword_0 + 1 )
              {
                LOBYTE(v411) = v446[0];
LABEL_54:
                v47 = &v411;
              }
              else
              {
                if ( !v45 )
                  goto LABEL_54;
                v180 = &v411;
LABEL_175:
                if ( v46 >= 8 )
                {
                  v212 = (unsigned __int64)(v180 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  *v180 = *(_QWORD *)v446;
                  *(__int64 *)((char *)v180 + v46 - 8) = *(_QWORD *)&v445[v46];
                  v213 = (char *)v180 - v212;
                  v214 = (char *)(v446 - v213);
                  v215 = (v46 + (_DWORD)v213) & 0xFFFFFFF8;
                  if ( v215 >= 8 )
                  {
                    v216 = v215 & 0xFFFFFFF8;
                    v217 = 0;
                    do
                    {
                      v218 = v217;
                      v217 += 8;
                      *(_QWORD *)(v212 + v218) = *(_QWORD *)&v214[v218];
                    }
                    while ( v217 < v216 );
                  }
                }
                else if ( (v46 & 4) != 0 )
                {
                  *(_DWORD *)v180 = *(_DWORD *)v446;
                  *(_DWORD *)((char *)v180 + v46 - 4) = *(_DWORD *)&v445[v46 + 4];
                }
                else if ( v46 )
                {
                  *(_BYTE *)v180 = v446[0];
                  if ( (v46 & 2) != 0 )
                    *(_WORD *)((char *)v180 + v46 - 2) = *(_WORD *)&v445[v46 + 6];
                }
                v45 = (char *)v378;
                v47 = (__int64 *)v410[0];
              }
              v410[1] = v45;
              v45[(_QWORD)v47] = 0;
              *(_QWORD *)v352 = &v379;
              v378 = 0;
              v379 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v48 = (_QWORD *)operator new(0x20u);
              v49 = v48 + 2;
              v50 = v48;
              v51 = v410[1];
              *v48 = v48 + 2;
              if ( v410[0] == &v411 )
              {
                v183 = (_DWORD)v51 + 1;
                if ( (unsigned int)((_DWORD)v51 + 1) >= 8 )
                {
                  v241 = (unsigned __int64)(v48 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                  v48[2] = v411;
                  *(_QWORD *)((char *)v49 + v183 - 8) = *(void **)((char *)&v410[1] + v183);
                  if ( ((v183 + (_DWORD)v49 - (_DWORD)v241) & 0xFFFFFFF8) >= 8 )
                  {
                    v242 = 0;
                    do
                    {
                      v243 = v242;
                      v242 += 8;
                      *(_QWORD *)(v241 + v243) = *(_QWORD *)((char *)&v411 - ((char *)v49 - v241) + v243);
                    }
                    while ( v242 < ((v183 + (_DWORD)v49 - (_DWORD)v241) & 0xFFFFFFF8) );
                  }
                }
                else if ( (v183 & 4) != 0 )
                {
                  *((_DWORD *)v48 + 4) = v411;
                  *(_DWORD *)((char *)v49 + v183 - 4) = *(_DWORD *)((char *)&v410[1] + v183 + 4);
                }
                else if ( (_DWORD)v51 != -1 )
                {
                  *((_BYTE *)v48 + 16) = v411;
                  if ( (v183 & 2) != 0 )
                    *(_WORD *)((char *)v49 + v183 - 2) = *(_WORD *)((char *)&v410[1] + v183 + 6);
                }
              }
              else
              {
                *v48 = v410[0];
                v48[2] = v411;
              }
              v48[1] = v51;
              v410[0] = &v411;
              v410[1] = nullptr;
              LOBYTE(v411) = 0;
              LOBYTE(v376) = 0;
              v355[1] = &v376;
              v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v53 = *(_BYTE *)v52;
              v54 = *(_QWORD *)(v52 + 8);
              *(_BYTE *)v52 = 3;
              *(_QWORD *)(v52 + 8) = v50;
              LOBYTE(v378) = v53;
              v379 = v54;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v410[0] != &v411 )
                operator delete(v410[0], v411 + 1);
              qsnprintf();
              v410[0] = &v411;
              v55 = (char *)strlen(v448);
              v378 = (__int64)v55;
              v56 = (unsigned int)v55;
              if ( (unsigned __int64)v55 > 0xF )
              {
                v179 = (__int64 *)std::string::_M_create();
                v410[0] = v179;
                v411 = v378;
                goto LABEL_168;
              }
              if ( v55 == (_BYTE *)&dword_0 + 1 )
              {
                LOBYTE(v411) = v448[0];
LABEL_62:
                v57 = &v411;
              }
              else
              {
                if ( !v55 )
                  goto LABEL_62;
                v179 = &v411;
LABEL_168:
                if ( v56 >= 8 )
                {
                  v205 = (unsigned __int64)(v179 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  *v179 = *(_QWORD *)v448;
                  *(__int64 *)((char *)v179 + v56 - 8) = *(_QWORD *)&v447[v56];
                  v206 = (char *)v179 - v205;
                  v207 = (char *)(v448 - v206);
                  v208 = (v56 + (_DWORD)v206) & 0xFFFFFFF8;
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
                else if ( (v56 & 4) != 0 )
                {
                  *(_DWORD *)v179 = *(_DWORD *)v448;
                  *(_DWORD *)((char *)v179 + v56 - 4) = *(_DWORD *)&v447[v56 + 4];
                }
                else if ( v56 )
                {
                  *(_BYTE *)v179 = v448[0];
                  if ( (v56 & 2) != 0 )
                    *(_WORD *)((char *)v179 + v56 - 2) = *(_WORD *)&v447[v56 + 6];
                }
                v55 = (char *)v378;
                v57 = (__int64 *)v410[0];
              }
              v410[1] = v55;
              v55[(_QWORD)v57] = 0;
              v378 = 0;
              v379 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v58 = (_QWORD *)operator new(0x20u);
              v59 = v58 + 2;
              v60 = v58;
              v61 = v410[1];
              *v58 = v58 + 2;
              if ( v410[0] == &v411 )
              {
                v184 = (_DWORD)v61 + 1;
                if ( (unsigned int)((_DWORD)v61 + 1) >= 8 )
                {
                  v237 = (unsigned __int64)(v58 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                  v58[2] = v411;
                  *(_QWORD *)((char *)v59 + v184 - 8) = *(void **)((char *)&v410[1] + v184);
                  if ( ((v184 + (_DWORD)v59 - (_DWORD)v237) & 0xFFFFFFF8) >= 8 )
                  {
                    v238 = 0;
                    do
                    {
                      v239 = v238;
                      v238 += 8;
                      *(_QWORD *)(v237 + v239) = *(_QWORD *)((char *)&v411 - ((char *)v59 - v237) + v239);
                    }
                    while ( v238 < ((v184 + (_DWORD)v59 - (_DWORD)v237) & 0xFFFFFFF8) );
                  }
                }
                else if ( (v184 & 4) != 0 )
                {
                  *((_DWORD *)v58 + 4) = v411;
                  *(_DWORD *)((char *)v59 + v184 - 4) = *(_DWORD *)((char *)&v410[1] + v184 + 4);
                }
                else if ( (_DWORD)v61 != -1 )
                {
                  *((_BYTE *)v58 + 16) = v411;
                  if ( (v184 & 2) != 0 )
                    *(_WORD *)((char *)v59 + v184 - 2) = *(_WORD *)((char *)&v410[1] + v184 + 6);
                }
              }
              else
              {
                *v58 = v410[0];
                v58[2] = v411;
              }
              v58[1] = v61;
              v410[0] = &v411;
              v410[1] = nullptr;
              LOBYTE(v411) = 0;
              v62 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v63 = *(_BYTE *)v62;
              v64 = *(_QWORD *)(v62 + 8);
              *(_BYTE *)v62 = 3;
              *(_QWORD *)(v62 + 8) = v60;
              LOBYTE(v378) = v63;
              v379 = v64;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v410[0] != &v411 )
                operator delete(v410[0], v411 + 1);
              v65 = v383;
              if ( !(_QWORD)v384 )
                v65 = _qstring<char>::c_str(void)const::nullstr;
              v378 = 0;
              v379 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v66 = (__int64 *)operator new(0x20u);
              v67 = v66;
              *v66 = (__int64)(v66 + 2);
              if ( !v65 )
                std::__throw_logic_error("basic_string: construction from null is not valid");
              dest = v66 + 2;
              v68 = (char *)strlen(v65);
              v69 = (__int64)dest;
              v374 = (__int64)v68;
              v70 = v68;
              if ( (unsigned __int64)v68 > 0xF )
              {
                dest = v68;
                v181 = std::string::_M_create();
                *v67 = v181;
                v69 = v181;
                v70 = dest;
                v67[2] = v374;
                goto LABEL_182;
              }
              if ( v68 == (_BYTE *)&dword_0 + 1 )
              {
                *((_BYTE *)v67 + 16) = *v65;
              }
              else
              {
                if ( !v68 )
                  goto LABEL_73;
LABEL_182:
                memcpy((void *)v69, v65, (size_t)v70);
                v68 = (char *)v374;
                v69 = *v67;
              }
LABEL_73:
              v67[1] = (__int64)v68;
              v68[v69] = 0;
              v71 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v72 = *(_BYTE *)v71;
              v73 = *(_QWORD *)(v71 + 8);
              *(_BYTE *)v71 = 3;
              *(_QWORD *)(v71 + 8) = v67;
              LOBYTE(v378) = v72;
              v379 = v73;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v378 = 0;
              v379 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v74 = (_QWORD *)operator new(0x20u);
              v75 = v74 + 2;
              v76 = v359;
              v77 = v74;
              *v74 = v74 + 2;
              v78 = strlen(v76);
              v79 = v359;
              v80 = v78;
              v81 = (unsigned __int64)(v77 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v82 = (char *)v75 - v81;
              v77[2] = *(_QWORD *)v359;
              *(_QWORD *)((char *)v77 + (unsigned int)v78 + 8) = *(_QWORD *)&v79[(unsigned int)v78 - 8];
              v83 = (v78 + (_DWORD)v82) & 0xFFFFFFF8;
              v84 = (char *)(v79 - v82);
              if ( v83 >= 8 )
              {
                v85 = v83 & 0xFFFFFFF8;
                v86 = 0;
                do
                {
                  v87 = v86;
                  v86 += 8;
                  *(_QWORD *)(v81 + v87) = *(_QWORD *)&v84[v87];
                }
                while ( v86 < v85 );
              }
              v77[1] = v80;
              *((_BYTE *)v77 + v80 + 16) = 0;
              v88 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v89 = *(_BYTE *)v88;
              v90 = *(_QWORD *)(v88 + 8);
              v91 = (char)v376;
              *(_BYTE *)v88 = 3;
              *(_QWORD *)(v88 + 8) = v77;
              LOBYTE(v378) = v89;
              v379 = v90;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v364 )
              {
                v379 = 1;
                v92 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v93 = *(_BYTE *)v92;
                v94 = *(_QWORD *)(v92 + 8);
                v95 = v379;
                *(_BYTE *)v92 = 4;
                LOBYTE(v378) = v93;
                *(_QWORD *)(v92 + 8) = v95;
                v379 = v94;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                qsnprintf();
                v410[0] = &v411;
                v96 = (char *)strlen(v450);
                v378 = (__int64)v96;
                v97 = (unsigned int)v96;
                if ( (unsigned __int64)v96 > 0xF )
                {
                  v204 = (__int64 *)std::string::_M_create();
                  v410[0] = v204;
                  v411 = v378;
                  goto LABEL_215;
                }
                if ( v96 == (_BYTE *)&dword_0 + 1 )
                {
                  LOBYTE(v411) = v450[0];
LABEL_80:
                  v98 = &v411;
                }
                else
                {
                  if ( !v96 )
                    goto LABEL_80;
                  v204 = &v411;
LABEL_215:
                  if ( v97 >= 8 )
                  {
                    v244 = (unsigned __int64)(v204 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                    *v204 = *(_QWORD *)v450;
                    *(__int64 *)((char *)v204 + v97 - 8) = *(_QWORD *)&v449[v97];
                    v245 = (char *)v204 - v244;
                    v246 = (char *)(v450 - v245);
                    v247 = (v97 + (_DWORD)v245) & 0xFFFFFFF8;
                    if ( v247 >= 8 )
                    {
                      v248 = v247 & 0xFFFFFFF8;
                      v249 = 0;
                      do
                      {
                        v250 = v249;
                        v249 += 8;
                        *(_QWORD *)(v244 + v250) = *(_QWORD *)&v246[v250];
                      }
                      while ( v249 < v248 );
                    }
                  }
                  else if ( (v97 & 4) != 0 )
                  {
                    *(_DWORD *)v204 = *(_DWORD *)v450;
                    *(_DWORD *)((char *)v204 + v97 - 4) = *(_DWORD *)&v449[v97 + 4];
                  }
                  else if ( v97 )
                  {
                    *(_BYTE *)v204 = v450[0];
                    if ( (v97 & 2) != 0 )
                      *(_WORD *)((char *)v204 + v97 - 2) = *(_WORD *)&v449[v97 + 6];
                  }
                  v96 = (char *)v378;
                  v98 = (__int64 *)v410[0];
                }
                v410[1] = v96;
                v96[(_QWORD)v98] = 0;
                v378 = 0;
                v379 = 0;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                v99 = (_QWORD *)operator new(0x20u);
                v100 = v99 + 2;
                v101 = v99;
                v102 = v410[1];
                *v99 = v99 + 2;
                if ( v410[0] == &v411 )
                {
                  v240 = (_DWORD)v102 + 1;
                  if ( (unsigned int)((_DWORD)v102 + 1) >= 8 )
                  {
                    v274 = (unsigned __int64)(v99 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                    v99[2] = v411;
                    *(_QWORD *)((char *)v100 + v240 - 8) = *(void **)((char *)&v410[1] + v240);
                    v275 = (char *)((char *)&v411 - ((char *)v100 - v274));
                    if ( ((v240 + (_DWORD)v100 - (_DWORD)v274) & 0xFFFFFFF8) >= 8 )
                    {
                      v276 = (v240 + (_DWORD)v100 - v274) & 0xFFFFFFF8;
                      v277 = 0;
                      do
                      {
                        v278 = v277;
                        v277 += 8;
                        *(_QWORD *)(v274 + v278) = *(_QWORD *)&v275[v278];
                      }
                      while ( v277 < v276 );
                    }
                  }
                  else if ( (v240 & 4) != 0 )
                  {
                    *((_DWORD *)v99 + 4) = v411;
                    *(_DWORD *)((char *)v100 + v240 - 4) = *(_DWORD *)((char *)&v410[1] + v240 + 4);
                  }
                  else if ( (_DWORD)v102 != -1 )
                  {
                    *((_BYTE *)v99 + 16) = v411;
                    if ( (v240 & 2) != 0 )
                      *(_WORD *)((char *)v100 + v240 - 2) = *(_WORD *)((char *)&v410[1] + v240 + 6);
                  }
                }
                else
                {
                  *v99 = v410[0];
                  v99[2] = v411;
                }
                v101[1] = v102;
                v410[0] = &v411;
                v410[1] = nullptr;
                LOBYTE(v411) = 0;
                v103 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v104 = *(_BYTE *)v103;
                v105 = *(_QWORD *)(v103 + 8);
                v91 = (char)v376;
                *(_BYTE *)v103 = 3;
                *(_QWORD *)(v103 + 8) = v101;
                LOBYTE(v378) = v104;
                v379 = v105;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                if ( v410[0] != &v411 )
                  operator delete(v410[0], v411 + 1);
              }
              if ( !v362 )
              {
                v106 = operator new(0x18u);
                *(_QWORD *)(v106 + 16) = 0;
                v357 = (_QWORD *)v106;
                *(_OWORD *)v106 = 0;
                goto LABEL_87;
              }
              if ( v362 != 2 )
              {
                v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                switch ( v362 )
                {
                  case 1:
                    v5 = "object";
                    break;
                  case 2:
                    v5 = (char *)"array";
                    break;
                  case 3:
                    v5 = "string";
                    break;
                  case 4:
                    v5 = "boolean";
                    break;
                  case 8:
                    v5 = "binary";
                    break;
                  case 9:
                    v5 = "discarded";
                    break;
                  default:
                    v5 = "number";
                    break;
                }
                v378 = (__int64)v5;
                nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
                nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                  v4,
                  308);
                std::string::_M_dispose();
                __cxa_throw(
                  v4,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
              if ( v357[2] == v357[1] )
              {
LABEL_87:
                LOBYTE(v376) = v91;
                std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
              }
              else
              {
                LOBYTE(v376) = v91;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
                v357[1] += 16LL;
              }
              LOBYTE(v376) = v91;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v383 )
              {
                *(_QWORD *)&v384 = 0;
                qfree();
              }
              v362 = 2;
              continue;
            }
          }
          else
          {
            v383 = (char *)qvector_reserve();
            *(_QWORD *)&v384 = 11;
            strcpy(v383, "<external>");
            v364 = 0;
          }
LABEL_45:
          v41 = BYTE9(v382);
          v42 = BYTE9(v382) <= 0x12u;
          if ( BYTE9(v382) == 18 )
            goto LABEL_188;
          goto LABEL_46;
        }
      }
    }
    v353[0] = (void *)next_head();
  }
  while ( v353[0] < v354 );
LABEL_96:
  head = v366;
  *(_QWORD *)v356 = v410;
  while ( head < (unsigned __int64)v354 )
  {
    v411 = -1;
    *(_OWORD *)v410 = -1;
    *(_QWORD *)v412 = 0;
    v413 = 0;
    v414 = 0;
    v416 = 0;
    v417[0] = 0;
    v417[1] = 0;
    v419 = 0;
    v420 = 0;
    v421 = 0;
    v423 = 0;
    v424 = 0;
    v425 = 0;
    v427 = 0;
    v428 = 0;
    v429 = 0;
    v431 = 0;
    v432 = 0;
    v433 = 0;
    v435 = 0;
    v436 = 0;
    v437 = 0;
    v439 = 0;
    v440 = 0;
    *(_OWORD *)v415 = 0;
    v418 = 0;
    v422 = 0;
    v426 = 0;
    v430 = 0;
    v434 = 0;
    v438 = 0;
    v441 = 0;
    v443 = 0;
    v444 = 0;
    v442 = 0;
    if ( !(unsigned int)decode_insn() )
      goto LABEL_97;
    v376 = nullptr;
    v377 = 0;
    print_insn_mnem();
    *(_OWORD *)s = 0;
    qstrncpy();
    if ( s[0] )
    {
      s[0] = toupper(s[0]);
      if ( s[1] )
      {
        s[1] = toupper(s[1]);
        if ( s[2] )
        {
          s[2] = toupper(s[2]);
          if ( s[3] )
          {
            s[3] = toupper(s[3]);
            if ( s[4] )
            {
              s[4] = toupper(s[4]);
              if ( s[5] )
              {
                s[5] = toupper(s[5]);
                if ( s[6] )
                {
                  s[6] = toupper(s[6]);
                  if ( s[7] )
                  {
                    s[7] = toupper(s[7]);
                    if ( s[8] )
                    {
                      s[8] = toupper(s[8]);
                      if ( s[9] )
                      {
                        s[9] = toupper(s[9]);
                        if ( s[10] )
                        {
                          s[10] = toupper(s[10]);
                          if ( s[11] )
                          {
                            s[11] = toupper(s[11]);
                            if ( s[12] )
                            {
                              s[12] = toupper(s[12]);
                              if ( s[13] )
                              {
                                s[13] = toupper(s[13]);
                                if ( s[14] )
                                  s[14] = toupper(s[14]);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v109 = strcmp(s, "CALL");
    LOBYTE(v352[0]) = 1;
    if ( v109 && (s[0] != 66 || s[1] != 76 || s[2]) )
      LOBYTE(v352[0]) = strcmp(s, "BLR") == 0;
    if ( (!strcmp(s, "JMP") || s[0] == 66 && !s[1] || s[0] == 66 && s[1] == 82 && !s[2] || LOBYTE(v352[0]))
      && (!(unsigned __int8)xrefblk_t_first_from() || !v380) )
    {
      if ( (unsigned __int8)(BYTE1(v414) - 2) > 2u )
      {
        if ( BYTE1(v414) == 1 )
        {
          v287 = v352[0];
          v110 = "Indirect_Jump_Register";
          if ( LOBYTE(v352[0]) )
          {
            v287 = 0;
            v110 = "Indirect_Call_Register";
          }
          LOBYTE(v352[0]) = v287;
        }
        else
        {
          v231 = v352[0];
          v110 = "Indirect_Jump";
          if ( LOBYTE(v352[0]) )
          {
            v231 = 0;
            v110 = "Indirect_Call";
          }
          LOBYTE(v352[0]) = v231;
        }
      }
      else
      {
        v110 = "Virtual_Call";
        if ( !LOBYTE(v352[0]) )
        {
          LOBYTE(v352[0]) = 1;
          v110 = "Virtual_Jump";
        }
      }
      v373 = 0;
      v383 = nullptr;
      *(_QWORD *)&v384 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v111 = operator new(0x20u);
      LOBYTE(v372) = 0;
      *(_QWORD *)v111 = v111 + 16;
      strcpy((char *)(v111 + 16), "unknown");
      *(_QWORD *)(v111 + 8) = 7;
      v112 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v113 = *(_BYTE *)v112;
      v114 = *(_QWORD *)(v112 + 8);
      *(_BYTE *)v112 = 3;
      *(_QWORD *)(v112 + 8) = v111;
      LOBYTE(v383) = v113;
      *(_QWORD *)&v384 = v114;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v407 = s1;
      v115 = (char *)strlen(v452);
      v383 = v115;
      v116 = (unsigned int)v115;
      if ( (unsigned __int64)v115 > 0xF )
      {
        v353[0] = v115;
        v232 = (_QWORD *)std::string::_M_create();
        v407 = v232;
        v116 = (unsigned int)v353[0];
        *((_QWORD *)&s2 + 1) = v383;
        goto LABEL_248;
      }
      if ( v115 == (_BYTE *)&dword_0 + 1 )
      {
        BYTE8(s2) = v452[0];
LABEL_131:
        v117 = s1;
      }
      else
      {
        if ( !v115 )
          goto LABEL_131;
        v232 = s1;
LABEL_248:
        if ( v116 >= 8 )
        {
          *v232 = *(_QWORD *)v452;
          *(_QWORD *)((char *)v232 + v116 - 8) = *(_QWORD *)&v451[v116];
          v267 = (unsigned __int64)(v232 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v268 = (char *)v232 - v267;
          v269 = (char *)(v452 - v268);
          v270 = (v116 + (_DWORD)v268) & 0xFFFFFFF8;
          if ( v270 >= 8 )
          {
            v271 = v270 & 0xFFFFFFF8;
            v272 = 0;
            do
            {
              v273 = v272;
              v272 += 8;
              *(_QWORD *)(v267 + v273) = *(_QWORD *)&v269[v273];
            }
            while ( v272 < v271 );
          }
        }
        else if ( (v116 & 4) != 0 )
        {
          *(_DWORD *)v232 = *(_DWORD *)v452;
          *(_DWORD *)((char *)v232 + v116 - 4) = *(_DWORD *)&v451[v116 + 4];
        }
        else if ( v116 )
        {
          *(_BYTE *)v232 = v452[0];
          if ( (v116 & 2) != 0 )
            *(_WORD *)((char *)v232 + v116 - 2) = *(_WORD *)&v451[v116 + 6];
        }
        v115 = v383;
        v117 = v407;
      }
      *(_QWORD *)&s2 = v115;
      v115[(_QWORD)v117] = 0;
      v383 = nullptr;
      *(_QWORD *)&v384 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v118 = operator new(0x20u);
      v119 = v118 + 16;
      v120 = v118;
      v121 = s1;
      v122 = s2;
      *(_QWORD *)v118 = v118 + 16;
      if ( v407 == v121 )
      {
        v252 = v122 + 1;
        if ( (unsigned int)(v122 + 1) < 8 )
        {
          if ( (v252 & 4) != 0 )
          {
            *(_DWORD *)(v118 + 16) = *v121;
            *(_DWORD *)(v119 + v252 - 4) = *(_DWORD *)((char *)v121 + v252 - 4);
          }
          else if ( (_DWORD)v122 != -1 )
          {
            *(_BYTE *)(v118 + 16) = *(_BYTE *)v121;
            if ( (v252 & 2) != 0 )
              *(_WORD *)(v119 + v252 - 2) = *(_WORD *)((char *)s1 + v252 - 2);
          }
        }
        else
        {
          v253 = (v118 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(v118 + 16) = *(_QWORD *)v121;
          *(_QWORD *)(v119 + v252 - 8) = *(_QWORD *)((char *)v121 + v252 - 8);
          v254 = (char *)v121 - (v119 - v253);
          if ( ((v252 + (_DWORD)v119 - (_DWORD)v253) & 0xFFFFFFF8) >= 8 )
          {
            v255 = (v252 + v119 - v253) & 0xFFFFFFF8;
            v256 = 0;
            do
            {
              v257 = v256;
              v256 += 8;
              *(_QWORD *)(v253 + v257) = *(_QWORD *)&v254[v257];
            }
            while ( v256 < v255 );
          }
        }
      }
      else
      {
        *(_QWORD *)v118 = v407;
        *(_QWORD *)(v118 + 16) = *((_QWORD *)&s2 + 1);
      }
      *(_QWORD *)(v120 + 8) = v122;
      *(_QWORD *)&s2 = 0;
      v407 = s1;
      BYTE8(s2) = 0;
      v123 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v124 = *(_BYTE *)v123;
      v125 = *(_QWORD *)(v123 + 8);
      *(_BYTE *)v123 = 3;
      *(_QWORD *)(v123 + 8) = v120;
      LOBYTE(v383) = v124;
      *(_QWORD *)&v384 = v125;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v407 != s1 )
        operator delete(v407, *((_QWORD *)&s2 + 1) + 1LL);
      v126 = "<computed/indirect>";
      v383 = nullptr;
      if ( LOBYTE(v352[0]) )
        v126 = "<virtual>";
      *(_QWORD *)&v384 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v127 = (_QWORD *)operator new(0x20u);
      v353[0] = v127;
      *v127 = v127 + 2;
      v355[0] = v127 + 2;
      v128 = (char *)strlen(v126);
      v129 = v355[0];
      v381 = v128;
      v130 = (unsigned int)v128;
      if ( (unsigned __int64)v128 > 0xF )
      {
        v355[0] = v128;
        v235 = std::string::_M_create();
        v236 = v353[0];
        v129 = (_QWORD *)v235;
        *(_QWORD *)v353[0] = v235;
        v236[2] = v381;
        v130 = (unsigned int)v355[0];
      }
      *v129 = *(_QWORD *)v126;
      *(_QWORD *)((char *)v129 + v130 - 8) = *(_QWORD *)&v126[v130 - 8];
      v131 = (unsigned __int64)(v129 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v132 = (_DWORD)v129 - v131;
      v133 = v126 - ((const char *)v129 - v131);
      v134 = (v130 + v132) & 0xFFFFFFF8;
      if ( v134 >= 8 )
      {
        v135 = v134 & 0xFFFFFFF8;
        v136 = 0;
        do
        {
          v137 = v136;
          v136 += 8;
          *(_QWORD *)(v131 + v137) = *(_QWORD *)(v133 + v137);
        }
        while ( v136 < v135 );
      }
      v138 = v353[0];
      v139 = v381;
      v140 = *(_QWORD *)v353[0];
      *((_QWORD *)v353[0] + 1) = v381;
      v139[v140] = 0;
      v141 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v142 = *(_BYTE *)v141;
      v143 = *(_QWORD *)(v141 + 8);
      *(_BYTE *)v141 = 3;
      *(_QWORD *)(v141 + 8) = v138;
      LOBYTE(v383) = v142;
      *(_QWORD *)&v384 = v143;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v383 = nullptr;
      *(_QWORD *)&v384 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v144 = (__int64 *)operator new(0x20u);
      *v144 = (__int64)(v144 + 2);
      v353[0] = v144 + 2;
      v145 = (char *)strlen(v110);
      v146 = v353[0];
      v381 = v145;
      v147 = (unsigned int)v145;
      if ( (unsigned __int64)v145 > 0xF )
      {
        v353[0] = v145;
        v234 = std::string::_M_create();
        *v144 = v234;
        v146 = (_QWORD *)v234;
        v147 = (unsigned int)v353[0];
        v144[2] = (__int64)v381;
      }
      *v146 = *(_QWORD *)v110;
      *(_QWORD *)((char *)v146 + v147 - 8) = *(_QWORD *)&v110[v147 - 8];
      v148 = (unsigned __int64)(v146 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v149 = (char *)v146 - v148;
      v150 = (const char *)(v110 - v149);
      if ( ((v147 + (_DWORD)v149) & 0xFFFFFFF8) >= 8 )
      {
        v151 = (v147 + (_DWORD)v149) & 0xFFFFFFF8;
        v152 = 0;
        do
        {
          v153 = v152;
          v152 += 8;
          *(_QWORD *)(v148 + v153) = *(_QWORD *)&v150[v153];
        }
        while ( v152 < v151 );
      }
      v154 = v381;
      v155 = *v144;
      v144[1] = (__int64)v381;
      v154[v155] = 0;
      v156 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v157 = *(_BYTE *)v156;
      v158 = *(_QWORD *)(v156 + 8);
      *(_BYTE *)v156 = 3;
      *(_QWORD *)(v156 + 8) = v144;
      LOBYTE(v383) = v157;
      *(_QWORD *)&v384 = v158;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      *(_QWORD *)&v384 = 1;
      v159 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v160 = *(_BYTE *)v159;
      v161 = *(_QWORD *)(v159 + 8);
      *(_BYTE *)v159 = 4;
      LOBYTE(v383) = v160;
      *(_QWORD *)(v159 + 8) = v384;
      *(_QWORD *)&v384 = v161;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v162 = v376;
      if ( !(_QWORD)v377 )
        v162 = _qstring<char>::c_str(void)const::nullstr;
      v383 = nullptr;
      *(_QWORD *)&v384 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v163 = (__int64 *)operator new(0x20u);
      v164 = v163;
      *v163 = (__int64)(v163 + 2);
      if ( !v162 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v353[0] = v163 + 2;
      v165 = (char *)strlen(v162);
      v166 = (__int64)v353[0];
      v381 = v165;
      v167 = v165;
      if ( (unsigned __int64)v165 > 0xF )
      {
        v353[0] = v165;
        v233 = std::string::_M_create();
        *v164 = v233;
        v166 = v233;
        v167 = (char *)v353[0];
        v164[2] = (__int64)v381;
        goto LABEL_253;
      }
      if ( v165 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v164 + 16) = *v162;
      }
      else
      {
        if ( !v165 )
          goto LABEL_154;
LABEL_253:
        memcpy((void *)v166, v162, (size_t)v167);
        v165 = v381;
        v166 = *v164;
      }
LABEL_154:
      v164[1] = (__int64)v165;
      v165[v166] = 0;
      v168 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v169 = *(_BYTE *)v168;
      v170 = *(_QWORD *)(v168 + 8);
      *(_BYTE *)v168 = 3;
      v171 = v372;
      *(_QWORD *)(v168 + 8) = v164;
      LOBYTE(v383) = v169;
      *(_QWORD *)&v384 = v170;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( BYTE1(v414) != 1 )
      {
LABEL_155:
        if ( LOBYTE(v352[0]) )
        {
          *(_QWORD *)&v384 = 1;
          LOBYTE(v372) = v171;
          v172 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v173 = *(_BYTE *)v172;
          v174 = *(_QWORD *)(v172 + 8);
          *(_BYTE *)v172 = 4;
          LOBYTE(v383) = v173;
          *(_QWORD *)(v172 + 8) = v384;
          *(_QWORD *)&v384 = v174;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v383 = nullptr;
          v175 = v372;
          *(_QWORD *)&v384 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v176 = operator new(0x20u);
          strcpy((char *)(v176 + 16), "unknown");
          *(_QWORD *)v176 = v176 + 16;
          *(_QWORD *)(v176 + 8) = 7;
          *(_QWORD *)&v384 = v176;
          LOBYTE(v383) = 3;
          v177 = nlohmann::json_abi_v3_12_0::operator==();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v177 )
          {
            v383 = nullptr;
            *(_QWORD *)&v384 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v258 = (__int64 *)operator new(0x20u);
            v381 = (char *)&dword_30;
            *v258 = (__int64)(v258 + 2);
            v259 = std::string::_M_create();
            v260 = v381;
            *v258 = v259;
            v261 = _mm_load_si128((const __m128i *)&xmmword_3E2110);
            v258[2] = (__int64)v260;
            *(__m128i *)v259 = v261;
            *(__m128i *)(v259 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2120);
            *(__m128i *)(v259 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E2130);
            v262 = v381;
            v263 = *v258;
            v258[1] = (__int64)v381;
            v262[v263] = 0;
            v264 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v265 = *(_BYTE *)v264;
            v266 = *(_QWORD *)(v264 + 8);
            *(_BYTE *)v264 = 3;
            v175 = v372;
            *(_QWORD *)(v264 + 8) = v258;
            LOBYTE(v383) = v265;
            *(_QWORD *)&v384 = v266;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
LABEL_158:
          if ( !v362 )
            goto LABEL_159;
LABEL_231:
          if ( v362 != 2 )
          {
            v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
            switch ( v362 )
            {
              case 1:
                v3 = "object";
                break;
              case 2:
                v3 = (char *)"array";
                break;
              case 3:
                v3 = "string";
                break;
              case 4:
                v3 = "boolean";
                break;
              case 8:
                v3 = "binary";
                break;
              case 9:
                v3 = "discarded";
                break;
              default:
                v3 = "number";
                break;
            }
            v383 = v3;
            nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
            nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
              v2,
              308);
            std::string::_M_dispose();
            __cxa_throw(
              v2,
              (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
              (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
          }
          if ( v357[1] != v357[2] )
          {
            LOBYTE(v372) = v175;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v357[1] += 16LL;
            goto LABEL_161;
          }
        }
        else
        {
          LOBYTE(v372) = v171;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v383 = nullptr;
          v175 = v372;
          *(_QWORD *)&v384 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v219 = operator new(0x20u);
          strcpy((char *)(v219 + 16), "unknown");
          *(_QWORD *)v219 = v219 + 16;
          *(_QWORD *)(v219 + 8) = 7;
          *(_QWORD *)&v384 = v219;
          LOBYTE(v383) = 3;
          v220 = nlohmann::json_abi_v3_12_0::operator==();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( !v220 )
            goto LABEL_158;
          v383 = nullptr;
          *(_QWORD *)&v384 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v221 = (__int64 *)operator new(0x20u);
          v381 = (char *)&dword_44;
          *v221 = (__int64)(v221 + 2);
          v222 = std::string::_M_create();
          v223 = v381;
          *v221 = v222;
          v224 = _mm_load_si128((const __m128i *)&xmmword_3E2140);
          v221[2] = (__int64)v223;
          *(__m128i *)v222 = v224;
          v225 = _mm_load_si128((const __m128i *)&xmmword_3E2150);
          *(_DWORD *)(v222 + 64) = 1952802674;
          *(__m128i *)(v222 + 16) = v225;
          *(__m128i *)(v222 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E2160);
          *(__m128i *)(v222 + 48) = _mm_load_si128((const __m128i *)&xmmword_3E2170);
          v226 = v381;
          v227 = *v221;
          v221[1] = (__int64)v381;
          v226[v227] = 0;
          v228 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v229 = *(_BYTE *)v228;
          v230 = *(_QWORD *)(v228 + 8);
          *(_BYTE *)v228 = 3;
          v175 = v372;
          *(_QWORD *)(v228 + 8) = v221;
          LOBYTE(v383) = v229;
          *(_QWORD *)&v384 = v230;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v362 )
            goto LABEL_231;
LABEL_159:
          v178 = operator new(0x18u);
          *(_QWORD *)(v178 + 16) = 0;
          v357 = (_QWORD *)v178;
          *(_OWORD *)v178 = 0;
        }
        LOBYTE(v372) = v175;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_161:
        LOBYTE(v372) = v175;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v376 )
        {
          *(_QWORD *)&v377 = 0;
          qfree();
        }
        v362 = 2;
        goto LABEL_97;
      }
      v385 = 0;
      v383 = nullptr;
      v384 = 0;
      if ( (unsigned __int8)find_reg_value_info() && (unsigned __int8)(v385 - 10) <= 1u )
      {
        v288 = *(void **)v383;
        v353[0] = *(void **)v383;
        if ( (_QWORD)v384 != 1 && 24LL * (_QWORD)v384 != 24 )
        {
          v289 = v383 + 24;
          while ( v288 == *(void **)v289 )
          {
            v289 += 24;
            if ( &v383[24 * (_QWORD)v384] == v289 )
              goto LABEL_343;
          }
LABEL_278:
          *(_QWORD *)&v384 = 0;
          qfree();
          goto LABEL_155;
        }
LABEL_343:
        qsnprintf();
        v407 = s1;
        v297 = (char *)strlen(v454);
        v381 = v297;
        v298 = (unsigned int)v297;
        if ( (unsigned __int64)v297 > 0xF )
        {
          v335 = (_QWORD *)std::string::_M_create();
          v407 = v335;
          *((_QWORD *)&s2 + 1) = v381;
          goto LABEL_364;
        }
        if ( v297 == (_BYTE *)&dword_0 + 1 )
        {
          BYTE8(s2) = v454[0];
LABEL_346:
          v299 = s1;
        }
        else
        {
          if ( !v297 )
            goto LABEL_346;
          v335 = s1;
LABEL_364:
          if ( v298 >= 8 )
          {
            v337 = (unsigned __int64)(v335 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            *v335 = *(_QWORD *)v454;
            *(_QWORD *)((char *)v335 + v298 - 8) = *(_QWORD *)&v453[v298];
            v338 = (char *)v335 - v337;
            v339 = (char *)(v454 - v338);
            v340 = (v298 + (_DWORD)v338) & 0xFFFFFFF8;
            if ( v340 >= 8 )
            {
              v341 = v340 & 0xFFFFFFF8;
              v342 = 0;
              do
              {
                v343 = v342;
                v342 += 8;
                *(_QWORD *)(v337 + v343) = *(_QWORD *)&v339[v343];
              }
              while ( v342 < v341 );
            }
          }
          else if ( (v298 & 4) != 0 )
          {
            *(_DWORD *)v335 = *(_DWORD *)v454;
            *(_DWORD *)((char *)v335 + v298 - 4) = *(_DWORD *)&v453[v298 + 4];
          }
          else if ( v298 )
          {
            *(_BYTE *)v335 = v454[0];
            if ( (v298 & 2) != 0 )
              *(_WORD *)((char *)v335 + v298 - 2) = *(_WORD *)&v453[v298 + 6];
          }
          v297 = v381;
          v299 = v407;
        }
        *(_QWORD *)&s2 = v297;
        v297[(_QWORD)v299] = 0;
        v381 = nullptr;
        *(_QWORD *)&v382 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v300 = (_QWORD *)operator new(0x20u);
        v301 = v300 + 2;
        v302 = v300;
        v303 = (char *)s1;
        v304 = s2;
        *v300 = v300 + 2;
        if ( v407 == v303 )
        {
          v336 = v304 + 1;
          if ( (unsigned int)(v304 + 1) >= 8 )
          {
            v302[2] = *(_QWORD *)v303;
            *(_QWORD *)((char *)v301 + v336 - 8) = *(_QWORD *)&v303[v336 - 8];
            v344 = (unsigned __int64)(v302 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v345 = (char *)v301 - v344;
            v346 = (char *)(v303 - v345);
            v347 = ((_DWORD)v345 + v336) & 0xFFFFFFF8;
            if ( v347 >= 8 )
            {
              v348 = v347 & 0xFFFFFFF8;
              v349 = 0;
              do
              {
                v350 = v349;
                v349 += 8;
                *(_QWORD *)(v344 + v350) = *(_QWORD *)&v346[v350];
              }
              while ( v349 < v348 );
            }
          }
          else if ( (v336 & 4) != 0 )
          {
            *((_DWORD *)v302 + 4) = *(_DWORD *)v303;
            *(_DWORD *)((char *)v301 + v336 - 4) = *(_DWORD *)&v303[v336 - 4];
          }
          else if ( (_DWORD)v304 != -1 )
          {
            *((_BYTE *)v302 + 16) = *v303;
            if ( (v336 & 2) != 0 )
              *(_WORD *)((char *)v301 + v336 - 2) = *(_WORD *)((char *)s1 + v336 - 2);
          }
        }
        else
        {
          *v300 = v407;
          v300[2] = *((_QWORD *)&s2 + 1);
        }
        v302[1] = v304;
        *(_QWORD *)&s2 = 0;
        v407 = s1;
        BYTE8(s2) = 0;
        v305 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v306 = *(_BYTE *)v305;
        v307 = *(_QWORD *)(v305 + 8);
        *(_BYTE *)v305 = 3;
        *(_QWORD *)(v305 + 8) = v302;
        LOBYTE(v381) = v306;
        *(_QWORD *)&v382 = v307;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v407 != s1 )
          operator delete(v407, *((_QWORD *)&s2 + 1) + 1LL);
        v381 = nullptr;
        *(_QWORD *)&v382 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v308 = (__int64 *)operator new(0x20u);
        v374 = 17;
        *v308 = (__int64)(v308 + 2);
        v309 = std::string::_M_create();
        v310 = v374;
        *v308 = v309;
        v311 = _mm_load_si128((const __m128i *)&xmmword_3E20E0);
        v308[2] = v310;
        *(_BYTE *)(v309 + 16) = 103;
        *(__m128i *)v309 = v311;
        v312 = v374;
        v313 = *v308;
        v308[1] = v374;
        *(_BYTE *)(v313 + v312) = 0;
        v314 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v315 = *(_BYTE *)v314;
        v316 = *(_QWORD *)(v314 + 8);
        *(_BYTE *)v314 = 3;
        v171 = v372;
        *(_QWORD *)(v314 + 8) = v308;
        LOBYTE(v381) = v315;
        *(_QWORD *)&v382 = v316;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( get_func() )
        {
          v381 = nullptr;
          v382 = 0;
          get_func_name();
          v317 = v381;
          if ( !(_QWORD)v382 )
            v317 = _qstring<char>::c_str(void)const::nullstr;
          v374 = 0;
          v353[0] = &v375;
          v375 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v318 = (__int64 *)operator new(0x20u);
          v319 = v318;
          *v318 = (__int64)(v318 + 2);
          if ( !v317 )
            std::__throw_logic_error("basic_string: construction from null is not valid");
          v355[0] = v318 + 2;
          v320 = (char *)strlen(v317);
          v321 = (__int64)v355[0];
          v369 = (__int64)v320;
          v322 = v320;
          if ( (unsigned __int64)v320 > 0xF )
          {
            v355[0] = v320;
            v351 = std::string::_M_create();
            *v319 = v351;
            v321 = v351;
            v322 = v355[0];
            v319[2] = v369;
          }
          else
          {
            if ( v320 == (_BYTE *)&dword_0 + 1 )
            {
              *((_BYTE *)v319 + 16) = *v317;
              goto LABEL_358;
            }
            if ( !v320 )
            {
LABEL_358:
              v319[1] = (__int64)v320;
              v320[v321] = 0;
              v323 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v324 = *(_BYTE *)v323;
              v325 = *(_QWORD *)(v323 + 8);
              *(_BYTE *)v323 = 3;
              *(_QWORD *)(v323 + 8) = v319;
              LOBYTE(v374) = v324;
              v375 = v325;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v374 = 0;
              v375 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v326 = (__int64 *)operator new(0x20u);
              v369 = 30;
              *v326 = (__int64)(v326 + 2);
              v327 = std::string::_M_create();
              v328 = v369;
              *v326 = v327;
              v329 = _mm_load_si128((const __m128i *)&xmmword_3E20F0);
              v326[2] = v328;
              *(__m128i *)v327 = v329;
              *(__m128i *)(v327 + 14) = _mm_load_si128((const __m128i *)&xmmword_3E2100);
              v330 = v369;
              v331 = *v326;
              v326[1] = v369;
              *(_BYTE *)(v331 + v330) = 0;
              v332 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v333 = *(_BYTE *)v332;
              v334 = *(_QWORD *)(v332 + 8);
              *(_BYTE *)v332 = 3;
              *(_QWORD *)(v332 + 8) = v326;
              LOBYTE(v374) = v333;
              v171 = v372;
              v375 = v334;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v381 )
              {
                *(_QWORD *)&v382 = 0;
                qfree();
              }
              goto LABEL_277;
            }
          }
          memcpy((void *)v321, v317, (size_t)v322);
          v320 = (char *)v369;
          v321 = *v319;
          goto LABEL_358;
        }
      }
LABEL_277:
      if ( !v383 )
        goto LABEL_155;
      goto LABEL_278;
    }
    if ( v376 )
    {
      *(_QWORD *)&v377 = 0;
      qfree();
    }
LABEL_97:
    head = next_head();
  }
  v398 = 0;
  *(_QWORD *)&v399 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v398 = 3;
  v185 = operator new(0x20u);
  *(_QWORD *)v185 = v185 + 16;
  strcpy((char *)(v185 + 16), "function");
  *(_QWORD *)(v185 + 8) = 8;
  v399 = (unsigned __int64)v185;
  qsnprintf();
  *(_QWORD *)v352 = &v395;
  v395 = v397;
  v186 = (char *)strlen(s);
  v383 = v186;
  v187 = (unsigned int)v186;
  if ( (unsigned __int64)v186 > 0xF )
  {
    v251 = (_QWORD *)std::string::_M_create();
    v395 = v251;
    v397[0] = v383;
    goto LABEL_281;
  }
  if ( v186 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v397[0]) = s[0];
LABEL_202:
    v188 = v397;
  }
  else
  {
    if ( !v186 )
      goto LABEL_202;
    v251 = v397;
LABEL_281:
    if ( v187 >= 8 )
    {
      *v251 = *(_QWORD *)s;
      *(_QWORD *)((char *)v251 + v187 - 8) = *(_QWORD *)&v455[v187];
      v279 = (unsigned __int64)(v251 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v280 = (char *)v251 - v279;
      v281 = (char *)(s - v280);
      v282 = (v187 + (_DWORD)v280) & 0xFFFFFFF8;
      if ( v282 >= 8 )
      {
        v283 = v282 & 0xFFFFFFF8;
        v284 = 0;
        do
        {
          v285 = v284;
          v284 += 8;
          *(_QWORD *)(v279 + v285) = *(_QWORD *)&v281[v285];
        }
        while ( v284 < v283 );
      }
    }
    else if ( (v187 & 4) != 0 )
    {
      *(_DWORD *)v251 = *(_DWORD *)s;
      *(_DWORD *)((char *)v251 + v187 - 4) = *(_DWORD *)&v455[v187 + 4];
    }
    else if ( v187 )
    {
      *(_BYTE *)v251 = s[0];
      if ( (v187 & 2) != 0 )
        *(_WORD *)((char *)v251 + v187 - 2) = *(_WORD *)&v455[v187 + 6];
    }
    v186 = v383;
    v188 = v395;
  }
  v396 = v186;
  v186[(_QWORD)v188] = 0;
  v400 = 0;
  *(_QWORD *)&v401 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v400 = 3;
  v189 = operator new(0x20u);
  v190 = v395;
  v191 = (_QWORD *)v189;
  v192 = (unsigned __int64)v189;
  v193 = v189 + 16;
  *v191 = v193;
  v194 = v396;
  if ( v190 == v397 )
  {
    v286 = (_DWORD)v396 + 1;
    if ( (unsigned int)((_DWORD)v396 + 1) >= 8 )
    {
      v191[2] = v397[0];
      *(_QWORD *)(v193 + v286 - 8) = *(_QWORD *)((char *)&v397[-1] + v286);
      v290 = (unsigned __int64)(v191 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v291 = v193 - v290;
      v292 = (char *)v397 - v291;
      v293 = (v286 + v291) & 0xFFFFFFF8;
      if ( v293 >= 8 )
      {
        v294 = v293 & 0xFFFFFFF8;
        v295 = 0;
        do
        {
          v296 = v295;
          v295 += 8;
          *(_QWORD *)(v290 + v296) = *(_QWORD *)&v292[v296];
        }
        while ( v295 < v294 );
      }
    }
    else if ( (v286 & 4) != 0 )
    {
      *((_DWORD *)v191 + 4) = v397[0];
      *(_DWORD *)(v193 + v286 - 4) = *(_DWORD *)((char *)&v396 + v286 + 4);
    }
    else if ( (_DWORD)v396 != -1 )
    {
      *((_BYTE *)v191 + 16) = v397[0];
      if ( (v286 & 2) != 0 )
        *(_WORD *)(v193 + v286 - 2) = *(_WORD *)((char *)&v396 + v286 + 6);
    }
  }
  else
  {
    v195 = v397[0];
    *v191 = v190;
    v191[2] = v195;
  }
  v191[1] = v194;
  v395 = v397;
  v396 = nullptr;
  LOBYTE(v397[0]) = 0;
  v401 = v192;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v356,
    (const __m128i *)&v398,
    2);
  v411 = 0;
  v402 = 0;
  *(_QWORD *)&v403 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v402 = 3;
  v196 = operator new(0x20u);
  *(_QWORD *)v196 = v196 + 16;
  strcpy((char *)(v196 + 16), "callee_count");
  *(_QWORD *)(v196 + 8) = 12;
  v403 = (unsigned __int64)v196;
  if ( v362 == 1 )
  {
    v197 = v357[5];
  }
  else if ( v362 == 2 )
  {
    v197 = (__int64)(v357[1] - *v357) >> 4;
  }
  else
  {
    v197 = v362 != 0;
  }
  v404 = 6;
  v405 = v197;
  v406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v412,
    (const __m128i *)&v402,
    2);
  v414 = 0;
  LOBYTE(v407) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v407) = 3;
  v198 = operator new(0x20u);
  strcpy((char *)(v198 + 16), "callees");
  *(_QWORD *)v198 = v198 + 16;
  *(_QWORD *)(v198 + 8) = 7;
  s2 = (unsigned __int64)v198;
  v370 = v362;
  v371 = v357;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v409 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v415,
    v365,
    2);
  v416 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v367,
    *(const __m128i **)v356,
    3);
  v199 = *(const __m128i **)v356;
  *(_QWORD *)v352 = v397;
  v200 = (const __m128i *)v417;
  do
  {
    v200 = (const __m128i *)((char *)v200 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v200 != v199 );
  v201 = *(void **)v352;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v202 = v398;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v395 != v201 )
  {
    v202 = v397[0] + 1LL;
    operator delete(v395, v397[0] + 1LL);
  }
  std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
    nullptr,
    v202);
  std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
    v387.m128i_i64[0],
    v202);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return *(_QWORD *)v367;
}

