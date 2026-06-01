__int64 __fastcall sub_6B1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  _DWORD *v6; // rax
  bool v7; // cf
  int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  int v11; // edx
  __m128i si128; // xmm0
  __int64 v13; // rax
  int *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  _QWORD *v29; // r15
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r11
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  __int64 *v40; // rax
  _QWORD *v41; // r15
  void *v42; // rdi
  _QWORD *v43; // r15
  void *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rsi
  _QWORD *v50; // rax
  __int64 v51; // r12
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  __int64 v53; // r13
  unsigned int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r11
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdi
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rsi
  void *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  const __m128i *v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __m128i v74; // xmm0
  __int64 v75; // rsi
  const __m128i *v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // r14
  unsigned __int64 v81; // r15
  __int64 v82; // rbx
  __int64 i; // r12
  unsigned __int64 v84; // r13
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // r15
  __int64 v89; // r13
  __int64 v90; // r12
  _QWORD *v91; // rbx
  __int64 v92; // r14
  void *v93; // rdi
  void *v94; // rdi
  __int64 v95; // rsi
  _QWORD *v96; // rbx
  void *v97; // rdi
  _QWORD *v99; // rdi
  _QWORD *v100; // rax
  __int64 v101; // rcx
  const __m128i *v102; // rdi
  __int64 v103; // rax
  unsigned __int64 v104; // rsi
  __m128i v105; // xmm0
  __int64 v106; // rax
  __int64 v107; // rcx
  const __m128i *v108; // rdi
  __int64 v109; // rax
  unsigned __int64 v110; // rdx
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // r13
  unsigned __int64 v114; // rsi
  _QWORD *v115; // rdi
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rdi
  _QWORD *v121; // rax
  _QWORD *v122; // r13
  void *v123; // rdi
  __int64 v124; // rcx
  const __m128i *v125; // rdi
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  __m128i v128; // xmm0
  const char *v129; // rsi
  int v130; // ecx
  int v131; // edx
  __int64 v132; // rax
  __m128i v133; // xmm0
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rbx
  const __m128i *v137; // rdi
  __int64 v138; // rdx
  __int64 v139; // rcx
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  const __m128i *v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rsi
  __m128i v147; // xmm0
  __int64 v148; // rcx
  const __m128i *v149; // rdi
  __int64 v150; // rax
  unsigned __int64 v151; // rdx
  __int64 v152; // r15
  __m128i v153; // xmm0
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rbx
  const __m128i *v157; // rdi
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rsi
  const __m128i *v163; // rdi
  __int64 v164; // rdx
  __int64 v165; // rcx
  __m128i v166; // xmm0
  __m128i v167; // xmm0
  __int64 v168; // [rsp+8h] [rbp-258h]
  __int64 v169; // [rsp+8h] [rbp-258h]
  int v170; // [rsp+10h] [rbp-250h]
  __int64 v172; // [rsp+30h] [rbp-230h]
  __int64 v173; // [rsp+38h] [rbp-228h]
  __int64 v174; // [rsp+38h] [rbp-228h]
  __int64 *v175; // [rsp+40h] [rbp-220h]
  __int64 v176; // [rsp+48h] [rbp-218h]
  int *v177; // [rsp+50h] [rbp-210h]
  int v178; // [rsp+60h] [rbp-200h]
  int v179; // [rsp+64h] [rbp-1FCh]
  __int64 *v180; // [rsp+68h] [rbp-1F8h]
  __int64 v181; // [rsp+78h] [rbp-1E8h]
  __int64 v182; // [rsp+80h] [rbp-1E0h]
  __int64 v183; // [rsp+80h] [rbp-1E0h]
  __int64 v184; // [rsp+88h] [rbp-1D8h]
  __int64 v185; // [rsp+90h] [rbp-1D0h]
  __int64 v186; // [rsp+90h] [rbp-1D0h]
  __int64 v187; // [rsp+90h] [rbp-1D0h]
  __int64 v188; // [rsp+98h] [rbp-1C8h]
  __int64 v189; // [rsp+98h] [rbp-1C8h]
  __int64 v190; // [rsp+98h] [rbp-1C8h]
  __int64 v191; // [rsp+98h] [rbp-1C8h]
  __int64 v193; // [rsp+A8h] [rbp-1B8h]
  __int64 v194; // [rsp+A8h] [rbp-1B8h]
  __int64 v195; // [rsp+A8h] [rbp-1B8h]
  __int64 v196; // [rsp+A8h] [rbp-1B8h]
  __int64 v197; // [rsp+A8h] [rbp-1B8h]
  __int64 v199; // [rsp+B8h] [rbp-1A8h]
  __int64 v200; // [rsp+B8h] [rbp-1A8h]
  _QWORD *v201; // [rsp+B8h] [rbp-1A8h]
  __int64 v202; // [rsp+C0h] [rbp-1A0h] BYREF
  __int128 v203; // [rsp+C8h] [rbp-198h]
  int v204; // [rsp+E0h] [rbp-180h] BYREF
  __int64 v205; // [rsp+E8h] [rbp-178h]
  double v206[2]; // [rsp+F0h] [rbp-170h] BYREF
  __int64 v207; // [rsp+100h] [rbp-160h] BYREF
  __int64 v208; // [rsp+108h] [rbp-158h]
  __int64 v209; // [rsp+110h] [rbp-150h] BYREF
  __int64 v210; // [rsp+118h] [rbp-148h]
  __m128i v211; // [rsp+120h] [rbp-140h] BYREF
  void *s; // [rsp+130h] [rbp-130h] BYREF
  __int64 v213; // [rsp+138h] [rbp-128h]
  void *v214; // [rsp+140h] [rbp-120h]
  __int64 v215; // [rsp+148h] [rbp-118h]
  int v216; // [rsp+150h] [rbp-110h]
  __int64 v217; // [rsp+158h] [rbp-108h]
  _QWORD v218[2]; // [rsp+160h] [rbp-100h] BYREF
  __m128i v219; // [rsp+170h] [rbp-F0h] BYREF
  void *v220[2]; // [rsp+180h] [rbp-E0h]
  __m128i v221; // [rsp+190h] [rbp-D0h] BYREF
  _QWORD v222[2]; // [rsp+1A0h] [rbp-C0h] BYREF
  __m128i v223[7]; // [rsp+1B0h] [rbp-B0h] BYREF
  unsigned __int64 v224; // [rsp+228h] [rbp-38h]

  v224 = __readfsqword(0x28u);
  v5 = 88 * a4;
  v176 = 88 * a4;
  v6 = (_DWORD *)(88 * a4 + *(_QWORD *)(a2 + 480));
  v7 = a4 == 0;
  v8 = *(_DWORD *)(a2 + 504);
  v9 = *(__int64 **)v6;
  v178 = -v7;
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 168LL);
  v6[20] = v8;
  v180 = v9;
  v170 = v10;
  *(_DWORD *)(a2 + 504) = v10 + v8;
  v179 = v8;
  s = v218;
  v213 = 1;
  v214 = nullptr;
  v215 = 0;
  v216 = 1065353216;
  v217 = 0;
  v218[0] = 0;
  v181 = (__int64)(v9 + 37);
  v11 = sub_61040((_QWORD *)a2, *(_QWORD *)(a3 + 8), *v9, v9 + 37, &s);
  si128.m128i_i64[0] = 0;
  v13 = *(_QWORD *)(a2 + 480);
  v202 = 0;
  v193 = a2 + 360;
  *(_DWORD *)(v5 + v13 + 24) += v11;
  v14 = (int *)v9[23];
  v175 = v9 + 92;
  v15 = v9[24];
  v203 = 0;
  v177 = &v14[10 * v15];
  while ( v177 != v14 )
  {
    while ( 1 )
    {
      if ( sub_26340(v181, *v14) )
      {
        v16 = *((_QWORD *)v14 + 3);
        v17 = *v14;
        v18 = v180[20] + 32 * v17;
        sub_51660((__int64)&v207, *v14, (__int64)v14);
        v19 = *(_DWORD *)(v18 + 8);
        v223[0].m128i_i32[0] = v17;
        HIDWORD(v208) = v19;
        v20 = v210;
        v223[1].m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v208), _mm_cvtsi32_si128(v19)).m128i_u64[0];
        si128 = _mm_load_si128(&v211);
        v21 = *(_QWORD *)(a2 + 480) + v176;
        v223[0].m128i_i64[1] = v207;
        *(__m128i *)((char *)&v223[2] + 8) = si128;
        si128.m128i_i64[0] = 0;
        BYTE1(v209) = v19 == v178;
        v22 = v21 + 40;
        v223[1].m128i_i8[8] = v209;
        v223[1].m128i_i8[9] = v19 == v178;
        v223[2].m128i_i64[0] = v210;
        v210 = 0;
        v211 = 0;
        v23 = *(_QWORD *)(v21 + 48);
        if ( !v23 )
          goto LABEL_12;
        do
        {
          while ( 1 )
          {
            v24 = *(_QWORD *)(v23 + 16);
            v25 = *(_QWORD *)(v23 + 24);
            if ( (int)v17 > *(_DWORD *)(v23 + 32) )
              break;
            v22 = v23;
            v23 = *(_QWORD *)(v23 + 16);
            if ( !v24 )
              goto LABEL_10;
          }
          v23 = *(_QWORD *)(v23 + 24);
        }
        while ( v25 );
LABEL_10:
        if ( v21 + 40 == v22 || (int)v17 < *(_DWORD *)(v22 + 32) )
        {
LABEL_12:
          v26 = sub_11100((_QWORD *)(v21 + 32), v22, (__int64)v223);
          v20 = v223[2].m128i_i64[0];
          v22 = v26;
        }
        if ( v20 )
          qfree(v20);
        if ( (int)v16 > 0 )
        {
          v199 = 0;
          v185 = (unsigned int)(v16 - 1);
          while ( 1 )
          {
            v27 = *((_QWORD *)v14 + 2) + 72 * v199;
            v28 = *(_QWORD *)(v27 + 8);
            v29 = *(_QWORD **)(a2 + 368);
            if ( v29 )
            {
              v30 = (_QWORD *)v193;
              do
              {
                while ( 1 )
                {
                  v31 = v29[2];
                  v32 = v29[3];
                  if ( v29[4] < v28 )
                    break;
                  v30 = v29;
                  v29 = (_QWORD *)v29[2];
                  if ( !v31 )
                    goto LABEL_22;
                }
                v29 = (_QWORD *)v29[3];
              }
              while ( v32 );
LABEL_22:
              if ( (_QWORD *)v193 != v30 && v28 >= v30[4] )
                v29 = v30 + 5;
            }
            sub_60AE0((__int64)&v204, a2, *(_QWORD *)(a3 + 8), v28, v17);
            if ( v204 )
            {
              v223[0] = (__m128i)0xFFFFFFFFFFFFFFFFLL;
              v45 = v22 + 64;
              v46 = *(_QWORD *)(v22 + 72);
              v47 = *(_QWORD *)(v22 + 64);
              v48 = *(_QWORD *)(v22 + 80);
              v49 = v46 + 1;
              if ( (unsigned __int64)v223 < v47 || (unsigned __int64)v223 >= v47 + 16 * v48 )
              {
                if ( v48 < v49 )
                {
                  v47 = qvector_reserve(v45, 0, v46 + 1, 16);
                  v69 = *(_QWORD *)(v22 + 72);
                  v70 = *(_QWORD *)(v22 + 80);
                  *(_QWORD *)(v22 + 80) = v48;
                  v71 = *(const __m128i **)(v22 + 64);
                  v72 = v69 - 1;
                  if ( v72 >= 0 )
                  {
                    v73 = v47;
                    do
                    {
                      v74 = _mm_loadu_si128(v71);
                      v73 += 16LL;
                      ++v71;
                      *(__m128i *)(v73 - 16) = v74;
                      v7 = v72-- == 0;
                    }
                    while ( !v7 );
                    v71 = *(const __m128i **)(v22 + 64);
                  }
                  v189 = v70;
                  qfree(v71);
                  v46 = *(_QWORD *)(v22 + 72);
                  *(_QWORD *)(v22 + 64) = v47;
                  *(_QWORD *)(v22 + 80) = v189;
                }
                si128 = _mm_load_si128(v223);
                *(__m128i *)(v47 + 16 * v46) = si128;
              }
              else
              {
                if ( v48 < v49 )
                {
                  v47 = qvector_reserve(v45, 0, v46 + 1, 16);
                  v106 = *(_QWORD *)(v22 + 72);
                  v107 = *(_QWORD *)(v22 + 80);
                  *(_QWORD *)(v22 + 80) = v48;
                  v108 = *(const __m128i **)(v22 + 64);
                  v109 = v106 - 1;
                  if ( v109 >= 0 )
                  {
                    v110 = v47;
                    do
                    {
                      si128 = _mm_loadu_si128(v108);
                      v110 += 16LL;
                      ++v108;
                      *(__m128i *)(v110 - 16) = si128;
                      v7 = v109-- == 0;
                    }
                    while ( !v7 );
                    v108 = *(const __m128i **)(v22 + 64);
                  }
                  v190 = v107;
                  qfree(v108);
                  v46 = *(_QWORD *)(v22 + 72);
                  *(_QWORD *)(v22 + 64) = v47;
                  *(_QWORD *)(v22 + 80) = v190;
                }
                v50 = (_QWORD *)(v47 + 16 * v46);
                *v50 = -1;
                v50[1] = 0;
              }
              ++*(_QWORD *)(v22 + 72);
            }
            else
            {
              v182 = v27 + 32;
              v188 = v205;
              sub_61780(
                &v219,
                (_QWORD *)a2,
                *(_QWORD *)(a3 + 8),
                v17 + v179,
                *(void **)(v27 + 16),
                (void ***)(v27 + 32),
                &s);
              v33 = v22 + 64;
              v34 = *(_QWORD *)(v188 + 32);
              v35 = *(_QWORD *)(v188 + 8);
              v223[0].m128i_i64[0] = v34;
              v223[0].m128i_i64[1] = v35;
              v36 = *(_QWORD *)(v22 + 72);
              v37 = *(_QWORD *)(v22 + 64);
              v38 = *(_QWORD *)(v22 + 80);
              v39 = v36 + 1;
              if ( (unsigned __int64)v223 < v37 || (unsigned __int64)v223 >= v37 + 16 * v38 )
              {
                if ( v38 < v39 )
                {
                  v173 = *(_QWORD *)(v22 + 80);
                  v37 = qvector_reserve(v33, 0, v39, 16);
                  v75 = *(_QWORD *)(v22 + 80);
                  v76 = *(const __m128i **)(v22 + 64);
                  v77 = *(_QWORD *)(v22 + 72) - 1LL;
                  *(_QWORD *)(v22 + 80) = v173;
                  if ( v77 >= 0 )
                  {
                    v78 = v37;
                    do
                    {
                      v79 = _mm_loadu_si128(v76);
                      v78 += 16LL;
                      ++v76;
                      *(__m128i *)(v78 - 16) = v79;
                      v7 = v77-- == 0;
                    }
                    while ( !v7 );
                    v76 = *(const __m128i **)(v22 + 64);
                  }
                  qfree(v76);
                  v36 = *(_QWORD *)(v22 + 72);
                  *(_QWORD *)(v22 + 64) = v37;
                  *(_QWORD *)(v22 + 80) = v75;
                }
                *(__m128i *)(v37 + 16 * v36) = _mm_load_si128(v223);
              }
              else
              {
                if ( v38 < v39 )
                {
                  v168 = *(_QWORD *)(v22 + 80);
                  v172 = v35;
                  v174 = v34;
                  v37 = qvector_reserve(v33, 0, v39, 16);
                  v101 = *(_QWORD *)(v22 + 80);
                  v102 = *(const __m128i **)(v22 + 64);
                  v103 = *(_QWORD *)(v22 + 72) - 1LL;
                  *(_QWORD *)(v22 + 80) = v168;
                  if ( v103 >= 0 )
                  {
                    v104 = v37;
                    do
                    {
                      v105 = _mm_loadu_si128(v102);
                      v104 += 16LL;
                      ++v102;
                      *(__m128i *)(v104 - 16) = v105;
                      v7 = v103-- == 0;
                    }
                    while ( !v7 );
                    v102 = *(const __m128i **)(v22 + 64);
                  }
                  v169 = v101;
                  qfree(v102);
                  v36 = *(_QWORD *)(v22 + 72);
                  *(_QWORD *)(v22 + 64) = v37;
                  v35 = v172;
                  *(_QWORD *)(v22 + 80) = v169;
                  v34 = v174;
                }
                v40 = (__int64 *)(v37 + 16 * v36);
                *v40 = v34;
                v40[1] = v35;
              }
              ++*(_QWORD *)(v22 + 72);
              *(__int64 *)((char *)&v223[1].m128i_i64[1] + 1) = 0;
              memset(&v223[2], 0, 0x50u);
              v223[1].m128i_i8[8] = 1;
              v223[1].m128i_i64[0] = (__int64)v29;
              v223[6].m128i_i64[0] = 0;
              v223[3] = v219;
              v223[0] = (__m128i)_mm_loadh_ps(v206);
              v223[4] = *(__m128i *)v220;
              v223[2].m128i_i64[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v199)).m128i_u64[0];
              si128 = _mm_load_si128(&v221);
              v223[5] = si128;
              if ( (_QWORD *)v219.m128i_i64[0] == v222 )
              {
                v223[3].m128i_i64[0] = (__int64)v223[6].m128i_i64;
                v223[6].m128i_i64[0] = v222[0];
              }
              if ( v220[0] )
                *(_QWORD *)(v223[3].m128i_i64[0] + 8 * (*((_QWORD *)v220[0] + 1) % v219.m128i_i64[1])) = &v223[4];
              v221.m128i_i64[1] = 0;
              v219.m128i_i64[1] = 1;
              v222[0] = 0;
              v219.m128i_i64[0] = (__int64)v222;
              *(_OWORD *)v220 = 0u;
              v223[6].m128i_i64[1] = v182;
              sub_69020(&v202, v223);
              v41 = (_QWORD *)v223[4].m128i_i64[0];
              if ( v223[4].m128i_i64[0] )
              {
                do
                {
                  v42 = v41;
                  v41 = (_QWORD *)*v41;
                  operator delete(v42, 0x18u);
                }
                while ( v41 );
              }
              memset((void *)v223[3].m128i_i64[0], 0, 8 * v223[3].m128i_i64[1]);
              v223[4] = 0u;
              if ( (__m128i *)v223[3].m128i_i64[0] != &v223[6] )
                operator delete((void *)v223[3].m128i_i64[0], 8 * v223[3].m128i_i64[1]);
              v43 = v220[0];
              if ( v220[0] )
              {
                do
                {
                  v44 = v43;
                  v43 = (_QWORD *)*v43;
                  operator delete(v44, 0x18u);
                }
                while ( v43 );
              }
              memset((void *)v219.m128i_i64[0], 0, 8 * v219.m128i_i64[1]);
              *(_OWORD *)v220 = 0u;
              if ( (_QWORD *)v219.m128i_i64[0] != v222 )
                operator delete((void *)v219.m128i_i64[0], 8 * v219.m128i_i64[1]);
            }
            if ( v185 == v199 )
              break;
            ++v199;
          }
        }
        if ( v210 )
          break;
      }
      v14 += 10;
      if ( v177 == v14 )
        goto LABEL_55;
    }
    v211.m128i_i64[0] = 0;
    v14 += 10;
    qfree(v210);
  }
