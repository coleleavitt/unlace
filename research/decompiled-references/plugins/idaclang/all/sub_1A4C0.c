__int64 __fastcall sub_1A4C0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  const char *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char **v14; // r15
  char *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // r12d
  int v26; // r13d
  _QWORD *v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // r12
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  const char *v36; // rsi
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r15d
  char v68; // r13
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  int v73; // eax
  const char *v74; // rsi
  size_t v75; // rax
  void *v76; // rax
  const void *v77; // rsi
  size_t v78; // rdx
  void *v79; // rbx
  const char *v80; // r15
  char *v81; // rbx
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __int64 v84; // rax
  char *v85; // rdi
  size_t v86; // rax
  __int64 v87; // r12
  size_t v88; // rbx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rdi
  __m128i v91; // xmm0
  __int64 v92; // rax
  __int64 v93; // rdi
  char *v94; // r13
  __m128i v95; // xmm0
  char *v96; // rdi
  __int64 v97; // rax
  _QWORD *v98; // rdx
  __int64 v99; // rax
  _QWORD *v100; // rbx
  _QWORD *v101; // r15
  const char *v102; // rdx
  unsigned int v103; // r15d
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r12
  __int64 v112; // rbx
  __int64 *v113; // rax
  __int64 v114; // rdi
  __int64 v115; // rdx
  __int64 v116; // r12
  __int64 v117; // rbx
  __int64 *v118; // rax
  __int64 v119; // rdi
  const char *v121; // rsi
  int v122; // eax
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // r13
  __int64 v126; // r15
  __int64 v127; // rax
  __int64 v128; // rax
  int v129; // eax
  int v130; // r13d
  char v131; // al
  __int64 v132; // rax
  __int64 v133; // rax
  char v134; // dl
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rax
  int v140; // eax
  __int64 v141; // rax
  int v142; // eax
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // rax
  int v146; // eax
  __int64 *v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  unsigned __int64 v154; // rsi
  size_t v155; // r13
  void *v156; // rax
  const void *v157; // rsi
  void *v158; // r15
  const char *i; // r13
  __int64 v160; // rdx
  __int64 v161; // rdx
  __int64 v162; // rsi
  __int64 v163; // r15
  unsigned __int64 v164; // rdx
  unsigned __int64 v165; // rdi
  __int64 v166; // rax
  __int64 v167; // rax
  unsigned __int64 v168; // rsi
  const char *v169; // r9
  __int64 v170; // rax
  __int64 v171; // rax
  unsigned __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int128 v176; // [rsp+20h] [rbp-120h] BYREF
  __m128i v177; // [rsp+30h] [rbp-110h] BYREF
  __m128i v178; // [rsp+40h] [rbp-100h] BYREF
  _QWORD *v179; // [rsp+50h] [rbp-F0h]
  __int64 *v180; // [rsp+58h] [rbp-E8h]
  __int64 v181; // [rsp+60h] [rbp-E0h] BYREF
  __int128 v182; // [rsp+68h] [rbp-D8h]
  __int64 v183; // [rsp+80h] [rbp-C0h] BYREF
  __int128 v184; // [rsp+88h] [rbp-B8h]
  _QWORD v185[4]; // [rsp+A0h] [rbp-A0h] BYREF
  char *v186; // [rsp+C0h] [rbp-80h] BYREF
  __m128i v187; // [rsp+C8h] [rbp-78h] BYREF
  __int128 v188; // [rsp+E0h] [rbp-60h] BYREF
  unsigned __int64 v189; // [rsp+108h] [rbp-38h]

  v178.m128i_i64[1] = a1;
  v189 = __readfsqword(0x28u);
  if ( !sub_BB20() )
  {
    sub_67C0((__int64 *)(a2 + 80), (__int64)"libclang not found!");
    v152 = *(_QWORD *)(a2 + 136) + 1LL;
    goto LABEL_149;
  }
  if ( (*(_BYTE *)(a2 + 104) & 1) != 0 && !(unsigned __int8)qfileexist(v178.m128i_i64[1]) )
  {
    sub_67C0((__int64 *)(a2 + 80), (__int64)"file %s not found", (const char *)v178.m128i_i64[1]);
    v152 = *(_QWORD *)(a2 + 136) + 1LL;
LABEL_149:
    *(_QWORD *)(a2 + 136) = v152;
    return 0;
  }
  v3 = *(_QWORD *)(a2 + 16) == 0;
  v181 = 0;
  v182 = 0;
  v4 = s1;
  v183 = 0;
  v184 = 0;
  if ( !v3 )
    v4 = *(const char **)(a2 + 8);
  *((_QWORD *)&v176 + 1) = &v181;
  v5 = parse_command_line(&v181, 0, v4, 0);
  v6 = *(_QWORD *)(a2 + 176);
  if ( v5 )
  {
    v7 = v181 + 24 * v182;
    if ( v181 != v7 )
    {
      v180 = (__int64 *)v181;
      do
      {
        v10 = s1;
        if ( v180[1] )
          v10 = (const char *)*v180;
        v154 = *(_QWORD *)(a2 + 168);
        v186 = (char *)v10;
        v11 = v6 + 1;
        v12 = *(_QWORD *)(a2 + 184);
        if ( (unsigned __int64)&v186 < v154 || (unsigned __int64)&v186 >= v154 + 8 * v12 )
        {
          if ( v12 < v11 )
          {
            v13 = qvector_reserve(a2 + 168, v154, v6 + 1, 8);
            *(_QWORD *)(a2 + 168) = v13;
            v6 = *(_QWORD *)(a2 + 176);
            v154 = v13;
            v10 = v186;
          }
        }
        else if ( v12 < v11 )
        {
          v153 = qvector_reserve(a2 + 168, v154, v6 + 1, 8);
          *(_QWORD *)(a2 + 168) = v153;
          v6 = *(_QWORD *)(a2 + 176);
          v154 = v153;
        }
        *(_QWORD *)(v154 + 8 * v6) = v10;
        v8 = *(_QWORD *)(a2 + 176);
        v180 += 3;
        v6 = v8 + 1;
        v9 = (__int64)v180;
        *(_QWORD *)(a2 + 176) = v6;
      }
      while ( v7 != v9 );
    }
  }
  v14 = off_28A80;
  do
  {
    v15 = *v14;
    v16 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(a2 + 184) < (unsigned __int64)(v6 + 1) )
    {
      v17 = qvector_reserve(a2 + 168, v16, v6 + 1, 8);
      *(_QWORD *)(a2 + 168) = v17;
      v6 = *(_QWORD *)(a2 + 176);
      v16 = v17;
    }
    *(_QWORD *)(v16 + 8 * v6) = v15;
    v6 = *(_QWORD *)(a2 + 176) + 1LL;
    *(_QWORD *)(a2 + 176) = v6;
    ++v14;
  }
  while ( algn_28B38 != (_BYTE *)v14 );
  if ( *(_QWORD *)(a2 + 40) )
  {
    v155 = *(_QWORD *)(a2 + 40);
    v156 = (void *)qalloc_or_throw(v155);
    v157 = *(const void **)(a2 + 32);
    v158 = v156;
    v177.m128i_i64[0] = (__int64)v156;
    memcpy(v156, v157, v155);
    if ( v155 != 1 )
    {
      v185[0] = 0;
      v179 = v185;
      v180 = &v183;
      for ( i = (const char *)qstrtok(v158, ":", v185); i; i = (const char *)qstrtok(0, ":", v160) )
      {
        v161 = v184;
        v162 = v183;
        if ( *((_QWORD *)&v184 + 1) < (unsigned __int64)(v184 + 1) )
        {
          v183 = qvector_reserve(v180, v183, v184 + 1, 24);
          v161 = v184;
          v162 = v183;
        }
        v163 = v162 + 24 * v161;
        *(_OWORD *)(v163 + 8) = 0;
        *(_QWORD *)v163 = 0;
        *(_QWORD *)&v184 = v184 + 1;
        sub_67C0((__int64 *)v163, (__int64)"%s%s", "-I", i);
        v169 = s1;
        if ( *(_QWORD *)(v163 + 8) )
          v169 = *(const char **)v163;
        v170 = *(_QWORD *)(a2 + 176);
        v168 = *(_QWORD *)(a2 + 168);
        v186 = (char *)v169;
        v164 = *(_QWORD *)(a2 + 184);
        v165 = v170 + 1;
        if ( (unsigned __int64)&v186 < v168 || (unsigned __int64)&v186 >= v168 + 8 * v164 )
        {
          if ( v164 < v165 )
          {
            v166 = qvector_reserve(a2 + 168, v168, v170 + 1, 8);
            *(_QWORD *)(a2 + 168) = v166;
            v168 = v166;
            v169 = v186;
            v170 = *(_QWORD *)(a2 + 176);
          }
        }
        else if ( v164 < v165 )
        {
          v178.m128i_i64[0] = (__int64)v169;
          v167 = qvector_reserve(a2 + 168, v168, v170 + 1, 8);
          *(_QWORD *)(a2 + 168) = v167;
          v168 = v167;
          v169 = (const char *)v178.m128i_i64[0];
          v170 = *(_QWORD *)(a2 + 176);
        }
        *(_QWORD *)(v168 + 8 * v170) = v169;
        v160 = (__int64)v179;
        ++*(_QWORD *)(a2 + 176);
      }
    }
    if ( v177.m128i_i64[0] )
      qfree(v177.m128i_i64[0]);
  }
  v18 = *(_QWORD *)(a2 + 64);
  if ( v18 > 1 )
  {
    v185[0] = 0;
    v76 = (void *)qalloc_or_throw(v18);
    v77 = *(const void **)(a2 + 56);
    v78 = v18;
    v79 = v76;
    v177.m128i_i64[0] = (__int64)v76;
    memcpy(v76, v77, v78);
    v179 = v185;
    v80 = (const char *)qstrtok(v79, ";", v185);
    v180 = (__int64 *)(a2 + 200);
    while ( v80 )
    {
      v186 = nullptr;
      v187 = 0;
      v86 = strlen(v80);
      v87 = v86 + 1;
      v88 = v86;
      v186 = (char *)qvector_reserve(&v186, 0, v86 + 1, 1);
      v187.m128i_i64[0] = v87;
      memmove(v186, v80, v88);
      v186[v88] = 0;
      v173 = *(_QWORD *)(a2 + 208);
      v172 = *(_QWORD *)(a2 + 200);
      v89 = *(_QWORD *)(a2 + 216);
      v90 = v173 + 1;
      if ( (unsigned __int64)&v186 < v172 || (unsigned __int64)&v186 >= v172 + 24 * v89 )
      {
        if ( v89 < v90 )
        {
          v97 = qvector_reserve(v180, v172, v173 + 1, 24);
          *(_QWORD *)(a2 + 200) = v97;
          v172 = v97;
          v173 = *(_QWORD *)(a2 + 208);
        }
        v91 = _mm_loadu_si128(&v187);
        v92 = v172 + 24 * v173;
        *(_QWORD *)v92 = v186;
        *(__m128i *)(v92 + 8) = v91;
        ++*(_QWORD *)(a2 + 208);
      }
      else
      {
        v81 = v186;
        v82 = _mm_loadl_epi64(&v187);
        v186 = nullptr;
        v83 = _mm_loadl_epi64((const __m128i *)&v187.m128i_u64[1]);
        v187 = 0;
        if ( v89 < v90 )
        {
          *(_QWORD *)&v176 = v83.m128i_i64[0];
          v178.m128i_i64[0] = v82.m128i_i64[0];
          v171 = qvector_reserve(v180, v172, v173 + 1, 24);
          *(_QWORD *)(a2 + 200) = v171;
          v172 = v171;
          v83 = _mm_loadl_epi64((const __m128i *)&v176);
          v82 = _mm_loadl_epi64(&v178);
          v173 = *(_QWORD *)(a2 + 208);
        }
        v84 = v172 + 24 * v173;
        *(_QWORD *)v84 = v81;
        *(__m128i *)(v84 + 8) = _mm_unpacklo_epi64(v82, v83);
        v85 = v186;
        ++*(_QWORD *)(a2 + 208);
        if ( v85 )
        {
          v187.m128i_i64[0] = 0;
          qfree(v85);
        }
      }
      v80 = (const char *)qstrtok(0, ";", v179);
    }
    if ( v177.m128i_i64[0] )
      qfree(v177.m128i_i64[0]);
  }
  v19 = (*(_BYTE *)(a2 + 104) & 0x10) == 0;
  v20 = sub_BB20();
  v24 = sub_9F20(v20, v19, 0, v21, v22, v23, v176, SDWORD2(v176));
  v25 = *(_DWORD *)(a2 + 104);
  v179 = (_QWORD *)v24;
  v26 = v25 & 1;
  if ( (v25 & 1) != 0 )
  {
    v178.m128i_i32[0] = 0;
    v177.m128i_i64[0] = 0;
  }
  else
  {
    v185[0] = "<buffer>";
    v185[1] = v178.m128i_i64[1];
    v75 = strlen((const char *)v178.m128i_i64[1]);
    v178.m128i_i64[1] = (__int64)"<buffer>";
    v185[2] = v75;
    v178.m128i_i32[0] = 1;
    v177.m128i_i64[0] = (__int64)v185;
  }
  if ( (*(_BYTE *)(a2 + 108) & 0x40) != 0 )
  {
    v27 = *(_QWORD **)(a2 + 168);
    v28 = *(_QWORD *)(a2 + 176);
    v186 = nullptr;
    v187 = 0;
    v29 = &v27[v28];
    if ( v27 == v29 )
    {
      if ( !v26 )
        goto LABEL_167;
    }
    else
    {
      v180 = (__int64 *)"%s ";
      do
        sub_6940((__int64 *)&v186, (__int64)v180, *v27++);
      while ( v29 != v27 );
      if ( (*(_BYTE *)(a2 + 104) & 1) == 0 )
      {
LABEL_30:
        if ( v187.m128i_i64[0] )
        {
          v30 = v186;
          goto LABEL_32;
        }
LABEL_167:
        v30 = s1;
LABEL_32:
        sub_7470((__int64)"argv: %s\n", v30);
        if ( v186 )
        {
          v187.m128i_i64[0] = 0;
          qfree(v186);
        }
        goto LABEL_34;
      }
    }
    sub_6940((__int64 *)&v186, (__int64)"%s", (const char *)v178.m128i_i64[1]);
    goto LABEL_30;
  }
