__int64 __fastcall sub_5DC90(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  const char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  int *v9; // rdx
  __int64 v10; // rsi
  char *v11; // rax
  __m128i v12; // xmm0
  size_t v13; // rax
  __int64 v14; // r12
  size_t v15; // r15
  char *v16; // rax
  char *v17; // r13
  int v18; // r8d
  int *v19; // r12
  const char *v20; // rcx
  int v21; // r8d
  const char *v22; // rbx
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // r13
  size_t v26; // r12
  char *v27; // rax
  char *v28; // r13
  int v29; // r8d
  _QWORD *v30; // r12
  char *v31; // r13
  int v32; // eax
  size_t v33; // rax
  __int64 v34; // r14
  size_t v35; // r12
  __int64 v36; // rax
  __int64 *v37; // rsi
  unsigned __int64 v38; // rdi
  char *v39; // rbx
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  char **v42; // rax
  __int64 v43; // rbx
  size_t v44; // r12
  bool v45; // zf
  const char *v46; // r12
  __int64 v47; // r15
  const char *v48; // rcx
  _QWORD *v49; // r14
  _QWORD *v50; // r13
  const char *v51; // rbx
  const char *v52; // rsi
  _QWORD *v53; // r12
  const char *v54; // rdi
  int v55; // eax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rbx
  const char *v60; // rdi
  const char *v61; // rsi
  unsigned __int64 v62; // r12
  size_t v63; // r10
  const char *v64; // rsi
  const char *v65; // r14
  const char *v66; // rsi
  __int32 v67; // eax
  char **v68; // r12
  char **v69; // rbx
  const char *v70; // rdi
  int v71; // eax
  char *v72; // rdx
  char *v73; // rcx
  const char *v74; // rsi
  const char *v75; // rdx
  int v76; // ecx
  const char *v77; // r14
  int v78; // edx
  char dtype_by_size; // al
  const char *v80; // r9
  int v81; // ecx
  const char *v82; // rsi
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // r14
  __int64 v86; // r12
  _QWORD *v87; // rax
  char v88; // r12
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // r15
  unsigned int v96; // r15d
  __int64 *v97; // rdx
  __int64 v98; // r12
  __int64 v99; // rbx
  __int64 *v100; // rax
  bool v102; // cf
  int v103; // r14d
  int v104; // eax
  const char *v105; // r15
  const char *v106; // rsi
  _QWORD *v107; // r12
  __int64 v108; // r13
  int v109; // r15d
  unsigned __int64 v110; // r12
  __int64 v111; // r14
  const char *v112; // rdi
  const char *v113; // r8
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // r15
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  __m128i v119; // xmm0
  char **v120; // rax
  char *v121; // r15
  char *v122; // r12
  const char *v123; // rdi
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  const char *v127; // rax
  int v128; // edx
  __int32 v129; // eax
  const void *v130; // r14
  __int64 v131; // r14
  int v132; // edx
  int v133; // eax
  __int64 v134; // rcx
  __int64 *v135; // rbx
  __m128i *v136; // rsi
  __m128i si128; // xmm0
  const char *v138; // rsi
  const char *v139; // rdi
  const char *v140; // r15
  __int64 v141; // rax
  __int64 v142; // [rsp+8h] [rbp-178h]
  __int64 v143; // [rsp+10h] [rbp-170h]
  unsigned __int64 v145; // [rsp+20h] [rbp-160h]
  _QWORD *v146; // [rsp+28h] [rbp-158h]
  __int64 v147; // [rsp+38h] [rbp-148h]
  char v148; // [rsp+44h] [rbp-13Ch]
  char v149; // [rsp+45h] [rbp-13Bh]
  char v150; // [rsp+46h] [rbp-13Ah]
  char v151; // [rsp+47h] [rbp-139h]
  _QWORD *v152; // [rsp+48h] [rbp-138h]
  int v153; // [rsp+48h] [rbp-138h]
  char *v154; // [rsp+50h] [rbp-130h]
  int v155; // [rsp+50h] [rbp-130h]
  char *s2; // [rsp+68h] [rbp-118h]
  char *s2a; // [rsp+68h] [rbp-118h]
  int s2b; // [rsp+68h] [rbp-118h]
  __m128i v160; // [rsp+70h] [rbp-110h] BYREF
  __int64 v161; // [rsp+88h] [rbp-F8h] BYREF
  __int64 *v162; // [rsp+90h] [rbp-F0h] BYREF
  __int128 v163; // [rsp+98h] [rbp-E8h]
  char *v164; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v165; // [rsp+B8h] [rbp-C8h]
  __int64 v166; // [rsp+D0h] [rbp-B0h] BYREF
  __int128 v167; // [rsp+D8h] [rbp-A8h]
  char *v168; // [rsp+F0h] [rbp-90h] BYREF
  __m128i v169; // [rsp+F8h] [rbp-88h] BYREF
  char v170[8]; // [rsp+110h] [rbp-70h] BYREF
  int v171; // [rsp+118h] [rbp-68h] BYREF
  _QWORD *v172; // [rsp+120h] [rbp-60h]
  int *v173; // [rsp+128h] [rbp-58h]
  int *v174; // [rsp+130h] [rbp-50h]
  __int64 v175; // [rsp+138h] [rbp-48h]
  unsigned __int64 v176; // [rsp+148h] [rbp-38h]

  v5 = src;
  v176 = __readfsqword(0x28u);
  v6 = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
  if ( *(_QWORD *)(v6 + 8) )
    v5 = *(const char **)v6;
  v162 = nullptr;
  v7 = *(_QWORD *)(a1 + 872);
  v163 = 0;
  sub_70460(
    a1,
    (unsigned int)"GDB: reloading registers from target info and applying IDA mappings from %s.cfg\n",
    v7,
    a4,
    a5);
  if ( !*(_QWORD *)(a2 + 80) )
  {
    sub_14020((__int64)"AUTOHIDE REGISTRY\n%s: no features have been found", *(const char **)(a1 + 872));
    v96 = 0;
    goto LABEL_126;
  }
  sub_52B00(a1);
  v173 = &v171;
  v171 = 0;
  v172 = nullptr;
  v174 = &v171;
  v175 = 0;
  v168 = nullptr;
  v169 = 0;
  v168 = (char *)qvector_reserve();
  v169.m128i_i64[0] = 1;
  *v168 = 0;
  v8 = sub_573E0((__int64)v170, (__int64)&v168);
  if ( v9 )
  {
    if ( v9 != &v171 && v8 == nullptr )
    {
      v138 = src;
      if ( *((_QWORD *)v9 + 5) )
        v138 = *((const char **)v9 + 4);
      v139 = src;
      if ( v169.m128i_i64[0] )
        v139 = v168;
      strcmp(v139, v138);
    }
    v10 = operator new(0x38u);
    v11 = v168;
    v12 = _mm_loadu_si128(&v169);
    v168 = nullptr;
    *(_QWORD *)(v10 + 32) = v11;
    *(__m128i *)(v10 + 40) = v12;
    v169 = 0;
    std::_Rb_tree_insert_and_rebalance();
    ++v175;
  }
  if ( v168 )
  {
    v169.m128i_i64[0] = 0;
    qfree();
  }
  v168 = nullptr;
  v169 = 0;
  if ( v5 )
  {
    v13 = strlen(v5);
    v14 = v13 + 1;
    v15 = v13;
    v16 = (char *)qvector_reserve();
    v169.m128i_i64[0] = v14;
    v168 = v16;
    memmove(v16, v5, v15);
    v168[v15] = 0;
    v17 = v168;
    v19 = (int *)sub_56B20((__int64)&qword_9ABA0, (__int64)&v168);
    if ( v17 )
    {
      v169.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v19 = (int *)sub_56B20((__int64)&qword_9ABA0, (__int64)&v168);
  }
  v20 = "not ";
  v143 = 0;
  if ( v19 != &dword_9ABA8 )
  {
    v20 = (const char *)&unk_7D386;
    v143 = (__int64)(v19 + 14);
  }
  sub_70460(a1, (unsigned int)"GDB: architecture '%s' %sfound in IDA_FEATURES\n", (_DWORD)v5, (_DWORD)v20, v18);
  if ( !*(_QWORD *)(a2 + 80) )
  {
LABEL_119:
    if ( (_QWORD)v163 )
    {
      v135 = v162;
      v136 = (__m128i *)*v162;
      if ( (unsigned __int64)v162[2] <= 0x11 )
      {
        v141 = qvector_reserve();
        *v135 = v141;
        v136 = (__m128i *)v141;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_82450);
      v135[1] = 18;
      v136[1].m128i_i8[0] = 115;
      *v136 = si128;
      *(_BYTE *)(*v135 + 17) = 0;
    }
    goto LABEL_120;
  }
  v149 = 0;
  v151 = 0;
  v150 = 0;
  v145 = 0;
  v148 = 0;
  do
  {
    v22 = src;
    v23 = *(_QWORD *)(a2 + 72) + 144 * v145;
    v146 = (_QWORD *)v23;
    if ( *(_QWORD *)(v23 + 8) )
      v22 = *(const char **)v23;
    sub_70460(
      a1,
      (unsigned int)"GDB: reloading %d registers for feature '%s'\n",
      *(_DWORD *)(v23 + 32),
      (_DWORD)v22,
      v21);
    if ( v143 )
    {
      v168 = nullptr;
      v169 = 0;
      if ( v22 )
      {
        v24 = strlen(v22);
        v25 = v24 + 1;
        v26 = v24;
        v27 = (char *)qvector_reserve();
        v169.m128i_i64[0] = v25;
        v168 = v27;
        memmove(v27, v22, v26);
        v168[v26] = 0;
        v28 = v168;
        v30 = sub_56C30(v143, (__int64)&v168);
        if ( v28 )
        {
          v169.m128i_i64[0] = 0;
          qfree();
        }
        if ( v30 != (_QWORD *)(v143 + 8) )
        {
LABEL_23:
          sub_70460(
            a1,
            (unsigned int)"GDB: feature '%s' %sfound in IDA_FEATURES\n",
            (_DWORD)v22,
            (unsigned int)&unk_7D386,
            v29);
          v31 = (char *)(v30 + 7);
          if ( v30[8] > 1u )
            v22 = (const char *)v30[7];
          goto LABEL_25;
        }
      }
      else
      {
        v30 = sub_56C30(v143, (__int64)&v168);
        if ( v30 != (_QWORD *)(v143 + 8) )
          goto LABEL_23;
      }
      sub_70460(a1, (unsigned int)"GDB: feature '%s' %sfound in IDA_FEATURES\n", (_DWORD)v22, (unsigned int)"not ", v29);
    }
    v31 = nullptr;
LABEL_25:
    v32 = strcmp(v22, "General registers");
    v168 = nullptr;
    v169 = 0;
    v148 |= v32 == 0;
    if ( v22 )
    {
      v33 = strlen(v22);
      v34 = v33 + 1;
      v35 = v33;
      v168 = (char *)qvector_reserve();
      v169.m128i_i64[0] = v34;
      memmove(v168, v22, v35);
      v168[v35] = 0;
    }
    v36 = v163;
    v37 = v162;
    v38 = v163 + 1;
    if ( &v168 < (char **)v162 || &v168 >= (char **)&v162[3 * *((_QWORD *)&v163 + 1)] )
    {
      if ( *((_QWORD *)&v163 + 1) < v38 )
      {
        v162 = (__int64 *)qvector_reserve();
        v37 = v162;
        v36 = v163;
      }
      v119 = _mm_loadu_si128(&v169);
      v120 = (char **)&v37[3 * v36];
      *v120 = v168;
      *(__m128i *)(v120 + 1) = v119;
      *(_QWORD *)&v163 = v163 + 1;
    }
    else
    {
      v39 = v168;
      v40 = _mm_loadl_epi64(&v169);
      v168 = nullptr;
      v41 = _mm_loadl_epi64((const __m128i *)&v169.m128i_u64[1]);
      v169 = 0;
      if ( *((_QWORD *)&v163 + 1) < v38 )
      {
        v160.m128i_i64[0] = v41.m128i_i64[0];
        v160.m128i_i64[1] = v40.m128i_i64[0];
        v162 = (__int64 *)qvector_reserve();
        v37 = v162;
        v41 = _mm_loadl_epi64(&v160);
        v40 = _mm_loadl_epi64((const __m128i *)&v160.m128i_u64[1]);
        v36 = v163;
      }
      v42 = (char **)&v37[3 * v36];
      *v42 = v39;
      *(__m128i *)(v42 + 1) = _mm_unpacklo_epi64(v40, v41);
      *(_QWORD *)&v163 = v163 + 1;
      if ( v168 )
      {
        v169.m128i_i64[0] = 0;
        qfree();
      }
    }
    v43 = v146[3];
    v147 = v43 + 136LL * v146[4];
    if ( v43 == v147 )
      goto LABEL_117;
    v160.m128i_i64[1] = v146[3];
    do
    {
      v164 = nullptr;
      v165 = 0;
      v44 = *(_QWORD *)(v160.m128i_i64[1] + 8);
      if ( v44 )
      {
        v164 = (char *)qalloc_or_throw();
        *((_QWORD *)&v165 + 1) = v44;
        memcpy(v164, *(const void **)v160.m128i_i64[1], v44);
        *(_QWORD *)&v165 = v44;
      }
      qstrupr();
      v166 = 0;
      v168 = nullptr;
      v167 = 0;
      v169 = 0;
      v45 = *(_QWORD *)(v160.m128i_i64[1] + 48) == 0;
      v161 = 0;
      v160.m128i_i32[0] = 0;
      if ( !v45 )
      {
        v46 = *(const char **)(v160.m128i_i64[1] + 40);
        if ( !strcmp(v46, "code_ptr") )
        {
          if ( !v151 )
          {
            v151 = 1;
            v160.m128i_i32[0] = 18;
            if ( !v31 )
            {
LABEL_137:
              v68 = nullptr;
              goto LABEL_89;
            }
            goto LABEL_41;
          }
          v160.m128i_i32[0] = 16;
        }
        else
        {
          v160.m128i_i32[0] = 16 * (strcmp(v46, "data_ptr") == 0);
        }
      }
      if ( !v31 )
        goto LABEL_137;
LABEL_41:
      v47 = v165;
      if ( !*((_QWORD *)v31 + 5) )
        goto LABEL_67;
      v48 = src;
      v154 = v31;
      v152 = v31 + 32;
      v49 = v31 + 32;
      v50 = *((_QWORD **)v31 + 5);
      if ( (_QWORD)v165 )
        v48 = v164;
      s2 = v164;
      v51 = v48;
      while ( 1 )
      {
        v57 = v50[5];
        if ( !v47 )
          break;
        if ( v57 )
          goto LABEL_54;
        v52 = s2;
        v53 = v50;
        v54 = src;
LABEL_47:
        v55 = strcmp(v54, v52);
        v56 = (_QWORD *)v50[2];
        v50 = (_QWORD *)v50[3];
        if ( v55 >= 0 )
        {
          v49 = v53;
          v50 = v56;
        }
        if ( !v50 )
        {
          v31 = v154;
          v59 = v152;
          goto LABEL_57;
        }
      }
      if ( v57 )
      {
LABEL_54:
        v54 = (const char *)v50[4];
        v53 = v50;
        v52 = v51;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v58 = v50[2];
        if ( !v58 )
          break;
        v49 = v50;
        v50 = (_QWORD *)v50[2];
        if ( *(_QWORD *)(v58 + 40) )
          goto LABEL_54;
      }
      v107 = v50;
      v59 = v152;
      v31 = v154;
      v49 = v107;
LABEL_57:
      if ( v59 != v49 )
      {
        if ( v49[5] )
        {
          v60 = src;
          v61 = (const char *)v49[4];
          if ( v47 )
            v60 = s2;
LABEL_61:
          if ( strcmp(v60, v61) >= 0 )
            goto LABEL_62;
        }
        else
        {
          if ( v47 )
          {
            v60 = s2;
            v61 = src;
            goto LABEL_61;
          }
LABEL_62:
          if ( &v164 != v49 + 7 )
          {
            v62 = v49[8];
            if ( v62 && (v63 = v62 - 1, v62 != 1) )
            {
              v130 = (const void *)v49[7];
              if ( *((_QWORD *)&v165 + 1) < v62 )
              {
                s2 = (char *)qvector_reserve();
                v63 = v62 - 1;
                v164 = s2;
              }
              *(_QWORD *)&v165 = v62;
              memmove(s2, v130, v63);
              v164[v62 - 1] = 0;
            }
            else
            {
              *(_QWORD *)&v165 = 0;
            }
          }
          qstrupr();
          v47 = v165;
        }
      }
LABEL_67:
      if ( !*((_QWORD *)v31 + 13) )
      {
        v65 = src;
        v64 = src;
        if ( v47 )
        {
LABEL_69:
          v65 = v164;
          goto LABEL_70;
        }
LABEL_139:
        v102 = v150 == 0;
        v150 = 1;
        v160.m128i_i32[0] |= v102 ? 20 : 16;
        goto LABEL_77;
      }
      v64 = *((const char **)v31 + 12);
      v65 = src;
      if ( v47 )
        goto LABEL_69;
LABEL_70:
      if ( !strcmp(v65, v64) )
        goto LABEL_139;
      v66 = src;
      if ( *((_QWORD *)v31 + 10) )
        v66 = *((const char **)v31 + 9);
      if ( !strcmp(v65, v66) )
      {
        v67 = 18;
        v45 = v151 == 0;
        v151 = 1;
        if ( !v45 )
          v67 = v160.m128i_i32[0] | 0x10;
        v160.m128i_i32[0] = v67;
      }
      else
      {
        v106 = src;
        if ( *((_QWORD *)v31 + 16) )
          v106 = *((const char **)v31 + 15);
        if ( !strcmp(v65, v106) )
        {
          v102 = v149 == 0;
          v149 = 1;
          v160.m128i_i32[0] |= v102 ? 24 : 16;
        }
        else
        {
          v121 = *((char **)v31 + 20);
          if ( v121 )
          {
            v122 = v31 + 152;
            do
            {
              while ( 1 )
              {
                v123 = src;
                if ( *((_QWORD *)v121 + 5) )
                  v123 = *((const char **)v121 + 4);
                v124 = strcmp(v123, v65);
                v125 = *((_QWORD *)v121 + 2);
                v126 = *((_QWORD *)v121 + 3);
                if ( v124 < 0 )
                  break;
                v122 = v121;
                v121 = *((char **)v121 + 2);
                if ( !v125 )
                  goto LABEL_185;
              }
              v121 = *((char **)v121 + 3);
            }
            while ( v126 );
LABEL_185:
            if ( v31 + 152 != v122 )
            {
              v127 = src;
              if ( *((_QWORD *)v122 + 5) )
                v127 = *((const char **)v122 + 4);
              v128 = strcmp(v65, v127);
              v129 = v160.m128i_i32[0] | 0x10;
              if ( v128 < 0 )
                v129 = v160.m128i_i32[0];
              v160.m128i_i32[0] = v129;
            }
          }
        }
      }
LABEL_77:
      v68 = *((char ***)v31 + 26);
      if ( v68 )
      {
        v69 = (char **)(v31 + 200);
        do
        {
          while ( 1 )
          {
            v70 = src;
            if ( v68[5] )
              v70 = v68[4];
            v71 = strcmp(v70, v65);
            v72 = v68[2];
            v73 = v68[3];
            if ( v71 < 0 )
              break;
            v69 = v68;
            v68 = (char **)v68[2];
            if ( !v72 )
              goto LABEL_84;
          }
          v68 = (char **)v68[3];
        }
        while ( v73 );
LABEL_84:
        if ( v31 + 200 != (char *)v69 )
        {
          v74 = src;
          if ( v69[5] )
            v74 = v69[4];
          if ( strcmp(v65, v74) >= 0 )
            v68 = (char **)sub_57800(
                             a1,
                             (__int64)v170,
                             &v161,
                             (__int64 *)&v168,
                             &v166,
                             v69 + 7,
                             *(int *)(v160.m128i_i64[1] + 24));
        }
      }
LABEL_89:
      v75 = src;
      if ( *(_QWORD *)(v160.m128i_i64[1] + 8) )
        v75 = *(const char **)v160.m128i_i64[1];
      sub_70460(
        a1,
        (unsigned int)"GDB:  register %s regnum %d bitsize %d flags %x\n",
        (_DWORD)v75,
        *(_DWORD *)(v160.m128i_i64[1] + 28),
        *(_DWORD *)(v160.m128i_i64[1] + 24));
      sub_57670(a1, (__int64)v170, (__int64)&v164);
      v76 = *(_DWORD *)(v160.m128i_i64[1] + 24);
      if ( v68 )
      {
LABEL_92:
        if ( v76 != 64 )
          goto LABEL_93;
LABEL_149:
        if ( !*(_QWORD *)(v160.m128i_i64[1] + 48) )
          goto LABEL_134;
        v105 = *(const char **)(v160.m128i_i64[1] + 40);
LABEL_151:
        if ( strcmp(v105, "float") && strcmp(v105, "ieee_double") )
          goto LABEL_134;
        v78 = 64;
        dtype_by_size = 4;
        goto LABEL_99;
      }
      if ( !v146[7] )
        goto LABEL_140;
      s2a = v31;
      v108 = 0;
      v109 = 0;
      v110 = v146[7];
      v153 = *(_DWORD *)(v160.m128i_i64[1] + 24);
      v111 = *(_QWORD *)(v160.m128i_i64[1] + 48);
      v142 = v146[6];
      while ( 2 )
      {
        v114 = v142 + 80 * v108;
        v115 = *(_QWORD *)(v114 + 8);
        if ( v111 )
        {
          v112 = src;
          v113 = *(const char **)(v160.m128i_i64[1] + 40);
          if ( v115 )
            goto LABEL_170;
        }
        else
        {
          if ( !v115 )
            break;
          v113 = src;
LABEL_170:
          v112 = *(const char **)v114;
        }
        if ( strcmp(v112, v113) )
        {
          v108 = ++v109;
          if ( v109 < v110 )
            continue;
        }
        break;
      }
      v116 = v108;
      v117 = v110;
      v31 = s2a;
      v68 = nullptr;
      v76 = v153;
      if ( v116 != v117 )
      {
        v118 = sub_57800(a1, (__int64)v170, &v161, (__int64 *)&v168, &v166, (_QWORD *)(v142 + 80 * v116 + 56), v153);
        v76 = *(_DWORD *)(v160.m128i_i64[1] + 24);
        if ( v118 )
        {
          v68 = (char **)v118;
          goto LABEL_92;
        }
      }
LABEL_140:
      if ( *(_QWORD *)(v160.m128i_i64[1] + 8) > 3u )
      {
        v131 = *(_QWORD *)v160.m128i_i64[1];
        v132 = **(unsigned __int8 **)v160.m128i_i64[1];
        if ( v132 != 120
          || *(_BYTE *)(v131 + 1) != 109
          || *(_BYTE *)(v131 + 2) != 109
          || !*(_QWORD *)(v160.m128i_i64[1] + 48)
          || (v105 = *(const char **)(v160.m128i_i64[1] + 40),
              v155 = **(unsigned __int8 **)v160.m128i_i64[1],
              s2b = v76,
              v133 = strcmp(v105, "vec128"),
              v76 = s2b,
              v132 = v155,
              v133) )
        {
          if ( v132 != 121 || *(_BYTE *)(v131 + 1) != 109 || *(_BYTE *)(v131 + 2) != 109 )
            goto LABEL_141;
          v160.m128i_i32[0] |= 0x100u;
          v68 = off_98900;
          goto LABEL_92;
        }
        v160.m128i_i32[0] |= 0x100u;
        v68 = off_98908;
        if ( s2b == 64 )
          goto LABEL_151;
LABEL_93:
        if ( v76 == 80 )
        {
LABEL_146:
          if ( !*(_QWORD *)(v160.m128i_i64[1] + 48) || strcmp(*(const char **)(v160.m128i_i64[1] + 40), "i387_ext") )
            goto LABEL_134;
          v78 = 80;
          dtype_by_size = 5;
          goto LABEL_99;
        }
        if ( v76 != 32 )
          goto LABEL_134;
LABEL_95:
        if ( !*(_QWORD *)(v160.m128i_i64[1] + 48) )
          goto LABEL_134;
        v77 = *(const char **)(v160.m128i_i64[1] + 40);
        if ( strcmp(v77, "float") )
        {
          if ( strcmp(v77, "ieee_single") )
            goto LABEL_134;
        }
        v78 = 32;
        dtype_by_size = 3;
        goto LABEL_99;
      }
LABEL_141:
      v103 = v76;
      if ( !*(_QWORD *)(v160.m128i_i64[1] + 96)
        || (v104 = strcmp(*(const char **)(v160.m128i_i64[1] + 88), "ieee754"), v76 = v103, v104) )
      {
        if ( v76 == 128 )
        {
          if ( *(_QWORD *)(v160.m128i_i64[1] + 72) && !strcmp(*(const char **)(v160.m128i_i64[1] + 64), "vector")
            || *(_QWORD *)(v160.m128i_i64[1] + 48)
            && ((v140 = *(const char **)(v160.m128i_i64[1] + 40), !strcmp(v140, "neon_q")) || !strcmp(v140, "aarch64v")) )
          {
            v160.m128i_i32[0] |= 0x100u;
            v68 = off_988C0;
          }
          goto LABEL_134;
        }
        goto LABEL_92;
      }
      v160.m128i_i32[0] |= 0x100u;
      if ( v103 == 32 )
      {
        v68 = off_988F8;
        goto LABEL_95;
      }
      v68 = off_988F0;
      if ( v103 == 64 )
        goto LABEL_149;
      if ( v103 == 80 )
        goto LABEL_146;
LABEL_134:
      dtype_by_size = get_dtype_by_size();
      v78 = *(_DWORD *)(v160.m128i_i64[1] + 24);
LABEL_99:
      v80 = src;
      if ( (_QWORD)v165 )
        v80 = v164;
      v81 = v78 + 7;
      v82 = src;
      if ( v78 >= 0 )
        v81 = v78;
      v83 = v81 >> 3;
      if ( *(_QWORD *)(v160.m128i_i64[1] + 8) )
        v82 = *(const char **)v160.m128i_i64[1];
      sub_5D2A0(
        (__int64 *)a1,
        v82,
        *(_DWORD *)(v160.m128i_i64[1] + 32),
        v83,
        *(_DWORD *)(v160.m128i_i64[1] + 28),
        v80,
        v160.m128i_i32[0],
        dtype_by_size,
        (unsigned __int8)(1 << v145),
        (__int64)v68,
        v161);
      if ( v168 )
      {
        v169.m128i_i64[0] = 0;
        qfree();
      }
      v84 = v166;
      if ( v166 )
      {
        v85 = v167;
        if ( (_QWORD)v167 )
        {
          v86 = 0;
          do
          {
            v87 = (_QWORD *)(v84 + 24 * v86);
            if ( *v87 )
            {
              v87[1] = 0;
              qfree();
              v84 = v166;
            }
            ++v86;
          }
          while ( v85 != v86 );
        }
        *(_QWORD *)&v167 = 0;
        qfree();
      }
      if ( v164 )
      {
        *(_QWORD *)&v165 = 0;
        qfree();
      }
      v160.m128i_i64[1] += 136;
    }
    while ( v147 != v160.m128i_i64[1] );
LABEL_117:
    ++v145;
  }
  while ( v145 < *(_QWORD *)(a2 + 80) );
  if ( !v148 )
    goto LABEL_119;
LABEL_120:
  sub_53D40(a1, (__int64 *)&v162);
  v88 = sub_52E70(a1);
  sub_53CC0((_QWORD *)a1, (__int64)&v162, v89, v90, v91, v92);
  if ( v88 )
  {
    v93 = *(_QWORD *)(a1 + 1376);
    v94 = 112LL * *(_QWORD *)(a1 + 1384);
    v95 = v93 + v94;
    if ( v93 + v94 != v93 )
      goto LABEL_122;
LABEL_124:
    v96 = 1;
  }
  else
  {
    sub_5D980(a1);
    v93 = *(_QWORD *)(a1 + 1376);
    v134 = 112LL * *(_QWORD *)(a1 + 1384);
    v95 = v93 + v134;
    if ( v93 + v134 != v93 )
    {
      do
      {
LABEL_122:
        sub_4D480((__int64 *)(v93 + 48));
        v93 += 112;
      }
      while ( v93 != v95 );
      if ( v88 )
        goto LABEL_124;
    }
    v96 = -1;
  }
  sub_4A8C0(v172);
LABEL_126:
  v97 = v162;
  if ( v162 )
  {
    v98 = v163;
    if ( (_QWORD)v163 )
    {
      v99 = 0;
      do
      {
        v100 = &v97[3 * v99];
        if ( *v100 )
        {
          v100[1] = 0;
          qfree();
          v97 = v162;
        }
        ++v99;
      }
      while ( v98 != v99 );
    }
    *(_QWORD *)&v163 = 0;
    qfree();
  }
  return v96;
}

