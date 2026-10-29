__int64 __fastcall sub_44B00(__int64 *a1, char *a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  signed __int64 v8; // rbp
  int v9; // eax
  unsigned __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rbp
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  char v19; // al
  __int64 v20; // rdx
  char v21; // r13
  __int64 v22; // r14
  __int64 v23; // rbp
  _QWORD *v24; // rax
  char *v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int32 v34; // r13d
  unsigned __int64 v35; // rsi
  __m256i *v36; // r15
  int v37; // r14d
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // r9d
  __int64 v42; // r10
  unsigned __int64 v43; // rdx
  __int8 *v44; // rax
  unsigned __int8 v45; // cl
  __int64 v46; // rbx
  unsigned __int64 v47; // r8
  int v48; // r14d
  unsigned __int64 v49; // rdx
  __int64 v50; // rbx
  __int8 *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  unsigned int v54; // r13d
  __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  __int8 *v57; // rax
  __int64 v58; // rdi
  int v59; // ecx
  unsigned __int64 v60; // rbx
  __int64 v61; // rdx
  __int8 *v62; // rax
  unsigned __int64 v63; // rsi
  _BYTE *v64; // rdi
  __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rbp
  __int64 v68; // rax
  _QWORD *v69; // r8
  __int64 v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r14
  char v75; // al
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  char *v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rbp
  __int64 v82; // r13
  int *v83; // rdi
  __int64 v84; // r15
  unsigned __int64 v85; // r9
  int v86; // r10d
  __int64 v87; // rbp
  __int64 v88; // r13
  __int64 v89; // rax
  bool v90; // cf
  int *v91; // rcx
  int v92; // ebx
  __int64 v93; // rsi
  __m128i *v94; // rax
  __m128i *v95; // rax
  __int64 v96; // rax
  const void *v97; // rsi
  __int64 v98; // rax
  __int64 v99; // r14
  const __m128i *v100; // rdi
  __int64 v101; // rcx
  __int64 v102; // rdx
  __m128i v103; // xmm0
  __int64 v104; // rax
  __int64 v105; // r14
  const __m128i *v106; // rdi
  __int64 v107; // rcx
  __int64 v108; // rdx
  __m128i v109; // xmm0
  _QWORD *v110; // r13
  __int64 v111; // rax
  _QWORD *v112; // rcx
  __int64 j; // rax
  __int64 v114; // rsi
  _QWORD *v115; // rdx
  _QWORD *v116; // r14
  unsigned __int64 *v117; // r15
  unsigned __int64 v118; // rax
  __int64 v119; // rbp
  unsigned __int64 *v120; // rbp
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rbp
  char v125; // dl
  __int64 v126; // r13
  __int64 v127; // r13
  int func_chunknum; // eax
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rbx
  int v131; // eax
  char v132; // dl
  __int64 next_func_addr; // rax
  __int64 v134; // rsi
  const void *v135; // rax
  char *v136; // rbp
  __m128i *v137; // rax
  __int64 flags; // rax
  __int64 v139; // rax
  __int64 v140; // rcx
  const __m128i *v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdx
  __m128i v144; // xmm0
  __int64 v145; // rax
  const __m128i *v146; // rdi
  __int64 v147; // rcx
  __m256i *v148; // rdx
  __m128i v149; // xmm0
  unsigned __int64 k; // rbp
  unsigned __int64 v151; // r12
  __int64 v152; // r13
  unsigned __int64 v153; // r15
  int v154; // ebx
  __int64 v155; // rax
  __int64 v156; // rbp
  const __m128i *v157; // rdi
  __int64 v158; // rcx
  __int64 v159; // rdx
  __m128i v160; // xmm0
  char v161; // al
  __int64 v162; // rax
  unsigned __int64 v163; // rax
  _QWORD *v164; // rax
  unsigned __int64 insn; // rax
  _QWORD *v166; // rsi
  int i; // ecx
  __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rax
  const __m128i *v171; // rdi
  __int64 v172; // rax
  __int64 v173; // rdx
  __m256i *v174; // rcx
  __m128i v175; // xmm0
  __int64 func; // rax
  __int64 v177; // rax
  void *v178; // rdi
  __int64 v179; // rbp
  __int64 v180; // r14
  char *v181; // rcx
  __int64 v182; // rsi
  __int64 v183; // [rsp+0h] [rbp-588h]
  __int64 v184; // [rsp+8h] [rbp-580h]
  __int64 v185; // [rsp+8h] [rbp-580h]
  char v186; // [rsp+8h] [rbp-580h]
  __int64 v187; // [rsp+10h] [rbp-578h]
  char v189; // [rsp+27h] [rbp-561h]
  __int64 v190; // [rsp+28h] [rbp-560h]
  __int64 v191; // [rsp+30h] [rbp-558h]
  unsigned int v192; // [rsp+30h] [rbp-558h]
  unsigned __int64 v193; // [rsp+30h] [rbp-558h]
  __int64 v194; // [rsp+30h] [rbp-558h]
  __int64 v195; // [rsp+38h] [rbp-550h]
  __int64 v196; // [rsp+48h] [rbp-540h]
  __int64 v197; // [rsp+48h] [rbp-540h]
  unsigned __int64 v198; // [rsp+48h] [rbp-540h]
  __int64 v199; // [rsp+50h] [rbp-538h]
  __int64 v200; // [rsp+50h] [rbp-538h]
  __int64 v201; // [rsp+50h] [rbp-538h]
  int v202; // [rsp+68h] [rbp-520h]
  int v203; // [rsp+6Ch] [rbp-51Ch]
  unsigned __int64 v205; // [rsp+80h] [rbp-508h] BYREF
  __int128 v206; // [rsp+88h] [rbp-500h]
  __int64 v207; // [rsp+A0h] [rbp-4E8h] BYREF
  __int128 v208; // [rsp+A8h] [rbp-4E0h]
  void *dest; // [rsp+C0h] [rbp-4C8h]
  __int128 v210; // [rsp+C8h] [rbp-4C0h]
  __m256i v211; // [rsp+E0h] [rbp-4A8h] BYREF
  __int64 v212; // [rsp+100h] [rbp-488h]
  __int64 v213; // [rsp+108h] [rbp-480h]
  __int64 v214; // [rsp+110h] [rbp-478h]
  __int128 v215; // [rsp+118h] [rbp-470h]
  __int64 v216; // [rsp+128h] [rbp-460h]
  __int128 v217; // [rsp+130h] [rbp-458h]
  __int64 v218; // [rsp+140h] [rbp-448h]
  __int64 v219; // [rsp+148h] [rbp-440h]
  __int128 v220; // [rsp+150h] [rbp-438h]
  __int64 v221; // [rsp+160h] [rbp-428h]
  int v222; // [rsp+168h] [rbp-420h]
  __int64 v223; // [rsp+170h] [rbp-418h] BYREF
  __int64 v224; // [rsp+178h] [rbp-410h]
  __int128 v225; // [rsp+180h] [rbp-408h]
  __int64 v226; // [rsp+190h] [rbp-3F8h]
  __int128 v227; // [rsp+198h] [rbp-3F0h]
  __int64 v228; // [rsp+1A8h] [rbp-3E0h]
  __int128 v229; // [rsp+1B0h] [rbp-3D8h]
  __int64 v230; // [rsp+1C0h] [rbp-3C8h]
  __int128 v231; // [rsp+1C8h] [rbp-3C0h]
  __int64 v232; // [rsp+1D8h] [rbp-3B0h]
  __int128 v233; // [rsp+1E0h] [rbp-3A8h]
  __int64 v234; // [rsp+1F0h] [rbp-398h]
  __int128 v235; // [rsp+1F8h] [rbp-390h]
  __int64 v236; // [rsp+208h] [rbp-380h]
  __int128 v237; // [rsp+210h] [rbp-378h]
  __int64 v238; // [rsp+220h] [rbp-368h]
  __int128 v239; // [rsp+228h] [rbp-360h]
  __int64 v240; // [rsp+238h] [rbp-350h]
  __int128 v241; // [rsp+240h] [rbp-348h]
  __int64 *v242; // [rsp+250h] [rbp-338h]
  __int64 *v243; // [rsp+258h] [rbp-330h]
  __int64 *v244; // [rsp+260h] [rbp-328h]
  char v245; // [rsp+268h] [rbp-320h]
  __int128 v246; // [rsp+270h] [rbp-318h] BYREF
  __int64 v247; // [rsp+280h] [rbp-308h]
  __int64 v248; // [rsp+288h] [rbp-300h]
  __int64 v249; // [rsp+290h] [rbp-2F8h]
  char v250; // [rsp+298h] [rbp-2F0h] BYREF
  char v251; // [rsp+3D8h] [rbp-1B0h] BYREF
  __int128 v252; // [rsp+3E0h] [rbp-1A8h]
  __int64 v253; // [rsp+3F0h] [rbp-198h]
  __int64 v254; // [rsp+3F8h] [rbp-190h]
  __int64 v255; // [rsp+400h] [rbp-188h]
  _QWORD v256[5]; // [rsp+408h] [rbp-180h] BYREF
  __int64 v257[35]; // [rsp+430h] [rbp-158h] BYREF
  _QWORD v258[8]; // [rsp+548h] [rbp-40h] BYREF

  v258[0] = __readfsqword(0x28u);
  v3 = a1[30];
  if ( (debug & 0x200000) != 0 )
    sub_224B0((__int64)"%a: starting simplex method for stack analysis\n", a3);
  v205 = 0;
  v224 = 0;
  v4 = *a1;
  v5 = a1[32];
  v226 = 0;
  v228 = 0;
  v223 = v4;
  v242 = a1 + 1;
  v243 = a1 + 23;
  v244 = a1 + 34;
  v230 = 0;
  v232 = 0;
  v234 = 0;
  v236 = 0;
  v238 = 0;
  v240 = 0;
  v245 = 0;
  v206 = 0;
  v225 = 0;
  v227 = 0;
  v229 = 0;
  v231 = 0;
  v233 = 0;
  v235 = 0;
  v237 = 0;
  v239 = 0;
  v241 = 0;
  v6 = sub_432C0(&v223, &v205, v5, 1);
  if ( !v6 )
  {
    if ( (debug & 0x200000) != 0 )
      sub_224B0((__int64)"%a: failed to build simplex model\n", 0.0);
    v17 = 0;
    goto LABEL_33;
  }
  v7 = a1[33] + a1[31];
  v195 = v7;
  if ( v245 )
  {
    v8 = v7 + a1[32];
    v11 = sub_41540(&v223, v6, v8);
    v202 = *((_DWORD *)a1 + 26);
    if ( !v11 )
      goto LABEL_13;
  }
  else
  {
    v8 = 0;
    v202 = *((_DWORD *)a1 + 26);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (int)Clp_numberRows() <= 0 )
        goto LABEL_72;
      v9 = Clp_initialPrimalSolve();
      if ( !v9 )
        goto LABEL_72;
      if ( v9 == -99 )
      {
        sub_3FE90((__int64)"%a: exception in clp.dll", 0.0);
LABEL_28:
        v207 = 0;
        v208 = 0;
        sub_41400(&v223, &v207);
        Clp_deleteModel();
        if ( (debug & 0x200000) != 0 )
          sub_224B0((__int64)"%a: failed to extract simplex result\n", 0.0);
        v17 = 0;
        goto LABEL_31;
      }
      if ( (_QWORD)v206 )
        break;
LABEL_13:
      if ( v8 <= 3 )
        goto LABEL_28;
      *(_OWORD *)v211.m256i_i8 = 0xC0u;
      v12 = *a1;
      v212 = -1;
      v213 = 0;
      v214 = 0;
      v216 = 0;
      v218 = 0;
      v219 = -1;
      v221 = 0;
      v222 = 144;
      *(_OWORD *)&v211.m256i_u64[2] = 0;
      v215 = 0;
      v217 = 0;
      v220 = 0;
      if ( !(unsigned __int8)sub_2FC00(&v211, v12, v3) || !v211.m256i_i64[2] || (unsigned __int8)(get_byte() - 80) > 1u )
      {
        v13 = v216;
        if ( v216 )
        {
          v14 = v217;
          if ( (_QWORD)v217 )
          {
            v15 = 0;
            do
            {
              v16 = (_QWORD *)(v13 + 24 * v15);
              if ( *v16 )
              {
                v16[1] = 0;
                qfree();
                v13 = v216;
              }
              ++v15;
            }
            while ( v14 != v15 );
          }
          *(_QWORD *)&v217 = 0;
          qfree();
        }
        if ( v214 )
        {
          *(_QWORD *)&v215 = 0;
          qfree();
        }
        if ( v211.m256i_i64[1] )
        {
          v211.m256i_i64[2] = 0;
          qfree();
        }
        goto LABEL_28;
      }
      v19 = sub_41540(&v223, v6, v8 - 4);
      v20 = v216;
      v21 = v19;
      if ( v216 )
      {
        v22 = v217;
        if ( (_QWORD)v217 )
        {
          v23 = 0;
          do
          {
            v24 = (_QWORD *)(v20 + 24 * v23);
            if ( *v24 )
            {
              v24[1] = 0;
              qfree();
              v20 = v216;
            }
            ++v23;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v217 = 0;
        qfree();
      }
      if ( v214 )
      {
        *(_QWORD *)&v215 = 0;
        qfree();
      }
      if ( v211.m256i_i64[1] )
      {
        v211.m256i_i64[2] = 0;
        qfree();
      }
      v8 = 0;
      if ( !v21 )
        goto LABEL_28;
    }
    v10 = *(int *)(v205 + 4 * v206 - 4);
    *(_QWORD *)&v206 = v206 - 1;
    LODWORD(dest) = v10;
    if ( v10 >= (unsigned __int64)v233 )
      break;
    Clp_deleteRows();
  }
  if ( under_debugger )
LABEL_340:
    BUG();
  interr();
LABEL_72:
  v207 = 0;
  v208 = 0;
  sub_41400(&v223, &v207);
  Clp_deleteModel();
  v247 = -1;
  v25 = &v250;
  v248 = 0;
  v249 = 0;
  v246 = -1;
  do
  {
    *(_WORD *)v25 = 0;
    v25 += 40;
    *((_WORD *)v25 - 19) = 0;
    *((_WORD *)v25 - 18) = 0;
    *((_DWORD *)v25 - 2) = 0;
    *((_WORD *)v25 - 17) = 0;
    *((_OWORD *)v25 - 2) = 0;
    *((_QWORD *)v25 - 2) = 0;
  }
  while ( &v251 != v25 );
  lock_func_range();
  v189 = 0;
  v190 = a1[26];
  if ( !(16 * a1[27]) )
  {
LABEL_231:
    if ( a2 )
      *a2 = v189;
    if ( (debug & 0x200000) != 0 )
      sub_224B0((__int64)"%a: successfully finished simplex method\n", 0.0);
    v17 = 1;
    goto LABEL_236;
  }
  while ( 1 )
  {
    v26 = *(int *)(v190 + 8);
    v187 = *(_QWORD *)(v207 + 8 * v26);
    v27 = *(_QWORD *)(v207 + 8LL * (v202 + *(_DWORD *)(v190 + 8)));
    if ( -v187 != get_spd() )
    {
      if ( get_prev_func_addr() != -1 )
        get_spd();
      add_auto_stkpnt();
      v189 = 1;
    }
    v183 = a1[23] + 80 * v26;
    if ( *(_DWORD *)(v183 + 72) == 4 )
      break;
    v28 = *(_QWORD *)(v183 + 8) - 1LL;
    if ( v28 < 0 )
    {
      dest = 0;
      v210 = 0;
LABEL_315:
      v58 = v187;
      v35 = 0;
      v36 = 0;
      LODWORD(v60) = 0;
      goto LABEL_121;
    }
    v29 = v187;
    v30 = 0;
    v31 = *(_QWORD *)v183 + 8LL;
    while ( !*(_BYTE *)(v31 + 19) )
    {
      ++v30;
      v29 += *(_QWORD *)v31;
      v31 += 32;
      if ( v28 < v30 )
      {
        v187 = v29;
        goto LABEL_90;
      }
    }
    v187 = v29;
    if ( v28 >= v30 )
    {
      v32 = 32LL * *(_QWORD *)(v183 + 8) + *(_QWORD *)v183;
      do
      {
        if ( *(_BYTE *)(v32 - 5) )
          break;
        v33 = *(_QWORD *)(v32 - 24);
        if ( v33 < 0 && v27 >= a1[32] + v195 )
          break;
        --v28;
        v27 -= v33;
        v32 -= 32;
      }
      while ( v28 >= v30 );
    }
LABEL_90:
    v34 = v30;
    dest = 0;
    v210 = 0;
    if ( (int)v30 > v28 )
      goto LABEL_315;
    v35 = 0;
    v36 = 0;
    v37 = -1;
    v38 = (int)v30;
    v184 = 0;
    do
    {
      while ( 1 )
      {
        v46 = *(_QWORD *)v183 + 32 * v38;
        v45 = *(_BYTE *)(v46 + 27);
        if ( v45 )
        {
          if ( v37 == -1 )
            goto LABEL_105;
          goto LABEL_96;
        }
        v39 = *(_QWORD *)(v46 + 8);
        if ( v37 == -1 )
        {
          v184 = *(_QWORD *)(v46 + 8);
          v37 = v34;
          goto LABEL_102;
        }
        if ( v184 < 0 )
        {
          if ( v39 < 0 )
            goto LABEL_174;
          goto LABEL_96;
        }
        if ( v184 )
          break;
        if ( v39 )
          goto LABEL_96;
LABEL_102:
        v38 = ++v34;
        if ( v34 > v28 )
          goto LABEL_110;
      }
      if ( v39 > 0 )
      {
LABEL_174:
        v184 += v39;
        goto LABEL_102;
      }
LABEL_96:
      v40 = 32LL * v37 + *(_QWORD *)v183;
      v41 = *(unsigned __int8 *)(v40 + 27);
      v42 = *(_QWORD *)v40;
      v211.m256i_i64[1] = v184;
      v43 = v35 + 1;
      v211.m256i_i64[2] = __PAIR64__(v41, v37);
      v211.m256i_i64[0] = v42;
      if ( &v211 < v36 || &v211 >= (__m256i *)((char *)v36 + 24 * *((_QWORD *)&v210 + 1)) )
      {
        if ( *((_QWORD *)&v210 + 1) < v43 )
        {
          v191 = *((_QWORD *)&v210 + 1);
          v98 = qvector_reserve();
          v36 = (__m256i *)v98;
          v99 = *((_QWORD *)&v210 + 1);
          v100 = (const __m128i *)dest;
          v101 = v210 - 1;
          *((_QWORD *)&v210 + 1) = v191;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v102 = v98;
            do
            {
              v103 = _mm_loadu_si128(v100);
              v102 += 24;
              v100 = (const __m128i *)((char *)v100 + 24);
              *(__m128i *)(v102 - 24) = v103;
              *(_QWORD *)(v102 - 8) = v100[-1].m128i_i64[1];
              v90 = v101-- == 0;
            }
            while ( !v90 );
          }
          qfree();
          dest = v36;
          v35 = v210;
          *((_QWORD *)&v210 + 1) = v99;
        }
        v94 = (__m128i *)((char *)v36 + 24 * v35);
        *v94 = _mm_load_si128((const __m128i *)&v211);
        v94[1].m128i_i64[0] = v211.m256i_i64[2];
      }
      else
      {
        if ( *((_QWORD *)&v210 + 1) < v43 )
        {
          v199 = *((_QWORD *)&v210 + 1);
          v196 = v42;
          v192 = v41;
          v139 = qvector_reserve();
          v36 = (__m256i *)v139;
          v140 = *((_QWORD *)&v210 + 1);
          v141 = (const __m128i *)dest;
          v142 = v210 - 1;
          *((_QWORD *)&v210 + 1) = v199;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v143 = v139;
            do
            {
              v144 = _mm_loadu_si128(v141);
              v143 += 24;
              v141 = (const __m128i *)((char *)v141 + 24);
              *(__m128i *)(v143 - 24) = v144;
              *(_QWORD *)(v143 - 8) = v141[-1].m128i_i64[1];
              v90 = v142-- == 0;
            }
            while ( !v90 );
          }
          v200 = v140;
          qfree();
          dest = v36;
          v35 = v210;
          *((_QWORD *)&v210 + 1) = v200;
          v42 = v196;
          v41 = v192;
        }
        v44 = &v36->m256i_i8[24 * v35];
        *(_QWORD *)v44 = v42;
        *((_QWORD *)v44 + 1) = v184;
        *((_DWORD *)v44 + 4) = v37;
        *((_DWORD *)v44 + 5) = v41;
      }
      v36 = (__m256i *)dest;
      v35 = v210 + 1;
      *(_QWORD *)&v210 = v210 + 1;
      v45 = *(_BYTE *)(v46 + 27);
      if ( !v45 )
      {
        v37 = v34;
        v184 = *(_QWORD *)(v46 + 8);
        goto LABEL_102;
      }
LABEL_105:
      v47 = *(_QWORD *)v46;
      v48 = v45;
      v49 = v35 + 1;
      v211.m256i_i32[4] = v34;
      v50 = *((_QWORD *)&v210 + 1);
      *(_OWORD *)v211.m256i_i8 = v47;
      v211.m256i_i32[5] = v45;
      if ( &v211 < v36 || &v211 >= (__m256i *)((char *)v36 + 24 * *((_QWORD *)&v210 + 1)) )
      {
        if ( *((_QWORD *)&v210 + 1) < v49 )
        {
          v104 = qvector_reserve();
          v105 = *((_QWORD *)&v210 + 1);
          v36 = (__m256i *)v104;
          *((_QWORD *)&v210 + 1) = v50;
          v106 = (const __m128i *)dest;
          v107 = v210 - 1;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v108 = v104;
            do
            {
              v109 = _mm_loadu_si128(v106);
              v108 += 24;
              v106 = (const __m128i *)((char *)v106 + 24);
              *(__m128i *)(v108 - 24) = v109;
              *(_QWORD *)(v108 - 8) = v106[-1].m128i_i64[1];
              v90 = v107-- == 0;
            }
            while ( !v90 );
          }
          qfree();
          dest = v36;
          v35 = v210;
          *((_QWORD *)&v210 + 1) = v105;
        }
        v95 = (__m128i *)((char *)v36 + 24 * v35);
        *v95 = _mm_load_si128((const __m128i *)&v211);
        v95[1].m128i_i64[0] = v211.m256i_i64[2];
      }
      else
      {
        if ( *((_QWORD *)&v210 + 1) < v49 )
        {
          v193 = v47;
          v36 = (__m256i *)qvector_reserve();
          v145 = *((_QWORD *)&v210 + 1);
          v146 = (const __m128i *)dest;
          *((_QWORD *)&v210 + 1) = v50;
          v147 = v210 - 1;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v148 = v36;
            do
            {
              v149 = _mm_loadu_si128(v146);
              v148 = (__m256i *)((char *)v148 + 24);
              v146 = (const __m128i *)((char *)v146 + 24);
              *(__m128i *)&v148[-1].m256i_u64[1] = v149;
              v148[-1].m256i_i64[3] = v146[-1].m128i_i64[1];
              v90 = v147-- == 0;
            }
            while ( !v90 );
          }
          v197 = v145;
          qfree();
          dest = v36;
          v35 = v210;
          v47 = v193;
          *((_QWORD *)&v210 + 1) = v197;
        }
        v51 = &v36->m256i_i8[24 * v35];
        *(_QWORD *)v51 = v47;
        *((_QWORD *)v51 + 1) = 0;
        *((_DWORD *)v51 + 4) = v34;
        *((_DWORD *)v51 + 5) = v48;
      }
      ++v34;
      v36 = (__m256i *)dest;
      v37 = -1;
      v38 = v34;
      v35 = v210 + 1;
      *(_QWORD *)&v210 = v210 + 1;
    }
    while ( v34 <= v28 );
