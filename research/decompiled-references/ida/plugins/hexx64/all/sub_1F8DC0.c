__int64 __fastcall sub_1F8DC0(
        __m128i *a1,
        double a2,
        __m128 a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *exception; // rdi
  __int32 v9; // eax
  __m128i *v10; // r8
  int v11; // edx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 *m128i_i64; // rbx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // rax
  __int64 v18; // rax
  __m128i v19; // rax
  __int64 *v20; // r8
  __int64 v21; // r12
  unsigned __int64 v22; // rbp
  __int64 *v23; // r12
  __m128i *v24; // rdx
  __int64 v25; // rcx
  __m128i *v26; // r8
  __m128i *v27; // r8
  __int32 v28; // eax
  __int64 v29; // r12
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdi
  int v38; // r14d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r9d
  __int64 v46; // rbp
  __int64 v47; // rax
  char *v48; // rbx
  char *v49; // rsi
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // r8
  unsigned int v53; // r14d
  unsigned __int64 **v54; // r14
  unsigned __int64 *v55; // rax
  unsigned __int64 v56; // r15
  __int64 v57; // r14
  __int64 v58; // r13
  void *v59; // rdi
  int v60; // eax
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // rcx
  __int64 *v66; // rdi
  __int64 *v67; // rdi
  int v68; // r9d
  unsigned __int64 *v69; // rbp
  __m128i *v70; // r8
  unsigned __int64 *v71; // rbx
  unsigned __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v78; // r11d
  __int64 v79; // r13
  int v80; // eax
  __m128i *v81; // r14
  _QWORD *v82; // r15
  unsigned __int64 *v83; // rsi
  _QWORD *v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // r14
  __int64 v87; // r13
  __int64 *v88; // r15
  __int64 v89; // rdi
  __int64 v90; // r12
  __int64 *v91; // r13
  __int64 v92; // rdi
  __int64 v93; // rbp
  __int64 j; // r14
  __int64 *v95; // rbx
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // rdi
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rsi
  char v101; // cl
  unsigned __int64 v102; // rdx
  _BYTE *v103; // rdx
  char v104; // dl
  _QWORD *v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rsi
  unsigned __int64 v114; // rbp
  __m128i *v115; // r13
  __int64 v116; // rax
  __int64 v117; // rdi
  __int64 v118; // r15
  unsigned __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rcx
  __m128i *v122; // r8
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // r14
  __int64 v126; // rdi
  __int64 *v127; // r12
  __int64 v128; // rdi
  __int64 v129; // r13
  __int64 *v130; // rbp
  __int64 v131; // rdi
  __int64 v132; // r15
  __int64 i; // r14
  __int64 *v134; // rbx
  __int64 v135; // rdi
  __int64 v136; // rdi
  __int64 v137; // rdi
  __int64 v138; // rax
  unsigned int v139; // eax
  _QWORD *v140; // rax
  _QWORD *v141; // r13
  _QWORD *v142; // r12
  char *v143; // rbx
  char v144; // al
  __int64 v145; // rdx
  int v146; // ebp
  __int64 v147; // rax
  _QWORD *v148; // rdx
  _QWORD *k; // rax
  unsigned __int64 v150; // rax
  __int64 *v151; // r15
  __int64 v152; // rdx
  __int64 *v153; // rdi
  __int64 *v154; // rdi
  __int64 v155; // rdi
  _QWORD *v156; // rax
  __int64 v157; // rdx
  bool v158; // al
  __int64 v159; // rdx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rax
  __int64 v162; // rax
  char *v163; // rbp
  __int64 v164; // rbp
  __int64 v165; // rdi
  __m128i *v166; // r8
  __int64 *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  int v171; // r9d
  _QWORD *v172; // rbx
  __int64 v173; // rax
  _QWORD *v174; // rbp
  int v175; // ecx
  unsigned __int64 v176; // rsi
  int v177; // edx
  __int64 v178; // rax
  __int64 v179; // r8
  unsigned __int64 v180; // rdx
  unsigned __int64 v181; // rdi
  __int64 v182; // rsi
  __int64 *v183; // [rsp+8h] [rbp-240h]
  __int64 *v184; // [rsp+8h] [rbp-240h]
  __m128i *v185; // [rsp+8h] [rbp-240h]
  __int64 v186; // [rsp+8h] [rbp-240h]
  __int64 v187; // [rsp+8h] [rbp-240h]
  _QWORD *v188; // [rsp+8h] [rbp-240h]
  __int64 v189; // [rsp+8h] [rbp-240h]
  __int64 v190; // [rsp+8h] [rbp-240h]
  __int64 v191; // [rsp+8h] [rbp-240h]
  __m128i *v192; // [rsp+8h] [rbp-240h]
  _QWORD *v193; // [rsp+8h] [rbp-240h]
  __int64 v194; // [rsp+8h] [rbp-240h]
  __int64 v195; // [rsp+8h] [rbp-240h]
  __int64 v196; // [rsp+8h] [rbp-240h]
  __m128i *v197; // [rsp+8h] [rbp-240h]
  __m128i *v198; // [rsp+8h] [rbp-240h]
  __int64 v199; // [rsp+8h] [rbp-240h]
  __int64 v200; // [rsp+8h] [rbp-240h]
  __int64 v201; // [rsp+8h] [rbp-240h]
  __int64 v202; // [rsp+8h] [rbp-240h]
  __int64 v203; // [rsp+8h] [rbp-240h]
  __int64 v204; // [rsp+8h] [rbp-240h]
  __int64 v205; // [rsp+8h] [rbp-240h]
  __int64 v206; // [rsp+8h] [rbp-240h]
  __int64 *v207; // [rsp+8h] [rbp-240h]
  __m128i *v208; // [rsp+8h] [rbp-240h]
  __m128i *v209; // [rsp+8h] [rbp-240h]
  __m128i *v210; // [rsp+8h] [rbp-240h]
  __int64 v211; // [rsp+8h] [rbp-240h]
  __int64 v212; // [rsp+8h] [rbp-240h]
  __int64 v213; // [rsp+8h] [rbp-240h]
  __int64 v214; // [rsp+8h] [rbp-240h]
  __m128i *v215; // [rsp+8h] [rbp-240h]
  __int64 v216; // [rsp+8h] [rbp-240h]
  __int64 v217; // [rsp+8h] [rbp-240h]
  __int64 v218; // [rsp+8h] [rbp-240h]
  __int64 v219; // [rsp+8h] [rbp-240h]
  __m128i *v220; // [rsp+8h] [rbp-240h]
  __m128i *v221; // [rsp+8h] [rbp-240h]
  __m128i *v222; // [rsp+8h] [rbp-240h]
  __int64 v223; // [rsp+8h] [rbp-240h]
  unsigned __int64 v224; // [rsp+18h] [rbp-230h]
  __int64 v225; // [rsp+18h] [rbp-230h]
  __m128i *v226; // [rsp+18h] [rbp-230h]
  __int64 v227; // [rsp+20h] [rbp-228h]
  __int64 v228; // [rsp+20h] [rbp-228h]
  __int64 v229; // [rsp+20h] [rbp-228h]
  __int64 v230; // [rsp+20h] [rbp-228h]
  __int64 v231; // [rsp+20h] [rbp-228h]
  __int64 v232; // [rsp+28h] [rbp-220h]
  __int64 v233; // [rsp+28h] [rbp-220h]
  __int64 *v234; // [rsp+30h] [rbp-218h]
  int v235; // [rsp+38h] [rbp-210h]
  __int64 v236; // [rsp+38h] [rbp-210h]
  char *v237; // [rsp+40h] [rbp-208h]
  __int64 v238; // [rsp+40h] [rbp-208h]
  __int64 v239; // [rsp+48h] [rbp-200h]
  char *v240; // [rsp+48h] [rbp-200h]
  unsigned int v241; // [rsp+50h] [rbp-1F8h]
  __int64 v242; // [rsp+50h] [rbp-1F8h]
  char v243; // [rsp+67h] [rbp-1E1h] BYREF
  const __m128i *v244; // [rsp+68h] [rbp-1E0h] BYREF
  unsigned __int64 *v245; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v246; // [rsp+78h] [rbp-1D0h]
  __int64 v247; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v248; // [rsp+98h] [rbp-1B0h]
  _QWORD v249[5]; // [rsp+B0h] [rbp-198h] BYREF
  char v250; // [rsp+D8h] [rbp-170h]
  __int64 v251; // [rsp+E0h] [rbp-168h]
  __int64 (__fastcall **v252)(); // [rsp+F0h] [rbp-158h] BYREF
  __int64 v253; // [rsp+F8h] [rbp-150h]
  _QWORD *v254; // [rsp+100h] [rbp-148h]
  char *v255; // [rsp+108h] [rbp-140h]
  __int64 v256; // [rsp+110h] [rbp-138h]
  char v257; // [rsp+118h] [rbp-130h]
  __int64 *v258; // [rsp+120h] [rbp-128h]
  __int64 v259; // [rsp+128h] [rbp-120h] BYREF
  __int64 v260; // [rsp+130h] [rbp-118h]
  __int64 v261; // [rsp+138h] [rbp-110h]
  __int128 v262; // [rsp+140h] [rbp-108h]
  __int64 *v263; // [rsp+150h] [rbp-F8h]
  int v264; // [rsp+158h] [rbp-F0h]
  __int16 v265; // [rsp+15Ch] [rbp-ECh]
  __m128i v266; // [rsp+160h] [rbp-E8h] BYREF
  __int64 *v267; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v268; // [rsp+178h] [rbp-D0h]
  __int64 v269; // [rsp+188h] [rbp-C0h]
  char v270; // [rsp+190h] [rbp-B8h]
  __int64 v271; // [rsp+198h] [rbp-B0h]
  __int64 *v272; // [rsp+1A0h] [rbp-A8h]
  char *v273; // [rsp+1A8h] [rbp-A0h]
  __int64 v274; // [rsp+1B0h] [rbp-98h]
  __int64 v275; // [rsp+1B8h] [rbp-90h]
  __int128 v276; // [rsp+1C0h] [rbp-88h]
  __int64 *v277; // [rsp+1D0h] [rbp-78h]
  __m128i v278; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v279; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v280; // [rsp+208h] [rbp-40h]

  v9 = a1->m128i_i32[0];
  v280 = __readfsqword(0x28u);
  v10 = a1;
  if ( (v9 & 0x40000) != 0 )
  {
    v11 = *(_DWORD *)(a1[49].m128i_i64[0] + 48);
    if ( (v11 & 1) != 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC4AAu, a2);
      goto LABEL_304;
    }
    if ( (v11 & 2) != 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC4ABu, a2);
      goto LABEL_304;
    }
  }
  else
  {
    sub_21F320((_QWORD *)a1[59].m128i_i64[0]);
    sub_1F0E90(a1);
    v10 = a1;
    v9 = a1->m128i_i32[0];
  }
  v12 = v10[27].m128i_i64[1];
  v13 = _mm_loadu_si128(v10 + 47);
  m128i_i64 = v10[53].m128i_i64;
  v10->m128i_i32[0] = v9 | 0x210000;
  v15 = v10[46].m128i_u64[0];
  v10[49].m128i_i32[2] = v12;
  v278 = v13;
  v16 = _mm_loadu_si128(v10 + 48);
  v183 = (__int64 *)v10;
  v279 = v16;
  v224 = v15;
  sub_316CB0(v10[53].m128i_i64, (__int64 **)&v10[14].m128i_i64[1], v12, a8);
  v17.m128i_i64[0] = sub_18D270(v183, 0, *(double *)v16.m128i_i64);
  v266 = v17;
  sub_316BB0(m128i_i64, &v266, *(double *)v16.m128i_i64, a3);
  v18 = v183[21];
  v19.m128i_i64[1] = v183[16] - v18;
  v19.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v183[187] + 24) + 16LL) & (v183[180] + v18);
  v266 = v19;
  sub_316BB0(m128i_i64, &v266, *(double *)v16.m128i_i64, a3);
  v20 = v183;
  v266 = 0u;
  v21 = v183[16];
  v22 = v183[71];
  v267 = nullptr;
  v268 = 0;
  if ( v22 + v21 - 1 >= v22 )
  {
    v267 = (__int64 *)qvector_reserve((__int64)&v267, 0, 1, 16);
    v20 = v183;
    *(__m128i *)&v267[2 * v268] = _mm_unpacklo_epi64((__m128i)v22, (__m128i)(unsigned __int64)v21);
    *(_QWORD *)&v268 = v268 + 1;
  }
  v23 = v20 + 104;
  v184 = v20;
  sub_64700(v20 + 104, v266.m128i_i64);
  sub_3180C0(m128i_i64, (__int64)&v267, v24, v25);
  v26 = (__m128i *)v184;
  if ( v267 )
  {
    *(_QWORD *)&v268 = 0;
    qfree((__int64)v267);
    v26 = (__m128i *)v184;
  }
  v185 = v26;
  qfree(v266.m128i_i64[0]);
  v27 = v185;
  v28 = v185[7].m128i_i32[1];
  if ( v28 )
  {
    v118 = v28;
    v119 = *(_QWORD *)(*(_QWORD *)(v185[93].m128i_i64[1] + 24) + 16LL) & (v185[8].m128i_i64[1] + v185[90].m128i_i64[0]);
    v268 = 0;
    v266 = 0u;
    v267 = nullptr;
    if ( v28 + v119 - 1 >= v119 )
    {
      v267 = (__int64 *)qvector_reserve((__int64)&v267, 0, 1, 16);
      v27 = v185;
      v167 = &v267[2 * v268];
      *v167 = v119;
      v167[1] = v118;
      *(_QWORD *)&v268 = v268 + 1;
    }
    v208 = v27;
    sub_64280(v23, v266.m128i_i64, 0.0);
    sub_316CB0(m128i_i64, &v267, v120, v121);
    v122 = v208;
    if ( v267 )
    {
      *(_QWORD *)&v268 = 0;
      qfree((__int64)v267);
      v122 = v208;
    }
    v209 = v122;
    qfree(v266.m128i_i64[0]);
    v27 = v209;
  }
  v29 = 0;
  v245 = nullptr;
  v234 = v27[27].m128i_i64;
  v246 = 0;
  while ( 2 )
  {
    v27->m128i_i32[0] &= 0xF7FDFFFF;
    v30 = v27[46].m128i_u64[0];
    if ( v224 != v30 )
    {
      v266.m128i_i64[0] = 0;
      a5 = 0.0;
      v266.m128i_i32[2] = 0;
      v267 = nullptr;
      v268 = 0;
      if ( v224 < v30 )
      {
        v114 = v224;
        v115 = v27;
        do
        {
          v116 = v115[45].m128i_i64[1] + 40 * v114;
          v117 = *(_QWORD *)(v116 + 16);
          if ( v117 )
          {
            *(_QWORD *)(v116 + 24) = 0;
            qfree(v117);
          }
          ++v114;
        }
        while ( v114 < v30 );
        v27 = v115;
        goto LABEL_19;
      }
      v31 = v27[45].m128i_u64[1];
      v32 = (__int64)&v27[45].m128i_i64[1];
      v33 = v27[46].m128i_u64[1];
      if ( (unsigned __int64)&v266 >= v31 && (unsigned __int64)&v266 < v31 + 40 * v33 )
      {
        if ( v33 < v224 )
        {
          v215 = v27;
          v138 = qvector_reserve(v32, v31, v224, 40);
          v27 = v215;
          v215[45].m128i_i64[1] = v138;
          v30 = v215[46].m128i_u64[0];
        }
        if ( v30 < v224 )
        {
          v34 = 40 * v30;
          do
          {
            ++v30;
            v35 = v34 + v27[45].m128i_i64[1];
            v34 += 40;
            *(_QWORD *)v35 = 0;
            *(_QWORD *)(v35 + 8) = 0;
            *(_QWORD *)(v35 + 16) = 0;
            *(_OWORD *)(v35 + 24) = 0;
          }
          while ( v224 != v30 );
        }
        goto LABEL_19;
      }
      if ( v33 < v224 )
      {
        v210 = v27;
        v123 = qvector_reserve(v32, v31, v224, 40);
        v27 = v210;
        v61 = v224;
        v30 = v210[46].m128i_u64[0];
        v210[45].m128i_i64[1] = v123;
        if ( v30 < v224 )
        {
LABEL_44:
          v62 = 40 * v30;
          do
          {
            ++v30;
            v63 = v62 + v27[45].m128i_i64[1];
            v62 += 40;
            *(_QWORD *)v63 = 0;
            *(_QWORD *)(v63 + 8) = 0;
            *(_QWORD *)(v63 + 16) = 0;
            *(_OWORD *)(v63 + 24) = 0;
          }
          while ( v61 != v30 );
        }
      }
      else
      {
        v61 = v224;
        if ( v30 < v224 )
          goto LABEL_44;
      }
LABEL_19:
      v27[46].m128i_i64[0] = v224;
    }
    v186 = (__int64)v27;
    v27[47] = _mm_load_si128(&v278);
    v36 = _mm_load_si128(&v279);
    v27[48] = v36;
    sub_138440(v27);
    v37 = *(_QWORD *)(v186 + 784);
    v38 = *(_DWORD *)(v37 + 48) & 1;
    v42 = sub_110340(v37, 0, v39, v40, v186, v41, *(double *)v36.m128i_i64, a3);
    v46 = v42;
    if ( !v42 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, *(double *)v36.m128i_i64);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v42 + 24);
    v47 = sub_1108E0(*(_QWORD *)(v186 + 784), 0, v43, v44, v186, v45, *(double *)v36.m128i_i64, a3);
    v48 = (char *)v47;
    if ( !v47 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, *(double *)v36.m128i_i64);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v47 + 24);
    v49 = (char *)v46;
    nullsub_40();
    v50 = v186;
    v235 = *(_DWORD *)(*(_QWORD *)(v186 + 784) + 52LL);
    if ( v38 )
    {
      v49 = v48;
      nullsub_39();
      v50 = v186;
    }
    v266.m128i_i64[1] = 0;
    v267 = nullptr;
    v270 = 0;
    v266.m128i_i64[0] = (__int64)&off_4DEE30;
    v269 = -4294967238LL;
    v271 = v50;
    v272 = v234;
    v187 = v50;
    v273 = v48;
    v274 = v46;
    v275 = 0;
    v277 = (__int64 *)&v245;
    v268 = 0;
    v276 = 0;
    v51 = sub_207F40((__int64)&v266);
    v52 = v187;
    v53 = v51;
    if ( v51 < 0 && (v51 != -20 || (*(_BYTE *)(*(_QWORD *)(v187 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_57;
    if ( !v29 )
    {
      memset(&v249[1], 0, 32);
      v250 = 0;
      v249[0] = &off_4DEBE0;
      v251 = 0;
      sub_11FBB0(v187, (__int64)v249);
      v52 = v187;
      v108 = *((_QWORD *)v48 + 1);
      v109 = v251 + *(int *)(v187 + 792);
      if ( v108 )
      {
        v110 = (_QWORD *)(*(_QWORD *)v48 + 8LL);
        v111 = *(_QWORD *)v48 + 24 * v108 + 8;
        do
        {
          v29 += *v110;
          v110 += 3;
        }
        while ( (_QWORD *)v111 != v110 );
        v109 += v29;
      }
      v29 = 16 * v109;
    }
    v54 = *(unsigned __int64 ***)(v52 + 800);
    v55 = *v54;
    if ( !*v54 )
      goto LABEL_54;
    v56 = *v55;
    if ( v54[1] )
    {
      v64 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
      v65 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v65 & 2) != 0 )
      {
LABEL_53:
        *v55 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFCLL | v56 & 3;
        v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v54, (__m128i)(unsigned __int64)*v54);
        *(__m128i *)(*v54 + 1) = v36;
        **v54 &= ~1uLL;
        **v54 |= 2u;
LABEL_54:
        v54[1] = nullptr;
        goto LABEL_29;
      }
      v66 = (__int64 *)v64[1];
      if ( (*(_BYTE *)v66 & 2) != 0 )
      {
        v67 = (__int64 *)v64[2];
        if ( (*(_BYTE *)v67 & 2) != 0 )
          goto LABEL_158;
      }
      else
      {
        v230 = v52;
        v207 = (__int64 *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
        sub_1ECDF0(v66);
        v64 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
        v52 = v230;
        v67 = *(__int64 **)((v56 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v67 & 2) != 0 )
        {
          v65 = *v207;
          if ( (*v207 & 2) != 0 )
          {
LABEL_51:
            if ( v56 > 3 )
            {
LABEL_52:
              v194 = v52;
              qfree((__int64)v64);
              v55 = *v54;
              v52 = v194;
              v56 = **v54;
              goto LABEL_53;
            }
LABEL_159:
            v55 = *v54;
            v56 = **v54;
            goto LABEL_53;
          }
LABEL_158:
          *v64 = v65 | 2;
          if ( v56 > 3 )
            goto LABEL_52;
          goto LABEL_159;
        }
      }
      v227 = v52;
      v193 = v64;
      sub_1ECDF0(v67);
      v64 = v193;
      v52 = v227;
      v65 = *v193;
      if ( (*v193 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_158;
    }
    *v55 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFCLL | *v55 & 3;
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v54, (__m128i)(unsigned __int64)*v54);
    *(__m128i *)(*v54 + 1) = v36;
    **v54 &= ~1uLL;
    **v54 |= 2u;
LABEL_29:
    v57 = *(_QWORD *)(v52 + 968);
    v58 = v52;
    if ( v57 )
    {
      do
      {
        sub_1ED520(*(_QWORD **)(v57 + 24));
        v59 = (void *)v57;
        v57 = *(_QWORD *)(v57 + 16);
        operator delete(v59, 0x28u);
      }
      while ( v57 );
      v52 = v58;
    }
    v188 = (_QWORD *)v52;
    *(_QWORD *)(v52 + 968) = 0;
    *(_QWORD *)(v52 + 976) = v52 + 960;
    *(_QWORD *)(v52 + 984) = v52 + 960;
    *(_QWORD *)(v52 + 992) = 0;
    sub_1F6040(v52, *(double *)v36.m128i_i64, a3);
    sub_2139A0(v188);
    v52 = (__int64)v188;
    if ( (*(_DWORD *)v188 & 0x40) != 0 && (*(_DWORD *)v188 & 1) != 0 )
    {
      v113 = v188[188];
      v253 = 0;
      v254 = v188;
      v252 = off_4DEE08;
      v255 = v48;
      v256 = v46;
      v257 = 0;
      sub_104E40(v48, v113, &v252, 8);
      v52 = (__int64)v188;
      if ( v257 )
        goto LABEL_37;
    }
    v49 = *(char **)(v52 + 1504);
    v189 = v52;
    v60 = sub_104E40(v48, (__int64)v49, &v266, 8);
    v52 = v189;
    v53 = v60;
    if ( v60 == -36 )
      goto LABEL_37;
    if ( v60 < 0 )
      goto LABEL_57;
    if ( v270 )
      goto LABEL_37;
    if ( v60 )
    {
      if ( !under_debugger )
        sub_383060(0xC4AEu, *(double *)v36.m128i_i64);
      goto LABEL_304;
    }
    sub_1F8780((__int64)&v247, v189);
    v52 = v189;
    v254 = nullptr;
    v78 = *(_DWORD *)(v189 + 64);
    v255 = nullptr;
    v252 = off_4DEDB8;
    v256 = 0;
    v257 = 0;
    v258 = v234;
    v259 = 0;
    v260 = 0;
    v261 = 0;
    v263 = &v247;
    v264 = -1;
    v265 = 0;
    v253 = v189;
    v262 = 0;
    if ( v78 <= 0 )
      goto LABEL_198;
    v79 = 0;
    do
    {
      v200 = v52;
      *(_QWORD *)(v52 + 808) = &v259;
      v49 = *(char **)(*(_QWORD *)(v52 + 528) + 8 * v79);
      v80 = sub_1FCF80((__int64)&v252, (__int64)v49);
      v52 = v200;
      v241 = v80;
      *(_QWORD *)(v200 + 808) = 0;
      if ( v80 < 0 )
      {
        if ( v80 == -36 )
          goto LABEL_169;
        goto LABEL_98;
      }
      v228 = v259;
      if ( !v259 )
        goto LABEL_91;
      if ( !v260 )
        goto LABEL_91;
      v81 = *(__m128i **)(v200 + 800);
      v82 = *(_QWORD **)(v259 + 8);
      if ( v82 == (_QWORD *)v259 )
        goto LABEL_91;
      do
      {
LABEL_83:
        v83 = (unsigned __int64 *)v81->m128i_i64[0];
        v244 = (const __m128i *)(v82 + 3);
        if ( !v83 )
        {
          v206 = v52;
          v112 = qalloc();
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v112, (__m128i)(unsigned __int64)v112);
          if ( !v112 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v52 = v206;
          *(_OWORD *)(v112 + 16) = 0;
          *(_OWORD *)(v112 + 32) = 0;
          *(_OWORD *)(v112 + 48) = 0;
          *(_QWORD *)v112 = v112 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v112 + 64) = 0;
          *(__m128 *)(v112 + 8) = a3;
          v81->m128i_i64[0] = v112;
          *(_QWORD *)v112 = v112 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v112 & 3LL;
          v36 = _mm_unpacklo_epi64((__m128i)v81->m128i_u64[0], (__m128i)v81->m128i_u64[0]);
          *(__m128i *)(v81->m128i_i64[0] + 8) = v36;
          *(_QWORD *)v81->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v81->m128i_i64[0] |= 2uLL;
          v83 = (unsigned __int64 *)v81->m128i_i64[0];
LABEL_85:
          v201 = v52;
          sub_1F76A0(v81, v83, 1, &v244);
LABEL_86:
          v52 = v201;
          goto LABEL_87;
        }
        if ( !v81->m128i_i64[1] )
          goto LABEL_85;
        v99 = *v83 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v99 & 2) != 0 )
        {
          v104 = 1;
LABEL_136:
          v201 = v52;
          sub_1F76A0(v81, v83, v104, &v244);
          goto LABEL_86;
        }
        v100 = v82[3];
        v101 = 1;
        while ( 1 )
        {
          v102 = *(_QWORD *)(v99 + 24);
          if ( v100 < v102 )
          {
            v103 = *(_BYTE **)(v99 + 8);
            v101 = 1;
            if ( (*v103 & 2) != 0 )
              goto LABEL_126;
            goto LABEL_144;
          }
          if ( v102 >= v100 )
            break;
          v103 = *(_BYTE **)(v99 + 16);
          v101 = 0;
          if ( (*v103 & 2) != 0 )
            goto LABEL_126;
LABEL_144:
          v99 = (unsigned __int64)v103;
        }
        if ( !v99 )
        {
LABEL_126:
          v104 = v101;
          v83 = (unsigned __int64 *)v99;
          goto LABEL_136;
        }
LABEL_87:
        if ( (*v82 & 2) != 0 )
        {
LABEL_90:
          if ( (_QWORD *)v228 == v82 )
            break;
          goto LABEL_83;
        }
        v84 = (_QWORD *)v82[2];
        if ( (*(_BYTE *)v84 & 2) == 0 )
        {
          do
          {
            v82 = v84;
            v84 = (_QWORD *)v84[1];
          }
          while ( (*(_BYTE *)v84 & 2) == 0 );
          goto LABEL_90;
        }
        v105 = (_QWORD *)(*v82 & 0xFFFFFFFFFFFFFFFCLL);
        v106 = *v105;
        if ( (*v105 & 2) == 0 )
        {
          while ( (_QWORD *)v105[2] == v82 )
          {
            v82 = v105;
            v107 = v106 & 0xFFFFFFFFFFFFFFFCLL;
            v106 = *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v106 & 2) != 0 )
            {
              v82 = (_QWORD *)v107;
              if ( v228 != v107 )
                goto LABEL_83;
              goto LABEL_91;
            }
            v105 = (_QWORD *)v107;
          }
        }
        v82 = v105;
      }
      while ( (_QWORD *)v228 != v105 );
