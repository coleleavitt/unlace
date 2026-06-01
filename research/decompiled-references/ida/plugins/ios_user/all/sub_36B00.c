unsigned __int64 __fastcall sub_36B00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v5; // rax
  size_t v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  size_t v9; // r12
  char *v10; // rsi
  __int64 v11; // rax
  char *v12; // rsi
  const char *v13; // rdi
  size_t v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  size_t v17; // r12
  char *v18; // rsi
  __int64 v19; // rax
  char *v20; // rbp
  const char *v21; // rdi
  bool v22; // bl
  _QWORD *v23; // r14
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rbx
  const char *v27; // r15
  __int64 v28; // r14
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // r15
  __int64 v34; // rbx
  _QWORD *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 i; // rbp
  _QWORD *v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbp
  __int64 v42; // rdi
  __int64 v43; // rbp
  int v44; // eax
  size_t v45; // rbx
  __int64 v46; // r8
  size_t v47; // rbx
  __int64 v48; // r12
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // r15
  __int64 v56; // rdx
  void *v57; // rax
  size_t v58; // rdx
  void *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rsi
  char *v62; // r8
  __int64 v63; // r15
  __m128i v64; // xmm5
  __m128i v65; // xmm11
  __int64 v66; // r14
  __m128i v67; // xmm4
  __int64 v68; // r10
  __int64 v69; // r9
  __m128i v70; // xmm10
  __m128i v71; // xmm3
  __m128i v72; // xmm9
  __m128i v73; // xmm2
  __m128i v74; // xmm8
  __int64 v75; // r12
  __m128i v76; // xmm1
  __m128i v77; // xmm7
  __m128i v78; // xmm0
  __m128i v79; // xmm6
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rsi
  char *v83; // r8
  __int64 v84; // r15
  __m128i v85; // xmm5
  __m128i v86; // xmm11
  __int64 v87; // r14
  __m128i v88; // xmm4
  __int64 v89; // r10
  __int64 v90; // r12
  __m128i v91; // xmm10
  __m128i v92; // xmm3
  __m128i v93; // xmm9
  __m128i v94; // xmm2
  __m128i v95; // xmm8
  __int64 v96; // r9
  __m128i v97; // xmm1
  __m128i v98; // xmm7
  __m128i v99; // xmm0
  __m128i v100; // xmm6
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rsi
  void *v104; // r8
  __int64 v105; // r15
  __m128i v106; // xmm5
  __m128i v107; // xmm11
  __int64 v108; // r14
  __m128i v109; // xmm4
  __int64 v110; // r9
  __int64 v111; // r12
  __m128i v112; // xmm10
  __m128i v113; // xmm3
  __m128i v114; // xmm9
  __m128i v115; // xmm2
  __m128i v116; // xmm8
  __int64 v117; // rbp
  __m128i v118; // xmm1
  __m128i v119; // xmm7
  __m128i v120; // xmm0
  __m128i v121; // xmm6
  _QWORD *v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rsi
  void *v126; // r8
  __int64 v127; // r15
  __m128i v128; // xmm5
  __m128i v129; // xmm11
  __int64 v130; // r14
  __m128i v131; // xmm4
  __int64 v132; // r9
  __int64 v133; // r12
  __m128i v134; // xmm10
  __m128i v135; // xmm3
  __m128i v136; // xmm9
  __m128i v137; // xmm2
  __m128i v138; // xmm8
  __int64 v139; // rbp
  __m128i v140; // xmm1
  __m128i v141; // xmm7
  __m128i v142; // xmm0
  __m128i v143; // xmm6
  _QWORD *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __m128i v152; // [rsp+0h] [rbp-598h] BYREF
  __m128i v153; // [rsp+18h] [rbp-580h] BYREF
  __m128i n; // [rsp+28h] [rbp-570h] BYREF
  __m128i v155; // [rsp+38h] [rbp-560h] BYREF
  __int64 *v156; // [rsp+48h] [rbp-550h]
  __int64 *v157; // [rsp+50h] [rbp-548h]
  __m128i v158; // [rsp+58h] [rbp-540h] BYREF
  __m128i v159; // [rsp+68h] [rbp-530h] BYREF
  __m128i v160; // [rsp+78h] [rbp-520h] BYREF
  __m128i v161; // [rsp+88h] [rbp-510h] BYREF
  __m128i v162; // [rsp+98h] [rbp-500h] BYREF
  __m128i v163; // [rsp+A8h] [rbp-4F0h] BYREF
  size_t v164[3]; // [rsp+B8h] [rbp-4E0h]
  __int64 v165; // [rsp+D0h] [rbp-4C8h] BYREF
  __int128 v166; // [rsp+D8h] [rbp-4C0h]
  __int64 v167; // [rsp+E8h] [rbp-4B0h] BYREF
  __int128 v168; // [rsp+F0h] [rbp-4A8h]
  __int64 v169; // [rsp+100h] [rbp-498h]
  __m128i v170; // [rsp+108h] [rbp-490h]
  __int64 v171; // [rsp+118h] [rbp-480h]
  __int128 v172; // [rsp+120h] [rbp-478h]
  __int64 v173; // [rsp+130h] [rbp-468h]
  __int128 v174; // [rsp+138h] [rbp-460h]
  __int64 v175; // [rsp+148h] [rbp-450h]
  __int128 v176; // [rsp+150h] [rbp-448h]
  __int64 v177; // [rsp+160h] [rbp-438h] BYREF
  __int128 v178; // [rsp+168h] [rbp-430h]
  __int64 v179; // [rsp+178h] [rbp-420h] BYREF
  __int128 v180; // [rsp+180h] [rbp-418h]
  __int64 v181; // [rsp+190h] [rbp-408h]
  __int128 v182; // [rsp+198h] [rbp-400h]
  __int64 v183; // [rsp+1A8h] [rbp-3F0h]
  __int128 v184; // [rsp+1B0h] [rbp-3E8h]
  __int64 v185; // [rsp+1C0h] [rbp-3D8h]
  __int128 v186; // [rsp+1C8h] [rbp-3D0h]
  __int64 v187; // [rsp+1D8h] [rbp-3C0h]
  __int128 v188; // [rsp+1E0h] [rbp-3B8h]
  __int64 v189; // [rsp+1F0h] [rbp-3A8h] BYREF
  __int128 v190; // [rsp+1F8h] [rbp-3A0h]
  __int64 v191; // [rsp+208h] [rbp-390h] BYREF
  __int128 v192; // [rsp+210h] [rbp-388h]
  __int64 v193; // [rsp+220h] [rbp-378h]
  __int128 v194; // [rsp+228h] [rbp-370h]
  __int64 v195; // [rsp+238h] [rbp-360h]
  __int128 v196; // [rsp+240h] [rbp-358h]
  __int64 v197; // [rsp+250h] [rbp-348h]
  __int128 v198; // [rsp+258h] [rbp-340h]
  __int64 v199; // [rsp+268h] [rbp-330h]
  __int128 v200; // [rsp+270h] [rbp-328h]
  void *v201[18]; // [rsp+280h] [rbp-318h] BYREF
  void *src; // [rsp+310h] [rbp-288h] BYREF
  __m128i v203; // [rsp+318h] [rbp-280h] BYREF
  __int64 v204; // [rsp+328h] [rbp-270h]
  __m128i v205; // [rsp+330h] [rbp-268h] BYREF
  __int64 v206; // [rsp+340h] [rbp-258h]
  __m128i v207; // [rsp+348h] [rbp-250h] BYREF
  __int64 v208; // [rsp+358h] [rbp-240h]
  __m128i v209; // [rsp+360h] [rbp-238h] BYREF
  __int64 v210; // [rsp+370h] [rbp-228h]
  __m128i v211; // [rsp+378h] [rbp-220h] BYREF
  __int64 v212; // [rsp+388h] [rbp-210h]
  __m128i v213; // [rsp+390h] [rbp-208h] BYREF
  char *s2; // [rsp+3A0h] [rbp-1F8h] BYREF
  __m128i v215; // [rsp+3A8h] [rbp-1F0h] BYREF
  __int64 v216; // [rsp+3B8h] [rbp-1E0h]
  __m128i v217; // [rsp+3C0h] [rbp-1D8h] BYREF
  __int64 v218; // [rsp+3D0h] [rbp-1C8h]
  __m128i v219; // [rsp+3D8h] [rbp-1C0h] BYREF
  __int64 v220; // [rsp+3E8h] [rbp-1B0h]
  __m128i v221; // [rsp+3F0h] [rbp-1A8h] BYREF
  __int64 v222; // [rsp+400h] [rbp-198h]
  __m128i v223; // [rsp+408h] [rbp-190h] BYREF
  __int64 v224; // [rsp+418h] [rbp-180h]
  __m128i v225; // [rsp+420h] [rbp-178h] BYREF
  void *v226; // [rsp+430h] [rbp-168h] BYREF
  __m128i v227; // [rsp+438h] [rbp-160h] BYREF
  __int64 v228; // [rsp+448h] [rbp-150h]
  __m128i v229; // [rsp+450h] [rbp-148h] BYREF
  __int64 v230; // [rsp+460h] [rbp-138h]
  __m128i v231; // [rsp+468h] [rbp-130h] BYREF
  __int64 v232; // [rsp+478h] [rbp-120h]
  __m128i v233; // [rsp+480h] [rbp-118h] BYREF
  __int64 v234; // [rsp+490h] [rbp-108h]
  __m128i v235; // [rsp+498h] [rbp-100h] BYREF
  __int64 v236; // [rsp+4A8h] [rbp-F0h]
  __m128i v237; // [rsp+4B0h] [rbp-E8h] BYREF
  char *v238; // [rsp+4C0h] [rbp-D8h] BYREF
  __m128i v239; // [rsp+4C8h] [rbp-D0h] BYREF
  __int64 v240; // [rsp+4D8h] [rbp-C0h]
  __m128i v241; // [rsp+4E0h] [rbp-B8h] BYREF
  __int64 v242; // [rsp+4F0h] [rbp-A8h]
  __m128i v243; // [rsp+4F8h] [rbp-A0h] BYREF
  __int64 v244; // [rsp+508h] [rbp-90h]
  __m128i v245; // [rsp+510h] [rbp-88h] BYREF
  __int64 v246; // [rsp+520h] [rbp-78h]
  __m128i v247; // [rsp+528h] [rbp-70h] BYREF
  __int64 v248; // [rsp+538h] [rbp-60h]
  __m128i v249; // [rsp+540h] [rbp-58h] BYREF
  unsigned __int64 v250; // [rsp+558h] [rbp-40h]

  v250 = __readfsqword(0x28u);
  *(_OWORD *)v164 = 0;
  v163.m128i_i64[1] = qvector_reserve();
  v164[0] = 17;
  *(__m128i *)v163.m128i_i64[1] = _mm_load_si128((const __m128i *)&xmmword_77460);
  v3 = v163.m128i_i64[1];
  *(_BYTE *)(v163.m128i_i64[1] + 16) = 0;
  if ( *(_QWORD *)(a2 + 8) && !strcmp(*(const char **)a2, "i386:x86-64") && *(_QWORD *)(a2 + 80) == 2 )
  {
    v203 = 0;
    v158.m128i_i64[0] = (__int64)&src;
    src = nullptr;
    v5 = (_BYTE *)qvector_reserve();
    src = v5;
    v203.m128i_i64[0] = 6;
    *(_DWORD *)v5 = 1919902510;
    v5[4] = 101;
    *((_BYTE *)src + 5) = 0;
    v6 = v164[0];
    s2 = nullptr;
    v215 = 0;
    if ( v164[0] )
    {
      s2 = (char *)qalloc_or_throw();
      v215.m128i_i64[1] = v164[0];
      memcpy(s2, (const void *)v163.m128i_i64[1], v164[0]);
      v215.m128i_i64[0] = v164[0];
      if ( !v203.m128i_i64[0] || (v150 = v203.m128i_i64[0] - 1, v9 = v203.m128i_i64[0] - 1, v203.m128i_i64[0] == 1) )
      {
        v11 = *(_QWORD *)(a2 + 72);
        goto LABEL_14;
      }
      v6 = v164[0] - 1;
      v8 = v150 + v164[0] - 1;
      v7 = v150 + v164[0];
    }
    else
    {
      v7 = v203.m128i_i64[0];
      if ( !v203.m128i_i64[0] || (v8 = v203.m128i_i64[0] - 1, v203.m128i_i64[0] == 1) )
      {
        v11 = *(_QWORD *)(a2 + 72);
        goto LABEL_22;
      }
      v9 = v203.m128i_i64[0] - 1;
    }
    v10 = s2;
    if ( v215.m128i_i64[1] < v7 )
    {
      s2 = (char *)qvector_reserve();
      v10 = s2;
    }
    v215.m128i_i64[0] = v7;
    v10[v8] = 0;
    memcpy(&s2[v6], src, v9);
    v11 = *(_QWORD *)(a2 + 72);
    if ( v215.m128i_i64[0] )
    {
LABEL_14:
      v12 = s2;
      v13 = s;
      if ( !*(_QWORD *)(v11 + 8) )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_22:
    v12 = (char *)s;
    if ( !*(_QWORD *)(v11 + 8) )
      goto LABEL_23;
LABEL_15:
    v13 = *(const char **)v11;
LABEL_16:
    if ( strcmp(v13, v12) )
    {
      if ( s2 )
      {
        v215.m128i_i64[0] = 0;
        qfree();
        if ( !src )
        {
LABEL_20:
          v3 = v163.m128i_i64[1];
          goto LABEL_4;
        }
      }
      else if ( !src )
      {
        goto LABEL_20;
      }
      v203.m128i_i64[0] = 0;
      qfree();
      goto LABEL_20;
    }
LABEL_23:
    v227 = 0;
    v158.m128i_i64[1] = (__int64)&v226;
    v226 = nullptr;
    v226 = (void *)qvector_reserve();
    v227.m128i_i64[0] = 5;
    strcpy((char *)v226, ".sse");
    v14 = v164[0];
    v238 = nullptr;
    v239 = 0;
    if ( v164[0] )
    {
      v238 = (char *)qalloc_or_throw();
      v239.m128i_i64[1] = v164[0];
      memcpy(v238, (const void *)v163.m128i_i64[1], v164[0]);
      v239.m128i_i64[0] = v164[0];
      v18 = v238;
      if ( !v227.m128i_i64[0] || (v17 = v227.m128i_i64[0] - 1, v227.m128i_i64[0] == 1) )
      {
        v19 = *(_QWORD *)(a2 + 72);
        goto LABEL_30;
      }
      v14 = v164[0] - 1;
      v16 = v17 + v164[0] - 1;
      v15 = v17 + v164[0];
    }
    else
    {
      v15 = v227.m128i_i64[0];
      if ( !v227.m128i_i64[0] || (v16 = v227.m128i_i64[0] - 1, v227.m128i_i64[0] == 1) )
      {
        v151 = *(_QWORD *)(a2 + 72);
        v22 = 1;
        if ( *(_QWORD *)(v151 + 152) )
          v22 = **(_BYTE **)(v151 + 144) == 0;
LABEL_35:
        if ( v226 )
        {
          v227.m128i_i64[0] = 0;
          qfree();
        }
        if ( s2 )
        {
          v215.m128i_i64[0] = 0;
          qfree();
        }
        if ( src )
        {
          v203.m128i_i64[0] = 0;
          qfree();
        }
        if ( !v22 )
          goto LABEL_20;
        v165 = 0;
        v167 = 0;
        v169 = 0;
        v171 = 0;
        v173 = 0;
        v175 = 0;
        v177 = 0;
        v179 = 0;
        v181 = 0;
        v183 = 0;
        v185 = 0;
        v187 = 0;
        v189 = 0;
        v191 = 0;
        v193 = 0;
        v195 = 0;
        v166 = 0;
        v168 = 0;
        v170 = 0;
        v172 = 0;
        v174 = 0;
        v176 = 0;
        v178 = 0;
        v180 = 0;
        v182 = 0;
        v184 = 0;
        v186 = 0;
        v188 = 0;
        v190 = 0;
        v192 = 0;
        v194 = 0;
        v196 = 0;
        v197 = 0;
        v199 = 0;
        v198 = 0;
        v200 = 0;
        v157 = &v165;
        sub_15620(&v165);
        v156 = &v177;
        sub_15620(&v177);
        v155.m128i_i64[1] = (__int64)&v189;
        sub_15620(&v189);
        v23 = *(_QWORD **)(a2 + 72);
        v24 = v23[4];
        if ( v24 )
        {
          v25 = 0;
          v26 = 0;
          v152.m128i_i64[0] = (__int64)&v167;
          v153.m128i_i64[0] = (__int64)&v191;
          do
          {
            v28 = v25 + v23[3];
            v29 = *(_QWORD *)(v28 + 72);
            if ( *(_DWORD *)(v28 + 24) == 32 )
            {
              if ( !v29 )
              {
LABEL_57:
                sub_31620((__int64 *)v152.m128i_i64[0], v28);
                goto LABEL_48;
              }
              v27 = *(const char **)(v28 + 64);
              if ( !strcmp(v27, "general") && *(_QWORD *)(v28 + 48) && !strcmp(*(const char **)(v28 + 40), "int") )
              {
                sub_31620(&v179, v28);
                goto LABEL_48;
              }
            }
            else
            {
              if ( !v29 )
                goto LABEL_57;
              v27 = *(const char **)(v28 + 64);
            }
            if ( strcmp(v27, "float") )
              goto LABEL_57;
            sub_31620((__int64 *)v153.m128i_i64[0], v28);
LABEL_48:
            ++v26;
            v23 = *(_QWORD **)(a2 + 72);
            v25 += 136;
          }
          while ( v26 != v24 );
        }
        v153.m128i_i64[1] = 0;
        v153.m128i_i64[0] = v23[7];
        if ( v153.m128i_i64[0] )
        {
          v153.m128i_i64[1] = qalloc_or_throw();
          v43 = v153.m128i_i64[1];
          v152.m128i_i64[0] = 0;
          do
          {
            v46 = v23[6] + v43 - v153.m128i_i64[1];
            *(_QWORD *)v43 = 0;
            *(_OWORD *)(v43 + 8) = 0;
            v47 = *(_QWORD *)(v46 + 8);
            v48 = v46;
            if ( v47 )
            {
              v49 = (void *)qalloc_or_throw();
              *(_QWORD *)v43 = v49;
              *(_QWORD *)(v43 + 16) = v47;
              memcpy(v49, *(const void **)v48, v47);
              *(_QWORD *)(v43 + 8) = v47;
            }
            v44 = *(_DWORD *)(v48 + 24);
            *(_QWORD *)(v43 + 32) = 0;
            *(_OWORD *)(v43 + 40) = 0;
            *(_DWORD *)(v43 + 24) = v44;
            v45 = *(_QWORD *)(v48 + 40);
            if ( v45 )
            {
              v59 = (void *)qalloc_or_throw();
              *(_QWORD *)(v43 + 32) = v59;
              *(_QWORD *)(v43 + 48) = v45;
              memcpy(v59, *(const void **)(v48 + 32), v45);
              *(_QWORD *)(v43 + 40) = v45;
            }
            *(_QWORD *)(v43 + 56) = 0;
            *(_OWORD *)(v43 + 64) = 0;
            if ( *(_QWORD *)(v48 + 64) )
            {
              n.m128i_i64[0] = *(_QWORD *)(v48 + 64);
              v50 = qalloc_or_throw();
              v51 = n.m128i_i64[0];
              *(_QWORD *)(v43 + 56) = v50;
              v52 = v50;
              v53 = 0;
              *(_QWORD *)(v43 + 72) = v51;
              while ( 1 )
              {
                v54 = 32 * v53 + v52;
                v55 = *(_QWORD *)(v48 + 56) + 32 * v53;
                *(_QWORD *)v54 = 0;
                *(_OWORD *)(v54 + 8) = 0;
                v56 = *(_QWORD *)(v55 + 8);
                if ( v56 )
                {
                  v155.m128i_i64[0] = v53;
                  n.m128i_i64[1] = v51;
                  n.m128i_i64[0] = v56;
                  v57 = (void *)qalloc_or_throw();
                  v58 = n.m128i_i64[0];
                  *(_QWORD *)v54 = v57;
                  *(_QWORD *)(v54 + 16) = v58;
                  memcpy(v57, *(const void **)v55, v58);
                  v53 = v155.m128i_i64[0];
                  v51 = n.m128i_i64[1];
                  *(_QWORD *)(v54 + 8) = n.m128i_i64[0];
                }
                ++v53;
                *(_QWORD *)(v54 + 24) = *(_QWORD *)(v55 + 24);
                if ( v51 == v53 )
                  break;
                v52 = *(_QWORD *)(v43 + 56);
              }
              *(_QWORD *)(v43 + 64) = v51;
            }
            ++v152.m128i_i64[0];
            v43 += 80;
          }
          while ( v153.m128i_i64[0] != v152.m128i_i64[0] );
        }
        v30 = _mm_loadl_epi64(&v153);
        v31 = v169;
        v32 = _mm_unpacklo_epi64(v30, v30);
        if ( v169 )
        {
          v33 = v170.m128i_i64[0];
          if ( v170.m128i_i64[0] )
          {
            v34 = 0;
            v152 = v32;
            do
            {
              v35 = (_QWORD *)(v31 + 80 * v34);
              v36 = v35[7];
              if ( v36 )
              {
                v37 = v35[8];
                if ( v37 )
                {
                  for ( i = 0; i != v37; ++i )
                  {
                    v39 = (_QWORD *)(v36 + 32 * i);
                    if ( *v39 )
                    {
                      v39[1] = 0;
                      qfree();
                      v36 = v35[7];
                    }
                  }
                }
                v35[8] = 0;
                qfree();
              }
              if ( v35[4] )
              {
                v35[5] = 0;
                qfree();
              }
              if ( *v35 )
              {
                v35[1] = 0;
                qfree();
              }
              ++v34;
              v31 = v169;
            }
            while ( v33 != v34 );
            v32 = _mm_load_si128(&v152);
          }
          v152 = v32;
          v170.m128i_i64[0] = 0;
          qfree();
          v32 = _mm_load_si128(&v152);
        }
        v170 = v32;
        v169 = v153.m128i_i64[1];
        sub_22CC0((__int64)v201, *(_QWORD *)(a2 + 72) + 144LL);
        v40 = *(_QWORD *)(a2 + 80);
        v41 = 0;
        if ( v40 )
        {
          do
          {
            v42 = 9 * v41++;
            sub_1E910((_QWORD *)(*(_QWORD *)(a2 + 72) + 16 * v42));
          }
          while ( v40 != v41 );
        }
        *(_QWORD *)(a2 + 80) = 0;
        v152.m128i_i64[0] = a2 + 72;
        if ( (_QWORD)v168 )
        {
          src = nullptr;
          v203 = 0u;
          v204 = 0;
          v205 = 0u;
          v206 = 0;
          v207 = 0u;
          v208 = 0;
          v209 = 0u;
          v210 = 0;
          v211 = 0u;
          v212 = 0;
          v213 = 0u;
          sub_22CC0(v158.m128i_i64[0], (__int64)v157);
          v124 = *(_QWORD *)(a2 + 80);
          v125 = *(_QWORD *)(a2 + 72);
          v126 = src;
          v127 = v204;
          v128 = _mm_loadl_epi64(&v203);
          v129 = _mm_loadl_epi64((const __m128i *)&v203.m128i_u64[1]);
          v130 = v206;
          v131 = _mm_loadl_epi64(&v205);
          v132 = v208;
          v133 = v210;
          v134 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v135 = _mm_loadl_epi64(&v207);
          v136 = _mm_loadl_epi64((const __m128i *)&v207.m128i_u64[1]);
          v137 = _mm_loadl_epi64(&v209);
          v138 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v139 = v212;
          v140 = _mm_loadl_epi64(&v211);
          v141 = _mm_loadl_epi64((const __m128i *)&v211.m128i_u64[1]);
          v142 = _mm_loadl_epi64(&v213);
          v143 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v124 + 1) )
          {
            v162.m128i_i64[0] = (__int64)src;
            v155.m128i_i64[0] = v208;
            v163.m128i_i64[0] = v129.m128i_i64[0];
            v162.m128i_i64[1] = v128.m128i_i64[0];
            v161.m128i_i64[1] = v140.m128i_i64[0];
            v161.m128i_i64[0] = v131.m128i_i64[0];
            v160.m128i_i64[1] = v134.m128i_i64[0];
            v160.m128i_i64[0] = v135.m128i_i64[0];
            v159.m128i_i64[1] = v136.m128i_i64[0];
            v159.m128i_i64[0] = v138.m128i_i64[0];
            n.m128i_i64[1] = v137.m128i_i64[0];
            n.m128i_i64[0] = v141.m128i_i64[0];
            v153.m128i_i64[1] = v142.m128i_i64[0];
            v153.m128i_i64[0] = v143.m128i_i64[0];
            v149 = qvector_reserve();
            *(_QWORD *)(a2 + 72) = v149;
            v125 = v149;
            v129 = _mm_loadl_epi64(&v163);
            v124 = *(_QWORD *)(a2 + 80);
            v132 = v155.m128i_i64[0];
            v126 = (void *)v162.m128i_i64[0];
            v128 = _mm_loadl_epi64((const __m128i *)&v162.m128i_u64[1]);
            v135 = _mm_loadl_epi64(&v160);
            v136 = _mm_loadl_epi64((const __m128i *)&v159.m128i_u64[1]);
            v138 = _mm_loadl_epi64(&v159);
            v137 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
            v141 = _mm_loadl_epi64(&n);
            v142 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
            v140 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
            v143 = _mm_loadl_epi64(&v153);
            v131 = _mm_loadl_epi64(&v161);
            v134 = _mm_loadl_epi64((const __m128i *)&v160.m128i_u64[1]);
          }
          v144 = (_QWORD *)v158.m128i_i64[0];
          v145 = v125 + 144 * v124;
          *(__m128i *)(v145 + 128) = _mm_unpacklo_epi64(v142, v143);
          *(_QWORD *)v145 = v126;
          *(_QWORD *)(v145 + 24) = v127;
          *(_QWORD *)(v145 + 48) = v130;
          *(_QWORD *)(v145 + 72) = v132;
          *(_QWORD *)(v145 + 96) = v133;
          *(_QWORD *)(v145 + 120) = v139;
          *(__m128i *)(v145 + 8) = _mm_unpacklo_epi64(v128, v129);
          *(__m128i *)(v145 + 32) = _mm_unpacklo_epi64(v131, v134);
          *(__m128i *)(v145 + 56) = _mm_unpacklo_epi64(v135, v136);
          *(__m128i *)(v145 + 80) = _mm_unpacklo_epi64(v137, v138);
          *(__m128i *)(v145 + 104) = _mm_unpacklo_epi64(v140, v141);
          ++*(_QWORD *)(a2 + 80);
          src = nullptr;
          v204 = 0;
          v206 = 0;
          v208 = 0;
          v210 = 0;
          v212 = 0;
          v203 = 0;
          v205 = 0;
          v207 = 0;
          v209 = 0;
          v211 = 0;
          v213 = 0;
          sub_1E910(v144);
        }
        if ( (_QWORD)v180 )
        {
          s2 = nullptr;
          v215 = 0u;
          v216 = 0;
          v217 = 0u;
          v218 = 0;
          v219 = 0u;
          v220 = 0;
          v221 = 0u;
          v222 = 0;
          v223 = 0u;
          v224 = 0;
          v225 = 0u;
          sub_22CC0((__int64)&s2, (__int64)v156);
          v81 = *(_QWORD *)(a2 + 80);
          v82 = *(_QWORD *)(a2 + 72);
          v83 = s2;
          v84 = v216;
          v85 = _mm_loadl_epi64(&v215);
          v86 = _mm_loadl_epi64((const __m128i *)&v215.m128i_u64[1]);
          v87 = v218;
          v88 = _mm_loadl_epi64(&v217);
          v89 = v220;
          v90 = v222;
          v91 = _mm_loadl_epi64((const __m128i *)&v217.m128i_u64[1]);
          v92 = _mm_loadl_epi64(&v219);
          v93 = _mm_loadl_epi64((const __m128i *)&v219.m128i_u64[1]);
          v94 = _mm_loadl_epi64(&v221);
          v95 = _mm_loadl_epi64((const __m128i *)&v221.m128i_u64[1]);
          v96 = v224;
          v97 = _mm_loadl_epi64(&v223);
          v98 = _mm_loadl_epi64((const __m128i *)&v223.m128i_u64[1]);
          v99 = _mm_loadl_epi64(&v225);
          v100 = _mm_loadl_epi64((const __m128i *)&v225.m128i_u64[1]);
          if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v81 + 1) )
          {
            v159.m128i_i64[1] = v220;
            v162.m128i_i64[0] = v224;
            v153.m128i_i64[0] = (__int64)s2;
            v163.m128i_i64[0] = v100.m128i_i64[0];
            v162.m128i_i64[1] = v99.m128i_i64[0];
            v161.m128i_i64[1] = v98.m128i_i64[0];
            v161.m128i_i64[0] = v97.m128i_i64[0];
            v160.m128i_i64[1] = v95.m128i_i64[0];
            v160.m128i_i64[0] = v94.m128i_i64[0];
            v159.m128i_i64[0] = v93.m128i_i64[0];
            v158.m128i_i64[0] = v92.m128i_i64[0];
            v155.m128i_i64[0] = v91.m128i_i64[0];
            n.m128i_i64[1] = v88.m128i_i64[0];
            n.m128i_i64[0] = v86.m128i_i64[0];
            v153.m128i_i64[1] = v85.m128i_i64[0];
            v146 = qvector_reserve();
            *(_QWORD *)(a2 + 72) = v146;
            v82 = v146;
            v100 = _mm_loadl_epi64(&v163);
            v81 = *(_QWORD *)(a2 + 80);
            v89 = v159.m128i_i64[1];
            v99 = _mm_loadl_epi64((const __m128i *)&v162.m128i_u64[1]);
            v83 = (char *)v153.m128i_i64[0];
            v96 = v162.m128i_i64[0];
            v98 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
            v94 = _mm_loadl_epi64(&v160);
            v93 = _mm_loadl_epi64(&v159);
            v92 = _mm_loadl_epi64(&v158);
            v91 = _mm_loadl_epi64(&v155);
            v88 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
            v86 = _mm_loadl_epi64(&n);
            v97 = _mm_loadl_epi64(&v161);
            v85 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
            v95 = _mm_loadl_epi64((const __m128i *)&v160.m128i_u64[1]);
          }
          v101 = v82 + 144 * v81;
          *(__m128i *)(v101 + 128) = _mm_unpacklo_epi64(v99, v100);
          *(_QWORD *)v101 = v83;
          *(_QWORD *)(v101 + 24) = v84;
          *(_QWORD *)(v101 + 48) = v87;
          *(_QWORD *)(v101 + 72) = v89;
          *(_QWORD *)(v101 + 96) = v90;
          *(_QWORD *)(v101 + 120) = v96;
          *(__m128i *)(v101 + 8) = _mm_unpacklo_epi64(v85, v86);
          *(__m128i *)(v101 + 32) = _mm_unpacklo_epi64(v88, v91);
          *(__m128i *)(v101 + 56) = _mm_unpacklo_epi64(v92, v93);
          *(__m128i *)(v101 + 80) = _mm_unpacklo_epi64(v94, v95);
          *(__m128i *)(v101 + 104) = _mm_unpacklo_epi64(v97, v98);
          ++*(_QWORD *)(a2 + 80);
          s2 = nullptr;
          v216 = 0;
          v218 = 0;
          v220 = 0;
          v222 = 0;
          v224 = 0;
          v215 = 0;
          v217 = 0;
          v219 = 0;
          v221 = 0;
          v223 = 0;
          v225 = 0;
          sub_1E910(&s2);
          if ( !(_QWORD)v192 )
            goto LABEL_81;
        }
        else if ( !(_QWORD)v192 )
        {
LABEL_81:
          if ( v201[4] )
          {
            v238 = nullptr;
            v239 = 0u;
            v240 = 0;
            v241 = 0u;
            v242 = 0;
            v243 = 0u;
            v244 = 0;
            v245 = 0u;
            v246 = 0;
            v247 = 0u;
            v248 = 0;
            v249 = 0u;
            sub_22CC0((__int64)&v238, (__int64)v201);
            v60 = *(_QWORD *)(a2 + 80);
            v61 = *(_QWORD *)(a2 + 72);
            v62 = v238;
            v63 = v240;
            v64 = _mm_loadl_epi64(&v239);
            v65 = _mm_loadl_epi64((const __m128i *)&v239.m128i_u64[1]);
            v66 = v242;
            v67 = _mm_loadl_epi64(&v241);
            v68 = v244;
            v69 = v246;
            v70 = _mm_loadl_epi64((const __m128i *)&v241.m128i_u64[1]);
            v71 = _mm_loadl_epi64(&v243);
            v72 = _mm_loadl_epi64((const __m128i *)&v243.m128i_u64[1]);
            v73 = _mm_loadl_epi64(&v245);
            v74 = _mm_loadl_epi64((const __m128i *)&v245.m128i_u64[1]);
            v75 = v248;
            v76 = _mm_loadl_epi64(&v247);
            v77 = _mm_loadl_epi64((const __m128i *)&v247.m128i_u64[1]);
            v78 = _mm_loadl_epi64(&v249);
            v79 = _mm_loadl_epi64((const __m128i *)&v249.m128i_u64[1]);
            if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v60 + 1) )
            {
              v159.m128i_i64[0] = v244;
              v160.m128i_i64[1] = v246;
              v153.m128i_i64[0] = (__int64)v238;
              v162.m128i_i64[1] = v79.m128i_i64[0];
              v162.m128i_i64[0] = v78.m128i_i64[0];
              v161.m128i_i64[1] = v77.m128i_i64[0];
              v161.m128i_i64[0] = v76.m128i_i64[0];
              v160.m128i_i64[0] = v74.m128i_i64[0];
              v159.m128i_i64[1] = v73.m128i_i64[0];
              v158.m128i_i64[1] = v72.m128i_i64[0];
              v158.m128i_i64[0] = v71.m128i_i64[0];
              v155.m128i_i64[0] = v70.m128i_i64[0];
              n.m128i_i64[1] = v67.m128i_i64[0];
              n.m128i_i64[0] = v65.m128i_i64[0];
              v153.m128i_i64[1] = v64.m128i_i64[0];
              v148 = qvector_reserve();
              *(_QWORD *)(a2 + 72) = v148;
              v61 = v148;
              v79 = _mm_loadl_epi64((const __m128i *)&v162.m128i_u64[1]);
              v60 = *(_QWORD *)(a2 + 80);
              v68 = v159.m128i_i64[0];
              v78 = _mm_loadl_epi64(&v162);
              v69 = v160.m128i_i64[1];
              v77 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
              v74 = _mm_loadl_epi64(&v160);
              v76 = _mm_loadl_epi64(&v161);
              v73 = _mm_loadl_epi64((const __m128i *)&v159.m128i_u64[1]);
              v72 = _mm_loadl_epi64((const __m128i *)&v158.m128i_u64[1]);
              v71 = _mm_loadl_epi64(&v158);
              v70 = _mm_loadl_epi64(&v155);
              v67 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
              v65 = _mm_loadl_epi64(&n);
              v64 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
              v62 = (char *)v153.m128i_i64[0];
            }
            v80 = v61 + 144 * v60;
            *(__m128i *)(v80 + 128) = _mm_unpacklo_epi64(v78, v79);
            *(_QWORD *)v80 = v62;
            *(_QWORD *)(v80 + 24) = v63;
            *(_QWORD *)(v80 + 48) = v66;
            *(_QWORD *)(v80 + 72) = v68;
            *(_QWORD *)(v80 + 96) = v69;
            *(_QWORD *)(v80 + 120) = v75;
            *(__m128i *)(v80 + 8) = _mm_unpacklo_epi64(v64, v65);
            *(__m128i *)(v80 + 32) = _mm_unpacklo_epi64(v67, v70);
            *(__m128i *)(v80 + 56) = _mm_unpacklo_epi64(v71, v72);
            *(__m128i *)(v80 + 80) = _mm_unpacklo_epi64(v73, v74);
            *(__m128i *)(v80 + 104) = _mm_unpacklo_epi64(v76, v77);
            ++*(_QWORD *)(a2 + 80);
            v238 = nullptr;
            v240 = 0;
            v242 = 0;
            v244 = 0;
            v246 = 0;
            v248 = 0;
            v239 = 0;
            v241 = 0;
            v243 = 0;
            v245 = 0;
            v247 = 0;
            v249 = 0;
            sub_1E910(&v238);
          }
          sub_1E910(v201);
          sub_1E910((_QWORD *)v155.m128i_i64[1]);
          sub_1E910(v156);
          sub_1E910(v157);
          goto LABEL_20;
        }
        v226 = nullptr;
        v227 = 0u;
        v228 = 0;
        v229 = 0u;
        v230 = 0;
        v231 = 0u;
        v232 = 0;
        v233 = 0u;
        v234 = 0;
        v235 = 0u;
        v236 = 0;
        v237 = 0u;
        sub_22CC0(v158.m128i_i64[1], v155.m128i_i64[1]);
        v102 = *(_QWORD *)(a2 + 80);
        v103 = *(_QWORD *)(a2 + 72);
        v104 = v226;
        v105 = v228;
        v106 = _mm_loadl_epi64(&v227);
        v107 = _mm_loadl_epi64((const __m128i *)&v227.m128i_u64[1]);
        v108 = v230;
        v109 = _mm_loadl_epi64(&v229);
        v110 = v232;
        v111 = v234;
        v112 = _mm_loadl_epi64((const __m128i *)&v229.m128i_u64[1]);
        v113 = _mm_loadl_epi64(&v231);
        v114 = _mm_loadl_epi64((const __m128i *)&v231.m128i_u64[1]);
        v115 = _mm_loadl_epi64(&v233);
        v116 = _mm_loadl_epi64((const __m128i *)&v233.m128i_u64[1]);
        v117 = v236;
        v118 = _mm_loadl_epi64(&v235);
        v119 = _mm_loadl_epi64((const __m128i *)&v235.m128i_u64[1]);
        v120 = _mm_loadl_epi64(&v237);
        v121 = _mm_loadl_epi64((const __m128i *)&v237.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v102 + 1) )
        {
          v159.m128i_i64[1] = v232;
          v153.m128i_i64[0] = (__int64)v226;
          v162.m128i_i64[1] = v121.m128i_i64[0];
          v162.m128i_i64[0] = v120.m128i_i64[0];
          v161.m128i_i64[1] = v119.m128i_i64[0];
          v161.m128i_i64[0] = v118.m128i_i64[0];
          v160.m128i_i64[1] = v116.m128i_i64[0];
          v160.m128i_i64[0] = v115.m128i_i64[0];
          v159.m128i_i64[0] = v114.m128i_i64[0];
          v158.m128i_i64[0] = v113.m128i_i64[0];
          v155.m128i_i64[0] = v112.m128i_i64[0];
          n.m128i_i64[1] = v109.m128i_i64[0];
          n.m128i_i64[0] = v107.m128i_i64[0];
          v153.m128i_i64[1] = v106.m128i_i64[0];
          v147 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v147;
          v103 = v147;
          v121 = _mm_loadl_epi64((const __m128i *)&v162.m128i_u64[1]);
          v102 = *(_QWORD *)(a2 + 80);
          v110 = v159.m128i_i64[1];
          v120 = _mm_loadl_epi64(&v162);
          v104 = (void *)v153.m128i_i64[0];
          v115 = _mm_loadl_epi64(&v160);
          v114 = _mm_loadl_epi64(&v159);
          v113 = _mm_loadl_epi64(&v158);
          v112 = _mm_loadl_epi64(&v155);
          v109 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v107 = _mm_loadl_epi64(&n);
          v119 = _mm_loadl_epi64((const __m128i *)&v161.m128i_u64[1]);
          v106 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
          v118 = _mm_loadl_epi64(&v161);
          v116 = _mm_loadl_epi64((const __m128i *)&v160.m128i_u64[1]);
        }
        v122 = (_QWORD *)v158.m128i_i64[1];
        v123 = v103 + 144 * v102;
        *(__m128i *)(v123 + 128) = _mm_unpacklo_epi64(v120, v121);
        *(_QWORD *)v123 = v104;
        *(_QWORD *)(v123 + 24) = v105;
        *(_QWORD *)(v123 + 48) = v108;
        *(_QWORD *)(v123 + 72) = v110;
        *(_QWORD *)(v123 + 96) = v111;
        *(_QWORD *)(v123 + 120) = v117;
        *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64(v106, v107);
        *(__m128i *)(v123 + 32) = _mm_unpacklo_epi64(v109, v112);
        *(__m128i *)(v123 + 56) = _mm_unpacklo_epi64(v113, v114);
        *(__m128i *)(v123 + 80) = _mm_unpacklo_epi64(v115, v116);
        *(__m128i *)(v123 + 104) = _mm_unpacklo_epi64(v118, v119);
        ++*(_QWORD *)(a2 + 80);
        v226 = nullptr;
        v228 = 0;
        v230 = 0;
        v232 = 0;
        v234 = 0;
        v236 = 0;
        v227 = 0;
        v229 = 0;
        v231 = 0;
        v233 = 0;
        v235 = 0;
        v237 = 0;
        sub_1E910(v122);
        goto LABEL_81;
      }
      v17 = v227.m128i_i64[0] - 1;
      v18 = nullptr;
    }
    if ( v239.m128i_i64[1] < v15 )
    {
      v238 = (char *)qvector_reserve();
      v18 = v238;
    }
    v239.m128i_i64[0] = v15;
    v18[v16] = 0;
    memcpy(&v238[v14], v226, v17);
    v18 = v238;
    v19 = *(_QWORD *)(a2 + 72);
    if ( !v239.m128i_i64[0] )
    {
      v20 = v238;
      v18 = (char *)s;
      goto LABEL_31;
    }
LABEL_30:
    v20 = v18;
LABEL_31:
    v21 = s;
    if ( *(_QWORD *)(v19 + 152) )
      v21 = *(const char **)(v19 + 144);
    v22 = strcmp(v21, v18) == 0;
    if ( v20 )
    {
      v239.m128i_i64[0] = 0;
      qfree();
    }
    goto LABEL_35;
  }
LABEL_4:
  if ( v3 )
  {
    v164[0] = 0;
    qfree();
  }
  return v250 - __readfsqword(0x28u);
}

