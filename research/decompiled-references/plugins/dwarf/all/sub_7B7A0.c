__int64 __fastcall sub_7B7A0(_QWORD *a1, __int64 a2)
{
  const __m128i *v2; // r12
  void (__fastcall ***v3)(_QWORD); // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 *func; // rax
  unsigned __int64 v9; // rdi
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __m128i *v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  const __m128i **v30; // r15
  size_t v31; // r14
  __int64 v32; // rax
  __m128i *v33; // rax
  __int64 v34; // r14
  char v35; // al
  __int64 v36; // rax
  void **i; // r14
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  char v42; // r15
  __int64 v43; // rdi
  char *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r15
  __int64 v47; // rdx
  void **v48; // rsi
  void *v49; // r14
  int v50; // edx
  int v51; // eax
  int *v52; // r15
  int v53; // eax
  __int64 v54; // r15
  unsigned int v55; // edx
  unsigned int v56; // eax
  _QWORD *v57; // rax
  unsigned __int64 v58; // r15
  int *v59; // rcx
  int v60; // eax
  int v61; // eax
  size_t v62; // rcx
  int v63; // eax
  unsigned int v64; // esi
  int v65; // ecx
  int v66; // edx
  int v67; // edx
  int v68; // eax
  size_t v69; // r9
  size_t ii; // rcx
  int *v71; // r8
  int v72; // eax
  int v73; // eax
  size_t v74; // r8
  int v75; // eax
  unsigned int v76; // r9d
  unsigned int v77; // r9d
  unsigned int v78; // r8d
  unsigned int v79; // r8d
  int v80; // eax
  __int64 (*v81)(); // rax
  char v82; // dl
  unsigned __int32 v83; // r15d
  __int32 v84; // r13d
  char v85; // al
  char v86; // al
  unsigned int v87; // r14d
  __int32 v88; // edx
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rbx
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // r12
  __int64 v97; // r15
  _QWORD *v98; // rbx
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // r12
  __int64 v103; // r14
  _QWORD *v104; // rbx
  __int64 v105; // rdi
  __int64 v106; // rdi
  _QWORD *v107; // r8
  size_t v108; // rax
  unsigned int v109; // r11d
  unsigned int v110; // r11d
  unsigned int v111; // r10d
  unsigned int v112; // r10d
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rsi
  _QWORD *v116; // r8
  __int64 v117; // rax
  _DWORD *v118; // r8
  __int64 v119; // rax
  __int64 v120; // rsi
  size_t v121; // r8
  _DWORD *v122; // rdi
  __int64 v123; // rdx
  unsigned __int64 v124; // r9
  unsigned int v125; // edx
  __int64 v126; // rcx
  int v127; // r8d
  int v128; // r9d
  char v129; // al
  __int64 v130; // rdx
  __int64 v131; // rdi
  __int64 v132; // r14
  __int64 v133; // rbx
  __int64 v134; // rdi
  __int64 v135; // rdi
  _WORD *v136; // rax
  __int16 v137; // dx
  __int64 v138; // rax
  int v139; // eax
  int v140; // r8d
  int v141; // r9d
  int v142; // edx
  int v143; // ecx
  int v144; // r8d
  int v145; // r9d
  unsigned int v146; // r14d
  __int64 v147; // r15
  __int64 v148; // r13
  char *v149; // rax
  unsigned __int64 v150; // r15
  const char *v151; // rdi
  const char *v152; // r13
  int v153; // eax
  const char *v154; // rdx
  __int64 (*v155)(); // rax
  __int64 v156; // r15
  __int64 v157; // rax
  const __m128i *v158; // rdx
  __int64 v159; // r14
  unsigned __int64 v160; // rdx
  __int64 *v161; // rax
  __int64 v162; // rax
  __int64 *v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // r14
  unsigned __int64 v167; // r9
  int v168; // eax
  __m128i *v169; // r14
  const __m128i *v170; // r9
  char *v171; // r10
  char *v172; // r10
  size_t v173; // r15
  unsigned __int64 v174; // r14
  unsigned __int64 v175; // r9
  void *v176; // rdi
  __int64 *v177; // rax
  __int64 *v178; // rax
  __int64 v179; // rax
  unsigned __int64 v180; // rax
  unsigned int v181; // eax
  int v182; // eax
  unsigned __int64 v183; // rax
  void *v184; // rdi
  __int64 v185; // rax
  __int16 v186; // ax
  __int64 v187; // rdx
  int v188; // edx
  int v189; // ecx
  int v190; // r8d
  int v191; // r9d
  unsigned int v192; // r13d
  int v193; // edx
  char v194; // al
  unsigned __int64 v195; // rdx
  __int64 v196; // rcx
  char *v197; // rdx
  __int64 v198; // rcx
  int v199; // eax
  __int64 tinfo_size; // rax
  const void *v201; // r15
  __int64 v202; // rbx
  const __m128i *v203; // r13
  _QWORD *v204; // r12
  _QWORD *v205; // r14
  __int64 v206; // rdi
  __int64 v207; // rdi
  __int64 v208; // r14
  __int64 v209; // r15
  _QWORD *v210; // rbx
  __int64 v211; // rdi
  __int64 v212; // rdi
  void *v213; // rdi
  const void *v214; // r15
  __int64 v215; // rax
  unsigned int v216; // r14d
  int v217; // eax
  unsigned __int64 v218; // rax
  __int64 v219; // rdx
  _DWORD *v220; // rax
  __int64 v221; // rdx
  __int64 v222; // r14
  size_t v223; // rax
  size_t v224; // r15
  void *v225; // rax
  void *v226; // rax
  __int64 v227; // rax
  __int64 v228; // r15
  __int64 v229; // r14
  const __m128i *v230; // rcx
  __m128i v231; // xmm0
  void *v232; // rax
  void *v233; // rax
  unsigned __int64 v234; // rax
  __int64 v235; // r14
  __int64 v236; // r15
  __int64 v237; // rdx
  __int64 v238; // r15
  __int64 v239; // r13
  int *v240; // rax
  __int64 v241; // rdi
  int v242; // ecx
  int v243; // r8d
  int v244; // r9d
  _DWORD *v245; // rax
  __int64 v246; // [rsp+18h] [rbp-458h]
  unsigned __int64 v247; // [rsp+20h] [rbp-450h]
  char *v248; // [rsp+20h] [rbp-450h]
  unsigned __int64 v249; // [rsp+20h] [rbp-450h]
  _QWORD *v250; // [rsp+20h] [rbp-450h]
  int *v251; // [rsp+20h] [rbp-450h]
  unsigned __int64 v252; // [rsp+20h] [rbp-450h]
  unsigned __int64 v253; // [rsp+20h] [rbp-450h]
  unsigned __int64 v254; // [rsp+28h] [rbp-448h]
  unsigned __int64 v255; // [rsp+28h] [rbp-448h]
  unsigned __int64 v256; // [rsp+28h] [rbp-448h]
  unsigned __int64 v257; // [rsp+28h] [rbp-448h]
  unsigned __int64 v258; // [rsp+28h] [rbp-448h]
  unsigned __int64 v259; // [rsp+28h] [rbp-448h]
  unsigned __int64 v260; // [rsp+28h] [rbp-448h]
  __int64 v261; // [rsp+28h] [rbp-448h]
  void *v262; // [rsp+30h] [rbp-440h]
  _DWORD *v263; // [rsp+30h] [rbp-440h]
  void *v264; // [rsp+30h] [rbp-440h]
  void *v265; // [rsp+30h] [rbp-440h]
  char *v266; // [rsp+30h] [rbp-440h]
  _DWORD *v267; // [rsp+30h] [rbp-440h]
  char *v268; // [rsp+30h] [rbp-440h]
  void *v269; // [rsp+30h] [rbp-440h]
  char *v270; // [rsp+30h] [rbp-440h]
  char *v271; // [rsp+30h] [rbp-440h]
  char *v272; // [rsp+30h] [rbp-440h]
  int n; // [rsp+48h] [rbp-428h]
  size_t ng; // [rsp+48h] [rbp-428h]
  int nh; // [rsp+48h] [rbp-428h]
  size_t ni; // [rsp+48h] [rbp-428h]
  size_t nj; // [rsp+48h] [rbp-428h]
  size_t na; // [rsp+48h] [rbp-428h]
  size_t nk; // [rsp+48h] [rbp-428h]
  size_t nb; // [rsp+48h] [rbp-428h]
  size_t nc; // [rsp+48h] [rbp-428h]
  size_t nd; // [rsp+48h] [rbp-428h]
  size_t ne; // [rsp+48h] [rbp-428h]
  size_t nm; // [rsp+48h] [rbp-428h]
  size_t nl; // [rsp+48h] [rbp-428h]
  int *nf; // [rsp+48h] [rbp-428h]
  size_t v287; // [rsp+50h] [rbp-420h]
  size_t v288; // [rsp+50h] [rbp-420h]
  size_t v289; // [rsp+50h] [rbp-420h]
  size_t v290; // [rsp+50h] [rbp-420h]
  size_t v291; // [rsp+50h] [rbp-420h]
  size_t v292; // [rsp+50h] [rbp-420h]
  size_t v293; // [rsp+50h] [rbp-420h]
  _QWORD *v294; // [rsp+50h] [rbp-420h]
  size_t v295; // [rsp+50h] [rbp-420h]
  size_t v296; // [rsp+50h] [rbp-420h]
  size_t v297; // [rsp+50h] [rbp-420h]
  size_t v298; // [rsp+50h] [rbp-420h]
  void *v299; // [rsp+50h] [rbp-420h]
  size_t v300; // [rsp+58h] [rbp-418h]
  size_t v301; // [rsp+58h] [rbp-418h]
  int v302; // [rsp+58h] [rbp-418h]
  size_t v303; // [rsp+58h] [rbp-418h]
  size_t v304; // [rsp+58h] [rbp-418h]
  size_t v305; // [rsp+58h] [rbp-418h]
  size_t v306; // [rsp+58h] [rbp-418h]
  size_t v307; // [rsp+58h] [rbp-418h]
  unsigned int v308; // [rsp+58h] [rbp-418h]
  unsigned int v309; // [rsp+58h] [rbp-418h]
  size_t v310; // [rsp+58h] [rbp-418h]
  size_t v311; // [rsp+58h] [rbp-418h]
  unsigned int v312; // [rsp+58h] [rbp-418h]
  unsigned int v313; // [rsp+58h] [rbp-418h]
  size_t v314; // [rsp+58h] [rbp-418h]
  size_t v315; // [rsp+58h] [rbp-418h]
  size_t v316; // [rsp+58h] [rbp-418h]
  size_t v317; // [rsp+58h] [rbp-418h]
  size_t v318; // [rsp+58h] [rbp-418h]
  size_t v319; // [rsp+58h] [rbp-418h]
  void *v320; // [rsp+58h] [rbp-418h]
  int *v321; // [rsp+60h] [rbp-410h]
  int v322; // [rsp+60h] [rbp-410h]
  int v323; // [rsp+60h] [rbp-410h]
  int *v324; // [rsp+60h] [rbp-410h]
  unsigned int v325; // [rsp+60h] [rbp-410h]
  int *v326; // [rsp+60h] [rbp-410h]
  _QWORD *v327; // [rsp+60h] [rbp-410h]
  unsigned int v328; // [rsp+60h] [rbp-410h]
  int *v329; // [rsp+60h] [rbp-410h]
  void **v330; // [rsp+68h] [rbp-408h]
  void *v331; // [rsp+68h] [rbp-408h]
  void *v332; // [rsp+68h] [rbp-408h]
  void *v333; // [rsp+68h] [rbp-408h]
  int *v334; // [rsp+68h] [rbp-408h]
  char v335; // [rsp+76h] [rbp-3FAh]
  char v336; // [rsp+77h] [rbp-3F9h]
  int v337; // [rsp+78h] [rbp-3F8h]
  int v338; // [rsp+78h] [rbp-3F8h]
  _QWORD *m; // [rsp+78h] [rbp-3F8h]
  int v340; // [rsp+78h] [rbp-3F8h]
  int v341; // [rsp+78h] [rbp-3F8h]
  size_t v342; // [rsp+78h] [rbp-3F8h]
  size_t v343; // [rsp+78h] [rbp-3F8h]
  size_t v344; // [rsp+78h] [rbp-3F8h]
  size_t j; // [rsp+78h] [rbp-3F8h]
  size_t v346; // [rsp+78h] [rbp-3F8h]
  size_t v347; // [rsp+78h] [rbp-3F8h]
  size_t v348; // [rsp+78h] [rbp-3F8h]
  __int64 v349; // [rsp+78h] [rbp-3F8h]
  __int64 *v350; // [rsp+80h] [rbp-3F0h]
  char *srcc; // [rsp+88h] [rbp-3E8h]
  void *src; // [rsp+88h] [rbp-3E8h]
  void *srca; // [rsp+88h] [rbp-3E8h]
  unsigned int srcb; // [rsp+88h] [rbp-3E8h]
  _QWORD *v356; // [rsp+98h] [rbp-3D8h]
  __int64 k; // [rsp+98h] [rbp-3D8h]
  const __m128i *v358; // [rsp+A0h] [rbp-3D0h] BYREF
  unsigned __int64 v359; // [rsp+A8h] [rbp-3C8h] BYREF
  __int64 v360; // [rsp+B0h] [rbp-3C0h] BYREF
  const __m128i *v361; // [rsp+B8h] [rbp-3B8h] BYREF
  char *s; // [rsp+C0h] [rbp-3B0h] BYREF
  __int128 v363; // [rsp+C8h] [rbp-3A8h]
  void **v364; // [rsp+E0h] [rbp-390h] BYREF
  __int128 v365; // [rsp+E8h] [rbp-388h]
  __int64 v366; // [rsp+100h] [rbp-370h] BYREF
  __int128 v367; // [rsp+108h] [rbp-368h]
  char nptr[8]; // [rsp+120h] [rbp-350h] BYREF
  __int128 v369; // [rsp+128h] [rbp-348h]
  __m128i v370; // [rsp+140h] [rbp-330h] BYREF
  __int64 v371; // [rsp+150h] [rbp-320h]
  int v372; // [rsp+158h] [rbp-318h]
  void *v373; // [rsp+160h] [rbp-310h] BYREF
  __int128 v374; // [rsp+168h] [rbp-308h]
  __int64 *v375; // [rsp+178h] [rbp-2F8h]
  __m128i *v376[2]; // [rsp+180h] [rbp-2F0h] BYREF
  __int64 *v377; // [rsp+190h] [rbp-2E0h]
  __int64 v378; // [rsp+198h] [rbp-2D8h] BYREF
  __int128 v379; // [rsp+1A0h] [rbp-2D0h]
  __int64 v380; // [rsp+1B0h] [rbp-2C0h]
  __int64 v381; // [rsp+1B8h] [rbp-2B8h] BYREF
  __int64 v382; // [rsp+1C0h] [rbp-2B0h] BYREF
  __int128 v383; // [rsp+1C8h] [rbp-2A8h]
  void *v384; // [rsp+1D8h] [rbp-298h]
  __int128 v385; // [rsp+1E0h] [rbp-290h]
  char v386; // [rsp+1F0h] [rbp-280h]
  void **v387; // [rsp+1F8h] [rbp-278h]
  __m128i *v388; // [rsp+200h] [rbp-270h]
  __int64 *v389; // [rsp+208h] [rbp-268h]
  int v390; // [rsp+210h] [rbp-260h]
  unsigned __int8 v391; // [rsp+214h] [rbp-25Ch]
  _BYTE v392[272]; // [rsp+220h] [rbp-250h] BYREF
  __m128i v393[2]; // [rsp+330h] [rbp-140h] BYREF
  __m128i **v394; // [rsp+350h] [rbp-120h] BYREF
  __int64 v395; // [rsp+358h] [rbp-118h] BYREF
  __int128 v396; // [rsp+360h] [rbp-110h]
  __int64 v397; // [rsp+370h] [rbp-100h]
  __int128 v398; // [rsp+378h] [rbp-F8h]
  __int64 v399; // [rsp+388h] [rbp-E8h]
  int v400; // [rsp+390h] [rbp-E0h]
  __int64 v401; // [rsp+398h] [rbp-D8h]
  int v402; // [rsp+3A0h] [rbp-D0h]
  __int64 v403; // [rsp+3A8h] [rbp-C8h]
  int v404; // [rsp+3B0h] [rbp-C0h]
  __int64 v405; // [rsp+3B8h] [rbp-B8h]
  unsigned __int64 v406; // [rsp+438h] [rbp-38h]

  v406 = __readfsqword(0x28u);
  v2 = (const __m128i *)a2;
  if ( (debug & 0x400000) != 0 )
    goto LABEL_23;
  while ( 1 )
  {
    v3 = (void (__fastcall ***)(_QWORD))a1[9];
    if ( v3 )
      (**v3)(v3);
    v358 = v2;
    v4 = sub_9C160(&v358);
    if ( v4 == -1 )
      return 0;
    v5 = (_QWORD *)a1[6];
    v6 = &v5[a1[7]];
    if ( v5 != v6 )
    {
      a2 = (__int64)a1;
      while ( v4 != *v5 )
      {
        if ( v6 == ++v5 )
          goto LABEL_11;
      }
      if ( v6 != v5 )
        return 0;
    }
LABEL_11:
    func = (unsigned __int64 *)get_func(v4, a2, v6, a1);
    v350 = (__int64 *)func;
    if ( func )
    {
      v9 = *func;
      if ( *func >= v4 )
        goto LABEL_13;
      set_func_end(v9, v4);
    }
    v18 = sub_9C4B0(&v358);
    v19 = nullptr;
    v393[0].m128i_i64[0] = v4;
    v393[0].m128i_i64[1] = v18;
    v20 = v18;
    v393[1] = _mm_load_si128(xmmword_AB1D0);
    v397 = 0xFFFFFFFFLL;
    v21 = v2->m128i_i64[0];
    v394 = nullptr;
    LOWORD(v395) = 0;
    *(_QWORD *)&v398 = 0;
    DWORD2(v398) = 0;
    v399 = 0;
    v400 = 0;
    v401 = 0;
    v402 = 0;
    v403 = 0;
    v404 = 0;
    v405 = 0;
    v396 = 0;
    v22 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 128LL) + 296LL);
    if ( (v22 & 2) != 0 )
    {
      v19 = v393;
      if ( (v22 & 4) == 0 )
      {
        v19 = (__m128i *)(&dword_0 + 1);
        find_func_bounds(v393, 1);
        if ( v20 < v393[0].m128i_i64[1] )
          v393[0].m128i_i64[1] = v20;
      }
    }
    if ( !(unsigned __int8)add_func_ex(v393) && v393[0].m128i_i64[1] == v20 )
    {
      v393[0].m128i_i64[1] = -1;
      add_func_ex(v393);
    }
    v25 = (__int64 *)get_func(v4, v19, v23, v24);
    v350 = v25;
    if ( !v25 )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80(
          (unsigned int)"Couldn't create function at [%a -> %a]\n",
          v393[0].m128i_i32[0],
          v393[0].m128i_i32[2],
          v26,
          v27,
          v28);
      return 0;
    }
    v9 = *v25;