LABEL_91:
      ++v79;
    }
    while ( *(_DWORD *)(v52 + 64) > (int)v79 );
    if ( v241 )
      break;
LABEL_198:
    if ( (*(_DWORD *)v52 & 0x8000000) != 0 )
    {
LABEL_169:
      v252 = off_4DEDB8;
      if ( v261 )
      {
        v211 = v52;
        *(_QWORD *)&v262 = 0;
        qfree(v261);
        v52 = v211;
      }
      v124 = v259;
      if ( !v259 )
        goto LABEL_176;
      v125 = *(_QWORD *)v259;
      if ( v260 )
      {
        v151 = (__int64 *)(v125 & 0xFFFFFFFFFFFFFFFCLL);
        v152 = *(_QWORD *)(v125 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v152 & 2) == 0 )
        {
          v153 = (__int64 *)v151[1];
          if ( (*(_BYTE *)v153 & 2) != 0 )
          {
            v154 = (__int64 *)v151[2];
            if ( (*(_BYTE *)v154 & 2) == 0 )
            {
LABEL_224:
              v218 = v52;
              sub_1ECDF0(v154);
              v52 = v218;
              goto LABEL_225;
            }
          }
          else
          {
            v217 = v52;
            sub_1ECDF0(v153);
            v154 = (__int64 *)v151[2];
            v52 = v217;
            if ( (*(_BYTE *)v154 & 2) == 0 )
              goto LABEL_224;
LABEL_225:
            v152 = *v151;
            if ( (*v151 & 2) != 0 )
            {
LABEL_226:
              if ( v125 <= 3 )
              {
                v124 = v259;
              }
              else
              {
                v219 = v52;
                qfree(v125 & 0xFFFFFFFFFFFFFFFCLL);
                v124 = v259;
                v52 = v219;
              }
              v125 = *(_QWORD *)v259;
              goto LABEL_229;
            }
          }
          *v151 = v152 | 2;
          goto LABEL_226;
        }
LABEL_229:
        *(_QWORD *)v124 = v125 & 3 | v124 & 0xFFFFFFFFFFFFFFFCLL;
        v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v259, (__m128i)(unsigned __int64)v259);
        *(__m128i *)(v259 + 8) = v36;
        *(_QWORD *)v259 &= ~1uLL;
        *(_QWORD *)v259 |= 2uLL;
        v260 = 0;
        goto LABEL_174;
      }
      *(_QWORD *)v259 = *(_QWORD *)v259 & 3LL | v259 & 0xFFFFFFFFFFFFFFFCLL;
      v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v259, (__m128i)(unsigned __int64)v259);
      *(__m128i *)(v259 + 8) = v36;
      *(_QWORD *)v259 &= ~1uLL;
      *(_QWORD *)v259 |= 2uLL;
