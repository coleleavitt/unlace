__int64 __fastcall ida_mcp::tools::symbols::`anonymous namespace'::handle_get_all_names_in_range(__int64 a1, char *a2)
{
  std::runtime_error *v2; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  char *v5; // rax
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  size_t v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbp
  size_t v16; // rdx
  int v17; // eax
  char *v18; // r12
  int *v19; // rax
  int *v20; // rbp
  std::runtime_error *exception; // rax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r14
  size_t v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r12
  size_t v31; // rdx
  int v32; // eax
  char *v33; // r12
  unsigned __int64 head; // rax
  unsigned __int64 v35; // rbx
  __int64 *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // rdi
  _QWORD *v47; // rdx
  __int128 v48; // xmm0
  __int64 v49; // rsi
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  _QWORD *v60; // rdi
  _QWORD *v61; // rdx
  __int128 v62; // xmm0
  __int64 v63; // rsi
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char *v80; // rbx
  const char *v82; // r13
  size_t v83; // rax
  unsigned int v84; // r12d
  _BYTE *v85; // rdx
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  _QWORD *v88; // r14
  __int64 v89; // rcx
  __int64 v90; // rax
  _QWORD *v91; // r12
  __int64 v92; // rax
  void *v93; // r9
  _QWORD *v94; // r15
  __int64 v95; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v97; // rdx
  _QWORD *v98; // r8
  _QWORD *v99; // rax
  char *v100; // r15
  _QWORD *v101; // rax
  void *v102; // r14
  size_t v103; // rax
  size_t v104; // r8
  __int64 v105; // r15
  _QWORD *v106; // r14
  size_t v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // r15
  size_t v111; // rdx
  int v112; // eax
  __int64 v113; // r15
  int v114; // eax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  _QWORD *v117; // rax
  __int64 *v118; // r14
  size_t v119; // rax
  _QWORD *v120; // rdx
  unsigned int v121; // r15d
  unsigned __int64 v122; // rax
  char *v123; // rdx
  const char *v124; // r13
  unsigned int v125; // r15d
  unsigned int v126; // r15d
  unsigned int v127; // edx
  __int64 v128; // rcx
  __int64 v129; // rdx
  _QWORD *v130; // r15
  __int64 v131; // r13
  size_t v132; // rdx
  int v133; // eax
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // r13
  size_t v136; // rdx
  int v137; // eax
  __int64 v138; // r13
  int v139; // eax
  int v140; // eax
  _QWORD *v141; // rax
  __int64 v142; // rdx
  _QWORD *v143; // rax
  __int64 *v144; // rbp
  __int64 v145; // rax
  __m128i si128; // xmm0
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  _QWORD *v151; // r14
  __int64 v152; // r15
  size_t v153; // rdx
  int v154; // eax
  unsigned __int64 v155; // rbx
  unsigned __int64 v156; // rcx
  size_t v157; // rdx
  int v158; // eax
  _QWORD *v159; // r9
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rdx
  _QWORD *v164; // r9
  _QWORD *v165; // rdx
  int *v166; // r13
  _QWORD *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rax
  void *v171; // rdi
  void *v172; // rdi
  void *v173; // r9
  void *v174; // rdi
  void *v175; // rdi
  _QWORD *v176; // r8
  std::runtime_error *v177; // rax
  unsigned int v178; // esi
  unsigned __int64 v179; // rdx
  char *v180; // rax
  char *v181; // rbp
  unsigned int v182; // r12d
  unsigned int v183; // r12d
  unsigned int v184; // eax
  __int64 v185; // rcx
  __int64 v186; // r14
  __int64 v187; // r12
  __int64 v188; // r14
  __int64 v189; // rbp
  __int64 v190; // r15
  size_t v191; // rdx
  int v192; // eax
  unsigned __int64 v193; // r13
  unsigned __int64 v194; // rbp
  size_t v195; // rax
  int v196; // eax
  __int64 v197; // r15
  size_t v198; // rdx
  int v199; // eax
  unsigned __int64 v200; // r13
  unsigned __int64 v201; // rbp
  size_t v202; // rax
  int v203; // eax
  unsigned __int64 v204; // rdi
  _BYTE *v205; // r11
  unsigned int v206; // eax
  unsigned int v207; // edx
  __int64 v208; // rsi
  unsigned int v209; // r8d
  unsigned int v210; // r8d
  unsigned __int64 v211; // r15
  size_t v212; // rax
  unsigned __int64 v213; // r9
  int v214; // eax
  char *v215; // rdi
  unsigned int v216; // eax
  unsigned int v217; // eax
  unsigned int v218; // ecx
  __int64 v219; // r8
  unsigned __int64 v220; // r9
  int v221; // eax
  char *v222; // rdi
  unsigned int v223; // eax
  unsigned int v224; // eax
  unsigned int v225; // ecx
  __int64 v226; // r8
  _QWORD *v227; // [rsp+0h] [rbp-358h]
  int v228; // [rsp+0h] [rbp-358h]
  int v229; // [rsp+0h] [rbp-358h]
  int v230; // [rsp+0h] [rbp-358h]
  int v231; // [rsp+0h] [rbp-358h]
  int v232; // [rsp+0h] [rbp-358h]
  _QWORD *v233; // [rsp+8h] [rbp-350h]
  int v234; // [rsp+8h] [rbp-350h]
  int v235; // [rsp+8h] [rbp-350h]
  int v236; // [rsp+8h] [rbp-350h]
  int v237; // [rsp+8h] [rbp-350h]
  int v238; // [rsp+8h] [rbp-350h]
  void *s1b; // [rsp+10h] [rbp-348h]
  void *s1c; // [rsp+10h] [rbp-348h]
  void *s1; // [rsp+10h] [rbp-348h]
  void *s1a; // [rsp+10h] [rbp-348h]
  void *s1d; // [rsp+10h] [rbp-348h]
  unsigned __int64 v244; // [rsp+18h] [rbp-340h]
  void *v245; // [rsp+20h] [rbp-338h]
  _QWORD *v246; // [rsp+20h] [rbp-338h]
  _QWORD *v247; // [rsp+20h] [rbp-338h]
  _QWORD *v248; // [rsp+20h] [rbp-338h]
  _QWORD *v249; // [rsp+20h] [rbp-338h]
  unsigned __int64 v250; // [rsp+28h] [rbp-330h]
  unsigned __int8 v251; // [rsp+50h] [rbp-308h]
  _QWORD *v252; // [rsp+58h] [rbp-300h]
  const void *v253; // [rsp+60h] [rbp-2F8h]
  size_t v254; // [rsp+60h] [rbp-2F8h]
  void *v255; // [rsp+60h] [rbp-2F8h]
  unsigned __int8 v256; // [rsp+70h] [rbp-2E8h]
  __int64 v257; // [rsp+80h] [rbp-2D8h]
  const void *v258; // [rsp+80h] [rbp-2D8h]
  unsigned __int64 v259; // [rsp+88h] [rbp-2D0h]
  _QWORD *v260; // [rsp+90h] [rbp-2C8h]
  char v262; // [rsp+ACh] [rbp-2ACh]
  unsigned __int8 v263; // [rsp+ADh] [rbp-2ABh]
  size_t v264; // [rsp+B8h] [rbp-2A0h]
  size_t v265; // [rsp+B8h] [rbp-2A0h]
  size_t v266; // [rsp+D0h] [rbp-288h]
  _QWORD *v267; // [rsp+D8h] [rbp-280h] BYREF
  char *v268; // [rsp+E0h] [rbp-278h]
  __int128 v269; // [rsp+E8h] [rbp-270h]
  void *v270; // [rsp+100h] [rbp-258h] BYREF
  __int64 v271; // [rsp+108h] [rbp-250h]
  _QWORD v272[2]; // [rsp+110h] [rbp-248h] BYREF
  void *v273; // [rsp+120h] [rbp-238h] BYREF
  __int64 v274; // [rsp+128h] [rbp-230h]
  _QWORD v275[2]; // [rsp+130h] [rbp-228h] BYREF
  void *v276; // [rsp+140h] [rbp-218h] BYREF
  _BYTE v277[23]; // [rsp+148h] [rbp-210h] BYREF
  __int128 v278; // [rsp+160h] [rbp-1F8h] BYREF
  char v279; // [rsp+170h] [rbp-1E8h] BYREF
  __int128 v280; // [rsp+178h] [rbp-1E0h]
  char v281; // [rsp+188h] [rbp-1D0h]
  __int128 v282; // [rsp+190h] [rbp-1C8h] BYREF
  char v283; // [rsp+1A0h] [rbp-1B8h] BYREF
  __int128 v284; // [rsp+1A8h] [rbp-1B0h]
  char v285; // [rsp+1B8h] [rbp-1A0h]
  __int64 v286; // [rsp+1C0h] [rbp-198h]
  __int64 v287; // [rsp+1C8h] [rbp-190h]
  char v288; // [rsp+1D0h] [rbp-188h] BYREF
  __int128 v289; // [rsp+1D8h] [rbp-180h]
  char v290; // [rsp+1E8h] [rbp-170h]
  __int64 v291; // [rsp+1F0h] [rbp-168h]
  __int64 v292; // [rsp+1F8h] [rbp-160h]
  void *v293; // [rsp+200h] [rbp-158h] BYREF
  _BYTE s2[22]; // [rsp+208h] [rbp-150h] BYREF
  __int64 v295; // [rsp+220h] [rbp-138h]
  __int64 v296; // [rsp+228h] [rbp-130h]
  void *v297; // [rsp+230h] [rbp-128h] BYREF
  __int64 v298; // [rsp+238h] [rbp-120h]
  __int64 v299; // [rsp+240h] [rbp-118h] BYREF
  int v300[4]; // [rsp+248h] [rbp-110h] BYREF
  __int64 v301; // [rsp+258h] [rbp-100h]
  int v302[4]; // [rsp+260h] [rbp-F8h] BYREF
  __int64 v303; // [rsp+270h] [rbp-E8h]
  int v304[4]; // [rsp+278h] [rbp-E0h] BYREF
  __int64 v305; // [rsp+288h] [rbp-D0h]
  int v306[4]; // [rsp+290h] [rbp-C8h] BYREF
  __int64 v307; // [rsp+2A0h] [rbp-B8h]
  char v308[8]; // [rsp+2A8h] [rbp-B0h] BYREF
  char s[32]; // [rsp+2B0h] [rbp-A8h] BYREF
  char v310[32]; // [rsp+2D0h] [rbp-88h] BYREF
  char v311[40]; // [rsp+2F0h] [rbp-68h] BYREF
  unsigned __int64 v312; // [rsp+318h] [rbp-40h]

  v312 = __readfsqword(0x28u);
  v7 = a2;
  strcpy(&s2[8], "start_address");
  v293 = &s2[8];
  *(_QWORD *)s2 = 13;
  if ( *a2 != 1 )
    JUMPOUT(0xC65DF);
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = v8 + 8;
  if ( v9 )
  {
    v11 = v8 + 8;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v9 + 40);
        if ( !v14 )
          break;
        v12 = 13;
        if ( v14 <= 0xD )
          v12 = *(_QWORD *)(v9 + 40);
        v13 = memcmp(*(const void **)(v9 + 32), &s2[8], v12);
        if ( v13 || (v13 = v14 - 13, (__int64)(v14 - 13) <= 0x7FFFFFFF) )
        {
          if ( v13 < 0 )
            break;
        }
        v11 = v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_12;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v9 );
LABEL_12:
    if ( v10 != v11 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( v15 )
      {
        v16 = 13;
        if ( v15 <= 0xD )
          v16 = *(_QWORD *)(v11 + 40);
        v17 = memcmp(&s2[8], *(const void **)(v11 + 32), v16);
        if ( v17 || (v17 = 13 - v15, (__int64)(13 - v15) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v17 >= 0 )
            v10 = v11;
        }
      }
      else
      {
        v10 = v11;
      }
    }
  }
  s2[8] = 0;
  *(_QWORD *)s2 = 0;
  v293 = &s2[8];
  if ( *(_BYTE *)(v10 + 64) != 3 )
    JUMPOUT(0xC6A42);
  std::string::_M_assign();
  v18 = (char *)v293;
  v19 = __errno_location();
  *v19 = 0;
  v20 = v19;
  v259 = __isoc23_strtoull();
  if ( v18 == v268 || *v268 || *v20 == 34 && v259 == -1 )
  {
    if ( v293 != &s2[8] )
      operator delete(v293, *(_QWORD *)&s2[8] + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid start_address format");
    JUMPOUT(0xC685A);
  }
  if ( v293 != &s2[8] )
    operator delete(v293, *(_QWORD *)&s2[8] + 1LL);
  *(_QWORD *)s2 = 11;
  strcpy(&s2[8], "end_address");
  v22 = *a2;
  v293 = &s2[8];
  if ( v22 != 1 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *a2 )
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
    v268 = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v23 = *((_QWORD *)a2 + 1);
  v24 = *(_QWORD *)(v23 + 16);
  v25 = v23 + 8;
  if ( v24 )
  {
    LODWORD(v227) = (_DWORD)a2;
    v26 = v23 + 8;
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v24 + 40);
        if ( !v29 )
          break;
        v27 = 11;
        if ( v29 <= 0xB )
          v27 = *(_QWORD *)(v24 + 40);
        v28 = memcmp(*(const void **)(v24 + 32), &s2[8], v27);
        if ( v28 || (v28 = v29 - 11, (__int64)(v29 - 11) <= 0x7FFFFFFF) )
        {
          if ( v28 < 0 )
            break;
        }
        v26 = v24;
        v24 = *(_QWORD *)(v24 + 16);
        if ( !v24 )
          goto LABEL_41;
      }
      v24 = *(_QWORD *)(v24 + 24);
    }
    while ( v24 );
LABEL_41:
    v7 = a2;
    if ( v25 != v26 )
    {
      v30 = *(_QWORD *)(v26 + 40);
      if ( v30 )
      {
        v31 = 11;
        if ( v30 <= 0xB )
          v31 = *(_QWORD *)(v26 + 40);
        v32 = memcmp(&s2[8], *(const void **)(v26 + 32), v31);
        if ( v32 || (v32 = 11 - v30, (__int64)(11 - v30) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v32 >= 0 )
            v25 = v26;
        }
      }
      else
      {
        v25 = v26;
      }
    }
  }
  s2[8] = 0;
  *(_QWORD *)s2 = 0;
  v293 = &s2[8];
  if ( *(_BYTE *)(v25 + 64) != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v25 + 64) )
    {
      case 0:
        v6 = "null";
        break;
      case 1:
        v6 = "object";
        break;
      case 2:
        v6 = (char *)"array";
        break;
      case 3:
        v6 = "string";
        break;
      case 4:
        v6 = "boolean";
        break;
      case 8:
        v6 = "binary";
        break;
      case 9:
        v6 = "discarded";
        break;
      default:
        v6 = "number";
        break;
    }
    v268 = v6;
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
  v33 = (char *)v293;
  *v20 = 0;
  v244 = __isoc23_strtoull();
  if ( v33 == v268 || *v268 || *v20 == 34 && v244 == -1 )
  {
    if ( v293 != &s2[8] )
      operator delete(v293, *(_QWORD *)&s2[8] + 1LL);
    v177 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v177, "Invalid end_address format");
    ida_mcp::tools::symbols::`anonymous namespace'::handle_get_all_names_in_range();
  }
  if ( v293 != &s2[8] )
    operator delete(v293, *(_QWORD *)&s2[8] + 1LL);
  if ( v259 >= v244 )
  {
    v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v2, "Start address must be less than end address");
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *v7 == 1 )
  {
    v186 = *((_QWORD *)v7 + 1);
    v187 = *(_QWORD *)(v186 + 16);
    if ( v187 )
    {
      v188 = v186 + 8;
      v189 = v187;
      v190 = v188;
      do
      {
        while ( 1 )
        {
          v193 = *(_QWORD *)(v189 + 40);
          if ( !v193 )
            break;
          v191 = 5;
          if ( v193 <= 5 )
            v191 = *(_QWORD *)(v189 + 40);
          v192 = memcmp(*(const void **)(v189 + 32), "limit", v191);
          if ( v192 || (v192 = v193 - 5, (__int64)(v193 - 5) <= 0x7FFFFFFF) )
          {
            if ( v192 < 0 )
              break;
          }
          v190 = v189;
          v189 = *(_QWORD *)(v189 + 16);
          if ( !v189 )
            goto LABEL_234;
        }
        v189 = *(_QWORD *)(v189 + 24);
      }
      while ( v189 );
LABEL_234:
      if ( v188 != v190 )
      {
        v194 = *(_QWORD *)(v190 + 40);
        if ( !v194 )
          goto LABEL_241;
        v195 = 5;
        if ( v194 <= 5 )
          v195 = *(_QWORD *)(v190 + 40);
        v196 = memcmp(*(const void **)(v190 + 32), "limit", v195);
        if ( v196 || (v196 = v194 - 5, (__int64)(v194 - 5) <= 0x7FFFFFFF) )
        {
          if ( v196 <= 0 )
          {
LABEL_241:
            strcpy((char *)&v299, "limit");
            v197 = v188;
            do
            {
              while ( 1 )
              {
                v200 = *(_QWORD *)(v187 + 40);
                if ( !v200 )
                  break;
                v198 = 5;
                if ( v200 <= 5 )
                  v198 = *(_QWORD *)(v187 + 40);
                v199 = memcmp(*(const void **)(v187 + 32), &v299, v198);
                if ( v199 || (v199 = v200 - 5, (__int64)(v200 - 5) <= 0x7FFFFFFF) )
                {
                  if ( v199 < 0 )
                    break;
                }
                v197 = v187;
                v187 = *(_QWORD *)(v187 + 16);
                if ( !v187 )
                  goto LABEL_250;
              }
              v187 = *(_QWORD *)(v187 + 24);
            }
            while ( v187 );
LABEL_250:
            if ( v188 != v197 )
            {
              v201 = *(_QWORD *)(v197 + 40);
              if ( v201 )
              {
                v202 = 5;
                if ( v201 <= 5 )
                  v202 = *(_QWORD *)(v197 + 40);
                v203 = memcmp(&v299, *(const void **)(v197 + 32), v202);
                if ( v203 || (v203 = 5 - v201, (__int64)(5 - v201) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v203 >= 0 )
                    v188 = v197;
                }
              }
              else
              {
                v188 = v197;
              }
            }
            if ( *(_BYTE *)(v188 + 64) )
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v268 = nullptr;
              nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,long,0>();
            }
          }
        }
      }
    }
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v250 = 0;
  v262 = 0;
  v252 = nullptr;
  while ( 1 )
  {
    v269 = 0;
    v268 = nullptr;
    get_ea_name();
    if ( (unsigned __int64)v269 <= 1 )
      goto LABEL_60;
    v251 = is_uname();
    v256 = is_public_name();
    v263 = is_weak_name();
    v82 = "auto_generated";
    if ( v251 )
    {
      v82 = "user_defined";
      if ( v256 )
        v82 = "user_defined_public";
    }
    qsnprintf();
    v293 = &s2[8];
    v83 = strlen(s);
    v266 = v83;
    v84 = v83;
    if ( v83 > 0xF )
    {
      v170 = (_QWORD *)std::string::_M_create();
      v293 = v170;
      *(_QWORD *)&s2[8] = v266;
    }
    else
    {
      if ( v83 == 1 )
      {
        s2[8] = s[0];
LABEL_87:
        v85 = &s2[8];
        goto LABEL_88;
      }
      if ( !v83 )
        goto LABEL_87;
      v170 = &s2[8];
    }
    if ( v84 >= 8 )
    {
      *v170 = *(_QWORD *)s;
      *(_QWORD *)((char *)v170 + v84 - 8) = *(_QWORD *)&v308[v84];
      v179 = (unsigned __int64)(v170 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v180 = (char *)v170 - v179;
      v181 = (char *)(s - v180);
      v182 = ((_DWORD)v180 + v84) & 0xFFFFFFF8;
      if ( v182 >= 8 )
      {
        v183 = v182 & 0xFFFFFFF8;
        v184 = 0;
        do
        {
          v185 = v184;
          v184 += 8;
          *(_QWORD *)(v179 + v185) = *(_QWORD *)&v181[v185];
        }
        while ( v184 < v183 );
      }
    }
    else if ( (v84 & 4) != 0 )
    {
      *(_DWORD *)v170 = *(_DWORD *)s;
      *(_DWORD *)((char *)v170 + v84 - 4) = *(_DWORD *)&v308[v84 + 4];
    }
    else if ( v84 )
    {
      *(_BYTE *)v170 = s[0];
      if ( (v84 & 2) != 0 )
        *(_WORD *)((char *)v170 + v84 - 2) = *(_WORD *)&v308[v84 + 6];
    }
    v83 = v266;
    v85 = v293;
LABEL_88:
    *(_QWORD *)s2 = v83;
    v85[v83] = 0;
    v233 = &v267;
    v267 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v86 = (_QWORD *)operator new(0x20u);
    v87 = v86 + 2;
    v88 = v86;
    v89 = *(_QWORD *)s2;
    *v86 = v86 + 2;
    if ( v293 == &s2[8] )
    {
      v178 = v89 + 1;
      if ( (unsigned int)(v89 + 1) >= 8 )
      {
        v86[2] = *(_QWORD *)&s2[8];
        *(_QWORD *)((char *)v87 + v178 - 8) = *(_QWORD *)&s2[v178];
        v204 = (unsigned __int64)(v86 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v205 = (_BYTE *)(&s2[8] - ((char *)v87 - v204));
        if ( ((v178 + (_DWORD)v87 - (_DWORD)v204) & 0xFFFFFFF8) >= 8 )
        {
          v206 = (v178 + (_DWORD)v87 - v204) & 0xFFFFFFF8;
          v207 = 0;
          do
          {
            v208 = v207;
            v207 += 8;
            *(_QWORD *)(v204 + v208) = *(_QWORD *)&v205[v208];
          }
          while ( v207 < v206 );
        }
      }
      else if ( (v178 & 4) != 0 )
      {
        *((_DWORD *)v86 + 4) = *(_DWORD *)&s2[8];
        *(_DWORD *)((char *)v87 + v178 - 4) = *(_DWORD *)&s2[v178 + 4];
      }
      else if ( (_DWORD)v89 != -1 )
      {
        *((_BYTE *)v86 + 16) = s2[8];
        if ( (v178 & 2) != 0 )
          *(_WORD *)((char *)v87 + v178 - 2) = *(_WORD *)&s2[v178 + 6];
      }
    }
    else
    {
      *v86 = v293;
      v86[2] = *(_QWORD *)&s2[8];
    }
    v88[1] = v89;
    strcpy((char *)&v299, "address");
    v293 = &s2[8];
    *(_QWORD *)s2 = 0;
    s2[8] = 0;
    v297 = &v299;
    v298 = 7;
    v90 = operator new(0x30u);
    *(_DWORD *)(v90 + 8) = 0;
    v91 = (_QWORD *)v90;
    v90 += 8;
    *(_QWORD *)(v90 + 8) = 0;
    v91[3] = v90;
    v91[4] = v90;
    v91[5] = 0;
    v227 = (_QWORD *)v90;
    v92 = operator new(0x50u);
    v93 = (void *)(v92 + 48);
    v94 = (_QWORD *)v92;
    *(_QWORD *)(v92 + 32) = v92 + 48;
    v95 = v299;
    v94[5] = 7;
    v94[6] = v95;
    v94[8] = 0;
    v94[9] = 0;
    v245 = v93;
    v297 = &v299;
    v298 = 0;
    LOBYTE(v299) = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                               v91,
                               v227,
                               v93,
                               7u);
    if ( v97 )
    {
      if ( !insert_hint_unique_pos && v227 != (_QWORD *)v97 )
        std::string::compare(v245, 7u, *(const void **)(v97 + 32), *(_QWORD *)(v97 + 40));
      std::_Rb_tree_insert_and_rebalance();
      ++v91[5];
      v98 = v94;
    }
    else
    {
      v255 = v245;
      v248 = insert_hint_unique_pos;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v175 = (void *)v94[4];
      v176 = v248;
      if ( v255 != v175 )
      {
        operator delete(v175, v94[6] + 1LL);
        v176 = v248;
      }
      v249 = v176;
      operator delete(v94, 0x50u);
      v98 = v249;
    }
    if ( v297 != &v299 )
    {
      v246 = v98;
      operator delete(v297, v299 + 1);
      v98 = v246;
    }
    v99 = (_QWORD *)v98[9];
    *((_BYTE *)v98 + 64) = 3;
    v98[9] = v88;
    v267 = v99;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v293 != &s2[8] )
      operator delete(v293, *(_QWORD *)&s2[8] + 1LL);
    v100 = v268;
    if ( !(_QWORD)v269 )
      v100 = _qstring<char>::c_str(void)const::nullstr;
    v267 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v101 = (_QWORD *)operator new(0x20u);
    v102 = v101 + 2;
    v247 = v101;
    *v101 = v101 + 2;
    if ( !v100 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v103 = strlen(v100);
    v264 = v103;
    v104 = v103;
    if ( v103 > 0xF )
    {
      v254 = v103;
      v102 = (void *)std::string::_M_create();
      v104 = v254;
      *v247 = v102;
      v247[2] = v264;
LABEL_190:
      memcpy(v102, v100, v104);
      v103 = v264;
      v102 = (void *)*v247;
      goto LABEL_105;
    }
    if ( v103 == 1 )
    {
      *((_BYTE *)v247 + 16) = *v100;
    }
    else if ( v103 )
    {
      goto LABEL_190;
    }
LABEL_105:
    v247[1] = v103;
    *((_BYTE *)v102 + v103) = 0;
    v105 = v91[2];
    v297 = &v299;
    v106 = v227;
    strcpy((char *)&v299, "name");
    v298 = 4;
    if ( !v105 )
      goto LABEL_122;
    do
    {
      while ( 1 )
      {
        v109 = *(_QWORD *)(v105 + 40);
        if ( !v109 )
          break;
        v107 = 4;
        if ( v109 <= 4 )
          v107 = *(_QWORD *)(v105 + 40);
        v108 = memcmp(*(const void **)(v105 + 32), &v299, v107);
        if ( v108 || (v108 = v109 - 4, (__int64)(v109 - 4) <= 0x7FFFFFFF) )
        {
          if ( v108 < 0 )
            break;
        }
        v106 = (_QWORD *)v105;
        v105 = *(_QWORD *)(v105 + 16);
        if ( !v105 )
          goto LABEL_115;
      }
      v105 = *(_QWORD *)(v105 + 24);
    }
    while ( v105 );
LABEL_115:
    if ( v106 == v227 )
      goto LABEL_122;
    v110 = v106[5];
    if ( v110 )
    {
      v111 = 4;
      if ( v110 <= 4 )
        v111 = v106[5];
      if ( (v112 = memcmp(&v299, (const void *)v106[4], v111)) == 0
        && (v112 = 4 - v110, (__int64)(4 - v110) < (__int64)0xFFFFFFFF80000000LL)
        || v112 < 0 )
      {
LABEL_122:
        v113 = operator new(0x50u);
        *(_QWORD *)(v113 + 32) = v113 + 48;
        v114 = v299;
        *(_QWORD *)(v113 + 40) = 4;
        *(_DWORD *)(v113 + 48) = v114;
        LOBYTE(v114) = BYTE4(v299);
        *(_QWORD *)(v113 + 64) = 0;
        *(_BYTE *)(v113 + 52) = v114;
        *(_QWORD *)(v113 + 72) = 0;
        v297 = &v299;
        v298 = 0;
        LOBYTE(v299) = 0;
        v253 = (const void *)(v113 + 48);
        v115 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                 v91,
                 v106,
                 (const void *)(v113 + 48),
                 4u);
        v106 = v115;
        if ( v116 )
        {
          if ( !v115 && v227 != (_QWORD *)v116 )
            std::string::compare(v253, 4u, *(const void **)(v116 + 32), *(_QWORD *)(v116 + 40));
          v106 = (_QWORD *)v113;
          std::_Rb_tree_insert_and_rebalance();
          ++v91[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v172 = *(void **)(v113 + 32);
          if ( v253 != v172 )
            operator delete(v172, *(_QWORD *)(v113 + 48) + 1LL);
          operator delete((void *)v113, 0x50u);
        }
        if ( v297 != &v299 )
          operator delete(v297, v299 + 1);
      }
    }
    *((_BYTE *)v106 + 64) = 3;
    v117 = (_QWORD *)v106[9];
    v106[9] = v247;
    v267 = v117;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v267 = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v118 = (__int64 *)operator new(0x20u);
    *v118 = (__int64)(v118 + 2);
    v119 = strlen(v82);
    v120 = v118 + 2;
    v265 = v119;
    v121 = v119;
    if ( v119 > 0xF )
    {
      v169 = std::string::_M_create();
      *v118 = v169;
      v120 = (_QWORD *)v169;
      v118[2] = v265;
    }
    *v120 = *(_QWORD *)v82;
    *(_QWORD *)((char *)v120 + v121 - 8) = *(_QWORD *)&v82[v121 - 8];
    v122 = (unsigned __int64)(v120 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v123 = (char *)v120 - v122;
    v124 = (const char *)(v82 - v123);
    v125 = ((_DWORD)v123 + v121) & 0xFFFFFFF8;
    if ( v125 >= 8 )
    {
      v126 = v125 & 0xFFFFFFF8;
      v127 = 0;
      do
      {
        v128 = v127;
        v127 += 8;
        *(_QWORD *)(v122 + v128) = *(_QWORD *)&v124[v128];
      }
      while ( v127 < v126 );
    }
    v129 = *v118;
    v130 = v227;
    v118[1] = v265;
    *(_BYTE *)(v129 + v265) = 0;
    v131 = v91[2];
    v297 = &v299;
    strcpy((char *)&v299, "origin");
    v298 = 6;
    if ( !v131 )
      goto LABEL_151;
    do
    {
      while ( 1 )
      {
        v134 = *(_QWORD *)(v131 + 40);
        if ( !v134 )
          break;
        v132 = 6;
        if ( v134 <= 6 )
          v132 = *(_QWORD *)(v131 + 40);
        v133 = memcmp(*(const void **)(v131 + 32), &v299, v132);
        if ( v133 || (v133 = v134 - 6, (__int64)(v134 - 6) <= 0x7FFFFFFF) )
        {
          if ( v133 < 0 )
            break;
        }
        v130 = (_QWORD *)v131;
        v131 = *(_QWORD *)(v131 + 16);
        if ( !v131 )
          goto LABEL_144;
      }
      v131 = *(_QWORD *)(v131 + 24);
    }
    while ( v131 );
LABEL_144:
    if ( v130 == v227 )
      goto LABEL_151;
    v135 = v130[5];
    if ( v135 )
    {
      v136 = 6;
      if ( v135 <= 6 )
        v136 = v130[5];
      if ( (v137 = memcmp(&v299, (const void *)v130[4], v136)) == 0
        && (v137 = 6 - v135, (__int64)(6 - v135) < (__int64)0xFFFFFFFF80000000LL)
        || v137 < 0 )
      {
LABEL_151:
        v138 = operator new(0x50u);
        *(_QWORD *)(v138 + 32) = v138 + 48;
        v139 = v299;
        *(_QWORD *)(v138 + 40) = 6;
        *(_DWORD *)(v138 + 48) = v139;
        v140 = *(_DWORD *)((char *)&v299 + 3);
        *(_QWORD *)(v138 + 64) = 0;
        *(_DWORD *)(v138 + 51) = v140;
        *(_QWORD *)(v138 + 72) = 0;
        v297 = &v299;
        v298 = 0;
        LOBYTE(v299) = 0;
        v141 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                 v91,
                 v130,
                 (const void *)(v138 + 48),
                 6u);
        v130 = v141;
        if ( v142 )
        {
          if ( v227 != (_QWORD *)v142 && !v141 )
          {
            v211 = *(_QWORD *)(v142 + 40);
            if ( v211 )
            {
              v212 = 6;
              if ( v211 <= 6 )
                v212 = *(_QWORD *)(v142 + 40);
              memcmp((const void *)(v138 + 48), *(const void **)(v142 + 32), v212);
            }
          }
          v130 = (_QWORD *)v138;
          std::_Rb_tree_insert_and_rebalance();
          ++v91[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v171 = *(void **)(v138 + 32);
          if ( (void *)(v138 + 48) != v171 )
            operator delete(v171, *(_QWORD *)(v138 + 48) + 1LL);
          operator delete((void *)v138, 0x50u);
        }
        if ( v297 != &v299 )
          operator delete(v297, v299 + 1);
      }
    }
    v143 = (_QWORD *)v130[9];
    *((_BYTE *)v130 + 64) = 3;
    v130[9] = v118;
    v267 = v143;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v279 = 0;
    *(_QWORD *)&v280 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v279 = 3;
    v144 = (__int64 *)operator new(0x20u);
    *v144 = (__int64)(v144 + 2);
    v145 = std::string::_M_create();
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E20C0);
    *v144 = v145;
    v144[2] = 17;
    *(__m128i *)v145 = si128;
    *(_BYTE *)(v145 + 16) = 100;
    v147 = *v144;
    v144[1] = 17;
    *(_BYTE *)(v147 + 17) = 0;
    v281 = 4;
    v282 = v251 ^ 1u;
    v280 = (unsigned __int64)v144;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v297,
      (const __m128i *)&v279,
      2,
      1);
    v299 = 0;
    v283 = 0;
    *(_QWORD *)&v284 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v283 = 3;
    v148 = operator new(0x20u);
    strcpy((char *)(v148 + 16), "is_user_defined");
    *(_QWORD *)v148 = v148 + 16;
    *(_QWORD *)(v148 + 8) = 15;
    v285 = 4;
    v286 = v251;
    v287 = 0;
    v284 = (unsigned __int64)v148;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v300,
      (const __m128i *)&v283,
      2,
      1);
    v301 = 0;
    v288 = 0;
    *(_QWORD *)&v289 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v288 = 3;
    v149 = operator new(0x20u);
    *(_QWORD *)v149 = v149 + 16;
    strcpy((char *)(v149 + 16), "is_public");
    *(_QWORD *)(v149 + 8) = 9;
    v290 = 4;
    v291 = v256;
    v292 = 0;
    v289 = (unsigned __int64)v149;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v302,
      (const __m128i *)&v288,
      2,
      1);
    v303 = 0;
    LOBYTE(v293) = 0;
    *(_QWORD *)s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v293) = 3;
    v150 = operator new(0x20u);
    strcpy((char *)(v150 + 16), "is_weak");
    *(_QWORD *)v150 = v150 + 16;
    *(_QWORD *)(v150 + 8) = 7;
    s2[16] = 4;
    v295 = v263;
    v296 = 0;
    *(_OWORD *)s2 = (unsigned __int64)v150;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v304,
      (const __m128i *)&v293,
      2,
      1);
    v305 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v151 = v227;
    *(_QWORD *)v277 = 14;
    v152 = v91[2];
    v276 = &v277[8];
    strcpy(&v277[8], "classification");
    if ( !v152 )
      goto LABEL_174;
    do
    {
      while ( 1 )
      {
        v155 = *(_QWORD *)(v152 + 40);
        if ( !v155 )
          break;
        v153 = 14;
        if ( v155 <= 0xE )
          v153 = *(_QWORD *)(v152 + 40);
        v154 = memcmp(*(const void **)(v152 + 32), &v277[8], v153);
        if ( v154 || (v154 = v155 - 14, (__int64)(v155 - 14) <= 0x7FFFFFFF) )
        {
          if ( v154 < 0 )
            break;
        }
        v151 = (_QWORD *)v152;
        v152 = *(_QWORD *)(v152 + 16);
        if ( !v152 )
          goto LABEL_167;
      }
      v152 = *(_QWORD *)(v152 + 24);
    }
    while ( v152 );