LABEL_13:
    if ( v4 != v9 )
      return 0;
    s = nullptr;
    v363 = 0;
    if ( !(unsigned __int8)sub_9CBB0(&v358, &s) )
      sub_9E5B0(&v358, &s);
    if ( (unsigned __int64)v363 > 1 && !sub_1BA30(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 128LL), v4) )
    {
      v393[0] = (__m128i)v4;
      v29 = a1[5];
      v393[1] = 0;
      v30 = (const __m128i **)(v29 + 24);
      if ( s )
      {
        srcc = s;
        v31 = strlen(s);
        v393[0].m128i_i64[1] = qvector_reserve(&v393[0].m128i_u64[1], 0, v31 + 1, 1);
        v393[1].m128i_i64[0] = v31 + 1;
        memmove((void *)v393[0].m128i_i64[1], srcc, v31);
        *(_BYTE *)(v393[0].m128i_i64[1] + v31) = 0;
      }
      LOBYTE(v394) = 0;
      sub_76600(v30, v393);
      if ( v393[0].m128i_i64[1] )
      {
        v393[1].m128i_i64[0] = 0;
        qfree(v393[0].m128i_i64[1]);
      }
    }
    v10 = sub_9BDD0(&v358, 63);
    v11 = v350[2];
    v12 = v11 | 8;
    v13 = v11 & 0xFFFFFFFFFFFFFFF7LL;
    if ( v10 )
      v12 = v13;
    v350[2] = v12;
    v336 = v2[14].m128i_i64[0] != -1 && (v2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0;
    if ( v336 )
      break;
    if ( under_debugger )
      BUG();
    interr(30478);
LABEL_23:
    a2 = sub_81C40(v2);
    sub_88B80((unsigned int)"on_subprogram(die=%s)\n", a2, v14, v15, v16, v17);
  }
  v32 = *(_QWORD *)(v2->m128i_i64[0] + 16);
  v370 = _mm_loadu_si128(v2 + 14);
  v371 = v32;
  v372 = unk_ABD34;
  src = (void *)sub_84EB0(&v358);
  if ( src )
    sub_94910(src, &v370, v2);
  v388 = &v370;
  v378 = 0;
  v33 = (__m128i *)a1[4];
  v380 = 0;
  v381 = 0;
  v376[0] = v33;
  v382 = 0;
  v384 = nullptr;
  v386 = 16;
  v387 = nullptr;
  v389 = nullptr;
  v390 = 0;
  v391 = 0;
  v376[1] = (__m128i *)&v358;
  v377 = v350;
  v364 = nullptr;
  v379 = 0;
  v383 = 0;
  v385 = 0;
  v365 = 0;
  sub_84A60(v392);
  if ( (unsigned __int8)sub_9BA70(&v358, v392) )
  {
    v393[0].m128i_i64[0] = (__int64)v392;
    sub_758E0((__int64)v376, (__int64)v393);
    sub_76050((__int64)v376, (const __m128i **)v393);
  }
  else
  {
    sub_758E0((__int64)v376, (__int64)&v358);
  }
  v34 = sub_87DA0(v2);
  v373 = nullptr;
  LOBYTE(v374) = 0;
  v393[0] = 0;
  if ( (unsigned __int8)sub_945B0(v34, v393, 19) && (v335 = sub_96D10(v34, &v373, v393)) != 0 )
  {
    v136 = word_ABD38;
    v137 = 22;
    while ( (_WORD)v373 != v137 )
    {
      v137 = v136[1];
      ++v136;
      if ( !v137 )
        goto LABEL_43;
    }
  }
  else
  {
LABEL_43:
    v335 = 0;
  }
  sub_84A10(v393);
  v393[0].m128i_i32[2] = 0;
  v393[1].m128i_i64[1] = (__int64)&v364;
  v393[1].m128i_i64[0] = 0;
  v393[0].m128i_i64[0] = (__int64)off_C8C98;
  v394 = v376;
  v395 = 0;
  v396 = 0;
  sub_A1190(v2, v393, 0);
  if ( !v335 )
    sub_7B440((__int64)v364, (__m128i *)&v364[10 * v365], (__int64 (__fastcall *)(const __m128i *, __int64 *))sub_6FB00);
  v393[0].m128i_i64[0] = (__int64)off_C8C98;
  if ( v395 )
  {
    *(_QWORD *)&v396 = 0;
    qfree(v395);
  }
  v359 = 0;
  v389 = (__int64 *)&v364;
  v35 = getinf(58) & 3;
  switch ( v35 )
  {
    case 2:
      n = 2;
      break;
    case 3:
      n = 4;
      break;
    case 1:
      n = (unsigned __int8)getinf(59) < 3u ? 1 : 8;
      break;
    default:
      n = -1;
      break;
  }
  v36 = v365;
  v366 = 0;
  v367 = 0;
  v330 = &v364[10 * v365];
  if ( v364 != v330 )
  {
    for ( i = v364 + 4; ; i += 10 )
    {
      sub_84A60(v393);
      if ( !(unsigned __int8)sub_98E20(i - 4, v393) )
      {
        if ( (debug & 0x400000) != 0 )
          sub_88B80((unsigned int)"WARNING: Type couldn't be found.\n", (unsigned int)v393, v38, v39, v40, v41);
        goto LABEL_56;
      }
      v360 = 0;
      v42 = sub_62AC0(v376[0], &v360, v393);
      if ( !v42 )
        goto LABEL_69;
      v43 = v2[16].m128i_i64[0];
      v373 = nullptr;
      v374 = 0;
      v361 = v393;
      sub_770C0(v43, 1, (__int64 *)&v373, &v360, (__int64)i, (__int64)&v361, v376);
      if ( (_BYTE)v360 )
      {
        v114 = v379;
        v115 = v378;
        if ( *((_QWORD *)&v379 + 1) < (unsigned __int64)(v379 + 1) )
        {
          v378 = qvector_reserve(&v378, v378, v379 + 1, 80);
          v115 = v378;
          v114 = v379;
        }
        v116 = (_QWORD *)(v115 + 80 * v114);
        *(_DWORD *)v116 = 0;
        v116[1] = 0;
        v116[2] = 0;
        *(_OWORD *)(v116 + 3) = 0;
        v116[5] = 0;
        v116[8] = 0;
        *((_DWORD *)v116 + 18) = 0;
        *((_OWORD *)v116 + 3) = 0;
        v117 = v374;
        *(_QWORD *)&v379 = v379 + 1;
        if ( (_QWORD)v374 )
        {
          v263 = v116;
          v294 = v373;
          copy_argloc(v116, v373);
          v118 = v263;
          if ( !*(_DWORD *)v294 || v294[2] != *v350 )
            goto LABEL_185;
          v197 = (char *)v366;
          v198 = v366 + 16 * v367;
          if ( v366 == v198 )
            goto LABEL_376;
          do
          {
            v248 = (char *)v198;
            v257 = (unsigned __int64)v118;
            v266 = v197;
            v199 = compare_arglocs(v294, v197);
            v197 = v266;
            v118 = (_DWORD *)v257;
            if ( !v199 )
              break;
            v198 = (__int64)v248;
            v197 = v266 + 16;
          }
          while ( v248 != v266 + 16 );
          if ( v197 == (char *)(v366 + 16 * v367) )
          {
LABEL_376:
            if ( *v118 == 1 )
            {
              v267 = v118;
              tinfo_size = get_tinfo_size(0, v360, 0);
              v118 = v267;
              v359 = -n & (tinfo_size + v359 + n - 1);
            }
          }
          else
          {
LABEL_185:
            v42 = 0;
          }
          v254 = (unsigned __int64)v118;
          *(_DWORD *)nptr = 0;
          copy_argloc(nptr, v294);
          v119 = v367;
          v120 = v366;
          v121 = v254;
          if ( *((_QWORD *)&v367 + 1) < (unsigned __int64)(v367 + 1) )
          {
            v366 = qvector_reserve(&v366, v366, v367 + 1, 16);
            v120 = v366;
            v121 = v254;
            v119 = v367;
          }
          v295 = v121;
          v122 = (_DWORD *)(v120 + 16 * v119);
          *v122 = 0;
          copy_argloc(v122, nptr);
          *(_QWORD *)&v367 = v367 + 1;
          cleanup_argloc(nptr);
          v116 = (_QWORD *)v295;
          v117 = *(_QWORD *)(v295 + 64);
        }
        else
        {
          v42 = 0;
        }
        v123 = v360;
        v360 = v117;
        v116[8] = v123;
        if ( i != v116 + 2 )
        {
          v124 = (unsigned __int64)i[1];
          if ( v124 && (v296 = v124 - 1, v124 != 1) )
          {
            v265 = *i;
            if ( v116[4] < v124 )
            {
              v250 = v116;
              v259 = (unsigned __int64)i[1];
              v215 = qvector_reserve(v116 + 2, v116[2], v124, 1);
              v116 = v250;
              v124 = v259;
              v250[2] = v215;
            }
            v184 = (void *)v116[2];
            v116[3] = v124;
            v256 = v124;
            v315 = (size_t)v116;
            memmove(v184, v265, v296);
            *(_BYTE *)(*(_QWORD *)(v315 + 16) + v256 - 1) = 0;
          }
          else
          {
            v116[3] = 0;
          }
        }
        v44 = (char *)v373;
        v336 &= v42;
        if ( !v373 )
          goto LABEL_68;
      }
      else
      {
        v44 = (char *)v373;
        v336 = 0;
        if ( !v373 )
        {
LABEL_69:
          clear_tinfo_t(&v360);
LABEL_56:
          v336 = 0;
          goto LABEL_57;
        }
      }
      if ( (_QWORD)v374 )
      {
        v300 = v4;
        v45 = 0;
        v46 = v374;
        do
        {
          v47 = 5 * v45++;
          cleanup_argloc(&v44[8 * v47]);
          v44 = (char *)v373;
        }
        while ( v46 != v45 );
        v4 = v300;
      }
      *(_QWORD *)&v374 = 0;
      qfree(v44);
LABEL_68:
      clear_tinfo_t(&v360);
LABEL_57:
      sub_1B750((__int64)v393);
      if ( v330 == i + 6 )
      {
        v36 = v365;
        break;
      }
    }
  }
  if ( !v335 || !v36 || (_QWORD)v379 != v36 )
    goto LABEL_74;
  if ( (unsigned int)getinf(99) == 176 )
  {
    if ( (unsigned __int64)getinf(88) > 0x397
      || (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v373, "$ golang", 0, 0), v216 = netnode_altval(v373, 0, 65), v216 > 0x74)
      && ((v217 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v218 = (unsigned int)(v217 - 13), (unsigned int)v218 <= 0x3B)
       && (v219 = 0x800000000000005LL, _bittest64(&v219, v218))
       && v216 != 117) )
    {
      if ( (get_tinfo_property(v381, 2) & 0x3F) == 1 )
        sub_78720((__int64)&v378, (__int64 *)&v364, (__int64 *)&v359);
      goto LABEL_324;
    }
  }
  v156 = 0;
  v361 = nullptr;
  v343 = v379;
  if ( !(_QWORD)v379 )
    goto LABEL_291;
  while ( 2 )
  {
    v159 = 80 * v156 + v378;
    v298 = 80 * v156;
    v332 = (void *)get_tinfo_size(&v373, *(_QWORD *)(v159 + 64), 0);
    ++v156;
    v160 = ((unsigned __int64)v361->m128i_u64 + (int)v373 - 1) & -(int)v373;
    if ( *(_DWORD *)v159 == 1 )
    {
      v158 = *(const __m128i **)(v159 + 8);
    }
    else
    {
      if ( *(_DWORD *)v159 != 2 )
        goto LABEL_267;
      v161 = *(__int64 **)(v159 + 8);
      if ( !v161[1] )
        goto LABEL_267;
      v162 = *v161;
      if ( *(_DWORD *)v162 != 1 )
      {
        if ( *(_DWORD *)v162 != 2 )
          goto LABEL_267;
        v163 = *(__int64 **)(v162 + 8);
        if ( !v163[1] )
          goto LABEL_267;
        v162 = *v163;
        if ( *(_DWORD *)v162 != 1 )
        {
          if ( *(_DWORD *)v162 == 2 )
          {
            v164 = *(_QWORD *)(v162 + 8);
            if ( *(_QWORD *)(v164 + 8) )
            {
              if ( (unsigned __int8)sub_6FB30(&v361, *(int **)v164) )
              {
LABEL_282:
                v158 = v361;
                goto LABEL_271;
              }
            }
          }
LABEL_267:
          v393[0].m128i_i64[0] = 0;
          if ( v343 != v156 )
          {
            v157 = v378 + v298 + 80;
            if ( *(_DWORD *)v157 == 1 )
              goto LABEL_364;
            if ( *(_DWORD *)v157 != 2 )
              goto LABEL_270;
            v177 = *(__int64 **)(v378 + v298 + 88);
            if ( !v177[1] )
              goto LABEL_270;
            v157 = *v177;
            if ( *(_DWORD *)v157 == 1 )
              goto LABEL_364;
            if ( *(_DWORD *)v157 != 2 )
              goto LABEL_270;
            v178 = *(__int64 **)(v157 + 8);
            if ( !v178[1] )
              goto LABEL_270;
            v157 = *v178;
            if ( *(_DWORD *)v157 == 1 )
            {
LABEL_364:
              v180 = *(_QWORD *)(v157 + 8);
              v393[0].m128i_i64[0] = v180;
              goto LABEL_337;
            }
            if ( *(_DWORD *)v157 == 2 )
            {
              v179 = *(_QWORD *)(v157 + 8);
              if ( *(_QWORD *)(v179 + 8) )
              {
                if ( (unsigned __int8)sub_6FB30(v393, *(int **)v179) )
                {
                  v180 = v393[0].m128i_i64[0];
LABEL_337:
                  if ( v180 < (unsigned __int64)v332 + v160 )
                    goto LABEL_282;
                }
              }
            }
          }
LABEL_270:
          v297 = v160;
          cleanup_argloc(v159);
          v158 = (const __m128i *)v297;
          *(_DWORD *)v159 = 1;
          *(_QWORD *)(v159 + 8) = v297;
          goto LABEL_271;
        }
      }
      v158 = *(const __m128i **)(v162 + 8);
    }
LABEL_271:
    v361 = (const __m128i *)((char *)v158 + (_QWORD)v332);
    if ( v343 != v156 )
      continue;
    break;
  }
  v343 = v379;