LABEL_174:
      if ( v259 )
      {
        v212 = v52;
        qfree(v259);
        v52 = v212;
      }
LABEL_176:
      v126 = v247;
      if ( v247 )
      {
        if ( v248 )
        {
          v236 = v29;
          v238 = v46;
          v240 = v48;
          v231 = 0;
          v233 = v248;
          v242 = v52;
          do
          {
            v127 = (__int64 *)(v126 + 80 * v231);
            v128 = v127[7];
            if ( v128 )
            {
              if ( v127[8] )
              {
                v213 = v127[8];
                v129 = 0;
                do
                {
                  v130 = (__int64 *)(v128 + 96 * v129);
                  v131 = v130[5];
                  if ( v131 )
                  {
                    v132 = v130[6];
                    if ( v132 )
                    {
                      for ( i = 0; i != v132; ++i )
                      {
                        v134 = (__int64 *)(v131 + 40 * i);
                        v135 = v134[2];
                        if ( v135 )
                        {
                          v134[3] = 0;
                          qfree(v135);
                        }
                        qfree(*v134);
                        v131 = v130[5];
                      }
                    }
                    v130[6] = 0;
                    qfree(v131);
                  }
                  v136 = v130[2];
                  if ( v136 )
                  {
                    v130[3] = 0;
                    qfree(v136);
                  }
                  ++v129;
                  qfree(*v130);
                  v128 = v127[7];
                }
                while ( v213 != v129 );
              }
              v127[8] = 0;
              qfree(v128);
            }
            v137 = v127[4];
            if ( v137 )
            {
              v127[5] = 0;
              qfree(v137);
            }
            qfree(v127[2]);
            ++v231;
            v126 = v247;
          }
          while ( v233 != v231 );
          v29 = v236;
          v46 = v238;
          v48 = v240;
          v52 = v242;
        }
        v214 = v52;
        v248 = 0;
        qfree(v126);
        v52 = v214;
      }
