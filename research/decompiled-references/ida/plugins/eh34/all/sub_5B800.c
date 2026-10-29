__int64 __fastcall sub_5B800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  void *v14; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  __int64 *v23; // rdi
  int v24; // r13d
  int v25; // ebx
  __int64 v26; // rbp
  const char *v27; // r14
  void (__fastcall *hexdsp)(__int64, const char *, _QWORD); // rax
  unsigned __int64 v29; // rbp
  void (__fastcall *v30)(__int64, unsigned __int64, _QWORD); // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // r12d
  void (__fastcall *v35)(__int64, __int64, _QWORD); // rax
  int *v36; // rbp
  int *v37; // r15
  __int64 v38; // r8
  int v39; // r14d
  __int64 *v40; // rdi
  _DWORD *v41; // rsi
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  _DWORD *v44; // rax
  __int64 (__fastcall *v45)(__int64, __int64, __int64 *); // rax
  __int64 m128i_i64; // rsi
  __m128i *v47; // rdi
  int v48; // eax
  int v49; // r15d
  int v50; // ebp
  unsigned __int64 v51; // r14
  int v52; // eax
  int v53; // ebx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  signed int *v64; // rbx
  signed int *v65; // r14
  signed int v66; // ebp
  unsigned __int8 (__fastcall *v67)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v68; // r15
  __int64 v69; // r8
  __m128i v70; // xmm0
  char *v71; // rax
  __m128i *v72; // rdi
  signed int *v73; // rbx
  __m128i si128; // xmm0
  signed int *v75; // r13
  signed int v76; // ebp
  unsigned __int8 (__fastcall *v77)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v78; // r8
  __int64 v79; // r15
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int8 *v82; // rdi
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned int *v85; // rbx
  unsigned int *v86; // rbp
  unsigned int v87; // r13d
  void (__fastcall *v88)(__int64, __int64, _QWORD, _QWORD); // rax
  void (__fastcall *v89)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v90)(__int64, void **, __int64); // rax
  void (__fastcall *v91)(__int64, void **, __int64); // rax
  __int64 (__fastcall *v92)(__int64, void **); // rax
  char v93; // r15
  int v94; // r9d
  __int64 v95; // rbx
  unsigned __int8 (__fastcall *v96)(__int64, __int64); // rax
  unsigned __int8 (__fastcall *v97)(__int64, __int64); // rax
  double v98; // xmm0_8
  char *v99; // rax
  bool v100; // zf
  __int64 *i; // r14
  __int8 v102; // al
  __int64 (__fastcall *v103)(__int64, __int64 *, _QWORD); // rax
  signed int j; // ebx
  __int64 v105; // r8
  __int64 v106; // rsi
  char *v107; // rdi
  __int64 (__fastcall *v108)(__int64, __int64 *, _QWORD); // rax
  __int64 v109; // r12
  signed int v110; // r13d
  __int64 v111; // r12
  const char *v112; // rsi
  void *v113; // rdi
  __int64 v114; // r12
  void (__fastcall *v115)(__int64, __int64 *, __int64); // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rax
  int *v119; // rdx
  bool v120; // r12
  __int64 *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rsi
  __int64 (__fastcall *v124)(__int64, void **, _QWORD); // rax
  void **v125; // rsi
  unsigned __int64 *v126; // rdi
  int v127; // r14d
  int v128; // r12d
  int v129; // eax
  __int64 (__fastcall *v130)(__int64, void **, _QWORD); // rax
  __int64 v131; // r13
  unsigned __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rax
  unsigned int v135; // r12d
  __int64 (__fastcall *v136)(__int64, char *, _QWORD); // rax
  const char *v137; // rsi
  char v138; // al
  bool v139; // al
  unsigned int v140; // edi
  __int64 v141; // rcx
  __int64 v142; // rax
  unsigned int k; // edx
  __int64 (__fastcall *v144)(__int64, void **, _QWORD); // rax
  void **v145; // rdi
  unsigned int v146; // r15d
  __int64 (__fastcall *v147)(__int64, void **, _QWORD); // rax
  char v148; // r13
  __int64 (__fastcall *v149)(__int64, char *, _QWORD); // rax
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  __int64 v153; // r14
  unsigned int m; // r12d
  __int64 v155; // rax
  int *v156; // rdx
  __int64 v157; // r9
  bool v158; // r14
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned int n; // edx
  __int64 v162; // rcx
  void (__fastcall *v163)(__int64, _QWORD *, __int64 *); // rax
  const char *v164; // rdx
  __int64 v165; // r8
  int *v166; // rbx
  unsigned __int64 v167; // rdx
  const char *v168; // rdx
  __int64 v169; // r8
  unsigned __int64 v170; // rdx
  const char *v171; // r13
  void *v172; // rdi
  void **v173; // rbx
  int v174; // eax
  __int64 (__fastcall *v175)(__int64, const char *, _QWORD); // rax
  void **p_s; // rdi
  unsigned int **v177; // rax
  unsigned int *v178; // rbx
  __int64 v179; // r15
  unsigned int v180; // r12d
  unsigned __int8 (__fastcall *v181)(__int64, const char *, _QWORD); // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  char *v185; // rbx
  unsigned __int8 (__fastcall *v186)(__int64, char *); // rax
  char *v187; // rbx
  unsigned __int8 (__fastcall *v188)(__int64, char *); // rax
  __int64 v189; // rax
  char *v190; // rdx
  unsigned __int64 v191; // rsi
  unsigned __int64 v192; // rcx
  __int64 v193; // rdi
  unsigned __int64 v194; // rax
  __int64 v195; // rax
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rsi
  unsigned __int64 v198; // rcx
  __int64 v199; // rdi
  unsigned __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rbx
  __m128i v203; // xmm0
  __int64 v204; // rdi
  __int64 v205; // rdi
  __int64 v206; // rbp
  __int64 v207; // rbx
  __int64 v208; // rax
  __int64 v209; // rdi
  __int64 v210; // rbp
  __int64 v211; // rbx
  __int64 v212; // rax
  __int64 v213; // rdi
  __int64 v214; // rbp
  __int64 v215; // rbx
  __int64 v216; // rax
  _QWORD *v217; // rbx
  void *v218; // rdi
  __int64 v219; // rax
  __int64 v220; // rdx
  int v221; // ebx
  __int64 v222; // rax
  unsigned __int64 v223; // rax
  bool v224; // bl
  char *v225; // rax
  int v226; // ecx
  unsigned __int64 v227; // rax
  unsigned __int64 v228; // rax
  unsigned int **v229; // rax
  unsigned int *v230; // rbx
  __int64 v231; // r15
  unsigned int v232; // r12d
  __int64 (__fastcall *v233)(__int64, const char *, _QWORD); // rax
  char v234; // al
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 (__fastcall *v238)(__int64, const char *, _QWORD); // rax
  char *v239; // xmm0_8
  void *v240; // rax
  char *v241; // xmm0_8
  void *v242; // rax
  __int64 v243; // rax
  unsigned __int64 v244; // rdx
  __int64 v245; // r12
  int *v246; // rbx
  __int64 v247; // r9
  unsigned int v248; // ebp
  _QWORD *v249; // rax
  __int64 v250; // rbp
  __int64 v251; // rax
  __m128i *v252; // r13
  __int64 v253; // rbx
  __int64 v254; // r15
  __int64 v255; // r14
  unsigned __int64 v256; // rax
  size_t v257; // rdx
  __int8 *v258; // r13
  __int64 v259; // rax
  __int64 v260; // rbx
  unsigned __int64 v261; // rdx
  const __m128i *v262; // rbp
  __m128i v263; // xmm0
  __int8 *v264; // rax
  int v265; // ecx
  __int64 *v266; // rdx
  int *v267; // r12
  unsigned int v268; // r13d
  unsigned __int8 (__fastcall *v269)(__int64, __int64 *, _QWORD); // rax
  char *v270; // rax
  _QWORD *v271; // rax
  unsigned __int64 v272; // rcx
  int *v273; // rdx
  __int32 v274; // xmm0_4
  __int64 v275; // rdi
  __m128i v276; // xmm1
  void *v277; // rsi
  __int64 v278; // r8
  __int64 v279; // r9
  void *v280; // rax
  __int64 v281; // rax
  __int64 v282; // rax
  _QWORD *v283; // rbp
  void *v284; // rdi
  __int64 *v285; // r11
  __int64 *v286; // rax
  void (__fastcall *v287)(__int64, __int64 *, _QWORD); // rax
  __int64 v288; // rax
  __int64 v289; // rbp
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rdx
  unsigned __int64 v293; // rax
  __int64 v294; // r12
  __int64 v295; // rbp
  _BOOL4 v296; // ebx
  unsigned __int8 v297; // al
  __int64 v298; // rax
  __int64 v299; // rax
  __int64 v300; // rax
  __int64 v301; // rax
  __int64 v302; // rbp
  __int64 v303; // rax
  __int64 v304; // rax
  __int32 v305; // xmm0_4
  __int64 v306; // rax
  __int64 v308; // [rsp+10h] [rbp-3F0h]
  __int64 v309; // [rsp+10h] [rbp-3F0h]
  signed int v310; // [rsp+10h] [rbp-3F0h]
  int *v312; // [rsp+18h] [rbp-3E8h]
  int v313; // [rsp+18h] [rbp-3E8h]
  char v314; // [rsp+20h] [rbp-3E0h]
  unsigned int v315; // [rsp+20h] [rbp-3E0h]
  char v316; // [rsp+20h] [rbp-3E0h]
  int v317; // [rsp+20h] [rbp-3E0h]
  unsigned __int64 v318; // [rsp+20h] [rbp-3E0h]
  unsigned __int64 v319; // [rsp+20h] [rbp-3E0h]
  __m128 v320; // [rsp+28h] [rbp-3D8h] BYREF
  char *v321; // [rsp+38h] [rbp-3C8h]
  __int64 v322; // [rsp+40h] [rbp-3C0h]
  void **v323; // [rsp+48h] [rbp-3B8h]
  int *v324; // [rsp+50h] [rbp-3B0h]
  int *v325; // [rsp+58h] [rbp-3A8h]
  __m128i *v326; // [rsp+60h] [rbp-3A0h]
  __int64 v327; // [rsp+68h] [rbp-398h]
  __int64 *v328; // [rsp+70h] [rbp-390h]
  __m256i *v329; // [rsp+78h] [rbp-388h]
  __int64 *v330; // [rsp+80h] [rbp-380h]
  _QWORD *v331; // [rsp+88h] [rbp-378h]
  __int64 *v332; // [rsp+90h] [rbp-370h]
  __int64 v333; // [rsp+98h] [rbp-368h] BYREF
  __int64 v334; // [rsp+A0h] [rbp-360h]
  _QWORD v335[2]; // [rsp+A8h] [rbp-358h] BYREF
  __int64 v336; // [rsp+B8h] [rbp-348h] BYREF
  __int64 v337; // [rsp+C0h] [rbp-340h]
  __int64 v338; // [rsp+C8h] [rbp-338h] BYREF
  __int128 v339; // [rsp+D0h] [rbp-330h]
  __int64 v340; // [rsp+E8h] [rbp-318h] BYREF
  __int128 v341; // [rsp+F0h] [rbp-310h]
  __int64 v342; // [rsp+108h] [rbp-2F8h] BYREF
  __int128 v343; // [rsp+110h] [rbp-2F0h]
  __int64 v344; // [rsp+128h] [rbp-2D8h] BYREF
  __int128 v345; // [rsp+130h] [rbp-2D0h]
  __int64 v346; // [rsp+148h] [rbp-2B8h] BYREF
  __int128 v347; // [rsp+150h] [rbp-2B0h]
  __int64 v348; // [rsp+168h] [rbp-298h] BYREF
  __int128 v349; // [rsp+170h] [rbp-290h]
  char *v350; // [rsp+188h] [rbp-278h] BYREF
  __int128 v351; // [rsp+190h] [rbp-270h]
  char v352[8]; // [rsp+1A8h] [rbp-258h] BYREF
  int v353; // [rsp+1B0h] [rbp-250h] BYREF
  _QWORD *v354; // [rsp+1B8h] [rbp-248h]
  int *v355; // [rsp+1C0h] [rbp-240h]
  int *v356; // [rsp+1C8h] [rbp-238h]
  unsigned __int64 v357; // [rsp+1D0h] [rbp-230h]
  __int64 v358; // [rsp+1D8h] [rbp-228h] BYREF
  __int128 v359; // [rsp+1E0h] [rbp-220h]
  void **v360; // [rsp+1F0h] [rbp-210h] BYREF
  __int128 v361; // [rsp+1F8h] [rbp-208h]
  __int64 v362; // [rsp+208h] [rbp-1F8h] BYREF
  __int128 v363; // [rsp+210h] [rbp-1F0h]
  unsigned __int64 v364; // [rsp+220h] [rbp-1E0h] BYREF
  __int128 v365; // [rsp+228h] [rbp-1D8h]
  void *v366; // [rsp+238h] [rbp-1C8h] BYREF
  unsigned __int64 v367; // [rsp+240h] [rbp-1C0h]
  void *v368; // [rsp+248h] [rbp-1B8h]
  __int64 v369; // [rsp+250h] [rbp-1B0h]
  int v370; // [rsp+258h] [rbp-1A8h]
  __int64 v371; // [rsp+260h] [rbp-1A0h]
  _QWORD v372[2]; // [rsp+268h] [rbp-198h] BYREF
  unsigned __int64 v373; // [rsp+278h] [rbp-188h] BYREF
  __int64 *v374; // [rsp+280h] [rbp-180h]
  void **v375; // [rsp+288h] [rbp-178h]
  __int64 v376; // [rsp+290h] [rbp-170h]
  __int64 v377; // [rsp+298h] [rbp-168h]
  __int64 *v378; // [rsp+2A0h] [rbp-160h]
  __int64 *v379; // [rsp+2A8h] [rbp-158h]
  void *s; // [rsp+2B8h] [rbp-148h] BYREF
  void *v381[2]; // [rsp+2C0h] [rbp-140h] BYREF
  __int64 v382; // [rsp+2D0h] [rbp-130h]
  __m128i v383; // [rsp+2D8h] [rbp-128h] BYREF
  _QWORD v384[2]; // [rsp+2E8h] [rbp-118h] BYREF
  __m128i v385; // [rsp+2F8h] [rbp-108h] BYREF
  void *v386[2]; // [rsp+308h] [rbp-F8h] BYREF
  void *v387; // [rsp+318h] [rbp-E8h]
  _QWORD v388[4]; // [rsp+328h] [rbp-D8h] BYREF
  __int64 v389; // [rsp+348h] [rbp-B8h]
  __int64 v390; // [rsp+350h] [rbp-B0h]
  __m256i v391; // [rsp+358h] [rbp-A8h] BYREF
  __int64 v392; // [rsp+378h] [rbp-88h]
  _QWORD v393[4]; // [rsp+388h] [rbp-78h] BYREF
  __int64 v394; // [rsp+3A8h] [rbp-58h]
  __int64 v395; // [rsp+3B0h] [rbp-50h]
  unsigned __int64 v396; // [rsp+3C0h] [rbp-40h]

  v327 = a1;
  v396 = __readfsqword(0x28u);
  v338 = 0;
  v329 = &v391;
  v332 = &v338;
  v339 = 0;
  sub_5A200((__int64)&v391, (__int64 *)a2, a3, &v338, a5, a6);
  if ( v391.m256i_i8[24] )
  {
    v6 = v391.m256i_i64[0];
    *(_BYTE *)(a1 + 24) = 1;
    v7 = _mm_loadu_si128((const __m128i *)&v391.m256i_u64[1]);
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v7;
    goto LABEL_3;
  }
  v353 = 0;
  v355 = &v353;
  v356 = &v353;
  v331 = v372;
  v366 = v372;
  v354 = nullptr;
  v16 = *(int *)(a3 + 64);
  v357 = 0;
  v367 = 1;
  v368 = nullptr;
  v369 = 0;
  v370 = 1065353216;
  v371 = 0;
  v372[0] = 0;
  memset(&v391, 0, 24);
  if ( v16 )
  {
    v391.m256i_i64[0] = qvector_reserve(v329, 0, v16, 4);
    v291 = v391.m256i_i64[1];
    v292 = v391.m256i_i64[0];
    if ( v391.m256i_i64[1] < v16 )
    {
      *(_DWORD *)(v391.m256i_i64[0] + 4 * v391.m256i_i64[1]) = 0;
      v293 = v291 + 1;
      if ( v293 < v16 )
      {
        do
        {
          v292 = v391.m256i_i64[0];
          *(_DWORD *)(v391.m256i_i64[0] + 4 * v293++) = 0;
        }
        while ( v16 != v293 );
      }
    }
    v391.m256i_i64[1] = v16;
    v294 = *(_QWORD *)(a3 + 520);
    if ( *(int *)(a3 + 64) <= 0 )
    {
      v18 = v391.m256i_i64[0];
      v17 = v391.m256i_i64[2];
    }
    else
    {
      v295 = 0;
      do
      {
        v296 = *(_DWORD *)(v294 + 76) == 5;
        v297 = sub_6E220(v294, 0, v292);
        v292 = v391.m256i_i64[0];
        *(_DWORD *)(v391.m256i_i64[0] + 4 * v295++) = v296 | (2 * v297);
        v294 = *(_QWORD *)(v294 + 8);
      }
      while ( *(_DWORD *)(a3 + 64) > (int)v295 );
      v16 = v391.m256i_u64[1];
      v18 = v391.m256i_i64[0];
      v17 = v391.m256i_i64[2];
    }
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  memset(&v391, 0, 24);
  v19 = *(_QWORD *)(a2 + 216);
  if ( v19 )
  {
    *(_QWORD *)(a2 + 224) = 0;
    qfree(v19);
    v20 = v391.m256i_i64[0];
    *(_QWORD *)(a2 + 216) = v18;
    *(_QWORD *)(a2 + 224) = v16;
    *(_QWORD *)(a2 + 232) = v17;
    if ( v20 )
    {
      v391.m256i_i64[1] = 0;
      qfree(v20);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 216) = v18;
    *(_QWORD *)(a2 + 224) = v16;
    *(_QWORD *)(a2 + 232) = v17;
  }
  v340 = 0;
  v330 = &v340;
  v21 = *(int *)(a2 + 72);
  v341 = 0;
  sub_C330(&v340, v21);
  v22 = *(int *)(a2 + 72);
  v342 = 0;
  v23 = &v342;
  v328 = &v342;
  v343 = 0;
  sub_C330(&v342, v22);
  v24 = *(_DWORD *)(a2 + 56);
  v25 = 0;
  v344 = 0;
  v346 = 0;
  v345 = 0;
  v347 = 0;
  if ( v24 < 0 )
    goto LABEL_30;
  do
  {
    while ( 1 )
    {
      v26 = 16LL * v25;
      v27 = (const char *)(v26 + v340);
      hexdsp = (void (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(v23, (const char *)v22);
      hexdsp(205, v27, (unsigned int)v25);
      v29 = v342 + v26;
      v30 = (void (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(205, v27);
      v22 = v29;
      v23 = &qword_C8 + 5;
      v30(205, v29, (unsigned int)v25);
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 64) + 24LL * v25 + 8) )
      {
        v31 = v345;
        v22 = v344;
        if ( *((_QWORD *)&v345 + 1) < (unsigned __int64)(v345 + 1) )
        {
          v23 = &v344;
          v344 = qvector_reserve(&v344, v344, v345 + 1, 4);
          v22 = v344;
          v31 = v345;
        }
        *(_DWORD *)(v22 + 4 * v31) = v25;
        *(_QWORD *)&v345 = v345 + 1;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 88) + 24LL * v25 + 8) )
        break;
      if ( ++v25 > v24 )
        goto LABEL_29;
    }
    v32 = v347;
    v22 = v346;
    if ( *((_QWORD *)&v347 + 1) < (unsigned __int64)(v347 + 1) )
    {
      v23 = &v346;
      v346 = qvector_reserve(&v346, v346, v347 + 1, 4);
      v22 = v346;
      v32 = v347;
    }
    *(_DWORD *)(v22 + 4 * v32) = v25++;
    *(_QWORD *)&v347 = v347 + 1;
  }
  while ( v25 <= v24 );
