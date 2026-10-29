__int64 __fastcall sub_3A320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // ebx
  void (__fastcall ***v7)(_QWORD); // rdi
  const char *v10; // rdx
  char v11; // al
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rax
  size_t v15; // r15
  char *v16; // rdi
  __int64 v17; // rax
  size_t v18; // rax
  size_t v19; // r15
  size_t v20; // r8
  void *v21; // r9
  size_t v22; // r10
  char *v23; // rsi
  size_t v24; // rax
  __int64 v25; // rax
  void **v26; // r15
  _QWORD *v27; // rsi
  _QWORD *v28; // rdx
  _QWORD *v29; // r15
  char *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // r15d
  __m128i si128; // xmm0
  size_t v38; // r15
  size_t v39; // r15
  __int64 v40; // rax
  char *v41; // rsi
  char *v42; // rsi
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rax
  _QWORD *v46; // rsi
  void **v47; // r15
  unsigned __int64 v48; // r8
  void **v49; // rax
  void ***v50; // rcx
  void ***v51; // rdx
  char *v52; // rdi
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // rax
  size_t v56; // rdx
  __int64 v57; // rcx
  void *v58; // rdi
  __m128i v59; // xmm0
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r15
  char *v63; // rdi
  __int64 v64; // r15
  __int64 v65; // r14
  char *v66; // rax
  void *v67; // rdi
  void *v68; // rdi
  size_t v69; // rax
  unsigned __int64 v70; // r15
  __int64 (*v71)(); // rax
  void *v72; // rdi
  char *v73; // rdi
  __int64 v74; // r14
  __int64 v75; // r15
  char *v76; // rbx
  void *v77; // rdi
  void *v78; // rdi
  unsigned __int64 v79; // r14
  _DWORD *v80; // rsi
  char *v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  char *v84; // rcx
  __int64 v85; // r14
  int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r14
  __int64 *v90; // rdx
  __int64 *v91; // r8
  void *v92; // rsi
  char *v93; // r14
  __int64 *v94; // rdx
  size_t v95; // r8
  void *v96; // r9
  __int64 v97; // r14
  size_t v98; // r8
  __int64 *v99; // rdx
  _BYTE *v100; // rsi
  __m128i v101; // xmm0
  const char *v102; // rdx
  _QWORD *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // rcx
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rdx
  _DWORD *v109; // rax
  const char *v110; // rsi
  const char *v111; // rdx
  __int64 v112; // r15
  __int64 v113; // r15
  _QWORD *v114; // rax
  __int64 v115; // r8
  __int64 v116; // rdx
  _QWORD *v117; // r9
  const char *v118; // rsi
  char v119; // al
  unsigned __int64 v120; // rax
  __int64 v121; // rcx
  int v122; // esi
  char v123; // al
  unsigned int *v124; // rdi
  const char *v125; // rcx
  char *v126; // rcx
  void *v127; // rax
  void *v128; // rax
  __m128i v129; // [rsp+10h] [rbp-4D0h] BYREF
  __int64 *v130; // [rsp+20h] [rbp-4C0h]
  __int64 v131; // [rsp+28h] [rbp-4B8h]
  __int64 v132; // [rsp+30h] [rbp-4B0h]
  __int64 *v133; // [rsp+38h] [rbp-4A8h]
  __int64 *v134; // [rsp+40h] [rbp-4A0h]
  void *src; // [rsp+48h] [rbp-498h]
  size_t n; // [rsp+50h] [rbp-490h]
  __int64 *v137; // [rsp+58h] [rbp-488h]
  __int64 v138; // [rsp+60h] [rbp-480h]
  __int64 v139; // [rsp+68h] [rbp-478h]
  __int64 *v140; // [rsp+70h] [rbp-470h]
  char *v141; // [rsp+78h] [rbp-468h]
  __int64 v142; // [rsp+88h] [rbp-458h] BYREF
  __int64 v143; // [rsp+90h] [rbp-450h] BYREF
  __int64 v144; // [rsp+98h] [rbp-448h] BYREF
  __int64 v145; // [rsp+A0h] [rbp-440h] BYREF
  __int64 v146; // [rsp+A8h] [rbp-438h] BYREF
  __int64 v147; // [rsp+B0h] [rbp-430h] BYREF
  __int64 v148; // [rsp+B8h] [rbp-428h] BYREF
  __int64 v149; // [rsp+C0h] [rbp-420h] BYREF
  __int64 v150; // [rsp+C8h] [rbp-418h] BYREF
  __int64 v151; // [rsp+D0h] [rbp-410h] BYREF
  __int64 v152; // [rsp+D8h] [rbp-408h] BYREF
  void *v153; // [rsp+E0h] [rbp-400h] BYREF
  __int128 v154; // [rsp+E8h] [rbp-3F8h]
  void *v155; // [rsp+100h] [rbp-3E0h] BYREF
  __int128 v156; // [rsp+108h] [rbp-3D8h]
  void *v157; // [rsp+120h] [rbp-3C0h] BYREF
  __int128 v158; // [rsp+128h] [rbp-3B8h]
  void *v159; // [rsp+140h] [rbp-3A0h] BYREF
  __int128 v160; // [rsp+148h] [rbp-398h]
  void *v161; // [rsp+160h] [rbp-380h] BYREF
  __int128 v162; // [rsp+168h] [rbp-378h]
  void *v163; // [rsp+180h] [rbp-360h] BYREF
  __int128 v164; // [rsp+188h] [rbp-358h]
  void *v165; // [rsp+1A0h] [rbp-340h] BYREF
  __int128 v166; // [rsp+1A8h] [rbp-338h]
  void *v167; // [rsp+1C0h] [rbp-320h] BYREF
  __int128 v168; // [rsp+1C8h] [rbp-318h]
  void *v169; // [rsp+1E0h] [rbp-300h] BYREF
  __int128 v170; // [rsp+1E8h] [rbp-2F8h]
  void *dest; // [rsp+200h] [rbp-2E0h] BYREF
  __int128 v172; // [rsp+208h] [rbp-2D8h]
  void *v173; // [rsp+220h] [rbp-2C0h] BYREF
  __int128 v174; // [rsp+228h] [rbp-2B8h]
  void *v175; // [rsp+240h] [rbp-2A0h] BYREF
  __int128 v176; // [rsp+248h] [rbp-298h]
  __int64 v177; // [rsp+260h] [rbp-280h] BYREF
  int v178; // [rsp+268h] [rbp-278h] BYREF
  _QWORD *v179; // [rsp+270h] [rbp-270h]
  char *v180; // [rsp+278h] [rbp-268h]
  int *v181; // [rsp+280h] [rbp-260h]
  unsigned __int64 v182; // [rsp+288h] [rbp-258h]
  void **v183; // [rsp+290h] [rbp-250h] BYREF
  void *v184[2]; // [rsp+298h] [rbp-248h] BYREF
  size_t v185[2]; // [rsp+2A8h] [rbp-238h]
  void *v186; // [rsp+2B8h] [rbp-228h] BYREF
  size_t v187[2]; // [rsp+2C0h] [rbp-220h]
  __int128 v188; // [rsp+2D0h] [rbp-210h] BYREF
  __int128 v189; // [rsp+2E0h] [rbp-200h]
  __int128 v190; // [rsp+2F0h] [rbp-1F0h]
  __int128 v191; // [rsp+300h] [rbp-1E0h]
  __int128 v192; // [rsp+310h] [rbp-1D0h]
  char *v193; // [rsp+320h] [rbp-1C0h] BYREF
  __int128 v194; // [rsp+328h] [rbp-1B8h]
  __int64 v195; // [rsp+338h] [rbp-1A8h]
  __int128 v196; // [rsp+340h] [rbp-1A0h]
  __int64 v197; // [rsp+350h] [rbp-190h]
  __int128 v198; // [rsp+358h] [rbp-188h]
  char v199[24]; // [rsp+368h] [rbp-178h] BYREF
  __int64 v200; // [rsp+380h] [rbp-160h]
  __int128 v201; // [rsp+388h] [rbp-158h]
  __int64 v202; // [rsp+398h] [rbp-148h]
  __int128 v203; // [rsp+3A0h] [rbp-140h]
  __int64 v204; // [rsp+3B0h] [rbp-130h]
  __int128 v205; // [rsp+3B8h] [rbp-128h]
  __int64 v206; // [rsp+3C8h] [rbp-118h]
  __int128 v207; // [rsp+3D0h] [rbp-110h]
  _BYTE v208[24]; // [rsp+3E0h] [rbp-100h] BYREF
  _BYTE v209[24]; // [rsp+3F8h] [rbp-E8h] BYREF
  _BYTE v210[24]; // [rsp+410h] [rbp-D0h] BYREF
  char v211[24]; // [rsp+428h] [rbp-B8h] BYREF
  __int64 v212; // [rsp+440h] [rbp-A0h]
  __int128 v213; // [rsp+448h] [rbp-98h]
  __int64 v214; // [rsp+458h] [rbp-88h]
  __int128 v215; // [rsp+460h] [rbp-80h]
  __int64 v216; // [rsp+470h] [rbp-70h]
  __int128 v217; // [rsp+478h] [rbp-68h]
  __int64 v218; // [rsp+488h] [rbp-58h]
  __int128 v219; // [rsp+490h] [rbp-50h]
  unsigned __int64 v220; // [rsp+4A8h] [rbp-38h]

  v138 = a1;
  v132 = a2;
  v139 = a3;
  v220 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 488) & 2) == 0 )
  {
    v6 = -1;
    sub_2DC20((__int64 *)(a3 + 16), "Unknown command");
    return v6;
  }
  v4 = (int *)(a4 + 16);
  v5 = v139 + 40;
  v137 = &v142;
  v131 = v138 + 368;
  unk_241E88(&v142, v138 + 368, v139 + 40);
  if ( !v142 )
  {
    sub_2DC20((__int64 *)(v139 + 16), "Cannot create transaction");
    v6 = -1;
    goto LABEL_12;
  }
  v193 = nullptr;
  v188 = -1;
  v189 = -1;
  v190 = -1;
  v191 = -1;
  v192 = -1;
  v195 = 0;
  v197 = 0;
  v194 = 0;
  v196 = 0;
  v198 = 0;
  sub_31930((__int64)v199, "history");
  v200 = 0;
  v202 = 0;
  v204 = 0;
  v206 = 0;
  v201 = 0;
  v203 = 0;
  v205 = 0;
  v207 = 0;
  sub_2D0E0((__int64 *)&v193, &v188, v4, 1);
  v153 = nullptr;
  v155 = nullptr;
  v157 = nullptr;
  v154 = 0;
  v156 = 0;
  v158 = 0;
  if ( !(unsigned __int8)sub_28B60(&v193, (__int64 *)&v153)
    || !(unsigned __int8)sub_2AD40((__int64)&v193, (__int64 *)&v155, v5)
    || !(unsigned __int8)sub_28F70((__int64)&v193, (__int64 *)&v157) )
  {
    goto LABEL_4;
  }
  v159 = nullptr;
  v160 = 0;
  sub_299F0((char **)&v159);
  v10 = s1;
  if ( (_QWORD)v160 )
    v10 = (const char *)v159;
  v134 = &v143;
  sub_318B0((__int64)&v143, v138, v10);
  if ( !v143 || !(unsigned __int8)sub_29560((__int64)&v193, v5, (__int64)&v143) )
    goto LABEL_98;
  unk_241E60(&v144, &v143, v5);
  if ( !v144 )
    goto LABEL_97;
  v178 = 0;
  v141 = (char *)&v178;
  v180 = (char *)&v178;
  v181 = &v178;
  v179 = nullptr;
  v182 = 0;
  v161 = nullptr;
  v163 = nullptr;
  v133 = (__int64 *)&v163;
  v162 = 0;
  v164 = 0;
  v163 = (void *)sub_1987B0(&v163, 0, 10240, 8);
  v165 = nullptr;
  v140 = (__int64 *)&v175;
  v166 = 0;
  while ( (unsigned __int8)unk_241E70(&v144, v5) )
  {
    v175 = nullptr;
    v176 = 0;
    v11 = sub_295D0(&v193, v140, (__int64)&v144, v5);
    v12 = (char *)v175;
    if ( !v11 )
    {
      if ( v175 )
      {
        v60 = v176;
        if ( (_QWORD)v176 )
        {
          v61 = 0;
          do
          {
            v62 = v61 + 1;
            sub_176520(&v12[32 * v61]);
            v12 = (char *)v175;
            v61 = v62;
          }
          while ( v60 != v62 );
        }
        *(_QWORD *)&v176 = 0;
        j__free(v12);
      }
      goto LABEL_83;
    }
    v13 = *((_QWORD *)v175 + 4 * SDWORD2(v191) + 1);
    *(_OWORD *)v185 = 0;
    *(_OWORD *)v184 = 0xFFFFFFFFFFFFFFFFLL;
    LODWORD(v173) = v13;
    *(_OWORD *)v187 = 0;
    v186 = nullptr;
    v183 = *((void ***)v175 + 4 * SDWORD2(v189) + 1);
    v184[0] = *((void **)v175 + 4 * SDWORD1(v189) + 1);
    v14 = (char *)v175 + 32 * (int)v191;
    if ( &v184[1] != (void **)(v14 + 8) )
    {
      v15 = *((_QWORD *)v14 + 2);
      if ( v15 > 1 )
      {
        v69 = *((_QWORD *)v14 + 1);
        src = (void *)(v15 - 1);
        n = v69;
        v184[1] = (void *)sub_1987B0(&v184[1], 0, v15, 1);
        v185[0] = v15;
        memmove(v184[1], (const void *)n, (size_t)src);
        *((_BYTE *)v184[1] + v15 - 1) = 0;
        v12 = (char *)v175;
      }
    }
    v16 = &v12[32 * SDWORD1(v191)];
    v17 = *((_QWORD *)v16 + 2);
    if ( v17 )
    {
      v18 = v17 - 1;
      v19 = v18;
      if ( v18 )
      {
        v20 = v187[0];
        v21 = *((void **)v16 + 1);
        v22 = v187[0] + v18;
        if ( !__CFADD__(v187[0], v18) )
          goto LABEL_32;
        if ( v187[0] <= 0x7FFFFFFFFFFFFFFELL )
        {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_32:
          v23 = (char *)v186;
          v24 = v187[0];
          if ( v187[1] < v22 )
          {
            v129.m128i_i64[0] = v187[0];
            src = v21;
            n = v22;
            v186 = (void *)sub_1987B0(&v186, v186, v22, 1);
            v23 = (char *)v186;
            v20 = v129.m128i_i64[0];
            v24 = v187[0];
            v21 = src;
            v22 = n;
          }
          v129.m128i_i64[0] = v20;
          src = v21;
          n = v22;
          memset(&v23[v24], 0, v22 - v24);
          v21 = src;
          v20 = v129.m128i_i64[0];
          v187[0] = n;
        }
        else if ( v187[0] != 0x7FFFFFFFFFFFFFFFLL )
        {
          v187[0] = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)v186 + v20, v21, v19);
      }
    }
    v25 = v164;
    v26 = v183;
    v27 = v163;
    if ( *((_QWORD *)&v164 + 1) < (unsigned __int64)(v164 + 1) )
    {
      v163 = (void *)sub_1987B0(v133, v163, v164 + 1, 8);
      v27 = v163;
      v25 = v164;
    }
    v27[v25] = v26;
    v28 = v179;
    *(_QWORD *)&v164 = v164 + 1;
    if ( !v179 )
    {
      v36 = v182;
      v33 = (__int64)v141;
      goto LABEL_51;
    }
    v29 = v179;
    v30 = v141;
    do
    {
      while ( 1 )
      {
        v31 = v29[2];
        v32 = v29[3];
        if ( *((_DWORD *)v29 + 8) < (unsigned int)v173 )
          break;
        v30 = (char *)v29;
        v29 = (_QWORD *)v29[2];
        if ( !v31 )
          goto LABEL_43;
      }
      v29 = (_QWORD *)v29[3];
    }
    while ( v32 );
