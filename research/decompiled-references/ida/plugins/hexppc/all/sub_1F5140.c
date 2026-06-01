__int64 __fastcall sub_1F5140(__m128i *a1, double a2, __m128 a3, double a4, double a5)
{
  _QWORD *exception; // rdi
  __int32 v6; // eax
  __m128i *v7; // r8
  int v8; // edx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 (__fastcall **v21)(); // rax
  __int64 v22; // r9
  __int64 *v23; // r8
  __int64 v24; // r12
  unsigned __int64 v25; // rbp
  __int64 *v26; // r12
  __m128i *v27; // r8
  __m128i *v28; // r8
  __int32 v29; // eax
  __int64 v30; // r12
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdi
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  _QWORD *v42; // rbx
  _QWORD *v43; // rsi
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // r8
  unsigned int v47; // r14d
  unsigned __int64 **v48; // r14
  unsigned __int64 *v49; // rax
  unsigned __int64 v50; // r15
  __int64 v51; // r14
  __int64 v52; // r13
  void *v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  int v62; // ecx
  int v63; // r9d
  _QWORD *v64; // rbp
  __m128i *v65; // r8
  _QWORD *v66; // rbx
  __int32 v67; // ecx
  int v69; // r11d
  __int64 v70; // r13
  int v71; // eax
  __m128i *v72; // r14
  unsigned __int64 *v73; // r15
  unsigned __int64 *v74; // rsi
  unsigned __int64 *v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // r14
  __int64 v78; // r13
  _QWORD *v79; // r15
  __int64 v80; // rdi
  __int64 v81; // r12
  _QWORD *v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rbp
  __int64 j; // r14
  __int64 v86; // rbx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rsi
  char v89; // cl
  unsigned __int64 v90; // rdx
  _BYTE *v91; // rdx
  char v92; // dl
  unsigned __int64 *v93; // rax
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rsi
  unsigned __int64 v102; // rbp
  __m128i *v103; // r13
  __int64 v104; // rax
  unsigned __int64 v105; // r15
  unsigned __int64 v106; // r14
  __m128i *v107; // r8
  __int64 v108; // rax
  unsigned __int64 *v109; // rax
  unsigned __int64 v110; // r14
  __int64 v111; // rdi
  _QWORD *v112; // r12
  __int64 v113; // rdi
  __int64 v114; // r13
  _QWORD *v115; // rbp
  __int64 v116; // rdi
  __int64 v117; // r15
  __int64 i; // r14
  __int64 v119; // rbx
  __int64 v120; // rax
  unsigned int v121; // eax
  _QWORD *v122; // rax
  _QWORD *v123; // r13
  _QWORD *v124; // r12
  char *v125; // rbx
  char v126; // al
  __int64 v127; // rdx
  int v128; // ebp
  __int64 v129; // rax
  _QWORD *v130; // rdx
  _QWORD *k; // rax
  unsigned __int64 v132; // rax
  __int32 v133; // edx
  __int64 *v134; // r15
  __int64 v135; // rdx
  __int64 *v136; // rdi
  __int64 *v137; // rdi
  _QWORD *v138; // rax
  __int64 v139; // rdx
  unsigned __int64 v140; // rcx
  __int64 v141; // rdi
  bool v142; // al
  __int64 v143; // rdx
  unsigned __int64 v144; // rax
  _QWORD *v145; // rcx
  __int64 v146; // rsi
  unsigned __int64 v147; // rax
  __int64 v148; // rbp
  __m128i *v149; // r8
  unsigned __int64 *v150; // rax
  __int64 v151; // rax
  _QWORD *v152; // rbx
  __int64 v153; // rax
  _QWORD *v154; // rbp
  int v155; // ecx
  unsigned __int64 v156; // rsi
  int v157; // edx
  __int64 v158; // rax
  __int64 v159; // r8
  unsigned __int64 v160; // rdx
  unsigned __int64 v161; // rdi
  __int64 v162; // rsi
  __int64 *v163; // [rsp+8h] [rbp-240h]
  __int64 *v164; // [rsp+8h] [rbp-240h]
  __m128i *v165; // [rsp+8h] [rbp-240h]
  __m128i *v166; // [rsp+8h] [rbp-240h]
  __int64 v167; // [rsp+8h] [rbp-240h]
  __int64 v168; // [rsp+8h] [rbp-240h]
  __int64 v169; // [rsp+8h] [rbp-240h]
  __int64 v170; // [rsp+8h] [rbp-240h]
  __int64 v171; // [rsp+8h] [rbp-240h]
  __m128i *v172; // [rsp+8h] [rbp-240h]
  _QWORD *v173; // [rsp+8h] [rbp-240h]
  __int64 v174; // [rsp+8h] [rbp-240h]
  __int64 v175; // [rsp+8h] [rbp-240h]
  __int64 v176; // [rsp+8h] [rbp-240h]
  __int64 v177; // [rsp+8h] [rbp-240h]
  __m128i *v178; // [rsp+8h] [rbp-240h]
  __m128i *v179; // [rsp+8h] [rbp-240h]
  __int64 v180; // [rsp+8h] [rbp-240h]
  __int64 v181; // [rsp+8h] [rbp-240h]
  __int64 v182; // [rsp+8h] [rbp-240h]
  __int64 v183; // [rsp+8h] [rbp-240h]
  __int64 v184; // [rsp+8h] [rbp-240h]
  __int64 v185; // [rsp+8h] [rbp-240h]
  __int64 v186; // [rsp+8h] [rbp-240h]
  __int64 *v187; // [rsp+8h] [rbp-240h]
  __m128i *v188; // [rsp+8h] [rbp-240h]
  __m128i *v189; // [rsp+8h] [rbp-240h]
  __m128i *v190; // [rsp+8h] [rbp-240h]
  __int64 v191; // [rsp+8h] [rbp-240h]
  __int64 v192; // [rsp+8h] [rbp-240h]
  __int64 v193; // [rsp+8h] [rbp-240h]
  __int64 v194; // [rsp+8h] [rbp-240h]
  __m128i *v195; // [rsp+8h] [rbp-240h]
  __int64 v196; // [rsp+8h] [rbp-240h]
  __int64 v197; // [rsp+8h] [rbp-240h]
  __int64 v198; // [rsp+8h] [rbp-240h]
  __int64 v199; // [rsp+8h] [rbp-240h]
  __m128i *v200; // [rsp+8h] [rbp-240h]
  __m128i *v201; // [rsp+8h] [rbp-240h]
  __m128i *v202; // [rsp+8h] [rbp-240h]
  __int64 v203; // [rsp+8h] [rbp-240h]
  unsigned __int64 v204; // [rsp+18h] [rbp-230h]
  __int64 v205; // [rsp+18h] [rbp-230h]
  __m128i *v206; // [rsp+18h] [rbp-230h]
  __int64 v207; // [rsp+20h] [rbp-228h]
  unsigned __int64 *v208; // [rsp+20h] [rbp-228h]
  __int64 v209; // [rsp+20h] [rbp-228h]
  __int64 v210; // [rsp+20h] [rbp-228h]
  __int64 v211; // [rsp+20h] [rbp-228h]
  __int64 v212; // [rsp+28h] [rbp-220h]
  __int64 v213; // [rsp+28h] [rbp-220h]
  __int64 *m128i_i64; // [rsp+30h] [rbp-218h]
  int v215; // [rsp+38h] [rbp-210h]
  __int64 v216; // [rsp+38h] [rbp-210h]
  _QWORD *v217; // [rsp+40h] [rbp-208h]
  __int64 v218; // [rsp+40h] [rbp-208h]
  __int64 v219; // [rsp+48h] [rbp-200h]
  _QWORD *v220; // [rsp+48h] [rbp-200h]
  unsigned int v221; // [rsp+50h] [rbp-1F8h]
  __int64 v222; // [rsp+50h] [rbp-1F8h]
  char v223; // [rsp+67h] [rbp-1E1h] BYREF
  const __m128i *v224; // [rsp+68h] [rbp-1E0h] BYREF
  _QWORD *v225; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v226; // [rsp+78h] [rbp-1D0h]
  __int64 v227; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v228; // [rsp+98h] [rbp-1B0h]
  _QWORD v229[5]; // [rsp+B0h] [rbp-198h] BYREF
  char v230; // [rsp+D8h] [rbp-170h]
  __int64 v231; // [rsp+E0h] [rbp-168h]
  __int64 (__fastcall **v232)(); // [rsp+F0h] [rbp-158h] BYREF
  __int64 v233; // [rsp+F8h] [rbp-150h]
  __int64 v234; // [rsp+100h] [rbp-148h]
  _QWORD *v235; // [rsp+108h] [rbp-140h]
  __int64 v236; // [rsp+110h] [rbp-138h]
  char v237; // [rsp+118h] [rbp-130h]
  __int64 *v238; // [rsp+120h] [rbp-128h]
  unsigned __int64 *v239; // [rsp+128h] [rbp-120h] BYREF
  __int64 v240; // [rsp+130h] [rbp-118h]
  __int64 v241; // [rsp+138h] [rbp-110h]
  __int128 v242; // [rsp+140h] [rbp-108h]
  __int64 *v243; // [rsp+150h] [rbp-F8h]
  int v244; // [rsp+158h] [rbp-F0h]
  __int16 v245; // [rsp+15Ch] [rbp-ECh]
  __int64 (__fastcall **v246)(); // [rsp+160h] [rbp-E8h] BYREF
  __int64 v247; // [rsp+168h] [rbp-E0h]
  __int64 v248; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v249; // [rsp+178h] [rbp-D0h]
  __int64 v250; // [rsp+188h] [rbp-C0h]
  char v251; // [rsp+190h] [rbp-B8h]
  __int64 v252; // [rsp+198h] [rbp-B0h]
  __int64 *v253; // [rsp+1A0h] [rbp-A8h]
  _QWORD *v254; // [rsp+1A8h] [rbp-A0h]
  __int64 v255; // [rsp+1B0h] [rbp-98h]
  __int64 v256; // [rsp+1B8h] [rbp-90h]
  __int128 v257; // [rsp+1C0h] [rbp-88h]
  _QWORD *v258; // [rsp+1D0h] [rbp-78h]
  __m128i v259; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v260; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v261; // [rsp+208h] [rbp-40h]

  v6 = a1->m128i_i32[0];
  v261 = __readfsqword(0x28u);
  v7 = a1;
  if ( (v6 & 0x40000) != 0 )
  {
    v8 = *(_DWORD *)(a1[49].m128i_i64[0] + 48);
    if ( (v8 & 1) != 0 )
    {
      if ( !under_debugger )
        sub_37EEE0(50346);
      goto LABEL_304;
    }
    if ( (v8 & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37EEE0(50347);
      goto LABEL_304;
    }
  }
  else
  {
    sub_21B6A0(a1[59].m128i_i64[0]);
    sub_1ED210(a1);
    v7 = a1;
    v6 = a1->m128i_i32[0];
  }
  v9 = v7[27].m128i_i64[1];
  v10 = _mm_loadu_si128(v7 + 47);
  v11 = v7 + 53;
  v7->m128i_i32[0] = v6 | 0x210000;
  v12 = v7[46].m128i_i64[0];
  v7[49].m128i_i32[2] = v9;
  v259 = v10;
  v163 = (__int64 *)v7;
  v260 = _mm_loadu_si128(v7 + 48);
  v204 = v12;
  sub_312B30(&v7[53], &v7[14].m128i_u64[1]);
  v13 = (__int64 (__fastcall **)())sub_189830(v163, 0);
  v247 = v14;
  v246 = v13;
  sub_312A30(v11, &v246, v14, v15, v16, v17);
  v18 = v163[21];
  v19 = *(_QWORD *)(v163[187] + 24);
  v20 = v163[16] - v18;
  v21 = (__int64 (__fastcall **)())(*(_QWORD *)(v19 + 16) & (v163[180] + v18));
  v247 = v20;
  v246 = v21;
  sub_312A30(v11, &v246, v20, v19, v163, v22);
  v23 = v163;
  v246 = nullptr;
  v247 = 0;
  v24 = v163[16];
  v25 = v163[71];
  v248 = 0;
  v249 = 0;
  if ( v25 + v24 - 1 >= v25 )
  {
    v248 = qvector_reserve();
    v23 = v163;
    *(__m128i *)(v248 + 16 * v249) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)(unsigned __int64)v24);
    *(_QWORD *)&v249 = v249 + 1;
  }
  v26 = v23 + 104;
  v164 = v23;
  sub_60CC0(v23 + 104, (__int64 *)&v246);
  sub_313F40(v11, &v248);
  v27 = (__m128i *)v164;
  if ( v248 )
  {
    *(_QWORD *)&v249 = 0;
    qfree();
    v27 = (__m128i *)v164;
  }
  v165 = v27;
  qfree();
  v28 = v165;
  v29 = v165[7].m128i_i32[1];
  if ( v29 )
  {
    v105 = v29;
    v106 = *(_QWORD *)(*(_QWORD *)(v165[93].m128i_i64[1] + 24) + 16LL) & (v165[8].m128i_i64[1] + v165[90].m128i_i64[0]);
    v249 = 0;
    v246 = nullptr;
    v247 = 0;
    v248 = 0;
    if ( v29 + v106 - 1 >= v106 )
    {
      v248 = qvector_reserve();
      v28 = v165;
      v150 = (unsigned __int64 *)(16 * v249 + v248);
      *v150 = v106;
      v150[1] = v105;
      *(_QWORD *)&v249 = v249 + 1;
    }
    v188 = v28;
    sub_60840(v26, (__int64 *)&v246);
    sub_312B30(v11, &v248);
    v107 = v188;
    if ( v248 )
    {
      *(_QWORD *)&v249 = 0;
      qfree();
      v107 = v188;
    }
    v189 = v107;
    qfree();
    v28 = v189;
  }
  v30 = 0;
  v225 = nullptr;
  m128i_i64 = v28[27].m128i_i64;
  v226 = 0;
  while ( 2 )
  {
    v28->m128i_i32[0] &= 0xF7FDFFFF;
    v31 = v28[46].m128i_u64[0];
    if ( v204 != v31 )
    {
      v246 = nullptr;
      a5 = 0.0;
      LODWORD(v247) = 0;
      v248 = 0;
      v249 = 0;
      if ( v204 < v31 )
      {
        v102 = v204;
        v103 = v28;
        do
        {
          v104 = v103[45].m128i_i64[1] + 40 * v102;
          if ( *(_QWORD *)(v104 + 16) )
          {
            *(_QWORD *)(v104 + 24) = 0;
            qfree();
          }
          ++v102;
        }
        while ( v102 < v31 );
        v28 = v103;
        goto LABEL_19;
      }
      v32 = v28[45].m128i_u64[1];
      v33 = v28[46].m128i_u64[1];
      if ( (unsigned __int64)&v246 >= v32 && (unsigned __int64)&v246 < v32 + 40 * v33 )
      {
        if ( v33 < v204 )
        {
          v195 = v28;
          v120 = qvector_reserve();
          v28 = v195;
          v195[45].m128i_i64[1] = v120;
          v31 = v195[46].m128i_u64[0];
        }
        if ( v31 < v204 )
        {
          v34 = 40 * v31;
          do
          {
            ++v31;
            v35 = v34 + v28[45].m128i_i64[1];
            v34 += 40;
            *(_QWORD *)v35 = 0;
            *(_QWORD *)(v35 + 8) = 0;
            *(_QWORD *)(v35 + 16) = 0;
            *(_OWORD *)(v35 + 24) = 0;
          }
          while ( v204 != v31 );
        }
        goto LABEL_19;
      }
      if ( v33 < v204 )
      {
        v190 = v28;
        v108 = qvector_reserve();
        v28 = v190;
        v55 = v204;
        v31 = v190[46].m128i_u64[0];
        v190[45].m128i_i64[1] = v108;
        if ( v31 < v204 )
        {
LABEL_44:
          v56 = 40 * v31;
          do
          {
            ++v31;
            v57 = v56 + v28[45].m128i_i64[1];
            v56 += 40;
            *(_QWORD *)v57 = 0;
            *(_QWORD *)(v57 + 8) = 0;
            *(_QWORD *)(v57 + 16) = 0;
            *(_OWORD *)(v57 + 24) = 0;
          }
          while ( v55 != v31 );
        }
      }
      else
      {
        v55 = v204;
        if ( v31 < v204 )
          goto LABEL_44;
      }
LABEL_19:
      v28[46].m128i_i64[0] = v204;
    }
    v166 = v28;
    v28[47] = _mm_load_si128(&v259);
    v36 = _mm_load_si128(&v260);
    v28[48] = v36;
    sub_134A00(v28);
    v37 = v166[49].m128i_i64[0];
    v38 = *(_DWORD *)(v37 + 48) & 1;
    v39 = sub_10C900(v37, 0);
    v40 = v39;
    if ( !v39 )
    {
      if ( !under_debugger )
        sub_37EEE0(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v39 + 24);
    v41 = sub_10CEA0(v166[49].m128i_i64[0], 0);
    v42 = (_QWORD *)v41;
    if ( !v41 )
    {
      if ( !under_debugger )
        sub_37EEE0(50446);
      goto LABEL_304;
    }
    ++*(_DWORD *)(v41 + 24);
    v43 = (_QWORD *)v40;
    nullsub_40();
    v44 = (__int64)v166;
    v215 = *(_DWORD *)(v166[49].m128i_i64[0] + 52);
    if ( v38 )
    {
      v43 = v42;
      nullsub_39();
      v44 = (__int64)v166;
    }
    v247 = 0;
    v248 = 0;
    v251 = 0;
    v246 = (__int64 (__fastcall **)())&off_4CBF50;
    v250 = -4294967238LL;
    v252 = v44;
    v253 = m128i_i64;
    v167 = v44;
    v254 = v42;
    v255 = v40;
    v256 = 0;
    v258 = &v225;
    v249 = 0;
    v257 = 0;
    v45 = sub_2042C0(&v246, v43);
    v46 = v167;
    v47 = v45;
    if ( v45 < 0 && (v45 != -20 || (*(_BYTE *)(*(_QWORD *)(v167 + 1496) + 604LL) & 0x10) == 0) )
      goto LABEL_57;
    if ( !v30 )
    {
      memset(&v229[1], 0, 32);
      v230 = 0;
      v229[0] = off_4CBD00;
      v231 = 0;
      sub_11C170(v167, (__int64)v229);
      v46 = v167;
      v96 = v42[1];
      v97 = v231 + *(int *)(v167 + 792);
      if ( v96 )
      {
        v98 = (_QWORD *)(*v42 + 8LL);
        v99 = *v42 + 24 * v96 + 8;
        do
        {
          v30 += *v98;
          v98 += 3;
        }
        while ( (_QWORD *)v99 != v98 );
        v97 += v30;
      }
      v30 = 16 * v97;
    }
    v48 = *(unsigned __int64 ***)(v46 + 800);
    v49 = *v48;
    if ( !*v48 )
      goto LABEL_54;
    v50 = *v49;
    if ( v48[1] )
    {
      v58 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
      v59 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v59 & 2) != 0 )
      {
LABEL_53:
        *v49 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL | v50 & 3;
        v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v48, (__m128i)(unsigned __int64)*v48);
        *(__m128i *)(*v48 + 1) = v36;
        **v48 &= ~1uLL;
        **v48 |= 2u;
LABEL_54:
        v48[1] = nullptr;
        goto LABEL_29;
      }
      v60 = (__int64 *)v58[1];
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
        v61 = (__int64 *)v58[2];
        if ( (*(_BYTE *)v61 & 2) != 0 )
          goto LABEL_158;
      }
      else
      {
        v210 = v46;
        v187 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
        sub_1E9170(v60);
        v58 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
        v46 = v210;
        v61 = *(__int64 **)((v50 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
          v59 = *v187;
          if ( (*v187 & 2) != 0 )
          {
LABEL_51:
            if ( v50 > 3 )
            {
LABEL_52:
              v174 = v46;
              qfree();
              v49 = *v48;
              v46 = v174;
              v50 = **v48;
              goto LABEL_53;
            }
LABEL_159:
            v49 = *v48;
            v50 = **v48;
            goto LABEL_53;
          }
LABEL_158:
          *v58 = v59 | 2;
          if ( v50 > 3 )
            goto LABEL_52;
          goto LABEL_159;
        }
      }
      v207 = v46;
      v173 = v58;
      sub_1E9170(v61);
      v58 = v173;
      v46 = v207;
      v59 = *v173;
      if ( (*v173 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_158;
    }
    *v49 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL | *v49 & 3;
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v48, (__m128i)(unsigned __int64)*v48);
    *(__m128i *)(*v48 + 1) = v36;
    **v48 &= ~1uLL;
    **v48 |= 2u;
LABEL_29:
    v51 = *(_QWORD *)(v46 + 968);
    v52 = v46;
    if ( v51 )
    {
      do
      {
        sub_1E98A0(*(_QWORD **)(v51 + 24));
        v53 = (void *)v51;
        v51 = *(_QWORD *)(v51 + 16);
        operator delete(v53, 0x28u);
      }
      while ( v51 );
      v46 = v52;
    }
    v168 = v46;
    *(_QWORD *)(v46 + 968) = 0;
    *(_QWORD *)(v46 + 976) = v46 + 960;
    *(_QWORD *)(v46 + 984) = v46 + 960;
    *(_QWORD *)(v46 + 992) = 0;
    sub_1F23C0(v46);
    sub_20FD20(v168);
    v46 = v168;
    if ( (*(_DWORD *)v168 & 0x40) != 0 && (*(_DWORD *)v168 & 1) != 0 )
    {
      v101 = *(_QWORD *)(v168 + 1504);
      v233 = 0;
      v234 = v168;
      v232 = off_4CBF28;
      v235 = v42;
      v236 = v40;
      v237 = 0;
      sub_101400(v42, v101, &v232, 8);
      v46 = v168;
      if ( v237 )
        goto LABEL_37;
    }
    v169 = v46;
    v54 = sub_101400(v42, *(_QWORD *)(v46 + 1504), &v246, 8);
    v46 = v169;
    v47 = v54;
    if ( v54 == -36 )
      goto LABEL_37;
    if ( v54 < 0 )
      goto LABEL_57;
    if ( v251 )
      goto LABEL_37;
    if ( v54 )
    {
      if ( !under_debugger )
        sub_37EEE0(50350);
      goto LABEL_304;
    }
    sub_1F4B00((__int64)&v227, v169);
    v46 = v169;
    v234 = 0;
    v69 = *(_DWORD *)(v169 + 64);
    v235 = nullptr;
    v232 = off_4CBED8;
    v236 = 0;
    v237 = 0;
    v238 = m128i_i64;
    v239 = nullptr;
    v240 = 0;
    v241 = 0;
    v243 = &v227;
    v244 = -1;
    v245 = 0;
    v233 = v169;
    v242 = 0;
    if ( v69 <= 0 )
      goto LABEL_198;
    v70 = 0;
    do
    {
      v180 = v46;
      *(_QWORD *)(v46 + 808) = &v239;
      v71 = sub_1F9300(&v232, *(_QWORD *)(*(_QWORD *)(v46 + 528) + 8 * v70));
      v46 = v180;
      v221 = v71;
      *(_QWORD *)(v180 + 808) = 0;
      if ( v71 < 0 )
      {
        if ( v71 == -36 )
          goto LABEL_169;
        goto LABEL_98;
      }
      v208 = v239;
      if ( !v239 )
        goto LABEL_91;
      if ( !v240 )
        goto LABEL_91;
      v72 = *(__m128i **)(v180 + 800);
      v73 = (unsigned __int64 *)v239[1];
      if ( v73 == v239 )
        goto LABEL_91;
      do
      {
LABEL_83:
        v74 = (unsigned __int64 *)v72->m128i_i64[0];
        v224 = (const __m128i *)(v73 + 3);
        if ( !v74 )
        {
          v186 = v46;
          v100 = qalloc();
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v100, (__m128i)(unsigned __int64)v100);
          if ( !v100 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v46 = v186;
          *(_OWORD *)(v100 + 16) = 0;
          *(_OWORD *)(v100 + 32) = 0;
          *(_OWORD *)(v100 + 48) = 0;
          *(_QWORD *)v100 = v100 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v100 + 64) = 0;
          *(__m128 *)(v100 + 8) = a3;
          v72->m128i_i64[0] = v100;
          *(_QWORD *)v100 = v100 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v100 & 3LL;
          v36 = _mm_unpacklo_epi64((__m128i)v72->m128i_u64[0], (__m128i)v72->m128i_u64[0]);
          *(__m128i *)(v72->m128i_i64[0] + 8) = v36;
          *(_QWORD *)v72->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v72->m128i_i64[0] |= 2uLL;
          v74 = (unsigned __int64 *)v72->m128i_i64[0];
LABEL_85:
          v181 = v46;
          sub_1F3A20(v72, v74, 1, &v224);
LABEL_86:
          v46 = v181;
          goto LABEL_87;
        }
        if ( !v72->m128i_i64[1] )
          goto LABEL_85;
        v87 = *v74 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v87 & 2) != 0 )
        {
          v92 = 1;
LABEL_136:
          v181 = v46;
          sub_1F3A20(v72, v74, v92, &v224);
          goto LABEL_86;
        }
        v88 = v73[3];
        v89 = 1;
        while ( 1 )
        {
          v90 = *(_QWORD *)(v87 + 24);
          if ( v88 < v90 )
          {
            v91 = *(_BYTE **)(v87 + 8);
            v89 = 1;
            if ( (*v91 & 2) != 0 )
              goto LABEL_126;
            goto LABEL_144;
          }
          if ( v90 >= v88 )
            break;
          v91 = *(_BYTE **)(v87 + 16);
          v89 = 0;
          if ( (*v91 & 2) != 0 )
            goto LABEL_126;
LABEL_144:
          v87 = (unsigned __int64)v91;
        }
        if ( !v87 )
        {
LABEL_126:
          v92 = v89;
          v74 = (unsigned __int64 *)v87;
          goto LABEL_136;
        }