LABEL_29:
  if ( (_QWORD)v345 == 1 )
  {
    v314 = 0;
    v34 = 0;
    v308 = a2 + 16;
  }
  else
  {
LABEL_30:
    v33 = *(_QWORD *)(a2 + 72);
    v308 = a2 + 16;
    v34 = v33;
    v35 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v23, (const char *)v22);
    v35(264, a2 + 16, (unsigned int)(v33 + 1));
    v36 = (int *)v344;
    v37 = (int *)(v344 + 4 * v345);
    if ( (int *)v344 != v37 )
    {
      v38 = 24LL * (int)v33;
      do
      {
        v39 = *v36;
        v40 = (__int64 *)(*(_QWORD *)(a2 + 64) + 24LL * *v36);
        v41 = (_DWORD *)*v40;
        v42 = v40[1];
        v43 = (_DWORD *)(*v40 + 4 * v42);
        if ( (_DWORD *)*v40 == v43 )
          goto LABEL_148;
        v44 = (_DWORD *)*v40;
        while ( (_DWORD)v33 != *v44 )
        {
          if ( v43 == ++v44 )
            goto LABEL_148;
        }
        if ( v44 == v43 )
        {
LABEL_148:
          if ( v40[2] < (unsigned __int64)(v42 + 1) )
          {
            v320.m128_u64[0] = v38;
            v219 = qvector_reserve(v40, v41, v42 + 1, 4);
            v38 = v320.m128_u64[0];
            v220 = v40[1];
            *v40 = v219;
            v43 = (_DWORD *)(v219 + 4 * v220);
          }
          *v43 = v33;
          ++v40[1];
          v121 = (__int64 *)(v38 + *(_QWORD *)(a2 + 88));
          v122 = v121[1];
          v123 = *v121;
          if ( v121[2] < (unsigned __int64)(v122 + 1) )
          {
            v320.m128_u64[0] = v38;
            v123 = qvector_reserve(v121, v123, v122 + 1, 4);
            v38 = v320.m128_u64[0];
            *v121 = v123;
            v122 = v121[1];
          }
          *(_DWORD *)(v123 + 4 * v122) = v39;
          ++v121[1];
        }
        ++v36;
      }
      while ( v37 != v36 );
    }
    sub_C330(v330, *(int *)(a2 + 72));
    v23 = v328;
    v22 = *(int *)(a2 + 72);
    sub_C330(v328, v22);
    *(_DWORD *)(a2 + 56) = v33;
    v314 = 1;
  }
  v358 = 0;
  v360 = nullptr;
  v359 = 0;
  v361 = 0;
  v45 = (__int64 (__fastcall *)(__int64, __int64, __int64 *))get_hexdsp(v23, (const char *)v22);
  m128i_i64 = v308;
  v47 = (__m128i *)(&qword_100 + 6);
  v320.m128_u64[0] = (unsigned __int64)&v358;
  v48 = v45(262, v308, &v358);
  v362 = 0;
  v49 = v48 - 1;
  v364 = 0;
  v363 = 0;
  v365 = 0;
  if ( (int)v359 >= 0 )
  {
    v221 = v359;
    if ( (_DWORD)v359 )
    {
      v47 = (__m128i *)&v362;
      m128i_i64 = 0;
      v362 = qvector_reserve(&v362, 0, (int)v359, 4);
      v222 = v363;
      if ( (unsigned __int64)v363 < v221 )
      {
        *(_DWORD *)(v362 + 4 * v363) = -1;
        v223 = v222 + 1;
        if ( v223 < v221 )
        {
          do
            *(_DWORD *)(v362 + 4 * v223++) = -1;
          while ( v221 != v223 );
        }
      }
      *(_QWORD *)&v363 = v221;
    }
  }
  if ( v24 >= 0 )
  {
    v50 = 0;
    while ( 1 )
    {
      v54 = v361;
      if ( !(_QWORD)v361 )
      {
        v55 = v359;
        LODWORD(v335[0]) = -1;
        if ( !(_QWORD)v359 )
        {
          v51 = v50;
          goto LABEL_70;
        }
        m128i_i64 = (__int64)v360;
        if ( v335 < v360 || v335 >= (void **)((char *)v360 + 4 * *((_QWORD *)&v361 + 1)) )
        {
          v58 = 0;
          if ( *((_QWORD *)&v361 + 1) >= (unsigned __int64)v359
            || (v47 = (__m128i *)&v360,
                v360 = (void **)qvector_reserve(&v360, v360, v359, 4),
                m128i_i64 = (__int64)v360,
                v58 = v361,
                (unsigned __int64)v361 < v55) )
          {
            while ( 1 )
            {
              *(_DWORD *)(m128i_i64 + 4 * v58++) = v335[0];
              if ( v58 == v55 )
                break;
              m128i_i64 = (__int64)v360;
            }
          }
        }
        else
        {
          v56 = 0;
          if ( *((_QWORD *)&v361 + 1) >= (unsigned __int64)v359
            || (v47 = (__m128i *)&v360,
                v300 = qvector_reserve(&v360, v360, v359, 4),
                v360 = (void **)v300,
                m128i_i64 = v300,
                v56 = v361,
                (unsigned __int64)v361 < v55) )
          {
            while ( 1 )
            {
              *(_DWORD *)(m128i_i64 + 4 * v56++) = -1;
              if ( v56 == v55 )
                break;
              m128i_i64 = (__int64)v360;
            }
          }
        }
        *(_QWORD *)&v361 = v55;
        do
        {
          v57 = *(int *)(v358 + 4 * v54);
          if ( (_DWORD)v57 != -1 )
            *((_DWORD *)v360 + v57) = v54;
          ++v54;
        }
        while ( v54 != v55 );
        v54 = v361;
      }
      v51 = v50;
      if ( v50 >= v54 || (v52 = *((_DWORD *)v360 + v50), v52 == -1) )
      {
LABEL_70:
        if ( !(_QWORD)v365 )
        {
          v59 = v363;
          v385.m128i_i32[0] = -1;
          if ( (_QWORD)v363 )
          {
            v53 = -1;
LABEL_73:
            m128i_i64 = v364;
            v47 = &v385;
            if ( (unsigned __int64)&v385 < v364 || (unsigned __int64)&v385 >= v364 + 4LL * *((_QWORD *)&v365 + 1) )
            {
              if ( *((_QWORD *)&v365 + 1) < v59 )
              {
                v47 = (__m128i *)&v364;
                v321 = (char *)v59;
                v364 = qvector_reserve(&v364, v364, v59, 4);
                v59 = (unsigned __int64)v321;
              }
              v63 = v365;
              if ( (unsigned __int64)v365 < v59 )
              {
                do
                {
                  m128i_i64 = v385.m128i_u32[0];
                  *(_DWORD *)(v364 + 4 * v63++) = v385.m128i_i32[0];
                }
                while ( v59 != v63 );
              }
            }
            else
            {
              if ( *((_QWORD *)&v365 + 1) < v59 )
              {
                v47 = (__m128i *)&v364;
                v321 = (char *)v59;
                v364 = qvector_reserve(&v364, v364, v59, 4);
                v59 = (unsigned __int64)v321;
              }
              v60 = v365;
              if ( (unsigned __int64)v365 < v59 )
              {
                do
                  *(_DWORD *)(v364 + 4 * v60++) = -1;
                while ( v59 != v60 );
              }
            }
            *(_QWORD *)&v365 = v59;
            v61 = 0;
            do
            {
              v62 = *(int *)(v362 + 4 * v61);
              if ( (_DWORD)v62 != -1 )
              {
                m128i_i64 = v364;
                *(_DWORD *)(v364 + 4 * v62) = v61;
              }
              ++v61;
            }
            while ( v59 != v61 );
LABEL_45:
            if ( v53 >= 0 && v53 < (unsigned __int64)v363 && v51 < (unsigned __int64)v365 )
            {
              *(_DWORD *)(v362 + 4LL * v53) = v50;
              *(_DWORD *)(v364 + 4 * v51) = v53;
            }
          }
        }
        if ( v24 < ++v50 )
          break;
      }
      else
      {
        v53 = v49 - v52;
        if ( (_QWORD)v365 )
          goto LABEL_45;
        v59 = v363;
        v385.m128i_i32[0] = -1;
        if ( (_QWORD)v363 )
          goto LABEL_73;
        if ( v24 < ++v50 )
          break;
      }
    }
  }
  v64 = (signed int *)v346;
  v387 = nullptr;
  *(_OWORD *)v386 = 0;
  v388[2] = v330;
  v388[0] = 0;
  v388[3] = v308;
  v388[1] = 0;
  v389 = 0;
  v65 = (signed int *)(v346 + 4 * v347);
  v385 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_8C450), (__m128i)(unsigned __int64)&v362);
  v390 = 0;
  if ( (signed int *)v346 != v65 )
  {
    do
    {
      while ( 1 )
      {
        v326 = &v385;
        v66 = *v64;
        v67 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v47, (const char *)m128i_i64);
        v326 = &v385;
        v47 = (__m128i *)(&qword_C8 + 5);
        m128i_i64 = (__int64)v388;
        if ( v67(205, v388, (unsigned int)v66) )
          break;
        if ( v65 == ++v64 )
          goto LABEL_102;
      }
      v68 = (_QWORD *)v385.m128i_i64[1];
      v69 = *(_QWORD *)(v385.m128i_i64[1] + 32);
      if ( !v69 )
      {
        v190 = *(char **)(v385.m128i_i64[1] + 8);
        LODWORD(v336) = -1;
        if ( !v190 )
          goto LABEL_311;
        v191 = *(_QWORD *)(v385.m128i_i64[1] + 24);
        v192 = *(_QWORD *)(v385.m128i_i64[1] + 40);
        v193 = v385.m128i_i64[1] + 24;
        if ( (unsigned __int64)&v336 < v191 || (unsigned __int64)&v336 >= v191 + 4 * v192 )
        {
          v194 = 0;
          if ( v192 >= (unsigned __int64)v190
            || (v322 = 0,
                v326 = &v385,
                v321 = v190,
                v299 = qvector_reserve(v193, v191, v190, 4),
                v68[3] = v299,
                v190 = v321,
                v191 = v299,
                v194 = v68[4],
                v69 = v322,
                v194 < (unsigned __int64)v321) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v191 + 4 * v194++) = v336;
              if ( (char *)v194 == v190 )
                break;
              v191 = v68[3];
            }
          }
        }
        else
        {
          v228 = 0;
          if ( v192 >= (unsigned __int64)v190
            || (v322 = 0,
                v326 = &v385,
                v321 = v190,
                v303 = qvector_reserve(v193, v191, v190, 4),
                v68[3] = v303,
                v190 = v321,
                v191 = v303,
                v228 = v68[4],
                v69 = v322,
                v228 < (unsigned __int64)v321) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v191 + 4 * v228++) = -1;
              if ( (char *)v228 == v190 )
                break;
              v191 = v68[3];
            }
          }
        }
        v68[4] = v190;
        do
        {
          v195 = *(int *)(*v68 + 4 * v69);
          if ( (_DWORD)v195 != -1 )
            *(_DWORD *)(v68[3] + 4 * v195) = v69;
          ++v69;
        }
        while ( (char *)v69 != v190 );
      }
      if ( v66 < 0 || (unsigned __int64)v66 >= v68[4] )
      {
LABEL_311:
        v70 = _mm_cvtsi32_si128(0xFFFFFFFF);
        goto LABEL_99;
      }
      v70 = _mm_cvtsi32_si128(*(_DWORD *)(v68[3] + 4LL * v66));