LABEL_37:
      v266.m128i_i64[0] = (__int64)&off_4DEE30;
      if ( v275 )
      {
        v190 = v52;
        *(_QWORD *)&v276 = 0;
        qfree(v275);
        v52 = v190;
      }
      if ( v267 )
      {
        v191 = v52;
        *(_QWORD *)&v268 = 0;
        qfree((__int64)v267);
        v52 = v191;
      }
      v192 = (__m128i *)v52;
      sub_104E10((__int64)v48, *(double *)v36.m128i_i64);
      sub_104E10(v46, *(double *)v36.m128i_i64);
      v27 = v192;
      continue;
    }
    break;
  }
  v49 = &v243;
  v202 = v52;
  v241 = sub_23DE60((_QWORD *)v52, &v243, *(double *)v36.m128i_i64, a3, (__m128)0LL);
  v52 = v202;
  if ( v241 == -36 )
    goto LABEL_169;
  if ( v241 )
  {
    if ( !v243 )
      goto LABEL_98;
  }
  else
  {
    if ( (*(_BYTE *)(v202 + 3) & 8) != 0 )
      goto LABEL_169;
    if ( !v243 )
    {
LABEL_97:
      v241 = 0;
      goto LABEL_98;
    }
  }
  v49 = *(char **)(v202 + 800);
  v139 = sub_1C8D70(v202, (__int64)v49);
  v241 = v139;
  v52 = v202;
  if ( v139 == -36 )
    goto LABEL_169;
  if ( !v139 )
  {
    if ( (*(_BYTE *)(v202 + 3) & 8) != 0 )
      goto LABEL_169;
    goto LABEL_97;
  }