LABEL_43:
    if ( v30 == v141 || (unsigned int)v173 < *((_DWORD *)v30 + 8) )
    {
      v33 = (__int64)v141;
      do
      {
        while ( 1 )
        {
          v34 = v28[2];
          v35 = v28[3];
          if ( *((_DWORD *)v28 + 8) < (unsigned int)v173 )
            break;
          v33 = (__int64)v28;
          v28 = (_QWORD *)v28[2];
          if ( !v34 )
            goto LABEL_49;
        }
        v28 = (_QWORD *)v28[3];
      }
      while ( v35 );
LABEL_49:
      v36 = v182;
      if ( (char *)v33 == v141 || (unsigned int)v173 < *(_DWORD *)(v33 + 32) )
      {
LABEL_51:
        *(_QWORD *)v208 = &v173;
        v33 = sub_2CED0(&v177, v33, (unsigned int **)v208);
      }
      *(_DWORD *)(v33 + 36) = v36;
      si128 = _mm_load_si128((const __m128i *)&v183);
      v38 = v185[0];
      *(_OWORD *)v209 = 0;
      *(_QWORD *)&v208[16] = 0;
      *(__m128i *)v208 = si128;
      if ( v185[0] )
      {
        *(_QWORD *)&v208[16] = sub_198760(v185[0]);
        *(_QWORD *)&v209[8] = v38;
        memcpy(*(void **)&v208[16], v184[1], v38);
        *(_QWORD *)v209 = v38;
      }
      v39 = v187[0];
      *(_QWORD *)&v209[16] = 0;
      *(_OWORD *)v210 = 0;
      if ( v187[0] )
      {
        *(_QWORD *)&v209[16] = sub_198760(v187[0]);
        *(_QWORD *)&v210[8] = v39;
        memcpy(*(void **)&v209[16], v186, v39);
        *(_QWORD *)v210 = v39;
      }
      v40 = v162;
      v41 = (char *)v161;
      if ( *((_QWORD *)&v162 + 1) < (unsigned __int64)(v162 + 1) )
      {
        v161 = (void *)sub_1987B0(&v161, v161, v162 + 1, 64);
        v41 = (char *)v161;
        v40 = v162;
      }
      v42 = &v41[64 * v40];
      *(__m128i *)v42 = _mm_load_si128((const __m128i *)v208);
      v43 = _mm_loadu_si128((const __m128i *)v209);
      *(_QWORD *)&v162 = v162 + 1;
      *((_QWORD *)v42 + 2) = *(_QWORD *)&v208[16];
      *(__m128i *)(v42 + 24) = v43;
      v44 = _mm_load_si128((const __m128i *)v210);
      *((_QWORD *)v42 + 5) = *(_QWORD *)&v209[16];
      v45 = v166;
      *((__m128i *)v42 + 3) = v44;
      v46 = v165;
      v47 = v183;
      if ( *((_QWORD *)&v166 + 1) < (unsigned __int64)(v45 + 1) )
      {
        v165 = (void *)sub_1987B0(&v165, v165, v45 + 1, 8);
        v46 = v165;
        v45 = v166;
      }
      v46[v45] = v47;
      *(_QWORD *)&v166 = v166 + 1;
      goto LABEL_64;
    }
    v48 = *((unsigned int *)v30 + 9);
    v49 = v183;
    v50 = (void ***)((char *)v161 + 64 * v48);
    if ( v183 < *v50 )
    {
      *v50 = v183;
      src = (void *)v48;
      v50[1] = (void **)v184[0];
      n = (size_t)v50;
      sub_2DCF0((__int64)(v50 + 2), (__int64)&v184[1]);
      v56 = v187[0];
      v57 = n;
      v48 = (unsigned __int64)src;
      if ( v187[0] )
      {
        v129.m128i_i64[0] = n;
        n = v187[0];
        v29 = (_QWORD *)sub_198760(v187[0]);
        memcpy(v29, v186, n);
        v57 = v129.m128i_i64[0];
        v48 = (unsigned __int64)src;
        v56 = n;
      }
      v58 = *(void **)(v57 + 40);
      v59 = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
      if ( v58 )
      {
        *(_QWORD *)(v57 + 48) = 0;
        src = (void *)v48;
        n = v57;
        v129 = v59;
        j__free(v58);
        v59 = _mm_load_si128(&v129);
        v48 = (unsigned __int64)src;
        v57 = n;
      }
      *(_QWORD *)(v57 + 40) = v29;
      *(__m128i *)(v57 + 48) = v59;
      v49 = v183;
    }
    v51 = (void ***)((char *)v165 + 8 * v48);
    if ( *v51 < v49 )
      *v51 = v49;