LABEL_87:
        if ( (*v73 & 2) != 0 )
        {
LABEL_90:
          if ( v208 == v73 )
            break;
          goto LABEL_83;
        }
        v75 = (unsigned __int64 *)v73[2];
        if ( (*(_BYTE *)v75 & 2) == 0 )
        {
          do
          {
            v73 = v75;
            v75 = (unsigned __int64 *)v75[1];
          }
          while ( (*(_BYTE *)v75 & 2) == 0 );
          goto LABEL_90;
        }
        v93 = (unsigned __int64 *)(*v73 & 0xFFFFFFFFFFFFFFFCLL);
        v94 = *v93;
        if ( (*v93 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v93[2] == v73 )
          {
            v73 = v93;
            v95 = v94 & 0xFFFFFFFFFFFFFFFCLL;
            v94 = *(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v94 & 2) != 0 )
            {
              v73 = (unsigned __int64 *)v95;
              if ( v208 != (unsigned __int64 *)v95 )
                goto LABEL_83;
              goto LABEL_91;
            }
            v93 = (unsigned __int64 *)v95;
          }
        }
        v73 = v93;
      }
      while ( v208 != v93 );
LABEL_91:
      ++v70;
    }
    while ( *(_DWORD *)(v46 + 64) > (int)v70 );
    if ( v221 )
      break;