LABEL_55:
  v51 = 0;
  if ( v170 > 0 )
  {
    while ( 1 )
    {
      v200 = v180[20];
      if ( !sub_26340(v181, v51) )
        goto LABEL_77;
      hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(
                                                                             v181,
                                                                             (const char *)(unsigned int)v51);
      if ( hexdsp(213, v175, (unsigned int)v51) )
        goto LABEL_77;
      v53 = 32 * v51 + v200;
      sub_51630((__int64)&v219, v51, v53);
      v54 = *(_DWORD *)(v53 + 8);
      v223[0].m128i_i32[0] = v51;
      v219.m128i_i32[3] = v54;
      v55 = (__int64)v220[1];
      v223[1].m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v219.m128i_u32[2]), _mm_cvtsi32_si128(v54)).m128i_u64[0];
      si128 = _mm_load_si128(&v221);
      v56 = *(_QWORD *)(a2 + 480) + v176;
      BYTE1(v220[0]) = v54 == v178;
      *(__m128i *)((char *)&v223[2] + 8) = si128;
      si128.m128i_i64[0] = 0;
      v223[0].m128i_i64[1] = v219.m128i_i64[0];
      v223[1].m128i_i8[8] = (__int8)v220[0];
      v223[1].m128i_i8[9] = v54 == v178;
      v223[2].m128i_i64[0] = (__int64)v220[1];
      v220[1] = nullptr;
      v221 = 0;
      v57 = *(_QWORD *)(v56 + 48);
      if ( !v57 )
        break;
      v58 = v56 + 40;
      do
      {
        while ( 1 )
        {
          v59 = *(_QWORD *)(v57 + 16);
          v60 = *(_QWORD *)(v57 + 24);
          if ( *(_DWORD *)(v57 + 32) < (int)v51 )
            break;
          v58 = v57;
          v57 = *(_QWORD *)(v57 + 16);
          if ( !v59 )
            goto LABEL_63;
        }
        v57 = *(_QWORD *)(v57 + 24);
      }
      while ( v60 );