LABEL_167:
    if ( v151 == v227 )
      goto LABEL_174;
    v156 = v151[5];
    if ( v156 )
    {
      v157 = 14;
      v257 = v151[5];
      if ( v156 <= 0xE )
        v157 = v151[5];
      if ( (v158 = memcmp(&v277[8], (const void *)v151[4], v157)) == 0
        && (v158 = 14 - v257, 14 - v257 < (__int64)0xFFFFFFFF80000000LL)
        || v158 < 0 )
      {
LABEL_174:
        v159 = (_QWORD *)operator new(0x50u);
        v159[4] = v159 + 6;
        v160 = *(_QWORD *)&v277[8];
        v159[5] = 14;
        v159[6] = v160;
        v161 = *(_QWORD *)&v277[15];
        v159[8] = 0;
        *(_QWORD *)((char *)v159 + 55) = v161;
        v159[9] = 0;
        v260 = v159;
        v276 = &v277[8];
        *(_QWORD *)v277 = 0;
        v277[8] = 0;
        v258 = v159 + 6;
        v162 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                 v91,
                 v151,
                 v159 + 6,
                 0xEu);
        v164 = v260;
        v151 = v162;
        if ( v163 )
        {
          if ( v227 != (_QWORD *)v163 && !v162 )
          {
            std::string::compare(v258, 0xEu, *(const void **)(v163 + 32), *(_QWORD *)(v163 + 40));
            v164 = v260;
          }
          v151 = v164;
          std::_Rb_tree_insert_and_rebalance();
          ++v91[5];
        }
        else
        {
          LODWORD(v227) = (_DWORD)v260;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v173 = v260;
          v174 = (void *)v260[4];
          if ( v258 != v174 )
          {
            operator delete(v174, v260[6] + 1LL);
            v173 = v260;
          }
          operator delete(v173, 0x50u);
        }
        if ( v276 != &v277[8] )
          operator delete(v276, *(_QWORD *)&v277[8] + 1LL);
      }
    }
    v165 = v267;
    v166 = v306;
    *((_BYTE *)v151 + 64) = 0;
    v167 = (_QWORD *)v151[9];
    v151[9] = v165;
    v267 = v167;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v166 -= 6;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v166 != (int *)&v297 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v262 )
    {
      if ( v252[2] != v252[1] )
      {
        v267 = v91;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v252[1] += 16LL;
        goto LABEL_186;
      }
    }
    else
    {
      v168 = operator new(0x18u);
      *(_QWORD *)(v168 + 16) = 0;
      v252 = (_QWORD *)v168;
      *(_OWORD *)v168 = 0;
    }
    v267 = v91;
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
LABEL_186:
    ++v250;
    v267 = v91;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v262 = 2;