LABEL_99:
      v391.m256i_i64[0] = _mm_unpacklo_epi32(v70, _mm_cvtsi32_si128(v66)).m128i_u64[0];
      if ( v386[1] == v387 )
      {
        v326 = &v385;
        sub_5A340((__int64)v386, v329);
        v71 = (char *)v386[1];
      }
      else
      {
        *(_QWORD *)v386[1] = v391.m256i_i64[0];
        v71 = (char *)v386[1] + 8;
        v386[1] = (char *)v386[1] + 8;
      }
      v47 = (__m128i *)v386[0];
      ++v64;
      m128i_i64 = ((v71 - (char *)v386[0]) >> 3) - 1;
      sub_57040((__int64)v386[0], m128i_i64, 0, *((_QWORD *)v71 - 1));
    }
    while ( v65 != v64 );
  }
LABEL_102:
  v72 = &v385;
  v326 = &v385;
  v320 = _mm_loadh_ps((const double *)v320.m128_u64);
  sub_5A460((__int64)&v385);
  v73 = (signed int *)v344;
  v392 = 0;
  si128 = _mm_load_si128((const __m128i *)&v320);
  v393[0] = 0;
  v393[2] = v328;
  v393[1] = 0;
  v393[3] = v308;
  v394 = 0;
  v75 = (signed int *)(v344 + 4 * v345);
  *(_OWORD *)&v391.m256i_u64[2] = 0;
  v395 = 0;
  *(__m128i *)v391.m256i_i8 = si128;
  if ( v75 != (signed int *)v344 )
  {
    do
    {
      while ( 1 )
      {
        v76 = *v73;
        v77 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v72, (const char *)m128i_i64);
        m128i_i64 = (__int64)v393;
        v72 = (__m128i *)(&qword_C8 + 5);
        if ( v77(205, v393, (unsigned int)v76) )
          break;
        if ( v75 == ++v73 )
          goto LABEL_113;
      }
      v78 = (_QWORD *)v391.m256i_i64[1];
      v79 = *(_QWORD *)(v391.m256i_i64[1] + 32);
      if ( !v79 )
      {
        v196 = *(_QWORD *)(v391.m256i_i64[1] + 8);
        LODWORD(v348) = -1;
        if ( !v196 )
          goto LABEL_313;
        v197 = *(_QWORD *)(v391.m256i_i64[1] + 24);
        v198 = *(_QWORD *)(v391.m256i_i64[1] + 40);
        v199 = v391.m256i_i64[1] + 24;
        if ( (unsigned __int64)&v348 < v197 || (unsigned __int64)&v348 >= v197 + 4 * v198 )
        {
          v200 = 0;
          if ( v198 >= v196
            || (v321 = (char *)v391.m256i_i64[1],
                v320.m128_u64[0] = v196,
                v298 = qvector_reserve(v199, v197, v196, 4),
                v78 = v321,
                v197 = v298,
                v196 = v320.m128_u64[0],
                *((_QWORD *)v321 + 3) = v298,
                v200 = v78[4],
                v200 < v196) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v197 + 4 * v200++) = v348;
              if ( v200 == v196 )
                break;
              v197 = v78[3];
            }
          }
        }
        else
        {
          v227 = 0;
          if ( v198 >= v196
            || (v321 = (char *)v391.m256i_i64[1],
                v320.m128_u64[0] = v196,
                v304 = qvector_reserve(v199, v197, v196, 4),
                v78 = v321,
                v197 = v304,
                v196 = v320.m128_u64[0],
                *((_QWORD *)v321 + 3) = v304,
                v227 = v78[4],
                v227 < v196) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v197 + 4 * v227++) = -1;
              if ( v227 == v196 )
                break;
              v197 = v78[3];
            }
          }
        }
        v78[4] = v196;
        do
        {
          v201 = *(int *)(*v78 + 4 * v79);
          if ( (_DWORD)v201 != -1 )
            *(_DWORD *)(v78[3] + 4 * v201) = v79;
          ++v79;
        }
        while ( v79 != v196 );
      }
      if ( v76 < 0 || (unsigned __int64)v76 >= v78[4] )
      {
LABEL_313:
        v80 = _mm_cvtsi32_si128(0xFFFFFFFF);
        goto LABEL_110;
      }
      v80 = _mm_cvtsi32_si128(*(_DWORD *)(v78[3] + 4LL * v76));