LABEL_63:
      v201 = (_QWORD *)v58;
      if ( v56 + 40 == v58 || *(_DWORD *)(v58 + 32) > (int)v51 )
      {
        v61 = sub_11100((_QWORD *)(v56 + 32), v58, (__int64)v223);
LABEL_66:
        v201 = (_QWORD *)v61;
        v55 = v223[2].m128i_i64[0];
      }
      if ( v55 )
        qfree(v55);
      v62 = *(_QWORD *)(v53 + 16);
      if ( v62 != -1 && *(_BYTE *)v53 == 3 )
      {
        sub_60AE0((__int64)&v207, a2, *(_QWORD *)(a3 + 8), v62, v51);
        v111 = v201[9];
        v112 = v201[8];
        v113 = v201[10];
        v114 = v111 + 1;
        if ( (_DWORD)v207 )
        {
          v223[0] = (__m128i)0xFFFFFFFFFFFFFFFFLL;
          v120 = v201 + 8;
          if ( (unsigned __int64)v223 < v112 || (unsigned __int64)v223 >= v112 + 16 * v113 )
          {
            if ( v113 < v114 )
            {
              v134 = qvector_reserve(v120, 0, v111 + 1, 16);
              v135 = v201[9];
              v136 = v201[10];
              v201[10] = v113;
              v137 = (const __m128i *)v201[8];
              v138 = v135 - 1;
              if ( v135 - 1 >= 0 )
              {
                v139 = v134;
                do
                {
                  v140 = _mm_loadu_si128(v137);
                  v139 += 16;
                  ++v137;
                  *(__m128i *)(v139 - 16) = v140;
                  v7 = v138-- == 0;
                }
                while ( !v7 );
                v137 = (const __m128i *)v201[8];
              }
              v195 = v134;
              qfree(v137);
              v112 = v195;
              v201[10] = v136;
              v201[8] = v195;
              v111 = v201[9];
            }
            si128 = _mm_load_si128(v223);
            *(__m128i *)(v112 + 16 * v111) = si128;
          }
          else
          {
            if ( v113 < v114 )
            {
              v154 = qvector_reserve(v120, 0, v111 + 1, 16);
              v155 = v201[9];
              v156 = v201[10];
              v201[10] = v113;
              v157 = (const __m128i *)v201[8];
              v158 = v155 - 1;
              if ( v155 - 1 >= 0 )
              {
                v159 = v154;
                do
                {
                  si128 = _mm_loadu_si128(v157);
                  v159 += 16;
                  ++v157;
                  *(__m128i *)(v159 - 16) = si128;
                  v7 = v158-- == 0;
                }
                while ( !v7 );
                v157 = (const __m128i *)v201[8];
              }
              v197 = v154;
              qfree(v157);
              v112 = v197;
              v201[10] = v156;
              v111 = v201[9];
              v201[8] = v197;
            }
            v121 = (_QWORD *)(16 * v111 + v112);
            *v121 = -1;
            v121[1] = 0;
          }
          ++v201[9];
        }
        else
        {
          v115 = v201 + 8;
          v116 = *(_QWORD *)(v208 + 32);
          v117 = *(_QWORD *)(v208 + 8);
          v223[0].m128i_i64[0] = v116;
          v223[0].m128i_i64[1] = v117;
          if ( (unsigned __int64)v223 < v112 || (unsigned __int64)v223 >= v112 + 16 * v113 )
          {
            if ( v113 < v114 )
            {
              v141 = qvector_reserve(v115, 0, v111 + 1, 16);
              v142 = v201[9];
              v143 = v201[10];
              v201[10] = v113;
              v144 = (const __m128i *)v201[8];
              v145 = v142 - 1;
              if ( v145 >= 0 )
              {
                v146 = v141;
                do
                {
                  v147 = _mm_loadu_si128(v144);
                  v146 += 16;
                  ++v144;
                  *(__m128i *)(v146 - 16) = v147;
                  v7 = v145-- == 0;
                }
                while ( !v7 );
                v144 = (const __m128i *)v201[8];
              }
              v186 = v141;
              v191 = v143;
              qfree(v144);
              v112 = v186;
              v201[8] = v186;
              v201[10] = v191;
              v111 = v201[9];
            }
            *(__m128i *)(v112 + 16 * v111) = _mm_load_si128(v223);
          }
          else
          {
            if ( v113 < v114 )
            {
              v184 = v117;
              v187 = v116;
              v160 = qvector_reserve(v115, 0, v111 + 1, 16);
              v161 = v201[9];
              v162 = v201[10];
              v201[10] = v113;
              v163 = (const __m128i *)v201[8];
              v164 = v161 - 1;
              if ( v161 - 1 >= 0 )
              {
                v165 = v160;
                do
                {
                  v166 = _mm_loadu_si128(v163);
                  v165 += 16;
                  ++v163;
                  *(__m128i *)(v165 - 16) = v166;
                  v7 = v164-- == 0;
                }
                while ( !v7 );
                v163 = (const __m128i *)v201[8];
              }
              v183 = v160;
              qfree(v163);
              v112 = v183;
              v201[8] = v183;
              v117 = v184;
              v201[10] = v162;
              v116 = v187;
              v111 = v201[9];
            }
            v118 = (__int64 *)(16 * v111 + v112);
            *v118 = v116;
            v118[1] = v117;
          }
          ++v201[9];
          memset(&v223[1], 0, 0x60u);
          v223[2].m128i_i32[2] = v51;
          v223[3].m128i_i64[0] = (__int64)v223[6].m128i_i64;
          v223[3].m128i_i64[1] = 1;
          si128 = (__m128i)_mm_loadh_ps((const double *)&v209);
          v223[5].m128i_i64[0] = 1065353216;
          v223[0] = si128;
          sub_69020(&v202, v223);
          v122 = (_QWORD *)v223[4].m128i_i64[0];
          if ( v223[4].m128i_i64[0] )
          {
            do
            {
              v123 = v122;
              v122 = (_QWORD *)*v122;
              operator delete(v123, 0x18u);
            }
            while ( v122 );
          }
          memset((void *)v223[3].m128i_i64[0], 0, 8 * v223[3].m128i_i64[1]);
          v223[4] = 0u;
          if ( (__m128i *)v223[3].m128i_i64[0] != &v223[6] )
            operator delete((void *)v223[3].m128i_i64[0], 8 * v223[3].m128i_i64[1]);
        }
        v68 = v220[1];
        if ( v220[1] )
        {
LABEL_76:
          v221.m128i_i64[0] = 0;
          qfree(v68);
        }
      }
      else
      {
        v223[0] = (__m128i)0xFFFFFFFFFFFFFFFFLL;
        v63 = v201 + 8;
        v64 = v201[8];
        v65 = v201[10];
        v66 = v201[9];
        v67 = v66 + 1;
        if ( (unsigned __int64)v223 >= v64 && (unsigned __int64)v223 < v64 + 16 * v65 )
        {
          if ( v65 < v67 )
          {
            v64 = qvector_reserve(v63, 0, v66 + 1, 16);
            v148 = v201[10];
            v149 = (const __m128i *)v201[8];
            v201[10] = v65;
            v150 = v201[9] - 1LL;
            if ( v150 >= 0 )
            {
              v151 = v64;
              do
              {
                si128 = _mm_loadu_si128(v149);
                v151 += 16LL;
                ++v149;
                *(__m128i *)(v151 - 16) = si128;
                v7 = v150-- == 0;
              }
              while ( !v7 );
              v149 = (const __m128i *)v201[8];
            }
            v196 = v148;
            qfree(v149);
            v201[8] = v64;
            v201[10] = v196;
            v66 = v201[9];
          }
          v119 = (_QWORD *)(v64 + 16 * v66);
          *v119 = -1;
          v119[1] = 0;
        }
        else
        {
          if ( v65 < v67 )
          {
            v64 = qvector_reserve(v63, 0, v66 + 1, 16);
            v124 = v201[10];
            v125 = (const __m128i *)v201[8];
            v201[10] = v65;
            v126 = v201[9] - 1LL;
            if ( v126 >= 0 )
            {
              v127 = v64;
              do
              {
                v128 = _mm_loadu_si128(v125);
                v127 += 16LL;
                ++v125;
                *(__m128i *)(v127 - 16) = v128;
                v7 = v126-- == 0;
              }
              while ( !v7 );
              v125 = (const __m128i *)v201[8];
            }
            v194 = v124;
            qfree(v125);
            v201[8] = v64;
            v201[10] = v194;
            v66 = v201[9];
          }
          si128 = _mm_load_si128(v223);
          *(__m128i *)(v64 + 16 * v66) = si128;
        }
        ++v201[9];
        v68 = v220[1];
        if ( v220[1] )
          goto LABEL_76;
      }