LABEL_64:
    if ( v186 )
    {
      v187[0] = 0;
      j__free(v186);
    }
    if ( v184[1] )
    {
      v185[0] = 0;
      j__free(v184[1]);
    }
    v52 = (char *)v175;
    if ( v175 )
    {
      v53 = v176;
      if ( (_QWORD)v176 )
      {
        v54 = 0;
        do
        {
          v55 = v54++;
          sub_176520(&v52[32 * v55]);
          v52 = (char *)v175;
        }
        while ( v53 != v54 );
      }
      *(_QWORD *)&v176 = 0;
      j__free(v52);
    }
  }
  v70 = v182;
  if ( !v182 )
  {
LABEL_106:
    v71 = (__int64 (*)())sub_2C870;
    if ( (_QWORD)v164 )
      v71 = sub_2C860;
    ((void (__fastcall *)(__int64 *, __int64))v71)(v137, v5);
    v72 = v165;
    *(_DWORD *)(v132 + 12) = v164;
    if ( v72 )
    {
      *(_QWORD *)&v166 = 0;
      j__free(v72);
    }
    if ( v163 )
    {
      *(_QWORD *)&v164 = 0;
      j__free(v163);
    }
    v73 = (char *)v161;
    if ( v161 )
    {
      v74 = v162;
      if ( (_QWORD)v162 )
      {
        v75 = 0;
        do
        {
          v76 = &v73[64 * v75];
          v77 = *((void **)v76 + 5);
          if ( v77 )
          {
            *((_QWORD *)v76 + 6) = 0;
            j__free(v77);
          }
          v78 = *((void **)v76 + 2);
          if ( v78 )
          {
            *((_QWORD *)v76 + 3) = 0;
            j__free(v78);
          }
          v73 = (char *)v161;
          ++v75;
        }
        while ( v74 != v75 );
      }
      *(_QWORD *)&v162 = 0;
      j__free(v73);
    }
    sub_2EF10(v179);
    sub_33A10(&v144);
    sub_32C50(v134);
    if ( v159 )
    {
      *(_QWORD *)&v160 = 0;
      j__free(v159);
    }
    if ( v157 )
    {
      *(_QWORD *)&v158 = 0;
      j__free(v157);
    }
    if ( v155 )
    {
      *(_QWORD *)&v156 = 0;
      j__free(v155);
    }
    if ( v153 )
    {
      *(_QWORD *)&v154 = 0;
      j__free(v153);
    }
    v6 = 0;
    goto LABEL_11;
  }
  v167 = nullptr;
  v79 = (v182 + 7) >> 3;
  v168 = 0;
  v169 = nullptr;
  v170 = 0;
  if ( v79 )
  {
    v167 = (void *)sub_1987B0(&v167, 0, (v182 + 7) >> 3, 1);
    v82 = v168;
    if ( (unsigned __int64)v168 < v79 )
    {
      *((_BYTE *)v167 + v168) = 0;
      v83 = v82 + 1;
      if ( v83 < v79 )
      {
        v84 = v141;
        do
          *((_BYTE *)v167 + v83++) = 0;
        while ( v79 != v83 );
        v141 = v84;
      }
    }
    *(_QWORD *)&v168 = (v70 + 7) >> 3;
    v79 = v170;
    *(_DWORD *)v208 = 0;
    if ( v70 < (unsigned __int64)v170 )
      goto LABEL_145;
    if ( (unsigned __int64)v170 < v70 )
      goto LABEL_132;
  }
  else
  {
    *(_DWORD *)v208 = 0;
LABEL_132:
    v80 = v169;
    if ( v208 >= v169 && v208 < (char *)v169 + 4 * *((_QWORD *)&v170 + 1) )
    {
      if ( *((_QWORD *)&v170 + 1) < v70 )
      {
        v128 = (void *)sub_1987B0(&v169, v169, v70, 4);
        v79 = v170;
        v169 = v128;
        v80 = v128;
        if ( (unsigned __int64)v170 >= v70 )
          goto LABEL_145;
      }
      v81 = v141;
      while ( 1 )
      {
        v80[v79++] = 0;
        if ( v70 == v79 )
          break;
        v80 = v169;
      }
LABEL_138:
      v141 = v81;
      goto LABEL_145;
    }
    if ( *((_QWORD *)&v170 + 1) >= v70
      || (v127 = (void *)sub_1987B0(&v169, v169, v70, 4),
          v79 = v170,
          v169 = v127,
          v80 = v127,
          (unsigned __int64)v170 < v70) )
    {
      v126 = v141;
      while ( 1 )
      {
        v80[v79++] = *(_DWORD *)v208;
        if ( v70 == v79 )
          break;
        v80 = v169;
      }
      v81 = v126;
      goto LABEL_138;
    }
LABEL_145:
    *(_QWORD *)&v170 = v70;
  }
  v85 = (__int64)v180;
  dest = nullptr;
  v172 = 0;
  if ( v180 == v141 )
    goto LABEL_249;
  do
  {
    sub_2AAE0((__int64 *)&dest);
    v85 = std::_Rb_tree_increment(v85, " OR fk_func = %u AND (id < %llu OR id > %llu)", v86, v87, v88);
  }
  while ( (char *)v85 != v141 );
  v89 = v172;
  if ( (unsigned __int64)v172 <= 1 )
  {
LABEL_249:
    if ( !unk_2439A0 )
      sub_198E10(1709);
LABEL_271:
    BUG();
  }
  v90 = (_QWORD *)(&dword_0 + 1);
  v91 = nullptr;
  if ( (unsigned __int64)(v172 - 1) > 4 )
  {
    v140 = (__int64 *)(v172 - 5);
    memmove(dest, (char *)dest + 4, v172 - 5);
    v91 = v140;
    v90 = (__int64 *)(v89 - 4);
  }
  v92 = dest;
  if ( *((_QWORD *)&v172 + 1) < (unsigned __int64)v90 )
  {
    n = (size_t)v91;
    v140 = v90;
    dest = (void *)sub_1987B0(&dest, dest, v90, 1);
    v91 = (__int64 *)n;
    v92 = dest;
    v90 = v140;
  }
  *(_QWORD *)&v172 = v90;
  *((_BYTE *)v91 + (_QWORD)v92) = 0;
  v93 = (char *)dest;
  if ( !(_QWORD)v172 )
  {
    if ( *((_QWORD *)&v172 + 1) > 0x26u )
    {
      *(_QWORD *)&v172 = 39;
      *((_BYTE *)dest + 38) = 0;
      goto LABEL_157;
    }
    v95 = 0;
    v94 = &qword_20 + 7;
    v96 = &qword_20 + 6;
LABEL_237:
    src = v96;
    n = v95;
    v140 = v94;
    dest = (void *)sub_1987B0(&dest, dest, v94, 1);
    v96 = src;
    v93 = (char *)dest;
    v95 = n;
    v94 = v140;
    goto LABEL_155;
  }
  v94 = (__int64 *)(v172 + 38);
  v95 = v172 - 1;
  v96 = (void *)(v172 + 37);
  if ( *((_QWORD *)&v172 + 1) < (unsigned __int64)(v172 + 38) )
    goto LABEL_237;