LABEL_60:
    head = next_head();
    v35 = head;
    if ( head == -1 )
      break;
    if ( v268 )
    {
      *(_QWORD *)&v269 = 0;
      qfree();
      if ( v250 >= 0x3E8 || v35 >= v244 )
        goto LABEL_64;
    }
    else if ( head >= v244 || v250 >= 0x3E8 )
    {
      goto LABEL_64;
    }
  }
  if ( v268 )
  {
    *(_QWORD *)&v269 = 0;
    qfree();
  }
LABEL_64:
  LOBYTE(v276) = 0;
  *(_QWORD *)v277 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v276) = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v36,
    "start_address",
    v37,
    v38,
    v39,
    v40,
    (int)v227,
    (int)v233,
    (__int64)&s2[8]);
  *(_OWORD *)v277 = (unsigned __int64)v36;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v270, v310, v41, v42, v43, v44, v228, v234, (__int64)s1b);
  v277[16] = 0;
  *(_QWORD *)&v278 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v277[16] = 3;
  v45 = (_QWORD *)operator new(0x20u);
  v46 = v45 + 2;
  v47 = v45;
  v48 = (unsigned __int64)v45;
  v49 = v271;
  *v45 = v45 + 2;
  if ( v270 == v272 )
  {
    v209 = v49 + 1;
    if ( (unsigned int)(v49 + 1) >= 8 )
    {
      v220 = (unsigned __int64)(v45 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v45[2] = v272[0];
      *(_QWORD *)((char *)v46 + v209 - 8) = *(_QWORD *)((char *)&v272[-1] + v209);
      v221 = (_DWORD)v46 - v220;
      v222 = (char *)((char *)v272 - ((char *)v46 - v220));
      v223 = (v209 + v221) & 0xFFFFFFF8;
      if ( v223 >= 8 )
      {
        v224 = v223 & 0xFFFFFFF8;
        v225 = 0;
        do
        {
          v226 = v225;
          v225 += 8;
          *(_QWORD *)(v220 + v226) = *(_QWORD *)&v222[v226];
        }
        while ( v225 < v224 );
      }
    }
    else if ( (v209 & 4) != 0 )
    {
      *((_DWORD *)v45 + 4) = v272[0];
      *(_DWORD *)((char *)v46 + v209 - 4) = *(_DWORD *)((char *)&v271 + v209 + 4);
    }
    else if ( (_DWORD)v49 != -1 )
    {
      *((_BYTE *)v45 + 16) = v272[0];
      if ( (v209 & 2) != 0 )
        *(_WORD *)((char *)v46 + v209 - 2) = *(_WORD *)((char *)&v271 + v209 + 6);
    }
  }
  else
  {
    *v45 = v270;
    v45[2] = v272[0];
  }
  v47[1] = v49;
  v270 = v272;
  LOBYTE(v272[0]) = 0;
  v271 = 0;
  v278 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v297,
    (const __m128i *)&v276,
    2,
    1);
  v299 = 0;
  v279 = 0;
  *(_QWORD *)&v280 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v279 = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v50,
    "end_address",
    v51,
    v52,
    v53,
    v54,
    (int)&v278,
    v235,
    (__int64)&v276);
  v280 = (unsigned __int64)v50;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v273, v311, v55, v56, v57, v58, v229, v236, (__int64)s1c);
  v281 = 0;
  *(_QWORD *)&v282 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v281 = 3;
  v59 = (_QWORD *)operator new(0x20u);
  v60 = v59 + 2;
  v61 = v59;
  v62 = (unsigned __int64)v59;
  v63 = v274;
  *v59 = v59 + 2;
  if ( v273 == v275 )
  {
    v210 = v63 + 1;
    if ( (unsigned int)(v63 + 1) >= 8 )
    {
      v213 = (unsigned __int64)(v59 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v59[2] = v275[0];
      *(_QWORD *)((char *)v60 + v210 - 8) = *(_QWORD *)((char *)&v275[-1] + v210);
      v214 = (_DWORD)v60 - v213;
      v215 = (char *)((char *)v275 - ((char *)v60 - v213));
      v216 = (v210 + v214) & 0xFFFFFFF8;
      if ( v216 >= 8 )
      {
        v217 = v216 & 0xFFFFFFF8;
        v218 = 0;
        do
        {
          v219 = v218;
          v218 += 8;
          *(_QWORD *)(v213 + v219) = *(_QWORD *)&v215[v219];
        }
        while ( v218 < v217 );
      }
    }
    else if ( (v210 & 4) != 0 )
    {
      *((_DWORD *)v59 + 4) = v275[0];
      *(_DWORD *)((char *)v60 + v210 - 4) = *(_DWORD *)((char *)&v274 + v210 + 4);
    }
    else if ( (_DWORD)v63 != -1 )
    {
      *((_BYTE *)v59 + 16) = v275[0];
      if ( (v210 & 2) != 0 )
        *(_WORD *)((char *)v60 + v210 - 2) = *(_WORD *)((char *)&v274 + v210 + 6);
    }
  }
  else
  {
    *v59 = v273;
    v59[2] = v275[0];
  }
  v61[1] = v63;
  v273 = v275;
  v274 = 0;
  LOBYTE(v275[0]) = 0;
  v282 = v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v300,
    (const __m128i *)&v279,
    2,
    1);
  v301 = 0;
  v283 = 0;
  *(_QWORD *)&v284 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v283 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "name_count", v65, v66, v67, v68, v230, (int)&v282, (__int64)s1);
  v284 = (unsigned __int64)v64;
  if ( v262 == 2 )
    v69 = (__int64)(v252[1] - *v252) >> 4;
  else
    v69 = v262 != 0;
  v285 = 6;
  v286 = v69;
  v287 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v302,
    (const __m128i *)&v283,
    2,
    1);
  v303 = 0;
  v288 = 0;
  *(_QWORD *)&v289 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v288 = 3;
  v70 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v70, "truncated", v71, v72, v73, v74, v231, v237, (__int64)s1a);
  v290 = 4;
  v292 = 0;
  v289 = (unsigned __int64)v70;
  v291 = v250 >= 0x3E8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v304,
    (const __m128i *)&v288,
    2,
    1);
  v305 = 0;
  LOBYTE(v293) = 0;
  *(_QWORD *)s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v293) = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "names", v76, v77, v78, v79, v232, v238, (__int64)s1d);
  *(_OWORD *)s2 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v306,
    (const __m128i *)&v293,
    2,
    1);
  v307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v80 = v308;
  do
  {
    v80 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v80 != (char *)&v297 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v273 != v275 )
    operator delete(v273, v275[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v270 != v272 )
    operator delete(v270, v272[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