LABEL_291:
  v373 = nullptr;
  v375 = &v378;
  v374 = 0;
  if ( v343 )
  {
    v373 = (void *)qvector_reserve(&v373, 0, v343, 4);
    memset((char *)v373 + 4 * v374, 0, 4 * (v343 - v374));
    *(_QWORD *)&v374 = v343;
    v234 = 0;
    do
    {
      *((_DWORD *)v373 + v234) = v234;
      v235 = v374;
      ++v234;
    }
    while ( v234 < (unsigned __int64)v374 );
    if ( (_QWORD)v374 )
    {
      v349 = 4 * v374;
      v299 = (void *)qalloc_or_throw(4 * v374);
      memcpy(v299, v373, 4 * v235);
      v246 = (__int64)v375;
      v236 = 4 * v374;
      nf = (int *)v373;
      v251 = (int *)((char *)v373 + 4 * v374);
      v320 = (void *)qalloc_or_throw(4 * v235);
      memcpy(v320, v299, 4 * v235);
      if ( v251 != nf )
      {
        v237 = ((v236 >> 2) + 1) / 2;
        if ( (v236 >> 2) + 1 <= 1 )
        {
          if ( !v237 )
          {
            v261 = 0;
            v334 = nullptr;
            goto LABEL_447;
          }
LABEL_461:
          memset(v393, 0, 24);
          v393[0].m128i_i64[0] = qalloc_or_throw(v349);
          v393[1].m128i_i64[0] = v235;
          memcpy((void *)v393[0].m128i_i64[0], v320, v349);
          v393[0].m128i_i64[1] = v235;
          v393[1].m128i_i64[1] = v246;
          sub_72EF0(nf, v251, (__int64)v393, v242, v243, v244);
          if ( v393[0].m128i_i64[0] )
            qfree(v393[0].m128i_i64[0]);
          operator delete(nullptr, 0);
        }
        else
        {
          v238 = ((v236 >> 2) + 1) / 2;
          v239 = v237;
          while ( 1 )
          {
            v261 = v238;
            v240 = (int *)operator new(4 * v238, (const std::nothrow_t *)&std::nothrow);
            if ( v240 )
              break;
            if ( v238 == 1 )
              goto LABEL_461;
            v238 = (v238 + 1) >> 1;
          }
          v334 = v240;
          if ( v239 == v238 )
          {
LABEL_447:
            memset(v393, 0, 24);
            v393[0].m128i_i64[0] = qalloc_or_throw(v349);
            v393[1].m128i_i64[0] = v235;
            memcpy((void *)v393[0].m128i_i64[0], v320, v349);
            v393[0].m128i_i64[1] = v235;
            v393[1].m128i_i64[1] = v246;
            sub_73DB0(nf, &nf[v261], v251, v334, (__int64)v393);
            v241 = v393[0].m128i_i64[0];
            if ( v393[0].m128i_i64[0] )
              goto LABEL_448;
          }
          else
          {
            memset(v393, 0, 24);
            v393[0].m128i_i64[0] = qalloc_or_throw(v349);
            v393[1].m128i_i64[0] = v235;
            memcpy((void *)v393[0].m128i_i64[0], v320, v349);
            v393[0].m128i_i64[1] = v235;
            v393[1].m128i_i64[1] = v246;
            sub_746E0(nf, v251, v334, v238, (__int64)v393);
            v241 = v393[0].m128i_i64[0];
            if ( v393[0].m128i_i64[0] )
LABEL_448:
              qfree(v241);
          }
          operator delete(v334, v261 * 4);
        }
      }
      if ( v320 )
        qfree(v320);
      if ( v299 )
        qfree(v299);
    }
  }
  if ( (_QWORD)v374 )
  {
    v165 = 0;
    while ( *((_DWORD *)v373 + v165) == v165 )
    {
      if ( ++v165 == (_QWORD)v374 )
        goto LABEL_322;
    }
    memset(v393, 0, 24);
    v333 = (void *)v379;
    if ( (_QWORD)v379 )
    {
      v393[0].m128i_i64[0] = qalloc_or_throw(80 * v379);
      v393[1].m128i_i64[0] = (__int64)v333;
      v348 = 0;
      do
      {
        v222 = 80 * v348 + v393[0].m128i_i64[0];
        v223 = v378 + 80 * v348;
        *(_DWORD *)v222 = 0;
        v224 = v223;
        copy_argloc(v222, v223);
        *(_QWORD *)(v222 + 16) = 0;
        *(_OWORD *)(v222 + 24) = 0;
        if ( *(_QWORD *)(v224 + 24) )
        {
          v316 = *(_QWORD *)(v224 + 24);
          v225 = (void *)qalloc_or_throw(v316);
          *(_QWORD *)(v222 + 16) = v225;
          *(_QWORD *)(v222 + 32) = v316;
          memcpy(v225, *(const void **)(v224 + 16), v316);
          *(_QWORD *)(v222 + 24) = v316;
        }
        *(_QWORD *)(v222 + 40) = 0;
        *(_OWORD *)(v222 + 48) = 0;
        if ( *(_QWORD *)(v224 + 48) )
        {
          v317 = *(_QWORD *)(v224 + 48);
          v226 = (void *)qalloc_or_throw(v317);
          *(_QWORD *)(v222 + 40) = v226;
          *(_QWORD *)(v222 + 56) = v317;
          memcpy(v226, *(const void **)(v224 + 40), v317);
          *(_QWORD *)(v222 + 48) = v317;
        }
        *(_QWORD *)(v222 + 64) = 0;
        copy_tinfo_t(v222 + 64, v224 + 64);
        ++v348;
        *(_DWORD *)(v222 + 72) = *(_DWORD *)(v224 + 72);
      }
      while ( v333 != (void *)v348 );
      v393[0].m128i_i64[1] = (__int64)v333;
    }
    v394 = nullptr;
    v393[1].m128i_i64[1] = v380;
    copy_tinfo_t(&v394, &v381);
    LODWORD(v395) = 0;
    copy_argloc(&v395, &v382);
    v166 = v385;
    v397 = 0;
    v398 = 0;
    *((_QWORD *)&v396 + 1) = *((_QWORD *)&v383 + 1);
    if ( (_QWORD)v385 )
    {
      v397 = qalloc_or_throw(8 * v385);
      *((_QWORD *)&v398 + 1) = v166;
      memcpy((void *)v397, v384, 8 * v166);
      *(_QWORD *)&v398 = v166;
    }
    *(_QWORD *)nptr = 0;
    v369 = 0;
    LOBYTE(v399) = v386;
    v344 = v365;
    if ( (_QWORD)v365 )
    {
      v227 = qalloc_or_throw(80 * v365);
      *((_QWORD *)&v369 + 1) = v344;
      v228 = 0;
      *(_QWORD *)nptr = v227;
      do
      {
        v229 = 80 * v228 + *(_QWORD *)nptr;
        v230 = (const __m128i *)&v364[10 * v228];
        *(__m128i *)v229 = _mm_loadu_si128(v230);
        v231 = _mm_loadu_si128(v230 + 1);
        *(_QWORD *)(v229 + 32) = 0;
        *(__m128i *)(v229 + 16) = v231;
        *(_OWORD *)(v229 + 40) = 0;
        if ( v230[2].m128i_i64[1] )
        {
          nm = (size_t)v230;
          v318 = v230[2].m128i_u64[1];
          v232 = (void *)qalloc_or_throw(v318);
          *(_QWORD *)(v229 + 32) = v232;
          *(_QWORD *)(v229 + 48) = v318;
          memcpy(v232, *(const void **)(nm + 32), v318);
          v230 = (const __m128i *)nm;
          *(_QWORD *)(v229 + 40) = v318;
        }
        *(_QWORD *)(v229 + 56) = 0;
        *(_OWORD *)(v229 + 64) = 0;
        if ( v230[4].m128i_i64[0] )
        {
          nl = (size_t)v230;
          v319 = v230[4].m128i_u64[0];
          v233 = (void *)qalloc_or_throw(v319);
          *(_QWORD *)(v229 + 56) = v233;
          *(_QWORD *)(v229 + 72) = v319;
          memcpy(v233, *(const void **)(nl + 56), v319);
          *(_QWORD *)(v229 + 64) = v319;
        }
        ++v228;
      }
      while ( v344 != v228 );
      *(_QWORD *)&v369 = v344;
    }
    v314 = 0;
    for ( j = 0; j < (unsigned __int64)v374; v314 += 10LL )
    {
      v173 = v378 + v314 * 8;
      v255 = 80LL * *((int *)v373 + j);
      v174 = v393[0].m128i_i64[0] + v255;
      copy_argloc(v378 + v314 * 8, v393[0].m128i_i64[0] + v255);
      if ( v173 + 16 != v174 + 16 )
      {
        v175 = *(_QWORD *)(v174 + 24);
        if ( !v175 || (ne = v175 - 1, v175 == 1) )
        {
          *(_QWORD *)(v173 + 24) = 0;
        }
        else
        {
          v264 = *(void **)(v174 + 16);
          if ( *(_QWORD *)(v173 + 32) < v175 )
          {
            v252 = *(_QWORD *)(v174 + 24);
            *(_QWORD *)(v173 + 16) = qvector_reserve(v173 + 16, *(_QWORD *)(v173 + 16), v175, 1);
            v175 = v252;
          }
          v176 = *(void **)(v173 + 16);
          *(_QWORD *)(v173 + 24) = v175;
          v247 = v175;
          memmove(v176, v264, ne);
          *(_BYTE *)(*(_QWORD *)(v173 + 16) + v247 - 1) = 0;
        }
      }
      if ( v173 + 40 != v174 + 40 )
      {
        v167 = *(_QWORD *)(v174 + 48);
        if ( v167 && (nb = v167 - 1, v167 != 1) )
        {
          v269 = *(void **)(v174 + 40);
          if ( *(_QWORD *)(v173 + 56) < v167 )
          {
            v253 = *(_QWORD *)(v174 + 48);
            *(_QWORD *)(v173 + 40) = qvector_reserve(v173 + 40, *(_QWORD *)(v173 + 40), v167, 1);
            v167 = v253;
          }
          v213 = *(void **)(v173 + 40);
          *(_QWORD *)(v173 + 48) = v167;
          v249 = v167;
          memmove(v213, v269, nb);
          *(_BYTE *)(*(_QWORD *)(v173 + 40) + v249 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v173 + 48) = 0;
        }
      }
      copy_tinfo_t(v173 + 64, v174 + 64);
      v168 = *(_DWORD *)(v174 + 72);
      v169 = (__m128i *)&v364[v314];
      *(_DWORD *)(v173 + 72) = v168;
      v170 = (const __m128i *)(*(_QWORD *)nptr + v255);
      *v169 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)nptr + v255));
      v169[1] = _mm_loadu_si128(v170 + 1);
      if ( &v169[2] != &v170[2] )
      {
        v171 = (char *)v170[2].m128i_i64[1];
        if ( v171 && (nc = (size_t)(v171 - 1), v171 != (_BYTE *)&dword_0 + 1) )
        {
          v214 = (const void *)v170[2].m128i_i64[0];
          if ( v169[3].m128i_i64[0] < (unsigned __int64)v171 )
          {
            v260 = (unsigned __int64)v170;
            v271 = (char *)v170[2].m128i_i64[1];
            v169[2].m128i_i64[0] = qvector_reserve(&v169[2], v169[2].m128i_i64[0], v171, 1);
            v170 = (const __m128i *)v260;
            v171 = v271;
          }
          v169[2].m128i_i64[1] = (__int64)v171;
          v258 = (unsigned __int64)v170;
          v270 = v171;
          memmove((void *)v169[2].m128i_i64[0], v214, nc);
          v170 = (const __m128i *)v258;
          v270[v169[2].m128i_i64[0] - 1] = 0;
        }
        else
        {
          v169[2].m128i_i64[1] = 0;
        }
      }
      if ( &v169[3].m128i_u64[1] != &v170[3].m128i_u64[1] )
      {
        v172 = (char *)v170[4].m128i_i64[0];
        if ( v172 && (nd = (size_t)(v172 - 1), v172 != (_BYTE *)&dword_0 + 1) )
        {
          v201 = (const void *)v170[3].m128i_i64[1];
          if ( v169[4].m128i_i64[1] < (unsigned __int64)v172 )
          {
            v272 = (char *)v170[4].m128i_i64[0];
            v169[3].m128i_i64[1] = qvector_reserve(&v169[3].m128i_u64[1], v169[3].m128i_i64[1], v172, 1);
            v172 = v272;
          }
          v169[4].m128i_i64[0] = (__int64)v172;
          v268 = v172;
          memmove((void *)v169[3].m128i_i64[1], v201, nd);
          v268[v169[3].m128i_i64[1] - 1] = 0;
        }
        else
        {
          v169[4].m128i_i64[0] = 0;
        }
      }
      ++j;
    }
    if ( *(_QWORD *)nptr )
    {
      if ( (_QWORD)v369 )
      {
        v346 = v4;
        v202 = v369;
        v203 = v2;
        v204 = a1;
        for ( k = 0; k != v202; ++k )
        {
          v205 = (_QWORD *)(*(_QWORD *)nptr + 80 * k);
          v206 = v205[7];
          if ( v206 )
          {
            v205[8] = 0;
            qfree(v206);
          }
          v207 = v205[4];
          if ( v207 )
          {
            v205[5] = 0;
            qfree(v207);
          }
        }
        v4 = v346;
        a1 = v204;
        v2 = v203;
      }
      *(_QWORD *)&v369 = 0;
      qfree(*(_QWORD *)nptr);
    }
    if ( v397 )
    {
      *(_QWORD *)&v398 = 0;
      qfree(v397);
    }
    cleanup_argloc(&v395);
    clear_tinfo_t(&v394);
    if ( v393[0].m128i_i64[0] )
    {
      v208 = 0;
      if ( v393[0].m128i_i64[1] )
      {
        v347 = v4;
        v209 = v393[0].m128i_i64[1];
        do
        {
          v210 = (_QWORD *)(v393[0].m128i_i64[0] + 80 * v208);
          clear_tinfo_t(v210 + 8);
          v211 = v210[5];
          if ( v211 )
          {
            v210[6] = 0;
            qfree(v211);
          }
          v212 = v210[2];
          if ( v212 )
          {
            v210[3] = 0;
            qfree(v212);
          }
          ++v208;
          cleanup_argloc(v210);
        }
        while ( v209 != v208 );
        v4 = v347;
      }
      v393[0].m128i_i64[1] = 0;
      qfree(v393[0].m128i_i64[0]);
    }
  }
