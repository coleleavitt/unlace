_QWORD *__fastcall ida_mcp::tools::instructions::`anonymous namespace'::handle_get_operand_info(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v5; // rax
  std::runtime_error *v6; // rbp
  void *v7; // rax
  void *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  size_t v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  size_t v17; // rax
  int v18; // eax
  char *v19; // r12
  int *v20; // rax
  int *v21; // r13
  std::runtime_error *v22; // rbx
  __int64 v23; // rax
  char *v24; // r15
  char *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // r13
  __int64 *v29; // r12
  size_t v30; // rax
  _QWORD *v31; // rcx
  unsigned int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 v42; // xmm0
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rax
  unsigned int v46; // r14d
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rcx
  size_t v51; // rsi
  __int64 v52; // rax
  __int128 v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int8 v58; // si
  __int64 v59; // rax
  char *v60; // r13
  __int64 v61; // rax
  size_t v62; // rax
  unsigned int v63; // r14d
  char *v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  __int128 v68; // xmm0
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // r13
  unsigned __int64 v78; // rdx
  signed __int64 v79; // r13
  unsigned int v80; // r14d
  unsigned int v81; // r14d
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  unsigned int v86; // edi
  unsigned __int64 v87; // rsi
  char *v88; // rdx
  char *v89; // r13
  unsigned int v90; // eax
  unsigned int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // r8
  char *v96; // rcx
  char *v97; // r9
  unsigned int v98; // edx
  unsigned int v99; // ecx
  __int64 v100; // rdi
  __int64 v101; // r14
  __int64 v102; // r12
  __int64 v103; // r13
  __int64 v104; // rbp
  __int64 v105; // r14
  size_t v106; // rdx
  int v107; // eax
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rbp
  size_t v110; // rax
  int v111; // eax
  __int64 v112; // r14
  size_t v113; // rdx
  int v114; // eax
  unsigned __int64 v115; // rbx
  unsigned __int64 v116; // rbp
  size_t v117; // rax
  int v118; // eax
  unsigned __int8 v119; // al
  signed int v120; // r12d
  __int64 v121; // rbp
  __int64 v122; // rax
  __int64 v123; // rax
  _DWORD *v124; // rax
  unsigned __int64 v125; // rcx
  char *v126; // rax
  char *v127; // r12
  unsigned int v128; // eax
  unsigned int v129; // eax
  unsigned int v130; // edx
  __int64 v131; // rsi
  unsigned int v132; // r9d
  unsigned __int64 v133; // rdi
  char *v134; // r8
  unsigned int v135; // eax
  unsigned int v136; // ecx
  __int64 v137; // r9
  const char *v138; // r13
  __int64 *v139; // r12
  size_t v140; // rax
  _QWORD *v141; // rdx
  unsigned int v142; // r14d
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  __int128 v146; // xmm0
  __int64 v147; // rax
  __int64 v148; // rax
  __int128 v149; // xmm0
  __int64 v150; // rax
  __int64 v151; // rax
  __int128 v152; // xmm0
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  size_t v155; // rax
  unsigned int v156; // r14d
  _QWORD *v157; // rdx
  __int64 v158; // rax
  _QWORD *v159; // rdx
  _QWORD *v160; // rcx
  __int128 v161; // xmm0
  __int64 v162; // rax
  size_t v163; // rsi
  __int64 v164; // rax
  __int64 v165; // rax
  __int128 v166; // xmm0
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  char *v171; // rbp
  unsigned __int64 v172; // rcx
  signed __int64 v173; // r13
  unsigned int v174; // eax
  unsigned int v175; // edx
  __int64 v176; // rsi
  __int64 v177; // rax
  _QWORD *v178; // rax
  unsigned int v179; // edi
  unsigned __int64 v180; // rcx
  char *v181; // rax
  char *v182; // rdi
  unsigned int v183; // eax
  unsigned int v184; // eax
  unsigned int v185; // edx
  __int64 v186; // rsi
  unsigned __int64 v187; // r8
  unsigned __int64 v188; // rax
  char *v189; // r9
  unsigned int v190; // eax
  unsigned int v191; // eax
  unsigned int v192; // edx
  __int64 v193; // rdi
  int v194; // [rsp+0h] [rbp-3D8h]
  __int64 v195; // [rsp+8h] [rbp-3D0h]
  __int64 v196; // [rsp+8h] [rbp-3D0h]
  int v197; // [rsp+10h] [rbp-3C8h]
  int v198; // [rsp+18h] [rbp-3C0h]
  __int64 v199; // [rsp+20h] [rbp-3B8h]
  __int128 *v200; // [rsp+28h] [rbp-3B0h]
  __m128i *v201; // [rsp+38h] [rbp-3A0h]
  int v202; // [rsp+40h] [rbp-398h]
  int v203; // [rsp+48h] [rbp-390h]
  int v204; // [rsp+50h] [rbp-388h]
  char v205; // [rsp+58h] [rbp-380h]
  __int64 v206; // [rsp+60h] [rbp-378h]
  int v207; // [rsp+68h] [rbp-370h]
  void **v208; // [rsp+70h] [rbp-368h]
  _QWORD *v209; // [rsp+78h] [rbp-360h]
  __int64 v211; // [rsp+B0h] [rbp-328h]
  __m128i v212; // [rsp+E0h] [rbp-2F8h] BYREF
  void *v213; // [rsp+F0h] [rbp-2E8h]
  size_t v214; // [rsp+F8h] [rbp-2E0h]
  _QWORD v215[2]; // [rsp+100h] [rbp-2D8h] BYREF
  void *v216; // [rsp+110h] [rbp-2C8h] BYREF
  size_t v217; // [rsp+118h] [rbp-2C0h]
  _QWORD v218[2]; // [rsp+120h] [rbp-2B8h] BYREF
  char v219; // [rsp+130h] [rbp-2A8h] BYREF
  __int128 v220; // [rsp+138h] [rbp-2A0h] BYREF
  char v221; // [rsp+148h] [rbp-290h]
  __int64 v222; // [rsp+150h] [rbp-288h]
  __int64 v223; // [rsp+158h] [rbp-280h]
  char v224; // [rsp+160h] [rbp-278h] BYREF
  __int128 v225; // [rsp+168h] [rbp-270h] BYREF
  char v226; // [rsp+178h] [rbp-260h]
  __int128 v227; // [rsp+180h] [rbp-258h] BYREF
  char v228; // [rsp+190h] [rbp-248h] BYREF
  __int128 v229; // [rsp+198h] [rbp-240h] BYREF
  char v230; // [rsp+1A8h] [rbp-230h]
  __int64 v231; // [rsp+1B0h] [rbp-228h]
  __int64 v232; // [rsp+1B8h] [rbp-220h]
  void *v233; // [rsp+1C0h] [rbp-218h] BYREF
  __int128 v234; // [rsp+1C8h] [rbp-210h] BYREF
  char v235; // [rsp+1D8h] [rbp-200h]
  __int64 v236; // [rsp+1E0h] [rbp-1F8h]
  __int64 v237; // [rsp+1E8h] [rbp-1F0h]
  char v238; // [rsp+1F0h] [rbp-1E8h] BYREF
  __int128 v239; // [rsp+1F8h] [rbp-1E0h] BYREF
  char v240; // [rsp+208h] [rbp-1D0h]
  __int128 v241; // [rsp+210h] [rbp-1C8h]
  char v242; // [rsp+220h] [rbp-1B8h] BYREF
  __int128 v243; // [rsp+228h] [rbp-1B0h] BYREF
  char v244; // [rsp+238h] [rbp-1A0h]
  __int128 v245; // [rsp+240h] [rbp-198h] BYREF
  void *v246; // [rsp+250h] [rbp-188h] BYREF
  __int128 s2; // [rsp+258h] [rbp-180h] BYREF
  char v248; // [rsp+268h] [rbp-170h]
  __int64 v249; // [rsp+270h] [rbp-168h]
  __int64 v250; // [rsp+278h] [rbp-160h]
  _QWORD v251[2]; // [rsp+280h] [rbp-158h] BYREF
  _QWORD s1[3]; // [rsp+290h] [rbp-148h] BYREF
  __int64 v253; // [rsp+2A8h] [rbp-130h]
  _QWORD v254[2]; // [rsp+2B0h] [rbp-128h] BYREF
  __int64 v255; // [rsp+2C0h] [rbp-118h]
  _QWORD v256[2]; // [rsp+2C8h] [rbp-110h] BYREF
  __int64 v257; // [rsp+2D8h] [rbp-100h]
  _QWORD v258[2]; // [rsp+2E0h] [rbp-F8h] BYREF
  __int64 v259; // [rsp+2F0h] [rbp-E8h]
  _QWORD v260[2]; // [rsp+2F8h] [rbp-E0h] BYREF
  __int64 v261; // [rsp+308h] [rbp-D0h]
  _QWORD v262[2]; // [rsp+310h] [rbp-C8h] BYREF
  __int64 v263; // [rsp+320h] [rbp-B8h]
  char v264[8]; // [rsp+328h] [rbp-B0h] BYREF
  char v265[24]; // [rsp+330h] [rbp-A8h] BYREF
  _BYTE v266[8]; // [rsp+348h] [rbp-90h]
  char s[24]; // [rsp+350h] [rbp-88h] BYREF
  _BYTE v268[8]; // [rsp+368h] [rbp-70h]
  char v269[40]; // [rsp+370h] [rbp-68h] BYREF
  unsigned __int64 v270; // [rsp+398h] [rbp-40h]

  v270 = __readfsqword(0x28u);
  v246 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x734B1);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = v9 + 8;
  if ( v10 )
  {
    v12 = v9 + 8;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v10 + 40);
        if ( !v15 )
          break;
        v13 = 7;
        if ( v15 <= 7 )
          v13 = *(_QWORD *)(v10 + 40);
        v14 = memcmp(*(const void **)(v10 + 32), (char *)&s2 + 8, v13);
        if ( v14 || (v14 = v15 - 7, (__int64)(v15 - 7) <= 0x7FFFFFFF) )
        {
          if ( v14 < 0 )
            break;
        }
        v12 = v10;
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_12;
      }
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v10 );
LABEL_12:
    if ( v11 != v12 )
    {
      v16 = *(_QWORD *)(v12 + 40);
      if ( v16 )
      {
        v17 = 7;
        if ( v16 <= 7 )
          v17 = *(_QWORD *)(v12 + 40);
        v18 = memcmp((char *)&s2 + 8, *(const void **)(v12 + 32), v17);
        if ( v18 || (v18 = 7 - v16, (__int64)(7 - v16) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v18 >= 0 )
            v11 = v12;
        }
      }
      else
      {
        v11 = v12;
      }
    }
  }
  v246 = (char *)&s2 + 8;
  v208 = &v246;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v11 + 64) != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v11 + 64) )
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
    v212.m128i_i64[0] = (__int64)v5;
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
  v19 = (char *)v246;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v246 == 48 && (*((_BYTE *)v246 + 1) & 0xDF) == 0x58 )
    v19 = (char *)v246 + 2;
  v20 = __errno_location();
  *v20 = 0;
  v21 = v20;
  v201 = &v212;
  v211 = __isoc23_strtoull();
  if ( v19 == (char *)v212.m128i_i64[0] || *(_BYTE *)v212.m128i_i64[0] || *v21 == 34 && v211 == -1 )
  {
    if ( v246 != (char *)&s2 + 8 )
      operator delete(v246, *((_QWORD *)&s2 + 1) + 1LL);
    v22 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v22, "Invalid address format");
    __cxa_throw(
      v22,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v246 != (char *)&s2 + 8 )
    operator delete(v246, *((_QWORD *)&s2 + 1) + 1LL);
  v23 = operator new(0x168u);
  *(_OWORD *)v23 = -1;
  v24 = (char *)v23;
  *(_QWORD *)(v23 + 16) = -1;
  *(_QWORD *)(v23 + 24) = 0;
  *(_QWORD *)(v23 + 32) = 0;
  *(_QWORD *)(v23 + 40) = 0;
  *(_QWORD *)(v23 + 64) = 0;
  *(_QWORD *)(v23 + 72) = 0;
  *(_QWORD *)(v23 + 80) = 0;
  *(_QWORD *)(v23 + 104) = 0;
  *(_QWORD *)(v23 + 112) = 0;
  *(_QWORD *)(v23 + 120) = 0;
  *(_QWORD *)(v23 + 144) = 0;
  *(_QWORD *)(v23 + 152) = 0;
  *(_QWORD *)(v23 + 160) = 0;
  *(_QWORD *)(v23 + 184) = 0;
  *(_QWORD *)(v23 + 192) = 0;
  *(_QWORD *)(v23 + 200) = 0;
  *(_QWORD *)(v23 + 224) = 0;
  *(_QWORD *)(v23 + 232) = 0;
  *(_QWORD *)(v23 + 240) = 0;
  *(_QWORD *)(v23 + 264) = 0;
  *(_QWORD *)(v23 + 272) = 0;
  *(_QWORD *)(v23 + 280) = 0;
  *(_QWORD *)(v23 + 304) = 0;
  *(_QWORD *)(v23 + 312) = 0;
  *(_OWORD *)(v23 + 48) = 0;
  *(_OWORD *)(v23 + 88) = 0;
  *(_OWORD *)(v23 + 128) = 0;
  *(_OWORD *)(v23 + 168) = 0;
  *(_OWORD *)(v23 + 208) = 0;
  *(_OWORD *)(v23 + 248) = 0;
  *(_OWORD *)(v23 + 288) = 0;
  *(_QWORD *)(v23 + 320) = 0;
  *(_QWORD *)(v23 + 344) = 0;
  *(_DWORD *)(v23 + 352) = 0;
  *(_OWORD *)(v23 + 328) = 0;
  if ( (int)decode_insn() <= 0 )
    JUMPOUT(0x7380A);
  if ( *(_BYTE *)a2 == 1 )
  {
    v101 = *(_QWORD *)(a2 + 8);
    v102 = *(_QWORD *)(v101 + 16);
    if ( v102 )
    {
      v103 = v101 + 8;
      v104 = *(_QWORD *)(v101 + 16);
      v105 = v101 + 8;
      do
      {
        while ( 1 )
        {
          v108 = *(_QWORD *)(v104 + 40);
          if ( !v108 )
            break;
          v106 = 13;
          if ( v108 <= 0xD )
            v106 = *(_QWORD *)(v104 + 40);
          v107 = memcmp(*(const void **)(v104 + 32), "operand_index", v106);
          if ( v107 || (v107 = v108 - 13, (__int64)(v108 - 13) <= 0x7FFFFFFF) )
          {
            if ( v107 < 0 )
              break;
          }
          v105 = v104;
          v104 = *(_QWORD *)(v104 + 16);
          if ( !v104 )
            goto LABEL_122;
        }
        v104 = *(_QWORD *)(v104 + 24);
      }
      while ( v104 );
LABEL_122:
      if ( v103 != v105 )
      {
        v109 = *(_QWORD *)(v105 + 40);
        if ( !v109 )
          goto LABEL_129;
        v110 = 13;
        if ( v109 <= 0xD )
          v110 = *(_QWORD *)(v105 + 40);
        v111 = memcmp(*(const void **)(v105 + 32), "operand_index", v110);
        if ( v111 || (v111 = v109 - 13, (__int64)(v109 - 13) <= 0x7FFFFFFF) )
        {
          if ( v111 <= 0 )
          {
LABEL_129:
            v112 = v103;
            strcpy((char *)s1, "operand_index");
            do
            {
              while ( 1 )
              {
                v115 = *(_QWORD *)(v102 + 40);
                if ( !v115 )
                  break;
                v113 = 13;
                if ( v115 <= 0xD )
                  v113 = *(_QWORD *)(v102 + 40);
                v114 = memcmp(*(const void **)(v102 + 32), s1, v113);
                if ( v114 || (v114 = v115 - 13, (__int64)(v115 - 13) <= 0x7FFFFFFF) )
                {
                  if ( v114 < 0 )
                    break;
                }
                v112 = v102;
                v102 = *(_QWORD *)(v102 + 16);
                if ( !v102 )
                  goto LABEL_138;
              }
              v102 = *(_QWORD *)(v102 + 24);
            }
            while ( v102 );
LABEL_138:
            if ( v103 != v112 )
            {
              v116 = *(_QWORD *)(v112 + 40);
              if ( v116 )
              {
                v117 = 13;
                if ( v116 <= 0xD )
                  v117 = *(_QWORD *)(v112 + 40);
                v118 = memcmp(s1, *(const void **)(v112 + 32), v117);
                if ( v118 || (v118 = 13 - v116, (__int64)(13 - v116) >= (__int64)0xFFFFFFFF80000000LL) )
                {
                  if ( v118 >= 0 )
                    v103 = v112;
                }
              }
              else
              {
                v103 = v112;
              }
            }
            v119 = *(_BYTE *)(v103 + 64);
            if ( v119 != 6 )
            {
              if ( v119 > 6u )
              {
                if ( v119 == 7 )
                {
                  v120 = (int)*(double *)(v103 + 72);
LABEL_151:
                  if ( (unsigned int)v120 > 7 )
                  {
                    v6 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
                    std::runtime_error::runtime_error(v6, "Invalid operand index");
                    __cxa_throw(
                      v6,
                      (struct type_info *)&`typeinfo for'std::runtime_error,
                      (void (*)(void *))&std::runtime_error::~runtime_error);
                  }
