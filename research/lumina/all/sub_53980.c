__int64 __fastcall sub_53980(_QWORD *a1, __int64 a2, const __m128i *a3, int a4, __int64 a5)
{
  const __m128i *v5; // rbx
  _QWORD *v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r9
  _QWORD *v10; // rbp
  __int64 (*v11)(); // rax
  unsigned int v12; // r15d
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // r13
  _QWORD *v18; // rbx
  void *v19; // rdi
  char *v20; // rsi
  __int64 v21; // r15
  __int64 i; // r14
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __m128i v33; // xmm0
  time_t v34; // rax
  int v35; // r9d
  const char *v36; // rsi
  const char *v37; // rdi
  size_t v38; // r8
  const char *v39; // r9
  void *v40; // rax
  size_t v41; // r11
  const void *v42; // r14
  void *v43; // rdi
  size_t v44; // r9
  const void *v45; // r11
  void *v46; // rdi
  const char *v47; // rsi
  __m128i v48; // xmm0
  __int64 v49; // rcx
  const char *v50; // rsi
  const char *v51; // rdi
  __int64 v52; // rax
  char v53; // al
  __int64 v54; // r8
  __int64 v55; // r9
  const char *v56; // r8
  __int64 v57; // rdi
  const char *v58; // rcx
  const char *v59; // rdx
  size_t v60; // rbx
  void *v61; // rbp
  void *v62; // rdi
  __int64 v63; // r8
  size_t v64; // r9
  const char *v65; // rcx
  __int64 v66; // rax
  char *v67; // rdi
  __int64 v68; // r14
  __int64 v69; // r13
  __int64 v70; // r15
  char *v71; // r12
  void *v72; // rdi
  char *v73; // rcx
  __int64 v74; // rbp
  __int64 k; // rbx
  char *v76; // rdx
  void *v77; // rdi
  void *v78; // rdi
  void *v79; // rdi
  time_t v80; // rax
  time_t v81; // rcx
  const char *v82; // rcx
  const char *v83; // rdx
  char *v84; // rdi
  __int64 v85; // rbp
  __int64 v86; // r13
  __int64 v87; // r14
  char *v88; // r12
  void *v89; // rdi
  char *v90; // rsi
  __int64 v91; // rbx
  __int64 m; // r15
  char *v93; // rcx
  void *v94; // rdi
  void *v95; // rdi
  void *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int32 v100; // r11d
  int v101; // eax
  void *v102; // rax
  __m128i v103; // xmm0
  __m128i v104; // xmm1
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __m128i v108; // xmm1
  __m128i v109; // xmm0
  __int64 v110; // rax
  __m128i v111; // xmm1
  __int64 v112; // rcx
  __int64 v113; // r15
  __m128i v114; // xmm0
  __int32 v115; // eax
  __int32 v116; // edx
  __int32 v117; // edx
  __int32 v118; // edx
  void *v119; // rbp
  void *v120; // rdi
  const void *v121; // r13
  __int64 v122; // rax
  void *v123; // rax
  time_t v124; // rax
  __int64 v126; // [rsp+0h] [rbp-5B8h]
  unsigned int v127; // [rsp+0h] [rbp-5B8h]
  __int64 v128; // [rsp+8h] [rbp-5B0h]
  int v129; // [rsp+8h] [rbp-5B0h]
  __int64 v130; // [rsp+8h] [rbp-5B0h]
  __int64 v132; // [rsp+18h] [rbp-5A0h]
  unsigned __int64 v134; // [rsp+20h] [rbp-598h]
  unsigned __int64 v135; // [rsp+20h] [rbp-598h]
  int v136; // [rsp+20h] [rbp-598h]
  __int64 v137; // [rsp+20h] [rbp-598h]
  __int64 v138; // [rsp+20h] [rbp-598h]
  unsigned __int64 v139; // [rsp+20h] [rbp-598h]
  __int64 v140; // [rsp+20h] [rbp-598h]
  __int64 v141; // [rsp+20h] [rbp-598h]
  __int64 v142; // [rsp+20h] [rbp-598h]
  __int64 v143; // [rsp+20h] [rbp-598h]
  const __m128i *v144; // [rsp+28h] [rbp-590h]
  __int64 v145; // [rsp+28h] [rbp-590h]
  const char *v146; // [rsp+28h] [rbp-590h]
  size_t v147; // [rsp+28h] [rbp-590h]
  unsigned __int64 v148; // [rsp+28h] [rbp-590h]
  __int64 v149; // [rsp+28h] [rbp-590h]
  size_t v150; // [rsp+28h] [rbp-590h]
  __int64 *v151; // [rsp+30h] [rbp-588h]
  size_t na; // [rsp+38h] [rbp-580h]
  size_t n; // [rsp+38h] [rbp-580h]
  size_t nb; // [rsp+38h] [rbp-580h]
  void *src; // [rsp+40h] [rbp-578h] BYREF
  __int128 v156; // [rsp+48h] [rbp-570h]
  void *ptr; // [rsp+60h] [rbp-558h] BYREF
  __int128 v158; // [rsp+68h] [rbp-550h]
  void *v159; // [rsp+80h] [rbp-538h] BYREF
  __int128 v160; // [rsp+88h] [rbp-530h]
  void *v161; // [rsp+98h] [rbp-520h]
  __int128 v162; // [rsp+A0h] [rbp-518h]
  void *v163; // [rsp+B0h] [rbp-508h] BYREF
  __m128i v164; // [rsp+B8h] [rbp-500h] BYREF
  __int64 v165; // [rsp+C8h] [rbp-4F0h]
  __m128i v166; // [rsp+D0h] [rbp-4E8h] BYREF
  __int64 v167; // [rsp+E0h] [rbp-4D8h]
  __int64 v168; // [rsp+E8h] [rbp-4D0h]
  __int64 v169; // [rsp+F8h] [rbp-4C0h]
  __m128i j; // [rsp+100h] [rbp-4B8h] BYREF
  int v171; // [rsp+118h] [rbp-4A0h]
  __int16 v172; // [rsp+11Ch] [rbp-49Ch]
  int v173; // [rsp+11Eh] [rbp-49Ah]
  __int16 v174; // [rsp+122h] [rbp-496h]
  int v175; // [rsp+124h] [rbp-494h]
  __int16 v176; // [rsp+128h] [rbp-490h]
  int v177; // [rsp+12Ah] [rbp-48Eh]
  __int16 v178; // [rsp+12Eh] [rbp-48Ah]
  int v179[4]; // [rsp+130h] [rbp-488h] BYREF
  __int64 v180; // [rsp+140h] [rbp-478h]
  int v181[4]; // [rsp+150h] [rbp-468h] BYREF
  __int64 v182; // [rsp+160h] [rbp-458h]
  char s[1032]; // [rsp+170h] [rbp-448h] BYREF
  unsigned __int64 v184; // [rsp+578h] [rbp-40h]

  v184 = __readfsqword(0x28u);
  if ( !a1[4] )
  {
    if ( !unk_2439A0 )
      sub_198E10(3150);
    goto LABEL_236;
  }
  if ( !a5 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3191);
    goto LABEL_236;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3151);
    goto LABEL_236;
  }
  v5 = a3;
  if ( !a3->m128i_i32[2] )
  {
    if ( !unk_2439A0 )
      sub_198E10(3152);
    goto LABEL_236;
  }
  v6 = (_QWORD *)a1[48];
  v7 = (__int64)a1;
  v8 = a2;
  v9 = 2LL * a1[49];
  v10 = &v6[v9];
  if ( v6 == &v6[v9] )
  {
LABEL_11:
    sub_4C740((__int64)a1);
    v14 = a1[53];
    sub_19A520(v14);
    sub_4DF50((__int64)a1, 1);
    v15 = v14;
    v16 = 0;
    v17 = 0;
    sub_19A570(v15);
    v132 = *(_QWORD *)(v7 + 424);
    sub_19A520(v132);
    v151 = (__int64 *)(v7 + 128);
    if ( *(_QWORD *)(v7 + 136) )
    {
      v128 = *(_QWORD *)(v7 + 136);
      v144 = v5;
      do
      {
        v18 = (_QWORD *)(v17 + *(_QWORD *)(v7 + 128));
        v19 = (void *)v18[16];
        if ( v19 )
        {
          v18[17] = 0;
          j__free(v19);
        }
        v20 = (char *)v18[10];
        if ( v20 )
        {
          v21 = v18[11];
          if ( v21 )
          {
            for ( i = 0; i != v21; ++i )
            {
              v23 = &v20[24 * i];
              v24 = *(void **)v23;
              if ( *(_QWORD *)v23 )
              {
                *((_QWORD *)v23 + 1) = 0;
                j__free(v24);
                v20 = (char *)v18[10];
              }
            }
          }
          v18[11] = 0;
          j__free(v20);
        }
        v25 = (void *)v18[7];
        if ( v25 )
        {
          v18[8] = 0;
          j__free(v25);
        }
        v26 = (void *)v18[4];
        if ( v26 )
        {
          v18[5] = 0;
          j__free(v26);
        }
        ++v16;
        v17 += 152;
      }
      while ( v128 != v16 );
      v8 = a2;
      v5 = v144;
    }
    *(_QWORD *)(v7 + 136) = 0;
    v27 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(v7 + 368) = 0;
    v28 = *(_QWORD *)(v8 + 8);
    if ( v28 )
    {
      v36 = *(const char **)v8;
      v37 = s1;
      if ( !v27 )
      {
LABEL_51:
        v129 = 2;
        if ( strcmp(v37, v36) || *(_WORD *)(v7 + 64) != *(_WORD *)(v8 + 24) )
        {
LABEL_52:
          if ( v8 == v7 + 40 )
            goto LABEL_33;
          if ( v28 )
          {
            v38 = v28 - 1;
            if ( v28 != 1 )
            {
              v39 = *(const char **)v8;
              v40 = *(void **)(v7 + 40);
              if ( *(_QWORD *)(v7 + 56) < v28 )
              {
                v146 = *(const char **)v8;
                v40 = (void *)sub_1987B0(v7 + 40, *(_QWORD *)(v7 + 40), v28, 1);
                v39 = v146;
                v38 = v28 - 1;
                *(_QWORD *)(v7 + 40) = v40;
              }
              *(_QWORD *)(v7 + 48) = v28;
              memmove(v40, v39, v38);
              *(_BYTE *)(*(_QWORD *)(v7 + 40) + v28 - 1) = 0;
              LOWORD(v29) = *(_WORD *)(v8 + 24);
LABEL_34:
              *(_WORD *)(v7 + 64) = v29;
              *(_BYTE *)(v7 + 66) = *(_BYTE *)(v8 + 26);
              *(_BYTE *)(v7 + 72) = *(_BYTE *)(v8 + 32);
              if ( v7 + 80 != v8 + 40 )
              {
                v30 = *(_QWORD *)(v8 + 48);
                if ( !v30 || (v44 = v30 - 1, v30 == 1) )
                {
                  *(_QWORD *)(v7 + 88) = 0;
                }
                else
                {
                  v45 = *(const void **)(v8 + 40);
                  v46 = *(void **)(v7 + 80);
                  if ( *(_QWORD *)(v7 + 96) < v30 )
                  {
                    na = *(_QWORD *)(v8 + 40);
                    v147 = v30 - 1;
                    v139 = *(_QWORD *)(v8 + 48);
                    v98 = sub_1987B0(v7 + 80, *(_QWORD *)(v7 + 80), v139, 1);
                    *(_QWORD *)(v7 + 80) = v98;
                    v45 = (const void *)na;
                    v46 = (void *)v98;
                    v44 = v147;
                    v30 = v139;
                  }
                  *(_QWORD *)(v7 + 88) = v30;
                  v135 = v30;
                  memmove(v46, v45, v44);
                  *(_BYTE *)(*(_QWORD *)(v7 + 80) + v135 - 1) = 0;
                }
              }
              v31 = v7 + 104;
              if ( v7 + 104 != v8 + 64 )
              {
                v32 = *(_QWORD *)(v8 + 72);
                if ( !v32 || (v41 = v32 - 1, v32 == 1) )
                {
                  *(_QWORD *)(v7 + 112) = 0;
                }
                else
                {
                  v42 = *(const void **)(v8 + 64);
                  v43 = *(void **)(v7 + 104);
                  if ( *(_QWORD *)(v7 + 120) < v32 )
                  {
                    n = v32 - 1;
                    v148 = v32;
                    v99 = sub_1987B0(v7 + 104, *(_QWORD *)(v7 + 104), v32, 1);
                    *(_QWORD *)(v7 + 104) = v99;
                    v41 = n;
                    v43 = (void *)v99;
                    v32 = v148;
                    v31 = v7 + 104;
                  }
                  *(_QWORD *)(v7 + 112) = v32;
                  v145 = v31;
                  v134 = v32;
                  memmove(v43, v42, v41);
                  v31 = v145;
                  *(_BYTE *)(*(_QWORD *)(v7 + 104) + v134 - 1) = 0;
                }
              }
              if ( *(_BYTE *)(v7 + 72) )
              {
                if ( !*(_QWORD *)(v7 + 432) )
                {
                  v33 = _mm_loadu_si128(v5);
                  v180 = v5[1].m128i_i64[0];
                  *(__m128i *)v179 = v33;
                  v34 = time(nullptr);
                  v35 = sub_4FEE0(v7, (__int64)v179, v34);
                  if ( v35 && v179[0] == v5->m128i_i32[0] && LOWORD(v179[1]) == v5->m128i_i16[2] )
                  {
                    v136 = v35;
                    v12 = 1;
                    if ( !(unsigned int)sub_521F0(v7, (__int64)v179, (a4 >> 6) & 1, v129, (char **)a5) )
                    {
                      sub_503C0(v7, *(_QWORD *)(v7 + 128), 1, v129, (__int64)v179);
                      if ( v136 == 2 )
                      {
                        v124 = time(nullptr);
                        *(_BYTE *)(v7 + 504) = 1;
                        *(_QWORD *)(v7 + 488) = v124;
                        if ( (word_2439A4 & 0x200) != 0 )
                          sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Borrowed license is already beyond grace, entering locked mode\n");
                      }
                      v12 = 0;
                    }
                    if ( !*(_QWORD *)(v7 + 368) && *(_QWORD *)(v7 + 472) )
                      sub_4E6F0(v7, v7 + 360);
                    if ( (a4 & 0x10) != 0 )
                      goto LABEL_49;
                    goto LABEL_48;
                  }
                  if ( (unsigned __int8)sub_4E5C0(v7, (char **)a5, 0) )
                  {
                    ptr = nullptr;
                    src = nullptr;
                    v159 = nullptr;
                    v161 = nullptr;
                    v158 = 0;
                    v156 = 0;
                    v160 = 0;
                    v162 = 0;
                    sub_4D0C0((__int64)&v163, (__int64)&v159, &src, (size_t *)&ptr);
                    if ( v161 )
                    {
                      *(_QWORD *)&v162 = 0;
                      j__free(v161);
                    }
                    if ( v159 )
                    {
                      *(_QWORD *)&v160 = 0;
                      j__free(v159);
                    }
                    if ( (unsigned int)sub_5E0B0(*(_QWORD *)(v7 + 432), &v163, a5, 0) )
                    {
                      if ( (word_2439A4 & 0x200) != 0 )
                      {
                        v47 = s1;
                        if ( *(_QWORD *)(a5 + 8) )
                          v47 = *(const char **)a5;
                        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"get_licenses() failed: %s\n", v47);
                      }
                      sub_4C2D0((__int64)&v163);
LABEL_78:
                      v12 = 1;
                      goto LABEL_49;
                    }
                    v102 = *(void **)(v7 + 152);
                    v103 = _mm_loadu_si128((const __m128i *)(v7 + 160));
                    v104 = _mm_loadu_si128(&v164);
                    *(_QWORD *)(v7 + 152) = v163;
                    v163 = v102;
                    v105 = *(_QWORD *)(v7 + 176);
                    *(_QWORD *)(v7 + 176) = v165;
                    v165 = v105;
                    v106 = *(_QWORD *)(v7 + 360);
                    *(_QWORD *)(v7 + 360) = v169;
                    v107 = v168;
                    *(__m128i *)(v7 + 160) = v104;
                    v108 = _mm_load_si128(&v166);
                    v164 = v103;
                    v109 = _mm_loadu_si128((const __m128i *)(v7 + 184));
                    v169 = v106;
                    v110 = v167;
                    *(__m128i *)(v7 + 184) = v108;
                    v111 = _mm_load_si128(&j);
                    v166 = v109;
                    v112 = v110 + 176 * v107;
                    v113 = v110;
                    v114 = _mm_loadu_si128((const __m128i *)(v7 + 368));
                    *(__m128i *)(v7 + 368) = v111;
                    for ( j = v114; v112 != v113; v113 += 176 )
                    {
                      v172 = 0;
                      LOWORD(v181[1]) = 0;
                      v181[0] = 0;
                      v177 = 0;
                      v178 = 0;
                      v115 = v5->m128i_i32[0];
                      v171 = 0;
                      if ( !v115 && v5->m128i_i16[2] == v178
                        || *(_DWORD *)v113 == v5->m128i_i32[0] && *(_WORD *)(v113 + 4) == v5->m128i_i16[2] )
                      {
                        v116 = v5->m128i_i32[2];
                        if ( !v116 || v116 == *(_DWORD *)(v113 + 12) )
                        {
                          v117 = v5->m128i_i32[3];
                          if ( !v117 || v117 == *(_DWORD *)(v113 + 16) )
                          {
                            v118 = v5[1].m128i_i32[0];
                            if ( *(_DWORD *)(v113 + 20) == v118 || !v118 )
                            {
                              v140 = v112;
                              sub_4D780(v151, (int *)v113);
                              v112 = v140;
                            }
                          }
                        }
                      }
                    }
                    sub_4C2D0((__int64)&v163);
                  }
                  if ( (a4 & 0x10) == 0 )
                  {
                    if ( !*(_QWORD *)(v7 + 368) && *(_QWORD *)(v7 + 472) )
                      sub_4E6F0(v7, v7 + 360);
                    v12 = 1;
LABEL_48:
                    if ( *(_QWORD *)(v7 + 136) )
                    {
                      v100 = v5->m128i_i32[0];
                      v177 = 0;
                      v178 = 0;
                      v181[0] = 0;
                      LOWORD(v181[1]) = 0;
                      v175 = 0;
                      v176 = 0;
                      if ( v100 || (v101 = 0, v5->m128i_i16[2]) )
                        v101 = 1;
                      v12 &= v101;
                    }
                    goto LABEL_49;
                  }
                  v48 = _mm_loadu_si128(v5);
                  v49 = v5[1].m128i_i64[0];
                  v175 = 0;
                  v176 = 0;
                  v182 = v49;
                  v177 = 0;
                  v178 = 0;
                  v173 = 0;
                  v174 = 0;
                  *(__m128i *)v181 = v48;
                  if ( !_mm_cvtsi128_si32(v48) && !LOWORD(v181[1]) && *(_QWORD *)(v7 + 136) )
                  {
                    v97 = *(_QWORD *)(v7 + 128);
                    v181[0] = *(_DWORD *)v97;
                    LOWORD(v181[1]) = *(_WORD *)(v97 + 4);
                  }
                  if ( !(unsigned int)sub_521F0(v7, (__int64)v181, (a4 >> 6) & 1, v129, (char **)a5) )
                  {
                    if ( !*(_QWORD *)(v7 + 368) && *(_QWORD *)(v7 + 472) )
                      sub_4E6F0(v7, v7 + 360);
                    v12 = 0;
                    goto LABEL_49;
                  }
                  goto LABEL_78;
                }
                if ( !unk_2439A0 )
                  sub_198E10(3153);
LABEL_236:
                BUG();
              }
              v52 = v5[1].m128i_i64[0];
              v137 = v31;
              *(__m128i *)v181 = _mm_loadu_si128(v5);
              v182 = v52;
              src = nullptr;
              v156 = 0;
              v53 = sub_52980((_QWORD *)v7, (__int64 *)&src, v7 + 80, (__int64)v181, a5);
              ptr = nullptr;
              v159 = nullptr;
              v158 = 0;
              v160 = 0;
              if ( v53 )
                goto LABEL_117;
              v54 = *(_QWORD *)(v7 + 88);
              v55 = v137;
              if ( !v54 )
              {
                v56 = s1;
                v57 = *(_QWORD *)(v7 + 32);
                v58 = s1;
                if ( *(_QWORD *)(v7 + 112) )
                  v56 = *(const char **)(v7 + 104);
LABEL_103:
                v59 = s1;
                if ( *(_QWORD *)(a5 + 8) )
                  v59 = *(const char **)a5;
                v138 = v55;
                sub_4BD60(
                  v57,
                  (__int64)"No valid license file found at \"%s\": %s\nTrying default search path \"%s\"\n",
                  v59,
                  v58,
                  v56);
                v178 = 0;
                LOWORD(v179[1]) = 0;
                LOWORD(v181[1]) = 0;
                v177 = 0;
                v179[0] = 0;
                v181[0] = 0;
                if ( !(unsigned __int8)sub_52980((_QWORD *)v7, (__int64 *)&src, v138, (__int64)v181, (__int64)&v159) )
                {
                  v60 = *(_QWORD *)(a5 + 8);
                  if ( v60 )
                  {
                    v123 = (void *)sub_198760(*(_QWORD *)(a5 + 8));
                    v61 = memcpy(v123, *(const void **)a5, v60);
                  }
                  else
                  {
                    v61 = nullptr;
                  }
                  sub_299F0((char **)a5);
                  if ( v61 )
                    j__free(v61);
                  v12 = 1;
                  goto LABEL_111;
                }
LABEL_117:
                v63 = v156;
                if ( (_QWORD)v156 )
                {
                  v64 = v156 - 1;
                  if ( (_QWORD)v156 == 1 )
                  {
                    *(_QWORD *)(v7 + 88) = 0;
LABEL_120:
                    v65 = (const char *)src;
LABEL_121:
                    v12 = sub_4AF60((char **)v151, (__int64 *)(v7 + 152), v7 + 360, (__int64)v65, a4, (__int64 *)a5);
                    if ( !v12 && (a4 & 0x10) != 0 )
                    {
                      v66 = *(_QWORD *)v7;
                      v164 = 0;
                      v163 = nullptr;
                      if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, int *, _QWORD, _QWORD))(v66 + 56))(
                              v7,
                              &v163,
                              v181,
                              0,
                              0) )
                      {
                        sub_299F0((char **)a5);
LABEL_125:
                        v67 = (char *)v163;
                        if ( v163 )
                        {
                          if ( v164.m128i_i64[0] )
                          {
                            v126 = v7;
                            v68 = 0;
                            v69 = 0;
                            v70 = v164.m128i_i64[0];
                            do
                            {
                              v71 = &v67[v68];
                              v72 = *(void **)&v67[v68 + 128];
                              if ( v72 )
                              {
                                *((_QWORD *)v71 + 17) = 0;
                                j__free(v72);
                              }
                              v73 = *((char **)v71 + 10);
                              if ( v73 )
                              {
                                v74 = *((_QWORD *)v71 + 11);
                                if ( v74 )
                                {
                                  for ( k = 0; k != v74; ++k )
                                  {
                                    v76 = &v73[24 * k];
                                    v77 = *(void **)v76;
                                    if ( *(_QWORD *)v76 )
                                    {
                                      *((_QWORD *)v76 + 1) = 0;
                                      j__free(v77);
                                      v73 = *((char **)v71 + 10);
                                    }
                                  }
                                }
                                *((_QWORD *)v71 + 11) = 0;
                                j__free(v73);
                              }
                              v78 = *((void **)v71 + 7);
                              if ( v78 )
                              {
                                *((_QWORD *)v71 + 8) = 0;
                                j__free(v78);
                              }
                              v79 = *((void **)v71 + 4);
                              if ( v79 )
                              {
                                *((_QWORD *)v71 + 5) = 0;
                                j__free(v79);
                              }
                              ++v69;
                              v67 = (char *)v163;
                              v68 += 152;
                            }
                            while ( v70 != v69 );
                            v7 = v126;
                          }
                          v164.m128i_i64[0] = 0;
                          j__free(v67);
                        }
                        v12 = 12;
LABEL_111:
                        if ( v159 )
                          j__free(v159);
                        if ( ptr )
                        {
                          *(_QWORD *)&v158 = 0;
                          j__free(ptr);
                        }
                        v62 = src;
                        if ( !src )
                          goto LABEL_49;
                        goto LABEL_177;
                      }
                      v80 = time(nullptr);
                      v81 = *((_QWORD *)v163 + 13);
                      if ( v81 > v80 && v81 != -1 )
                      {
                        sub_1992F0(s, 0x400u, "%F");
                        sub_299F0((char **)a5);
                        goto LABEL_125;
                      }
                      sub_503C0(v7, (__int64)v163, 0, v129, (__int64)v5);
                      if ( (unsigned __int64)v158 > 1 )
                      {
                        v82 = s1;
                        if ( (_QWORD)v156 )
                          v82 = (const char *)src;
                        v83 = s1;
                        if ( *(_QWORD *)(a5 + 8) )
                          v83 = *(const char **)a5;
                        sub_466E0(
                          (const __m128i *)"No valid license file found at \"%s\": %s\n"
                                           "Using the default license file location instead: \"%s\"\n",
                          (const char *)ptr,
                          v83,
                          v82);
                      }
                      v84 = (char *)v163;
                      if ( v163 )
                      {
                        v85 = 0;
                        if ( v164.m128i_i64[0] )
                        {
                          v127 = v12;
                          v86 = 0;
                          v87 = v164.m128i_i64[0];
                          v130 = v7;
                          do
                          {
                            v88 = &v84[v86];
                            v89 = *(void **)&v84[v86 + 128];
                            if ( v89 )
                            {
                              *((_QWORD *)v88 + 17) = 0;
                              j__free(v89);
                            }
                            v90 = *((char **)v88 + 10);
                            if ( v90 )
                            {
                              v91 = *((_QWORD *)v88 + 11);
                              if ( v91 )
                              {
                                for ( m = 0; m != v91; ++m )
                                {
                                  v93 = &v90[24 * m];
                                  v94 = *(void **)v93;
                                  if ( *(_QWORD *)v93 )
                                  {
                                    *((_QWORD *)v93 + 1) = 0;
                                    j__free(v94);
                                    v90 = *((char **)v88 + 10);
                                  }
                                }
                              }
                              *((_QWORD *)v88 + 11) = 0;
                              j__free(v90);
                            }
                            v95 = *((void **)v88 + 7);
                            if ( v95 )
                            {
                              *((_QWORD *)v88 + 8) = 0;
                              j__free(v95);
                            }
                            v96 = *((void **)v88 + 4);
                            if ( v96 )
                            {
                              *((_QWORD *)v88 + 5) = 0;
                              j__free(v96);
                            }
                            ++v85;
                            v84 = (char *)v163;
                            v86 += 152;
                          }
                          while ( v87 != v85 );
                          v12 = v127;
                          v7 = v130;
                        }
                        v164.m128i_i64[0] = 0;
                        j__free(v84);
                      }
                    }
                    if ( v159 )
                      j__free(v159);
                    if ( ptr )
                    {
                      *(_QWORD *)&v158 = 0;
                      j__free(ptr);
                    }
                    v62 = src;
                    if ( !src )
                      goto LABEL_49;
LABEL_177:
                    *(_QWORD *)&v156 = 0;
                    j__free(v62);
LABEL_49:
                    sub_19A570(v132);
                    sub_4C6B0((_QWORD *)v7);
                    return v12;
                  }
                  v119 = src;
                  v120 = *(void **)(v7 + 80);
                  if ( *(_QWORD *)(v7 + 96) < (unsigned __int64)v156 )
                  {
                    v150 = v156 - 1;
                    v143 = v156;
                    v122 = sub_1987B0(v7 + 80, *(_QWORD *)(v7 + 80), v156, 1);
                    *(_QWORD *)(v7 + 80) = v122;
                    v64 = v150;
                    v120 = (void *)v122;
                    v63 = v143;
                  }
                  *(_QWORD *)(v7 + 88) = v63;
                  v141 = v63;
                  memmove(v120, v119, v64);
                  *(_BYTE *)(*(_QWORD *)(v7 + 80) + v141 - 1) = 0;
                  if ( (_QWORD)v156 )
                    goto LABEL_120;
                }
                else
                {
                  *(_QWORD *)(v7 + 88) = 0;
                }
                v65 = s1;
                goto LABEL_121;
              }
              if ( v54 == 1 )
              {
                v57 = *(_QWORD *)(v7 + 32);
                v56 = s1;
                if ( *(_QWORD *)(v7 + 112) )
                  v56 = *(const char **)(v7 + 104);
              }
              else
              {
                nb = v54 - 1;
                v121 = *(const void **)(v7 + 80);
                v149 = v137;
                v142 = *(_QWORD *)(v7 + 88);
                ptr = (void *)sub_1987B0(&ptr, 0, v142, 1);
                *(_QWORD *)&v158 = v142;
                memmove(ptr, v121, nb);
                v55 = v149;
                *((char *)ptr + v142 - 1) = 0;
                v56 = s1;
                v57 = *(_QWORD *)(v7 + 32);
                if ( *(_QWORD *)(v7 + 112) )
                  v56 = *(const char **)(v7 + 104);
                if ( !*(_QWORD *)(v7 + 88) )
                {
                  v58 = s1;
                  goto LABEL_103;
                }
              }
              v58 = *(const char **)(v7 + 80);
              goto LABEL_103;
            }
          }