LABEL_110:
      s = (void *)_mm_unpacklo_epi32(v80, _mm_cvtsi32_si128(v76)).m128i_u64[0];
      if ( v391.m256i_i64[3] == v392 )
      {
        sub_5A340((__int64)&v391.m256i_i64[2], &s);
        v81 = v391.m256i_i64[3];
      }
      else
      {
        *(_QWORD *)v391.m256i_i64[3] = s;
        v81 = v391.m256i_i64[3] + 8;
        v391.m256i_i64[3] += 8;
      }
      v72 = (__m128i *)v391.m256i_i64[2];
      ++v73;
      m128i_i64 = ((v81 - v391.m256i_i64[2]) >> 3) - 1;
      sub_57040(v391.m256i_i64[2], m128i_i64, 0, *(_QWORD *)(v81 - 8));
    }
    while ( v75 != v73 );
  }
LABEL_113:
  v82 = (__int8 *)v329;
  sub_5A460((__int64)v329);
  if ( v314 )
  {
    v85 = (unsigned int *)v344;
    v86 = (unsigned int *)(v344 + 4 * v345);
    if ( (unsigned int *)v344 != v86 )
    {
      do
      {
        v87 = *v85;
        v88 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))get_hexdsp(v82, (const char *)m128i_i64);
        m128i_i64 = v308;
        v82 = (_BYTE *)(&qword_108 + 2);
        v88(266, v308, v87, v34);
        ++v85;
      }
      while ( v86 != v85 );
    }
    v89 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v82, (const char *)m128i_i64);
    m128i_i64 = v308;
    v82 = (__int8 *)&qword_108;
    v89(264, v308, v34);
    *(_DWORD *)(a2 + 56) = v34 - 1;
  }
  v309 = v339;
  if ( (_QWORD)v339 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v95 = v338 + (--v309 << 7);
        if ( *(_QWORD *)v95 != -1 )
          break;
        if ( *(_BYTE *)(v95 + 12) )
          break;
        v96 = (unsigned __int8 (__fastcall *)(__int64, __int64))get_hexdsp(v82, (const char *)m128i_i64);
        m128i_i64 = v95 + 40;
        v82 = (_BYTE *)(&qword_D8 + 1);
        if ( !v96(217, v95 + 40) )
          break;
        v97 = (unsigned __int8 (__fastcall *)(__int64, __int64))get_hexdsp(217, (const char *)m128i_i64);
        m128i_i64 = v95 + 56;
        v82 = (_BYTE *)(&qword_D8 + 1);
        if ( !v97(217, v95 + 56) )
          break;
        if ( !v309 )
        {
LABEL_126:
          v98 = 0.0;
          v348 = 0;
          v374 = &v348;
          v375 = &v366;
          v373 = a2;
          v376 = a3;
          v377 = a2;
          v378 = v330;
          v333 = 0;
          v379 = v328;
          v334 = 0;
          v349 = 0;
          LODWORD(v322) = v339 - 1;
          if ( (int)v339 - 1 >= 0 )
          {
            v323 = (void **)((__int64)(int)v322 << 7);
            do
            {
              v99 = (char *)v323 + v338;
              v100 = *(char **)((char *)v323 + v338) + 1 == nullptr;
              v321 = (char *)v323 + v338;
              if ( !v100
                || v99[12]
                || (v185 = v99 + 40,
                    v186 = (unsigned __int8 (__fastcall *)(__int64, char *))get_hexdsp(v82, (const char *)m128i_i64),
                    m128i_i64 = (__int64)v185,
                    !v186(217, v185))
                || (v187 = v321 + 56,
                    v188 = (unsigned __int8 (__fastcall *)(__int64, char *))get_hexdsp(217, (const char *)m128i_i64),
                    m128i_i64 = (__int64)v187,
                    v82 = (_BYTE *)(&qword_D8 + 1),
                    !v188(217, v187)) )
              {
                v335[0] = 0;
                v335[1] = 0;
                for ( i = *((__int64 **)v321 + 11); i; i = (__int64 *)*i )
                {
                  v315 = *((_DWORD *)i + 4);
                  if ( v315 == -1 )
                  {
                    sub_64B50(
                      (unsigned int)&s,
                      *(_QWORD *)a2,
                      (unsigned int)"State %d has a catch handler with no block",
                      v322,
                      v84,
                      v94);
                    v202 = v327;
                    v203 = _mm_loadu_si128((const __m128i *)v381);
                    v204 = v335[0];
                    *(_QWORD *)v327 = s;
                    *(_BYTE *)(v202 + 24) = 1;
                    *(__m128i *)(v202 + 8) = v203;
                    qfree(v204);
                    goto LABEL_273;
                  }
                  v102 = *((_BYTE *)i + 20);
                  v350 = nullptr;
                  v351 = 0;
                  v320.m128_i8[0] = v102;
                  sub_FB10((__int64 *)&v350, (__int64)"Catch handler %a", v98);
                  v336 = 0;
                  v337 = 0;
                  v103 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(&v350, "Catch handler %a", v98);
                  for ( j = v103(227, i + 3, 0); *((_DWORD *)i + 8) != j; j = v108(227, i + 3, (unsigned int)(j + 1)) )
                  {
                    v109 = 16LL * j;
                    v110 = **(_DWORD **)(*(_QWORD *)(a2 + 64) + 24LL * j);
                    sub_6E380(&s, v109 + v340, 0);
                    if ( s )
                    {
                      v381[0] = nullptr;
                      qfree(s);
                    }
                    sub_6E380(&s, v109 + v342, 0);
                    if ( s )
                    {
                      v381[0] = nullptr;
                      qfree(s);
                    }
                    v111 = 16LL * v110;
                    sub_6E380(&s, v111 + v340, 0);
                    if ( s )
                    {
                      v381[0] = nullptr;
                      qfree(s);
                    }
                    v112 = (const char *)(v111 + v342);
                    sub_6E380(&s, v111 + v342, 0);
                    v113 = s;
                    if ( s )
                    {
                      v381[0] = nullptr;
                      qfree(s);
                    }
                    v114 = v342 + v111;
                    v115 = (void (__fastcall *)(__int64, __int64 *, __int64))get_hexdsp(v113, v112);
                    v115(207, &v336, v114);
                    v107 = v352;
                    v106 = (unsigned int)j;
                    v118 = sub_56F80((__int64)v352, (unsigned int)j, (unsigned int)v110, v116, v117);
                    if ( v119 )
                    {
                      v120 = v119 == &v353 || v118 != 0;
                      if ( !v120 )
                      {
                        if ( j < v119[8] )
                        {
                          v120 = 1;
                        }
                        else if ( j == v119[8] )
                        {
                          v120 = v110 < v119[9];
                        }
                      }
                      v312 = v119;
                      v106 = operator new(0x28u);
                      v107 = (char *)v120;
                      *(_QWORD *)&v98 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(j), _mm_cvtsi32_si128(v110)).m128i_u64[0];
                      *(double *)(v106 + 32) = v98;
                      std::_Rb_tree_insert_and_rebalance(v120, v106, v312, &v353);
                      ++v357;
                    }
                    v108 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v107, (const char *)v106);
                  }
                  sub_5B140(&v373, v315, v320.m128_i8[0], (__int64)&v336, v105);
                  v163 = (void (__fastcall *)(__int64, _QWORD *, __int64 *))get_hexdsp(&v373, (const char *)v315);
                  m128i_i64 = (__int64)v335;
                  v163(207, v335, &v336);
                  qfree(v336);
                  if ( v350 )
                  {
                    *(_QWORD *)&v351 = 0;
                    qfree(v350);
                  }
                }
                if ( v321[24] )
                {
                  v164 = "catch";
                  if ( !*((_QWORD *)v321 + 12) )
                    v164 = "unwind";
                  v98 = 0.0;
                  *(_OWORD *)v381 = 0;
                  s = nullptr;
                  sub_FB10((__int64 *)&s, (__int64)"%s block", v164);
                  v166 = (int *)v321;
                  v167 = (unsigned __int8)v321[28];
                  if ( !v321[24] )
                    sub_7964(&s, "%s block", (const char *)v167);
                  m128i_i64 = *((unsigned int *)v321 + 5);
                  LODWORD(v350) = sub_5B140(&v373, m128i_i64, v167, (__int64)v335, v165);
                  if ( v166[8] > 1 )
                  {
                    m128i_i64 = (__int64)&v350;
                    v224 = *((_QWORD *)v321 + 12) == 0;
                    v225 = sub_58AA0((char **)(a2 + 240), (int *)&v350);
                    v226 = v322;
                    v225[4] = v224;
                    v225[5] = 0;
                    *(_DWORD *)v225 = v226;
                  }
                  if ( s )
                  {
                    v381[0] = nullptr;
                    qfree(s);
                  }
                }
                if ( v321[12] )
                {
                  v98 = 0.0;
                  v168 = "try";
                  s = nullptr;
                  *(_OWORD *)v381 = 0;
                  if ( !*((_QWORD *)v321 + 12) )
                    v168 = "wind";
                  sub_FB10((__int64 *)&s, (__int64)"%s block", v168);
                  v170 = (unsigned __int8)v321[16];
                  if ( !v321[12] )
                    sub_7964(&s, "%s block", (const char *)v170);
                  m128i_i64 = *((unsigned int *)v321 + 2);
                  sub_5B140(&v373, m128i_i64, v170, (__int64)&v333, v169);
                  if ( s )
                  {
                    v381[0] = nullptr;
                    qfree(s);
                  }
                }
                v82 = (__int8 *)v335[0];
                qfree(v335[0]);
              }
              LODWORD(v322) = v322 - 1;
              v323 -= 16;
            }
            while ( (_DWORD)v322 != -1 );
            if ( (int)v349 > 0 )
            {
              v320.m128_u64[0] = (unsigned __int64)v352;
              v324 = (int *)(32LL * ((int)v349 - 1));
              v325 = (int *)(32 * ((int)v349 - 1 - (unsigned __int64)(unsigned int)(v349 - 1)));
              while ( 1 )
              {
                v171 = (char *)v324 + v348 + 16;
                v323 = (void **)((char *)v324 + v348);
                sub_6E380(&s, v171, 0);
                v172 = s;
                if ( s )
                {
                  v381[0] = nullptr;
                  qfree(s);
                }
                v173 = v323;
                v317 = *((_DWORD *)v323 + 2);
                v174 = *(_DWORD *)v323;
                s = nullptr;
                v313 = v174;
                *(_OWORD *)v381 = 0;
                v175 = (__int64 (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(v172, v171);
                m128i_i64 = (__int64)v171;
                p_s = (void **)(&qword_E0 + 3);
                v310 = v175(227, v171, 0);
                if ( *((_DWORD *)v173 + 6) != v310 )
                {
                  do
                  {
                    v322 = 24LL * v310;
                    v177 = (unsigned int **)(*(_QWORD *)(a2 + 64) + v322);
                    v178 = *v177;
                    v179 = (__int64)&(*v177)[(_QWORD)v177[1]];
                    if ( *v177 != (unsigned int *)v179 )
                    {
                      do
                      {
                        v180 = *v178;
                        v181 = (unsigned __int8 (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(
                                                                                                p_s,
                                                                                                (const char *)m128i_i64);
                        m128i_i64 = (__int64)v171;
                        p_s = (void **)(&qword_D0 + 5);
                        if ( !v181(213, v171, v180) && v317 != v180 )
                        {
                          v350 = (char *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v310), _mm_cvtsi32_si128(v180)).m128i_u64[0];
                          v321 = v350;
                          sub_589D0(v320.m128_i64[0], (unsigned int *)&v350, v182, v183, v184);
                          v239 = v321;
                          v240 = v381[0];
                          m128i_i64 = (__int64)s;
                          v350 = v321;
                          p_s = (void **)((char *)v381[0] + 1);
                          if ( &v350 < s || &v350 >= (char **)((char *)s + 8 * (__int64)v381[1]) )
                          {
                            if ( v381[1] < p_s )
                            {
                              p_s = &s;
                              s = (void *)qvector_reserve(&s, s, (char *)v381[0] + 1, 8);
                              m128i_i64 = (__int64)s;
                              v240 = v381[0];
                            }
                            *(_QWORD *)(m128i_i64 + 8LL * (_QWORD)v240) = v350;
                          }
                          else
                          {
                            if ( v381[1] < p_s )
                            {
                              p_s = &s;
                              s = (void *)qvector_reserve(&s, s, (char *)v381[0] + 1, 8);
                              m128i_i64 = (__int64)s;
                              v239 = v321;
                              v240 = v381[0];
                            }
                            *(_QWORD *)(m128i_i64 + 8LL * (_QWORD)v240) = v239;
                          }
                          ++v381[0];
                        }
                        ++v178;
                      }
                      while ( (unsigned int *)v179 != v178 );
                    }
                    v229 = (unsigned int **)(*(_QWORD *)(a2 + 88) + v322);
                    v230 = *v229;
                    v231 = (__int64)&(*v229)[(_QWORD)v229[1]];
                    if ( *v229 != (unsigned int *)v231 )
                    {
                      do
                      {
                        v232 = *v230;
                        v233 = (__int64 (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(
                                                                                        p_s,
                                                                                        (const char *)m128i_i64);
                        m128i_i64 = (__int64)v171;
                        p_s = (void **)(&qword_D0 + 5);
                        v234 = v233(213, v171, v232);
                        if ( v313 != v232 && !v234 )
                        {
                          v350 = (char *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v232), _mm_cvtsi32_si128(v310)).m128i_u64[0];
                          v321 = v350;
                          sub_589D0(v320.m128_i64[0], (unsigned int *)&v350, v235, v236, v237);
                          v241 = v321;
                          v242 = v381[0];
                          m128i_i64 = (__int64)s;
                          v350 = v321;
                          p_s = (void **)((char *)v381[0] + 1);
                          if ( &v350 < s || &v350 >= (char **)((char *)s + 8 * (__int64)v381[1]) )
                          {
                            if ( v381[1] < p_s )
                            {
                              p_s = &s;
                              s = (void *)qvector_reserve(&s, s, (char *)v381[0] + 1, 8);
                              m128i_i64 = (__int64)s;
                              v242 = v381[0];
                            }
                            *(_QWORD *)(m128i_i64 + 8LL * (_QWORD)v242) = v350;
                          }
                          else
                          {
                            if ( v381[1] < p_s )
                            {
                              p_s = &s;
                              s = (void *)qvector_reserve(&s, s, (char *)v381[0] + 1, 8);
                              m128i_i64 = (__int64)s;
                              v241 = v321;
                              v242 = v381[0];
                            }
                            *(_QWORD *)(m128i_i64 + 8LL * (_QWORD)v242) = v241;
                          }
                          ++v381[0];
                        }
                        ++v230;
                      }
                      while ( (unsigned int *)v231 != v230 );
                    }
                    v238 = (__int64 (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(
                                                                                    p_s,
                                                                                    (const char *)m128i_i64);
                    m128i_i64 = (__int64)v171;
                    p_s = (void **)(&qword_E0 + 3);
                    v310 = v238(227, v171, (unsigned int)(v310 + 1));
                  }
                  while ( *((_DWORD *)v323 + 6) != v310 );
                }
                v82 = (__int8 *)s;
                if ( s )
                {
                  v381[0] = nullptr;
                  qfree(s);
                }
                if ( v325 == v324 )
                  break;
                v324 -= 8;
              }
            }
          }
          goto LABEL_354;
        }
      }
      s = nullptr;
      v381[0] = nullptr;
      v90 = (void (__fastcall *)(__int64, void **, __int64))get_hexdsp(v82, (const char *)m128i_i64);
      v321 = (char *)(v95 + 40);
      v90(203, &s, v95 + 40);
      v91 = (void (__fastcall *)(__int64, void **, __int64))get_hexdsp(203, (const char *)&s);
      v91(207, &s, v95 + 56);
      v92 = (__int64 (__fastcall *)(__int64, void **))get_hexdsp(207, (const char *)&s);
      m128i_i64 = (__int64)&s;
      v93 = v92(217, &s);
      if ( !v93 )
        break;
LABEL_120:
      v82 = (__int8 *)s;
      qfree(s);
      if ( !v309 )
        goto LABEL_126;
    }
    v124 = (__int64 (__fastcall *)(__int64, void **, _QWORD))get_hexdsp(217, (const char *)&s);
    v125 = &s;
    v126 = (unsigned __int64 *)(&qword_E0 + 3);
    v127 = v124(227, &s, 0);
    v128 = 0;
    if ( LODWORD(v381[0]) == v127 )
    {
LABEL_176:
      if ( !*(_BYTE *)(v95 + 24) )
        sub_7964(227, (const char *)&s);
      v135 = *(_DWORD *)(v95 + 20);
      v136 = (__int64 (__fastcall *)(__int64, char *, _QWORD))get_hexdsp(227, (const char *)&s);
      v137 = v321;
      v138 = v136(213, v321, v135);
      *(_BYTE *)(v95 + 28) = v138 != 0;
      v139 = v138 == 0;
      if ( !*(_BYTE *)(v95 + 24) )
        sub_7964(213, v137);
      v140 = *(_DWORD *)(v95 + 20);
      if ( v140 >= *(_DWORD *)(a3 + 64) )
      {
        if ( !under_debugger )
        {
          interr(52719);
LABEL_439:
          if ( !under_debugger )
            interr(52719);
        }
        BUG();
      }
      v141 = *(_QWORD *)(a2 + 216);
      v142 = *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v140) + 368LL) + 4LL * v139);
      for ( k = v142; (*(_BYTE *)(v141 + 4 * v142) & 2) != 0; k = v142 )
        v142 = **(int **)(*(_QWORD *)(a2 + 64) + 24 * v142);
      v323 = &v366;
      v324 = (int *)&v373;
      v373 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v140), _mm_cvtsi32_si128(k)).m128i_u64[0];
      sub_5AFE0(&v366, (int *)&v373);
      v144 = (__int64 (__fastcall *)(__int64, void **, _QWORD))get_hexdsp(&v366, (const char *)&v373);
      m128i_i64 = (__int64)&s;
      v145 = (void **)(&qword_E0 + 3);
      v146 = v144(227, &s, 0);
      v325 = (int *)v352;
      if ( LODWORD(v381[0]) != v146 )
      {
        while ( 1 )
        {
          v148 = *(_BYTE *)(v95 + 24);
          if ( !v148 )
            sub_7964(227, (const char *)&s);
          if ( *(_DWORD *)(v95 + 20) != v146 )
          {
            v149 = (__int64 (__fastcall *)(__int64, char *, _QWORD))get_hexdsp(227, (const char *)&s);
            v316 = v149(213, v321, v146);
            if ( v146 >= *(_DWORD *)(a3 + 64) )
              goto LABEL_439;
            v151 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v146) + 368LL);
            v322 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v146);
            v152 = *(int *)(v151 + 4LL * (v316 == 0));
            v153 = *(_QWORD *)(a2 + 216);
            for ( m = *(_DWORD *)(v151 + 4LL * (v316 == 0)); (*(_BYTE *)(v153 + 4 * v152) & 2) != 0; m = v152 )
              v152 = **(int **)(*(_QWORD *)(a2 + 64) + 24 * v152);
            v320.m128_u64[0] = v151;
            v155 = sub_56F80((__int64)v325, v146, m, a2, v150);
            v157 = v320.m128_u64[0];
            if ( v156 )
            {
              v158 = v156 == &v353 || v155 != 0;
              if ( !v158 )
              {
                if ( (int)v146 < v156[8] )
                {
                  v158 = v148;
                }
                else if ( v146 == v156[8] )
                {
                  v158 = (int)m < v156[9];
                }
              }
              v320.m128_u64[0] = (unsigned __int64)v156;
              v159 = operator new(0x28u);
              *(_DWORD *)(v159 + 32) = v146;
              *(_DWORD *)(v159 + 36) = m;
              std::_Rb_tree_insert_and_rebalance(v158, v159, v320.m128_u64[0], &v353);
              ++v357;
              v157 = *(_QWORD *)(v322 + 368);
              v153 = *(_QWORD *)(a2 + 216);
            }
            v160 = *(int *)(v157 + 4LL * (v316 != 0));
            for ( n = *(_DWORD *)(v157 + 4LL * (v316 != 0)); (*(_BYTE *)(v153 + 4 * v160) & 2) != 0; n = v160 )
              v160 = **(int **)(*(_QWORD *)(a2 + 64) + 24 * v160);
            m128i_i64 = (__int64)v324;
            v145 = v323;
            v373 = __PAIR64__(n, v146);
            sub_5AFE0(v323, v324);
          }
          v147 = (__int64 (__fastcall *)(__int64, void **, _QWORD))get_hexdsp(v145, (const char *)m128i_i64);
          m128i_i64 = (__int64)&s;
          v145 = (void **)(&qword_E0 + 3);
          v146 = v147(227, &s, v146 + 1);
          if ( LODWORD(v381[0]) == v146 )
            goto LABEL_120;
        }
      }
      goto LABEL_120;
    }
    while ( 1 )
    {
      v131 = v361;
      if ( !(_QWORD)v361 )
      {
        v132 = v359;
        LODWORD(v350) = -1;
        if ( !(_QWORD)v359 )
          goto LABEL_175;
        v125 = v360;
        v126 = *((unsigned __int64 **)&v361 + 1);
        if ( &v350 < (char **)v360 || &v350 >= (char **)((char *)v360 + 4 * *((_QWORD *)&v361 + 1)) )
        {
          v162 = 0;
          if ( *((_QWORD *)&v361 + 1) >= (unsigned __int64)v359
            || (v126 = (unsigned __int64 *)&v360,
                v318 = v359,
                v189 = qvector_reserve(&v360, v360, v359, 4),
                v162 = v361,
                v132 = v318,
                v360 = (void **)v189,
                v125 = (void **)v189,
                (unsigned __int64)v361 < v318) )
          {
            while ( 1 )
            {
              *((_DWORD *)v125 + v162++) = (_DWORD)v350;
              if ( v162 == v132 )
                break;
              v125 = v360;
            }
          }
        }
        else
        {
          v133 = 0;
          if ( *((_QWORD *)&v361 + 1) >= (unsigned __int64)v359
            || (v126 = (unsigned __int64 *)&v360,
                v319 = v359,
                v243 = qvector_reserve(&v360, v360, v359, 4),
                v360 = (void **)v243,
                v125 = (void **)v243,
                v132 = v319,
                v133 = v361,
                (unsigned __int64)v361 < v319) )
          {
            while ( 1 )
            {
              *((_DWORD *)v125 + v133++) = -1;
              if ( v133 == v132 )
                break;
              v125 = v360;
            }
          }
        }
        *(_QWORD *)&v361 = v132;
        do
        {
          v134 = *(int *)(v358 + 4 * v131);
          if ( (_DWORD)v134 != -1 )
            *((_DWORD *)v360 + v134) = v131;
          ++v131;
        }
        while ( v131 != v132 );
      }
      if ( v127 >= 0 && v127 < (unsigned __int64)v361 )
      {
        v129 = *((_DWORD *)v360 + v127);
        goto LABEL_158;
      }
LABEL_175:
      v129 = -1;
LABEL_158:
      if ( (v93 & 1) == 0 || v128 < v129 )
      {
        *(_DWORD *)(v95 + 20) = v127;
        v128 = v129;
        *(_BYTE *)(v95 + 24) = 1;
      }
      v130 = (__int64 (__fastcall *)(__int64, void **, _QWORD))get_hexdsp(v126, (const char *)v125);
      v125 = &s;
      v126 = (unsigned __int64 *)(&qword_E0 + 3);
      v127 = v130(227, &s, (unsigned int)(v127 + 1));
      v93 = 1;
      if ( LODWORD(v381[0]) == v127 )
        goto LABEL_176;
    }
  }
  v348 = 0;
  v374 = &v348;
  v375 = &v366;
  v373 = a2;
  v376 = a3;
  v377 = a2;
  v378 = v330;
  v333 = 0;
  v379 = v328;
  v334 = 0;
  v349 = 0;