LABEL_155:
  *(_QWORD *)&v172 = v94;
  *((_BYTE *)v96 + (_QWORD)v93) = 0;
  v93 = (char *)dest;
  if ( v95 )
    memmove((char *)dest + 38, dest, v95);
LABEL_157:
  *(__m128i *)v93 = _mm_load_si128((const __m128i *)&xmmword_1B6AE0);
  *((__m128i *)v93 + 1) = _mm_load_si128((const __m128i *)&xmmword_1B6AF0);
  *(_QWORD *)(v93 + 30) = 0x2045524548572079LL;
  v97 = v172;
  if ( (_QWORD)v172 )
  {
    v98 = v172 + 15;
    v99 = (__int64 *)(v172 + 16);
    v97 = v172 - 1;
  }
  else
  {
    v99 = (_QWORD *)(&word_10 + 1);
    v98 = 16;
  }
  v100 = dest;
  if ( *((_QWORD *)&v172 + 1) < (unsigned __int64)v99 )
  {
    n = v98;
    v140 = v99;
    dest = (void *)sub_1987B0(&dest, dest, v99, 1);
    v98 = n;
    v100 = dest;
    v99 = v140;
  }
  v101 = _mm_load_si128((const __m128i *)&xmmword_1B6B00);
  *(_QWORD *)&v172 = v99;
  v102 = s1;
  v100[v98] = 0;
  *(__m128i *)((char *)dest + v97) = v101;
  if ( (_QWORD)v172 )
    v102 = (const char *)dest;
  n = (size_t)&v145;
  sub_318B0((__int64)&v145, v138, v102);
  if ( !v145 )
    goto LABEL_200;
  unk_241E60(&v146, &v145, v5);
  if ( !v146 )
    goto LABEL_199;
  while ( 2 )
  {
    if ( (unsigned __int8)unk_241E70(&v146, v5) )
    {
      if ( !(unsigned __int8)sub_2F910(v5, (__int64)&v146, (__int64)"Uu", v208, &v175) )
        goto LABEL_199;
      v103 = v179;
      if ( v179 )
      {
        v104 = (__int64)v141;
        do
        {
          while ( 1 )
          {
            v105 = v103[2];
            v106 = v103[3];
            if ( *((_DWORD *)v103 + 8) < (unsigned int)v175 )
              break;
            v104 = (__int64)v103;
            v103 = (_QWORD *)v103[2];
            if ( !v105 )
              goto LABEL_172;
          }
          v103 = (_QWORD *)v103[3];
        }
        while ( v106 );
LABEL_172:
        if ( (char *)v104 == v141 || (unsigned int)v175 < *(_DWORD *)(v104 + 32) )
        {
LABEL_174:
          v183 = &v175;
          v104 = sub_2CED0(&v177, v104, (unsigned int **)&v183);
        }
        v107 = *(unsigned int *)(v104 + 36);
        v108 = *(_QWORD *)v208;
        if ( *(_QWORD *)v208 < *((_QWORD *)v161 + 8 * v107) )
        {
          *((_BYTE *)v167 + (v107 >> 3)) |= 1 << (v107 & 7);
          v108 = *(_QWORD *)v208;
        }
        if ( *((_QWORD *)v165 + v107) < v108 )
        {
          v109 = (char *)v169 + 4 * v107;
          if ( !*v109 )
            *v109 = v108;
        }
        continue;
      }
      v104 = (__int64)v141;
      goto LABEL_174;
    }
    break;
  }
  memset(v208, 0, sizeof(v208));
  memset(v209, 0, sizeof(v209));
  memset(v210, 0, sizeof(v210));
  sub_31930((__int64)v211, "history");
  v212 = 0;
  v214 = 0;
  v216 = 0;
  v218 = 0;
  v213 = 0;
  v215 = 0;
  v217 = 0;
  v219 = 0;
  sub_2ABA0(v208, v133);
  v173 = nullptr;
  v174 = 0;
  sub_28F70((__int64)v208, (__int64 *)&v173);
  v175 = nullptr;
  v176 = 0;
  sub_299F0((char **)&v175);
  v111 = s1;
  if ( (_QWORD)v176 )
    v111 = (const char *)v175;
  v112 = v138;
  src = &v147;
  sub_318B0((__int64)&v147, v138, v111);
  if ( !v147 || !(unsigned __int8)unk_241E68(src, v5) )
    goto LABEL_194;
  v140 = &v148;
  sub_318B0((__int64)&v148, v112, "UPDATE history SET name = ?, ea = ?, metadata = ? WHERE id = ? ");
  if ( !v148 )
    goto LABEL_193;
  v133 = &v149;
  sub_318B0((__int64)&v149, v112, "UPDATE funcs SET name = ?, ea = ?, metadata = ? WHERE id = ?");
  if ( !v149 )
    goto LABEL_192;
  v129.m128i_i64[0] = (__int64)&v150;
  sub_318B0((__int64)&v150, v112, "DELETE FROM funcs WHERE id = ?");
  if ( !v150 )
    goto LABEL_191;
  v130 = &v151;
  sub_318B0((__int64)&v151, v112, "DELETE FROM calcrel_hash WHERE fk_func = ?");
  if ( !v151 )
    goto LABEL_190;
  sub_318B0((__int64)&v152, v112, "DELETE FROM func_freqs WHERE fk_func = ?");
  if ( !v152 )
    goto LABEL_189;
  v113 = (__int64)v180;
  if ( v180 == v141 )
  {
LABEL_261:
    sub_32C50(&v152);
    sub_32C50(v130);
    sub_32C50(v129.m128i_i64[0]);
    sub_32C50(v133);
    sub_32C50(v140);
    sub_32C50(src);
    if ( v175 )
    {
      *(_QWORD *)&v176 = 0;
      j__free(v175);
    }
    if ( v173 )
    {
      *(_QWORD *)&v174 = 0;
      j__free(v173);
    }
    sub_30780((char **)v208);
    sub_33A10(&v146);
    sub_32C50((_QWORD *)n);
    if ( dest )
    {
      *(_QWORD *)&v172 = 0;
      j__free(dest);
    }
    if ( v169 )
    {
      *(_QWORD *)&v170 = 0;
      j__free(v169);
    }
    if ( v167 )
    {
      *(_QWORD *)&v168 = 0;
      j__free(v167);
    }
    goto LABEL_106;
  }
  while ( 2 )
  {
    LODWORD(v138) = *(_DWORD *)(v113 + 32);
    v120 = *(unsigned int *)(v113 + 36);
    v121 = *((unsigned int *)v169 + v120);
    if ( v120 >= (unsigned __int64)v162 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1710);
      goto LABEL_271;
    }
    v122 = *((unsigned __int8 *)v167 + (v120 >> 3));
    if ( _bittest(&v122, *(_DWORD *)(v113 + 36) & 7) )
    {
      v114 = (char *)v161 + 64 * v120;
      v115 = v114[1];
      v116 = v114[3];
      v117 = v114 + 5;
      if ( (_DWORD)v121 )
      {
        v118 = s1;
        if ( v116 )
          v118 = (const char *)v114[2];
        if ( !(unsigned __int8)sub_2F9D0(v5, (__int64)v140, (__int64)"sUBu", v118, v115, v117, v121) )
          goto LABEL_189;
        v110 = (const char *)v5;
        v119 = unk_241E68(v140, v5);
      }
      else
      {
        v125 = s1;
        if ( v116 )
          v125 = (const char *)v114[2];
        if ( !(unsigned __int8)sub_2F9D0(v5, (__int64)v133, (__int64)"sUBu", v125, v115, v117, (unsigned int)v138) )
          goto LABEL_189;
        v110 = (const char *)v5;
        v119 = unk_241E68(v133, v5);
      }
      if ( !v119 )
        goto LABEL_189;
      goto LABEL_228;
    }
    if ( !(_DWORD)v121 )
    {
      if ( !(unsigned __int8)sub_2F9D0(v5, (__int64)v130, (__int64)"u", (unsigned int)v138) )
        goto LABEL_189;
      if ( !(unsigned __int8)unk_241E68(v130, v5) )
        goto LABEL_189;
      if ( unk_241EA8(v131, v5) != 1 )
        goto LABEL_189;
      if ( !(unsigned __int8)sub_2F9D0(v5, (__int64)&v152, (__int64)"u", (unsigned int)v138) )
        goto LABEL_189;
      if ( !(unsigned __int8)unk_241E68(&v152, v5) )
        goto LABEL_189;
      if ( unk_241EA8(v131, v5) != 1 )
        goto LABEL_189;
      if ( !(unsigned __int8)sub_2F9D0(v5, v129.m128i_i64[0], (__int64)"u", (unsigned int)v138) )
        goto LABEL_189;
      if ( !(unsigned __int8)unk_241E68(v129.m128i_i64[0], v5) )
        goto LABEL_189;
      v110 = (const char *)v5;
      if ( unk_241EA8(v131, v5) != 1 )
        goto LABEL_189;
      goto LABEL_228;
    }
    *(_OWORD *)v184 = 0;
    v183 = nullptr;
    if ( (unsigned __int8)sub_2F9D0(v5, (__int64)v140, (__int64)"sUBu", s1, 0, &v183, v121) )
    {
      v110 = (const char *)v5;
      v123 = unk_241E68(v140, v5);
      v124 = (unsigned int *)v183;
      if ( !v123 )
        goto LABEL_257;
      if ( v183 )
      {
        v184[0] = nullptr;
        j__free(v183);
      }
LABEL_228:
      v113 = std::_Rb_tree_increment(v113, v110);
      if ( (char *)v113 == v141 )
        goto LABEL_261;
      continue;
    }
    break;
  }
  v124 = (unsigned int *)v183;