LABEL_110:
    if ( v37 != -1 )
    {
      v52 = *((_QWORD *)&v210 + 1);
      v53 = *(_QWORD *)v183 + 32LL * v37;
      v54 = *(unsigned __int8 *)(v53 + 27);
      v55 = *(_QWORD *)v53;
      v211.m256i_i64[2] = __PAIR64__(v54, v37);
      v56 = v35 + 1;
      v211.m256i_i64[1] = v184;
      v211.m256i_i64[0] = v55;
      if ( &v211 < v36 || &v211 >= (__m256i *)((char *)v36 + 24 * *((_QWORD *)&v210 + 1)) )
      {
        if ( *((_QWORD *)&v210 + 1) < v56 )
        {
          v155 = qvector_reserve();
          v156 = *((_QWORD *)&v210 + 1);
          v36 = (__m256i *)v155;
          *((_QWORD *)&v210 + 1) = v52;
          v157 = (const __m128i *)dest;
          v158 = v210 - 1;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v159 = v155;
            do
            {
              v160 = _mm_loadu_si128(v157);
              v159 += 24;
              v157 = (const __m128i *)((char *)v157 + 24);
              *(__m128i *)(v159 - 24) = v160;
              *(_QWORD *)(v159 - 8) = v157[-1].m128i_i64[1];
              v90 = v158-- == 0;
            }
            while ( !v90 );
          }
          qfree();
          dest = v36;
          v35 = v210;
          *((_QWORD *)&v210 + 1) = v156;
        }
        v137 = (__m128i *)((char *)v36 + 24 * v35);
        *v137 = _mm_load_si128((const __m128i *)&v211);
        v137[1].m128i_i64[0] = v211.m256i_i64[2];
      }
      else
      {
        if ( *((_QWORD *)&v210 + 1) < v56 )
        {
          v36 = (__m256i *)qvector_reserve();
          v171 = (const __m128i *)dest;
          v172 = *((_QWORD *)&v210 + 1);
          *((_QWORD *)&v210 + 1) = v52;
          v173 = v210 - 1;
          if ( (__int64)v210 - 1 >= 0 )
          {
            v174 = v36;
            do
            {
              v175 = _mm_loadu_si128(v171);
              v174 = (__m256i *)((char *)v174 + 24);
              v171 = (const __m128i *)((char *)v171 + 24);
              *(__m128i *)&v174[-1].m256i_u64[1] = v175;
              v174[-1].m256i_i64[3] = v171[-1].m128i_i64[1];
              v90 = v173-- == 0;
            }
            while ( !v90 );
          }
          v194 = v172;
          qfree();
          dest = v36;
          v35 = v210;
          *((_QWORD *)&v210 + 1) = v194;
        }
        v57 = &v36->m256i_i8[24 * v35];
        *(_QWORD *)v57 = v55;
        *((_QWORD *)v57 + 1) = v184;
        *((_DWORD *)v57 + 4) = v37;
        *((_DWORD *)v57 + 5) = v54;
      }
      v36 = (__m256i *)dest;
      v35 = v210 + 1;
      *(_QWORD *)&v210 = v210 + 1;
    }
    v58 = v187;
    if ( v35 )
    {
      v59 = 0;
      LODWORD(v60) = 0;
      v61 = 0;
      do
      {
        while ( 1 )
        {
          v62 = &v36->m256i_i8[24 * v61];
          if ( !*((_DWORD *)v62 + 5) )
            break;
          ++v59;
          LODWORD(v60) = v60 + 1;
          v61 = v59;
          if ( v59 >= v35 )
            goto LABEL_121;
        }
        ++v59;
        v58 += *((_QWORD *)v62 + 1);
        v61 = v59;
      }
      while ( v59 < v35 );
    }
    else
    {
      LODWORD(v60) = 0;
    }