LABEL_354:
  v244 = v357;
  v245 = a2 + 192;
  if ( *(_QWORD *)(a2 + 208) < v357 )
  {
    v82 = (__int8 *)(a2 + 192);
    m128i_i64 = *(_QWORD *)(a2 + 192);
    *(_QWORD *)(a2 + 192) = qvector_reserve(a2 + 192, m128i_i64, v357, 8);
  }
  v246 = v355;
  v350 = nullptr;
  v351 = 0;
  v336 = 0;
  v337 = 0;
  if ( v355 == &v353 )
  {
    v252 = *(__m128i **)(a2 + 192);
    v254 = 8LL * *(_QWORD *)(a2 + 200);
    goto LABEL_369;
  }
  do
  {
    v247 = (unsigned int)v246[8];
    v248 = v246[9];
    if ( v369 )
    {
      v82 = (__int8 *)v367;
      v84 = (int)(v248 ^ v247);
      v244 = v84 % v367;
      v285 = *((__int64 **)v366 + v84 % v367);
      if ( !v285 )
        goto LABEL_401;
      v286 = (__int64 *)*v285;
      v83 = *(_QWORD *)(*v285 + 16);
      while ( v84 != v83 || __PAIR64__(v248, v247) != v286[1] )
      {
        m128i_i64 = *v286;
        if ( !*v286 )
          goto LABEL_401;
        v83 = *(_QWORD *)(m128i_i64 + 16);
        v285 = v286;
        v244 = v83 % v367;
        if ( (int)(v248 ^ v247) % v367 != v83 % v367 )
          goto LABEL_401;
        v286 = (__int64 *)*v286;
      }
      if ( !v285 || !*v285 )
      {
LABEL_401:
        v287 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(
                                                                  v82,
                                                                  (const char *)m128i_i64,
                                                                  v244,
                                                                  v83,
                                                                  v84,
                                                                  v247);
        v287(205, &v336, v248);
        v288 = v246[8];
        if ( *(_QWORD *)(a2 + 72) && (m128i_i64 = *(_QWORD *)(a2 + 64), *(_DWORD *)(m128i_i64 + 24 * v288 + 8) == 1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 216) + 4 * v288) & 2) == 0 )
          {
            v301 = v351;
            v302 = *((_QWORD *)v246 + 4);
            m128i_i64 = (__int64)v350;
            if ( *((_QWORD *)&v351 + 1) < (unsigned __int64)(v351 + 1) )
            {
              v350 = (char *)qvector_reserve(&v350, v350, v351 + 1, 8);
              m128i_i64 = (__int64)v350;
              v301 = v351;
            }
            *(_QWORD *)(m128i_i64 + 8 * v301) = v302;
            *(_QWORD *)&v351 = v351 + 1;
          }
        }
        else
        {
          v289 = *((_QWORD *)v246 + 4);
          v290 = *(_QWORD *)(a2 + 200);
          m128i_i64 = *(_QWORD *)(a2 + 192);
          if ( *(_QWORD *)(a2 + 208) < (unsigned __int64)(v290 + 1) )
          {
            m128i_i64 = qvector_reserve(v245, m128i_i64, v290 + 1, 8);
            *(_QWORD *)(a2 + 192) = m128i_i64;
            v290 = *(_QWORD *)(a2 + 200);
          }
          *(_QWORD *)(m128i_i64 + 8 * v290) = v289;
          ++*(_QWORD *)(a2 + 200);
        }
      }
    }
    else
    {
      v249 = v368;
      if ( !v368 )
        goto LABEL_401;
      while ( __PAIR64__(v248, v247) != v249[1] )
      {
        v249 = (_QWORD *)*v249;
        if ( !v249 )
          goto LABEL_401;
      }
    }
    v82 = (__int8 *)v246;
    v246 = (int *)std::_Rb_tree_increment(v246);
  }
  while ( v246 != &v353 );
  v250 = 8 * v351;
  v251 = *(_QWORD *)(a2 + 200);
  v252 = *(__m128i **)(a2 + 192);
  v253 = (8 * (__int64)v351) >> 3;
  v254 = 8 * v251;
  if ( v253 )
  {
    v255 = (__int64)v350;
    v256 = v253 + v251;
    v257 = 0;
    if ( *(_QWORD *)(a2 + 208) < v256 )
    {
      v252 = (__m128i *)qvector_reserve(v245, *(_QWORD *)(a2 + 192), v256, 8);
      *(_QWORD *)(a2 + 192) = v252;
      v257 = 8LL * *(_QWORD *)(a2 + 200) - v254;
    }
    v258 = &v252->m128i_i8[v254];
    v82 = &v258[v250];
    m128i_i64 = (__int64)v258;
    memmove(&v258[v250], v258, v257);
    v259 = 0;
    if ( v250 )
    {
      do
      {
        *(_QWORD *)&v258[v259] = *(_QWORD *)(v255 + v259);
        v259 += 8;
      }
      while ( v250 != v259 );
    }
    v260 = *(_QWORD *)(a2 + 200) + v253;
    v252 = *(__m128i **)(a2 + 192);
    *(_QWORD *)(a2 + 200) = v260;
    v254 = 8 * v260;
  }