LABEL_257:
  if ( v124 )
  {
    v184[0] = nullptr;
    j__free(v124);
  }
LABEL_189:
  sub_32C50(&v152);
LABEL_190:
  sub_32C50(v130);
LABEL_191:
  sub_32C50(v129.m128i_i64[0]);
LABEL_192:
  sub_32C50(v133);
LABEL_193:
  sub_32C50(v140);
LABEL_194:
  sub_32C50(src);
  if ( v175 )
  {
    *(_QWORD *)&v176 = 0;
    j__free(v175);
  }
  if ( v173 )
  {
    *(_QWORD *)&v174 = 0;
    j__free(v173);
  }
  sub_30780((char **)v208);
LABEL_199:
  sub_33A10(&v146);
LABEL_200:
  sub_32C50((_QWORD *)n);
  if ( dest )
  {
    *(_QWORD *)&v172 = 0;
    j__free(dest);
  }
  if ( v169 )
  {
    *(_QWORD *)&v170 = 0;
    j__free(v169);
  }
  if ( v167 )
  {
    *(_QWORD *)&v168 = 0;
    j__free(v167);
  }
LABEL_83:
  if ( v165 )
  {
    *(_QWORD *)&v166 = 0;
    j__free(v165);
  }
  if ( v163 )
  {
    *(_QWORD *)&v164 = 0;
    j__free(v163);
  }
  v63 = (char *)v161;
  if ( v161 )
  {
    v64 = v162;
    if ( (_QWORD)v162 )
    {
      v65 = 0;
      do
      {
        v66 = &v63[64 * v65];
        v67 = *((void **)v66 + 5);
        v141 = v66;
        if ( v67 )
        {
          *((_QWORD *)v66 + 6) = 0;
          j__free(v67);
        }
        v68 = *((void **)v141 + 2);
        if ( v68 )
        {
          *((_QWORD *)v141 + 3) = 0;
          j__free(v68);
        }
        ++v65;
        v63 = (char *)v161;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v162 = 0;
    j__free(v63);
  }
  sub_2EF10(v179);
LABEL_97:
  sub_33A10(&v144);
LABEL_98:
  sub_32C50(v134);
  if ( v159 )
  {
    *(_QWORD *)&v160 = 0;
    j__free(v159);
  }
LABEL_4:
  if ( v157 )
  {
    *(_QWORD *)&v158 = 0;
    j__free(v157);
  }
  if ( v155 )
  {
    *(_QWORD *)&v156 = 0;
    j__free(v155);
  }
  if ( v153 )
  {
    *(_QWORD *)&v154 = 0;
    j__free(v153);
  }
  sub_2DC20((__int64 *)(v139 + 16), "Error executing query");
  unk_241E98(v137, v5);
  v6 = -1;
LABEL_11:
  sub_30780(&v193);
LABEL_12:
  v7 = (void (__fastcall ***)(_QWORD))v142;
  if ( v142 )
  {
    if ( (*(_DWORD *)(v142 + 8))-- == 1 )
      (**v7)(v7);
  }
  return v6;
}