LABEL_98:
  v203 = v52;
  sub_1F1380(&v252);
  v85 = v247;
  v52 = v203;
  if ( v247 )
  {
    v86 = v248;
    if ( v248 )
    {
      v232 = v46;
      v87 = 0;
      v237 = v48;
      v239 = v203;
      do
      {
        v88 = (__int64 *)(v85 + 80 * v87);
        v89 = v88[7];
        if ( v89 )
        {
          if ( v88[8] )
          {
            v225 = v86;
            v90 = 0;
            v229 = v87;
            v204 = v88[8];
            do
            {
              v91 = (__int64 *)(v89 + 96 * v90);
              v92 = v91[5];
              if ( v92 )
              {
                v93 = v91[6];
                if ( v93 )
                {
                  for ( j = 0; j != v93; ++j )
                  {
                    v95 = (__int64 *)(v92 + 40 * j);
                    v96 = v95[2];
                    if ( v96 )
                    {
                      v95[3] = 0;
                      qfree(v96);
                    }
                    qfree(*v95);
                    v92 = v91[5];
                  }
                }
                v91[6] = 0;
                qfree(v92);
              }
              v97 = v91[2];
              if ( v97 )
              {
                v91[3] = 0;
                qfree(v97);
              }
              ++v90;
              qfree(*v91);
              v89 = v88[7];
            }
            while ( v204 != v90 );
            v86 = v225;
            v87 = v229;
          }
          v88[8] = 0;
          qfree(v89);
        }
        v98 = v88[4];
        if ( v98 )
        {
          v88[5] = 0;
          qfree(v98);
        }
        ++v87;
        qfree(v88[2]);
        v85 = v247;
      }
      while ( v86 != v87 );
      v46 = v232;
      v48 = v237;
      v52 = v239;
    }
    v205 = v52;
    v248 = 0;
    qfree(v85);
    v52 = v205;
  }
  v53 = v241;