LABEL_198:
    if ( (*(_DWORD *)v46 & 0x8000000) != 0 )
    {
LABEL_169:
      v232 = off_4CBED8;
      if ( v241 )
      {
        v191 = v46;
        *(_QWORD *)&v242 = 0;
        qfree();
        v46 = v191;
      }
      v109 = v239;
      if ( !v239 )
        goto LABEL_176;
      v110 = *v239;
      if ( v240 )
      {
        v134 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
        v135 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v135 & 2) == 0 )
        {
          v136 = (__int64 *)v134[1];
          if ( (*(_BYTE *)v136 & 2) != 0 )
          {
            v137 = (__int64 *)v134[2];
            if ( (*(_BYTE *)v137 & 2) == 0 )
            {
LABEL_224:
              v198 = v46;
              sub_1E9170(v137);
              v46 = v198;
              goto LABEL_225;
            }
          }
          else
          {
            v197 = v46;
            sub_1E9170(v136);
            v137 = (__int64 *)v134[2];
            v46 = v197;
            if ( (*(_BYTE *)v137 & 2) == 0 )
              goto LABEL_224;
LABEL_225:
            v135 = *v134;
            if ( (*v134 & 2) != 0 )
            {
LABEL_226:
              if ( v110 <= 3 )
              {
                v109 = v239;
              }
              else
              {
                v199 = v46;
                qfree();
                v109 = v239;
                v46 = v199;
              }
              v110 = *v239;
              goto LABEL_229;
            }
          }
          *v134 = v135 | 2;
          goto LABEL_226;
        }