LABEL_32:
          *(_QWORD *)(v7 + 48) = 0;
LABEL_33:
          LOWORD(v29) = *(_WORD *)(v8 + 24);
          goto LABEL_34;
        }
LABEL_92:
        v129 = 2;
        if ( *(_BYTE *)(v7 + 66) == *(_BYTE *)(v8 + 26) && *(_BYTE *)(v7 + 72) == *(_BYTE *)(v8 + 32) )
        {
          v50 = s1;
          if ( *(_QWORD *)(v8 + 48) )
            v50 = *(const char **)(v8 + 40);
          v51 = s1;
          if ( *(_QWORD *)(v7 + 88) )
            v51 = *(const char **)(v7 + 80);
          v129 = 2 * (strcmp(v51, v50) != 0);
        }
        goto LABEL_52;
      }
    }
    else
    {
      if ( !v27 )
      {
        v29 = *(unsigned __int16 *)(v8 + 24);
        if ( (_WORD)v29 != *(_WORD *)(v7 + 64) )
        {
          v129 = 2;
          if ( v8 == v7 + 40 )
            goto LABEL_34;
          goto LABEL_32;
        }
        goto LABEL_92;
      }
      v36 = s1;
    }
    v37 = *(const char **)(v7 + 40);
    goto LABEL_51;
  }
  while ( 1 )
  {
    v11 = *(__int64 (**)())(*(_QWORD *)*v6 + 16LL);
    if ( v11 != sub_4B150 )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, const __m128i *, _QWORD, __int64))v11)(
              *v6,
              a2,
              v5,
              (unsigned int)a4,
              a5);
      if ( v12 )
        return v12;
    }
    v6 += 2;
    if ( v10 == v6 )
      goto LABEL_11;
  }
}