LABEL_369:
  if ( &v252->m128i_i8[v254] != (__int8 *)v252 )
  {
    if ( v254 >> 3 )
    {
      _BitScanReverse64(&v261, v254 >> 3);
      sub_570C0(v252, &v252->m128i_u64[(unsigned __int64)v254 / 8], 2LL * (int)v261);
      if ( v254 > 128 )
      {
        v262 = v252 + 8;
        v82 = (__int8 *)v252;
        m128i_i64 = (__int64)v252[8].m128i_i64;
        sub_56E80(v252, v252 + 8);
        do
        {
          v263 = _mm_loadl_epi64(v262);
          v264 = &v262[-1].m128i_i8[8];
          v265 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v263, 229));
          if ( v262[-1].m128i_i32[3] >= v265 )
          {
            v266 = (__int64 *)v262;
          }
          else
          {
            do
            {
              *((_QWORD *)v264 + 1) = *(_QWORD *)v264;
              v266 = (__int64 *)v264;
              v264 -= 8;
            }
            while ( v265 > *((_DWORD *)v264 + 1) );
          }
          v262 = (const __m128i *)((char *)v262 + 8);
          *v266 = v263.m128i_i64[0];
        }
        while ( &v252->m128i_i8[v254] != (__int8 *)v262 );
        goto LABEL_376;
      }
    }
    else
    {
      sub_570C0(v252, &v252->m128i_u64[(unsigned __int64)v254 / 8], -2);
    }
    m128i_i64 = (__int64)&v252->m128i_i64[(unsigned __int64)v254 / 8];
    v82 = (__int8 *)v252;
    sub_56E80(v252, (__m128i *)((char *)v252 + v254));
  }