LABEL_229:
        *v109 = v110 & 3 | (unsigned __int64)v109 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v239 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v239, (__m128i)(unsigned __int64)v239);
        *v239 &= ~1uLL;
        *v239 |= 2u;
        v240 = 0;
        goto LABEL_174;
      }
      *v239 = *v239 & 3 | (unsigned __int64)v239 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v239 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v239, (__m128i)(unsigned __int64)v239);
      *v239 &= ~1uLL;
      *v239 |= 2u;
LABEL_174:
      if ( v239 )
      {
        v192 = v46;
        qfree();
        v46 = v192;
      }
LABEL_176:
      v111 = v227;
      if ( v227 )
      {
        if ( v228 )
        {
          v216 = v30;
          v218 = v40;
          v220 = v42;
          v211 = 0;
          v213 = v228;
          v222 = v46;
          do
          {
            v112 = (_QWORD *)(v111 + 80 * v211);
            v113 = v112[7];
            if ( v113 )
            {
              if ( v112[8] )
              {
                v193 = v112[8];
                v114 = 0;
                do
                {
                  v115 = (_QWORD *)(v113 + 96 * v114);
                  v116 = v115[5];
                  if ( v116 )
                  {
                    v117 = v115[6];
                    if ( v117 )
                    {
                      for ( i = 0; i != v117; ++i )
                      {
                        v119 = v116 + 40 * i;
                        if ( *(_QWORD *)(v119 + 16) )
                        {
                          *(_QWORD *)(v119 + 24) = 0;
                          qfree();
                        }
                        qfree();
                        v116 = v115[5];
                      }
                    }
                    v115[6] = 0;
                    qfree();
                  }
                  if ( v115[2] )
                  {
                    v115[3] = 0;
                    qfree();
                  }
                  ++v114;
                  qfree();
                  v113 = v112[7];
                }
                while ( v193 != v114 );
              }
              v112[8] = 0;
              qfree();
            }
            if ( v112[4] )
            {
              v112[5] = 0;
              qfree();
            }
            qfree();
            ++v211;
            v111 = v227;
          }
          while ( v213 != v211 );
          v30 = v216;
          v40 = v218;
          v42 = v220;
          v46 = v222;
        }
        v194 = v46;
        v228 = 0;
        qfree();
        v46 = v194;
      }
