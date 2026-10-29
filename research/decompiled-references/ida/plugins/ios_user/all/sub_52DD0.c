__int64 __fastcall sub_52DD0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int *v10; // rdx
  __int64 v11; // rsi
  char *v12; // rax
  __m128i v13; // xmm0
  size_t v14; // rax
  __int64 v15; // r12
  size_t v16; // r15
  char *v17; // rax
  char *v18; // r13
  int v19; // r8d
  int v20; // r9d
  int *v21; // r12
  const char *v22; // rcx
  int v23; // r8d
  int v24; // r9d
  const char *v25; // rbx
  __int64 v26; // rax
  size_t v27; // rax
  __int64 v28; // r13
  size_t v29; // r12
  char *v30; // rax
  char *v31; // r13
  int v32; // r8d
  int v33; // r9d
  _QWORD *v34; // r12
  char *v35; // r13
  int v36; // eax
  size_t v37; // rax
  __int64 v38; // r14
  size_t v39; // r12
  __int64 v40; // rax
  __int64 *v41; // rsi
  unsigned __int64 v42; // rdi
  char *v43; // rbx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  char **v46; // rax
  __int64 v47; // rbx
  size_t v48; // r12
  bool v49; // zf
  const char *v50; // r12
  __int64 v51; // r15
  const char *v52; // rcx
  _QWORD *v53; // r14
  _QWORD *v54; // r13
  const char *v55; // rbx
  const char *v56; // rsi
  _QWORD *v57; // r12
  const char *v58; // rdi
  int v59; // eax
  _QWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rbx
  const char *v64; // rdi
  const char *v65; // rsi
  unsigned __int64 v66; // r12
  size_t v67; // r10
  const char *v68; // rsi
  const char *v69; // r14
  const char *v70; // rsi
  __int32 v71; // eax
  char **v72; // r12
  char **v73; // rbx
  const char *v74; // rdi
  int v75; // eax
  char *v76; // rdx
  char *v77; // rcx
  const char *v78; // rsi
  const char *v79; // rdx
  int v80; // ecx
  const char *v81; // r14
  int v82; // edx
  char dtype_by_size; // al
  const char *v84; // r9
  int v85; // ecx
  const char *v86; // rsi
  int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // r14
  __int64 v90; // r12
  _QWORD *v91; // rax
  char v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rbx
  __int64 v98; // rcx
  __int64 v99; // r15
  unsigned int v100; // r15d
  __int64 *v101; // rdx
  __int64 v102; // r12
  __int64 v103; // rbx
  __int64 *v104; // rax
  bool v106; // cf
  int v107; // r14d
  int v108; // eax
  const char *v109; // r15
  const char *v110; // rsi
  _QWORD *v111; // r12
  __int64 v112; // r13
  int v113; // r15d
  unsigned __int64 v114; // r12
  __int64 v115; // r14
  const char *v116; // rdi
  const char *v117; // r8
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // r15
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  __m128i v123; // xmm0
  char **v124; // rax
  char *v125; // r15
  char *v126; // r12
  const char *v127; // rdi
  int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  const char *v131; // rax
  int v132; // edx
  __int32 v133; // eax
  const void *v134; // r14
  __int64 v135; // r14
  int v136; // edx
  int v137; // eax
  __int64 v138; // rcx
  __int64 *v139; // rbx
  __m128i *v140; // rsi
  __m128i si128; // xmm0
  const char *v142; // rsi
  const char *v143; // rdi
  const char *v144; // r15
  __int64 v145; // rax
  __int64 v146; // [rsp+8h] [rbp-178h]
  __int64 v147; // [rsp+10h] [rbp-170h]
  unsigned __int64 v149; // [rsp+20h] [rbp-160h]
  _QWORD *v150; // [rsp+28h] [rbp-158h]
  __int64 v151; // [rsp+38h] [rbp-148h]
  char v152; // [rsp+44h] [rbp-13Ch]
  char v153; // [rsp+45h] [rbp-13Bh]
  char v154; // [rsp+46h] [rbp-13Ah]
  char v155; // [rsp+47h] [rbp-139h]
  _QWORD *v156; // [rsp+48h] [rbp-138h]
  int v157; // [rsp+48h] [rbp-138h]
  char *v158; // [rsp+50h] [rbp-130h]
  int v159; // [rsp+50h] [rbp-130h]
  char *s2; // [rsp+68h] [rbp-118h]
  char *s2a; // [rsp+68h] [rbp-118h]
  int s2b; // [rsp+68h] [rbp-118h]
  __m128i v164; // [rsp+70h] [rbp-110h] BYREF
  __int64 v165; // [rsp+88h] [rbp-F8h] BYREF
  __int64 *v166; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v167; // [rsp+98h] [rbp-E8h]
  char *v168; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v169; // [rsp+B8h] [rbp-C8h]
  __int64 v170; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v171; // [rsp+D8h] [rbp-A8h]
  char *v172; // [rsp+F0h] [rbp-90h] BYREF
  __m128i v173; // [rsp+F8h] [rbp-88h] BYREF
  char v174[8]; // [rsp+110h] [rbp-70h] BYREF
  int v175; // [rsp+118h] [rbp-68h] BYREF
  _QWORD *v176; // [rsp+120h] [rbp-60h]
  int *v177; // [rsp+128h] [rbp-58h]
  int *v178; // [rsp+130h] [rbp-50h]
  __int64 v179; // [rsp+138h] [rbp-48h]
  unsigned __int64 v180; // [rsp+148h] [rbp-38h]

  v6 = s;
  v180 = __readfsqword(0x28u);
  v7 = qword_8FB50 + 144LL * *(int *)(a1 + 1176);
  if ( *(_QWORD *)(v7 + 8) )
    v6 = *(const char **)v7;
  v166 = nullptr;
  v8 = *(_QWORD *)(a1 + 872);
  v167 = 0;
  sub_65BB0(
    a1,
    (unsigned int)"GDB: reloading registers from target info and applying IDA mappings from %s.cfg\n",
    v8,
    a4,
    a5,
    a6);
  if ( !*(_QWORD *)(a2 + 80) )
  {
    sub_130A0((__int64)"AUTOHIDE REGISTRY\n%s: no features have been found", *(const char **)(a1 + 872));
    v100 = 0;
    goto LABEL_126;
  }
  sub_47E40(a1);
  v177 = &v175;
  v175 = 0;
  v176 = nullptr;
  v178 = &v175;
  v179 = 0;
  v172 = nullptr;
  v173 = 0;
  v172 = (char *)qvector_reserve();
  v173.m128i_i64[0] = 1;
  *v172 = 0;
  v9 = sub_4C690((__int64)v174, (__int64)&v172);
  if ( v10 )
  {
    if ( v10 != &v175 && v9 == nullptr )
    {
      v142 = s;
      if ( *((_QWORD *)v10 + 5) )
        v142 = *((const char **)v10 + 4);
      v143 = s;
      if ( v173.m128i_i64[0] )
        v143 = v172;
      strcmp(v143, v142);
    }
    v11 = operator new(0x38u);
    v12 = v172;
    v13 = _mm_loadu_si128(&v173);
    v172 = nullptr;
    *(_QWORD *)(v11 + 32) = v12;
    *(__m128i *)(v11 + 40) = v13;
    v173 = 0;
    std::_Rb_tree_insert_and_rebalance();
    ++v179;
  }
  if ( v172 )
  {
    v173.m128i_i64[0] = 0;
    qfree();
  }
  v172 = nullptr;
  v173 = 0;
  if ( v6 )
  {
    v14 = strlen(v6);
    v15 = v14 + 1;
    v16 = v14;
    v17 = (char *)qvector_reserve();
    v173.m128i_i64[0] = v15;
    v172 = v17;
    memmove(v17, v6, v16);
    v172[v16] = 0;
    v18 = v172;
    v21 = (int *)sub_4BBE0((__int64)&qword_8F9C0, (__int64)&v172);
    if ( v18 )
    {
      v173.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v21 = (int *)sub_4BBE0((__int64)&qword_8F9C0, (__int64)&v172);
  }
  v22 = "not ";
  v147 = 0;
  if ( v21 != &dword_8F9C8 )
  {
    v22 = (const char *)&unk_71F21;
    v147 = (__int64)(v21 + 14);
  }
  sub_65BB0(a1, (unsigned int)"GDB: architecture '%s' %sfound in IDA_FEATURES\n", (_DWORD)v6, (_DWORD)v22, v19, v20);
  if ( !*(_QWORD *)(a2 + 80) )
  {
LABEL_119:
    if ( (_QWORD)v167 )
    {
      v139 = v166;
      v140 = (__m128i *)*v166;
      if ( (unsigned __int64)v166[2] <= 0x11 )
      {
        v145 = qvector_reserve();
        *v139 = v145;
        v140 = (__m128i *)v145;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_77500);
      v139[1] = 18;
      v140[1].m128i_i8[0] = 115;
      *v140 = si128;
      *(_BYTE *)(*v139 + 17) = 0;
    }
    goto LABEL_120;
  }
  v153 = 0;
  v155 = 0;
  v154 = 0;
  v149 = 0;
  v152 = 0;
  do
  {
    v25 = s;
    v26 = *(_QWORD *)(a2 + 72) + 144 * v149;
    v150 = (_QWORD *)v26;
    if ( *(_QWORD *)(v26 + 8) )
      v25 = *(const char **)v26;
    sub_65BB0(
      a1,
      (unsigned int)"GDB: reloading %d registers for feature '%s'\n",
      *(_DWORD *)(v26 + 32),
      (_DWORD)v25,
      v23,
      v24);
    if ( v147 )
    {
      v172 = nullptr;
      v173 = 0;
      if ( v25 )
      {
        v27 = strlen(v25);
        v28 = v27 + 1;
        v29 = v27;
        v30 = (char *)qvector_reserve();
        v173.m128i_i64[0] = v28;
        v172 = v30;
        memmove(v30, v25, v29);
        v172[v29] = 0;
        v31 = v172;
        v34 = sub_4BCF0(v147, (__int64)&v172);
        if ( v31 )
        {
          v173.m128i_i64[0] = 0;
          qfree();
        }
        if ( v34 != (_QWORD *)(v147 + 8) )
        {
LABEL_23:
          sub_65BB0(
            a1,
            (unsigned int)"GDB: feature '%s' %sfound in IDA_FEATURES\n",
            (_DWORD)v25,
            (unsigned int)&unk_71F21,
            v32,
            v33);
          v35 = (char *)(v34 + 7);
          if ( v34[8] > 1u )
            v25 = (const char *)v34[7];
          goto LABEL_25;
        }
      }
      else
      {
        v34 = sub_4BCF0(v147, (__int64)&v172);
        if ( v34 != (_QWORD *)(v147 + 8) )
          goto LABEL_23;
      }
      sub_65BB0(
        a1,
        (unsigned int)"GDB: feature '%s' %sfound in IDA_FEATURES\n",
        (_DWORD)v25,
        (unsigned int)"not ",
        v32,
        v33);
    }
    v35 = nullptr;
LABEL_25:
    v36 = strcmp(v25, "General registers");
    v172 = nullptr;
    v173 = 0;
    v152 |= v36 == 0;
    if ( v25 )
    {
      v37 = strlen(v25);
      v38 = v37 + 1;
      v39 = v37;
      v172 = (char *)qvector_reserve();
      v173.m128i_i64[0] = v38;
      memmove(v172, v25, v39);
      v172[v39] = 0;
    }
    v40 = v167;
    v41 = v166;
    v42 = v167 + 1;
    if ( &v172 < (char **)v166 || &v172 >= (char **)&v166[3 * *((_QWORD *)&v167 + 1)] )
    {
      if ( *((_QWORD *)&v167 + 1) < v42 )
      {
        v166 = (__int64 *)qvector_reserve();
        v41 = v166;
        v40 = v167;
      }
      v123 = _mm_loadu_si128(&v173);
      v124 = (char **)&v41[3 * v40];
      *v124 = v172;
      *(__m128i *)(v124 + 1) = v123;
      *(_QWORD *)&v167 = v167 + 1;
    }
    else
    {
      v43 = v172;
      v44 = _mm_loadl_epi64(&v173);
      v172 = nullptr;
      v45 = _mm_loadl_epi64((const __m128i *)&v173.m128i_u64[1]);
      v173 = 0;
      if ( *((_QWORD *)&v167 + 1) < v42 )
      {
        v164.m128i_i64[0] = v45.m128i_i64[0];
        v164.m128i_i64[1] = v44.m128i_i64[0];
        v166 = (__int64 *)qvector_reserve();
        v41 = v166;
        v45 = _mm_loadl_epi64(&v164);
        v44 = _mm_loadl_epi64((const __m128i *)&v164.m128i_u64[1]);
        v40 = v167;
      }
      v46 = (char **)&v41[3 * v40];
      *v46 = v43;
      *(__m128i *)(v46 + 1) = _mm_unpacklo_epi64(v44, v45);
      *(_QWORD *)&v167 = v167 + 1;
      if ( v172 )
      {
        v173.m128i_i64[0] = 0;
        qfree();
      }
    }
    v47 = v150[3];
    v151 = v47 + 136LL * v150[4];
    if ( v47 == v151 )
      goto LABEL_117;
    v164.m128i_i64[1] = v150[3];
    do
    {
      v168 = nullptr;
      v169 = 0;
      v48 = *(_QWORD *)(v164.m128i_i64[1] + 8);
      if ( v48 )
      {
        v168 = (char *)qalloc_or_throw();
        *((_QWORD *)&v169 + 1) = v48;
        memcpy(v168, *(const void **)v164.m128i_i64[1], v48);
        *(_QWORD *)&v169 = v48;
      }
      qstrupr();
      v170 = 0;
      v172 = nullptr;
      v171 = 0;
      v173 = 0;
      v49 = *(_QWORD *)(v164.m128i_i64[1] + 48) == 0;
      v165 = 0;
      v164.m128i_i32[0] = 0;
      if ( !v49 )
      {
        v50 = *(const char **)(v164.m128i_i64[1] + 40);
        if ( !strcmp(v50, "code_ptr") )
        {
          if ( !v155 )
          {
            v155 = 1;
            v164.m128i_i32[0] = 18;
            if ( !v35 )
            {
LABEL_137:
              v72 = nullptr;
              goto LABEL_89;
            }
            goto LABEL_41;
          }
          v164.m128i_i32[0] = 16;
        }
        else
        {
          v164.m128i_i32[0] = 16 * (strcmp(v50, "data_ptr") == 0);
        }
      }
      if ( !v35 )
        goto LABEL_137;
LABEL_41:
      v51 = v169;
      if ( !*((_QWORD *)v35 + 5) )
        goto LABEL_67;
      v52 = s;
      v158 = v35;
      v156 = v35 + 32;
      v53 = v35 + 32;
      v54 = *((_QWORD **)v35 + 5);
      if ( (_QWORD)v169 )
        v52 = v168;
      s2 = v168;
      v55 = v52;
      while ( 1 )
      {
        v61 = v54[5];
        if ( !v51 )
          break;
        if ( v61 )
          goto LABEL_54;
        v56 = s2;
        v57 = v54;
        v58 = s;
LABEL_47:
        v59 = strcmp(v58, v56);
        v60 = (_QWORD *)v54[2];
        v54 = (_QWORD *)v54[3];
        if ( v59 >= 0 )
        {
          v53 = v57;
          v54 = v60;
        }
        if ( !v54 )
        {
          v35 = v158;
          v63 = v156;
          goto LABEL_57;
        }
      }
      if ( v61 )
      {
LABEL_54:
        v58 = (const char *)v54[4];
        v57 = v54;
        v56 = v55;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v62 = v54[2];
        if ( !v62 )
          break;
        v53 = v54;
        v54 = (_QWORD *)v54[2];
        if ( *(_QWORD *)(v62 + 40) )
          goto LABEL_54;
      }
      v111 = v54;
      v63 = v156;
      v35 = v158;
      v53 = v111;
LABEL_57:
      if ( v63 != v53 )
      {
        if ( v53[5] )
        {
          v64 = s;
          v65 = (const char *)v53[4];
          if ( v51 )
            v64 = s2;
LABEL_61:
          if ( strcmp(v64, v65) >= 0 )
            goto LABEL_62;
        }
        else
        {
          if ( v51 )
          {
            v64 = s2;
            v65 = s;
            goto LABEL_61;
          }
LABEL_62:
          if ( &v168 != v53 + 7 )
          {
            v66 = v53[8];
            if ( v66 && (v67 = v66 - 1, v66 != 1) )
            {
              v134 = (const void *)v53[7];
              if ( *((_QWORD *)&v169 + 1) < v66 )
              {
                s2 = (char *)qvector_reserve();
                v67 = v66 - 1;
                v168 = s2;
              }
              *(_QWORD *)&v169 = v66;
              memmove(s2, v134, v67);
              v168[v66 - 1] = 0;
            }
            else
            {
              *(_QWORD *)&v169 = 0;
            }
          }
          qstrupr();
          v51 = v169;
        }
      }
LABEL_67:
      if ( !*((_QWORD *)v35 + 13) )
      {
        v69 = s;
        v68 = s;
        if ( v51 )
        {
LABEL_69:
          v69 = v168;
          goto LABEL_70;
        }
LABEL_139:
        v106 = v154 == 0;
        v154 = 1;
        v164.m128i_i32[0] |= v106 ? 20 : 16;
        goto LABEL_77;
      }
      v68 = *((const char **)v35 + 12);
      v69 = s;
      if ( v51 )
        goto LABEL_69;
LABEL_70:
      if ( !strcmp(v69, v68) )
        goto LABEL_139;
      v70 = s;
      if ( *((_QWORD *)v35 + 10) )
        v70 = *((const char **)v35 + 9);
      if ( !strcmp(v69, v70) )
      {
        v71 = 18;
        v49 = v155 == 0;
        v155 = 1;
        if ( !v49 )
          v71 = v164.m128i_i32[0] | 0x10;
        v164.m128i_i32[0] = v71;
      }
      else
      {
        v110 = s;
        if ( *((_QWORD *)v35 + 16) )
          v110 = *((const char **)v35 + 15);
        if ( !strcmp(v69, v110) )
        {
          v106 = v153 == 0;
          v153 = 1;
          v164.m128i_i32[0] |= v106 ? 24 : 16;
        }
        else
        {
          v125 = *((char **)v35 + 20);
          if ( v125 )
          {
            v126 = v35 + 152;
            do
            {
              while ( 1 )
              {
                v127 = s;
                if ( *((_QWORD *)v125 + 5) )
                  v127 = *((const char **)v125 + 4);
                v128 = strcmp(v127, v69);
                v129 = *((_QWORD *)v125 + 2);
                v130 = *((_QWORD *)v125 + 3);
                if ( v128 < 0 )
                  break;
                v126 = v125;
                v125 = *((char **)v125 + 2);
                if ( !v129 )
                  goto LABEL_185;
              }
              v125 = *((char **)v125 + 3);
            }
            while ( v130 );
LABEL_185:
            if ( v35 + 152 != v126 )
            {
              v131 = s;
              if ( *((_QWORD *)v126 + 5) )
                v131 = *((const char **)v126 + 4);
              v132 = strcmp(v69, v131);
              v133 = v164.m128i_i32[0] | 0x10;
              if ( v132 < 0 )
                v133 = v164.m128i_i32[0];
              v164.m128i_i32[0] = v133;
            }
          }
        }
      }
LABEL_77:
      v72 = *((char ***)v35 + 26);
      if ( v72 )
      {
        v73 = (char **)(v35 + 200);
        do
        {
          while ( 1 )
          {
            v74 = s;
            if ( v72[5] )
              v74 = v72[4];
            v75 = strcmp(v74, v69);
            v76 = v72[2];
            v77 = v72[3];
            if ( v75 < 0 )
              break;
            v73 = v72;
            v72 = (char **)v72[2];
            if ( !v76 )
              goto LABEL_84;
          }
          v72 = (char **)v72[3];
        }
        while ( v77 );
LABEL_84:
        if ( v35 + 200 != (char *)v73 )
        {
          v78 = s;
          if ( v73[5] )
            v78 = v73[4];
          if ( strcmp(v69, v78) >= 0 )
            v72 = (char **)sub_4CAC0(
                             a1,
                             (__int64)v174,
                             &v165,
                             (__int64 *)&v172,
                             &v170,
                             v73 + 7,
                             *(int *)(v164.m128i_i64[1] + 24));
        }
      }
LABEL_89:
      v79 = s;
      if ( *(_QWORD *)(v164.m128i_i64[1] + 8) )
        v79 = *(const char **)v164.m128i_i64[1];
      sub_65BB0(
        a1,
        (unsigned int)"GDB:  register %s regnum %d bitsize %d flags %x\n",
        (_DWORD)v79,
        *(_DWORD *)(v164.m128i_i64[1] + 28),
        *(_DWORD *)(v164.m128i_i64[1] + 24),
        v164.m128i_i32[0]);
      sub_4C920(a1, (__int64)v174, (__int64)&v168);
      v80 = *(_DWORD *)(v164.m128i_i64[1] + 24);
      if ( v72 )
      {
LABEL_92:
        if ( v80 != 64 )
          goto LABEL_93;
LABEL_149:
        if ( !*(_QWORD *)(v164.m128i_i64[1] + 48) )
          goto LABEL_134;
        v109 = *(const char **)(v164.m128i_i64[1] + 40);
LABEL_151:
        if ( strcmp(v109, "float") && strcmp(v109, "ieee_double") )
          goto LABEL_134;
        v82 = 64;
        dtype_by_size = 4;
        goto LABEL_99;
      }
      if ( !v150[7] )
        goto LABEL_140;
      s2a = v35;
      v112 = 0;
      v113 = 0;
      v114 = v150[7];
      v157 = *(_DWORD *)(v164.m128i_i64[1] + 24);
      v115 = *(_QWORD *)(v164.m128i_i64[1] + 48);
      v146 = v150[6];
      while ( 2 )
      {
        v118 = v146 + 80 * v112;
        v119 = *(_QWORD *)(v118 + 8);
        if ( v115 )
        {
          v116 = s;
          v117 = *(const char **)(v164.m128i_i64[1] + 40);
          if ( v119 )
            goto LABEL_170;
        }
        else
        {
          if ( !v119 )
            break;
          v117 = s;
LABEL_170:
          v116 = *(const char **)v118;
        }
        if ( strcmp(v116, v117) )
        {
          v112 = ++v113;
          if ( v113 < v114 )
            continue;
        }
        break;
      }
      v120 = v112;
      v121 = v114;
      v35 = s2a;
      v72 = nullptr;
      v80 = v157;
      if ( v120 != v121 )
      {
        v122 = sub_4CAC0(a1, (__int64)v174, &v165, (__int64 *)&v172, &v170, (_QWORD *)(v146 + 80 * v120 + 56), v157);
        v80 = *(_DWORD *)(v164.m128i_i64[1] + 24);
        if ( v122 )
        {
          v72 = (char **)v122;
          goto LABEL_92;
        }
      }
LABEL_140:
      if ( *(_QWORD *)(v164.m128i_i64[1] + 8) > 3u )
      {
        v135 = *(_QWORD *)v164.m128i_i64[1];
        v136 = **(unsigned __int8 **)v164.m128i_i64[1];
        if ( v136 != 120
          || *(_BYTE *)(v135 + 1) != 109
          || *(_BYTE *)(v135 + 2) != 109
          || !*(_QWORD *)(v164.m128i_i64[1] + 48)
          || (v109 = *(const char **)(v164.m128i_i64[1] + 40),
              v159 = **(unsigned __int8 **)v164.m128i_i64[1],
              s2b = v80,
              v137 = strcmp(v109, "vec128"),
              v80 = s2b,
              v136 = v159,
              v137) )
        {
          if ( v136 != 121 || *(_BYTE *)(v135 + 1) != 109 || *(_BYTE *)(v135 + 2) != 109 )
            goto LABEL_141;
          v164.m128i_i32[0] |= 0x100u;
          v72 = off_8C900;
          goto LABEL_92;
        }
        v164.m128i_i32[0] |= 0x100u;
        v72 = off_8C908;
        if ( s2b == 64 )
          goto LABEL_151;
LABEL_93:
        if ( v80 == 80 )
        {
LABEL_146:
          if ( !*(_QWORD *)(v164.m128i_i64[1] + 48) || strcmp(*(const char **)(v164.m128i_i64[1] + 40), "i387_ext") )
            goto LABEL_134;
          v82 = 80;
          dtype_by_size = 5;
          goto LABEL_99;
        }
        if ( v80 != 32 )
          goto LABEL_134;
LABEL_95:
        if ( !*(_QWORD *)(v164.m128i_i64[1] + 48) )
          goto LABEL_134;
        v81 = *(const char **)(v164.m128i_i64[1] + 40);
        if ( strcmp(v81, "float") )
        {
          if ( strcmp(v81, "ieee_single") )
            goto LABEL_134;
        }
        v82 = 32;
        dtype_by_size = 3;
        goto LABEL_99;
      }
LABEL_141:
      v107 = v80;
      if ( !*(_QWORD *)(v164.m128i_i64[1] + 96)
        || (v108 = strcmp(*(const char **)(v164.m128i_i64[1] + 88), "ieee754"), v80 = v107, v108) )
      {
        if ( v80 == 128 )
        {
          if ( *(_QWORD *)(v164.m128i_i64[1] + 72) && !strcmp(*(const char **)(v164.m128i_i64[1] + 64), "vector")
            || *(_QWORD *)(v164.m128i_i64[1] + 48)
            && ((v144 = *(const char **)(v164.m128i_i64[1] + 40), !strcmp(v144, "neon_q")) || !strcmp(v144, "aarch64v")) )
          {
            v164.m128i_i32[0] |= 0x100u;
            v72 = off_8C8C0;
          }
          goto LABEL_134;
        }
        goto LABEL_92;
      }
      v164.m128i_i32[0] |= 0x100u;
      if ( v107 == 32 )
      {
        v72 = off_8C8F8;
        goto LABEL_95;
      }
      v72 = off_8C8F0;
      if ( v107 == 64 )
        goto LABEL_149;
      if ( v107 == 80 )
        goto LABEL_146;
LABEL_134:
      dtype_by_size = get_dtype_by_size();
      v82 = *(_DWORD *)(v164.m128i_i64[1] + 24);
LABEL_99:
      v84 = s;
      if ( (_QWORD)v169 )
        v84 = v168;
      v85 = v82 + 7;
      v86 = s;
      if ( v82 >= 0 )
        v85 = v82;
      v87 = v85 >> 3;
      if ( *(_QWORD *)(v164.m128i_i64[1] + 8) )
        v86 = *(const char **)v164.m128i_i64[1];
      sub_523E0(
        (__int64 *)a1,
        v86,
        *(_DWORD *)(v164.m128i_i64[1] + 32),
        v87,
        *(_DWORD *)(v164.m128i_i64[1] + 28),
        v84,
        v164.m128i_i32[0],
        dtype_by_size,
        (unsigned __int8)(1 << v149),
        (__int64)v72,
        v165);
      if ( v172 )
      {
        v173.m128i_i64[0] = 0;
        qfree();
      }
      v88 = v170;
      if ( v170 )
      {
        v89 = v171;
        if ( (_QWORD)v171 )
        {
          v90 = 0;
          do
          {
            v91 = (_QWORD *)(v88 + 24 * v90);
            if ( *v91 )
            {
              v91[1] = 0;
              qfree();
              v88 = v170;
            }
            ++v90;
          }
          while ( v89 != v90 );
        }
        *(_QWORD *)&v171 = 0;
        qfree();
      }
      if ( v168 )
      {
        *(_QWORD *)&v169 = 0;
        qfree();
      }
      v164.m128i_i64[1] += 136;
    }
    while ( v151 != v164.m128i_i64[1] );
LABEL_117:
    ++v149;
  }
  while ( v149 < *(_QWORD *)(a2 + 80) );
  if ( !v152 )
    goto LABEL_119;
LABEL_120:
  sub_49080(a1, (__int64 *)&v166);
  v92 = sub_481B0(a1);
  sub_49000((_QWORD *)a1, (__int64)&v166, v93, v94, v95, v96);
  if ( v92 )
  {
    v97 = *(_QWORD *)(a1 + 1376);
    v98 = 112LL * *(_QWORD *)(a1 + 1384);
    v99 = v97 + v98;
    if ( v97 + v98 != v97 )
      goto LABEL_122;
LABEL_124:
    v100 = 1;
  }
  else
  {
    sub_52AC0(a1);
    v97 = *(_QWORD *)(a1 + 1376);
    v138 = 112LL * *(_QWORD *)(a1 + 1384);
    v99 = v97 + v138;
    if ( v97 + v138 != v97 )
    {
      do
      {
LABEL_122:
        sub_42740((__int64 *)(v97 + 48));
        v97 += 112;
      }
      while ( v97 != v99 );
      if ( v92 )
        goto LABEL_124;
    }
    v100 = -1;
  }
  sub_400C0(v176);
LABEL_126:
  v101 = v166;
  if ( v166 )
  {
    v102 = v167;
    if ( (_QWORD)v167 )
    {
      v103 = 0;
      do
      {
        v104 = &v101[3 * v103];
        if ( *v104 )
        {
          v104[1] = 0;
          qfree();
          v101 = v166;
        }
        ++v103;
      }
      while ( v102 != v103 );
    }
    *(_QWORD *)&v167 = 0;
    qfree();
  }
  return v100;
}