LABEL_121:
    v185 = v27 - v58;
    if ( (unsigned __int8)sub_3FC40((__int64)v36, v35, v60, (_QWORD *)v183, v27 - v58) )
      goto LABEL_185;
    v63 = v210;
    v64 = dest;
    v65 = v210 - 1;
    if ( (__int64)v210 - 1 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v67 = v65 - 1;
          v68 = 24 * (v65 - 1);
          v69 = &v64[v68];
          v70 = v68 + 24;
          v71 = v69[1];
          v72 = &v64[v70];
          v73 = *(_QWORD *)&v64[v70 + 8];
          if ( v71 > 0 && v73 < 0 )
            break;
          --v65;
          if ( v67 <= 0 )
            goto LABEL_132;
        }
        if ( v73 + v71 )
        {
          v72[1] = v73 + v71;
          v66 = v210;
          if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v210 - v70) >> 3) - 1) >= 0 )
          {
            memmove(v69, v72, 24 * v210 - v70);
            v66 = v210;
            v64 = dest;
          }
          --v65;
          *(_QWORD *)&v210 = v66 - 1;
        }
        else
        {
          v96 = v210;
          v97 = v72 + 3;
          if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((&v64[24 * (_QWORD)v210] - (_BYTE *)v97) >> 3) - 1) >= 0 )
          {
            memmove(v69, v97, &v64[24 * v210] - (_BYTE *)v97);
            v96 = v210;
            v64 = dest;
          }
          v65 -= 2;
          *(_QWORD *)&v210 = v96 - 2;
        }
      }
      while ( v65 > 0 );
