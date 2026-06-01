__int64 __fastcall sub_2B140(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r12
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  const double *v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // rsi
  _QWORD *v20; // rdi
  const void *v21; // r13
  __int64 v22; // r13
  const double *v23; // r14
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  const double *v28; // r15
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rbx
  const double *v32; // r15
  __int64 v33; // rdi
  _QWORD *v34; // rdx
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r13
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  char *v45; // rsi
  char *v46; // rdi
  __int64 v47; // rsi
  const double *v48; // r13
  __int64 v49; // r15
  const char *v50; // rax
  const char *v51; // rbx
  const char *v52; // rbp
  __int64 v53; // r12
  const char **v54; // rbx
  const double *v55; // r14
  const char *v56; // rsi
  const char *v57; // rdi
  __int64 v58; // rax
  const char *v59; // rax
  const char *v60; // rsi
  const char *v61; // rdi
  double *v62; // r11
  const char **v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r15
  unsigned __int64 v68; // r13
  size_t v69; // r9
  unsigned __int64 v70; // r13
  size_t v71; // r9
  unsigned __int64 v72; // r13
  size_t v73; // r9
  const char *v74; // rcx
  __m128i v75; // xmm0
  __int64 v76; // rax
  int v77; // r8d
  __int64 v78; // rdi
  const char *v79; // rdx
  char *v80; // r11
  char v81; // al
  char v82; // al
  char *v83; // r11
  __int64 v84; // rax
  __m128i *v85; // rdi
  __int64 v86; // r13
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __m128i *v90; // rcx
  char *v91; // r11
  __m128i *v92; // rbp
  __int64 *v93; // rdi
  __m128i *v94; // rax
  char *v95; // r11
  _QWORD *v96; // rax
  _QWORD *v97; // rsi
  _QWORD *v98; // rax
  _QWORD *v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rsi
  _QWORD *v108; // rax
  const void *v109; // rbx
  void *v110; // rax
  const void *v111; // rbx
  void *v112; // rax
  const void *v113; // rbx
  void *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // r13
  __int64 v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // r12
  __int64 v121; // rbp
  _QWORD *v122; // r14
  unsigned int v123; // [rsp+4h] [rbp-26Ch]
  __int64 v124; // [rsp+8h] [rbp-268h]
  char *v125; // [rsp+10h] [rbp-260h]
  __int32 v126; // [rsp+10h] [rbp-260h]
  char *v127; // [rsp+10h] [rbp-260h]
  char *v128; // [rsp+10h] [rbp-260h]
  char *v129; // [rsp+10h] [rbp-260h]
  char *v130; // [rsp+10h] [rbp-260h]
  char *v131; // [rsp+10h] [rbp-260h]
  char *v132; // [rsp+10h] [rbp-260h]
  char *v133; // [rsp+10h] [rbp-260h]
  char *v134; // [rsp+10h] [rbp-260h]
  char *v135; // [rsp+10h] [rbp-260h]
  char *v136; // [rsp+10h] [rbp-260h]
  _QWORD *v137; // [rsp+18h] [rbp-258h]
  bool dest; // [rsp+20h] [rbp-250h]
  char *desta; // [rsp+20h] [rbp-250h]
  char *destb; // [rsp+20h] [rbp-250h]
  char *destc; // [rsp+20h] [rbp-250h]
  double *deste; // [rsp+20h] [rbp-250h]
  char *destg; // [rsp+20h] [rbp-250h]
  char *destf; // [rsp+20h] [rbp-250h]
  double *desti; // [rsp+20h] [rbp-250h]
  double *destk; // [rsp+20h] [rbp-250h]
  double *destm; // [rsp+20h] [rbp-250h]
  const char **destd; // [rsp+20h] [rbp-250h]
  double *desth; // [rsp+20h] [rbp-250h]
  double *destj; // [rsp+20h] [rbp-250h]
  double *destl; // [rsp+20h] [rbp-250h]
  __int64 v152; // [rsp+28h] [rbp-248h]
  __m128i *v153; // [rsp+28h] [rbp-248h]
  __m128i *v154; // [rsp+28h] [rbp-248h]
  char *v155; // [rsp+30h] [rbp-240h]
  char *v156; // [rsp+30h] [rbp-240h]
  unsigned __int8 v157; // [rsp+42h] [rbp-22Eh]
  unsigned __int8 v158; // [rsp+43h] [rbp-22Dh]
  int v159; // [rsp+44h] [rbp-22Ch]
  _QWORD *v160; // [rsp+50h] [rbp-220h]
  __int64 v161; // [rsp+58h] [rbp-218h]
  __int64 v162; // [rsp+60h] [rbp-210h]
  _QWORD *v163; // [rsp+68h] [rbp-208h]
  unsigned __int64 *v164; // [rsp+80h] [rbp-1F0h] BYREF
  unsigned __int64 *v165; // [rsp+88h] [rbp-1E8h] BYREF
  unsigned __int64 *v166; // [rsp+90h] [rbp-1E0h] BYREF
  __m128 v167; // [rsp+98h] [rbp-1D8h] BYREF
  char *s1; // [rsp+A8h] [rbp-1C8h] BYREF
  __int128 v169; // [rsp+B0h] [rbp-1C0h]
  const double *v170; // [rsp+C8h] [rbp-1A8h] BYREF
  __int128 v171; // [rsp+D0h] [rbp-1A0h]
  void *v172; // [rsp+E8h] [rbp-188h]
  __int128 v173; // [rsp+F0h] [rbp-180h]
  char *s2; // [rsp+108h] [rbp-168h] BYREF
  __int128 v175; // [rsp+110h] [rbp-160h]
  const char *v176; // [rsp+128h] [rbp-148h] BYREF
  __int128 v177; // [rsp+130h] [rbp-140h]
  __m128i v178[2]; // [rsp+148h] [rbp-128h] BYREF
  _BYTE v179[200]; // [rsp+168h] [rbp-108h] BYREF
  unsigned __int64 v180; // [rsp+230h] [rbp-40h]

  v2 = (_QWORD *)a1[16];
  v180 = __readfsqword(0x28u);
  v169 = 0;
  s1 = nullptr;
  if ( !v2 )
    return 0;
  v3 = a1;
  v5 = a1 + 15;
  do
  {
    while ( 1 )
    {
      v6 = v2[2];
      v7 = v2[3];
      if ( v2[4] >= a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v6 );
LABEL_6:
  if ( a1 + 15 == v5 || a2 < v5[4] )
    return 0;
  v9 = a1[5] + 72LL * *((int *)v5 + 10);
  if ( &s1 != (char **)(v9 + 16) )
  {
    v10 = *(_QWORD *)(v9 + 24);
    if ( v10 > 1 )
    {
      v21 = *(const void **)(v9 + 16);
      s1 = (char *)qvector_reserve();
      *(_QWORD *)&v169 = v10;
      memmove(s1, v21, v10 - 1);
      s1[v10 - 1] = 0;
    }
  }
  v11 = (_QWORD *)a1[37];
  v12 = a1 + 36;
  v178[0] = (__m128i)a2;
  v13 = a1 + 36;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v11[2];
        v15 = v11[3];
        if ( v11[4] >= a2 )
          break;
        v11 = (_QWORD *)v11[3];
        if ( !v15 )
          goto LABEL_18;
      }
      v13 = v11;
      v11 = (_QWORD *)v11[2];
    }
    while ( v14 );
LABEL_18:
    if ( v12 != v13 && a2 >= v13[4] )
    {
      v158 = 1;
      goto LABEL_21;
    }
  }
  v163 = sub_246D0(v3 + 35, v13, (unsigned __int64 *)v178);
  v171 = 0;
  v170 = nullptr;
  v163[5] = 0xFFFFFFFFLL;
  v158 = sub_4CD10(v3[2], &v170, a2);
  if ( !v158 )
    goto LABEL_45;
  v16 = v170;
  if ( !(_QWORD)v171 )
  {
    v158 = 0;
    if ( v170 )
      goto LABEL_55;
    goto LABEL_21;
  }
  v172 = nullptr;
  v173 = 0;
  if ( 88LL * (_QWORD)v171 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v17 < v18 + 1 )
      {
        v172 = (void *)qvector_reserve();
        v2 = v172;
        v18 = v173;
      }
      v19 = (char *)nptr;
      v20 = &v2[3 * v18];
      *v20 = 0;
      *(_OWORD *)(v20 + 1) = 0;
      *(_QWORD *)&v173 = v173 + 1;
      if ( *((_QWORD *)v16 + 5) )
        v19 = *((char **)v16 + 4);
      sub_1CE20(v20, v19);
      v16 += 11;
      if ( v16 == &v170[11 * (_QWORD)v171] )
        break;
      v17 = *((_QWORD *)&v173 + 1);
      v18 = v173;
      v2 = v172;
    }
  }
  v22 = v3[3];
  memset(v179, 0, sizeof(v179));
  if ( !*(_QWORD *)(v22 + 56) || netnode_supfirst() == -1 )
    goto LABEL_35;
  if ( !*(_QWORD *)(v22 + 56) )
  {
LABEL_256:
    sub_16850();
LABEL_257:
    sub_16850();
    goto LABEL_258;
  }
  if ( netnode_supval() <= 199 )
    goto LABEL_35;
  v123 = 1;
  v157 = 0;
  v137 = v3 + 30;
  while ( 1 )
  {
    s2 = nullptr;
    v175 = 0;
    if ( v157 )
    {
      if ( *(_DWORD *)&v179[16] != v159 )
        goto LABEL_35;
      goto LABEL_63;
    }
    v43 = v3[3];
    v44 = v123 - 1;
    if ( v44 >= *(_QWORD *)(v43 + 56) )
    {
      sub_16850();
      goto LABEL_256;
    }
    if ( !(unsigned __int8)sub_34510(&s2, *(_QWORD *)(*(_QWORD *)(v43 + 48) + 8 * v44), *(unsigned int *)&v179[16], 86) )
    {
      v157 = 0;
      goto LABEL_78;
    }
    if ( (_QWORD)v175 )
    {
      v45 = s2;
      v46 = (char *)nptr;
      if ( (_QWORD)v169 )
LABEL_90:
        v46 = s1;
      if ( strcmp(v46, v45) )
        goto LABEL_78;
      goto LABEL_92;
    }
    v45 = (char *)nptr;
    if ( (_QWORD)v169 )
      goto LABEL_90;
LABEL_92:
    v159 = *(_DWORD *)&v179[16];
LABEL_63:
    v33 = v3[3];
    v176 = nullptr;
    v177 = 0;
    memset(v178, 0, 24);
    if ( !(unsigned __int8)sub_346A0(v33, &v176, v123, *(unsigned int *)&v179[20], 1, 0)
      || (v157 = sub_34480(v3[3], v178, v123, *(unsigned int *)&v179[28])) == 0 )
    {
      v34 = (_QWORD *)v3[31];
      if ( v34 )
      {
        v35 = v137;
        do
        {
          while ( 1 )
          {
            v36 = v34[2];
            v37 = v34[3];
            if ( v34[4] >= *(_QWORD *)&v179[168] )
              break;
            v34 = (_QWORD *)v34[3];
            if ( !v37 )
              goto LABEL_70;
          }
          v35 = v34;
          v34 = (_QWORD *)v34[2];
        }
        while ( v36 );
LABEL_70:
        if ( v35 != v137 && *(_QWORD *)&v179[168] >= v35[4] )
          goto LABEL_73;
      }
      else
      {
        v35 = v137;
      }
      v164 = (unsigned __int64 *)&v179[168];
      v35 = sub_16E80(v3 + 29, v35, &v164);
LABEL_73:
      *((_DWORD *)v35 + 10) = -1;
      if ( v178[0].m128i_i64[0] )
      {
        v178[0].m128i_i64[1] = 0;
        qfree();
      }
      if ( v176 )
      {
        *(_QWORD *)&v177 = 0;
        qfree();
      }
      v157 = v158;
LABEL_78:
      if ( s2 )
        goto LABEL_79;
      goto LABEL_80;
    }
    v47 = v171;
    v48 = &v170[11 * v171];
    if ( !(88LL * (_QWORD)v171) )
      goto LABEL_153;
    v49 = v177;
    v50 = nptr;
    v51 = nptr;
    v160 = v3;
    v161 = a2;
    v52 = v176;
    if ( (_QWORD)v177 )
      v50 = v176;
    v162 = v171;
    v53 = v178[0].m128i_i64[1];
    if ( v178[0].m128i_i64[1] )
      v51 = (const char *)v178[0].m128i_i64[0];
    v152 = v178[0].m128i_i64[0];
    v125 = (char *)v50;
    v155 = (char *)v51;
    v54 = (const char **)v172;
    v55 = v170;
    dest = (v179[165] & 0x10) != 0;
    while ( 1 )
    {
      v58 = *((_QWORD *)v55 + 2);
      if ( v49 )
      {
        v56 = v52;
        v57 = nptr;
        if ( !v58 )
          goto LABEL_101;
      }
      else if ( !v58 )
      {
        goto LABEL_105;
      }
      v57 = *((const char **)v55 + 1);
      v56 = v125;
LABEL_101:
      if ( strcmp(v57, v56) )
        goto LABEL_102;
LABEL_105:
      v59 = v54[1];
      if ( v53 )
      {
        v60 = (const char *)v152;
        v61 = nptr;
        if ( !v59 )
          goto LABEL_108;
        goto LABEL_107;
      }
      if ( !v59 )
        break;
LABEL_107:
      v61 = *v54;
      v60 = v155;
LABEL_108:
      if ( !strcmp(v61, v60) )
        break;
LABEL_102:
      v55 += 11;
      v54 += 3;
      if ( v55 == v48 )
      {
        v47 = v162;
        v3 = v160;
        a2 = v161;
LABEL_153:
        v98 = (_QWORD *)v3[31];
        if ( v98 )
        {
          v99 = v137;
          do
          {
            while ( 1 )
            {
              v100 = v98[2];
              v101 = v98[3];
              if ( v98[4] >= *(_QWORD *)&v179[168] )
                break;
              v98 = (_QWORD *)v98[3];
              if ( !v101 )
                goto LABEL_158;
            }
            v99 = v98;
            v98 = (_QWORD *)v98[2];
          }
          while ( v100 );
LABEL_158:
          if ( v99 != v137 && *(_QWORD *)&v179[168] >= v99[4] )
            goto LABEL_161;
        }
        else
        {
          v99 = v137;
        }
        v167.m128_u64[0] = (unsigned __int64)&v179[168];
        v102 = sub_16E80(v3 + 29, v99, (unsigned __int64 **)&v167);
        v47 = v171;
        v99 = v102;
LABEL_161:
        *((_DWORD *)v99 + 10) = -1;
        goto LABEL_162;
      }
    }
    if ( ((*((_BYTE *)v55 + 81) & 0x10) != 0) != dest )
      goto LABEL_102;
    v3 = v160;
    v62 = (double *)v55;
    a2 = v161;
    v63 = v54;
    v64 = v160[21];
    v65 = v160[20];
    v126 = v64;
    if ( v160[22] < (unsigned __int64)(v64 + 1) )
    {
      deste = v62;
      v104 = qvector_reserve();
      v160[20] = v104;
      v64 = v160[21];
      v65 = v104;
      v62 = deste;
    }
    v66 = 392 * v64;
    v67 = v65 + v66;
    *(_QWORD *)(v67 + 16) = 0;
    *(_QWORD *)(v67 + 40) = 0;
    *(_OWORD *)(v67 + 24) = 0;
    *(_QWORD *)(v67 + 64) = 0;
    *(_OWORD *)(v67 + 48) = 0;
    *(_QWORD *)(v67 + 112) = 0;
    *(_QWORD *)(v67 + 144) = 0;
    *(_QWORD *)(v67 + 168) = 0;
    *(_QWORD *)(v67 + 360) = 0;
    *(_OWORD *)(v67 + 72) = 0;
    *(_OWORD *)(v67 + 96) = 0;
    *(_OWORD *)(v67 + 120) = 0;
    *(_OWORD *)(v67 + 152) = 0;
    memset(
      (void *)((v65 + v66 + 176) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v65 + (_DWORD)v66 - (((_DWORD)v65 + (_DWORD)v66 + 176) & 0xFFFFFFF8) + 368) >> 3));
    *(_OWORD *)(v67 + 376) = 0;
    *(_QWORD *)(v67 + 368) = 0;
    ++v160[21];
    *(_QWORD *)v67 = v161;
    *(double *)(v67 + 8) = *v62;
    if ( (double *)(v65 + v66 + 16) != v62 + 1 )
    {
      v68 = *((_QWORD *)v62 + 2);
      if ( v68 && (v69 = v68 - 1, v68 != 1) )
      {
        v113 = *((const void **)v62 + 1);
        v114 = *(void **)(v67 + 16);
        if ( *(_QWORD *)(v67 + 32) < v68 )
        {
          destl = v62;
          v114 = (void *)qvector_reserve();
          v69 = v68 - 1;
          v62 = destl;
          *(_QWORD *)(v67 + 16) = v114;
        }
        *(_QWORD *)(v67 + 24) = v68;
        destm = v62;
        memmove(v114, v113, v69);
        v62 = destm;
        *(_BYTE *)(*(_QWORD *)(v67 + 16) + v68 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v67 + 24) = 0;
      }
    }
    if ( (double *)(v67 + 40) != v62 + 4 )
    {
      v70 = *((_QWORD *)v62 + 5);
      if ( v70 && (v71 = v70 - 1, v70 != 1) )
      {
        v111 = *((const void **)v62 + 4);
        v112 = *(void **)(v67 + 40);
        if ( *(_QWORD *)(v67 + 56) < v70 )
        {
          destj = v62;
          v112 = (void *)qvector_reserve();
          v71 = v70 - 1;
          v62 = destj;
          *(_QWORD *)(v67 + 40) = v112;
        }
        *(_QWORD *)(v67 + 48) = v70;
        destk = v62;
        memmove(v112, v111, v71);
        v62 = destk;
        *(_BYTE *)(*(_QWORD *)(v67 + 40) + v70 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v67 + 48) = 0;
      }
    }
    if ( (double *)(v67 + 64) != v62 + 7 )
    {
      v72 = *((_QWORD *)v62 + 8);
      if ( v72 && (v73 = v72 - 1, v72 != 1) )
      {
        v109 = *((const void **)v62 + 7);
        v110 = *(void **)(v67 + 64);
        if ( *(_QWORD *)(v67 + 80) < v72 )
        {
          desth = v62;
          v110 = (void *)qvector_reserve();
          v73 = v72 - 1;
          v62 = desth;
          *(_QWORD *)(v67 + 64) = v110;
        }
        *(_QWORD *)(v67 + 72) = v72;
        desti = v62;
        memmove(v110, v109, v73);
        v62 = desti;
        *(_BYTE *)(*(_QWORD *)(v67 + 64) + v72 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v67 + 72) = 0;
      }
    }
    v74 = nptr;
    *(_DWORD *)(v67 + 88) = *((_DWORD *)v62 + 20);
    *(__m128i *)(v67 + 168) = _mm_load_si128((const __m128i *)v179);
    *(__m128i *)(v67 + 184) = _mm_load_si128((const __m128i *)&v179[16]);
    *(__m128i *)(v67 + 200) = _mm_load_si128((const __m128i *)&v179[32]);
    *(__m128i *)(v67 + 216) = _mm_load_si128((const __m128i *)&v179[48]);
    *(__m128i *)(v67 + 232) = _mm_load_si128((const __m128i *)&v179[64]);
    *(__m128i *)(v67 + 248) = _mm_load_si128((const __m128i *)&v179[80]);
    *(__m128i *)(v67 + 264) = _mm_load_si128((const __m128i *)&v179[96]);
    *(__m128i *)(v67 + 280) = _mm_load_si128((const __m128i *)&v179[112]);
    *(__m128i *)(v67 + 296) = _mm_load_si128((const __m128i *)&v179[128]);
    *(__m128i *)(v67 + 312) = _mm_load_si128((const __m128i *)&v179[144]);
    *(__m128i *)(v67 + 328) = _mm_load_si128((const __m128i *)&v179[160]);
    *(__m128i *)(v67 + 344) = _mm_load_si128((const __m128i *)&v179[176]);
    v75 = _mm_loadu_si128((const __m128i *)(v67 + 376));
    *(_QWORD *)(v67 + 360) = *(_QWORD *)&v179[192];
    v76 = *(_QWORD *)(v67 + 368);
    *(_QWORD *)(v67 + 368) = v178[0].m128i_i64[0];
    v77 = *(_DWORD *)&v179[168];
    *(__m128i *)(v67 + 376) = _mm_loadu_si128((const __m128i *)&v178[0].m128i_u64[1]);
    v78 = *v160;
    v178[0].m128i_i64[0] = v76;
    *(__m128i *)((char *)v178 + 8) = v75;
    v167 = _mm_loadh_ps(v62);
    if ( *((_QWORD *)v62 + 2) )
      v74 = *((const char **)v62 + 1);
    v79 = nptr;
    if ( (_QWORD)v169 )
      LODWORD(v79) = (_DWORD)s1;
    desta = (char *)v62;
    sub_58110(
      v78,
      (unsigned int)"oid_ea_t::load_class_methods %s.%s(%a) ACC_=%x\n",
      (_DWORD)v79,
      (_DWORD)v74,
      v77,
      *((_DWORD *)v62 + 20));
    v80 = desta;
    if ( (desta[81] & 5) == 0 )
    {
      v81 = sub_4D780(v160[2], v67 + 96, v161, *(_QWORD *)desta);
      v80 = desta;
      if ( !v81 )
      {
        v105 = v160[21];
        if ( v105 )
        {
          v115 = v105 - 1;
          v160[21] = v115;
          v116 = v160[20] + 392 * v115;
          v117 = (_QWORD *)v116;
          if ( *(_QWORD *)(v116 + 368) )
          {
            *(_QWORD *)(v116 + 376) = 0;
            qfree();
            v80 = desta;
          }
          v118 = v117[18];
          if ( v118 )
          {
            if ( v117[19] )
            {
              v131 = v80;
              v119 = v117[19];
              destd = v63;
              v120 = 0;
              v121 = 0;
              do
              {
                v122 = (_QWORD *)(v118 + v120);
                if ( *(_QWORD *)(v118 + v120 + 56) )
                {
                  v122[8] = 0;
                  qfree();
                }
                if ( v122[4] )
                {
                  v122[5] = 0;
                  qfree();
                }
                if ( v122[1] )
                {
                  v122[2] = 0;
                  qfree();
                }
                ++v121;
                v118 = v117[18];
                v120 += 120;
              }
              while ( v119 != v121 );
              v80 = v131;
              v63 = destd;
              a2 = v161;
              v3 = v160;
            }
            v117[19] = 0;
            v132 = v80;
            qfree();
            v80 = v132;
          }
          if ( v117[14] )
          {
            v117[15] = 0;
            v133 = v80;
            qfree();
            v80 = v133;
          }
          if ( v117[8] )
          {
            v117[9] = 0;
            v134 = v80;
            qfree();
            v80 = v134;
          }
          if ( v117[5] )
          {
            v117[6] = 0;
            v135 = v80;
            qfree();
            v80 = v135;
          }
          if ( v117[2] )
          {
            v117[3] = 0;
            v136 = v80;
            qfree();
            v80 = v136;
          }
        }
        if ( *(_BYTE *)(v3[2] + 56LL) )
          goto LABEL_248;
        v130 = v80;
        sub_1F510(v3 + 23, (const __m128i *)&v167)->m128i_i32[0] = -1;
        v106 = (_QWORD *)v3[31];
        v95 = v130;
        if ( v106 )
        {
          v107 = v3 + 30;
          do
          {
            if ( v106[4] < *(_QWORD *)&v179[168] )
            {
              v106 = (_QWORD *)v106[3];
            }
            else
            {
              v107 = v106;
              v106 = (_QWORD *)v106[2];
            }
          }
          while ( v106 );
          if ( v107 != v3 + 30 && *(_QWORD *)&v179[168] >= v107[4] )
            goto LABEL_207;
        }
        else
        {
          v107 = v3 + 30;
        }
        v165 = (unsigned __int64 *)&v179[168];
        v108 = sub_16E80(v3 + 29, v107, &v165);
        v95 = v130;
        v107 = v108;
LABEL_207:
        *((_DWORD *)v107 + 10) = -1;
        goto LABEL_184;
      }
    }
    destb = v80;
    v82 = sub_4E3B0(v160[2], v67 + 136, v161, *(_QWORD *)v80);
    v83 = destb;
    if ( !v82 )
    {
      sub_11340((__int64)"no variable table available for class %llX method %llX\n", v161, *(_QWORD *)destb);
      v83 = destb;
    }
    v84 = *(_QWORD *)(v67 + 152);
    if ( *(_WORD *)(v67 + 354) && !v84 )
    {
      destf = v83;
      sub_23800((__int64)v160, v67);
      sub_1BFC0((__int64)v160, (_QWORD *)v67);
      v84 = *(_QWORD *)(v67 + 152);
      v83 = destf;
    }
    v85 = *(__m128i **)(v67 + 144);
    v86 = 120 * v84;
    v87 = (unsigned __int64)v85 + 120 * v84;
    if ( v85 != (__m128i *)v87 )
    {
      v156 = v83;
      v88 = 0xEEEEEEEEEEEEEEEFLL * (v86 >> 3);
      if ( v88 )
      {
        _BitScanReverse64(&v89, v88);
        v153 = (__m128i *)v87;
        sub_2A980((__int64)v85, v87, 2LL * (int)v89);
        v90 = v153;
        v91 = v156;
        if ( v86 > 1920 )
        {
          sub_18640(v85, v85 + 120);
          v92 = v85 + 120;
          do
          {
            v93 = (__int64 *)v92;
            v92 = (__m128i *)((char *)v92 + 120);
            sub_18370(v93);
          }
          while ( v153 != v92 );
          a2 = v161;
          v83 = v156;
          goto LABEL_141;
        }
      }
      else
      {
        v154 = (__m128i *)v87;
        sub_2A980((__int64)v85, v87, -2);
        v90 = v154;
        v91 = v156;
      }
      destg = v91;
      sub_18640(v85, v90);
      v83 = destg;
    }