LABEL_322:
  sub_78720((__int64)&v378, (__int64 *)&v364, (__int64 *)&v359);
  if ( v373 )
  {
    *(_QWORD *)&v374 = 0;
    qfree(v373);
  }
LABEL_324:
  LODWORD(v36) = v365;
LABEL_74:
  v390 = v36;
  v48 = &v373;
  LODWORD(v380) = v380 | 8;
  *((_QWORD *)&v383 + 1) = v359;
  v373 = off_C8C60;
  LODWORD(v374) = 0;
  *((_QWORD *)&v374 + 1) = 0;
  v375 = (__int64 *)v376;
  v387 = &v373;
  sub_A1190(v2, &v373, 0);
  if ( !v391 )
  {
    v48 = (void **)&v361;
    v361 = v2;
    sub_76050((__int64)v376, &v361);
  }
  v49 = nullptr;
  v331 = (void *)v379;
  if ( (_QWORD)v379 )
  {
    do
    {
      v52 = (int *)(v378 + 80LL * (_QWORD)v49);
      v53 = *v52;
      if ( *v52 == 4 )
      {
        v64 = v52[2];
        v65 = (unsigned __int16)v64;
        v48 = (void **)HIWORD(v64);
        v66 = (int)v48;
        if ( src )
        {
          v67 = sub_855C0(src, v48);
          if ( v67 == -1 )
            v67 = (int)v48;
          v48 = (void **)*((unsigned __int16 *)v52 + 4);
          v340 = *((unsigned __int16 *)v52 + 4);
          v322 = v67;
          v68 = sub_855C0(src, v48);
          v65 = v340;
          v66 = v322;
          if ( v68 != -1 )
            v65 = v68;
        }
        v323 = v65;
        v341 = v66;
        cleanup_argloc(v52);
        *v52 = 4;
        v52[2] = v323 | (v341 << 16);
      }
      else if ( v53 <= 4 )
      {
        if ( v53 == 2 )
        {
          v57 = *((_QWORD **)v52 + 1);
          v58 = 0;
          for ( m = v57; v58 < m[1]; ++v58 )
          {
            LODWORD(v48) = (_DWORD)m;
            v59 = (int *)(*m + 24 * v58);
            v60 = *v59;
            if ( *v59 == 4 )
            {
              v76 = v59[2];
              LODWORD(v48) = (unsigned __int16)v76;
              v77 = HIWORD(v76);
              v78 = v77;
              if ( src )
              {
                v307 = *m + 24 * v58;
                v325 = v77;
                v79 = sub_855C0(src, v77);
                v48 = (void **)*(unsigned __int16 *)(v307 + 8);
                if ( v79 == -1 )
                  v79 = v325;
                v290 = v307;
                v308 = v79;
                v80 = sub_855C0(src, v48);
                v59 = (int *)v290;
                v78 = v308;
                if ( v80 != -1 )
                  LODWORD(v48) = v80;
              }
              v309 = v78;
              v326 = v59;
              cleanup_argloc(v59);
              *v326 = 4;
              v326[2] = (unsigned int)v48 | (v309 << 16);
            }
            else if ( v60 > 4 )
            {
              if ( v60 == 5 )
              {
                v62 = *((_QWORD *)v59 + 1);
                v48 = (void **)*(unsigned int *)(v62 + 8);
                if ( !src || (v303 = v62, v63 = sub_855C0(src, v48), v62 = v303, v63 == -1) )
                  v63 = (int)v48;
                *(_DWORD *)(v62 + 8) = v63;
              }
            }
            else if ( v60 == 2 )
            {
              v69 = *((_QWORD *)v59 + 1);
              for ( ii = 0; ii < *(_QWORD *)(v69 + 8); ++ii )
              {
                v48 = *(void ***)v69;
                v71 = (int *)(*(_QWORD *)v69 + 24 * ii);
                v72 = *v71;
                if ( *v71 == 4 )
                {
                  v109 = v71[2];
                  LODWORD(v48) = (unsigned __int16)v109;
                  v110 = HIWORD(v109);
                  v111 = v110;
                  if ( src )
                  {
                    v262 = (void *)ii;
                    v311 = *(_QWORD *)v69 + 24 * ii;
                    na = v69;
                    v328 = v110;
                    v112 = sub_855C0(src, v110);
                    v48 = (void **)*(unsigned __int16 *)(v311 + 8);
                    if ( v112 == -1 )
                      v112 = v328;
                    v292 = v311;
                    v312 = v112;
                    v113 = sub_855C0(src, v48);
                    ii = (size_t)v262;
                    v69 = na;
                    v71 = (int *)v292;
                    if ( v113 != -1 )
                      LODWORD(v48) = v113;
                    v111 = v312;
                  }
                  nk = ii;
                  v293 = v69;
                  v313 = v111;
                  v329 = v71;
                  cleanup_argloc(v71);
                  v69 = v293;
                  ii = nk;
                  *v329 = 4;
                  v329[2] = (unsigned int)v48 | (v313 << 16);
                }
                else if ( v72 > 4 )
                {
                  if ( v72 == 5 )
                  {
                    v74 = *((_QWORD *)v71 + 1);
                    v48 = (void **)*(unsigned int *)(v74 + 8);
                    if ( !src
                      || (ni = v74,
                          v289 = ii,
                          v306 = v69,
                          v75 = sub_855C0(src, v48),
                          v69 = v306,
                          ii = v289,
                          v74 = ni,
                          v75 == -1) )
                    {
                      v75 = (int)v48;
                    }
                    *(_DWORD *)(v74 + 8) = v75;
                  }
                }
                else if ( v72 == 2 )
                {
                  v107 = *((_QWORD **)v71 + 1);
                  v108 = 0;
                  if ( v107[1] )
                  {
                    do
                    {
                      nj = ii;
                      v291 = v69;
                      LODWORD(v48) = (_DWORD)src;
                      v310 = v108;
                      v327 = v107;
                      sub_712A0((unsigned int *)(*v107 + 24 * v108), (__int64)src);
                      v107 = v327;
                      v69 = v291;
                      ii = nj;
                      v108 = v310 + 1;
                    }
                    while ( v310 + 1 < v327[1] );
                  }
                }
                else if ( v72 == 3 )
                {
                  v48 = (void **)*((unsigned __int16 *)v71 + 4);
                  if ( !src
                    || (ng = ii,
                        v287 = *(_QWORD *)v69 + 24 * ii,
                        v304 = v69,
                        v73 = sub_855C0(src, v48),
                        v69 = v304,
                        v71 = (int *)v287,
                        ii = ng,
                        v73 == -1) )
                  {
                    v73 = (int)v48;
                  }
                  nh = v73;
                  v288 = ii;
                  v305 = v69;
                  v324 = v71;
                  cleanup_argloc(v71);
                  v69 = v305;
                  ii = v288;
                  *v324 = 3;
                  v324[2] = nh;
                }
              }
            }
            else if ( v60 == 3 )
            {
              v48 = (void **)*((unsigned __int16 *)v59 + 4);
              if ( !src || (v301 = *m + 24 * v58, v61 = sub_855C0(src, v48), v59 = (int *)v301, v61 == -1) )
                v61 = (int)v48;
              v302 = v61;
              v321 = v59;
              cleanup_argloc(v59);
              *v321 = 3;
              v321[2] = v302;
            }
          }
        }
        else if ( v53 == 3 )
        {
          v50 = *((unsigned __int16 *)v52 + 4);
          if ( !src
            || (v48 = (void **)*((unsigned __int16 *)v52 + 4),
                v337 = *((unsigned __int16 *)v52 + 4),
                v51 = sub_855C0(src, v48),
                v50 = v337,
                v51 == -1) )
          {
            v51 = v50;
          }
          v338 = v51;
          cleanup_argloc(v52);
          *v52 = 3;
          v52[2] = v338;
        }
      }
      else if ( v53 == 5 )
      {
        v54 = *((_QWORD *)v52 + 1);
        v55 = *(_DWORD *)(v54 + 8);
        if ( !src
          || (LODWORD(v48) = *(_DWORD *)(v54 + 8), v56 = sub_855C0(src, v55), v55 = (unsigned int)v48, v56 == -1) )
        {
          v56 = v55;
        }
        *(_DWORD *)(v54 + 8) = v56;
      }
      v49 = (char *)v49 + 1;
    }
    while ( v49 != v331 );
  }
  if ( !v336 )
  {
    if ( !v391 )
    {
      if ( v335 )
      {
        if ( (unsigned __int8)getinf_flag(3, 4)
          && (netnode_check(nptr, "$ golang", 0, 0), v192 = netnode_altval(*(_QWORD *)nptr, 0, 65), v192 > 0x74) )
        {
          v193 = *(_DWORD *)(get_ph() + 4);
          v194 = v386 & 0xF;
          if ( !v193
            || (v195 = (unsigned int)(v193 - 13), (unsigned int)v195 <= 0x3B)
            && (v196 = 0x800000000000005LL, _bittest64(&v196, v195))
            && v192 != 117 )
          {
            v84 = 176;
            v83 = -1;
            HIDWORD(v380) = 0;
            v386 = v194 | 0xB0;
            goto LABEL_136;
          }
          HIDWORD(v380) = 256;
          v386 = v194 | 0xC0;
        }
        else
        {
          HIDWORD(v380) = 256;
          v386 = v386 & 0xF | 0xC0;
        }
        v84 = 256;
        v83 = -1;
        goto LABEL_136;
      }
      v84 = 16;
      v83 = -1;
      v87 = 0;
      HIDWORD(v380) = 0;
      v386 = v386 & 0xF | 0x10;
      goto LABEL_199;
    }
    v82 = 64;
    v83 = -1;
    v84 = 64;
    v85 = v386 & 0xF;
LABEL_134:
    v86 = v82 | v85;
    v87 = 0;
    v88 = 0;
    goto LABEL_135;
  }
  if ( (~(unsigned __int8)*(_WORD *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 128LL) + 296LL) & 0x18) == 0 )
  {
    v146 = 20;
    if ( !v335 )
      v146 = 8 * v391 + 5;
    memset(v393, 0, 24);
    if ( (unsigned __int8)sub_9CBB0(&v358, v393) )
    {
      v147 = v393[0].m128i_i64[1];
      if ( v393[0].m128i_i64[1] )
      {
        v148 = v393[0].m128i_i64[0];
        v149 = strrchr((const char *)v393[0].m128i_i64[0], 64);
        if ( v149 )
        {
          if ( &v149[-v148] != (char *)-1LL )
          {
            v150 = v147 - 1;
            if ( (unsigned __int64)&v149[-v148 + 1] < v150 )
            {
              v151 = v149 + 1;
              v152 = (const char *)(v150 + v148);
              v153 = 0;
              v154 = v151;
              while ( (unsigned __int8)(*v154 - 48) <= 9u )
              {
                if ( ++v153 == -1 )
                  break;
                if ( ++v154 == v152 )
                {
                  if ( v153 > 0 )
                  {
                    v83 = strtol(v151, nullptr, 10);
                    if ( v83 != -1 )
                      goto LABEL_258;
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
    v83 = *((_DWORD *)v377 + 12);
LABEL_258:
    LODWORD(v48) = v83;
    v84 = guess_func_cc(&v378, v83, v146);
    if ( (unsigned int)(v84 - 208) <= 0x2F
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 128LL) + 296LL) & 0x20) == 0 )
    {
      v155 = *(__int64 (**)())(*(_QWORD *)src + 16LL);
      if ( v155 == sub_6FAE0 )
      {
        if ( !v393[0].m128i_i64[0] )
        {
          v82 = 112;
          v84 = 112;
          v85 = v386 & 0xF;
          goto LABEL_134;
        }
        v84 = 112;
        v393[0].m128i_i64[1] = 0;
        qfree(v393[0].m128i_i64[0]);
        v85 = v386 & 0xF;
        goto LABEL_263;
      }
      LODWORD(v48) = (_DWORD)v2;
      v84 = ((__int64 (__fastcall *)(void *, const __m128i *))v155)(src, v2);
    }
    if ( v393[0].m128i_i64[0] )
    {
      v393[0].m128i_i64[1] = 0;
      qfree(v393[0].m128i_i64[0]);
    }
    goto LABEL_287;
  }
  v81 = *(__int64 (**)())(*(_QWORD *)src + 16LL);
  if ( v81 == sub_6FAE0 )
  {
    v82 = 112;
    v83 = -1;
    v84 = 112;
    v85 = v386 & 0xF;
    goto LABEL_134;
  }
  LODWORD(v48) = (_DWORD)v2;
  v84 = ((__int64 (__fastcall *)(void *, const __m128i *))v81)(src, v2);
  v83 = -1;
LABEL_287:
  v85 = v386 & 0xF;
  v87 = v84 & 0xFFFFFF0F;
  if ( (v84 & 0xFFFFFF0F) == 0 && v84 != 192 )
  {
LABEL_263:
    v82 = v84;
    goto LABEL_134;
  }
  v86 = v85 | 0xC0;
  v88 = v84;
LABEL_135:
  HIDWORD(v380) = v88;
  v386 = v86;
  if ( !v335 )
  {
LABEL_199:
    if ( (unsigned int)getinf(99) != 176
      || (unsigned __int64)getinf(88) <= 0x397
      && ((LODWORD(v48) = 4, !(unsigned __int8)getinf_flag(3, 4))
       || (netnode_check(v393, "$ golang", 0, 0),
           LODWORD(v48) = 0,
           v181 = netnode_altval(v393[0].m128i_i64[0], 0, 65),
           v181 <= 0x74)
       || (srcb = v181, (v182 = *(_DWORD *)(get_ph() + 4)) != 0)
       && ((v183 = (unsigned int)(v182 - 13), (unsigned int)v183 > 0x3B)
        || (v126 = 0x800000000000005LL, !_bittest64(&v126, v183))
        || (v125 = srcb, srcb == 117))) )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80((unsigned int)"Computing retloc\n", (_DWORD)v48, v125, v126, v127, v128);
      memset(v393, 0, sizeof(v393));
      v394 = nullptr;
      v395 = 0;
      v397 = 0;
      v396 = 0;
      v398 = 0;
      if ( v87 || (v129 = v84, v84 == 192) )
      {
        v393[1].m128i_i32[3] = v84;
        v129 = -64;
      }
      LOBYTE(v399) = v129;
      copy_tinfo_t(&v394, &v381);
      if ( (unsigned __int8)calc_retloc(v393) )
      {
        v130 = v396;
        *(_QWORD *)&v396 = v383;
        *(_QWORD *)&v383 = v130;
        LODWORD(v130) = v395;
        LODWORD(v395) = v382;
        LODWORD(v382) = v130;
      }
      if ( v397 )
      {
        *(_QWORD *)&v398 = 0;
        qfree(v397);
      }
      cleanup_argloc(&v395);
      clear_tinfo_t(&v394);
      v131 = v393[0].m128i_i64[0];
      if ( v393[0].m128i_i64[0] )
      {
        v132 = 0;
        if ( v393[0].m128i_i64[1] )
        {
          srca = (void *)v4;
          v133 = v393[0].m128i_i64[1];
          v342 = (size_t)a1;
          do
          {
            v356 = (_QWORD *)(v131 + 80 * v132);
            clear_tinfo_t(v356 + 8);
            v134 = v356[5];
            if ( v134 )
            {
              v356[6] = 0;
              qfree(v134);
            }
            v135 = v356[2];
            if ( v135 )
            {
              v356[3] = 0;
              qfree(v135);
            }
            ++v132;
            cleanup_argloc(v356);
            v131 = v393[0].m128i_i64[0];
          }
          while ( v133 != v132 );
          v4 = (unsigned __int64)srca;
          a1 = (_QWORD *)v342;
        }
        v393[0].m128i_i64[1] = 0;
        qfree(v131);
      }
    }
  }
LABEL_136:
  if ( v390 == (_QWORD)v379 )
  {
    if ( !(unsigned __int8)func_does_return(*v350) )
      LODWORD(v380) = v380 | 2;
    if ( v335 && (unsigned int)(v84 - 208) <= 0x2F )
    {
      if ( (_DWORD)v382 != 2 )
      {
        if ( (_DWORD)v382 != 1 )
          goto LABEL_242;
        goto LABEL_241;
      }
      v220 = *(_DWORD **)v383;
      v221 = *(_QWORD *)v383 + 24LL * *(_QWORD *)(v383 + 8);
      if ( *(_QWORD *)v383 == v221 )
      {
LABEL_241:
        LODWORD(v380) = v380 | 0x200;
        goto LABEL_242;
      }
      while ( *v220 == 1 )
      {
        v220 += 6;
        if ( (_DWORD *)v221 == v220 )
          goto LABEL_241;
      }
    }
LABEL_242:
    v361 = nullptr;
    if ( !(unsigned __int8)create_tinfo(&v361, 12, 12, &v378) )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80((unsigned int)"Failed creating function tinfo @ %a\n", *v350, v142, v143, v144, v145);
LABEL_245:
      clear_tinfo_t(&v361);
      goto LABEL_139;
    }
    v185 = *v350;
    v393[1].m128i_i32[2] = v83;
    v393[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_C8B68, (__m128i)(unsigned __int64)&v361);
    v393[1].m128i_i64[0] = v185;
    lower_type(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 144LL) + 8LL), &v361, 0, v393);
    v186 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 128LL) + 296LL);
    if ( (v186 & 8) != 0
      && (v186 & 0x40) != 0
      && v84 != 16
      && (unsigned int)(v84 - 208) > 0x2F
      && ((v84 & 0xFFFFFFF0) != 0x40 || !v377[6])
      && (!(_QWORD)v363 || strcmp(s, "main")) )
    {
      v245 = *(_DWORD **)(sub_87DA0(v2) + 216);
      *(_QWORD *)nptr = v245;
      if ( v245 )
        ++v245[2];
      if ( v245[31] != 6 || (unsigned int)(v245[30] - 1) > 0xEA92 )
      {
        sub_23A40((__int64 **)nptr);
        v187 = 1;
        goto LABEL_361;
      }
      sub_23A40((__int64 **)nptr);
    }
    v187 = 0;