LABEL_132:
      v63 = v210;
      v74 = v210 - 1;
      if ( (__int64)v210 - 1 > 1 && (int)v60 > 1 )
      {
        do
        {
          v81 = 24 * (v74 - 2);
          v82 = *(_QWORD *)&v64[v81 + 8];
          if ( v82 > 0 )
          {
            v75 = sub_3FBA0((__int64)v64, v63, (_QWORD *)v183, (int)v74 - 1);
            v64 = dest;
            if ( !v75 )
            {
LABEL_247:
              v63 = v210;
              --v74;
              goto LABEL_142;
            }
            if ( *(_DWORD *)((char *)dest + v81 + 44) )
            {
              LODWORD(v60) = v60 - 1;
              *(_QWORD *)(*(_QWORD *)v183 + 32LL * *(int *)((char *)dest + v81 + 40) + 8) = 0;
            }
            v76 = v81 + 48;
            v77 = &v64[v81 + 48];
            v78 = v77[1];
            if ( v78 + v82 )
            {
              v79 = &v64[v81];
              v77[1] = v82 + v78;
              v80 = v210;
              if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v210 - v76) >> 3) - 1) >= 0 )
              {
                memmove(v79, v77, 24 * v210 - v76);
                v80 = v210;
                v64 = dest;
              }
              v63 = v80 - 2;
              v74 -= 2;
              *(_QWORD *)&v210 = v63;
            }
            else
            {
              v134 = v210;
              v135 = v77 + 3;
              v136 = &v64[v81];
              if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((&v64[24 * (_QWORD)v210] - (_BYTE *)v135) >> 3) - 1) >= 0 )
              {
                memmove(v136, v135, &v64[24 * v210] - (_BYTE *)v135);
                v134 = v210;
                v64 = dest;
              }
              v63 = v134 - 3;
              v74 -= 3;
              *(_QWORD *)&v210 = v63;
            }