LABEL_141:
    destc = v83;
    sub_1FCC0((__int64)v160, v67);
    if ( *((_DWORD *)v163 + 10) == -1 )
      *((_DWORD *)v163 + 10) = v126;
    ++*((_DWORD *)v163 + 11);
    v94 = sub_1F510(v160 + 23, (const __m128i *)&v167);
    v95 = destc;
    v94->m128i_i32[0] = v126;
    v96 = (_QWORD *)v160[31];
    if ( !v96 )
    {
      v97 = v137;
      goto LABEL_182;
    }
    v97 = v137;
    do
    {
      if ( v96[4] < *(_QWORD *)&v179[168] )
      {
        v96 = (_QWORD *)v96[3];
      }
      else
      {
        v97 = v96;
        v96 = (_QWORD *)v96[2];
      }
    }
    while ( v96 );
    if ( v97 == v137 || *(_QWORD *)&v179[168] < v97[4] )
    {
LABEL_182:
      v166 = (unsigned __int64 *)&v179[168];
      v103 = sub_16E80(v160 + 29, v97, &v166);
      v95 = destc;
      v97 = v103;
    }
    *((_DWORD *)v97 + 10) = v126;
LABEL_184:
    if ( *((_QWORD *)v95 + 7) )
    {
      *((_QWORD *)v95 + 8) = 0;
      v127 = v95;
      qfree();
      v95 = v127;
    }
    if ( *((_QWORD *)v95 + 4) )
    {
      *((_QWORD *)v95 + 5) = 0;
      v128 = v95;
      qfree();
      v95 = v128;
    }
    if ( *((_QWORD *)v95 + 1) )
    {
      *((_QWORD *)v95 + 2) = 0;
      v129 = v95;
      qfree();
      v95 = v129;
    }
    memmove(v95, v95 + 88, (char *)&v170[11 * v171] - v95 - 88);
    *(_QWORD *)&v171 = v171 - 1;
    if ( *v63 )
    {
      v63[1] = nullptr;
      qfree();
    }
    memmove(v63, v63 + 3, (_BYTE *)v172 + 24 * v173 - (_BYTE *)v63 - 24);
    v47 = v171;
    *(_QWORD *)&v173 = v173 - 1;