LABEL_34:
  v31 = sub_BB20();
  v32 = sub_9F50(
          v31,
          (__int64)v179,
          v178.m128i_i64[1],
          *(_QWORD *)(a2 + 168),
          *(_DWORD *)(a2 + 176),
          v177.m128i_i64[0],
          v178.m128i_u32[0]);
  if ( !v32 )
  {
    v98 = *(_QWORD **)(a2 + 168);
    v186 = nullptr;
    v177.m128i_i64[0] = a2 + 80;
    v99 = *(_QWORD *)(a2 + 176);
    v187 = 0;
    v100 = &v98[v99];
    if ( v98 == v100 )
    {
      if ( (*(_BYTE *)(a2 + 104) & 1) == 0 )
        goto LABEL_173;
    }
    else
    {
      v101 = v98;
      v180 = (__int64 *)"%s ";
      do
        sub_6940((__int64 *)&v186, (__int64)v180, *v101++);
      while ( v100 != v101 );
      if ( (*(_BYTE *)(a2 + 104) & 1) == 0 )
      {
LABEL_95:
        if ( v187.m128i_i64[0] )
        {
          v102 = v186;
          goto LABEL_97;
        }
LABEL_173:
        v102 = s1;
LABEL_97:
        sub_67C0(
          (__int64 *)v177.m128i_i64[0],
          (__int64)"libclang failed to initialize the compile unit. please double-check that all arguments are valid: %s",
          v102);
        if ( v186 )
        {
          v187.m128i_i64[0] = 0;
          qfree(v186);
        }
        goto LABEL_99;
      }
    }
    sub_6940((__int64 *)&v186, (__int64)"%s", (const char *)v178.m128i_i64[1]);
    goto LABEL_95;
  }
  v33 = *(_DWORD *)(a2 + 108);
  if ( (v33 & 0x20) != 0 )
  {
    v174 = sub_BB20();
    sub_A3B0(v174, v32, (__int64)sub_C970, 0);
    v33 = *(_DWORD *)(a2 + 108);
  }
  if ( (v33 & 0x80u) != 0 )
  {
    v34 = sub_BB20();
    v35 = sub_B970(v34, v32);
    if ( v35 )
    {
      sub_7470((__int64)"target info:\n");
      sub_CA00((__int64)&v186, v35);
      v36 = s1;
      if ( v187.m128i_i64[0] )
        v36 = v186;
      sub_7470((__int64)"  triple: %s\n", v36);
      if ( v186 )
      {
        v187.m128i_i64[0] = 0;
        qfree(v186);
      }
      v37 = sub_BB20();
      v38 = sub_BA00(v37, v35);
      sub_7470((__int64)"  ptr width: %d\n", v38);
      v39 = sub_BB20();
      v40 = sub_BA60(v39, v35, 0x11u);
      v41 = (unsigned int)v40;
      v42 = v40 >> 3;
      if ( (int)v41 > 0 )
        v41 = v42;
      sub_7470((__int64)"  sizeof(%s): %d\n", "int", v41);
      v43 = sub_BB20();
      v44 = sub_BA60(v43, v35, 3u);
      v45 = (unsigned int)v44;
      v46 = v44 >> 3;
      if ( (int)v45 > 0 )
        v45 = v46;
      sub_7470((__int64)"  sizeof(%s): %d\n", "bool", v45);
      v47 = sub_BB20();
      v48 = sub_BA60(v47, v35, 0x10u);
      v49 = (unsigned int)v48;
      v50 = v48 >> 3;
      if ( (int)v49 > 0 )
        v49 = v50;
      sub_7470((__int64)"  sizeof(%s): %d\n", "short", v49);
      v51 = sub_BB20();
      v52 = sub_BA60(v51, v35, 0x12u);
      v53 = (unsigned int)v52;
      v54 = v52 >> 3;
      if ( (int)v53 > 0 )
        v53 = v54;
      sub_7470((__int64)"  sizeof(%s): %d\n", "long", v53);
      v55 = sub_BB20();
      v56 = sub_BA60(v55, v35, 0x13u);
      v57 = (unsigned int)v56;
      v58 = v56 >> 3;
      if ( (int)v57 > 0 )
        v57 = v58;
      sub_7470((__int64)"  sizeof(%s): %d\n", "long long", v57);
      v59 = sub_BB20();
      v60 = sub_BA60(v59, v35, 0x17u);
      v61 = (unsigned int)v60;
      v62 = v60 >> 3;
      if ( (int)v61 > 0 )
        v61 = v62;
      sub_7470((__int64)"  sizeof(%s): %d\n", "long double", v61);
      v63 = sub_BB20();
      sub_B9A0(v63, v35);
    }
  }
  v64 = sub_BB20();
  if ( (unsigned int)sub_ADA0(v64, v32) )
    *(_DWORD *)(a2 + 192) |= 2u;
  v65 = sub_BB20();
  if ( (unsigned int)sub_ADD0(v65, v32) )
    *(_DWORD *)(a2 + 192) |= 4u;
  v66 = sub_BB20();
  v67 = sub_AE00(v66, v32);
  if ( v67 <= 0 )
  {
LABEL_123:
    v122 = *(_DWORD *)(a2 + 104);
    if ( (v122 & 2) != 0 )
    {
      if ( !(unsigned __int8)sub_F920(v32, v178.m128i_i64[1], a2) )
        goto LABEL_100;
      v122 = *(_DWORD *)(a2 + 104);
    }
    if ( (v122 & 0x80u) == 0 )
      goto LABEL_146;
    v123 = sub_BB20();
    v124 = sub_B970(v123, v32);
    if ( v124 )
    {
      v125 = *(_QWORD *)a2;
      *(_OWORD *)(v125 + 36) = 0;
      v126 = v125 + 36;
      v180 = (__int64 *)v125;
      v127 = sub_BB20();
      *(_BYTE *)(v125 + 36) = (unsigned int)sub_BA90(v127, v124) == 0 ? 6 : 1;
      v128 = sub_BB20();
      v129 = sub_BA00(v128, v124);
      v130 = v129;
      if ( v129 < 0 )
      {
        sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to retrieve pointer size from target info");
        goto LABEL_178;
      }
      if ( v129 == 32 )
      {
        v178.m128i_i8[8] = *((_BYTE *)v180 + 37);
        v131 = v178.m128i_i8[8] | 3;
      }
      else
      {
        if ( v129 > 32 )
        {
          if ( v129 != 64 )
            goto LABEL_177;
        }
        else if ( v129 != 8 )
        {
          if ( v129 == 16 )
          {
            v178.m128i_i8[8] = *((_BYTE *)v180 + 37);
            v131 = v178.m128i_i8[8] | 2;
            goto LABEL_132;
          }
LABEL_177:
          sub_67C0((__int64 *)(a2 + 80), (__int64)"invalid pointer size: %d\n", v129);
          goto LABEL_178;
        }
        v178.m128i_i8[8] = *((_BYTE *)v180 + 37);
        v131 = v178.m128i_i8[8] | 1;
      }
LABEL_132:
      *((_BYTE *)v180 + 37) = v131;
      v132 = sub_BB20();
      v133 = (unsigned int)sub_BA30(v132, v124) - 1;
      v134 = 16;
      if ( (unsigned int)v133 <= 0xC )
        v134 = dword_22380[v133];
      *((_BYTE *)v180 + 37) |= v134;
      v135 = sub_BB20();
      v136 = sub_BA60(v135, v124, 0x11u);
      if ( v136 < 0 )
      {
        sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_Int");
      }
      else
      {
        *((_BYTE *)v180 + 38) = v136 >> 3;
        v137 = sub_BB20();
        v138 = sub_BA60(v137, v124, 3u);
        if ( v138 < 0 )
        {
          sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_Bool");
        }
        else
        {
          *((_BYTE *)v180 + 39) = v138 >> 3;
          v139 = sub_BB20();
          v140 = sub_BA60(v139, v124, 0x10u);
          if ( v140 < 0 )
          {
            sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_Short");
          }
          else
          {
            *((_BYTE *)v180 + 42) = v140 >> 3;
            v141 = sub_BB20();
            v142 = sub_BA60(v141, v124, 0x12u);
            if ( v142 < 0 )
            {
              sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_Long");
            }
            else
            {
              *((_BYTE *)v180 + 43) = v142 >> 3;
              v143 = sub_BB20();
              v144 = sub_BA60(v143, v124, 0x13u);
              if ( v144 < 0 )
              {
                sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_LongLong");
              }
              else
              {
                *((_BYTE *)v180 + 44) = v144 >> 3;
                v145 = sub_BB20();
                v146 = sub_BA60(v145, v124, 0x17u);
                if ( v146 >= 0 )
                {
                  v147 = v180;
                  *((_BYTE *)v180 + 45) = v146 >> 3;
                  *((_BYTE *)v147 + 40) = *((_BYTE *)v147 + 38);
                  if ( v130 == 32 )
                  {
                    *((_BYTE *)v147 + 41) = 4;
                    setinf_buf(98, v126, 16);
                    setinf_flag(3, 2, 1);
                  }
                  else
                  {
                    setinf_buf(98, v126, 16);
                    if ( v130 > 31 )
                    {
                      setinf_flag(3, 2, 1);
                      setinf_flag(3, 4, 1);
                    }
                  }
                  if ( *((_BYTE *)v180 + 36) == 6 )
                    setinf(38, 4);
                  v148 = sub_BB20();
                  sub_B9A0(v148, v124);
LABEL_146:
                  v149 = sub_BB20();
                  sub_9FA0((__int64)&v188, v149, v32);
                  v150 = sub_BB20();
                  v151 = sub_A020(v150, (__int64)sub_19540, a2);
                  LOBYTE(v151) = v151 == 0;
                  v103 = v151;
                  goto LABEL_101;
                }
                sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to get size of CXType_LongDouble");
              }
            }
          }
        }
      }
LABEL_178:
      ++*(_QWORD *)(a2 + 136);
      v175 = sub_BB20();
      sub_B9A0(v175, v124);
      goto LABEL_100;
    }
    sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to retrieve target info from the translation unit");
LABEL_99:
    ++*(_QWORD *)(a2 + 136);
    goto LABEL_100;
  }
  LODWORD(v180) = 0;
  while ( 1 )
  {
    v70 = sub_BB20();
    v71 = sub_AE30(v70, v32, (unsigned int)v180);
    v72 = sub_BB20();
    v73 = sub_AEC0(v72, v71);
    if ( v73 == 3 )
    {
      sub_C510((__int64)&v186, v71);
      v74 = s1;
      if ( v187.m128i_i64[0] )
        v74 = v186;
      sub_7470((__int64)"nonfatal: %s\n", v74);
      if ( v186 )
      {
        v187.m128i_i64[0] = 0;
        qfree(v186);
      }
      ++*(_QWORD *)(a2 + 136);
LABEL_64:
      v68 = 1;
      goto LABEL_65;
    }
    if ( v73 != 4 )
    {
      if ( (*(_BYTE *)(a2 + 108) & 1) != 0 )
      {
        sub_C510((__int64)&v186, v71);
        v121 = s1;
        if ( v187.m128i_i64[0] )
          v121 = v186;
        sub_7470((__int64)"%s\n", v121);
        if ( v186 )
        {
          v187.m128i_i64[0] = 0;
          qfree(v186);
        }
      }
      goto LABEL_64;
    }
    sub_C510((__int64)&v186, v71);
    v93 = *(_QWORD *)(a2 + 80);
    v94 = v186;
    v186 = nullptr;
    v95 = _mm_loadu_si128(&v187);
    v187 = 0;
    if ( v93 )
    {
      *(_QWORD *)(a2 + 88) = 0;
      v177 = v95;
      qfree(v93);
      v96 = v186;
      *(_QWORD *)(a2 + 80) = v94;
      *(__m128i *)(a2 + 88) = _mm_load_si128(&v177);
      if ( v96 )
      {
        v187.m128i_i64[0] = 0;
        qfree(v96);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 80) = v94;
      *(__m128i *)(a2 + 88) = v95;
    }
    ++*(_QWORD *)(a2 + 136);
    v68 = 0;
LABEL_65:
    v69 = sub_BB20();
    sub_AEF0(v69, v71);
    LODWORD(v180) = (_DWORD)v180 + 1;
    if ( v67 <= (int)v180 )
      break;
    if ( !v68 )
      goto LABEL_100;
  }
  if ( v68 )
    goto LABEL_123;
LABEL_100:
  v103 = 0;
LABEL_101:
  v104 = sub_BB20();
  sub_A050(v104, v32);
  v105 = sub_BB20();
  sub_A080(v105, (__int64)v179, v106, v107, v108, v109, v176, v177.m128i_i64[0]);
  v110 = v183;
  if ( v183 )
  {
    v111 = v184;
    if ( (_QWORD)v184 )
    {
      v112 = 0;
      do
      {
        v113 = (__int64 *)(v110 + 24 * v112);
        v114 = *v113;
        if ( *v113 )
        {
          v113[1] = 0;
          qfree(v114);
          v110 = v183;
        }
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)&v184 = 0;
    qfree(v110);
  }
  v115 = v181;
  if ( v181 )
  {
    v116 = v182;
    if ( (_QWORD)v182 )
    {
      v117 = 0;
      do
      {
        v118 = (__int64 *)(v115 + 24 * v117);
        v119 = *v118;
        if ( *v118 )
        {
          v118[1] = 0;
          qfree(v119);
          v115 = v181;
        }
        ++v117;
      }
      while ( v116 != v117 );
    }
    *(_QWORD *)&v182 = 0;
    qfree(v115);
  }
  return v103;
}