LABEL_142:
            if ( v74 <= 1 )
              break;
          }
          else if ( --v74 <= 1 )
          {
            break;
          }
        }
        while ( (_DWORD)v60 != 1 );
      }
    }
    if ( (unsigned __int8)sub_3FC40((__int64)v64, v63, v60, (_QWORD *)v183, v185) )
      goto LABEL_185;
    v83 = (int *)dest;
    if ( *((_DWORD *)dest + 5) )
    {
      v161 = sub_3FBA0((__int64)dest, v210, (_QWORD *)v183, 0);
      v83 = (int *)dest;
      if ( v161 )
      {
        v162 = v210;
        LODWORD(v60) = v60 - 1;
        if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v210) >> 3) - 2) >= 0 )
        {
          memmove(dest, (char *)dest + 24, 24 * v210 - 24);
          v83 = (int *)dest;
          v162 = v210;
        }
        *(_QWORD *)&v210 = v162 - 1;
        if ( !(unsigned __int8)sub_3FC40((__int64)v83, v162 - 1, v60, (_QWORD *)v183, v185) )
        {
          v83 = (int *)dest;
          goto LABEL_148;
        }
LABEL_185:
        if ( dest )
          goto LABEL_186;
        goto LABEL_187;
      }
    }
LABEL_148:
    if ( *(_WORD *)(*(_QWORD *)v183 + 32LL * v83[4] + 24) == 92 )
    {
      v253 = -1;
      v170 = v256;
      v254 = 0;
      v255 = 0;
      v252 = -1;
      do
      {
        *(_WORD *)v170 = 0;
        v170 += 5;
        *((_WORD *)v170 - 19) = 0;
        *((_WORD *)v170 - 18) = 0;
        *((_DWORD *)v170 - 2) = 0;
        *((_WORD *)v170 - 17) = 0;
        *((_OWORD *)v170 - 2) = 0;
        *(v170 - 2) = 0;
      }
      while ( v170 != v258 );
      if ( !(unsigned int)decode_insn() )
        goto LABEL_185;
      if ( (v257[0] & 0xFFFF00000000FF00LL) == 0x5000000000400LL )
      {
        func = get_func();
        v177 = sub_6DC80(func, v257, 0.0);
        v178 = dest;
        v179 = v177;
        v180 = v177 + v187;
        v181 = (char *)dest + 24;
        *(_QWORD *)(*(_QWORD *)v183 + 32LL * *((int *)dest + 4) + 8) = -(v177 + v187);
        v182 = v210;
        if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v210) >> 3) - 2) >= 0 )
        {
          memmove(v178, v181, 24 * v210 - 24);
          v178 = dest;
          v182 = v210;
        }
        v185 += v180;
        *(_QWORD *)&v210 = v182 - 1;
        if ( (unsigned __int8)sub_3FC40((__int64)v178, v182 - 1, (int)v60 - 1, (_QWORD *)v183, v185) )
          goto LABEL_185;
        v187 = -v179;
      }
      v83 = (int *)dest;
    }
    v84 = v210 - 1;
    if ( (__int64)v210 - 1 < 0 )
      goto LABEL_163;
    v85 = 0;
    v86 = -1;
    while ( 2 )
    {
      v91 = &v83[6 * v84];
      v92 = v91[4];
      v93 = *(_QWORD *)v183;
      if ( *(_BYTE *)(*(_QWORD *)v183 + 32LL * v92 + 27) )
      {
        if ( v86 == -1 )
          goto LABEL_155;
        v87 = v27 - v85;
        v88 = 32LL * v86;
        v89 = v93 + v88;
        if ( *(_BYTE *)(v93 + v88 + 27) != 2 )
          goto LABEL_153;
        if ( v195 )
        {
          v163 = *(_QWORD *)(v93 + 32LL * (v86 - 1));
          v87 = v85 - v195;
          v252 = -1;
          v253 = -1;
          v198 = v163;
          v164 = v256;
          v254 = 0;
          v255 = 0;
          do
          {
            *(_WORD *)v164 = 0;
            v164 += 5;
            *((_WORD *)v164 - 19) = 0;
            *((_WORD *)v164 - 18) = 0;
            *((_DWORD *)v164 - 2) = 0;
            *((_WORD *)v164 - 17) = 0;
            *((_OWORD *)v164 - 2) = 0;
            *(v164 - 2) = 0;
          }
          while ( v164 != v258 );
          v201 = 0;
          while ( 1 )
          {
            insn = decode_prev_insn();
            if ( insn == -1 || v198 >= insn || !(unsigned int)decode_insn() )
              break;
            v166 = v256;
            for ( i = 0; i != 3; ++i )
            {
              if ( !*((_BYTE *)v166 + 1) )
                break;
              if ( (v256[5 * i] & 0xFFFF00000000FF00LL) == 0x5000000000400LL )
              {
                v203 = i;
                v168 = get_func();
                v169 = -sub_6DC80(v168, v166, 0.0);
                if ( v201 >= v169 )
                  v169 = v201;
                i = v203;
                v201 = v169;
              }
              v166 += 5;
            }
          }
          v89 = v88 + *(_QWORD *)v183;
          if ( (__int64)(v27 - v87) < v201 )
            v87 = v27 - v201;
        }
        else
        {
          v87 = *(_QWORD *)(v89 + 8);
          if ( (__int64)(v27 - v187) < 0 && v87 < (__int64)(v27 - v187) )
          {
            v87 = v27 - v187;
LABEL_257:
            if ( v87 >= v185 )
            {
              v27 -= v87;
              *(_QWORD *)(v89 + 8) = v87;
              v86 = v92;
              v185 -= v87;
              v85 = v27;
LABEL_156:
              v90 = v84-- == 0;
              if ( v90 )
                goto LABEL_160;
LABEL_157:
              v83 = (int *)dest;
              continue;
            }
LABEL_154:
            *(_QWORD *)(v89 + 8) = 0;
LABEL_155:
            v85 = v27;
            v86 = v92;
            goto LABEL_156;
          }
        }
LABEL_153:
        if ( v87 <= 0 )
          goto LABEL_257;
        goto LABEL_154;
      }
      break;
    }
    v27 -= *((_QWORD *)v91 + 1);
    v90 = v84-- == 0;
    if ( !v90 )
      goto LABEL_157;