LABEL_162:
    if ( !v47 )
    {
      if ( v178[0].m128i_i64[0] )
      {
        v178[0].m128i_i64[1] = 0;
        qfree();
      }
      if ( v176 )
      {
        *(_QWORD *)&v177 = 0;
        qfree();
      }
      if ( s2 )
      {
        *(_QWORD *)&v175 = 0;
        qfree();
      }
      goto LABEL_35;
    }
    if ( v178[0].m128i_i64[0] )
    {
      v178[0].m128i_i64[1] = 0;
      qfree();
    }
    if ( v176 )
    {
      *(_QWORD *)&v177 = 0;
      qfree();
    }
    if ( s2 )
    {
LABEL_79:
      *(_QWORD *)&v175 = 0;
      qfree();
    }
LABEL_80:
    v38 = v3[3];
    v39 = v123;
    v40 = *(_QWORD *)(v38 + 56);
    if ( v40 < v123 )
    {
LABEL_35:
      if ( (_QWORD)v171 )
      {
        v23 = v170;
        if ( 88LL * (_QWORD)v171 )
        {
          do
          {
            v178[0] = (__m128i)_mm_loadh_ps(v23);
            sub_1F510(v3 + 23, v178)->m128i_i32[0] = -1;
            v23 += 11;
          }
          while ( v23 != &v170[11 * (_QWORD)v171] );
        }
      }
      goto LABEL_38;
    }
    v41 = v123 - 1;
    if ( v41 >= v40 )
      break;
    v124 = netnode_supnext();
    v42 = *(_QWORD *)(v38 + 56);
    if ( v124 != -1 )
    {
      if ( v41 < v42 )
        goto LABEL_84;
LABEL_259:
      sub_16850();
    }
    if ( ++v123 != -1 )
    {
      if ( v42 >= v123 )
      {
        if ( v39 < v42 )
          goto LABEL_172;
LABEL_258:
        sub_16850();
        goto LABEL_259;
      }
      goto LABEL_35;
    }
    if ( !v42 )
      goto LABEL_35;
    v123 = 1;
    v39 = 0;