LABEL_77:
      if ( v51 == v170 - 1 )
        goto LABEL_89;
      ++v51;
    }
    v61 = sub_11100((_QWORD *)(v56 + 32), v56 + 40, (__int64)v223);
    goto LABEL_66;
  }
LABEL_89:
  v80 = v202;
  v81 = *(_QWORD *)(a2 + 488);
  v82 = v202 + 112 * v203;
  if ( v82 != v202 )
  {
    for ( i = v202 + 40; ; i += 112 )
    {
      *(_BYTE *)(a2 + 188) = *(_BYTE *)(i - 16) ^ 1;
      *(_QWORD *)(a2 + 472) = *(_QWORD *)(i - 24);
      sub_60DE0((__int64)&v219, a2, a3, *(_QWORD *)(i - 40), *(_QWORD **)(i - 32));
      if ( LOBYTE(v220[1]) )
      {
        v153 = _mm_loadu_si128((const __m128i *)&v219.m128i_u64[1]);
        *(_QWORD *)a1 = v219.m128i_i64[0];
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v153;
        goto LABEL_104;
      }
      if ( v219.m128i_i32[0] == 1 )
      {
        *(_QWORD *)(i - 24) = 0;
        v99 = (_QWORD *)(*(_QWORD *)(a2 + 480) + v176 + 32);
        if ( *(_BYTE *)(i - 16) )
          v100 = (_QWORD *)(*(_QWORD *)(sub_67A60(v99, (int *)i) + 24) + 16LL * *(int *)(i + 4));
        else
          v100 = *(_QWORD **)(sub_67A60(v99, (int *)i) + 24);
        *v100 = -1;
        v100[1] = 0;
        sub_67BC0((__int64 *)(a2 + 480), v81);
        if ( LOBYTE(v220[1]) )
        {
          v87 = v219.m128i_i64[0];
          if ( v219.m128i_i64[0] )
          {
LABEL_123:
            v219.m128i_i64[1] = 0;
            qfree(v87);
          }
        }
      }
      else
      {
        if ( v219.m128i_i32[0] == 2 )
        {
LABEL_103:
          *(_BYTE *)a1 = 0;
          *(_BYTE *)(a1 + 24) = 0;
          goto LABEL_104;
        }
        if ( *(_QWORD *)(i - 24) )
        {
          v84 = *(_QWORD *)(a2 + 488);
          if ( v81 != v84 - 1 )
          {
            sub_64B50(
              (__int64)v223,
              *(unsigned __int8 **)(a2 + 32),
              (__int64)"do_inline_eh4_func_entry(%a): inlined_mod_idx %d != expected_mod_idx %d",
              *(double *)si128.m128i_i64,
              *v180,
              v84 - 1);
LABEL_170:
            *(_QWORD *)a1 = v223[0].m128i_i64[0];
            v133 = _mm_loadu_si128((const __m128i *)&v223[0].m128i_u64[1]);
            *(_BYTE *)(a1 + 24) = 1;
            *(__m128i *)(a1 + 8) = v133;
            if ( LOBYTE(v220[1]) && v219.m128i_i64[0] )
            {
              v219.m128i_i64[1] = 0;
              qfree(v219.m128i_i64[0]);
            }
LABEL_104:
            v80 = v202;
            goto LABEL_105;
          }
          v85 = *(_BYTE *)(i - 16) == 0;
          *(_QWORD *)(i - 8) = v81;
          if ( v85 )
          {
LABEL_145:
            v81 = v84;
            goto LABEL_124;
          }
          v86 = *(_QWORD *)(a2 + 480) + 88LL * *(_QWORD *)(a2 + 488) - 88;
          sub_62570(
            (__int64)v223,
            a2,
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(v86 + 16),
            *(_DWORD *)(v86 + 24),
            *(_QWORD *)(v86 + 8),
            *(_QWORD *)v86 + 296LL,
            (_QWORD *)(i + 8),
            *(const char **)(i + 64));
          if ( v223[1].m128i_i8[8] )
            goto LABEL_170;
          *(_DWORD *)(*(_QWORD *)(a2 + 480) + 88LL * *(_QWORD *)(a2 + 488) - 64) = v223[0].m128i_i32[0];
          if ( v223[1].m128i_i8[8] && v223[0].m128i_i64[0] )
          {
            v223[0].m128i_i64[1] = 0;
            qfree(v223[0].m128i_i64[0]);
          }
          v81 = v84;
        }
        else
        {
          v84 = v81;
          if ( !*(_BYTE *)(i - 16) )
            goto LABEL_145;
          v129 = *(const char **)(i + 64);
          v130 = *(_DWORD *)(a2 + 508);
          v131 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(i - 40) + 8LL) + 72LL);
          v132 = **(_QWORD **)(a2 + 480);
          BYTE4(v207) = 1;
          LODWORD(v207) = v131;
          sub_62570(
            (__int64)v223,
            a2,
            *(_QWORD *)(a3 + 8),
            v130,
            *(_DWORD *)(a2 + 512),
            v207,
            v132 + 296,
            (_QWORD *)(i + 8),
            v129);
          if ( v223[1].m128i_i8[8] )
            goto LABEL_170;
        }
        if ( LOBYTE(v220[1]) )
        {
          v87 = v219.m128i_i64[0];
          if ( v219.m128i_i64[0] )
            goto LABEL_123;
        }
      }