LABEL_152:
                  v121 = v120;
                  if ( !v24[40 * v120 + 41] )
                  {
                    v7 = __cxa_allocate_exception(0x10u);
                    v246 = (char *)&s2 + 8;
                    v8 = v7;
                    *(_QWORD *)&s2 = 0;
                    BYTE8(s2) = 0;
                    std::string::__resize_and_overwrite<std::to_string(int)::{lambda(char *,unsigned long)#1}>(
                      (__int64)&v246,
                      1,
                      0,
                      1,
                      v120);
                    std::string::insert();
                    std::string::basic_string();
                    std::runtime_error::runtime_error();
                    std::string::_M_dispose();
                    std::string::_M_dispose();
                    __cxa_throw(
                      v8,
                      (struct type_info *)&`typeinfo for'std::runtime_error,
                      (void (*)(void *))&std::runtime_error::~runtime_error);
                  }
                  v219 = 0;
                  *(_QWORD *)&v220 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v219 = 3;
                  v122 = operator new(0x20u);
                  *(_DWORD *)(v122 + 16) = 1701080681;
                  *(_QWORD *)v122 = v122 + 16;
                  *(_BYTE *)(v122 + 20) = 120;
                  *(_QWORD *)(v122 + 8) = 5;
                  *(_BYTE *)(v122 + 21) = 0;
                  v221 = 5;
                  v222 = v120;
                  v223 = 0;
                  v220 = (unsigned __int64)v122;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v251,
                    (const __m128i *)&v219);
                  s1[0] = 0;
                  v224 = 0;
                  *(_QWORD *)&v225 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v224 = 3;
                  v123 = operator new(0x20u);
                  *(_QWORD *)v123 = v123 + 16;
                  strcpy((char *)(v123 + 16), "type");
                  *(_QWORD *)(v123 + 8) = 4;
                  v225 = (unsigned __int64)v123;
                  switch ( v24[40 * v120 + 41] )
                  {
                    case 0:
                      v138 = "void";
                      break;
                    case 1:
                      v138 = "register";
                      break;
                    case 2:
                      v138 = "memory";
                      break;
                    case 3:
                      v138 = "phrase";
                      break;
                    case 4:
                      v138 = "displacement";
                      break;
                    case 5:
                      v138 = "immediate";
                      break;
                    case 6:
                      v138 = "far_address";
                      break;
                    case 7:
                      v138 = "near_address";
                      break;
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                      v138 = "processor_specific";
                      break;
                    default:
                      v138 = "unknown";
                      break;
                  }
                  v226 = 0;
                  *(_QWORD *)&v227 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v226 = 3;
                  v139 = (__int64 *)operator new(0x20u);
                  *v139 = (__int64)(v139 + 2);
                  v140 = strlen(v138);
                  v141 = v139 + 2;
                  v212.m128i_i64[0] = v140;
                  v142 = v140;
                  if ( v140 > 0xF )
                  {
                    v177 = std::string::_M_create();
                    *v139 = v177;
                    v141 = (_QWORD *)v177;
                    v139[2] = v212.m128i_i64[0];
                  }
                  if ( v142 >= 8 )
                  {
                    *v141 = *(_QWORD *)v138;
                    *(_QWORD *)((char *)v141 + v142 - 8) = *(_QWORD *)&v138[v142 - 8];
                    v172 = (unsigned __int64)(v141 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                    v173 = v138 - ((const char *)v141 - v172);
                    if ( ((v142 + (_DWORD)v141 - (_DWORD)v172) & 0xFFFFFFF8) >= 8 )
                    {
                      v174 = (v142 + (_DWORD)v141 - v172) & 0xFFFFFFF8;
                      v175 = 0;
                      do
                      {
                        v176 = v175;
                        v175 += 8;
                        *(_QWORD *)(v172 + v176) = *(_QWORD *)(v173 + v176);
                      }
                      while ( v175 < v174 );
                    }
                  }
                  else if ( (v142 & 4) != 0 )
                  {
                    *(_DWORD *)v141 = *(_DWORD *)v138;
                    *(_DWORD *)((char *)v141 + v142 - 4) = *(_DWORD *)&v138[v142 - 4];
                  }
                  else if ( v142 )
                  {
                    *(_BYTE *)v141 = *v138;
                    if ( (v142 & 2) != 0 )
                      *(_WORD *)((char *)v141 + v142 - 2) = *(_WORD *)&v138[v142 - 2];
                  }
                  v143 = v212.m128i_i64[0];
                  v144 = *v139;
                  v139[1] = v212.m128i_i64[0];
                  *(_BYTE *)(v144 + v143) = 0;
                  v227 = (unsigned __int64)v139;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    &s1[1],
                    (const __m128i *)&v224);
                  v253 = 0;
                  v228 = 0;
                  *(_QWORD *)&v229 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v228 = 3;
                  v145 = operator new(0x20u);
                  v146 = (unsigned __int64)v145;
                  *(_BYTE *)(v145 + 20) = 101;
                  *(_QWORD *)v145 = v145 + 16;
                  *(_DWORD *)(v145 + 16) = 1887007844;
                  *(_QWORD *)(v145 + 8) = 5;
                  *(_BYTE *)(v145 + 21) = 0;
                  v147 = (unsigned __int8)v24[40 * v121 + 45];
                  v230 = 5;
                  v232 = 0;
                  v231 = v147;
                  v229 = v146;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v254,
                    (const __m128i *)&v228);
                  v255 = 0;
                  LOBYTE(v233) = 0;
                  *(_QWORD *)&v234 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  LOBYTE(v233) = 3;
                  v148 = operator new(0x20u);
                  *(_BYTE *)(v148 + 18) = 103;
                  v149 = (unsigned __int64)v148;
                  *(_QWORD *)v148 = v148 + 16;
                  *(_WORD *)(v148 + 16) = 25970;
                  *(_QWORD *)(v148 + 8) = 3;
                  *(_BYTE *)(v148 + 19) = 0;
                  v150 = *(unsigned __int16 *)&v24[40 * v121 + 46];
                  v235 = 5;
                  v237 = 0;
                  v236 = v150;
                  v234 = v149;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v256,
                    (const __m128i *)&v233);
                  v257 = 0;
                  v238 = 0;
                  *(_QWORD *)&v239 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v238 = 3;
                  v151 = operator new(0x20u);
                  v152 = (unsigned __int64)v151;
                  *(_BYTE *)(v151 + 20) = 101;
                  *(_QWORD *)v151 = v151 + 16;
                  *(_DWORD *)(v151 + 16) = 1970037110;
                  *(_QWORD *)(v151 + 8) = 5;
                  *(_BYTE *)(v151 + 21) = 0;
                  v153 = *(_QWORD *)&v24[40 * v121 + 48];
                  v240 = 6;
                  v241 = v153;
                  v239 = v152;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                    v258,
                    (const __m128i *)&v238);
                  v259 = 0;
                  v242 = 0;
                  *(_QWORD *)&v243 = 0;
                  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                  v242 = 3;
                  v154 = operator new(0x20u);
                  *(_QWORD *)v154 = v154 + 16;
                  strcpy((char *)(v154 + 16), "addr");
                  *(_QWORD *)(v154 + 8) = 4;
                  v243 = (unsigned __int64)v154;
                  qsnprintf();
                  v216 = v218;
                  v155 = strlen(v265);
                  v212.m128i_i64[0] = v155;
                  v156 = v155;
                  if ( v155 > 0xF )
                  {
                    v178 = (_QWORD *)std::string::_M_create();
                    v216 = v178;
                    v218[0] = v212.m128i_i64[0];
                  }
                  else
                  {
                    if ( v155 == 1 )
                    {
                      LOBYTE(v218[0]) = v265[0];
                      goto LABEL_198;
                    }
                    if ( !v155 )
                    {
LABEL_198:
                      v157 = v218;
LABEL_199:
                      v217 = v155;
                      *((_BYTE *)v157 + v155) = 0;
                      v244 = 0;
                      *(_QWORD *)&v245 = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      v244 = 3;
                      v158 = operator new(0x20u);
                      v159 = v216;
                      v160 = (_QWORD *)v158;
                      v161 = (unsigned __int64)v158;
                      v162 = v158 + 16;
                      *v160 = v162;
                      v163 = v217;
                      if ( v159 == v218 )
                      {
                        v179 = v217 + 1;
                        if ( (unsigned int)(v217 + 1) >= 8 )
                        {
                          v160[2] = v218[0];
                          *(_QWORD *)(v162 + v179 - 8) = *(_QWORD *)((char *)&v218[-1] + v179);
                          v187 = (unsigned __int64)(v160 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                          v188 = v162 - v187;
                          v189 = (char *)v218 - v188;
                          v190 = (v179 + v188) & 0xFFFFFFF8;
                          if ( v190 >= 8 )
                          {
                            v191 = v190 & 0xFFFFFFF8;
                            v192 = 0;
                            do
                            {
                              v193 = v192;
                              v192 += 8;
                              *(_QWORD *)(v187 + v193) = *(_QWORD *)&v189[v193];
                            }
                            while ( v192 < v191 );
                          }
                        }
                        else if ( (v179 & 4) != 0 )
                        {
                          *((_DWORD *)v160 + 4) = v218[0];
                          *(_DWORD *)(v162 + v179 - 4) = *(_DWORD *)((char *)&v217 + v179 + 4);
                        }
                        else if ( (_DWORD)v217 != -1 )
                        {
                          *((_BYTE *)v160 + 16) = v218[0];
                          if ( (v179 & 2) != 0 )
                            *(_WORD *)(v162 + v179 - 2) = *(_WORD *)((char *)&v217 + v179 + 6);
                        }
                      }
                      else
                      {
                        v164 = v218[0];
                        *v160 = v159;
                        v160[2] = v164;
                      }
                      v160[1] = v163;
                      v216 = v218;
                      v217 = 0;
                      LOBYTE(v218[0]) = 0;
                      v245 = v161;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        v260,
                        (const __m128i *)&v242);
                      v261 = 0;
                      LOBYTE(v246) = 0;
                      *(_QWORD *)&s2 = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      LOBYTE(v246) = 3;
                      v165 = operator new(0x20u);
                      v166 = (unsigned __int64)v165;
                      *(_BYTE *)(v165 + 20) = 115;
                      *(_QWORD *)v165 = v165 + 16;
                      *(_DWORD *)(v165 + 16) = 1734437990;
                      *(_QWORD *)(v165 + 8) = 5;
                      *(_BYTE *)(v165 + 21) = 0;
                      v167 = (unsigned __int8)v24[40 * v121 + 44];
                      v248 = 6;
                      v250 = 0;
                      v249 = v167;
                      s2 = v166;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        v262,
                        (const __m128i *)&v246);
                      v263 = 0;
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                        a1,
                        (__int64)v251,
                        7,
                        v168,
                        v169,
                        v170,
                        v194,
                        (__int64)&v216,
                        v197,
                        v198,
                        v199,
                        (int)&v239,
                        (__int64)&v243,
                        (int)&v212,
                        (int)&v234,
                        (int)&v245,
                        (int)&v220,
                        (char)&v225,
                        (__int64)&v227,
                        (int)&v229,
                        (__int64)&v246);
                      v171 = v264;
                      do
                      {
                        v171 -= 24;
                        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      }
                      while ( v171 != (char *)v251 );
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                      if ( v216 != v218 )
                        operator delete(v216, v218[0] + 1LL);
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
                      goto LABEL_73;
                    }
                    v178 = v218;
                  }
                  if ( v156 >= 8 )
                  {
                    *v178 = *(_QWORD *)v265;
                    *(_QWORD *)((char *)v178 + v156 - 8) = *(_QWORD *)&v264[v156];
                    v180 = (unsigned __int64)(v178 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                    v181 = (char *)v178 - v180;
                    v182 = (char *)(v265 - v181);
                    v183 = (v156 + (_DWORD)v181) & 0xFFFFFFF8;
                    if ( v183 >= 8 )
                    {
                      v184 = v183 & 0xFFFFFFF8;
                      v185 = 0;
                      do
                      {
                        v186 = v185;
                        v185 += 8;
                        *(_QWORD *)(v180 + v186) = *(_QWORD *)&v182[v186];
                      }
                      while ( v185 < v184 );
                    }
                  }
                  else if ( (v156 & 4) != 0 )
                  {
                    *(_DWORD *)v178 = *(_DWORD *)v265;
                    *(_DWORD *)((char *)v178 + v156 - 4) = *(_DWORD *)&v264[v156 + 4];
                  }
                  else if ( v156 )
                  {
                    *(_BYTE *)v178 = v265[0];
                    if ( (v156 & 2) != 0 )
                      *(_WORD *)((char *)v178 + v156 - 2) = *(_WORD *)&v264[v156 + 6];
                  }
                  v155 = v212.m128i_i64[0];
                  v157 = v216;
                  goto LABEL_199;
                }
              }
              else
              {
                if ( v119 == 4 )
                {
                  v120 = *(unsigned __int8 *)(v103 + 72);
                  goto LABEL_152;
                }
                if ( v119 == 5 )
                  goto LABEL_150;
              }
              v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
              switch ( *(_BYTE *)(v103 + 64) )
              {
                case 0:
                  v3 = "null";
                  break;
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
              v212.m128i_i64[0] = (__int64)v3;
              nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
                v2,
                302);
              std::string::_M_dispose();
              __cxa_throw(
                v2,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
LABEL_150:
            v120 = *(_DWORD *)(v103 + 72);
            goto LABEL_151;
          }
        }
      }
    }
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v25 = v24 + 41;
  v195 = 0;
  LOBYTE(v199) = 0;
  v209 = nullptr;
  while ( *v25 )
  {
    v219 = 0;
    *(_QWORD *)&v220 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v219 = 3;
    v26 = operator new(0x20u);
    *(_BYTE *)(v26 + 20) = 120;
    *(_QWORD *)v26 = v26 + 16;
    *(_DWORD *)(v26 + 16) = 1701080681;
    *(_QWORD *)(v26 + 8) = 5;
    *(_BYTE *)(v26 + 21) = 0;
    v221 = 5;
    v222 = v195;
    v223 = 0;
    v220 = (unsigned __int64)v26;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v251,
      (const __m128i *)&v219);
    s1[0] = 0;
    v224 = 0;
    *(_QWORD *)&v225 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v224 = 3;
    v27 = operator new(0x20u);
    *(_QWORD *)v27 = v27 + 16;
    strcpy((char *)(v27 + 16), "type");
    *(_QWORD *)(v27 + 8) = 4;
    v225 = (unsigned __int64)v27;
    switch ( *v25 )
    {
      case 0:
        v28 = "void";
        break;
      case 1:
        v28 = "register";
        break;
      case 2:
        v28 = "memory";
        break;
      case 3:
        v28 = "phrase";
        break;
      case 4:
        v28 = "displacement";
        break;
      case 5:
        v28 = "immediate";
        break;
      case 6:
        v28 = "far_address";
        break;
      case 7:
        v28 = "near_address";
        break;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
        v28 = "processor_specific";
        break;
      default:
        v28 = "unknown";
        break;
    }
    v226 = 0;
    *(_QWORD *)&v227 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v226 = 3;
    v29 = (__int64 *)operator new(0x20u);
    *v29 = (__int64)(v29 + 2);
    v30 = strlen(v28);
    v31 = v29 + 2;
    v212.m128i_i64[0] = v30;
    v32 = v30;
    if ( v30 > 0xF )
    {
      v84 = std::string::_M_create();
      *v29 = v84;
      v31 = (_QWORD *)v84;
      v29[2] = v212.m128i_i64[0];
    }
    if ( v32 >= 8 )
    {
      *v31 = *(_QWORD *)v28;
      *(_QWORD *)((char *)v31 + v32 - 8) = *(_QWORD *)&v28[v32 - 8];
      v78 = (unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v79 = v28 - ((const char *)v31 - v78);
      v80 = ((_DWORD)v31 - v78 + v32) & 0xFFFFFFF8;
      if ( v80 >= 8 )
      {
        v81 = v80 & 0xFFFFFFF8;
        v82 = 0;
        do
        {
          v83 = v82;
          v82 += 8;
          *(_QWORD *)(v78 + v83) = *(_QWORD *)(v79 + v83);
        }
        while ( v82 < v81 );
      }
    }
    else if ( (v32 & 4) != 0 )
    {
      *(_DWORD *)v31 = *(_DWORD *)v28;
      *(_DWORD *)((char *)v31 + v32 - 4) = *(_DWORD *)&v28[v32 - 4];
    }
    else if ( v32 )
    {
      *(_BYTE *)v31 = *v28;
      if ( (v32 & 2) != 0 )
        *(_WORD *)((char *)v31 + v32 - 2) = *(_WORD *)&v28[v32 - 2];
    }
    v33 = v212.m128i_i64[0];
    v34 = *v29;
    v29[1] = v212.m128i_i64[0];
    *(_BYTE *)(v34 + v33) = 0;
    v227 = (unsigned __int64)v29;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &s1[1],
      (const __m128i *)&v224);
    v253 = 0;
    v228 = 0;
    *(_QWORD *)&v229 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v228 = 3;
    v35 = operator new(0x20u);
    *(_DWORD *)(v35 + 16) = 1887007844;
    v36 = (unsigned __int64)v35;
    *(_QWORD *)v35 = v35 + 16;
    *(_BYTE *)(v35 + 20) = 101;
    *(_QWORD *)(v35 + 8) = 5;
    *(_BYTE *)(v35 + 21) = 0;
    v37 = (unsigned __int8)v25[4];
    v230 = 5;
    v231 = v37;
    v232 = 0;
    v229 = v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v254,
      (const __m128i *)&v228);
    v255 = 0;
    LOBYTE(v233) = 0;
    *(_QWORD *)&v234 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v233) = 3;
    v38 = operator new(0x20u);
    *(_BYTE *)(v38 + 18) = 103;
    v39 = (unsigned __int64)v38;
    *(_QWORD *)v38 = v38 + 16;
    *(_WORD *)(v38 + 16) = 25970;
    *(_QWORD *)(v38 + 8) = 3;
    *(_BYTE *)(v38 + 19) = 0;
    v40 = *(unsigned __int16 *)(v25 + 5);
    v235 = 5;
    v236 = v40;
    v237 = 0;
    v234 = v39;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v256,
      (const __m128i *)&v233);
    v257 = 0;
    v238 = 0;
    *(_QWORD *)&v239 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v238 = 3;
    v41 = operator new(0x20u);
    v42 = (unsigned __int64)v41;
    *(_BYTE *)(v41 + 20) = 101;
    *(_QWORD *)v41 = v41 + 16;
    *(_DWORD *)(v41 + 16) = 1970037110;
    *(_QWORD *)(v41 + 8) = 5;
    *(_BYTE *)(v41 + 21) = 0;
    v43 = *(_QWORD *)(v25 + 7);
    v240 = 6;
    v241 = v43;
    v239 = v42;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v258,
      (const __m128i *)&v238);
    v259 = 0;
    v242 = 0;
    *(_QWORD *)&v243 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v242 = 3;
    v44 = operator new(0x20u);
    strcpy((char *)(v44 + 16), "addr");
    *(_QWORD *)v44 = v44 + 16;
    *(_QWORD *)(v44 + 8) = 4;
    v243 = (unsigned __int64)v44;
    qsnprintf();
    v213 = v215;
    v45 = strlen(s);
    v212.m128i_i64[0] = v45;
    v46 = v45;
    if ( v45 > 0xF )
    {
      v213 = (void *)std::string::_M_create();
      v85 = v213;
      v215[0] = v212.m128i_i64[0];
    }
    else
    {
      if ( v45 == 1 )
      {
        LOBYTE(v215[0]) = s[0];
LABEL_49:
        v47 = v215;
        goto LABEL_50;
      }
      if ( !v45 )
        goto LABEL_49;
      v85 = v215;
    }
    if ( v46 >= 8 )
    {
      v87 = (unsigned __int64)(v85 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v85 = *(_QWORD *)s;
      *(_QWORD *)((char *)v85 + v46 - 8) = *(_QWORD *)&v266[v46];
      v88 = (char *)v85 - v87;
      v89 = (char *)(s - v88);
      if ( ((v46 + (_DWORD)v88) & 0xFFFFFFF8) >= 8 )
      {
        v90 = (v46 + (_DWORD)v88) & 0xFFFFFFF8;
        v91 = 0;
        do
        {
          v92 = v91;
          v91 += 8;
          *(_QWORD *)(v87 + v92) = *(_QWORD *)&v89[v92];
        }
        while ( v91 < v90 );
      }
    }
    else if ( (v46 & 4) != 0 )
    {
      *(_DWORD *)v85 = *(_DWORD *)s;
      *(_DWORD *)((char *)v85 + v46 - 4) = *(_DWORD *)&v266[v46 + 4];
    }
    else if ( v46 )
    {
      *(_BYTE *)v85 = s[0];
      if ( (v46 & 2) != 0 )
        *(_WORD *)((char *)v85 + v46 - 2) = *(_WORD *)&v266[v46 + 6];
    }
    v45 = v212.m128i_i64[0];
    v47 = v213;
LABEL_50:
    v214 = v45;
    *((_BYTE *)v47 + v45) = 0;
    v244 = 0;
    *(_QWORD *)&v245 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v244 = 3;
    v48 = (_QWORD *)operator new(0x20u);
    v49 = v213;
    v50 = v48 + 2;
    v51 = v214;
    *v48 = v48 + 2;
    if ( v49 == v215 )
    {
      v86 = v51 + 1;
      if ( (unsigned int)(v51 + 1) >= 8 )
      {
        v48[2] = v215[0];
        *(_QWORD *)((char *)v50 + v86 - 8) = *(_QWORD *)((char *)&v215[-1] + v86);
        v95 = (unsigned __int64)(v48 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v96 = (char *)v50 - v95;
        v97 = (char *)((char *)v215 - v96);
        if ( (((_DWORD)v96 + v86) & 0xFFFFFFF8) >= 8 )
        {
          v98 = ((_DWORD)v96 + v86) & 0xFFFFFFF8;
          v99 = 0;
          do
          {
            v100 = v99;
            v99 += 8;
            *(_QWORD *)(v95 + v100) = *(_QWORD *)&v97[v100];
          }
          while ( v99 < v98 );
        }
      }
      else if ( (v86 & 4) != 0 )
      {
        *((_DWORD *)v48 + 4) = v215[0];
        *(_DWORD *)((char *)v50 + v86 - 4) = *(_DWORD *)((char *)&v214 + v86 + 4);
      }
      else if ( (_DWORD)v51 != -1 )
      {
        *((_BYTE *)v48 + 16) = v215[0];
        if ( (v86 & 2) != 0 )
          *(_WORD *)((char *)v50 + v86 - 2) = *(_WORD *)((char *)&v214 + v86 + 6);
      }
    }
    else
    {
      *v48 = v49;
      v48[2] = v215[0];
    }
    v48[1] = v51;
    v213 = v215;
    v214 = 0;
    LOBYTE(v215[0]) = 0;
    v245 = (unsigned __int64)v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v260,
      (const __m128i *)&v242);
    v261 = 0;
    LOBYTE(v246) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v246) = 3;
    v52 = operator new(0x20u);
    *(_DWORD *)(v52 + 16) = 1734437990;
    v53 = (unsigned __int64)v52;
    *(_QWORD *)v52 = v52 + 16;
    *(_BYTE *)(v52 + 20) = 115;
    *(_QWORD *)(v52 + 8) = 5;
    *(_BYTE *)(v52 + 21) = 0;
    v54 = (unsigned __int8)v25[3];
    v248 = 6;
    v249 = v54;
    v250 = 0;
    s2 = v53;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v262,
      (const __m128i *)v208);
    v212.m128i_i8[0] = 0;
    v263 = 0;
    v212.m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v201,
      (__int64)v251,
      7,
      v55,
      v56,
      v57,
      v194,
      v195,
      (int)v251,
      7,
      v199,
      (int)&v239,
      (__int64)&v243,
      (int)v201,
      (int)&v234,
      (int)&v245,
      (int)&v220,
      (char)&v225,
      (__int64)&v227,
      (int)&v229,
      (__int64)v208);
    if ( !(_BYTE)v199 )
    {
      v199 = operator new(0x18u);
      *(_QWORD *)(v199 + 16) = 0;
      *(_OWORD *)v199 = 0;
LABEL_54:
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v58 = v212.m128i_i8[0];
      v59 = v212.m128i_i64[1];
      v209 = (_QWORD *)v199;
      goto LABEL_55;
    }
    if ( (_BYTE)v199 != 2 )
      JUMPOUT(0x738A0);
    v93 = v209[1];
    if ( v209[2] == v93 )
    {
      v199 = (__int64)v209;
      goto LABEL_54;
    }
    v94 = v93 + 16;
    v58 = 0;
    *(__m128i *)(v94 - 16) = _mm_load_si128(&v212);
    v209[1] = v94;
    v59 = 0;
LABEL_55:
    v212.m128i_i8[0] = v58;
    v60 = v264;
    v212.m128i_i64[1] = v59;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v60 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v60 != (char *)v251 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v213 != v215 )
      operator delete(v213, v215[0] + 1LL);
    v25 += 40;
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
    v195 = v196 + 1;
    LOBYTE(v199) = 2;
    if ( v195 == 8 )
      goto LABEL_60;
  }
  v200 = &v239;
LABEL_60:
  v238 = 0;
  *(_QWORD *)&v239 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = 3;
  v61 = operator new(0x20u);
  strcpy((char *)(v61 + 16), "address");
  *(_QWORD *)v61 = v61 + 16;
  *(_QWORD *)(v61 + 8) = 7;
  v239 = (unsigned __int64)v61;
  qsnprintf();
  v233 = (char *)&v234 + 8;
  v62 = strlen(v269);
  v212.m128i_i64[0] = v62;
  v63 = v62;
  if ( v62 > 0xF )
  {
    v124 = (_DWORD *)std::string::_M_create();
    v233 = v124;
    *((_QWORD *)&v234 + 1) = v212.m128i_i64[0];
    goto LABEL_156;
  }
  if ( v62 == 1 )
  {
    BYTE8(v234) = v269[0];
LABEL_63:
    v64 = (char *)&v234 + 8;
  }
  else
  {
    if ( !v62 )
      goto LABEL_63;
    v124 = (_DWORD *)&v234 + 2;
LABEL_156:
    if ( v63 < 8 )
    {
      if ( (v63 & 4) != 0 )
      {
        *v124 = *(_DWORD *)v269;
        *(_DWORD *)((char *)v124 + v63 - 4) = *(_DWORD *)&v268[v63 + 4];
      }
      else if ( v63 )
      {
        *(_BYTE *)v124 = v269[0];
        if ( (v63 & 2) != 0 )
          *(_WORD *)((char *)v124 + v63 - 2) = *(_WORD *)&v268[v63 + 6];
      }
    }
    else
    {
      *(_QWORD *)v124 = *(_QWORD *)v269;
      *(_QWORD *)((char *)v124 + v63 - 8) = *(_QWORD *)&v268[v63];
      v125 = (unsigned __int64)(v124 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v126 = (char *)v124 - v125;
      v127 = (char *)(v269 - v126);
      v128 = (v63 + (_DWORD)v126) & 0xFFFFFFF8;
      if ( v128 >= 8 )
      {
        v129 = v128 & 0xFFFFFFF8;
        v130 = 0;
        do
        {
          v131 = v130;
          v130 += 8;
          *(_QWORD *)(v125 + v131) = *(_QWORD *)&v127[v131];
        }
        while ( v130 < v129 );
      }
    }
    v62 = v212.m128i_i64[0];
    v64 = (char *)v233;
  }
  *(_QWORD *)&v234 = v62;
  v64[v62] = 0;
  v240 = 0;
  *(_QWORD *)&v241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v240 = 3;
  v65 = (_QWORD *)operator new(0x20u);
  v66 = v65 + 2;
  v67 = v65;
  v68 = (unsigned __int64)v65;
  v69 = v234;
  *v65 = v65 + 2;
  if ( v233 == (char *)&v234 + 8 )
  {
    v132 = v69 + 1;
    if ( (unsigned int)(v69 + 1) >= 8 )
    {
      v65[2] = *((_QWORD *)&v234 + 1);
      *(_QWORD *)((char *)v66 + v132 - 8) = *(_QWORD *)((char *)&v234 + v132);
      v133 = (unsigned __int64)(v65 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v134 = (char *)((char *)&v234 + 8 - ((char *)v66 - v133));
      if ( ((v132 + (_DWORD)v66 - (_DWORD)v133) & 0xFFFFFFF8) >= 8 )
      {
        v135 = (v132 + (_DWORD)v66 - v133) & 0xFFFFFFF8;
        v136 = 0;
        do
        {
          v137 = v136;
          v136 += 8;
          *(_QWORD *)(v133 + v137) = *(_QWORD *)&v134[v137];
        }
        while ( v136 < v135 );
      }
    }
    else if ( (v132 & 4) != 0 )
    {
      *((_DWORD *)v65 + 4) = DWORD2(v234);
      *(_DWORD *)((char *)v66 + v132 - 4) = *(_DWORD *)((char *)&v234 + v132 + 4);
    }
    else if ( (_DWORD)v69 != -1 )
    {
      *((_BYTE *)v65 + 16) = BYTE8(v234);
      if ( (v132 & 2) != 0 )
        *(_WORD *)((char *)v66 + v132 - 2) = *(_WORD *)((char *)&v234 + v132 + 6);
    }
  }
  else
  {
    *v65 = v233;
    v65[2] = *((_QWORD *)&v234 + 1);
  }
  v67[1] = v69;
  v233 = (char *)&v234 + 8;
  *(_QWORD *)&v234 = 0;
  BYTE8(v234) = 0;
  v241 = v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v251,
    (const __m128i *)&v238);
  s1[0] = 0;
  v242 = 0;
  *(_QWORD *)&v243 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v242 = 3;
  v70 = operator new(0x20u);
  strcpy((char *)(v70 + 16), "operand_count");
  *(_QWORD *)v70 = v70 + 16;
  *(_QWORD *)(v70 + 8) = 13;
  v243 = (unsigned __int64)v70;
  if ( (_BYTE)v199 == 2 )
    v71 = (__int64)(v209[1] - *v209) >> 4;
  else
    v71 = (_BYTE)v199 != 0;
  v244 = 6;
  v245 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v242);
  v253 = 0;
  LOBYTE(v246) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v246) = 3;
  v72 = operator new(0x20u);
  *(_QWORD *)(v72 + 8) = 8;
  *(_QWORD *)v72 = v72 + 16;
  strcpy((char *)(v72 + 16), "operands");
  s2 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v250 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v254,
    (const __m128i *)v208);
  v255 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v251,
    3,
    v73,
    v74,
    v75,
    v194,
    v195,
    v197,
    v198,
    v199,
    (int)v200,
    (__int64)&v243,
    (int)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207,
    (__int64)v208);
  v76 = v256;
  do
  {
    v76 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v76 != v251 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v233 != (char *)&v234 + 8 )
    operator delete(v233, *((_QWORD *)&v234 + 1) + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_73:
  operator delete(v24, 0x168u);
  return a1;
}