LABEL_172:
    if ( netnode_supfirst() == -1 )
      goto LABEL_35;
    if ( v39 >= *(_QWORD *)(v38 + 56) )
      goto LABEL_257;
LABEL_84:
    if ( netnode_supval() <= 199 )
      goto LABEL_35;
  }
  sub_16850();
LABEL_248:
  if ( v178[0].m128i_i64[0] )
  {
    v178[0].m128i_i64[1] = 0;
    qfree();
  }
  if ( v176 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  if ( s2 )
  {
    *(_QWORD *)&v175 = 0;
    qfree();
  }
  v158 = 0;
LABEL_38:
  v24 = (char *)v172;
  if ( v172 )
  {
    v25 = v173;
    if ( (_QWORD)v173 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[24 * v26];
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree();
          v24 = (char *)v172;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v173 = 0;
    qfree();
  }
LABEL_45:
  v28 = v170;
  if ( v170 )
  {
    v29 = v171;
    if ( (_QWORD)v171 )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = &v28[v30];
        if ( *((_QWORD *)v32 + 7) )
        {
          v32[8] = 0.0;
          qfree();
        }
        if ( *((_QWORD *)v32 + 4) )
        {
          v32[5] = 0.0;
          qfree();
        }
        if ( *((_QWORD *)v32 + 1) )
        {
          v32[2] = 0.0;
          qfree();
        }
        ++v31;
        v28 = v170;
        v30 += 11;
      }
      while ( v29 != v31 );
    }
LABEL_55:
    *(_QWORD *)&v171 = 0;
    qfree();
  }
LABEL_21:
  if ( s1 )
  {
    *(_QWORD *)&v169 = 0;
    qfree();
  }
  return v158;
}