LABEL_160:
    if ( v86 != -1 )
      *(_QWORD *)(*(_QWORD *)v183 + 32LL * v86 + 8) = v27 - v187;
    v83 = (int *)dest;
LABEL_163:
    if ( v83 )
    {
LABEL_186:
      *(_QWORD *)&v210 = 0;
      qfree();
    }
LABEL_187:
    v27 = a1[29];
    v185 = *(_QWORD *)(v183 + 24);
    get_spd();
    v110 = *(_QWORD **)(v27 + 72);
    v111 = 2LL * *(unsigned int *)(v27 + 68);
    v112 = &v110[v111];
    for ( j = (v111 * 8) >> 4; j > 0; j = j - 1 - v114 )
    {
      while ( 1 )
      {
        v114 = j >> 1;
        v115 = &v110[2 * (j >> 1)];
        if ( *v115 < (unsigned __int64)(v185 + 1) )
          break;
        j >>= 1;
        if ( v114 <= 0 )
          goto LABEL_191;
      }
      v110 = v115 + 2;
    }
LABEL_191:
    if ( v112 == v110 )
    {
      memset(&v211, 0, 24);
LABEL_328:
      v124 = 0;
      v117 = 0;
      if ( *(_QWORD *)(v183 + 8) )
        goto LABEL_205;
      goto LABEL_329;
    }
    v116 = v110;
    do
    {
      if ( *(_QWORD *)(v183 + 32) < *v116 )
        break;
      v116 += 2;
    }
    while ( v112 != v116 );
    memset(&v211, 0, 24);
    if ( v110 == v116 )
      goto LABEL_328;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    while ( 1 )
    {
      v122 = v119 + 1;
      if ( v118 < v119 + 1 )
      {
        v123 = qvector_reserve();
        v119 = v211.m256i_i64[1];
        v211.m256i_i64[0] = v123;
        v117 = (unsigned __int64 *)v123;
        v122 = v211.m256i_i64[1] + 1;
      }
      v211.m256i_i64[1] = v122;
      v120 = &v117[2 * v119];
      *v120 = *v110;
      v121 = v110[1];
      v120[1] = v121;
      if ( *(_QWORD **)(v27 + 72) != v110 )
        v120[1] = v121 - *(v110 - 1);
      v110 += 2;
      v119 = v211.m256i_i64[1];
      v117 = (unsigned __int64 *)v211.m256i_i64[0];
      if ( v110 == v116 )
        break;
      v118 = v211.m256i_u64[2];
    }
    v124 = v211.m256i_i64[0] + 16 * v211.m256i_i64[1];
    if ( *(_QWORD *)(v183 + 8) )
    {
LABEL_205:
      LOBYTE(v185) = v27 != 0;
      v125 = 0;
      v74 = 0;
      v126 = 0;
      while ( 1 )
      {
        v127 = *(_QWORD *)v183 + 32 * v126;
        v60 = *(_QWORD *)v127 + *(unsigned __int8 *)(v127 + 26);
        if ( v60 == -1 || !v27 )
        {
          v60 = -1;
          if ( v117 != (unsigned __int64 *)v124 )
            goto LABEL_212;
          goto LABEL_220;
        }
        LOBYTE(v187) = v125;
        func_chunknum = get_func_chunknum();
        v125 = v187;
        if ( func_chunknum >= 0 )
          break;
        next_func_addr = get_next_func_addr();
        v125 = v187;
        v60 = next_func_addr;
        if ( v117 == (unsigned __int64 *)v124 )
        {
LABEL_241:
          if ( v60 == -1 )
            goto LABEL_220;
          goto LABEL_216;
        }
LABEL_212:
        while ( *v117 < v60 )
        {
          del_stkpnt();
          v117 += 2;
          v125 = 1;
          if ( v117 == (unsigned __int64 *)v124 )
            goto LABEL_241;
        }
        if ( v60 == -1 )
          goto LABEL_220;
        if ( v117 == (unsigned __int64 *)v124 || *v117 != v60 )
          goto LABEL_216;
        v129 = v117[1];
        v117 += 2;
LABEL_217:
        if ( -*(_QWORD *)(v127 + 8) != v129 )
        {
          if ( (unsigned __int8)add_auto_stkpnt() && *(_QWORD *)(v127 + 8) + get_sp_delta() && v60 != *(_QWORD *)v27 )
          {
            if ( under_debugger )
              goto LABEL_340;
            v64 = (_BYTE *)(&stru_2778 + 20);
            interr();
            goto LABEL_247;
          }
          v125 = 1;
        }
LABEL_220:
        v74 = (unsigned int)(v74 + 1);
        v126 = (int)v74;
        if ( (unsigned __int64)(int)v74 >= *(_QWORD *)(v183 + 8) )
          goto LABEL_221;
      }
      if ( v117 != (unsigned __int64 *)v124 )
        goto LABEL_212;
LABEL_216:
      v129 = 0;
      goto LABEL_217;
    }