LABEL_37:
      v246 = (__int64 (__fastcall **)())&off_4CBF50;
      if ( v256 )
      {
        v170 = v46;
        *(_QWORD *)&v257 = 0;
        qfree();
        v46 = v170;
      }
      if ( v248 )
      {
        v171 = v46;
        *(_QWORD *)&v249 = 0;
        qfree();
        v46 = v171;
      }
      v172 = (__m128i *)v46;
      sub_1013D0((__int64)v42);
      sub_1013D0(v40);
      v28 = v172;
      continue;
    }
    break;
  }
  v182 = v46;
  v221 = sub_23A1E0(v46, &v223);
  v46 = v182;
  if ( v221 == -36 )
    goto LABEL_169;
  if ( v221 )
  {
    if ( !v223 )
      goto LABEL_98;
  }
  else
  {
    if ( (*(_BYTE *)(v182 + 3) & 8) != 0 )
      goto LABEL_169;
    if ( !v223 )
    {
LABEL_97:
      v221 = 0;
      goto LABEL_98;
    }
  }
  v121 = sub_1C5330(v182, *(_QWORD *)(v182 + 800));
  v221 = v121;
  v46 = v182;
  if ( v121 == -36 )
    goto LABEL_169;
  if ( !v121 )
  {
    if ( (*(_BYTE *)(v182 + 3) & 8) != 0 )
      goto LABEL_169;
    goto LABEL_97;
  }
