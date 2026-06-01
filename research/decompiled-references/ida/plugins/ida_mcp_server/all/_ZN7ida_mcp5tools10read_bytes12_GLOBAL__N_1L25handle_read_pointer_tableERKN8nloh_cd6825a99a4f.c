_QWORD *__fastcall ida_mcp::tools::read_bytes::`anonymous namespace'::handle_read_pointer_table(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v7; // rbp
  char *v8; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v9; // rbp
  char *v10; // rax
  std::runtime_error *v11; // rbx
  char *v12; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v13; // rbx
  _BYTE *v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rbp
  _QWORD *v17; // r15
  size_t v18; // r13
  const void *v19; // rdi
  _QWORD *v20; // r14
  size_t i; // rbx
  size_t v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  size_t v25; // rbx
  size_t v26; // rdx
  int v27; // eax
  __int64 v28; // r13
  char v29; // al
  char *v30; // rbx
  int *v31; // rax
  int *v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // r14
  size_t v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // r13
  int v39; // ebx
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // rbp
  size_t v43; // rdx
  int v44; // eax
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // r12
  size_t v47; // rax
  int v48; // eax
  char *v49; // r14
  size_t v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // r12
  size_t v54; // rax
  std::runtime_error *v55; // rbx
  size_t v56; // rax
  size_t v57; // r12
  size_t v58; // rbp
  char *v59; // rax
  unsigned __int8 v60; // bl
  __int64 v61; // rax
  __int64 v62; // rax
  size_t v63; // rax
  unsigned int v64; // r13d
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rcx
  size_t v69; // rsi
  __int64 v70; // rax
  size_t v71; // rax
  unsigned int v72; // r14d
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  _QWORD *v76; // rcx
  size_t v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  char *v80; // r13
  __int64 *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  char v86; // al
  __m128i si128; // xmm0
  __int64 v88; // rax
  int *v89; // r14
  char v90; // r13
  __int64 v91; // rbx
  char *v92; // rbp
  char *v93; // r12
  size_t v94; // rdx
  int v95; // eax
  unsigned __int64 v96; // r13
  unsigned __int64 v97; // rbx
  size_t v98; // rdx
  int v99; // eax
  _QWORD *v100; // rax
  const void *v101; // r14
  char *v102; // rbx
  char *insert_hint_unique_pos; // rax
  __int64 v104; // rdx
  char v105; // si
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _QWORD *v111; // rax
  _QWORD *v112; // rdi
  _QWORD *v113; // r12
  __int64 v114; // rdx
  char *v115; // r13
  __int64 v116; // r14
  size_t v117; // rdx
  int v118; // eax
  unsigned __int64 v119; // rbp
  unsigned __int64 v120; // r14
  size_t v121; // rdx
  int v122; // eax
  _QWORD *v123; // r14
  __int64 v124; // rax
  __int64 v125; // rax
  char *v126; // rax
  __int64 v127; // rdx
  char v128; // si
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  _QWORD *v134; // rax
  _QWORD *v135; // rdi
  _QWORD *v136; // r12
  __int64 v137; // rdx
  _QWORD *v138; // r13
  __int64 v139; // r14
  size_t v140; // rdx
  int v141; // eax
  unsigned __int64 v142; // rbp
  unsigned __int64 v143; // r14
  size_t v144; // rdx
  int v145; // eax
  __int64 v146; // r14
  __int64 v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rdx
  char v150; // si
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 *v153; // rbx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  _QWORD *v162; // rax
  _QWORD *v163; // rcx
  _QWORD *v164; // rdx
  __int128 v165; // xmm0
  __int64 v166; // rsi
  __int64 *v167; // rbx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 *v173; // rbx
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v178; // rbx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __m128i *v183; // rbx
  __int64 v184; // rax
  char v185; // si
  __int64 v186; // rdx
  __int64 v187; // rax
  char v188; // si
  __int64 v189; // rdx
  __int64 qword; // rax
  _QWORD *v192; // rax
  _QWORD *v193; // rax
  unsigned int v194; // edi
  unsigned int v195; // edi
  __int64 v196; // rax
  unsigned __int64 v197; // rcx
  char *v198; // rax
  char *v199; // r13
  unsigned int v200; // r14d
  unsigned int v201; // r14d
  unsigned int v202; // eax
  __int64 v203; // rdx
  unsigned __int64 v204; // rcx
  char *v205; // rax
  char *v206; // rsi
  unsigned int v207; // r13d
  unsigned int v208; // r13d
  unsigned int v209; // eax
  __int64 v210; // rdx
  void *v211; // rdi
  void *v212; // rdi
  void *v213; // rdi
  unsigned int v214; // r10d
  unsigned int v215; // r10d
  unsigned __int64 v216; // r8
  char *v217; // rcx
  char *v218; // r9
  unsigned int v219; // edx
  unsigned int v220; // ecx
  __int64 v221; // rdi
  unsigned __int64 v222; // r8
  char *v223; // rcx
  char *v224; // r9
  unsigned int v225; // edx
  unsigned int v226; // ecx
  __int64 v227; // rdi
  unsigned __int64 v228; // r8
  unsigned int v229; // ecx
  __int64 v230; // rsi
  unsigned __int64 v231; // r8
  unsigned int v232; // ecx
  __int64 v233; // rsi
  unsigned int v234; // edi
  unsigned __int64 v235; // r8
  char *v236; // r9
  unsigned int v237; // eax
  unsigned int v238; // ecx
  __int64 v239; // rdi
  char *v240; // rax
  char *v241; // rax
  int v242; // [rsp+0h] [rbp-438h]
  int v243; // [rsp+0h] [rbp-438h]
  int v244; // [rsp+0h] [rbp-438h]
  int v245; // [rsp+0h] [rbp-438h]
  int v246; // [rsp+0h] [rbp-438h]
  int v247; // [rsp+0h] [rbp-438h]
  int v248; // [rsp+0h] [rbp-438h]
  char *v249; // [rsp+8h] [rbp-430h]
  char *v250; // [rsp+8h] [rbp-430h]
  int v251; // [rsp+8h] [rbp-430h]
  int v252; // [rsp+8h] [rbp-430h]
  int v253; // [rsp+8h] [rbp-430h]
  int v254; // [rsp+8h] [rbp-430h]
  __int64 v255; // [rsp+10h] [rbp-428h]
  __int64 v256; // [rsp+10h] [rbp-428h]
  __int64 v257; // [rsp+10h] [rbp-428h]
  __int64 v258; // [rsp+10h] [rbp-428h]
  __int64 v259; // [rsp+10h] [rbp-428h]
  __int64 v260; // [rsp+10h] [rbp-428h]
  __int64 v261; // [rsp+10h] [rbp-428h]
  int v262[2]; // [rsp+18h] [rbp-420h]
  char v263; // [rsp+47h] [rbp-3F1h]
  _QWORD *v264; // [rsp+58h] [rbp-3E0h]
  int v265[2]; // [rsp+60h] [rbp-3D8h]
  const void *v266; // [rsp+60h] [rbp-3D8h]
  _QWORD *v267; // [rsp+68h] [rbp-3D0h]
  char *v268; // [rsp+70h] [rbp-3C8h]
  const void *v269; // [rsp+70h] [rbp-3C8h]
  __int64 func; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v271; // [rsp+C0h] [rbp-378h]
  __int64 v273; // [rsp+E8h] [rbp-350h]
  int v274; // [rsp+F8h] [rbp-340h]
  char v275; // [rsp+FCh] [rbp-33Ch]
  char v276; // [rsp+FDh] [rbp-33Bh]
  __int64 v277; // [rsp+120h] [rbp-318h] BYREF
  char *v278; // [rsp+128h] [rbp-310h]
  int v279[4]; // [rsp+130h] [rbp-308h] BYREF
  char *haystack; // [rsp+140h] [rbp-2F8h]
  __int128 v281; // [rsp+148h] [rbp-2F0h]
  void *v282; // [rsp+160h] [rbp-2D8h]
  size_t v283; // [rsp+168h] [rbp-2D0h]
  _QWORD v284[2]; // [rsp+170h] [rbp-2C8h] BYREF
  void *v285; // [rsp+180h] [rbp-2B8h]
  size_t v286; // [rsp+188h] [rbp-2B0h]
  _QWORD v287[2]; // [rsp+190h] [rbp-2A8h] BYREF
  char v288; // [rsp+1A0h] [rbp-298h] BYREF
  __int128 v289; // [rsp+1A8h] [rbp-290h]
  char v290; // [rsp+1B8h] [rbp-280h]
  __int64 v291; // [rsp+1C0h] [rbp-278h]
  __int64 v292; // [rsp+1C8h] [rbp-270h]
  void *v293; // [rsp+1D0h] [rbp-268h] BYREF
  __int128 v294; // [rsp+1D8h] [rbp-260h] BYREF
  char v295; // [rsp+1E8h] [rbp-250h]
  __int128 v296; // [rsp+1F0h] [rbp-248h]
  char v297; // [rsp+200h] [rbp-238h] BYREF
  int v298[4]; // [rsp+208h] [rbp-230h]
  char v299; // [rsp+218h] [rbp-220h]
  char v300[16]; // [rsp+220h] [rbp-218h]
  char v301; // [rsp+230h] [rbp-208h] BYREF
  __int128 v302; // [rsp+238h] [rbp-200h]
  char v303; // [rsp+248h] [rbp-1F0h]
  __int64 v304; // [rsp+250h] [rbp-1E8h]
  __int64 v305; // [rsp+258h] [rbp-1E0h]
  char v306; // [rsp+260h] [rbp-1D8h] BYREF
  __int128 v307; // [rsp+268h] [rbp-1D0h]
  __m128i v308; // [rsp+278h] [rbp-1C0h]
  __int64 v309; // [rsp+288h] [rbp-1B0h]
  void *s2; // [rsp+290h] [rbp-1A8h] BYREF
  _BYTE n[21]; // [rsp+298h] [rbp-1A0h] BYREF
  _BOOL8 v312; // [rsp+2B0h] [rbp-188h]
  __int64 v313; // [rsp+2B8h] [rbp-180h]
  __m128i v314; // [rsp+2C0h] [rbp-178h] BYREF
  _QWORD s1[3]; // [rsp+2D0h] [rbp-168h] BYREF
  __int64 v316; // [rsp+2E8h] [rbp-150h]
  int v317[4]; // [rsp+2F0h] [rbp-148h] BYREF
  __int64 v318; // [rsp+300h] [rbp-138h]
  int v319[4]; // [rsp+308h] [rbp-130h] BYREF
  __int64 v320; // [rsp+318h] [rbp-120h]
  int v321[4]; // [rsp+320h] [rbp-118h] BYREF
  __int64 v322; // [rsp+330h] [rbp-108h]
  int v323[4]; // [rsp+338h] [rbp-100h] BYREF
  __int64 v324; // [rsp+348h] [rbp-F0h]
  int v325[6]; // [rsp+350h] [rbp-E8h] BYREF
  _BYTE v326[8]; // [rsp+368h] [rbp-D0h]
  char v327[32]; // [rsp+370h] [rbp-C8h] BYREF
  char v328[32]; // [rsp+390h] [rbp-A8h] BYREF
  char v329[32]; // [rsp+3B0h] [rbp-88h] BYREF
  char v330[40]; // [rsp+3D0h] [rbp-68h] BYREF
  unsigned __int64 v331; // [rsp+3F8h] [rbp-40h]

  v331 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, v242, a2, v255);
  v14 = s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v249 )
    {
      case 0:
        v8 = "null";
        break;
      case 1:
        v8 = "object";
        break;
      case 2:
        v8 = (char *)"array";
        break;
      case 3:
        v8 = "string";
        break;
      case 4:
        v8 = "boolean";
        break;
      case 8:
        v8 = "binary";
        break;
      case 9:
        v8 = "discarded";
        break;
      default:
        v8 = "number";
        break;
    }
    haystack = v8;
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
  v15 = *(_QWORD *)(a2 + 8);
  v16 = *(_QWORD **)(v15 + 16);
  v17 = (_QWORD *)(v15 + 8);
  if ( !v16 )
    goto LABEL_315;
  v18 = *(_QWORD *)n;
  v19 = (const void *)v16[4];
  v20 = (_QWORD *)(v15 + 8);
  for ( i = v16[5]; ; i = v16[5] )
  {
    v22 = i;
    if ( v18 <= i )
      v22 = v18;
    if ( !v22 || (v23 = memcmp(v19, v14, v22)) == 0 )
    {
      v24 = i - v18;
      if ( v24 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v24 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v23 = v24;
    }
    if ( v23 < 0 )
      break;
LABEL_4:
    v20 = v16;
    v16 = (_QWORD *)v16[2];
    if ( !v16 )
      goto LABEL_15;
LABEL_5:
    v19 = (const void *)v16[4];
  }
  v16 = (_QWORD *)v16[3];
  if ( v16 )
    goto LABEL_5;
LABEL_15:
  if ( v17 != v20 )
  {
    v25 = v20[5];
    v26 = v25;
    if ( v18 <= v25 )
      v26 = v18;
    if ( v26 && (v27 = memcmp(v14, (const void *)v20[4], v26)) != 0 )
    {
LABEL_23:
      if ( v27 < 0 )
        v20 = v17;
    }
    else
    {
      v28 = v18 - v25;
      if ( v28 <= 0x7FFFFFFF )
      {
        if ( v28 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v27 = v28;
          goto LABEL_23;
        }
LABEL_315:
        v20 = v17;
      }
    }
  }
  if ( v14 != &n[8] )
    operator delete(v14, *(_QWORD *)&n[8] + 1LL);
  n[8] = 0;
  v29 = *((_BYTE *)v20 + 64);
  s2 = &n[8];
  *(_QWORD *)n = 0;
  if ( v29 != 3 )
  {
    v7 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v20 + 64) )
    {
      case 0:
        v12 = "null";
        break;
      case 1:
        v12 = "object";
        break;
      case 2:
        v12 = (char *)"array";
        break;
      case 3:
        v12 = "string";
        break;
      case 4:
        v12 = "boolean";
        break;
      case 8:
        v12 = "binary";
        break;
      case 9:
        v12 = "discarded";
        break;
      default:
        v12 = "number";
        break;
    }
    haystack = v12;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v7,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v30 = (char *)s2;
  if ( *(_QWORD *)n > 2u && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v30 = (char *)s2 + 2;
  v31 = __errno_location();
  *v31 = 0;
  v32 = v31;
  v273 = __isoc23_strtoull();
  if ( v30 == haystack || *haystack || v273 == -1 && *v32 == 34 )
  {
    if ( s2 != &n[8] )
      operator delete(s2, *(_QWORD *)&n[8] + 1LL);
    v55 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v55, "Invalid address format");
    __cxa_throw(
      v55,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( s2 != &n[8] )
    operator delete(s2, *(_QWORD *)&n[8] + 1LL);
  if ( *v249 != 1 )
  {
    v9 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v249 )
    {
      case 0:
        v10 = "null";
        break;
      case 1:
        v10 = "object";
        break;
      case 2:
        v10 = (char *)"array";
        break;
      case 3:
        v10 = "string";
        break;
      case 4:
        v10 = "boolean";
        break;
      case 8:
        v10 = "binary";
        break;
      case 9:
        v10 = "discarded";
        break;
      default:
        v10 = "number";
        break;
    }
    haystack = v10;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v9,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v33 = *((_QWORD *)v249 + 1);
  v34 = *(_QWORD *)(v33 + 16);
  if ( v34 )
  {
    v35 = v33 + 8;
    do
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)(v34 + 40);
        if ( !v38 )
          break;
        v36 = 5;
        if ( v38 <= 5 )
          v36 = *(_QWORD *)(v34 + 40);
        v37 = memcmp(*(const void **)(v34 + 32), "count", v36);
        if ( v37 || (v37 = v38 - 5, (__int64)(v38 - 5) <= 0x7FFFFFFF) )
        {
          if ( v37 < 0 )
            break;
        }
        v35 = v34;
        v34 = *(_QWORD *)(v34 + 16);
        if ( !v34 )
          goto LABEL_46;
      }
      v34 = *(_QWORD *)(v34 + 24);
    }
    while ( v34 );
LABEL_46:
    if ( v35 == v33 + 8 )
    {
      v271 = 8;
      v39 = 8;
      goto LABEL_48;
    }
    v39 = 8;
    v271 = 8;
    if ( std::string::compare(*(void **)(v35 + 32), *(_QWORD *)(v35 + 40), "count") <= 0 )
    {
      LODWORD(haystack) = 0;
      nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
      v39 = 0;
      v271 = 0;
      if ( *v249 == 1 )
      {
        v33 = *((_QWORD *)v249 + 1);
        goto LABEL_48;
      }
    }
    else
    {
LABEL_48:
      v40 = *(_QWORD *)(v33 + 16);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v33 + 16);
        v249 = (char *)(v33 + 8);
        v42 = v33 + 8;
        do
        {
          while ( 1 )
          {
            v45 = *(_QWORD *)(v41 + 40);
            if ( !v45 )
              break;
            v43 = 12;
            if ( v45 <= 0xC )
              v43 = *(_QWORD *)(v41 + 40);
            v44 = memcmp(*(const void **)(v41 + 32), "pointer_size", v43);
            if ( v44 || (v44 = v45 - 12, (__int64)(v45 - 12) <= 0x7FFFFFFF) )
            {
              if ( v44 < 0 )
                break;
            }
            v42 = v41;
            v41 = *(_QWORD *)(v41 + 16);
            if ( !v41 )
              goto LABEL_58;
          }
          v41 = *(_QWORD *)(v41 + 24);
        }
        while ( v41 );
LABEL_58:
        if ( v249 != (char *)v42 )
        {
          v46 = *(_QWORD *)(v42 + 40);
          if ( !v46 )
            goto LABEL_65;
          v47 = 12;
          if ( v46 <= 0xC )
            v47 = *(_QWORD *)(v42 + 40);
          v48 = memcmp(*(const void **)(v42 + 32), "pointer_size", v47);
          if ( v48 || (v48 = v46 - 12, (__int64)(v46 - 12) <= 0x7FFFFFFF) )
          {
            if ( v48 <= 0 )
            {
LABEL_65:
              v49 = v249;
              strcpy((char *)s1, "pointer_size");
              while ( 1 )
              {
                v52 = *(_QWORD *)(v40 + 40);
                if ( !v52 )
                  goto LABEL_73;
                v50 = 12;
                if ( v52 <= 0xC )
                  v50 = *(_QWORD *)(v40 + 40);
                if ( ((v51 = memcmp(*(const void **)(v40 + 32), s1, v50)) != 0
                   || (v51 = v52 - 12, (__int64)(v52 - 12) <= 0x7FFFFFFF))
                  && v51 < 0 )
                {
LABEL_73:
                  v40 = *(_QWORD *)(v40 + 24);
                  if ( !v40 )
                  {
LABEL_74:
                    if ( v249 != v49 )
                    {
                      v53 = *((_QWORD *)v49 + 5);
                      if ( v53 )
                      {
                        v54 = 12;
                        if ( v53 <= 0xC )
                          v54 = *((_QWORD *)v49 + 5);
                        memcmp(s1, *((const void **)v49 + 4), v54);
                      }
                    }
                    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
                    v11 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
                    std::runtime_error::runtime_error(v11, "Pointer size must be 4 or 8");
                    __cxa_throw(
                      v11,
                      (struct type_info *)&`typeinfo for'std::runtime_error,
                      (void (*)(void *))&std::runtime_error::~runtime_error);
                  }
                }
                else
                {
                  v49 = (char *)v40;
                  v40 = *(_QWORD *)(v40 + 16);
                  if ( !v40 )
                    goto LABEL_74;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v271 = 8;
    v39 = 8;
  }
  v274 = (unsigned __int8)getinf_flag() == 0 ? 4 : 8;
  if ( !getinf_buf() )
    v330[0] = 0;
  v281 = 0;
  v56 = strlen(v330);
  v57 = v56 + 1;
  v58 = v56;
  haystack = (char *)qvector_reserve();
  *(_QWORD *)&v281 = v57;
  memmove(haystack, v330, v58);
  haystack[v58] = 0;
  v276 = getinf_flag();
  if ( v276 && (_QWORD)v281 )
  {
    v59 = strstr(haystack, "ARM");
    if ( !v59 || v59 - haystack == -1 )
    {
      v240 = strstr(haystack, "arm");
      if ( !v240 || v240 - haystack == -1 )
      {
        v241 = strstr(haystack, "AARCH64");
        if ( v241 )
          v276 = v241 - haystack != -1;
        else
          v276 = 0;
      }
    }
LABEL_93:
    *(_QWORD *)&v281 = 0;
    qfree();
  }
  else
  {
    v276 = 0;
    if ( haystack )
      goto LABEL_93;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)v262 = 0;
  v263 = 0;
  v264 = nullptr;
  v256 = v273;
  if ( v39 )
  {
    while ( (unsigned __int8)is_loaded() )
    {
      if ( v274 == 8 )
      {
        qword = get_qword();
        if ( v276 )
        {
          if ( (unsigned __int8)(HIBYTE(qword) - 1) <= 0xFDu && (qword & 0xFFFFFFFFFFFFFFLL) != 0 )
            v275 = v276;
          else
            v275 = 0;
        }
        else
        {
          v275 = 0;
        }
      }
      else
      {
        v275 = 0;
        get_dword();
      }
      v60 = is_loaded();
      haystack = nullptr;
      v281 = 0;
      if ( v60 )
      {
        get_ea_name();
        func = get_func();
      }
      else
      {
        func = 0;
      }
      v288 = 0;
      *(_QWORD *)&v289 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v288 = 3;
      v61 = operator new(0x20u);
      *(_BYTE *)(v61 + 20) = 120;
      *(_QWORD *)v61 = v61 + 16;
      *(_DWORD *)(v61 + 16) = 1701080681;
      *(_QWORD *)(v61 + 8) = 5;
      *(_BYTE *)(v61 + 21) = 0;
      v290 = 6;
      v291 = *(_QWORD *)v262;
      v292 = 0;
      v289 = (unsigned __int64)v61;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v314,
        (const __m128i *)&v288);
      s1[0] = 0;
      LOBYTE(v293) = 0;
      *(_QWORD *)&v294 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v293) = 3;
      v62 = operator new(0x20u);
      strcpy((char *)(v62 + 16), "address");
      *(_QWORD *)v62 = v62 + 16;
      *(_QWORD *)(v62 + 8) = 7;
      v294 = (unsigned __int64)v62;
      qsnprintf();
      v282 = v284;
      v63 = strlen((const char *)v325);
      *(_QWORD *)v279 = v63;
      v64 = v63;
      if ( v63 > 0xF )
      {
        v192 = (_QWORD *)std::string::_M_create();
        v282 = v192;
        v284[0] = *(_QWORD *)v279;
        goto LABEL_232;
      }
      if ( v63 == 1 )
      {
        LOBYTE(v284[0]) = v325[0];
LABEL_103:
        v65 = v284;
      }
      else
      {
        if ( !v63 )
          goto LABEL_103;
        v192 = v284;
LABEL_232:
        if ( v64 >= 8 )
        {
          *v192 = *(_QWORD *)v325;
          *(_QWORD *)((char *)v192 + v64 - 8) = *(_QWORD *)((char *)&v325[-2] + v64);
          v204 = (unsigned __int64)(v192 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v205 = (char *)v192 - v204;
          v206 = (char *)((char *)v325 - v205);
          v207 = ((_DWORD)v205 + v64) & 0xFFFFFFF8;
          if ( v207 >= 8 )
          {
            v208 = v207 & 0xFFFFFFF8;
            v209 = 0;
            do
            {
              v210 = v209;
              v209 += 8;
              *(_QWORD *)(v204 + v210) = *(_QWORD *)&v206[v210];
            }
            while ( v209 < v208 );
          }
        }
        else if ( (v64 & 4) != 0 )
        {
          *(_DWORD *)v192 = v325[0];
          *(_DWORD *)((char *)v192 + v64 - 4) = *(int *)((char *)&v325[-1] + v64);
        }
        else if ( v64 )
        {
          *(_BYTE *)v192 = v325[0];
          if ( (v64 & 2) != 0 )
            *(_WORD *)((char *)v192 + v64 - 2) = *(_WORD *)((char *)&v324 + v64 + 6);
        }
        v63 = *(_QWORD *)v279;
        v65 = v282;
      }
      v283 = v63;
      *((_BYTE *)v65 + v63) = 0;
      v295 = 0;
      *(_QWORD *)&v296 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v295 = 3;
      v66 = (_QWORD *)operator new(0x20u);
      v67 = v282;
      v68 = v66 + 2;
      v69 = v283;
      *v66 = v66 + 2;
      if ( v67 == v284 )
      {
        v194 = v69 + 1;
        if ( (unsigned int)(v69 + 1) >= 8 )
        {
          v66[2] = v284[0];
          *(_QWORD *)((char *)v68 + v194 - 8) = *(_QWORD *)((char *)&v284[-1] + v194);
          v222 = (unsigned __int64)(v66 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v223 = (char *)v68 - v222;
          v224 = (char *)((char *)v284 - v223);
          if ( (((_DWORD)v223 + v194) & 0xFFFFFFF8) >= 8 )
          {
            v225 = ((_DWORD)v223 + v194) & 0xFFFFFFF8;
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
        else if ( (v194 & 4) != 0 )
        {
          *((_DWORD *)v66 + 4) = v284[0];
          *(_DWORD *)((char *)v68 + v194 - 4) = *(_DWORD *)((char *)&v283 + v194 + 4);
        }
        else if ( (_DWORD)v69 != -1 )
        {
          *((_BYTE *)v66 + 16) = v284[0];
          if ( (v194 & 2) != 0 )
            *(_WORD *)((char *)v68 + v194 - 2) = *(_WORD *)((char *)&v283 + v194 + 6);
        }
      }
      else
      {
        *v66 = v67;
        v66[2] = v284[0];
      }
      v66[1] = v69;
      v282 = v284;
      v283 = 0;
      LOBYTE(v284[0]) = 0;
      v296 = (unsigned __int64)v66;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &s1[1],
        (const __m128i *)&v293);
      v316 = 0;
      v297 = 0;
      *(_QWORD *)v298 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v297 = 3;
      v70 = operator new(0x20u);
      *(_BYTE *)(v70 + 20) = 101;
      *(_QWORD *)v70 = v70 + 16;
      *(_DWORD *)(v70 + 16) = 1970037110;
      *(_QWORD *)(v70 + 8) = 5;
      *(_BYTE *)(v70 + 21) = 0;
      *(_OWORD *)v298 = (unsigned __int64)v70;
      qsnprintf();
      v285 = v287;
      v71 = strlen(v327);
      *(_QWORD *)v279 = v71;
      v72 = v71;
      if ( v71 > 0xF )
      {
        v193 = (_QWORD *)std::string::_M_create();
        v285 = v193;
        v287[0] = *(_QWORD *)v279;
        goto LABEL_239;
      }
      if ( v71 == 1 )
      {
        LOBYTE(v287[0]) = v327[0];
LABEL_109:
        v73 = v287;
      }
      else
      {
        if ( !v71 )
          goto LABEL_109;
        v193 = v287;
LABEL_239:
        if ( v72 >= 8 )
        {
          *v193 = *(_QWORD *)v327;
          *(_QWORD *)((char *)v193 + v72 - 8) = *(_QWORD *)&v326[v72];
          v197 = (unsigned __int64)(v193 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v198 = (char *)v193 - v197;
          v199 = (char *)(v327 - v198);
          v200 = ((_DWORD)v198 + v72) & 0xFFFFFFF8;
          if ( v200 >= 8 )
          {
            v201 = v200 & 0xFFFFFFF8;
            v202 = 0;
            do
            {
              v203 = v202;
              v202 += 8;
              *(_QWORD *)(v197 + v203) = *(_QWORD *)&v199[v203];
            }
            while ( v202 < v201 );
          }
        }
        else if ( (v72 & 4) != 0 )
        {
          *(_DWORD *)v193 = *(_DWORD *)v327;
          *(_DWORD *)((char *)v193 + v72 - 4) = *(_DWORD *)&v326[v72 + 4];
        }
        else if ( v72 )
        {
          *(_BYTE *)v193 = v327[0];
          if ( (v72 & 2) != 0 )
            *(_WORD *)((char *)v193 + v72 - 2) = *(_WORD *)&v326[v72 + 6];
        }
        v71 = *(_QWORD *)v279;
        v73 = v285;
      }
      v286 = v71;
      *((_BYTE *)v73 + v71) = 0;
      v299 = 0;
      *(_QWORD *)v300 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v299 = 3;
      v74 = (_QWORD *)operator new(0x20u);
      v75 = v285;
      v76 = v74 + 2;
      v77 = v286;
      *v74 = v74 + 2;
      if ( v75 == v287 )
      {
        v195 = v77 + 1;
        if ( (unsigned int)(v77 + 1) >= 8 )
        {
          v74[2] = v287[0];
          *(_QWORD *)((char *)v76 + v195 - 8) = *(_QWORD *)((char *)&v287[-1] + v195);
          v216 = (unsigned __int64)(v74 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v217 = (char *)v76 - v216;
          v218 = (char *)((char *)v287 - v217);
          if ( (((_DWORD)v217 + v195) & 0xFFFFFFF8) >= 8 )
          {
            v219 = ((_DWORD)v217 + v195) & 0xFFFFFFF8;
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
        else if ( (v195 & 4) != 0 )
        {
          *((_DWORD *)v74 + 4) = v287[0];
          *(_DWORD *)((char *)v76 + v195 - 4) = *(_DWORD *)((char *)&v286 + v195 + 4);
        }
        else if ( (_DWORD)v77 != -1 )
        {
          *((_BYTE *)v74 + 16) = v287[0];
          if ( (v195 & 2) != 0 )
            *(_WORD *)((char *)v76 + v195 - 2) = *(_WORD *)((char *)&v286 + v195 + 6);
        }
      }
      else
      {
        *v74 = v75;
        v74[2] = v287[0];
      }
      v74[1] = v77;
      v285 = v287;
      v286 = 0;
      LOBYTE(v287[0]) = 0;
      *(_OWORD *)v300 = (unsigned __int64)v74;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v317,
        (const __m128i *)&v297);
      v318 = 0;
      v301 = 0;
      *(_QWORD *)&v302 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v301 = 3;
      v78 = operator new(0x20u);
      *(_DWORD *)(v78 + 16) = 1768710518;
      *(_QWORD *)v78 = v78 + 16;
      *(_BYTE *)(v78 + 20) = 100;
      *(_QWORD *)(v78 + 8) = 5;
      *(_BYTE *)(v78 + 21) = 0;
      v303 = 4;
      v304 = v60;
      v305 = 0;
      v302 = (unsigned __int64)v78;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v319,
        (const __m128i *)&v301);
      v320 = 0;
      v306 = 0;
      *(_QWORD *)&v307 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v306 = 3;
      v79 = operator new(0x20u);
      *(_QWORD *)v79 = v79 + 16;
      strcpy((char *)(v79 + 16), "name");
      *(_QWORD *)(v79 + 8) = 4;
      v307 = (unsigned __int64)v79;
      if ( (unsigned __int64)v281 <= 1 )
      {
        v81 = nullptr;
        v86 = 0;
      }
      else
      {
        memset(v279, 0, sizeof(v279));
        v80 = haystack;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v81 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v81, v80, v82, v83, v84, v85, v243, (int)v325, v256);
        v86 = 3;
      }
      LOBYTE(v279[0]) = v86;
      *(_QWORD *)&v279[2] = v81;
      si128 = _mm_load_si128((const __m128i *)v279);
      v309 = 0;
      v308 = si128;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v321,
        (const __m128i *)&v306);
      v322 = 0;
      LOBYTE(s2) = 0;
      *(_QWORD *)n = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(s2) = 3;
      v88 = operator new(0x20u);
      *(_QWORD *)v88 = v88 + 16;
      v89 = v323;
      strcpy((char *)(v88 + 16), "is_function");
      *(_QWORD *)(v88 + 8) = 11;
      n[16] = 4;
      v313 = 0;
      *(_OWORD *)n = (unsigned __int64)v88;
      v312 = func != 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v323,
        (const __m128i *)&s2);
      v324 = 0;
      LOBYTE(v277) = 0;
      v278 = nullptr;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v277,
        &v314,
        6);
      v90 = v277;
      v249 = v278;
      do
      {
        v89 -= 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( &n[16] != (_BYTE *)v89 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v285 != v287 )
        operator delete(v285, v287[0] + 1LL);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v282 != v284 )
        operator delete(v282, v284[0] + 1LL);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v275 )
      {
        s2 = &n[8];
        *(_QWORD *)&v279[2] = 1;
        strcpy(&n[8], "pac_detected");
        *(_QWORD *)n = 12;
        if ( !v90 )
        {
          v196 = operator new(0x30u);
          v93 = (char *)(v196 + 8);
          *(_DWORD *)(v196 + 8) = 0;
          *(_QWORD *)(v196 + 16) = 0;
          v92 = (char *)(v196 + 8);
          *(_QWORD *)(v196 + 24) = v196 + 8;
          *(_QWORD *)(v196 + 32) = v196 + 8;
          *(_QWORD *)(v196 + 40) = 0;
          v267 = (_QWORD *)v196;
          v249 = (char *)v196;
          goto LABEL_140;
        }
        if ( v90 != 1 )
        {
          v13 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            v13,
            305);
          std::string::_M_dispose();
          __cxa_throw(
            v13,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        v91 = *((_QWORD *)v249 + 2);
        v92 = v249 + 8;
        v267 = v249;
        v93 = v249 + 8;
        if ( !v91 )
          goto LABEL_140;
        do
        {
          while ( 1 )
          {
            v96 = *(_QWORD *)(v91 + 40);
            if ( !v96 )
              break;
            v94 = 12;
            if ( v96 <= 0xC )
              v94 = *(_QWORD *)(v91 + 40);
            v95 = memcmp(*(const void **)(v91 + 32), &n[8], v94);
            if ( v95 || (v95 = v96 - 12, (__int64)(v96 - 12) <= 0x7FFFFFFF) )
            {
              if ( v95 < 0 )
                break;
            }
            v93 = (char *)v91;
            v91 = *(_QWORD *)(v91 + 16);
            if ( !v91 )
              goto LABEL_133;
          }
          v91 = *(_QWORD *)(v91 + 24);
        }
        while ( v91 );
LABEL_133:
        if ( v93 == v92 )
          goto LABEL_140;
        v97 = *((_QWORD *)v93 + 5);
        if ( v97 )
        {
          v98 = 12;
          if ( v97 <= 0xC )
            v98 = *((_QWORD *)v93 + 5);
          if ( (v99 = memcmp(&n[8], *((const void **)v93 + 4), v98)) == 0
            && (v99 = 12 - v97, (__int64)(12 - v97) < (__int64)0xFFFFFFFF80000000LL)
            || v99 < 0 )
          {
LABEL_140:
            v100 = (_QWORD *)operator new(0x50u);
            v101 = v100 + 6;
            v102 = (char *)v100;
            v100[4] = v100 + 6;
            v100[6] = *(_QWORD *)&n[8];
            s2 = &n[8];
            *(_QWORD *)((char *)v100 + 53) = *(_QWORD *)&n[13];
            v100[5] = 12;
            v100[8] = 0;
            v100[9] = 0;
            *(_QWORD *)n = 0;
            n[8] = 0;
            insert_hint_unique_pos = (char *)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                               v267,
                                               v93,
                                               v100 + 6,
                                               0xCu);
            v93 = insert_hint_unique_pos;
            if ( v104 )
            {
              if ( !insert_hint_unique_pos && v92 != (char *)v104 )
                std::string::compare(v101, 0xCu, *(const void **)(v104 + 32), *(_QWORD *)(v104 + 40));
              v93 = v102;
              std::_Rb_tree_insert_and_rebalance();
              ++*((_QWORD *)v249 + 5);
            }
            else
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v213 = *((void **)v102 + 4);
              if ( v101 != v213 )
                operator delete(v213, *((_QWORD *)v102 + 6) + 1LL);
              operator delete(v102, 0x50u);
            }
            if ( s2 != &n[8] )
              operator delete(s2, *(_QWORD *)&n[8] + 1LL);
          }
        }
        v105 = v93[64];
        v106 = *((_QWORD *)v93 + 9);
        v93[64] = 4;
        LOBYTE(v279[0]) = v105;
        *((_QWORD *)v93 + 9) = *(_QWORD *)&v279[2];
        *(_QWORD *)&v279[2] = v106;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        qsnprintf();
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&s2,
          v328,
          v107,
          v108,
          v109,
          v110,
          v243,
          (int)v249,
          v256);
        memset(v279, 0, sizeof(v279));
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v111 = (_QWORD *)operator new(0x20u);
        v112 = v111 + 2;
        v113 = v111;
        v114 = *(_QWORD *)n;
        *v111 = v111 + 2;
        if ( s2 == &n[8] )
        {
          v214 = v114 + 1;
          if ( (unsigned int)(v114 + 1) >= 8 )
          {
            v228 = (unsigned __int64)(v111 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v111[2] = *(_QWORD *)&n[8];
            *(_QWORD *)((char *)v112 + v214 - 8) = *(_QWORD *)&n[v214];
            if ( ((v214 + (_DWORD)v112 - (_DWORD)v228) & 0xFFFFFFF8) >= 8 )
            {
              v229 = 0;
              do
              {
                v230 = v229;
                v229 += 8;
                *(_QWORD *)(v228 + v230) = *(_QWORD *)(&n[8] - ((char *)v112 - v228) + v230);
              }
              while ( v229 < ((v214 + (_DWORD)v112 - (_DWORD)v228) & 0xFFFFFFF8) );
            }
          }
          else if ( (v214 & 4) != 0 )
          {
            *((_DWORD *)v111 + 4) = *(_DWORD *)&n[8];
            *(_DWORD *)((char *)v112 + v214 - 4) = *(_DWORD *)&n[v214 + 4];
          }
          else if ( (_DWORD)v114 != -1 )
          {
            *((_BYTE *)v111 + 16) = n[8];
            if ( (v214 & 2) != 0 )
              *(_WORD *)((char *)v112 + v214 - 2) = *(_WORD *)&n[v214 + 6];
          }
        }
        else
        {
          *v111 = s2;
          v111[2] = *(_QWORD *)&n[8];
        }
        v111[1] = v114;
        v115 = v92;
        strcpy((char *)s1, "original_value");
        n[8] = 0;
        v116 = *((_QWORD *)v250 + 2);
        s2 = &n[8];
        *(_QWORD *)n = 0;
        v314.m128i_i64[0] = (__int64)s1;
        v314.m128i_i64[1] = 14;
        if ( !v116 )
          goto LABEL_166;
        v268 = v92;
        do
        {
          while ( 1 )
          {
            v119 = *(_QWORD *)(v116 + 40);
            if ( !v119 )
              break;
            v117 = 14;
            if ( v119 <= 0xE )
              v117 = *(_QWORD *)(v116 + 40);
            v118 = memcmp(*(const void **)(v116 + 32), s1, v117);
            if ( v118 || (v118 = v119 - 14, (__int64)(v119 - 14) <= 0x7FFFFFFF) )
            {
              if ( v118 < 0 )
                break;
            }
            v115 = (char *)v116;
            v116 = *(_QWORD *)(v116 + 16);
            if ( !v116 )
              goto LABEL_159;
          }
          v116 = *(_QWORD *)(v116 + 24);
        }
        while ( v116 );
LABEL_159:
        v92 = v268;
        if ( v115 == v268 )
          goto LABEL_166;
        v120 = *((_QWORD *)v115 + 5);
        if ( v120 )
        {
          v121 = 14;
          if ( v120 <= 0xE )
            v121 = *((_QWORD *)v115 + 5);
          if ( (v122 = memcmp(s1, *((const void **)v115 + 4), v121)) == 0
            && (v122 = 14 - v120, (__int64)(14 - v120) < (__int64)0xFFFFFFFF80000000LL)
            || v122 < 0 )
          {
LABEL_166:
            v123 = (_QWORD *)operator new(0x50u);
            v123[4] = v123 + 6;
            v124 = s1[0];
            v123[5] = 14;
            v123[6] = v124;
            v125 = *(_QWORD *)((char *)s1 + 7);
            v123[8] = 0;
            *(_QWORD *)((char *)v123 + 55) = v125;
            v123[9] = 0;
            v314.m128i_i64[0] = (__int64)s1;
            v314.m128i_i64[1] = 0;
            LOBYTE(s1[0]) = 0;
            v269 = v123 + 6;
            v126 = (char *)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                             v267,
                             v115,
                             v123 + 6,
                             0xEu);
            v115 = v126;
            if ( v127 )
            {
              if ( !v126 && v92 != (char *)v127 )
                std::string::compare(v269, 0xEu, *(const void **)(v127 + 32), *(_QWORD *)(v127 + 40));
              v115 = (char *)v123;
              std::_Rb_tree_insert_and_rebalance();
              ++*((_QWORD *)v250 + 5);
            }
            else
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v212 = (void *)v123[4];
              if ( v269 != v212 )
                operator delete(v212, v123[6] + 1LL);
              operator delete(v123, 0x50u);
            }
            if ( (_QWORD *)v314.m128i_i64[0] != s1 )
              operator delete((void *)v314.m128i_i64[0], s1[0] + 1LL);
          }
        }
        v128 = v115[64];
        v129 = *((_QWORD *)v115 + 9);
        v115[64] = 3;
        *((_QWORD *)v115 + 9) = v113;
        LOBYTE(v279[0]) = v128;
        *(_QWORD *)&v279[2] = v129;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( s2 != &n[8] )
          operator delete(s2, *(_QWORD *)&n[8] + 1LL);
        qsnprintf();
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&s2,
          v329,
          v130,
          v131,
          v132,
          v133,
          v244,
          (int)v250,
          v257);
        memset(v279, 0, sizeof(v279));
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v134 = (_QWORD *)operator new(0x20u);
        v135 = v134 + 2;
        v136 = v134;
        v137 = *(_QWORD *)n;
        *v134 = v134 + 2;
        if ( s2 == &n[8] )
        {
          v215 = v137 + 1;
          if ( (unsigned int)(v137 + 1) >= 8 )
          {
            v231 = (unsigned __int64)(v134 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v134[2] = *(_QWORD *)&n[8];
            *(_QWORD *)((char *)v135 + v215 - 8) = *(_QWORD *)&n[v215];
            if ( ((v215 + (_DWORD)v135 - (_DWORD)v231) & 0xFFFFFFF8) >= 8 )
            {
              v232 = 0;
              do
              {
                v233 = v232;
                v232 += 8;
                *(_QWORD *)(v231 + v233) = *(_QWORD *)(&n[8] - ((char *)v135 - v231) + v233);
              }
              while ( v232 < ((v215 + (_DWORD)v135 - (_DWORD)v231) & 0xFFFFFFF8) );
            }
          }
          else if ( (v215 & 4) != 0 )
          {
            *((_DWORD *)v134 + 4) = *(_DWORD *)&n[8];
            *(_DWORD *)((char *)v135 + v215 - 4) = *(_DWORD *)&n[v215 + 4];
          }
          else if ( (_DWORD)v137 != -1 )
          {
            *((_BYTE *)v134 + 16) = n[8];
            if ( (v215 & 2) != 0 )
              *(_WORD *)((char *)v135 + v215 - 2) = *(_WORD *)&n[v215 + 6];
          }
        }
        else
        {
          *v134 = s2;
          v134[2] = *(_QWORD *)&n[8];
        }
        n[8] = 0;
        v138 = v92;
        strcpy((char *)s1, "pac_bits");
        v139 = *((_QWORD *)v249 + 2);
        v134[1] = v137;
        s2 = &n[8];
        *(_QWORD *)n = 0;
        v314.m128i_i64[0] = (__int64)s1;
        v314.m128i_i64[1] = 8;
        if ( !v139 )
          goto LABEL_194;
        *(_QWORD *)v265 = v92;
        do
        {
          while ( 1 )
          {
            v142 = *(_QWORD *)(v139 + 40);
            if ( !v142 )
              break;
            v140 = 8;
            if ( v142 <= 8 )
              v140 = *(_QWORD *)(v139 + 40);
            v141 = memcmp(*(const void **)(v139 + 32), s1, v140);
            if ( v141 || (v141 = v142 - 8, (__int64)(v142 - 8) <= 0x7FFFFFFF) )
            {
              if ( v141 < 0 )
                break;
            }
            v138 = (_QWORD *)v139;
            v139 = *(_QWORD *)(v139 + 16);
            if ( !v139 )
              goto LABEL_187;
          }
          v139 = *(_QWORD *)(v139 + 24);
        }
        while ( v139 );
LABEL_187:
        v92 = *(char **)v265;
        if ( v138 == *(_QWORD **)v265 )
          goto LABEL_194;
        v143 = v138[5];
        if ( v143 )
        {
          v144 = 8;
          if ( v143 <= 8 )
            v144 = v138[5];
          if ( (v145 = memcmp(s1, (const void *)v138[4], v144)) == 0
            && (v145 = 8 - v143, (__int64)(8 - v143) < (__int64)0xFFFFFFFF80000000LL)
            || v145 < 0 )
          {
LABEL_194:
            v146 = operator new(0x50u);
            *(_QWORD *)(v146 + 32) = v146 + 48;
            v147 = s1[0];
            *(_QWORD *)(v146 + 40) = 8;
            *(_QWORD *)(v146 + 48) = v147;
            LOBYTE(v147) = s1[1];
            *(_QWORD *)(v146 + 64) = 0;
            *(_BYTE *)(v146 + 56) = v147;
            *(_QWORD *)(v146 + 72) = 0;
            v314.m128i_i64[0] = (__int64)s1;
            v314.m128i_i64[1] = 0;
            LOBYTE(s1[0]) = 0;
            v266 = (const void *)(v146 + 48);
            v148 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                     v267,
                     v138,
                     (const void *)(v146 + 48),
                     8u);
            v138 = v148;
            if ( v149 )
            {
              if ( !v148 && v92 != (char *)v149 )
                std::string::compare(v266, 8u, *(const void **)(v149 + 32), *(_QWORD *)(v149 + 40));
              v138 = (_QWORD *)v146;
              std::_Rb_tree_insert_and_rebalance();
              ++*((_QWORD *)v249 + 5);
            }
            else
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v211 = *(void **)(v146 + 32);
              if ( v266 != v211 )
                operator delete(v211, *(_QWORD *)(v146 + 48) + 1LL);
              operator delete((void *)v146, 0x50u);
            }
            if ( (_QWORD *)v314.m128i_i64[0] != s1 )
              operator delete((void *)v314.m128i_i64[0], s1[0] + 1LL);
          }
        }
        v150 = *((_BYTE *)v138 + 64);
        v151 = v138[9];
        *((_BYTE *)v138 + 64) = 3;
        v138[9] = v136;
        LOBYTE(v279[0]) = v150;
        *(_QWORD *)&v279[2] = v151;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( s2 != &n[8] )
          operator delete(s2, *(_QWORD *)&n[8] + 1LL);
        v90 = 1;
      }
      if ( !v263 )
      {
        v152 = operator new(0x18u);
        *(_QWORD *)(v152 + 16) = 0;
        v264 = (_QWORD *)v152;
        *(_OWORD *)v152 = 0;
        goto LABEL_206;
      }
      if ( v264[1] == v264[2] )
      {
LABEL_206:
        LOBYTE(v277) = v90;
        v278 = v249;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
      }
      else
      {
        LOBYTE(v277) = v90;
        v278 = v249;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v264[1] += 16LL;
      }
      LOBYTE(v277) = v90;
      v278 = v249;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( haystack )
      {
        *(_QWORD *)&v281 = 0;
        qfree();
        if ( ++*(_QWORD *)v262 >= v271 )
          goto LABEL_212;
      }
      else if ( ++*(_QWORD *)v262 >= v271 )
      {
LABEL_212:
        v263 = 2;
        break;
      }
      v263 = 2;
      v256 += v274;
      continue;
    }
  }
  v297 = 0;
  *(_QWORD *)v298 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v297 = 3;
  v153 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v153, "address", v154, v155, v156, v157, v243, (int)v249, v256);
  *(_OWORD *)v298 = (unsigned __int64)v153;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v293, v330, v158, v159, v160, v161, v245, v251, v258);
  v299 = 0;
  *(_QWORD *)v300 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v299 = 3;
  v162 = (_QWORD *)operator new(0x20u);
  v163 = v162 + 2;
  v164 = v162;
  v165 = (unsigned __int64)v162;
  v166 = v294;
  *v162 = v162 + 2;
  if ( v293 == (char *)&v294 + 8 )
  {
    v234 = v166 + 1;
    if ( (unsigned int)(v166 + 1) >= 8 )
    {
      v162[2] = *((_QWORD *)&v294 + 1);
      *(_QWORD *)((char *)v163 + v234 - 8) = *(_QWORD *)((char *)&v294 + v234);
      v235 = (unsigned __int64)(v162 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v236 = (char *)((char *)&v294 + 8 - ((char *)v163 - v235));
      if ( ((v234 + (_DWORD)v163 - (_DWORD)v235) & 0xFFFFFFF8) >= 8 )
      {
        v237 = (v234 + (_DWORD)v163 - v235) & 0xFFFFFFF8;
        v238 = 0;
        do
        {
          v239 = v238;
          v238 += 8;
          *(_QWORD *)(v235 + v239) = *(_QWORD *)&v236[v239];
        }
        while ( v238 < v237 );
      }
    }
    else if ( (v234 & 4) != 0 )
    {
      *((_DWORD *)v162 + 4) = DWORD2(v294);
      *(_DWORD *)((char *)v163 + v234 - 4) = *(_DWORD *)((char *)&v294 + v234 + 4);
    }
    else if ( (_DWORD)v166 != -1 )
    {
      *((_BYTE *)v162 + 16) = BYTE8(v294);
      if ( (v234 & 2) != 0 )
        *(_WORD *)((char *)v163 + v234 - 2) = *(_WORD *)((char *)&v294 + v234 + 6);
    }
  }
  else
  {
    *v162 = v293;
    v162[2] = *((_QWORD *)&v294 + 1);
  }
  v164[1] = v166;
  v293 = (char *)&v294 + 8;
  *(_QWORD *)&v294 = 0;
  BYTE8(v294) = 0;
  *(_OWORD *)v300 = v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v314,
    (const __m128i *)&v297);
  s1[0] = 0;
  v301 = 0;
  *(_QWORD *)&v302 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v301 = 3;
  v167 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v167, "count", v168, v169, v170, v171, v246, v252, v259);
  v302 = (unsigned __int64)v167;
  if ( v263 == 2 )
    v172 = (__int64)(v264[1] - *v264) >> 4;
  else
    v172 = v263 != 0;
  v303 = 6;
  v304 = v172;
  v305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v301);
  v316 = 0;
  v306 = 0;
  *(_QWORD *)&v307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v306 = 3;
  v173 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v173, "pointer_size", v174, v175, v176, v177, v247, v253, v260);
  v308.m128i_i8[0] = 5;
  v308.m128i_i64[1] = v274;
  v309 = 0;
  v307 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v317,
    (const __m128i *)&v306);
  v318 = 0;
  LOBYTE(s2) = 0;
  *(_QWORD *)n = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v178, "pointers", v179, v180, v181, v182, v248, v254, v261);
  *(_OWORD *)n = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v313 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v319,
    (const __m128i *)&s2);
  v320 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v314,
    4);
  v183 = (__m128i *)v321;
  do
  {
    v183 = (__m128i *)((char *)v183 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v183 != &v314 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v293 != (char *)&v294 + 8 )
    operator delete(v293, *((_QWORD *)&v294 + 1) + 1LL);
  if ( v276 )
  {
    *(_QWORD *)&v281 = 1;
    v184 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v185 = *(_BYTE *)v184;
    v186 = *(_QWORD *)(v184 + 8);
    *(_BYTE *)v184 = 4;
    LOBYTE(haystack) = v185;
    *(_QWORD *)(v184 + 8) = v281;
    *(_QWORD *)&v281 = v186;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    *(_QWORD *)&v281 = 1;
    v187 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v188 = *(_BYTE *)v187;
    v189 = *(_QWORD *)(v187 + 8);
    *(_BYTE *)v187 = 4;
    LOBYTE(haystack) = v188;
    *(_QWORD *)(v187 + 8) = v281;
    *(_QWORD *)&v281 = v189;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