LABEL_376:
  v381[0] = &dword_0 + 1;
  s = v384;
  v267 = *(int **)(a2 + 256);
  v381[1] = nullptr;
  v382 = 0;
  v383.m128i_i32[0] = 1065353216;
  v383.m128i_i64[1] = 0;
  v384[0] = 0;
  if ( v267 )
  {
    do
    {
      v268 = v267[2];
      v269 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v82, (const char *)m128i_i64);
      m128i_i64 = (__int64)&v336;
      v82 = (_BYTE *)(&qword_D0 + 5);
      if ( v269(213, &v336, v268) )
      {
        m128i_i64 = (__int64)(v267 + 2);
        v82 = (__int8 *)&s;
        v270 = sub_58AA0((char **)&s, v267 + 2);
        *(_DWORD *)v270 = v267[3];
        *((_WORD *)v270 + 2) = *((_WORD *)v267 + 8);
      }
      v267 = *(int **)v267;
    }
    while ( v267 );
    v271 = s;
    v272 = (unsigned __int64)v381[0];
    v273 = (int *)v381[1];
    v274 = *(_DWORD *)(a2 + 272);
    v275 = a2 + 288;
    v276 = _mm_load_si128(&v383);
    v267 = *(int **)(a2 + 256);
    v383.m128i_i64[1] = *(_QWORD *)(a2 + 280);
    v277 = *(void **)(a2 + 240);
    *(__m128i *)(a2 + 272) = v276;
    v278 = v382;
    v279 = v384[0];
    v383.m128i_i32[0] = v274;
    if ( v277 == (void *)(a2 + 288) )
    {
      if ( v271 != v384 )
      {
        s = v384;
        *(_QWORD *)(a2 + 240) = v271;
      }
    }
    else
    {
LABEL_381:
      s = v277;
      if ( v271 == v384 )
        *(_QWORD *)(a2 + 240) = v275;
      else
        *(_QWORD *)(a2 + 240) = v271;
    }
  }
  else
  {
    v279 = 0;
    v273 = nullptr;
    v278 = 0;
    v305 = *(_DWORD *)(a2 + 272);
    v306 = *(_QWORD *)(a2 + 280);
    v275 = a2 + 288;
    v277 = *(void **)(a2 + 240);
    *(__m128i *)(a2 + 272) = _mm_load_si128(&v383);
    v272 = 1;
    v383.m128i_i64[1] = v306;
    v383.m128i_i32[0] = v305;
    if ( (void *)(a2 + 288) != v277 )
    {
      v271 = v384;
      goto LABEL_381;
    }
  }
  v381[1] = v267;
  v280 = *(void **)(a2 + 248);
  *(_QWORD *)(a2 + 256) = v273;
  *(_QWORD *)(a2 + 248) = v272;
  v381[0] = v280;
  v281 = *(_QWORD *)(a2 + 264);
  *(_QWORD *)(a2 + 264) = v278;
  v382 = v281;
  v282 = *(_QWORD *)(a2 + 288);
  *(_QWORD *)(a2 + 288) = v279;
  v384[0] = v282;
  if ( v273 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 240) + 8 * (v273[2] % v272)) = a2 + 256;
    v267 = (int *)v381[1];
  }
  if ( v267 )
  {
    *((_QWORD *)s + v267[2] % (unsigned __int64)v381[0]) = &v381[1];
    v283 = v381[1];
    *(_BYTE *)(v327 + 24) = 0;
    while ( v283 )
    {
      v284 = v283;
      v283 = (_QWORD *)*v283;
      operator delete(v284, 0x18u);
    }
  }
  else
  {
    *(_BYTE *)(v327 + 24) = 0;
  }
  memset(s, 0, 8 * (__int64)v381[0]);
  v382 = 0;
  v381[1] = nullptr;
  if ( s != v384 )
    operator delete(s, 8 * (__int64)v381[0]);
  qfree(v336);
  if ( v350 )
  {
    *(_QWORD *)&v351 = 0;
    qfree(v350);
  }