LABEL_124:
      if ( v82 == i + 72 )
      {
        v80 = v202;
        v152 = v202 + 112 * v203;
        if ( v152 != v202 )
        {
          while ( 1 )
          {
            if ( *(_QWORD *)(v80 + 16) )
            {
              sub_6B1C0(v223, a2, a3, *(_QWORD *)(v80 + 32));
              if ( v223[1].m128i_i8[8] )
              {
                v167 = _mm_loadu_si128((const __m128i *)&v223[0].m128i_u64[1]);
                *(_QWORD *)a1 = v223[0].m128i_i64[0];
                *(_BYTE *)(a1 + 24) = 1;
                *(__m128i *)(a1 + 8) = v167;
                goto LABEL_104;
              }
              if ( !v223[0].m128i_i8[0] )
                goto LABEL_103;
            }
            v80 += 112;
            if ( v80 == v152 )
            {
              v80 = v202;
              goto LABEL_194;
            }
          }
        }
        break;
      }
    }
  }
LABEL_194:
  *(_BYTE *)a1 = 1;
  *(_BYTE *)(a1 + 24) = 0;
LABEL_105:
  if ( v80 )
  {
    v88 = v203;
    if ( (_QWORD)v203 )
    {
      v89 = 0;
      v90 = 0;
      do
      {
        v91 = *(_QWORD **)(v80 + v89 + 64);
        v92 = v80 + v89;
        while ( v91 )
        {
          v93 = v91;
          v91 = (_QWORD *)*v91;
          operator delete(v93, 0x18u);
        }
        memset(*(void **)(v92 + 48), 0, 8LL * *(_QWORD *)(v92 + 56));
        v94 = *(void **)(v92 + 48);
        v95 = *(_QWORD *)(v92 + 56);
        *(_QWORD *)(v92 + 72) = 0;
        *(_QWORD *)(v92 + 64) = 0;
        if ( v94 != (void *)(v92 + 96) )
          operator delete(v94, 8 * v95);
        ++v90;
        v80 = v202;
        v89 += 112;
      }
      while ( v88 != v90 );
    }
    *(_QWORD *)&v203 = 0;
    qfree(v80);
  }
  v96 = v214;
  if ( v214 )
  {
    do
    {
      v97 = v96;
      v96 = (_QWORD *)*v96;
      operator delete(v97, 0x18u);
    }
    while ( v96 );
  }
  memset(s, 0, 8 * v213);
  v215 = 0;
  v214 = nullptr;
  if ( s != v218 )
    operator delete(s, 8 * v213);
  return a1;
}