LABEL_57:
  v266.m128i_i64[0] = (__int64)&off_4DEE30;
  if ( v275 )
  {
    v195 = v52;
    *(_QWORD *)&v276 = 0;
    qfree(v275);
    v52 = v195;
  }
  if ( v267 )
  {
    v196 = v52;
    *(_QWORD *)&v268 = 0;
    qfree((__int64)v267);
    v52 = v196;
  }
  v197 = (__m128i *)v52;
  sub_104E10((__int64)v48, *(double *)v36.m128i_i64);
  sub_104E10(v46, *(double *)v36.m128i_i64);
  v69 = v245;
  v70 = v197;
  v71 = &v245[v246];
  if ( v71 != v245 )
  {
    do
    {
      v49 = (char *)*v69;
      v198 = v70;
      sub_3311F0(v70, *v69++, 0x39u, *(double *)v36.m128i_i64, *(double *)a3.m128_u64, 0.0, a5);
      v70 = v198;
    }
    while ( v71 != v69 );
  }
  if ( v53 )
    goto LABEL_73;
  v72 = v70->m128i_u32[0];
  if ( (v72 & 0x40000) == 0 )
    goto LABEL_65;
  v140 = (_QWORD *)v70[50].m128i_i64[0];
  v141 = (_QWORD *)*v140;
  if ( !*v140 || !v140[1] || (v142 = (_QWORD *)v141[1], v141 == v142) )
  {
LABEL_218:
    v150 = v70[49].m128i_i32[2];
    v75 = v150;
    if ( v150 < v70[27].m128i_i64[1] )
    {
      do
      {
        v75 = (unsigned int)(v75 + 1);
        v76 = 13 * v150;
        *(_DWORD *)(v70[27].m128i_i64[0] + 104 * v150 + 24) &= ~0x1000u;
        v150 = (int)v75;
      }
      while ( (unsigned __int64)(int)v75 < v70[27].m128i_i64[1] );
      goto LABEL_70;
    }
    v76 = v72 & 0x10000;
    if ( !(_DWORD)v76 )
      goto LABEL_280;
    goto LABEL_253;
  }
  while ( 2 )
  {
    v143 = (char *)v142[3];
    v144 = *v143;
    if ( *v143 == 9 )
    {
      if ( !under_debugger )
        sub_383060(0xCEBDu, *(double *)v36.m128i_i64);
      goto LABEL_304;
    }
    if ( v144 != 15 )
    {
      if ( v144 != 5 )
        goto LABEL_211;
LABEL_230:
      v155 = *((_QWORD *)v143 + 1);
      if ( v155 )
      {
        v220 = v70;
        j__qfree(v155);
        goto LABEL_232;
      }
      goto LABEL_211;
    }
    v221 = v70;
    v158 = sub_11CA80(*((_DWORD *)v143 + 1));
    v70 = v221;
    if ( v158 )
      goto LABEL_247;
    if ( !v142[5] )
    {
      v159 = v142[4];
      v72 = *((unsigned int *)v143 + 1);
      v160 = *((int *)v142 + 12);
      if ( *(_QWORD *)(v159 + 440) < v160 )
        sub_1ECB80(*(double *)v36.m128i_i64);
      v49 = *(char **)(v159 + 432);
      if ( (_DWORD)v72 == *(_DWORD *)&v49[104 * v160 + 88] )
        goto LABEL_247;
    }
    v72 = v221[87].m128i_u64[0];
    v49 = (char *)v142[8];
    if ( !v72 )
      goto LABEL_246;
    v161 = *(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v161 )
      goto LABEL_247;
    if ( (*(_BYTE *)(*(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_246;
    v180 = *((_QWORD *)v49 + 3);
    while ( 2 )
    {
      v181 = *(_QWORD *)(v161 + 24);
      if ( v180 < v181 )
      {
        v161 = *(_QWORD *)(v161 + 8);
        goto LABEL_272;
      }
      if ( v181 < v180 )
      {
        v161 = *(_QWORD *)(v161 + 16);
LABEL_272:
        if ( (*(_BYTE *)v161 & 2) != 0 )
          goto LABEL_246;
        continue;
      }
      break;
    }
    if ( v72 == v161 )
    {
LABEL_246:
      v162 = *((_QWORD *)v143 + 1);
      v252 = (__int64 (__fastcall **)())(v49 + 24);
      v163 = (char *)(v162 + 48);
      sub_C7FB0(v221 + 87, (unsigned __int64 *)v49 + 3, &v252);
      v49 = v163;
      copy_tinfo_t();
      v70 = v221;
    }
LABEL_247:
    if ( *v143 == 5 )
      goto LABEL_230;
    if ( *v143 == 15 )
    {
      v164 = *((_QWORD *)v143 + 1);
      if ( v164 )
      {
        v222 = v70;
        clear_tinfo_t();
        v165 = *(_QWORD *)(v164 + 24);
        v166 = v222;
        if ( v165 )
        {
          *(_QWORD *)(v164 + 32) = 0;
          qfree(v165);
          v166 = v222;
        }
        v220 = v166;
        cleanup_argloc();
        qfree(v164);
LABEL_232:
        v70 = v220;
      }
    }
LABEL_211:
    v145 = v142[5];
    v146 = *((_DWORD *)v142 + 12);
    *v143 = 9;
    v226 = v70;
    v216 = v145;
    v147 = j__qalloc_or_throw(24, (__int64)v49, v145, v72);
    v70 = v226;
    *(_DWORD *)(v147 + 16) = v146;
    *(_QWORD *)v147 = v226;
    *(_QWORD *)(v147 + 8) = v216;
    *((_QWORD *)v143 + 1) = v147;
    if ( (*v142 & 2) == 0 )
    {
      v148 = (_QWORD *)v142[2];
      if ( (*(_BYTE *)v148 & 2) != 0 )
      {
        v156 = (_QWORD *)(*v142 & 0xFFFFFFFFFFFFFFFCLL);
        v157 = *v156;
        if ( (*v156 & 2) == 0 )
        {
          while ( (_QWORD *)v156[2] == v142 )
          {
            v142 = v156;
            v72 = v157 & 0xFFFFFFFFFFFFFFFCLL;
            v157 = *(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v157 & 2) != 0 )
            {
              v142 = (_QWORD *)v72;
              goto LABEL_216;
            }
            v156 = (_QWORD *)v72;
          }
        }
        v142 = v156;
      }
      else
      {
        for ( k = (_QWORD *)v148[1]; (*(_BYTE *)k & 2) == 0; k = (_QWORD *)k[1] )
          v148 = k;
        v142 = v148;
      }
    }
LABEL_216:
    if ( v141 != v142 )
      continue;
    break;
  }
  LODWORD(v72) = v226->m128i_i32[0];
  if ( (v226->m128i_i32[0] & 0x40000) != 0 )
    goto LABEL_218;
LABEL_65:
  v199 = (__int64)v70;
  sub_219BD0((__int64)v70, *(double *)v36.m128i_i64, *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_CE6F0(v199, (char **)v49, v36, a3, (__m128i)0LL, a5, v73, v74) )
    *(_DWORD *)v199 &= ~0x10000u;
  if ( (int)sub_1C8C30(v199) > 0 )
    *(_DWORD *)v199 &= ~0x10000u;
  sub_1F5AE0(v234, *(int *)(v199 + 792));
  sub_2139A0((_QWORD *)v199);
  v70 = (__m128i *)v199;
LABEL_70:
  if ( (v70->m128i_i32[0] & 0x10000) == 0 )
  {
    if ( (v70->m128i_i32[0] & 0x40000) == 0 )
    {
      v53 = 1;
      goto LABEL_73;
    }
LABEL_280:
    if ( !under_debugger )
      sub_383060(0xC4B0u, *(double *)v36.m128i_i64);
LABEL_304:
    BUG();
  }
LABEL_253:
  v223 = (__int64)v70;
  v168 = sub_110340(v70[49].m128i_i64[0], 0, v75, v76, (__int64)v70, v68, *(double *)v36.m128i_i64, a3);
  v172 = (_QWORD *)v168;
  if ( !v168 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, *(double *)v36.m128i_i64);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v168 + 24);
  v173 = sub_1108E0(*(_QWORD *)(v223 + 784), 0, v169, v170, v223, v171, *(double *)v36.m128i_i64, a3);
  v174 = (_QWORD *)v173;
  if ( !v173 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, *(double *)v36.m128i_i64);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v173 + 24);
  v175 = *(_DWORD *)v223 & 0x40000;
  if ( v235 == *(_DWORD *)(*(_QWORD *)(v223 + 784) + 52LL) )
  {
    v176 = *(_QWORD *)(v223 + 440);
    if ( v176 )
    {
      v177 = 0;
      v178 = 0;
      while ( (*(_BYTE *)(*(_QWORD *)(v223 + 432) + 104 * v178 + 25) & 4) == 0 )
      {
        v178 = ++v177;
        if ( v177 >= v176 )
          goto LABEL_266;
      }
      *(_BYTE *)(v223 + 754) |= 0x10u;
    }
LABEL_266:
    if ( v175 )
    {
      if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v223) )
      {
LABEL_268:
        sub_66FA0(v179, 0);
        goto LABEL_258;
      }
      v266.m128i_i64[0] = (__int64)off_4DEC80;
      v182 = *(_QWORD *)(v179 + 1504);
      v223 = v179;
      v266.m128i_i64[1] = 0;
      v267 = v234;
      sub_104E40(v174, v182, &v266, 4);
      sub_104E40(v172, *(_QWORD *)(v223 + 1504), &v266, 4);
    }
    else
    {
      sub_105060(v174);
      sub_105060(v172);
    }
    v179 = v223;
    goto LABEL_268;
  }
  if ( v175 )
  {
    if ( !under_debugger )
      sub_383060(0xC72Du, *(double *)v36.m128i_i64);
    goto LABEL_304;
  }
  v53 = 1;
LABEL_258:
  sub_104E10((__int64)v174, *(double *)v36.m128i_i64);
  sub_104E10((__int64)v172, *(double *)v36.m128i_i64);
LABEL_73:
  if ( v245 )
  {
    *(_QWORD *)&v246 = 0;
    qfree((__int64)v245);
  }
  return v53;
}