LABEL_361:
    if ( !(unsigned __int8)apply_tinfo(*v350, &v361, v187) && (debug & 0x400000) != 0 )
      sub_88B80((unsigned int)"Failed setting function tinfo @ %a\n", *v350, v188, v189, v190, v191);
    goto LABEL_245;
  }
  if ( (debug & 0x400000) != 0 )
  {
    v139 = sub_81C40(v2);
    sub_88B80(
      (unsigned int)"Bad param count (or unexpected location description): %zu (expected %d), for function @ %s\n",
      v379,
      v390,
      v139,
      v140,
      v141);
  }
LABEL_139:
  v89 = a1[7];
  v90 = a1[6];
  if ( a1[8] < (unsigned __int64)(v89 + 1) )
  {
    v138 = qvector_reserve(a1 + 6, v90, v89 + 1, 8);
    a1[6] = v138;
    v90 = v138;
    v89 = a1[7];
  }
  *(_QWORD *)(v90 + 8 * v89) = v4;
  v91 = v366;
  ++a1[7];
  if ( v91 )
  {
    if ( (_QWORD)v367 )
    {
      v92 = 0;
      v93 = v367;
      do
      {
        v94 = v92++;
        cleanup_argloc(16 * v94 + v91);
        v91 = v366;
      }
      while ( v93 != v92 );
    }
    *(_QWORD *)&v367 = 0;
    qfree(v91);
  }
  sub_1B750((__int64)v392);
  v95 = (__int64)v364;
  if ( v364 )
  {
    v96 = v365;
    if ( (_QWORD)v365 )
    {
      v97 = 0;
      do
      {
        v98 = (_QWORD *)(v95 + 80 * v97);
        v99 = v98[7];
        if ( v99 )
        {
          v98[8] = 0;
          qfree(v99);
        }
        v100 = v98[4];
        if ( v100 )
        {
          v98[5] = 0;
          qfree(v100);
        }
        v95 = (__int64)v364;
        ++v97;
      }
      while ( v96 != v97 );
    }
    *(_QWORD *)&v365 = 0;
    qfree(v95);
  }
  if ( v384 )
  {
    *(_QWORD *)&v385 = 0;
    qfree(v384);
  }
  cleanup_argloc(&v382);
  clear_tinfo_t(&v381);
  v101 = v378;
  if ( v378 )
  {
    v102 = v379;
    if ( (_QWORD)v379 )
    {
      v103 = 0;
      do
      {
        v104 = (_QWORD *)(v101 + 80 * v103);
        clear_tinfo_t(v104 + 8);
        v105 = v104[5];
        if ( v105 )
        {
          v104[6] = 0;
          qfree(v105);
        }
        v106 = v104[2];
        if ( v106 )
        {
          v104[3] = 0;
          qfree(v106);
        }
        cleanup_argloc(v104);
        v101 = v378;
        ++v103;
      }
      while ( v102 != v103 );
    }
    *(_QWORD *)&v379 = 0;
    qfree(v101);
  }
  if ( s )
  {
    *(_QWORD *)&v363 = 0;
    qfree(s);
  }
  return 0;
}