LABEL_98:
  v183 = v46;
  sub_1ED700(&v232);
  v76 = v227;
  v46 = v183;
  if ( v227 )
  {
    v77 = v228;
    if ( v228 )
    {
      v212 = v40;
      v78 = 0;
      v217 = v42;
      v219 = v183;
      do
      {
        v79 = (_QWORD *)(v76 + 80 * v78);
        v80 = v79[7];
        if ( v80 )
        {
          if ( v79[8] )
          {
            v205 = v77;
            v81 = 0;
            v209 = v78;
            v184 = v79[8];
            do
            {
              v82 = (_QWORD *)(v80 + 96 * v81);
              v83 = v82[5];
              if ( v83 )
              {
                v84 = v82[6];
                if ( v84 )
                {
                  for ( j = 0; j != v84; ++j )
                  {
                    v86 = v83 + 40 * j;
                    if ( *(_QWORD *)(v86 + 16) )
                    {
                      *(_QWORD *)(v86 + 24) = 0;
                      qfree();
                    }
                    qfree();
                    v83 = v82[5];
                  }
                }
                v82[6] = 0;
                qfree();
              }
              if ( v82[2] )
              {
                v82[3] = 0;
                qfree();
              }
              ++v81;
              qfree();
              v80 = v79[7];
            }
            while ( v184 != v81 );
            v77 = v205;
            v78 = v209;
          }
          v79[8] = 0;
          qfree();
        }
        if ( v79[4] )
        {
          v79[5] = 0;
          qfree();
        }
        ++v78;
        qfree();
        v76 = v227;
      }
      while ( v77 != v78 );
      v40 = v212;
      v42 = v217;
      v46 = v219;
    }
    v185 = v46;
    v228 = 0;
    qfree();
    v46 = v185;
  }
  v47 = v221;