LABEL_273:
  qfree(v333);
  v205 = v348;
  if ( v348 )
  {
    v206 = v349;
    if ( (_QWORD)v349 )
    {
      v207 = 0;
      do
      {
        v208 = v207++;
        qfree(*(_QWORD *)(v205 + 32 * v208 + 16));
        v205 = v348;
      }
      while ( v206 != v207 );
    }
    *(_QWORD *)&v349 = 0;
    qfree(v205);
  }
  v391.m256i_i64[0] = (__int64)&unk_8C9B0;
  qfree(v394);
  qfree(v393[0]);
  if ( v391.m256i_i64[2] )
    operator delete((void *)v391.m256i_i64[2], v392 - v391.m256i_i64[2]);
  v385.m128i_i64[0] = (__int64)&unk_8C9B0;
  qfree(v389);
  qfree(v388[0]);
  if ( v386[0] )
    operator delete(v386[0], (unsigned __int64)v387 - (unsigned __int64)v386[0]);
  if ( v364 )
  {
    *(_QWORD *)&v365 = 0;
    qfree(v364);
  }
  if ( v362 )
  {
    *(_QWORD *)&v363 = 0;
    qfree(v362);
  }
  if ( v360 )
  {
    *(_QWORD *)&v361 = 0;
    qfree(v360);
  }
  if ( v358 )
  {
    *(_QWORD *)&v359 = 0;
    qfree(v358);
  }
  if ( v346 )
  {
    *(_QWORD *)&v347 = 0;
    qfree(v346);
  }
  if ( v344 )
  {
    *(_QWORD *)&v345 = 0;
    qfree(v344);
  }
  v209 = v342;
  if ( v342 )
  {
    v210 = v343;
    if ( (_QWORD)v343 )
    {
      v211 = 0;
      do
      {
        v212 = v211++;
        qfree(*(_QWORD *)(v209 + 16 * v212));
        v209 = v342;
      }
      while ( v210 != v211 );
    }
    *(_QWORD *)&v343 = 0;
    qfree(v209);
  }
  v213 = v340;
  if ( v340 )
  {
    v214 = v341;
    if ( (_QWORD)v341 )
    {
      v215 = 0;
      do
      {
        v216 = v215++;
        qfree(*(_QWORD *)(v213 + 16 * v216));
        v213 = v340;
      }
      while ( v214 != v215 );
    }
    *(_QWORD *)&v341 = 0;
    qfree(v213);
  }
  v217 = v368;
  if ( v368 )
  {
    do
    {
      v218 = v217;
      v217 = (_QWORD *)*v217;
      operator delete(v218, 0x18u);
    }
    while ( v217 );
  }
  memset(v366, 0, 8 * v367);
  v369 = 0;
  v368 = nullptr;
  if ( v366 != v331 )
    operator delete(v366, 8 * v367);
  sub_57480(v354);
LABEL_3:
  v8 = v338;
  if ( v338 )
  {
    v9 = v339;
    if ( (_QWORD)v339 )
    {
      v10 = 0;
      do
      {
        v11 = v8 + (v10 << 7);
        v12 = *(_QWORD **)(v11 + 88);
        while ( v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          qfree(v13[3]);
          operator delete(v13, 0x28u);
        }
        memset(*(void **)(v11 + 72), 0, 8LL * *(_QWORD *)(v11 + 80));
        v14 = *(void **)(v11 + 72);
        *(_QWORD *)(v11 + 96) = 0;
        *(_QWORD *)(v11 + 88) = 0;
        if ( v14 != (void *)(v11 + 120) )
          operator delete(v14, 8LL * *(_QWORD *)(v11 + 80));
        ++v10;
        qfree(*(_QWORD *)(v11 + 56));
        qfree(*(_QWORD *)(v11 + 40));
        v8 = v338;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v339 = 0;
    qfree(v8);
  }
  return v327;
}