LABEL_329:
    v125 = 0;
LABEL_221:
    v186 = v125;
    v130 = *(_QWORD *)(v183 + 32);
    v131 = get_func_chunknum();
    v132 = v186;
    if ( v131 >= 0 )
    {
      flags = get_flags_ex();
      v132 = v186;
      v130 -= ((flags & 0x10000) == 0) - 1LL;
    }
    if ( v117 != (unsigned __int64 *)v124 )
    {
      while ( *v117 < v130 )
      {
        del_stkpnt();
        v117 += 2;
        v132 = 1;
        if ( v117 == (unsigned __int64 *)v124 )
        {
          v189 = 1;
          goto LABEL_228;
        }
      }
    }
    v189 |= v132;
LABEL_228:
    if ( v211.m256i_i64[0] )
    {
      v211.m256i_i64[1] = 0;
      qfree();
    }
LABEL_230:
    v190 += 16;
    if ( v190 == a1[26] + 16 * a1[27] )
      goto LABEL_231;
  }
  *(_QWORD *)(a1[29] + 16) &= ~0x400uLL;
  update_func();
  for ( k = *(_QWORD *)(v183 + 24); ; k = next_that() )
  {
    if ( k >= *(_QWORD *)(v183 + 32) )
    {
      *(_QWORD *)(a1[29] + 16) |= 0x400uLL;
      update_func();
      goto LABEL_230;
    }
    if ( !(unsigned int)decode_insn() )
      break;
    v151 = v247 + WORD1(v248);
    if ( (get_flags_ex() & 0x10000) != 0 )
    {
      v152 = a1[29];
      if ( v152 && v151 != -1 )
      {
        if ( (int)get_func_chunknum() < 0 && get_next_func_addr() == -1 )
        {
          v152 = a1[29];
        }
        else
        {
          if ( (get_aflags() & 0x800002) != 0 )
            continue;
          v189 |= del_stkpnt();
          v152 = a1[29];
        }
      }
      v153 = v247 + 1;
      if ( v247 + 1 < v151 )
      {
        v154 = 0;
        do
        {
          ++v153;
          v154 |= del_stkpnt();
          if ( v153 == -1 || !v152 )
            break;
          if ( (int)get_func_chunknum() < 0 )
            v153 = get_next_func_addr();
        }
        while ( v153 < v151 );
        v189 |= v154;
      }
      sub_7B2C0(*a1, &v246, 0.0);
    }
  }
  if ( (debug & 0x200000) != 0 )
    sub_224B0((__int64)"%a: failed to decode instruction?!\n", 0.0);
  v17 = 0;
LABEL_236:
  lock_func_range();
LABEL_31:
  if ( v207 )
  {
    *(_QWORD *)&v208 = 0;
    qfree();
  }
LABEL_33:
  if ( v240 )
  {
    *(_QWORD *)&v241 = 0;
    qfree();
  }
  if ( v238 )
  {
    *(_QWORD *)&v239 = 0;
    qfree();
  }
  if ( v236 )
  {
    *(_QWORD *)&v237 = 0;
    qfree();
  }
  if ( v234 )
  {
    *(_QWORD *)&v235 = 0;
    qfree();
  }
  if ( v232 )
  {
    *(_QWORD *)&v233 = 0;
    qfree();
  }
  if ( v230 )
  {
    *(_QWORD *)&v231 = 0;
    qfree();
  }
  if ( v228 )
  {
    *(_QWORD *)&v229 = 0;
    qfree();
  }
  if ( v226 )
  {
    *(_QWORD *)&v227 = 0;
    qfree();
  }
  if ( v224 )
  {
    *(_QWORD *)&v225 = 0;
    qfree();
  }
  if ( v205 )
  {
    *(_QWORD *)&v206 = 0;
    qfree();
  }
  return v17;
}
