_QWORD *__fastcall ida_mcp::tools::switches::`anonymous namespace'::handle_get_switch_info(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  size_t v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rax
  int v11; // eax
  __int8 v12; // al
  void *v13; // rbp
  int *v14; // rax
  int *v15; // r13
  __int64 func; // rax
  double *v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // rdi
  double v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // rbp
  __int64 v26; // rax
  void *v27; // r9
  __int64 v28; // r14
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r15
  __int64 v32; // rdx
  size_t v33; // rax
  unsigned int v34; // r15d
  char *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r14
  _QWORD *v40; // r15
  size_t v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rcx
  size_t v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  void *v48; // r10
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r10
  __int64 v53; // r9
  __int8 v54; // si
  __int64 v55; // rax
  char *v56; // rdx
  size_t v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r14
  _QWORD *v62; // r15
  size_t v63; // rdx
  int v64; // eax
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // rcx
  size_t v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  void *v70; // r10
  _QWORD *v71; // r9
  double v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r10
  __int64 v77; // r9
  __int8 v78; // si
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  size_t v82; // rax
  unsigned int v83; // ebx
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  _QWORD *v87; // rcx
  __int128 v88; // xmm0
  size_t v89; // rsi
  __int64 v90; // rax
  __int64 *v91; // rbp
  __int8 v92; // al
  __m128i v93; // xmm0
  __int64 v94; // rax
  size_t v95; // rax
  unsigned int v96; // r13d
  _QWORD *v97; // rdx
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  _QWORD *v100; // rcx
  __int128 v101; // xmm0
  size_t v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  _QWORD *v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __m128i *v118; // r13
  __int64 v119; // rdx
  __int64 v120; // rbp
  __int64 v121; // rbx
  std::runtime_error *exception; // rax
  _QWORD *v124; // rax
  void *v125; // rdi
  void *v126; // r9
  void *v127; // rdi
  void *v128; // r9
  void *v129; // rdi
  unsigned int v130; // eax
  unsigned int v131; // r15d
  unsigned __int64 v132; // rdx
  char *v133; // rax
  char *v134; // r14
  unsigned int v135; // ecx
  unsigned int v136; // eax
  __int64 v137; // rsi
  unsigned int v138; // esi
  _QWORD *v139; // r14
  __int64 v140; // rax
  int *v141; // rdi
  _QWORD *v142; // r13
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  _QWORD *v149; // rax
  unsigned __int64 v150; // rsi
  char *v151; // rdx
  char *v152; // r8
  unsigned int v153; // eax
  unsigned int v154; // eax
  unsigned int v155; // edx
  __int64 v156; // rdi
  unsigned __int64 v157; // rdi
  char *v158; // r8
  unsigned int v159; // eax
  unsigned int v160; // edx
  __int64 v161; // rsi
  _QWORD *v162; // rax
  unsigned __int64 v163; // r15
  size_t v164; // rax
  unsigned __int64 v165; // r15
  size_t v166; // rax
  unsigned __int64 v167; // r15
  size_t v168; // rax
  unsigned __int64 v169; // rdi
  char *v170; // rax
  char *v171; // r14
  unsigned int v172; // eax
  unsigned int v173; // eax
  unsigned int v174; // edx
  __int64 v175; // rcx
  _BYTE *v176; // r13
  unsigned __int64 v177; // r15
  _QWORD *v178; // rax
  _BYTE *v179; // rdi
  size_t v180; // rdx
  __int64 v181; // rax
  _QWORD *v182; // rdx
  _QWORD *v183; // rax
  unsigned __int64 v184; // rsi
  char *v185; // rax
  char *v186; // rdx
  unsigned int v187; // eax
  unsigned int v188; // eax
  unsigned int v189; // ecx
  __int64 v190; // rdi
  unsigned __int64 v191; // rcx
  char *v192; // rbp
  unsigned int v193; // eax
  unsigned int v194; // edx
  __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rax
  unsigned int v198; // eax
  unsigned int v199; // eax
  unsigned __int64 v200; // rdi
  char *v201; // rdx
  char *v202; // r8
  unsigned int v203; // eax
  unsigned int v204; // eax
  unsigned int v205; // edx
  __int64 v206; // r9
  unsigned int v207; // eax
  unsigned __int64 v208; // rdi
  char *v209; // rdx
  char *v210; // r8
  unsigned int v211; // eax
  unsigned int v212; // eax
  unsigned int v213; // edx
  __int64 v214; // r9
  unsigned __int64 v215; // rdi
  char *v216; // rdx
  char *v217; // r9
  unsigned int v218; // eax
  unsigned int v219; // eax
  unsigned int v220; // edx
  __int64 v221; // r10
  unsigned __int64 v222; // rcx
  char *v223; // r8
  unsigned int v224; // eax
  unsigned int v225; // edx
  __int64 v226; // rsi
  int v227; // [rsp+0h] [rbp-588h]
  __int64 *v228; // [rsp+8h] [rbp-580h]
  int v229[2]; // [rsp+10h] [rbp-578h]
  int v230[2]; // [rsp+18h] [rbp-570h]
  int v231[2]; // [rsp+18h] [rbp-570h]
  int v232[2]; // [rsp+18h] [rbp-570h]
  _QWORD *v233; // [rsp+20h] [rbp-568h]
  __int64 v234; // [rsp+30h] [rbp-558h]
  void *v235; // [rsp+38h] [rbp-550h]
  _QWORD *v236; // [rsp+38h] [rbp-550h]
  void *v237; // [rsp+38h] [rbp-550h]
  void *v238; // [rsp+38h] [rbp-550h]
  _QWORD *v239; // [rsp+38h] [rbp-550h]
  void *v240; // [rsp+38h] [rbp-550h]
  void *v241; // [rsp+38h] [rbp-550h]
  void *v242; // [rsp+38h] [rbp-550h]
  void *v243; // [rsp+38h] [rbp-550h]
  __int64 v244; // [rsp+40h] [rbp-548h]
  __int64 v245; // [rsp+40h] [rbp-548h]
  __int64 v246; // [rsp+40h] [rbp-548h]
  __int64 v247; // [rsp+40h] [rbp-548h]
  int v248[2]; // [rsp+50h] [rbp-538h]
  __int8 v249; // [rsp+58h] [rbp-530h]
  __int64 v250; // [rsp+60h] [rbp-528h]
  char v251; // [rsp+6Eh] [rbp-51Ah]
  char v252; // [rsp+6Fh] [rbp-519h]
  __m128i v254; // [rsp+C0h] [rbp-4C8h] BYREF
  __int64 v255; // [rsp+D0h] [rbp-4B8h]
  __int128 v256; // [rsp+D8h] [rbp-4B0h]
  __int64 v257; // [rsp+F0h] [rbp-498h]
  __int128 v258; // [rsp+F8h] [rbp-490h]
  __m128i v259; // [rsp+110h] [rbp-478h] BYREF
  __int64 v260; // [rsp+130h] [rbp-458h]
  __m128i si128; // [rsp+138h] [rbp-450h]
  __int128 v262; // [rsp+148h] [rbp-440h]
  __int64 v263; // [rsp+158h] [rbp-430h]
  __int64 v264; // [rsp+160h] [rbp-428h]
  __int64 v265; // [rsp+168h] [rbp-420h]
  __int64 v266; // [rsp+170h] [rbp-418h]
  __int64 v267; // [rsp+178h] [rbp-410h]
  __int64 v268; // [rsp+180h] [rbp-408h]
  __int64 v269; // [rsp+188h] [rbp-400h]
  __int64 v270; // [rsp+190h] [rbp-3F8h]
  __int128 v271; // [rsp+198h] [rbp-3F0h]
  void *src; // [rsp+1B0h] [rbp-3D8h]
  __m128 v273; // [rsp+1B8h] [rbp-3D0h] BYREF
  void *v274; // [rsp+1D0h] [rbp-3B8h]
  size_t v275; // [rsp+1D8h] [rbp-3B0h]
  _QWORD v276[2]; // [rsp+1E0h] [rbp-3A8h] BYREF
  void *v277; // [rsp+1F0h] [rbp-398h]
  size_t v278; // [rsp+1F8h] [rbp-390h]
  _QWORD v279[2]; // [rsp+200h] [rbp-388h] BYREF
  void *v280; // [rsp+210h] [rbp-378h] BYREF
  __int64 v281; // [rsp+218h] [rbp-370h]
  _QWORD v282[2]; // [rsp+220h] [rbp-368h] BYREF
  int v283; // [rsp+230h] [rbp-358h] BYREF
  int v284[4]; // [rsp+238h] [rbp-350h]
  char v285; // [rsp+248h] [rbp-340h]
  __int64 v286[2]; // [rsp+250h] [rbp-338h]
  int v287; // [rsp+260h] [rbp-328h] BYREF
  int v288[4]; // [rsp+268h] [rbp-320h]
  __m128i v289; // [rsp+278h] [rbp-310h]
  __int64 v290; // [rsp+288h] [rbp-300h]
  char v291; // [rsp+290h] [rbp-2F8h] BYREF
  int v292[4]; // [rsp+298h] [rbp-2F0h]
  char v293; // [rsp+2A8h] [rbp-2E0h]
  int v294[4]; // [rsp+2B0h] [rbp-2D8h]
  char v295; // [rsp+2C0h] [rbp-2C8h] BYREF
  __int128 v296; // [rsp+2C8h] [rbp-2C0h]
  char v297; // [rsp+2D8h] [rbp-2B0h]
  __int64 v298; // [rsp+2E0h] [rbp-2A8h]
  __int64 v299; // [rsp+2E8h] [rbp-2A0h]
  char v300; // [rsp+2F0h] [rbp-298h] BYREF
  __int128 v301; // [rsp+2F8h] [rbp-290h]
  __m128i v302; // [rsp+308h] [rbp-280h]
  __int64 v303; // [rsp+318h] [rbp-270h]
  char v304; // [rsp+320h] [rbp-268h] BYREF
  int v305[4]; // [rsp+328h] [rbp-260h]
  char v306; // [rsp+338h] [rbp-250h]
  __int64 v307; // [rsp+340h] [rbp-248h]
  __int64 v308; // [rsp+348h] [rbp-240h]
  char v309; // [rsp+350h] [rbp-238h] BYREF
  char v310[16]; // [rsp+358h] [rbp-230h]
  char v311; // [rsp+368h] [rbp-220h]
  __int64 v312; // [rsp+370h] [rbp-218h]
  __int64 v313; // [rsp+378h] [rbp-210h]
  char v314; // [rsp+380h] [rbp-208h] BYREF
  __int128 v315; // [rsp+388h] [rbp-200h]
  char v316; // [rsp+398h] [rbp-1F0h]
  __int64 v317; // [rsp+3A0h] [rbp-1E8h]
  __int64 v318; // [rsp+3A8h] [rbp-1E0h]
  void *v319; // [rsp+3B0h] [rbp-1D8h] BYREF
  __int128 s2; // [rsp+3B8h] [rbp-1D0h] BYREF
  __int64 v321; // [rsp+3D8h] [rbp-1B0h]
  __m128i v322; // [rsp+3E0h] [rbp-1A8h] BYREF
  double s1[4]; // [rsp+3F0h] [rbp-198h] BYREF
  _QWORD v324[3]; // [rsp+410h] [rbp-178h] BYREF
  _QWORD v325[3]; // [rsp+428h] [rbp-160h] BYREF
  _QWORD v326[3]; // [rsp+440h] [rbp-148h] BYREF
  _QWORD v327[3]; // [rsp+458h] [rbp-130h] BYREF
  _QWORD v328[3]; // [rsp+470h] [rbp-118h] BYREF
  _QWORD v329[3]; // [rsp+488h] [rbp-100h] BYREF
  _QWORD v330[3]; // [rsp+4A0h] [rbp-E8h] BYREF
  char v331[8]; // [rsp+4B8h] [rbp-D0h] BYREF
  char s[24]; // [rsp+4C0h] [rbp-C8h] BYREF
  _BYTE v333[8]; // [rsp+4D8h] [rbp-B0h]
  char v334[24]; // [rsp+4E0h] [rbp-A8h] BYREF
  _BYTE v335[8]; // [rsp+4F8h] [rbp-90h]
  char v336[24]; // [rsp+500h] [rbp-88h] BYREF
  _BYTE v337[8]; // [rsp+518h] [rbp-70h]
  char v338[40]; // [rsp+520h] [rbp-68h] BYREF
  unsigned __int64 v339; // [rsp+548h] [rbp-40h]

  v339 = __readfsqword(0x28u);
  v319 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xC1F70);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 7;
        if ( v8 <= 7 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 7, (__int64)(v8 - 7) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 7;
        if ( v9 <= 7 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 7 - v9, (__int64)(7 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  BYTE8(s2) = 0;
  v12 = *(_BYTE *)(v4 + 64);
  v319 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  v249 = v12;
  if ( v12 != 3 )
    JUMPOUT(0xC2A4F);
  std::string::_M_assign();
  v13 = v319;
  v14 = __errno_location();
  *v14 = 0;
  v15 = v14;
  v250 = __isoc23_strtoull();
  if ( v13 == (void *)v260 || *(_BYTE *)v260 || v250 == -1 && *v15 == 34 )
  {
    if ( v319 != (char *)&s2 + 8 )
      operator delete(v319, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xC29F2);
  }
  if ( v319 != (char *)&s2 + 8 )
    operator delete(v319, *((_QWORD *)&s2 + 1) + 1LL);
  v260 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  v262 = -1;
  v263 = 0;
  v264 = 0;
  v265 = 0;
  v266 = 0xFFFFFFFFLL;
  v267 = 0;
  v268 = 2;
  v269 = -1;
  v270 = 0;
  v271 = 0;
  if ( get_switch_info() <= 0 )
    JUMPOUT(0xC21C2);
  v255 = 0;
  v257 = 0;
  v256 = 0;
  v258 = 0;
  v252 = calc_switch_cases();
  if ( !v252 )
    JUMPOUT(0xC201C);
  func = get_func();
  v273.m128_i8[8] = 0;
  src = &v273.m128_u16[4];
  v273.m128_u64[0] = 0;
  if ( !func )
    goto LABEL_35;
  ida_mcp::get_function_name[abi:cxx11]();
  v17 = (double *)src;
  v18 = src;
  if ( src == &v273.m128_u16[4] )
  {
    if ( (double *)v322.m128i_i64[0] != s1 )
    {
      src = (void *)v322.m128i_i64[0];
      v273 = _mm_loadh_ps(s1);
LABEL_282:
      v322.m128i_i64[0] = (__int64)s1;
      v17 = s1;
      goto LABEL_33;
    }
    v19 = v322.m128i_i64[1];
  }
  else
  {
    v19 = v322.m128i_i64[1];
    if ( (double *)v322.m128i_i64[0] != s1 )
    {
      v20 = *(double *)&v273.m128_u64[1];
      src = (void *)v322.m128i_i64[0];
      v273 = _mm_loadh_ps(s1);
      if ( v17 )
      {
        v322.m128i_i64[0] = (__int64)v17;
        s1[0] = v20;
        goto LABEL_33;
      }
      goto LABEL_282;
    }
  }
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      *(_BYTE *)src = LOBYTE(s1[0]);
      v18 = src;
      v19 = v322.m128i_i64[1];
      goto LABEL_305;
    }
    if ( (unsigned int)v19 >= 8 )
    {
      v222 = ((unsigned __int64)src + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(double *)src = s1[0];
      *(_QWORD *)&v18[(unsigned int)v19 - 8] = *(__int64 *)((char *)&v322.m128i_i64[1] + (unsigned int)v19);
      v223 = (char *)((char *)s1 - &v18[-v222]);
      if ( (((_DWORD)v19 + (_DWORD)v18 - (_DWORD)v222) & 0xFFFFFFF8) >= 8 )
      {
        v224 = (v19 + (_DWORD)v18 - v222) & 0xFFFFFFF8;
        v225 = 0;
        do
        {
          v226 = v225;
          v225 += 8;
          *(_QWORD *)(v222 + v226) = *(_QWORD *)&v223[v226];
        }
        while ( v225 < v224 );
      }
LABEL_304:
      v18 = src;
      v19 = v322.m128i_i64[1];
      goto LABEL_305;
    }
    if ( (v19 & 4) != 0 )
    {
      *(_DWORD *)src = LODWORD(s1[0]);
      *(_DWORD *)&v18[(unsigned int)v19 - 4] = *(__int32 *)((char *)&v322.m128i_i32[3] + (unsigned int)v19);
      v18 = src;
      v19 = v322.m128i_i64[1];
      goto LABEL_305;
    }
    if ( (_DWORD)v19 )
    {
      *(_BYTE *)src = LOBYTE(s1[0]);
      if ( (v19 & 2) != 0 )
      {
        *(_WORD *)&v18[(unsigned int)v19 - 2] = *(__int16 *)((char *)&v322.m128i_i16[7] + (unsigned int)v19);
        v18 = src;
        v19 = v322.m128i_i64[1];
        goto LABEL_305;
      }
      goto LABEL_304;
    }
  }
LABEL_305:
  v273.m128_u64[0] = v19;
  v18[v19] = 0;
  v17 = (double *)v322.m128i_i64[0];
LABEL_33:
  *(_BYTE *)v17 = 0;
  if ( (double *)v322.m128i_i64[0] != s1 )
    operator delete((void *)v322.m128i_i64[0], *(_QWORD *)&s1[0] + 1LL);
LABEL_35:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v21 = v256;
  *(_QWORD *)v248 = 0;
  v251 = 0;
  v234 = 0;
  if ( !(_QWORD)v256 )
    goto LABEL_115;
  do
  {
    if ( *(_QWORD *)v248 >= (unsigned __int64)v258 )
      break;
    v233 = (_QWORD *)(v255 + 24LL * *(_QWORD *)v248);
    if ( !v233[1] )
      goto LABEL_114;
    *(_QWORD *)v229 = 0;
    v228 = &v259.m128i_i64[1];
    do
    {
      v22 = *(_QWORD *)(*v233 + 8LL * *(_QWORD *)v229);
      v322.m128i_i64[0] = (__int64)s1;
      strcpy((char *)s1, "value");
      *(_QWORD *)v230 = v22;
      v322.m128i_i64[1] = 5;
      v23 = operator new(0x30u);
      v24 = (_QWORD *)(v23 + 8);
      v25 = (_QWORD *)v23;
      *(_DWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = v23 + 8;
      *(_QWORD *)(v23 + 32) = v23 + 8;
      *(_QWORD *)(v23 + 40) = 0;
      v26 = operator new(0x50u);
      v27 = (void *)(v26 + 48);
      v28 = v26;
      *(_QWORD *)(v26 + 32) = v26 + 48;
      LODWORD(v26) = LODWORD(s1[0]);
      *(_QWORD *)(v28 + 40) = 5;
      *(_DWORD *)(v28 + 48) = v26;
      LOWORD(v26) = WORD2(s1[0]);
      *(_QWORD *)(v28 + 64) = 0;
      *(_WORD *)(v28 + 52) = v26;
      *(_QWORD *)(v28 + 72) = 0;
      v322.m128i_i64[0] = (__int64)s1;
      v322.m128i_i64[1] = 0;
      LOBYTE(s1[0]) = 0;
      v235 = v27;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v25,
                                 v24,
                                 v27,
                                 5u);
      v31 = insert_hint_unique_pos;
      if ( v30 )
      {
        if ( !insert_hint_unique_pos && v24 != (_QWORD *)v30 )
        {
          v165 = *(_QWORD *)(v30 + 40);
          if ( v165 )
          {
            v166 = 5;
            if ( v165 <= 5 )
              v166 = *(_QWORD *)(v30 + 40);
            memcmp(v235, *(const void **)(v30 + 32), v166);
          }
        }
        v31 = (_QWORD *)v28;
        std::_Rb_tree_insert_and_rebalance();
        ++v25[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v125 = *(void **)(v28 + 32);
        if ( v235 != v125 )
          operator delete(v125, *(_QWORD *)(v28 + 48) + 1LL);
        operator delete((void *)v28, 0x50u);
      }
      if ( (double *)v322.m128i_i64[0] != s1 )
        operator delete((void *)v322.m128i_i64[0], *(_QWORD *)&s1[0] + 1LL);
      *((_BYTE *)v31 + 64) = 5;
      v32 = v31[9];
      v31[9] = *(_QWORD *)v230;
      v259.m128i_i64[1] = v32;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v319 = (char *)&s2 + 8;
      v33 = strlen(s);
      v259.m128i_i64[0] = v33;
      v34 = v33;
      if ( v33 > 0xF )
      {
        v124 = (_QWORD *)std::string::_M_create();
        v319 = v124;
        *((_QWORD *)&s2 + 1) = v259.m128i_i64[0];
LABEL_159:
        if ( v34 >= 8 )
        {
          *v124 = *(_QWORD *)s;
          *(_QWORD *)((char *)v124 + v34 - 8) = *(_QWORD *)&v331[v34];
          v132 = (unsigned __int64)(v124 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v133 = (char *)v124 - v132;
          v134 = (char *)(s - v133);
          if ( ((v34 + (_DWORD)v133) & 0xFFFFFFF8) >= 8 )
          {
            v135 = (v34 + (_DWORD)v133) & 0xFFFFFFF8;
            v136 = 0;
            do
            {
              v137 = v136;
              v136 += 8;
              *(_QWORD *)(v132 + v137) = *(_QWORD *)&v134[v137];
            }
            while ( v136 < v135 );
          }
        }
        else if ( (v34 & 4) != 0 )
        {
          *(_DWORD *)v124 = *(_DWORD *)s;
          *(_DWORD *)((char *)v124 + v34 - 4) = *(_DWORD *)&v331[v34 + 4];
        }
        else if ( v34 )
        {
          *(_BYTE *)v124 = s[0];
          if ( (v34 & 2) != 0 )
            *(_WORD *)((char *)v124 + v34 - 2) = *(_WORD *)&v331[v34 + 6];
        }
        v33 = v259.m128i_i64[0];
        v35 = (char *)v319;
        goto LABEL_49;
      }
      if ( v33 == 1 )
      {
        BYTE8(s2) = s[0];
        goto LABEL_48;
      }
      if ( v33 )
      {
        v124 = (_QWORD *)&s2 + 1;
        goto LABEL_159;
      }
LABEL_48:
      v35 = (char *)&s2 + 8;
LABEL_49:
      *(_QWORD *)&s2 = v33;
      v35[v33] = 0;
      v259 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v36 = (_QWORD *)operator new(0x20u);
      v37 = v36 + 2;
      *(_QWORD *)v231 = v36;
      v38 = s2;
      *v36 = v36 + 2;
      if ( v319 == (char *)&s2 + 8 )
      {
        v130 = v38 + 1;
        if ( (unsigned int)(v38 + 1) >= 8 )
        {
          *(_QWORD *)(*(_QWORD *)v231 + 16LL) = *((_QWORD *)&s2 + 1);
          *(_QWORD *)((char *)v37 + v130 - 8) = *(_QWORD *)((char *)&s2 + v130);
          v150 = (*(_QWORD *)v231 + 24LL) & 0xFFFFFFFFFFFFFFF8LL;
          v151 = (char *)v37 - v150;
          v152 = (char *)((char *)&s2 + 8 - v151);
          v153 = ((_DWORD)v151 + v130) & 0xFFFFFFF8;
          if ( v153 >= 8 )
          {
            v154 = v153 & 0xFFFFFFF8;
            v155 = 0;
            do
            {
              v156 = v155;
              v155 += 8;
              *(_QWORD *)(v150 + v156) = *(_QWORD *)&v152[v156];
            }
            while ( v155 < v154 );
          }
        }
        else if ( (v130 & 4) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)v231 + 16LL) = DWORD2(s2);
          *(_DWORD *)((char *)v37 + v130 - 4) = *(_DWORD *)((char *)&s2 + v130 + 4);
        }
        else if ( (_DWORD)v38 != -1 )
        {
          *(_BYTE *)(*(_QWORD *)v231 + 16LL) = BYTE8(s2);
          if ( (v130 & 2) != 0 )
            *(_WORD *)((char *)v37 + v130 - 2) = *(_WORD *)((char *)&s2 + v130 + 6);
        }
      }
      else
      {
        *v36 = v319;
        v36[2] = *((_QWORD *)&s2 + 1);
      }
      v39 = v25[2];
      v322.m128i_i64[0] = (__int64)s1;
      v319 = (char *)&s2 + 8;
      v40 = v24;
      qmemcpy(s1, "target", 6);
      *(_QWORD *)(*(_QWORD *)v231 + 8LL) = v38;
      *(_QWORD *)&s2 = 0;
      BYTE8(s2) = 0;
      v322.m128i_i64[1] = 6;
      BYTE6(s1[0]) = 0;
      if ( !v39 )
        goto LABEL_68;
      v236 = v25;
      do
      {
        while ( 1 )
        {
          v43 = *(_QWORD *)(v39 + 40);
          if ( !v43 )
            break;
          v41 = 6;
          if ( v43 <= 6 )
            v41 = *(_QWORD *)(v39 + 40);
          v42 = memcmp(*(const void **)(v39 + 32), s1, v41);
          if ( v42 || (v42 = v43 - 6, (__int64)(v43 - 6) <= 0x7FFFFFFF) )
          {
            if ( v42 < 0 )
              break;
          }
          v40 = (_QWORD *)v39;
          v39 = *(_QWORD *)(v39 + 16);
          if ( !v39 )
            goto LABEL_61;
        }
        v39 = *(_QWORD *)(v39 + 24);
      }
      while ( v39 );
LABEL_61:
      v25 = v236;
      if ( v24 == v40 )
        goto LABEL_68;
      v44 = v40[5];
      if ( v44 )
      {
        v45 = 6;
        v237 = (void *)v40[5];
        if ( v44 <= 6 )
          v45 = v40[5];
        if ( (v46 = memcmp(s1, (const void *)v40[4], v45)) == 0
          && (v46 = 6 - (_DWORD)v237, 6 - (__int64)v237 < (__int64)0xFFFFFFFF80000000LL)
          || v46 < 0 )
        {
LABEL_68:
          v47 = operator new(0x50u);
          v48 = (void *)(v47 + 48);
          v49 = v47;
          *(_QWORD *)(v47 + 32) = v47 + 48;
          LODWORD(v47) = LODWORD(s1[0]);
          *(_QWORD *)(v49 + 40) = 6;
          *(_DWORD *)(v49 + 48) = v47;
          LODWORD(v47) = *(_DWORD *)((char *)s1 + 3);
          *(_QWORD *)(v49 + 64) = 0;
          *(_DWORD *)(v49 + 51) = v47;
          *(_QWORD *)(v49 + 72) = 0;
          v244 = v49;
          v238 = v48;
          v322.m128i_i64[0] = (__int64)s1;
          v322.m128i_i64[1] = 0;
          LOBYTE(s1[0]) = 0;
          v50 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v25,
                  v40,
                  v48,
                  6u);
          v52 = (__int64)v238;
          v53 = v244;
          v40 = v50;
          if ( v51 )
          {
            if ( !v50 && v24 != (_QWORD *)v51 )
            {
              v163 = *(_QWORD *)(v51 + 40);
              if ( v163 )
              {
                v164 = 6;
                if ( v163 <= 6 )
                  v164 = *(_QWORD *)(v51 + 40);
                memcmp(v238, *(const void **)(v51 + 32), v164);
                v53 = v244;
              }
            }
            v40 = (_QWORD *)v53;
            std::_Rb_tree_insert_and_rebalance();
            ++v25[5];
          }
          else
          {
            v242 = (void *)v244;
            v246 = v52;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v126 = v242;
            v127 = *((void **)v242 + 4);
            if ( (void *)v246 != v127 )
            {
              operator delete(v127, *((_QWORD *)v242 + 6) + 1LL);
              v126 = v242;
            }
            operator delete(v126, 0x50u);
          }
          if ( (double *)v322.m128i_i64[0] != s1 )
            operator delete((void *)v322.m128i_i64[0], *(_QWORD *)&s1[0] + 1LL);
        }
      }
      v54 = *((_BYTE *)v40 + 64);
      *((_BYTE *)v40 + 64) = 3;
      v55 = v40[9];
      v40[9] = *(_QWORD *)v231;
      v259.m128i_i8[0] = v54;
      v259.m128i_i64[1] = v55;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v319 != (char *)&s2 + 8 )
        operator delete(v319, *((_QWORD *)&s2 + 1) + 1LL);
      if ( get_func() )
      {
        memset(&v259, 0, 24);
        if ( get_func_name() > 0 )
        {
          if ( v259.m128i_i64[1] )
          {
            v319 = (char *)&s2 + 8;
            JUMPOUT(0xC2970);
          }
          v319 = (char *)&s2 + 8;
          v56 = (char *)&s2 + 8;
          v57 = 0;
          goto LABEL_80;
        }
        qsnprintf();
        v319 = (char *)&s2 + 8;
        v57 = strlen(v338);
        v254.m128i_i64[0] = v57;
        v131 = v57;
        if ( v57 > 0xF )
        {
          v162 = (_QWORD *)std::string::_M_create();
          v319 = v162;
          *((_QWORD *)&s2 + 1) = v254.m128i_i64[0];
        }
        else
        {
          if ( v57 == 1 )
          {
            BYTE8(s2) = v338[0];
            goto LABEL_183;
          }
          if ( !v57 )
          {
LABEL_183:
            v56 = (char *)&s2 + 8;
            goto LABEL_80;
          }
          v162 = (_QWORD *)&s2 + 1;
        }
        if ( v131 >= 8 )
        {
          v169 = (unsigned __int64)(v162 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v162 = *(_QWORD *)v338;
          *(_QWORD *)((char *)v162 + v131 - 8) = *(_QWORD *)&v337[v131];
          v170 = (char *)v162 - v169;
          v171 = (char *)(v338 - v170);
          v172 = (v131 + (_DWORD)v170) & 0xFFFFFFF8;
          if ( v172 >= 8 )
          {
            v173 = v172 & 0xFFFFFFF8;
            v174 = 0;
            do
            {
              v175 = v174;
              v174 += 8;
              *(_QWORD *)(v169 + v175) = *(_QWORD *)&v171[v175];
            }
            while ( v174 < v173 );
          }
        }
        else if ( (v131 & 4) != 0 )
        {
          *(_DWORD *)v162 = *(_DWORD *)v338;
          *(_DWORD *)((char *)v162 + v131 - 4) = *(_DWORD *)&v337[v131 + 4];
        }
        else if ( v131 )
        {
          *(_BYTE *)v162 = v338[0];
          if ( (v131 & 2) != 0 )
            *(_WORD *)((char *)v162 + v131 - 2) = *(_WORD *)&v337[v131 + 6];
        }
        v57 = v254.m128i_i64[0];
        v56 = (char *)v319;
LABEL_80:
        *(_QWORD *)&s2 = v57;
        v56[v57] = 0;
        if ( v259.m128i_i64[0] )
        {
          v259.m128i_i64[1] = 0;
          qfree();
        }
        v259 = 0u;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v58 = (_QWORD *)operator new(0x20u);
        v59 = v58 + 2;
        *(_QWORD *)v232 = v58;
        v60 = s2;
        *v58 = v58 + 2;
        if ( v319 == (char *)&s2 + 8 )
        {
          v138 = v60 + 1;
          if ( (unsigned int)(v60 + 1) >= 8 )
          {
            v58[2] = *((_QWORD *)&s2 + 1);
            *(_QWORD *)((char *)v59 + v138 - 8) = *(_QWORD *)((char *)&s2 + v138);
            v157 = (unsigned __int64)(v58 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v158 = (char *)((char *)&s2 + 8 - ((char *)v59 - v157));
            if ( ((v138 + (_DWORD)v59 - (_DWORD)v157) & 0xFFFFFFF8) >= 8 )
            {
              v159 = (v138 + (_DWORD)v59 - v157) & 0xFFFFFFF8;
              v160 = 0;
              do
              {
                v161 = v160;
                v160 += 8;
                *(_QWORD *)(v157 + v161) = *(_QWORD *)&v158[v161];
              }
              while ( v160 < v159 );
            }
          }
          else if ( (v138 & 4) != 0 )
          {
            *((_DWORD *)v58 + 4) = DWORD2(s2);
            *(_DWORD *)((char *)v59 + v138 - 4) = *(_DWORD *)((char *)&s2 + v138 + 4);
          }
          else if ( (_DWORD)v60 != -1 )
          {
            *((_BYTE *)v58 + 16) = BYTE8(s2);
            if ( (v138 & 2) != 0 )
              *(_WORD *)((char *)v59 + v138 - 2) = *(_WORD *)((char *)&s2 + v138 + 6);
          }
        }
        else
        {
          *v58 = v319;
          v58[2] = *((_QWORD *)&s2 + 1);
        }
        v61 = v25[2];
        v322.m128i_i64[0] = (__int64)s1;
        v62 = v24;
        v319 = (char *)&s2 + 8;
        *(_QWORD *)(*(_QWORD *)v232 + 8LL) = v60;
        strcpy((char *)s1, "function_name");
        *(_QWORD *)&s2 = 0;
        BYTE8(s2) = 0;
        v322.m128i_i64[1] = 13;
        if ( !v61 )
          goto LABEL_101;
        v239 = v25;
        do
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)(v61 + 40);
            if ( !v65 )
              break;
            v63 = 13;
            if ( v65 <= 0xD )
              v63 = *(_QWORD *)(v61 + 40);
            v64 = memcmp(*(const void **)(v61 + 32), s1, v63);
            if ( v64 || (v64 = v65 - 13, (__int64)(v65 - 13) <= 0x7FFFFFFF) )
            {
              if ( v64 < 0 )
                break;
            }
            v62 = (_QWORD *)v61;
            v61 = *(_QWORD *)(v61 + 16);
            if ( !v61 )
              goto LABEL_94;
          }
          v61 = *(_QWORD *)(v61 + 24);
        }
        while ( v61 );
LABEL_94:
        v25 = v239;
        if ( v62 == v24 )
          goto LABEL_101;
        v66 = v62[5];
        if ( v66 )
        {
          v67 = 13;
          v240 = (void *)v62[5];
          if ( v66 <= 0xD )
            v67 = v62[5];
          if ( (v68 = memcmp(s1, (const void *)v62[4], v67)) == 0
            && (v68 = 13 - (_DWORD)v240, 13 - (__int64)v240 < (__int64)0xFFFFFFFF80000000LL)
            || v68 < 0 )
          {
LABEL_101:
            v69 = operator new(0x50u);
            v70 = (void *)(v69 + 48);
            v71 = (_QWORD *)v69;
            *(_QWORD *)(v69 + 32) = v69 + 48;
            v72 = s1[0];
            v71[5] = 13;
            *((double *)v71 + 6) = v72;
            v73 = *(_QWORD *)((char *)s1 + 6);
            v71[8] = 0;
            *(_QWORD *)((char *)v71 + 54) = v73;
            v71[9] = 0;
            v245 = (__int64)v71;
            v241 = v70;
            v322.m128i_i64[0] = (__int64)s1;
            v322.m128i_i64[1] = 0;
            LOBYTE(s1[0]) = 0;
            v74 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                    v25,
                    v62,
                    v70,
                    0xDu);
            v76 = (__int64)v241;
            v77 = v245;
            v62 = v74;
            if ( v75 )
            {
              if ( !v74 && v24 != (_QWORD *)v75 )
              {
                v167 = *(_QWORD *)(v75 + 40);
                if ( v167 )
                {
                  v168 = 13;
                  if ( v167 <= 0xD )
                    v168 = *(_QWORD *)(v75 + 40);
                  memcmp(v241, *(const void **)(v75 + 32), v168);
                  v77 = v245;
                }
              }
              v62 = (_QWORD *)v77;
              std::_Rb_tree_insert_and_rebalance();
              ++v25[5];
            }
            else
            {
              v243 = (void *)v245;
              v247 = v76;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v128 = v243;
              v129 = *((void **)v243 + 4);
              if ( (void *)v247 != v129 )
              {
                operator delete(v129, *((_QWORD *)v243 + 6) + 1LL);
                v128 = v243;
              }
              operator delete(v128, 0x50u);
            }
            if ( (double *)v322.m128i_i64[0] != s1 )
              operator delete((void *)v322.m128i_i64[0], *(_QWORD *)&s1[0] + 1LL);
          }
        }
        v78 = *((_BYTE *)v62 + 64);
        *((_BYTE *)v62 + 64) = 3;
        v79 = v62[9];
        v62[9] = *(_QWORD *)v232;
        v259.m128i_i8[0] = v78;
        v259.m128i_i64[1] = v79;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v319 != (char *)&s2 + 8 )
          operator delete(v319, *((_QWORD *)&s2 + 1) + 1LL);
      }
      if ( !v251 )
      {
        v80 = operator new(0x18u);
        *(_QWORD *)(v80 + 16) = 0;
        v234 = v80;
        *(_OWORD *)v80 = 0;
LABEL_111:
        v259.m128i_i8[0] = 1;
        v259.m128i_i64[1] = (__int64)v25;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        goto LABEL_112;
      }
      v139 = *(_QWORD **)(v234 + 8);
      if ( *(_QWORD **)(v234 + 16) == v139 )
        goto LABEL_111;
      *v139 = 1;
      v139[1] = 0;
      v140 = operator new(0x30u);
      v141 = (int *)v25[2];
      *(_DWORD *)(v140 + 8) = 0;
      v142 = (_QWORD *)v140;
      *(_QWORD *)(v140 + 16) = 0;
      *(_QWORD *)(v140 + 24) = v140 + 8;
      *(_QWORD *)(v140 + 32) = v140 + 8;
      *(_QWORD *)(v140 + 40) = 0;
      if ( v141 )
      {
        v143 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v141,
                 v140 + 8);
        v144 = v143;
        do
        {
          v145 = v143;
          v143 = *(_QWORD *)(v143 + 16);
        }
        while ( v143 );
        v142[3] = v145;
        v146 = v144;
        do
        {
          v147 = v146;
          v146 = *(_QWORD *)(v146 + 24);
        }
        while ( v146 );
        v148 = v25[5];
        v142[4] = v147;
        v142[2] = v144;
        v142[5] = v148;
        v149 = *(_QWORD **)(v234 + 8);
      }
      else
      {
        v149 = v139;
      }
      v139[1] = v142;
      *(_QWORD *)(v234 + 8) = v149 + 2;
LABEL_112:
      v259.m128i_i8[0] = 1;
      v259.m128i_i64[1] = (__int64)v25;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      ++*(_QWORD *)v229;
      v251 = 2;
    }
    while ( *(_QWORD *)v229 < v233[1] );
    v21 = v256;
LABEL_114:
    ++*(_QWORD *)v248;
  }
  while ( *(_QWORD *)v248 < v21 );
LABEL_115:
  LOBYTE(v283) = 0;
  *(_QWORD *)v284 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v283) = 3;
  v81 = operator new(0x20u);
  strcpy((char *)(v81 + 16), "address");
  *(_QWORD *)v81 = v81 + 16;
  *(_QWORD *)(v81 + 8) = 7;
  *(_OWORD *)v284 = (unsigned __int64)v81;
  qsnprintf();
  v274 = v276;
  v82 = strlen(v334);
  v259.m128i_i64[0] = v82;
  v83 = v82;
  if ( v82 > 0xF )
  {
    v274 = (void *)std::string::_M_create();
    v182 = v274;
    v276[0] = v259.m128i_i64[0];
    goto LABEL_249;
  }
  if ( v82 == 1 )
  {
    LOBYTE(v276[0]) = v334[0];
LABEL_118:
    v84 = v276;
  }
  else
  {
    if ( !v82 )
      goto LABEL_118;
    v182 = v276;
LABEL_249:
    if ( v83 >= 8 )
    {
      *v182 = *(_QWORD *)v334;
      *(_QWORD *)((char *)v182 + v83 - 8) = *(_QWORD *)&v333[v83];
      v191 = (unsigned __int64)(v182 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v192 = (char *)(v334 - ((char *)v182 - v191));
      if ( ((v83 + (_DWORD)v182 - (_DWORD)v191) & 0xFFFFFFF8) >= 8 )
      {
        v193 = (v83 + (_DWORD)v182 - v191) & 0xFFFFFFF8;
        v194 = 0;
        do
        {
          v195 = v194;
          v194 += 8;
          *(_QWORD *)(v191 + v195) = *(_QWORD *)&v192[v195];
        }
        while ( v194 < v193 );
      }
    }
    else if ( (v83 & 4) != 0 )
    {
      *(_DWORD *)v182 = *(_DWORD *)v334;
      *(_DWORD *)((char *)v182 + v83 - 4) = *(_DWORD *)&v333[v83 + 4];
    }
    else if ( v83 )
    {
      *(_BYTE *)v182 = v334[0];
      if ( (v83 & 2) != 0 )
        *(_WORD *)((char *)v182 + v83 - 2) = *(_WORD *)&v333[v83 + 6];
    }
    v82 = v259.m128i_i64[0];
    v84 = v274;
  }
  v275 = v82;
  *((_BYTE *)v84 + v82) = 0;
  v285 = 0;
  v286[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v285 = 3;
  v85 = (_QWORD *)operator new(0x20u);
  v86 = v85 + 2;
  v87 = v85;
  v88 = (unsigned __int64)v85;
  v89 = v275;
  *v85 = v85 + 2;
  if ( v274 == v276 )
  {
    v198 = v89 + 1;
    if ( (unsigned int)(v89 + 1) >= 8 )
    {
      v87[2] = v276[0];
      *(_QWORD *)((char *)v86 + v198 - 8) = *(_QWORD *)((char *)&v276[-1] + v198);
      v208 = (unsigned __int64)(v87 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v209 = (char *)v86 - v208;
      v210 = (char *)((char *)v276 - v209);
      v211 = ((_DWORD)v209 + v198) & 0xFFFFFFF8;
      if ( v211 >= 8 )
      {
        v212 = v211 & 0xFFFFFFF8;
        v213 = 0;
        do
        {
          v214 = v213;
          v213 += 8;
          *(_QWORD *)(v208 + v214) = *(_QWORD *)&v210[v214];
        }
        while ( v213 < v212 );
      }
    }
    else if ( (v198 & 4) != 0 )
    {
      *((_DWORD *)v87 + 4) = v276[0];
      *(_DWORD *)((char *)v86 + v198 - 4) = *(_DWORD *)((char *)&v275 + v198 + 4);
    }
    else if ( (_DWORD)v89 != -1 )
    {
      *((_BYTE *)v87 + 16) = v276[0];
      if ( (v198 & 2) != 0 )
        *(_WORD *)((char *)v86 + v198 - 2) = *(_WORD *)((char *)&v275 + v198 + 6);
    }
  }
  else
  {
    *v85 = v274;
    v85[2] = v276[0];
  }
  v87[1] = v89;
  v274 = v276;
  v275 = 0;
  LOBYTE(v276[0]) = 0;
  *(_OWORD *)v286 = v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v322,
    (const __m128i *)&v283);
  s1[0] = 0.0;
  LOBYTE(v287) = 0;
  *(_QWORD *)v288 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v287) = 3;
  v90 = operator new(0x20u);
  strcpy((char *)(v90 + 16), "function_name");
  *(_QWORD *)v90 = v90 + 16;
  *(_QWORD *)(v90 + 8) = 13;
  *(_OWORD *)v288 = (unsigned __int64)v90;
  if ( !v273.m128_u64[0] )
  {
    v91 = nullptr;
    v92 = 0;
    goto LABEL_123;
  }
  v254 = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v176 = src;
  v177 = v273.m128_u64[0];
  v178 = (_QWORD *)operator new(0x20u);
  v179 = v178 + 2;
  v259.m128i_i64[0] = v177;
  v91 = v178;
  *v178 = v178 + 2;
  if ( v177 > 0xF )
  {
    v196 = std::string::_M_create();
    *v91 = v196;
    v179 = (_BYTE *)v196;
    v197 = v259.m128i_i64[0];
    v91[2] = v259.m128i_i64[0];
    v180 = v197 + 1;
    if ( !v197 )
      goto LABEL_276;
    v181 = -1;
    if ( v180 )
    {
LABEL_245:
      memcpy(v179, v176, v180);
      v181 = v259.m128i_i64[0];
    }
    v91[1] = v181;
    v92 = 3;
  }
  else
  {
    v180 = v177 + 1;
    if ( v177 )
      goto LABEL_245;
LABEL_276:
    *v179 = *v176;
    v91[1] = v259.m128i_i64[0];
    v92 = 3;
  }
LABEL_123:
  v254.m128i_i8[0] = v92;
  v254.m128i_i64[1] = (__int64)v91;
  v93 = _mm_load_si128(&v254);
  v290 = 0;
  v289 = v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s1[1],
    (const __m128i *)&v287);
  s1[3] = 0.0;
  v291 = 0;
  *(_QWORD *)v292 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v291 = 3;
  v94 = operator new(0x20u);
  *(_QWORD *)(v94 + 8) = 10;
  *(_QWORD *)v94 = v94 + 16;
  strcpy((char *)(v94 + 16), "jump_table");
  *(_OWORD *)v292 = (unsigned __int64)v94;
  qsnprintf();
  v277 = v279;
  v95 = strlen(v336);
  v259.m128i_i64[0] = v95;
  v96 = v95;
  if ( v95 > 0xF )
  {
    v183 = (_QWORD *)std::string::_M_create();
    v277 = v183;
    v279[0] = v259.m128i_i64[0];
    goto LABEL_261;
  }
  if ( v95 == 1 )
  {
    LOBYTE(v279[0]) = v336[0];
LABEL_126:
    v97 = v279;
  }
  else
  {
    if ( !v95 )
      goto LABEL_126;
    v183 = v279;
LABEL_261:
    if ( v96 >= 8 )
    {
      v184 = (unsigned __int64)(v183 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v183 = *(_QWORD *)v336;
      *(_QWORD *)((char *)v183 + v96 - 8) = *(_QWORD *)&v335[v96];
      v185 = (char *)v183 - v184;
      v186 = (char *)(v336 - v185);
      v187 = (v96 + (_DWORD)v185) & 0xFFFFFFF8;
      if ( v187 >= 8 )
      {
        v188 = v187 & 0xFFFFFFF8;
        v189 = 0;
        do
        {
          v190 = v189;
          v189 += 8;
          *(_QWORD *)(v184 + v190) = *(_QWORD *)&v186[v190];
        }
        while ( v189 < v188 );
      }
    }
    else if ( (v96 & 4) != 0 )
    {
      *(_DWORD *)v183 = *(_DWORD *)v336;
      *(_DWORD *)((char *)v183 + v96 - 4) = *(_DWORD *)&v335[v96 + 4];
    }
    else if ( v96 )
    {
      *(_BYTE *)v183 = v336[0];
      if ( (v96 & 2) != 0 )
        *(_WORD *)((char *)v183 + v96 - 2) = *(_WORD *)&v335[v96 + 6];
    }
    v95 = v259.m128i_i64[0];
    v97 = v277;
  }
  v278 = v95;
  *((_BYTE *)v97 + v95) = 0;
  v293 = 0;
  *(_QWORD *)v294 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v293 = 3;
  v98 = (_QWORD *)operator new(0x20u);
  v99 = v98 + 2;
  v100 = v98;
  v101 = (unsigned __int64)v98;
  v102 = v278;
  *v98 = v98 + 2;
  if ( v277 == v279 )
  {
    v199 = v102 + 1;
    if ( (unsigned int)(v102 + 1) >= 8 )
    {
      v100[2] = v279[0];
      *(_QWORD *)((char *)v99 + v199 - 8) = *(_QWORD *)((char *)&v279[-1] + v199);
      v200 = (unsigned __int64)(v100 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v201 = (char *)v99 - v200;
      v202 = (char *)((char *)v279 - v201);
      v203 = ((_DWORD)v201 + v199) & 0xFFFFFFF8;
      if ( v203 >= 8 )
      {
        v204 = v203 & 0xFFFFFFF8;
        v205 = 0;
        do
        {
          v206 = v205;
          v205 += 8;
          *(_QWORD *)(v200 + v206) = *(_QWORD *)&v202[v206];
        }
        while ( v205 < v204 );
      }
    }
    else if ( (v199 & 4) != 0 )
    {
      *((_DWORD *)v100 + 4) = v279[0];
      *(_DWORD *)((char *)v99 + v199 - 4) = *(_DWORD *)((char *)&v278 + v199 + 4);
    }
    else if ( (_DWORD)v102 != -1 )
    {
      *((_BYTE *)v100 + 16) = v279[0];
      if ( (v199 & 2) != 0 )
        *(_WORD *)((char *)v99 + v199 - 2) = *(_WORD *)((char *)&v278 + v199 + 6);
    }
  }
  else
  {
    *v98 = v277;
    v98[2] = v279[0];
  }
  v100[1] = v102;
  v277 = v279;
  v278 = 0;
  LOBYTE(v279[0]) = 0;
  *(_OWORD *)v294 = v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v324,
    (const __m128i *)&v291);
  v324[2] = 0;
  v295 = 0;
  *(_QWORD *)&v296 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v295 = 3;
  v103 = operator new(0x20u);
  *(_QWORD *)v103 = v103 + 16;
  strcpy((char *)(v103 + 16), "case_count");
  *(_QWORD *)(v103 + 8) = 10;
  v297 = 6;
  v298 = v256;
  v296 = (unsigned __int64)v103;
  v299 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v325,
    (const __m128i *)&v295);
  v325[2] = 0;
  v300 = 0;
  *(_QWORD *)&v301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v300 = 3;
  v104 = operator new(0x20u);
  strcpy((char *)(v104 + 16), "default_target");
  v105 = v262;
  *(_QWORD *)v104 = v104 + 16;
  *(_QWORD *)(v104 + 8) = 14;
  v301 = (unsigned __int64)v104;
  if ( v105 == -1 )
  {
    v252 = 0;
    v112 = 0;
    v249 = 0;
  }
  else
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v280,
      v338,
      v106,
      v107,
      v108,
      v109,
      v227,
      (int)v228,
      (__int64)&v283);
    v259 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v110 = (_QWORD *)operator new(0x20u);
    v111 = v110 + 2;
    v112 = (__int64)v110;
    v113 = v281;
    *v110 = v110 + 2;
    if ( v280 == v282 )
    {
      v207 = v113 + 1;
      if ( (unsigned int)(v113 + 1) >= 8 )
      {
        *v111 = v282[0];
        *(_QWORD *)((char *)v111 + v207 - 8) = *(_QWORD *)((char *)&v282[-1] + v207);
        v215 = (v112 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v216 = (char *)v111 - v215;
        v217 = (char *)((char *)v282 - v216);
        v218 = ((_DWORD)v216 + v207) & 0xFFFFFFF8;
        if ( v218 >= 8 )
        {
          v219 = v218 & 0xFFFFFFF8;
          v220 = 0;
          do
          {
            v221 = v220;
            v220 += 8;
            *(_QWORD *)(v215 + v221) = *(_QWORD *)&v217[v221];
          }
          while ( v220 < v219 );
        }
      }
      else if ( (v207 & 4) != 0 )
      {
        *(_DWORD *)v111 = v282[0];
        *(_DWORD *)((char *)v111 + v207 - 4) = *(_DWORD *)((char *)&v281 + v207 + 4);
      }
      else if ( (_DWORD)v113 != -1 )
      {
        *(_BYTE *)v111 = v282[0];
        if ( (v207 & 2) != 0 )
          *(_WORD *)((char *)v111 + v207 - 2) = *(_WORD *)((char *)&v281 + v207 + 6);
      }
    }
    else
    {
      *v110 = v280;
      v110[2] = v282[0];
    }
    *(_QWORD *)(v112 + 8) = v113;
    v280 = v282;
    v281 = 0;
    LOBYTE(v282[0]) = 0;
  }
  v259.m128i_i64[1] = v112;
  v303 = 0;
  v259.m128i_i8[0] = v249;
  v302 = _mm_load_si128(&v259);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v326,
    (const __m128i *)&v300);
  v326[2] = 0;
  v304 = 0;
  *(_QWORD *)v305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v304 = 3;
  v114 = operator new(0x20u);
  strcpy((char *)(v114 + 16), "lowcase");
  *(_QWORD *)v114 = v114 + 16;
  *(_QWORD *)(v114 + 8) = 7;
  v306 = 5;
  v307 = si128.m128i_i64[1];
  *(_OWORD *)v305 = (unsigned __int64)v114;
  v308 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v327,
    (const __m128i *)&v304);
  v327[2] = 0;
  v309 = 0;
  *(_QWORD *)v310 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = 3;
  v115 = operator new(0x20u);
  strcpy((char *)(v115 + 16), "ncases");
  *(_QWORD *)v115 = v115 + 16;
  *(_QWORD *)(v115 + 8) = 6;
  v311 = 6;
  v312 = WORD2(v260);
  *(_OWORD *)v310 = (unsigned __int64)v115;
  v313 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v328,
    (const __m128i *)&v309);
  v328[2] = 0;
  v314 = 0;
  *(_QWORD *)&v315 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v314 = 3;
  v116 = operator new(0x20u);
  *(_QWORD *)v116 = v116 + 16;
  strcpy((char *)(v116 + 16), "is_sparse");
  *(_QWORD *)(v116 + 8) = 9;
  v316 = 4;
  v317 = v260 & 1;
  v315 = (unsigned __int64)v116;
  v318 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v329,
    (const __m128i *)&v314);
  v329[2] = 0;
  LOBYTE(v319) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v319) = 3;
  v117 = operator new(0x20u);
  *(_DWORD *)(v117 + 16) = 1702060387;
  *(_QWORD *)v117 = v117 + 16;
  *(_BYTE *)(v117 + 20) = 115;
  *(_QWORD *)(v117 + 8) = 5;
  *(_BYTE *)(v117 + 21) = 0;
  s2 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v321 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v330,
    (const __m128i *)&v319);
  v330[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v322,
    9);
  v118 = (__m128i *)v331;
  do
  {
    v118 = (__m128i *)((char *)v118 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v118 != &v322 );
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
  if ( v252 && v280 != v282 )
    operator delete(v280, v282[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v277 != v279 )
    operator delete(v277, v279[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v274 != v276 )
    operator delete(v274, v276[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src != &v273.m128_u16[4] )
    operator delete(src, v273.m128_u64[1] + 1);
  if ( v257 )
  {
    *(_QWORD *)&v258 = 0;
    qfree();
  }
  v119 = v255;
  if ( v255 )
  {
    v120 = v256;
    if ( (_QWORD)v256 )
    {
      v121 = 0;
      do
      {
        while ( *(_QWORD *)(v119 + 24 * v121) )
        {
          *(_QWORD *)(v119 + 24 * v121++ + 8) = 0;
          qfree();
          v119 = v255;
          if ( v121 == v120 )
            goto LABEL_149;
        }
        ++v121;
      }
      while ( v120 != v121 );
    }
LABEL_149:
    *(_QWORD *)&v256 = 0;
    qfree();
  }
  if ( v270 )
  {
    *(_QWORD *)&v271 = 0;
    qfree();
  }
  return a1;
}

