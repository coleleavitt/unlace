__m128i *__fastcall ida_mcp::tools::memory::`anonymous namespace'::handle_get_address_info(__m128i *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  char v16; // al
  char *v17; // r12
  int *v18; // rax
  int *v19; // r13
  unsigned __int8 v20; // r12
  unsigned __int8 v21; // al
  unsigned __int8 v22; // r13
  char v23; // al
  bool v24; // bp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int *v28; // rbx
  __int64 v29; // rax
  const char *v30; // r14
  __int64 v31; // rax
  size_t v32; // rax
  unsigned int v33; // ebp
  int *v34; // rdx
  _QWORD *v35; // rax
  int *v36; // rdx
  _QWORD *v37; // rcx
  size_t v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // rbp
  __int64 *v44; // rax
  void *v45; // r12
  __int64 *v46; // rbx
  size_t v47; // rax
  size_t v48; // r13
  __int64 v49; // rax
  size_t v50; // rax
  unsigned int v51; // ebp
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  _QWORD *v55; // rcx
  size_t v56; // rsi
  __int64 v57; // rax
  size_t v58; // rax
  unsigned int v59; // ebp
  _QWORD *v60; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  _QWORD *v63; // rcx
  size_t v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rbx
  _QWORD *v69; // rbp
  size_t v70; // rax
  __int64 *v71; // rbx
  __int64 v72; // rax
  __m128i si128; // xmm0
  size_t v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  char *v78; // rbx
  void **v79; // rbx
  size_t v80; // rax
  size_t v81; // rbx
  _QWORD *v82; // rdi
  _QWORD *v83; // rdx
  char *v84; // r14
  const char *v85; // rsi
  __int64 *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  char v93; // bp
  __int64 v94; // rax
  char v95; // si
  __int64 v96; // rax
  char v97; // si
  __int64 v98; // rdx
  __int64 *v99; // r14
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  char v105; // si
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rcx
  char v109; // si
  __int64 v110; // rdx
  const char *sourcefile; // rax
  const char *v112; // r12
  std::runtime_error *v114; // rbx
  unsigned __int64 v115; // rcx
  char *v116; // rbx
  const char *v117; // rdi
  unsigned int v118; // ebx
  unsigned int v119; // ebx
  unsigned int v120; // edx
  __int64 v121; // rsi
  __int64 v122; // rax
  _QWORD *v123; // rax
  int *v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rax
  char *v127; // rax
  unsigned int v128; // r13d
  void *v129; // rdx
  _QWORD *v130; // rax
  _QWORD *v131; // rcx
  _QWORD *v132; // rdx
  __int128 v133; // xmm0
  __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 *v138; // rbp
  __int64 v139; // rax
  __m128i v140; // xmm0
  __m128i v141; // xmm0
  char *v142; // rax
  __int64 v143; // rdx
  int *v144; // rbx
  __int64 *v145; // rbp
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  __int64 v151; // rdx
  size_t v152; // rax
  unsigned int v153; // ecx
  _QWORD *v154; // rdx
  _QWORD *v155; // rax
  _QWORD *v156; // rdx
  _QWORD *v157; // rbp
  size_t v158; // rcx
  __int64 v159; // rax
  char v160; // si
  __int64 v161; // rdx
  size_t v162; // rax
  unsigned int v163; // ecx
  _QWORD *v164; // rdx
  _QWORD *v165; // rax
  _QWORD *v166; // rdx
  _QWORD *v167; // rbp
  size_t v168; // rcx
  __int64 v169; // rax
  char v170; // si
  __int64 v171; // rdx
  char v172; // r14
  __int64 v173; // rbp
  __int64 v174; // rax
  char v175; // si
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rcx
  char v179; // si
  __int64 v180; // rdx
  unsigned __int64 v181; // rdx
  char *v182; // rax
  char *v183; // rbx
  unsigned int v184; // ebp
  unsigned int v185; // ebp
  unsigned int v186; // eax
  __int64 v187; // rcx
  unsigned __int64 v188; // rdx
  char *v189; // rax
  char *v190; // rbx
  unsigned int v191; // ebp
  unsigned int v192; // ebp
  unsigned int v193; // eax
  __int64 v194; // rcx
  unsigned __int64 v195; // rdx
  char *v196; // rax
  char *v197; // rbx
  unsigned int v198; // ebp
  unsigned int v199; // ebp
  unsigned int v200; // eax
  __int64 v201; // rcx
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  unsigned int v204; // edi
  unsigned int v205; // edi
  unsigned int v206; // edi
  __int64 v207; // rax
  __int64 v208; // rax
  _QWORD *v209; // rax
  unsigned __int64 v210; // r8
  char *v211; // rcx
  char *v212; // r9
  unsigned int v213; // edx
  unsigned int v214; // ecx
  __int64 v215; // rdi
  unsigned __int64 v216; // r8
  char *v217; // rcx
  char *v218; // r9
  unsigned int v219; // edx
  unsigned int v220; // ecx
  __int64 v221; // rdi
  unsigned __int64 v222; // r8
  char *v223; // rcx
  char *v224; // rbx
  unsigned int v225; // edx
  unsigned int v226; // ecx
  __int64 v227; // rdi
  __int64 v228; // r14
  __int64 v229; // rax
  char v230; // si
  __int64 v231; // rdx
  unsigned __int64 v232; // rdx
  char *v233; // rax
  char *v234; // rbp
  unsigned int v235; // eax
  unsigned int v236; // eax
  unsigned int v237; // ecx
  __int64 v238; // rsi
  unsigned __int64 v239; // rdx
  char *v240; // rax
  char *v241; // rbp
  unsigned int v242; // eax
  unsigned int v243; // eax
  unsigned int v244; // ecx
  __int64 v245; // rsi
  unsigned __int64 v246; // rdx
  char *v247; // rax
  char *v248; // rbp
  unsigned int v249; // eax
  unsigned int v250; // eax
  unsigned int v251; // ecx
  __int64 v252; // rsi
  unsigned int v253; // edi
  unsigned int v254; // esi
  unsigned int v255; // esi
  unsigned __int64 v256; // r8
  char *v257; // r9
  unsigned int v258; // eax
  unsigned int v259; // ecx
  __int64 v260; // rdi
  unsigned __int64 v261; // r8
  char *v262; // rdi
  unsigned int v263; // eax
  unsigned int v264; // edx
  __int64 v265; // rsi
  unsigned __int64 v266; // r8
  char *v267; // rdi
  unsigned int v268; // eax
  unsigned int v269; // edx
  __int64 v270; // rsi
  __int64 v271; // [rsp+0h] [rbp-638h]
  void **v272; // [rsp+8h] [rbp-630h]
  unsigned int v273; // [rsp+8h] [rbp-630h]
  unsigned int v274; // [rsp+8h] [rbp-630h]
  int *v275; // [rsp+10h] [rbp-628h]
  unsigned __int8 v276; // [rsp+20h] [rbp-618h]
  __int64 v278; // [rsp+30h] [rbp-608h]
  bool v279; // [rsp+40h] [rbp-5F8h]
  unsigned __int8 v280; // [rsp+BEh] [rbp-57Ah]
  __m128i v281[2]; // [rsp+120h] [rbp-518h] BYREF
  char v282; // [rsp+140h] [rbp-4F8h]
  int v283[2]; // [rsp+150h] [rbp-4E8h]
  __int64 v284; // [rsp+158h] [rbp-4E0h]
  char *v285; // [rsp+160h] [rbp-4D8h]
  __int128 v286; // [rsp+168h] [rbp-4D0h]
  void *v287; // [rsp+180h] [rbp-4B8h]
  size_t v288; // [rsp+188h] [rbp-4B0h]
  int v289[4]; // [rsp+190h] [rbp-4A8h] BYREF
  void *v290; // [rsp+1A0h] [rbp-498h]
  size_t v291; // [rsp+1A8h] [rbp-490h]
  _QWORD v292[2]; // [rsp+1B0h] [rbp-488h] BYREF
  void *v293; // [rsp+1C0h] [rbp-478h]
  size_t v294; // [rsp+1C8h] [rbp-470h]
  _QWORD v295[2]; // [rsp+1D0h] [rbp-468h] BYREF
  char v296; // [rsp+1E0h] [rbp-458h] BYREF
  int v297[4]; // [rsp+1E8h] [rbp-450h]
  char v298; // [rsp+1F8h] [rbp-440h]
  int v299[4]; // [rsp+200h] [rbp-438h]
  char v300; // [rsp+210h] [rbp-428h] BYREF
  char v301[16]; // [rsp+218h] [rbp-420h]
  char v302; // [rsp+228h] [rbp-410h]
  __int64 v303; // [rsp+230h] [rbp-408h]
  __int64 v304; // [rsp+238h] [rbp-400h]
  char v305; // [rsp+240h] [rbp-3F8h] BYREF
  __int128 v306; // [rsp+248h] [rbp-3F0h]
  char v307; // [rsp+258h] [rbp-3E0h]
  __int64 v308; // [rsp+260h] [rbp-3D8h]
  __int64 v309; // [rsp+268h] [rbp-3D0h]
  char v310; // [rsp+270h] [rbp-3C8h] BYREF
  __int128 v311; // [rsp+278h] [rbp-3C0h]
  char v312; // [rsp+288h] [rbp-3B0h]
  __int128 v313; // [rsp+290h] [rbp-3A8h]
  char v314; // [rsp+2A0h] [rbp-398h] BYREF
  __int128 v315; // [rsp+2A8h] [rbp-390h]
  char v316; // [rsp+2B8h] [rbp-380h]
  __int128 v317; // [rsp+2C0h] [rbp-378h]
  char v318; // [rsp+2D0h] [rbp-368h] BYREF
  __int128 v319; // [rsp+2D8h] [rbp-360h]
  char v320; // [rsp+2E8h] [rbp-350h]
  __int128 v321; // [rsp+2F0h] [rbp-348h]
  char v322; // [rsp+300h] [rbp-338h] BYREF
  __int128 v323; // [rsp+308h] [rbp-330h]
  __int64 v324; // [rsp+328h] [rbp-310h]
  char v325; // [rsp+330h] [rbp-308h] BYREF
  __int128 v326; // [rsp+338h] [rbp-300h]
  __int64 v327; // [rsp+358h] [rbp-2E0h]
  char v328; // [rsp+360h] [rbp-2D8h] BYREF
  __int128 v329; // [rsp+368h] [rbp-2D0h]
  char v330; // [rsp+378h] [rbp-2C0h]
  __int128 v331; // [rsp+380h] [rbp-2B8h]
  void *v332; // [rsp+390h] [rbp-2A8h] BYREF
  __int128 v333; // [rsp+398h] [rbp-2A0h] BYREF
  char v334; // [rsp+3A8h] [rbp-290h]
  __int64 v335; // [rsp+3B0h] [rbp-288h]
  __int64 v336; // [rsp+3B8h] [rbp-280h]
  int v337; // [rsp+3C0h] [rbp-278h] BYREF
  int v338[4]; // [rsp+3C8h] [rbp-270h]
  char v339; // [rsp+3D8h] [rbp-260h]
  __int128 v340; // [rsp+3E0h] [rbp-258h]
  __int64 v341; // [rsp+3F0h] [rbp-248h] BYREF
  __int128 v342; // [rsp+3F8h] [rbp-240h]
  int v343[2]; // [rsp+408h] [rbp-230h] BYREF
  __int64 v344; // [rsp+410h] [rbp-228h]
  __int64 v345; // [rsp+418h] [rbp-220h]
  char v346; // [rsp+420h] [rbp-218h] BYREF
  int v347[4]; // [rsp+428h] [rbp-210h]
  int v348[2]; // [rsp+438h] [rbp-200h] BYREF
  _BOOL8 v349; // [rsp+440h] [rbp-1F8h]
  __int64 v350; // [rsp+448h] [rbp-1F0h]
  void *v351; // [rsp+450h] [rbp-1E8h] BYREF
  __int128 s2; // [rsp+458h] [rbp-1E0h] BYREF
  __int64 v353; // [rsp+468h] [rbp-1D0h] BYREF
  int v354[4]; // [rsp+470h] [rbp-1C8h]
  _QWORD v355[3]; // [rsp+480h] [rbp-1B8h] BYREF
  char v356; // [rsp+498h] [rbp-1A0h] BYREF
  void *v357; // [rsp+4A0h] [rbp-198h] BYREF
  size_t v358; // [rsp+4A8h] [rbp-190h]
  size_t v359; // [rsp+4B0h] [rbp-188h] BYREF
  int v360[4]; // [rsp+4B8h] [rbp-180h] BYREF
  __int64 v361; // [rsp+4C8h] [rbp-170h]
  int v362[4]; // [rsp+4D0h] [rbp-168h] BYREF
  __int64 v363; // [rsp+4E0h] [rbp-158h]
  int v364[4]; // [rsp+4E8h] [rbp-150h] BYREF
  __int64 v365; // [rsp+4F8h] [rbp-140h]
  int v366[4]; // [rsp+500h] [rbp-138h] BYREF
  __int64 v367; // [rsp+510h] [rbp-128h]
  _QWORD v368[3]; // [rsp+518h] [rbp-120h] BYREF
  _QWORD v369[3]; // [rsp+530h] [rbp-108h] BYREF
  char v370[8]; // [rsp+548h] [rbp-F0h] BYREF
  char s[24]; // [rsp+550h] [rbp-E8h] BYREF
  _BYTE v372[8]; // [rsp+568h] [rbp-D0h]
  char v373[24]; // [rsp+570h] [rbp-C8h] BYREF
  _BYTE v374[8]; // [rsp+588h] [rbp-B0h]
  char v375[24]; // [rsp+590h] [rbp-A8h] BYREF
  _BYTE v376[8]; // [rsp+5A8h] [rbp-90h]
  char v377[24]; // [rsp+5B0h] [rbp-88h] BYREF
  _BYTE v378[8]; // [rsp+5C8h] [rbp-70h]
  char v379[40]; // [rsp+5D0h] [rbp-68h] BYREF
  unsigned __int64 v380; // [rsp+5F8h] [rbp-40h]

  v380 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v351 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v285 = v4;
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
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = v6 + 8;
  if ( v7 )
  {
    v9 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 40);
        if ( !v12 )
          break;
        v10 = 7;
        if ( v12 <= 7 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), (char *)&s2 + 8, v10);
        if ( v11 || (v11 = v12 - 7, (__int64)(v12 - 7) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_12;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_12:
    if ( v9 != v8 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 )
      {
        v14 = 7;
        if ( v13 <= 7 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp((char *)&s2 + 8, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 7 - v13, (__int64)(7 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v15 >= 0 )
            v8 = v9;
        }
      }
      else
      {
        v8 = v9;
      }
    }
  }
  BYTE8(s2) = 0;
  v272 = &v351;
  v16 = *(_BYTE *)(v8 + 64);
  v351 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v16 != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
    {
      case 0:
        v5 = "null";
        break;
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
    v285 = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v3,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v17 = (char *)v351;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v351 == 48 && (*((_BYTE *)v351 + 1) & 0xDF) == 0x58 )
    v17 = (char *)v351 + 2;
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v271 = __isoc23_strtoull();
  if ( v17 == v285 || *v285 || (v279 = v271 == -1 && *v19 == 34) )
  {
    if ( v351 != (char *)&s2 + 8 )
      operator delete(v351, *((_QWORD *)&s2 + 1) + 1LL);
    v114 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v114, "Invalid address format");
    __cxa_throw(
      v114,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v351 != (char *)&s2 + 8 )
    operator delete(v351, *((_QWORD *)&s2 + 1) + 1LL);
  v20 = is_loaded();
  v21 = is_mapped();
  v22 = v21;
  if ( v20 || v21 )
  {
    v285 = nullptr;
    v278 = getseg();
    v286 = 0;
    if ( v278 )
    {
      get_segm_name();
      v23 = *(_BYTE *)(v278 + 42);
      *(_QWORD *)&v342 = 0;
      v276 = v23 & 1;
      v24 = (v23 & 2) != 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v341) = 3;
      v25 = operator new(0x20u);
      strcpy((char *)(v25 + 16), "read");
      *(_QWORD *)v25 = v25 + 16;
      *(_QWORD *)(v25 + 8) = 4;
      *(_QWORD *)v343 = 4;
      v344 = 1;
      v345 = 0;
      v342 = (unsigned __int64)v25;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v357,
        (const __m128i *)&v341);
      v359 = 0;
      v346 = 0;
      *(_QWORD *)v347 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v346 = 3;
      v26 = operator new(0x20u);
      *(_DWORD *)(v26 + 16) = 1953067639;
      *(_QWORD *)v26 = v26 + 16;
      *(_BYTE *)(v26 + 20) = 101;
      *(_QWORD *)(v26 + 8) = 5;
      *(_BYTE *)(v26 + 21) = 0;
      v349 = v24;
      LOBYTE(v348[0]) = 4;
      v350 = 0;
      *(_OWORD *)v347 = (unsigned __int64)v26;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v360,
        (const __m128i *)&v346);
      v361 = 0;
      LOBYTE(v351) = 0;
      *(_QWORD *)&s2 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v351) = 3;
      v27 = operator new(0x20u);
      strcpy((char *)(v27 + 16), "execute");
      *(_QWORD *)v27 = v27 + 16;
      *(_QWORD *)(v27 + 8) = 7;
      LOBYTE(v353) = 4;
      *(_QWORD *)v354 = v276;
      *(_QWORD *)&v354[2] = 0;
      s2 = (unsigned __int64)v27;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v362,
        (const __m128i *)&v351);
      v363 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v28 = v364;
      do
      {
        v28 -= 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v28 != (int *)&v357 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v29 = get_flags_ex() & 0x600;
      if ( v29 == 1536 )
      {
        v30 = "code";
      }
      else
      {
        v30 = "data";
        if ( v29 != 1024 )
          v30 = "unexplored";
      }
      v280 = *(_BYTE *)(v278 + 42) & 1;
      v279 = (*(_BYTE *)(v278 + 42) & 2) != 0;
    }
    else
    {
      v207 = qvector_reserve();
      v285 = (char *)v207;
      *(_QWORD *)&v286 = 8;
      *(_DWORD *)v207 = 1852534389;
      *(_DWORD *)(v207 + 3) = 1853321070;
      v285[7] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v208 = get_flags_ex() & 0x600;
      if ( v208 == 1536 )
      {
        v280 = 0;
        v30 = "code";
      }
      else
      {
        v280 = 0;
        if ( v208 == 1024 )
          v30 = "data";
        else
          v30 = "unexplored";
      }
    }
    v296 = 0;
    *(_QWORD *)v297 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v296 = 3;
    v31 = operator new(0x20u);
    strcpy((char *)(v31 + 16), "address");
    *(_QWORD *)v31 = v31 + 16;
    *(_QWORD *)(v31 + 8) = 7;
    *(_OWORD *)v297 = (unsigned __int64)v31;
    qsnprintf();
    v275 = v289;
    v287 = v289;
    v32 = strlen(s);
    *(_QWORD *)v283 = v32;
    v33 = v32;
    if ( v32 > 0xF )
    {
      v124 = (int *)std::string::_M_create();
      v287 = v124;
      *(_QWORD *)v289 = *(_QWORD *)v283;
    }
    else
    {
      if ( v32 == 1 )
      {
        LOBYTE(v289[0]) = s[0];
        goto LABEL_40;
      }
      if ( !v32 )
      {
LABEL_40:
        v34 = v289;
        goto LABEL_41;
      }
      v124 = v289;
    }
    if ( v33 >= 8 )
    {
      *(_QWORD *)v124 = *(_QWORD *)s;
      *(_QWORD *)((char *)v124 + v33 - 8) = *(_QWORD *)&v370[v33];
      v188 = (unsigned __int64)(v124 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v189 = (char *)v124 - v188;
      v190 = (char *)(s - v189);
      v191 = ((_DWORD)v189 + v33) & 0xFFFFFFF8;
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
    else if ( (v33 & 4) != 0 )
    {
      *v124 = *(_DWORD *)s;
      *(int *)((char *)v124 + v33 - 4) = *(_DWORD *)&v370[v33 + 4];
    }
    else if ( v33 )
    {
      *(_BYTE *)v124 = s[0];
      if ( (v33 & 2) != 0 )
        *(_WORD *)((char *)v124 + v33 - 2) = *(_WORD *)&v370[v33 + 6];
    }
    v32 = *(_QWORD *)v283;
    v34 = (int *)v287;
LABEL_41:
    v288 = v32;
    *((_BYTE *)v34 + v32) = 0;
    v298 = 0;
    *(_QWORD *)v299 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v298 = 3;
    v35 = (_QWORD *)operator new(0x20u);
    v36 = (int *)v287;
    v37 = v35 + 2;
    *v35 = v35 + 2;
    v38 = v288;
    if ( v36 == v289 )
    {
      v204 = v288 + 1;
      if ( (unsigned int)(v288 + 1) >= 8 )
      {
        v35[2] = *(_QWORD *)v289;
        *(_QWORD *)((char *)v37 + v204 - 8) = *(_QWORD *)((char *)&v289[-2] + v204);
        v222 = (unsigned __int64)(v35 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v223 = (char *)v37 - v222;
        v224 = (char *)((char *)v289 - v223);
        if ( (((_DWORD)v223 + v204) & 0xFFFFFFF8) >= 8 )
        {
          v225 = ((_DWORD)v223 + v204) & 0xFFFFFFF8;
          v226 = 0;
          do
          {
            v227 = v226;
            v226 += 8;
            *(_QWORD *)(v222 + v227) = *(_QWORD *)&v224[v227];
          }
          while ( v226 < v225 );
        }
      }
      else if ( (v204 & 4) != 0 )
      {
        *((_DWORD *)v35 + 4) = v289[0];
        *(_DWORD *)((char *)v37 + v204 - 4) = *(int *)((char *)&v289[-1] + v204);
      }
      else if ( (_DWORD)v288 != -1 )
      {
        *((_BYTE *)v35 + 16) = v289[0];
        if ( (v204 & 2) != 0 )
          *(_WORD *)((char *)v37 + v204 - 2) = *(_WORD *)((char *)&v288 + v204 + 6);
      }
    }
    else
    {
      *v35 = v36;
      v35[2] = *(_QWORD *)v289;
    }
    v35[1] = v38;
    v288 = 0;
    v287 = v289;
    LOBYTE(v289[0]) = 0;
    *(_OWORD *)v299 = (unsigned __int64)v35;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v357,
      (const __m128i *)&v296);
    v359 = 0;
    v300 = 0;
    *(_QWORD *)v301 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v300 = 3;
    v39 = operator new(0x20u);
    *(_DWORD *)(v39 + 16) = 1768710518;
    *(_QWORD *)v39 = v39 + 16;
    *(_BYTE *)(v39 + 20) = 100;
    *(_QWORD *)(v39 + 8) = 5;
    *(_BYTE *)(v39 + 21) = 0;
    v302 = 4;
    v303 = v20;
    v304 = 0;
    *(_OWORD *)v301 = (unsigned __int64)v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v360,
      (const __m128i *)&v300);
    v361 = 0;
    v305 = 0;
    *(_QWORD *)&v306 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v305 = 3;
    v40 = operator new(0x20u);
    *(_QWORD *)v40 = v40 + 16;
    strcpy((char *)(v40 + 16), "mapped");
    *(_QWORD *)(v40 + 8) = 6;
    v307 = 4;
    v308 = v22;
    v309 = 0;
    v306 = (unsigned __int64)v40;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v362,
      (const __m128i *)&v305);
    v363 = 0;
    v322 = 0;
    *(_QWORD *)&v323 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v322 = 3;
    v41 = operator new(0x20u);
    strcpy((char *)(v41 + 16), "segment");
    *(_QWORD *)v41 = v41 + 16;
    *(_QWORD *)(v41 + 8) = 7;
    v310 = 0;
    *(_QWORD *)&v311 = 0;
    v323 = (unsigned __int64)v41;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v310 = 3;
    v42 = operator new(0x20u);
    *(_QWORD *)v42 = v42 + 16;
    strcpy((char *)(v42 + 16), "name");
    *(_QWORD *)(v42 + 8) = 4;
    v311 = (unsigned __int64)v42;
    if ( (_QWORD)v286 )
      v43 = v285;
    else
      v43 = _qstring<char>::c_str(void)const::nullstr;
    v312 = 0;
    *(_QWORD *)&v313 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v312 = 3;
    v44 = (__int64 *)operator new(0x20u);
    v45 = v44 + 2;
    v46 = v44;
    *v44 = (__int64)(v44 + 2);
    if ( !v43 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v47 = strlen(v43);
    *(_QWORD *)v283 = v47;
    v48 = v47;
    if ( v47 > 0xF )
    {
      v122 = std::string::_M_create();
      *v46 = v122;
      v45 = (void *)v122;
      v46[2] = *(_QWORD *)v283;
    }
    else
    {
      if ( v47 == 1 )
      {
        *((_BYTE *)v46 + 16) = *v43;
        goto LABEL_49;
      }
      if ( !v47 )
        goto LABEL_49;
    }
    memcpy(v45, v43, v48);
    v47 = *(_QWORD *)v283;
    v45 = (void *)*v46;
LABEL_49:
    v46[1] = v47;
    *((_BYTE *)v45 + v47) = 0;
    v313 = (unsigned __int64)v46;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v351,
      (const __m128i *)&v310);
    *((_QWORD *)&s2 + 1) = 0;
    v314 = 0;
    *(_QWORD *)&v315 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v314 = 3;
    v49 = operator new(0x20u);
    *(_DWORD *)(v49 + 16) = 1918989427;
    *(_QWORD *)v49 = v49 + 16;
    *(_BYTE *)(v49 + 20) = 116;
    *(_QWORD *)(v49 + 8) = 5;
    *(_BYTE *)(v49 + 21) = 0;
    v315 = (unsigned __int64)v49;
    qsnprintf();
    v290 = v292;
    v50 = strlen(v373);
    *(_QWORD *)v283 = v50;
    v51 = v50;
    if ( v50 > 0xF )
    {
      v125 = (_QWORD *)std::string::_M_create();
      v290 = v125;
      v292[0] = *(_QWORD *)v283;
    }
    else
    {
      if ( v50 == 1 )
      {
        LOBYTE(v292[0]) = v373[0];
        goto LABEL_52;
      }
      if ( !v50 )
      {
LABEL_52:
        v52 = v292;
        goto LABEL_53;
      }
      v125 = v292;
    }
    if ( v51 >= 8 )
    {
      *v125 = *(_QWORD *)v373;
      *(_QWORD *)((char *)v125 + v51 - 8) = *(_QWORD *)&v372[v51];
      v181 = (unsigned __int64)(v125 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v182 = (char *)v125 - v181;
      v183 = (char *)(v373 - v182);
      v184 = ((_DWORD)v182 + v51) & 0xFFFFFFF8;
      if ( v184 >= 8 )
      {
        v185 = v184 & 0xFFFFFFF8;
        v186 = 0;
        do
        {
          v187 = v186;
          v186 += 8;
          *(_QWORD *)(v181 + v187) = *(_QWORD *)&v183[v187];
        }
        while ( v186 < v185 );
      }
    }
    else if ( (v51 & 4) != 0 )
    {
      *(_DWORD *)v125 = *(_DWORD *)v373;
      *(_DWORD *)((char *)v125 + v51 - 4) = *(_DWORD *)&v372[v51 + 4];
    }
    else if ( v51 )
    {
      *(_BYTE *)v125 = v373[0];
      if ( (v51 & 2) != 0 )
        *(_WORD *)((char *)v125 + v51 - 2) = *(_WORD *)&v372[v51 + 6];
    }
    v50 = *(_QWORD *)v283;
    v52 = v290;
LABEL_53:
    v291 = v50;
    *((_BYTE *)v52 + v50) = 0;
    v316 = 0;
    *(_QWORD *)&v317 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v316 = 3;
    v53 = (_QWORD *)operator new(0x20u);
    v54 = v290;
    v55 = v53 + 2;
    v56 = v291;
    *v53 = v53 + 2;
    if ( v54 == v292 )
    {
      v206 = v56 + 1;
      if ( (unsigned int)(v56 + 1) >= 8 )
      {
        v53[2] = v292[0];
        *(_QWORD *)((char *)v55 + v206 - 8) = *(_QWORD *)((char *)&v292[-1] + v206);
        v210 = (unsigned __int64)(v53 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v211 = (char *)v55 - v210;
        v212 = (char *)((char *)v292 - v211);
        if ( (((_DWORD)v211 + v206) & 0xFFFFFFF8) >= 8 )
        {
          v213 = ((_DWORD)v211 + v206) & 0xFFFFFFF8;
          v214 = 0;
          do
          {
            v215 = v214;
            v214 += 8;
            *(_QWORD *)(v210 + v215) = *(_QWORD *)&v212[v215];
          }
          while ( v214 < v213 );
        }
      }
      else if ( (v206 & 4) != 0 )
      {
        *((_DWORD *)v53 + 4) = v292[0];
        *(_DWORD *)((char *)v55 + v206 - 4) = *(_DWORD *)((char *)&v291 + v206 + 4);
      }
      else if ( (_DWORD)v56 != -1 )
      {
        *((_BYTE *)v53 + 16) = v292[0];
        if ( (v206 & 2) != 0 )
          *(_WORD *)((char *)v55 + v206 - 2) = *(_WORD *)((char *)&v291 + v206 + 6);
      }
    }
    else
    {
      *v53 = v54;
      v53[2] = v292[0];
    }
    v53[1] = v56;
    v290 = v292;
    v291 = 0;
    LOBYTE(v292[0]) = 0;
    v317 = (unsigned __int64)v53;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v353,
      (const __m128i *)&v314);
    *(_QWORD *)&v354[2] = 0;
    v318 = 0;
    *(_QWORD *)&v319 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v318 = 3;
    v57 = operator new(0x20u);
    *(_BYTE *)(v57 + 18) = 100;
    *(_QWORD *)v57 = v57 + 16;
    *(_WORD *)(v57 + 16) = 28261;
    *(_QWORD *)(v57 + 8) = 3;
    *(_BYTE *)(v57 + 19) = 0;
    v319 = (unsigned __int64)v57;
    qsnprintf();
    v293 = v295;
    v58 = strlen(v375);
    *(_QWORD *)v283 = v58;
    v59 = v58;
    if ( v58 > 0xF )
    {
      v123 = (_QWORD *)std::string::_M_create();
      v293 = v123;
      v295[0] = *(_QWORD *)v283;
    }
    else
    {
      if ( v58 == 1 )
      {
        LOBYTE(v295[0]) = v375[0];
        goto LABEL_58;
      }
      if ( !v58 )
      {
LABEL_58:
        v60 = v295;
        goto LABEL_59;
      }
      v123 = v295;
    }
    if ( v59 >= 8 )
    {
      *v123 = *(_QWORD *)v375;
      *(_QWORD *)((char *)v123 + v59 - 8) = *(_QWORD *)&v374[v59];
      v195 = (unsigned __int64)(v123 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v196 = (char *)v123 - v195;
      v197 = (char *)(v375 - v196);
      v198 = ((_DWORD)v196 + v59) & 0xFFFFFFF8;
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
    else if ( (v59 & 4) != 0 )
    {
      *(_DWORD *)v123 = *(_DWORD *)v375;
      *(_DWORD *)((char *)v123 + v59 - 4) = *(_DWORD *)&v374[v59 + 4];
    }
    else if ( v59 )
    {
      *(_BYTE *)v123 = v375[0];
      if ( (v59 & 2) != 0 )
        *(_WORD *)((char *)v123 + v59 - 2) = *(_WORD *)&v374[v59 + 6];
    }
    v58 = *(_QWORD *)v283;
    v60 = v293;
LABEL_59:
    v294 = v58;
    *((_BYTE *)v60 + v58) = 0;
    v320 = 0;
    *(_QWORD *)&v321 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v320 = 3;
    v61 = (_QWORD *)operator new(0x20u);
    v62 = v293;
    v63 = v61 + 2;
    v64 = v294;
    *v61 = v61 + 2;
    if ( v62 == v295 )
    {
      v205 = v64 + 1;
      if ( (unsigned int)(v64 + 1) >= 8 )
      {
        v61[2] = v295[0];
        *(_QWORD *)((char *)v63 + v205 - 8) = *(_QWORD *)((char *)&v295[-1] + v205);
        v216 = (unsigned __int64)(v61 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v217 = (char *)v63 - v216;
        v218 = (char *)((char *)v295 - v217);
        if ( (((_DWORD)v217 + v205) & 0xFFFFFFF8) >= 8 )
        {
          v219 = ((_DWORD)v217 + v205) & 0xFFFFFFF8;
          v220 = 0;
          do
          {
            v221 = v220;
            v220 += 8;
            *(_QWORD *)(v216 + v221) = *(_QWORD *)&v218[v221];
          }
          while ( v220 < v219 );
        }
      }
      else if ( (v205 & 4) != 0 )
      {
        *((_DWORD *)v61 + 4) = v295[0];
        *(_DWORD *)((char *)v63 + v205 - 4) = *(_DWORD *)((char *)&v294 + v205 + 4);
      }
      else if ( (_DWORD)v64 != -1 )
      {
        *((_BYTE *)v61 + 16) = v295[0];
        if ( (v205 & 2) != 0 )
          *(_WORD *)((char *)v63 + v205 - 2) = *(_WORD *)((char *)&v294 + v205 + 6);
      }
    }
    else
    {
      *v61 = v62;
      v61[2] = v295[0];
    }
    v61[1] = v64;
    v293 = v295;
    v294 = 0;
    LOBYTE(v295[0]) = 0;
    v321 = (unsigned __int64)v61;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v355,
      (const __m128i *)&v318);
    v355[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v324 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v364,
      (const __m128i *)&v322);
    v365 = 0;
    v325 = 0;
    *(_QWORD *)&v326 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v325 = 3;
    v65 = operator new(0x20u);
    *(_QWORD *)v65 = v65 + 16;
    strcpy((char *)(v65 + 16), "permissions");
    *(_QWORD *)(v65 + 8) = 11;
    v326 = (unsigned __int64)v65;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v327 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v366,
      (const __m128i *)&v325);
    v367 = 0;
    v328 = 0;
    *(_QWORD *)&v329 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v328 = 3;
    v66 = operator new(0x20u);
    *(_QWORD *)v66 = v66 + 16;
    strcpy((char *)(v66 + 16), "type");
    *(_QWORD *)(v66 + 8) = 4;
    v330 = 0;
    *(_QWORD *)&v331 = 0;
    v329 = (unsigned __int64)v66;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v330 = 3;
    v67 = (_QWORD *)operator new(0x20u);
    v68 = v67 + 2;
    v69 = v67;
    *v67 = v67 + 2;
    v70 = strlen(v30);
    if ( (unsigned int)v70 >= 8 )
    {
      v69[2] = *(_QWORD *)v30;
      *(_QWORD *)((char *)v68 + (unsigned int)v70 - 8) = *(_QWORD *)&v30[(unsigned int)v70 - 8];
      v115 = (unsigned __int64)(v69 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v116 = (char *)v68 - v115;
      v117 = (const char *)(v30 - v116);
      v118 = (v70 + (_DWORD)v116) & 0xFFFFFFF8;
      if ( v118 >= 8 )
      {
        v119 = v118 & 0xFFFFFFF8;
        v120 = 0;
        do
        {
          v121 = v120;
          v120 += 8;
          *(_QWORD *)(v115 + v121) = *(_QWORD *)&v117[v121];
        }
        while ( v120 < v119 );
      }
    }
    else if ( (v70 & 4) != 0 )
    {
      *((_DWORD *)v69 + 4) = *(_DWORD *)v30;
      *(_DWORD *)((char *)v68 + (unsigned int)v70 - 4) = *(_DWORD *)&v30[(unsigned int)v70 - 4];
    }
    else if ( (_DWORD)v70 )
    {
      *((_BYTE *)v69 + 16) = *v30;
      if ( (v70 & 2) != 0 )
        *(_WORD *)((char *)v68 + (unsigned int)v70 - 2) = *(_WORD *)&v30[(unsigned int)v70 - 2];
    }
    v69[1] = v70;
    *((_BYTE *)v69 + v70 + 16) = 0;
    v331 = (unsigned __int64)v69;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v368,
      (const __m128i *)&v328);
    v368[2] = 0;
    v346 = 0;
    *(_QWORD *)v347 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v346 = 3;
    v71 = (__int64 *)operator new(0x20u);
    *v71 = (__int64)(v71 + 2);
    *(_QWORD *)v283 = 22;
    v72 = std::string::_M_create();
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E22C0);
    *v71 = v72;
    v71[2] = 22;
    *(__m128i *)v72 = si128;
    *(_QWORD *)(v72 + 14) = 0x6E6F697461636966LL;
    v74 = *(_QWORD *)v283;
    v75 = *v71;
    v71[1] = *(_QWORD *)v283;
    *(_BYTE *)(v75 + v74) = 0;
    LOBYTE(v332) = 0;
    *(_QWORD *)&v333 = 0;
    *(_OWORD *)v347 = (unsigned __int64)v71;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v332) = 3;
    v76 = operator new(0x20u);
    *(_QWORD *)v76 = v76 + 16;
    strcpy((char *)(v76 + 16), "code_segment");
    *(_QWORD *)(v76 + 8) = 12;
    v334 = 4;
    v335 = v280;
    v336 = 0;
    v333 = (unsigned __int64)v76;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v341,
      (const __m128i *)&v332);
    *((_QWORD *)&v342 + 1) = 0;
    LOBYTE(v337) = 0;
    *(_QWORD *)v338 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v337) = 3;
    v77 = operator new(0x20u);
    *(_QWORD *)v77 = v77 + 16;
    strcpy((char *)(v77 + 16), "data_segment");
    *(_QWORD *)(v77 + 8) = 12;
    v339 = 4;
    v340 = v279;
    *(_OWORD *)v338 = (unsigned __int64)v77;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v343,
      (const __m128i *)&v337);
    v345 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v348,
      (const __m128i *)&v341);
    v350 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v369,
      (const __m128i *)&v346);
    v369[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v78 = v370;
    do
    {
      v78 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v78 != (char *)&v357 );
    v79 = (void **)&v356;
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
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v79 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v79 != &v351 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v293 != v295 )
      operator delete(v293, v295[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v290 != v292 )
      operator delete(v290, v292[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v287 != v289 )
      operator delete(v287, *(_QWORD *)v289 + 1LL);
    if ( (unsigned int)getinf() != 25 || !v278 )
    {
LABEL_89:
      v281[1] = 0;
      sourcefile = (const char *)get_sourcefile();
      v112 = sourcefile;
      if ( !sourcefile || !*sourcefile )
      {
LABEL_91:
        *a1 = _mm_load_si128(v281);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v285 )
        {
          *(_QWORD *)&v286 = 0;
          qfree();
        }
        return a1;
      }
      v282 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      *(_QWORD *)v283 = 0;
      v284 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v145 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v145,
        v112,
        v146,
        v147,
        v148,
        v149,
        v271,
        (int)v272,
        (__int64)v275);
      v150 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v151 = *(_QWORD *)(v150 + 8);
      *(_BYTE *)v150 = 3;
      *(_QWORD *)(v150 + 8) = v145;
      v284 = v151;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v357 = &v359;
      v152 = strlen(v377);
      *(_QWORD *)v283 = v152;
      v153 = v152;
      if ( v152 > 0xF )
      {
        v273 = v152;
        v203 = (_QWORD *)std::string::_M_create();
        v357 = v203;
        v153 = v273;
        v359 = *(_QWORD *)v283;
      }
      else
      {
        if ( v152 == 1 )
        {
          LOBYTE(v359) = v377[0];
          goto LABEL_143;
        }
        if ( !v152 )
        {
LABEL_143:
          v154 = &v359;
          goto LABEL_144;
        }
        v203 = &v359;
      }
      if ( v153 >= 8 )
      {
        *v203 = *(_QWORD *)v377;
        *(_QWORD *)((char *)v203 + v153 - 8) = *(_QWORD *)&v376[v153];
        v246 = (unsigned __int64)(v203 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v247 = (char *)v203 - v246;
        v248 = (char *)(v377 - v247);
        v249 = (v153 + (_DWORD)v247) & 0xFFFFFFF8;
        if ( v249 >= 8 )
        {
          v250 = v249 & 0xFFFFFFF8;
          v251 = 0;
          do
          {
            v252 = v251;
            v251 += 8;
            *(_QWORD *)(v246 + v252) = *(_QWORD *)&v248[v252];
          }
          while ( v251 < v250 );
        }
      }
      else if ( (v153 & 4) != 0 )
      {
        *(_DWORD *)v203 = *(_DWORD *)v377;
        *(_DWORD *)((char *)v203 + v153 - 4) = *(_DWORD *)&v376[v153 + 4];
      }
      else if ( v153 )
      {
        *(_BYTE *)v203 = v377[0];
        if ( (v153 & 2) != 0 )
          *(_WORD *)((char *)v203 + v153 - 2) = *(_WORD *)&v376[v153 + 6];
      }
      v152 = *(_QWORD *)v283;
      v154 = v357;
LABEL_144:
      v358 = v152;
      *((_BYTE *)v154 + v152) = 0;
      *(_QWORD *)v283 = 0;
      v284 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v155 = (_QWORD *)operator new(0x20u);
      v156 = v155 + 2;
      v157 = v155;
      v158 = v358;
      *v155 = v155 + 2;
      if ( v357 == &v359 )
      {
        v255 = v158 + 1;
        if ( (unsigned int)(v158 + 1) >= 8 )
        {
          v261 = (unsigned __int64)(v155 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v155[2] = v359;
          *(_QWORD *)((char *)v156 + v255 - 8) = *(size_t *)((char *)&v358 + v255);
          v262 = (char *)((char *)&v359 - ((char *)v156 - v261));
          if ( ((v255 + (_DWORD)v156 - (_DWORD)v261) & 0xFFFFFFF8) >= 8 )
          {
            v263 = (v255 + (_DWORD)v156 - v261) & 0xFFFFFFF8;
            v264 = 0;
            do
            {
              v265 = v264;
              v264 += 8;
              *(_QWORD *)(v261 + v265) = *(_QWORD *)&v262[v265];
            }
            while ( v264 < v263 );
          }
        }
        else if ( (v255 & 4) != 0 )
        {
          *((_DWORD *)v155 + 4) = v359;
          *(_DWORD *)((char *)v156 + v255 - 4) = *(_DWORD *)((char *)&v358 + v255 + 4);
        }
        else if ( (_DWORD)v158 != -1 )
        {
          *((_BYTE *)v155 + 16) = v359;
          if ( (v255 & 2) != 0 )
            *(_WORD *)((char *)v156 + v255 - 2) = *(_WORD *)((char *)&v358 + v255 + 6);
        }
      }
      else
      {
        *v155 = v357;
        v155[2] = v359;
      }
      v157[1] = v158;
      v357 = &v359;
      v358 = 0;
      LOBYTE(v359) = 0;
      v159 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v160 = *(_BYTE *)v159;
      v161 = *(_QWORD *)(v159 + 8);
      *(_BYTE *)v159 = 3;
      *(_QWORD *)(v159 + 8) = v157;
      LOBYTE(v283[0]) = v160;
      v284 = v161;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v357 != &v359 )
        operator delete(v357, v359 + 1);
      qsnprintf();
      v357 = &v359;
      v162 = strlen(v379);
      *(_QWORD *)v283 = v162;
      v163 = v162;
      if ( v162 > 0xF )
      {
        v274 = v162;
        v209 = (_QWORD *)std::string::_M_create();
        v357 = v209;
        v163 = v274;
        v359 = *(_QWORD *)v283;
      }
      else
      {
        if ( v162 == 1 )
        {
          LOBYTE(v359) = v379[0];
          goto LABEL_151;
        }
        if ( !v162 )
        {
LABEL_151:
          v164 = &v359;
LABEL_152:
          v358 = v162;
          *((_BYTE *)v164 + v162) = 0;
          *(_QWORD *)v283 = 0;
          v284 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v165 = (_QWORD *)operator new(0x20u);
          v166 = v165 + 2;
          v167 = v165;
          v168 = v358;
          *v165 = v165 + 2;
          if ( v357 == &v359 )
          {
            v254 = v168 + 1;
            if ( (unsigned int)(v168 + 1) >= 8 )
            {
              v266 = (unsigned __int64)(v165 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v165[2] = v359;
              *(_QWORD *)((char *)v166 + v254 - 8) = *(size_t *)((char *)&v358 + v254);
              v267 = (char *)((char *)&v359 - ((char *)v166 - v266));
              if ( ((v254 + (_DWORD)v166 - (_DWORD)v266) & 0xFFFFFFF8) >= 8 )
              {
                v268 = (v254 + (_DWORD)v166 - v266) & 0xFFFFFFF8;
                v269 = 0;
                do
                {
                  v270 = v269;
                  v269 += 8;
                  *(_QWORD *)(v266 + v270) = *(_QWORD *)&v267[v270];
                }
                while ( v269 < v268 );
              }
            }
            else if ( (v254 & 4) != 0 )
            {
              *((_DWORD *)v165 + 4) = v359;
              *(_DWORD *)((char *)v166 + v254 - 4) = *(_DWORD *)((char *)&v358 + v254 + 4);
            }
            else if ( (_DWORD)v168 != -1 )
            {
              *((_BYTE *)v165 + 16) = v359;
              if ( (v254 & 2) != 0 )
                *(_WORD *)((char *)v166 + v254 - 2) = *(_WORD *)((char *)&v358 + v254 + 6);
            }
          }
          else
          {
            *v165 = v357;
            v165[2] = v359;
          }
          v167[1] = v168;
          v357 = &v359;
          v358 = 0;
          LOBYTE(v359) = 0;
          v169 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v170 = *(_BYTE *)v169;
          v171 = *(_QWORD *)(v169 + 8);
          *(_BYTE *)v169 = 3;
          v172 = v282;
          *(_QWORD *)(v169 + 8) = v167;
          LOBYTE(v283[0]) = v170;
          v284 = v171;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v357 != &v359 )
            operator delete(v357, v359 + 1);
          v173 = netnode_altval();
          if ( v173 )
          {
            v174 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v175 = *(_BYTE *)v174;
            v176 = *(_QWORD *)(v174 + 8);
            *(_BYTE *)v174 = 6;
            v172 = v282;
            LOBYTE(v283[0]) = v175;
            *(_QWORD *)(v174 + 8) = v173;
            v284 = v176;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          LOBYTE(v283[0]) = 0;
          v282 = v172;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v177 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v178 = v284;
          v179 = *(_BYTE *)v177;
          *(_BYTE *)v177 = 0;
          v180 = *(_QWORD *)(v177 + 8);
          *(_QWORD *)(v177 + 8) = v178;
          LOBYTE(v283[0]) = v179;
          v284 = v180;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_91;
        }
        v209 = &v359;
      }
      if ( v163 >= 8 )
      {
        *v209 = *(_QWORD *)v379;
        *(_QWORD *)((char *)v209 + v163 - 8) = *(_QWORD *)&v378[v163];
        v239 = (unsigned __int64)(v209 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v240 = (char *)v209 - v239;
        v241 = (char *)(v379 - v240);
        v242 = (v163 + (_DWORD)v240) & 0xFFFFFFF8;
        if ( v242 >= 8 )
        {
          v243 = v242 & 0xFFFFFFF8;
          v244 = 0;
          do
          {
            v245 = v244;
            v244 += 8;
            *(_QWORD *)(v239 + v245) = *(_QWORD *)&v241[v245];
          }
          while ( v244 < v243 );
        }
      }
      else if ( (v163 & 4) != 0 )
      {
        *(_DWORD *)v209 = *(_DWORD *)v379;
        *(_DWORD *)((char *)v209 + v163 - 4) = *(_DWORD *)&v378[v163 + 4];
      }
      else if ( v163 )
      {
        *(_BYTE *)v209 = v379[0];
        if ( (v163 & 2) != 0 )
          *(_WORD *)((char *)v209 + v163 - 2) = *(_WORD *)&v378[v163 + 6];
      }
      v162 = *(_QWORD *)v283;
      v164 = v357;
      goto LABEL_152;
    }
    if ( (_QWORD)v286 )
    {
      v357 = &v359;
      if ( !v285 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v80 = strlen(v285);
      *(_QWORD *)v283 = v80;
      v81 = v80;
      if ( v80 > 0xF )
      {
        v357 = (void *)std::string::_M_create();
        v82 = v357;
        v359 = *(_QWORD *)v283;
LABEL_80:
        memcpy(v82, v285, v81);
        v80 = *(_QWORD *)v283;
        v83 = v357;
LABEL_81:
        v358 = v80;
        *((_BYTE *)v83 + v80) = 0;
        v84 = ida_mcp::tools::memory::`anonymous namespace'::classify_macho_section();
        if ( v84 )
        {
          v282 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_QWORD *)v283 = 0;
          v284 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v85 = v84;
          v86 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(v86, v85, v87, v88, v89, v90, v271, (int)v86, (__int64)v289);
          v91 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          LOBYTE(v85) = *(_BYTE *)v91;
          v92 = *(_QWORD *)(v91 + 8);
          *(_BYTE *)v91 = 3;
          *(_QWORD *)(v91 + 8) = v86;
          v93 = v282;
          LOBYTE(v283[0]) = (_BYTE)v85;
          v284 = v92;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( std::string::find() != -1 || std::string::find() != -1 || std::string::find() != -1 )
          {
            v284 = 1;
            v94 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v95 = *(_BYTE *)v94;
            *(_BYTE *)v94 = 4;
            LOBYTE(v283[0]) = v95;
            *(_QWORD *)(v94 + 8) = v284;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v284 = 1;
            v96 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v97 = *(_BYTE *)v96;
            v98 = *(_QWORD *)(v96 + 8);
            *(_BYTE *)v96 = 4;
            v93 = v282;
            LOBYTE(v283[0]) = v97;
            *(_QWORD *)(v96 + 8) = v284;
            v284 = v98;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          if ( std::string::find() == -1 )
          {
            if ( std::string::find() != -1 )
            {
              *(_QWORD *)v283 = 0;
              v284 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v228 = operator new(0x20u);
              *(_QWORD *)v228 = v228 + 16;
              *(_DWORD *)(v228 + 16) = 1718187891;
              *(_BYTE *)(v228 + 20) = 116;
              *(_QWORD *)(v228 + 8) = 5;
              *(_BYTE *)(v228 + 21) = 0;
              v282 = v93;
              v229 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v230 = *(_BYTE *)v229;
              v231 = *(_QWORD *)(v229 + 8);
              *(_BYTE *)v229 = 3;
              *(_QWORD *)(v229 + 8) = v228;
              v93 = v282;
              LOBYTE(v283[0]) = v230;
              v284 = v231;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
          }
          else
          {
            *(_QWORD *)v283 = 0;
            v284 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v99 = (__int64 *)operator new(0x20u);
            std::string::basic_string<std::allocator<char>>(
              v99,
              "objective-c",
              v100,
              v101,
              v102,
              v103,
              v271,
              (int)v272,
              (__int64)v275);
            v282 = v93;
            v104 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v105 = *(_BYTE *)v104;
            v106 = *(_QWORD *)(v104 + 8);
            *(_BYTE *)v104 = 3;
            *(_QWORD *)(v104 + 8) = v99;
            v93 = v282;
            LOBYTE(v283[0]) = v105;
            v284 = v106;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          LOBYTE(v283[0]) = 0;
          v282 = v93;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v107 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v108 = v284;
          v109 = *(_BYTE *)v107;
          *(_BYTE *)v107 = 0;
          v110 = *(_QWORD *)(v107 + 8);
          *(_QWORD *)(v107 + 8) = v108;
          LOBYTE(v283[0]) = v109;
          v284 = v110;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        if ( v357 != &v359 )
          operator delete(v357, v359 + 1);
        goto LABEL_89;
      }
      if ( v80 == 1 )
      {
        LOBYTE(v359) = *v285;
        v83 = &v359;
        goto LABEL_81;
      }
      if ( v80 )
      {
        v82 = &v359;
        goto LABEL_80;
      }
    }
    else
    {
      v357 = &v359;
    }
    v83 = &v359;
    v80 = 0;
    goto LABEL_81;
  }
  *(_QWORD *)v338 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v337) = 3;
  v126 = operator new(0x20u);
  strcpy((char *)(v126 + 16), "address");
  *(_QWORD *)v126 = v126 + 16;
  *(_QWORD *)(v126 + 8) = 7;
  *(_OWORD *)v338 = (unsigned __int64)v126;
  qsnprintf();
  v332 = (char *)&v333 + 8;
  v127 = (char *)strlen(v379);
  v285 = v127;
  v128 = (unsigned int)v127;
  if ( (unsigned __int64)v127 > 0xF )
  {
    v202 = (_QWORD *)std::string::_M_create();
    v332 = v202;
    *((_QWORD *)&v333 + 1) = v285;
LABEL_179:
    if ( v128 >= 8 )
    {
      *v202 = *(_QWORD *)v379;
      *(_QWORD *)((char *)v202 + v128 - 8) = *(_QWORD *)&v378[v128];
      v232 = (unsigned __int64)(v202 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v233 = (char *)v202 - v232;
      v234 = (char *)(v379 - v233);
      v235 = (v128 + (_DWORD)v233) & 0xFFFFFFF8;
      if ( v235 >= 8 )
      {
        v236 = v235 & 0xFFFFFFF8;
        v237 = 0;
        do
        {
          v238 = v237;
          v237 += 8;
          *(_QWORD *)(v232 + v238) = *(_QWORD *)&v234[v238];
        }
        while ( v237 < v236 );
      }
    }
    else if ( (v128 & 4) != 0 )
    {
      *(_DWORD *)v202 = *(_DWORD *)v379;
      *(_DWORD *)((char *)v202 + v128 - 4) = *(_DWORD *)&v378[v128 + 4];
    }
    else if ( v128 )
    {
      *(_BYTE *)v202 = v379[0];
      if ( (v128 & 2) != 0 )
        *(_WORD *)((char *)v202 + v128 - 2) = *(_WORD *)&v378[v128 + 6];
    }
    v127 = v285;
    v129 = v332;
    goto LABEL_134;
  }
  if ( v127 == (_BYTE *)&dword_0 + 1 )
  {
    BYTE8(v333) = v379[0];
    goto LABEL_133;
  }
  if ( v127 )
  {
    v202 = (_QWORD *)&v333 + 1;
    goto LABEL_179;
  }
LABEL_133:
  v129 = (char *)&v333 + 8;
LABEL_134:
  *(_QWORD *)&v333 = v127;
  v127[(_QWORD)v129] = 0;
  v339 = 0;
  *(_QWORD *)&v340 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v339 = 3;
  v130 = (_QWORD *)operator new(0x20u);
  v131 = v130 + 2;
  v132 = v130;
  v133 = (unsigned __int64)v130;
  v134 = v333;
  *v130 = v130 + 2;
  if ( v332 == (char *)&v333 + 8 )
  {
    v253 = v134 + 1;
    if ( (unsigned int)(v134 + 1) >= 8 )
    {
      v130[2] = *((_QWORD *)&v333 + 1);
      *(_QWORD *)((char *)v131 + v253 - 8) = *(_QWORD *)((char *)&v333 + v253);
      v256 = (unsigned __int64)(v130 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v257 = (char *)((char *)&v333 + 8 - ((char *)v131 - v256));
      if ( ((v253 + (_DWORD)v131 - (_DWORD)v256) & 0xFFFFFFF8) >= 8 )
      {
        v258 = (v253 + (_DWORD)v131 - v256) & 0xFFFFFFF8;
        v259 = 0;
        do
        {
          v260 = v259;
          v259 += 8;
          *(_QWORD *)(v256 + v260) = *(_QWORD *)&v257[v260];
        }
        while ( v259 < v258 );
      }
    }
    else if ( (v253 & 4) != 0 )
    {
      *((_DWORD *)v130 + 4) = DWORD2(v333);
      *(_DWORD *)((char *)v131 + v253 - 4) = *(_DWORD *)((char *)&v333 + v253 + 4);
    }
    else if ( (_DWORD)v134 != -1 )
    {
      *((_BYTE *)v130 + 16) = BYTE8(v333);
      if ( (v253 & 2) != 0 )
        *(_WORD *)((char *)v131 + v253 - 2) = *(_WORD *)((char *)&v333 + v253 + 6);
    }
  }
  else
  {
    *v130 = v332;
    v130[2] = *((_QWORD *)&v333 + 1);
  }
  v132[1] = v134;
  v332 = (char *)&v333 + 8;
  *(_QWORD *)&v333 = 0;
  BYTE8(v333) = 0;
  v340 = v133;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v357,
    (const __m128i *)&v337);
  v359 = 0;
  LOBYTE(v341) = 0;
  *(_QWORD *)&v342 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v341) = 3;
  v135 = operator new(0x20u);
  *(_DWORD *)(v135 + 16) = 1768710518;
  *(_QWORD *)v135 = v135 + 16;
  *(_BYTE *)(v135 + 20) = 100;
  *(_QWORD *)(v135 + 8) = 5;
  *(_BYTE *)(v135 + 21) = 0;
  *(_QWORD *)v343 = 4;
  v344 = 0;
  v345 = 0;
  v342 = (unsigned __int64)v135;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v360,
    (const __m128i *)&v341);
  v361 = 0;
  v346 = 0;
  *(_QWORD *)v347 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v346 = 3;
  v136 = operator new(0x20u);
  *(_QWORD *)v136 = v136 + 16;
  strcpy((char *)(v136 + 16), "mapped");
  *(_QWORD *)(v136 + 8) = 6;
  *(_QWORD *)v348 = 4;
  v349 = 0;
  v350 = 0;
  *(_OWORD *)v347 = (unsigned __int64)v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v362,
    (const __m128i *)&v346);
  v363 = 0;
  LOBYTE(v351) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v351) = 3;
  v137 = operator new(0x20u);
  *(_QWORD *)v137 = v137 + 16;
  strcpy((char *)(v137 + 16), "note");
  *(_QWORD *)(v137 + 8) = 4;
  LOBYTE(v353) = 0;
  *(_QWORD *)v354 = 0;
  s2 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v353) = 3;
  v138 = (__int64 *)operator new(0x20u);
  *v138 = (__int64)(v138 + 2);
  v285 = (char *)&qword_28;
  v139 = std::string::_M_create();
  *v138 = v139;
  v140 = _mm_load_si128((const __m128i *)&xmmword_3E22A0);
  v138[2] = 40;
  *(__m128i *)v139 = v140;
  v141 = _mm_load_si128((const __m128i *)&xmmword_3E22B0);
  *(_QWORD *)(v139 + 32) = 0x746E656D67657320LL;
  *(__m128i *)(v139 + 16) = v141;
  v142 = v285;
  v143 = *v138;
  v138[1] = (__int64)v285;
  v142[v143] = 0;
  *(_OWORD *)v354 = (unsigned __int64)v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v364,
    (const __m128i *)&v351);
  v365 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v144 = v366;
  do
  {
    v144 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v144 != (int *)&v357 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v332 != (char *)&v333 + 8 )
    operator delete(v332, *((_QWORD *)&v333 + 1) + 1LL);
  return a1;
}