LABEL_57:
  v246 = (__int64 (__fastcall **)())&off_4CBF50;
  if ( v256 )
  {
    v175 = v46;
    *(_QWORD *)&v257 = 0;
    qfree();
    v46 = v175;
  }
  if ( v248 )
  {
    v176 = v46;
    *(_QWORD *)&v249 = 0;
    qfree();
    v46 = v176;
  }
  v177 = v46;
  sub_1013D0((__int64)v42);
  sub_1013D0(v40);
  v64 = v225;
  v65 = (__m128i *)v177;
  v66 = &v225[v226];
  if ( v66 != v225 )
  {
    do
    {
      v178 = v65;
      sub_32CD90((_DWORD)v65, *v64++, 57, v62, (_DWORD)v65, v63);
      v65 = v178;
    }
    while ( v66 != v64 );
  }
  if ( v47 )
    goto LABEL_73;
  v67 = v65->m128i_i32[0];
  if ( (v65->m128i_i32[0] & 0x40000) == 0 )
    goto LABEL_65;
  v122 = (_QWORD *)v65[50].m128i_i64[0];
  v123 = (_QWORD *)*v122;
  if ( !*v122 || !v122[1] || (v124 = (_QWORD *)v123[1], v123 == v124) )
  {
LABEL_218:
    v132 = v65[49].m128i_i32[2];
    v133 = v65[49].m128i_i32[2];
    if ( v132 < v65[27].m128i_i64[1] )
    {
      do
      {
        ++v133;
        *(_DWORD *)(v65[27].m128i_i64[0] + 104 * v132 + 24) &= ~0x1000u;
        v132 = v133;
      }
      while ( (unsigned __int64)v133 < v65[27].m128i_i64[1] );
      goto LABEL_70;
    }
    if ( (v67 & 0x10000) == 0 )
      goto LABEL_280;
    goto LABEL_253;
  }
  while ( 2 )
  {
    v125 = (char *)v124[3];
    v126 = *v125;
    if ( *v125 == 9 )
    {
      if ( !under_debugger )
        sub_37EEE0(52925);
      goto LABEL_304;
    }
    if ( v126 != 15 )
    {
      if ( v126 != 5 )
        goto LABEL_211;
LABEL_230:
      if ( *((_QWORD *)v125 + 1) )
      {
        v200 = v65;
        j__qfree();
        goto LABEL_232;
      }
      goto LABEL_211;
    }
    v141 = *((unsigned int *)v125 + 1);
    v201 = v65;
    v142 = sub_119040(v141);
    v65 = v201;
    if ( v142 )
      goto LABEL_247;
    if ( !v124[5] )
    {
      v143 = v124[4];
      v144 = *((int *)v124 + 12);
      if ( *(_QWORD *)(v143 + 440) < v144 )
        sub_1E8F00(v141);
      if ( *((_DWORD *)v125 + 1) == *(_DWORD *)(*(_QWORD *)(v143 + 432) + 104 * v144 + 88) )
        goto LABEL_247;
    }
    v145 = (_QWORD *)v201[87].m128i_i64[0];
    v146 = v124[8];
    if ( !v145 )
      goto LABEL_246;
    v147 = *v145 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v147 )
      goto LABEL_247;
    if ( (*(_BYTE *)(*v145 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_246;
    v160 = *(_QWORD *)(v146 + 24);
    while ( 2 )
    {
      v161 = *(_QWORD *)(v147 + 24);
      if ( v160 < v161 )
      {
        v147 = *(_QWORD *)(v147 + 8);
        goto LABEL_272;
      }
      if ( v161 < v160 )
      {
        v147 = *(_QWORD *)(v147 + 16);
LABEL_272:
        if ( (*(_BYTE *)v147 & 2) != 0 )
          goto LABEL_246;
        continue;
      }
      break;
    }
    if ( v145 == (_QWORD *)v147 )
    {
LABEL_246:
      v232 = (__int64 (__fastcall **)())(v146 + 24);
      sub_C4570(v201 + 87, (unsigned __int64 *)(v146 + 24), &v232);
      copy_tinfo_t();
      v65 = v201;
    }
LABEL_247:
    if ( *v125 == 5 )
      goto LABEL_230;
    if ( *v125 == 15 )
    {
      v148 = *((_QWORD *)v125 + 1);
      if ( v148 )
      {
        v202 = v65;
        clear_tinfo_t();
        v149 = v202;
        if ( *(_QWORD *)(v148 + 24) )
        {
          *(_QWORD *)(v148 + 32) = 0;
          qfree();
          v149 = v202;
        }
        v200 = v149;
        cleanup_argloc();
        qfree();
LABEL_232:
        v65 = v200;
      }
    }
LABEL_211:
    v127 = v124[5];
    v128 = *((_DWORD *)v124 + 12);
    *v125 = 9;
    v206 = v65;
    v196 = v127;
    v129 = j__qalloc_or_throw();
    v65 = v206;
    *(_DWORD *)(v129 + 16) = v128;
    *(_QWORD *)v129 = v206;
    *(_QWORD *)(v129 + 8) = v196;
    *((_QWORD *)v125 + 1) = v129;
    if ( (*v124 & 2) == 0 )
    {
      v130 = (_QWORD *)v124[2];
      if ( (*(_BYTE *)v130 & 2) != 0 )
      {
        v138 = (_QWORD *)(*v124 & 0xFFFFFFFFFFFFFFFCLL);
        v139 = *v138;
        if ( (*v138 & 2) == 0 )
        {
          while ( (_QWORD *)v138[2] == v124 )
          {
            v124 = v138;
            v140 = v139 & 0xFFFFFFFFFFFFFFFCLL;
            v139 = *(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v139 & 2) != 0 )
            {
              v124 = (_QWORD *)v140;
              goto LABEL_216;
            }
            v138 = (_QWORD *)v140;
          }
        }
        v124 = v138;
      }
      else
      {
        for ( k = (_QWORD *)v130[1]; (*(_BYTE *)k & 2) == 0; k = (_QWORD *)k[1] )
          v130 = k;
        v124 = v130;
      }
    }
LABEL_216:
    if ( v123 != v124 )
      continue;
    break;
  }
  v67 = v206->m128i_i32[0];
  if ( (v206->m128i_i32[0] & 0x40000) != 0 )
    goto LABEL_218;
LABEL_65:
  v179 = v65;
  *(double *)v36.m128i_i64 = sub_215F50(v65);
  if ( (unsigned __int8)sub_CACB0((__int64)v179, v36, *(double *)a3.m128_u64, (__m128i)0LL, a5) )
    v179->m128i_i32[0] &= ~0x10000u;
  if ( (int)sub_1C51F0((__int64)v179) > 0 )
    v179->m128i_i32[0] &= ~0x10000u;
  sub_1F1E60(m128i_i64, v179[49].m128i_i32[2]);
  sub_20FD20(v179);
  v65 = v179;
LABEL_70:
  if ( (v65->m128i_i32[0] & 0x10000) == 0 )
  {
    if ( (v65->m128i_i32[0] & 0x40000) == 0 )
    {
      v47 = 1;
      goto LABEL_73;
    }
LABEL_280:
    if ( !under_debugger )
      sub_37EEE0(50352);
LABEL_304:
    BUG();
  }
LABEL_253:
  v203 = (__int64)v65;
  v151 = sub_10C900(v65[49].m128i_i64[0], 0);
  v152 = (_QWORD *)v151;
  if ( !v151 )
  {
    if ( !under_debugger )
      sub_37EEE0(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v151 + 24);
  v153 = sub_10CEA0(*(_QWORD *)(v203 + 784), 0);
  v154 = (_QWORD *)v153;
  if ( !v153 )
  {
    if ( !under_debugger )
      sub_37EEE0(50446);
    goto LABEL_304;
  }
  ++*(_DWORD *)(v153 + 24);
  v155 = *(_DWORD *)v203 & 0x40000;
  if ( v215 == *(_DWORD *)(*(_QWORD *)(v203 + 784) + 52LL) )
  {
    v156 = *(_QWORD *)(v203 + 440);
    if ( v156 )
    {
      v157 = 0;
      v158 = 0;
      while ( (*(_BYTE *)(*(_QWORD *)(v203 + 432) + 104 * v158 + 25) & 4) == 0 )
      {
        v158 = ++v157;
        if ( v157 >= v156 )
          goto LABEL_266;
      }
      *(_BYTE *)(v203 + 754) |= 0x10u;
    }
LABEL_266:
    if ( v155 )
    {
      if ( !(unsigned __int8)sub_1EADE0((unsigned __int8 *)v203) )
      {
LABEL_268:
        sub_63560(v159, 0, (__int64)"after prealloc_lvars");
        goto LABEL_258;
      }
      v246 = off_4CBDA0;
      v162 = *(_QWORD *)(v159 + 1504);
      v203 = v159;
      v247 = 0;
      v248 = (__int64)m128i_i64;
      sub_101400(v154, v162, &v246, 4);
      sub_101400(v152, *(_QWORD *)(v203 + 1504), &v246, 4);
    }
    else
    {
      sub_101620(v154);
      sub_101620(v152);
    }
    v159 = v203;
    goto LABEL_268;
  }
  if ( v155 )
  {
    if ( !under_debugger )
      sub_37EEE0(50989);
    goto LABEL_304;
  }
  v47 = 1;
LABEL_258:
  sub_1013D0((__int64)v154);
  sub_1013D0((__int64)v152);
LABEL_73:
  if ( v225 )
  {
    *(_QWORD *)&v226 = 0;
    qfree();
  }
  return v47;
}

