__int64 __fastcall sub_2B5C0(__int64 a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  void *v6; // rbx
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  void *v9; // rbx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 i; // r14
  _QWORD *v16; // rax
  __m128i v17; // xmm5
  bool v18; // zf
  __int64 v19; // r14
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rdx
  __m128i v25; // xmm0
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  size_t v29; // rax
  size_t v30; // rbx
  void *v31; // rdi
  size_t v32; // r14
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int16 v40; // ax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  int v48; // ebx
  unsigned __int64 v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  char v56; // al
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // r14
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rbx
  __int64 v62; // r15
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  bool v65; // cf
  unsigned __int64 v66; // r14
  __int64 v67; // rcx
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rax
  int v74; // esi
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // r8d
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rsi
  __m128i v82; // xmm0
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r14
  __int64 v85; // rsi
  int v86; // eax
  unsigned __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned int v90; // ebx
  __int32 v91; // esi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  char byte; // al
  unsigned __int64 j; // rdi
  __int64 v98; // rbx
  _QWORD *v99; // rax
  unsigned __int64 v100; // r10
  const __m128i *v101; // rdi
  const __m128i *v102; // rcx
  const __m128i *v103; // rax
  __m128i v104; // xmm0
  unsigned __int64 v105; // r9
  size_t v107; // r14
  __int64 v108; // r15
  char *v109; // r14
  void *v110; // rax
  __m128i v111; // xmm0
  size_t v112; // r14
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  _QWORD *v116; // rax
  __int64 v117; // rsi
  __m128i v118; // xmm1
  unsigned __int64 v119; // rdx
  __int64 v120; // rbx
  unsigned __int64 v121; // xmm0_8
  __m128i v122; // xmm1
  __int64 v123; // rax
  __int64 v124; // rbx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // [rsp-8h] [rbp-238h]
  unsigned __int64 v127; // [rsp+0h] [rbp-230h]
  char v128; // [rsp+Eh] [rbp-222h]
  char v129; // [rsp+Fh] [rbp-221h]
  __int64 v130; // [rsp+10h] [rbp-220h]
  __int64 v132; // [rsp+20h] [rbp-210h]
  unsigned __int64 v133; // [rsp+28h] [rbp-208h]
  __int64 v134; // [rsp+30h] [rbp-200h]
  unsigned __int64 v135; // [rsp+30h] [rbp-200h]
  unsigned __int64 v136; // [rsp+30h] [rbp-200h]
  unsigned __int64 v137; // [rsp+30h] [rbp-200h]
  unsigned __int64 v138; // [rsp+40h] [rbp-1F0h]
  char *src; // [rsp+50h] [rbp-1E0h]
  const char *srca; // [rsp+50h] [rbp-1E0h]
  size_t n; // [rsp+58h] [rbp-1D8h]
  size_t na; // [rsp+58h] [rbp-1D8h]
  __m128i v143; // [rsp+60h] [rbp-1D0h] BYREF
  __m128i v144; // [rsp+70h] [rbp-1C0h] BYREF
  __m128i v145; // [rsp+80h] [rbp-1B0h] BYREF
  __m128i v146; // [rsp+90h] [rbp-1A0h] BYREF
  const char *v147[2]; // [rsp+A0h] [rbp-190h] BYREF
  __int64 v148; // [rsp+B0h] [rbp-180h] BYREF
  __int128 v149; // [rsp+B8h] [rbp-178h]
  unsigned __int64 v150; // [rsp+D0h] [rbp-160h] BYREF
  __int128 v151; // [rsp+D8h] [rbp-158h]
  _OWORD v152[3]; // [rsp+F0h] [rbp-140h] BYREF
  __int128 v153; // [rsp+120h] [rbp-110h]
  __int64 v154; // [rsp+130h] [rbp-100h]
  __m128i v155[2]; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v156; // [rsp+160h] [rbp-D0h]
  __m128i v157; // [rsp+170h] [rbp-C0h]
  __m128i v158; // [rsp+180h] [rbp-B0h]
  char v159; // [rsp+190h] [rbp-A0h] BYREF
  unsigned __int64 v160; // [rsp+1F8h] [rbp-38h]

  v160 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a3 + 440) )
    sub_28840(a3);
  v6 = nullptr;
  v7 = *(_QWORD *)(a3 + 256);
  v8 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v144 = v8;
    v107 = 80 * v7;
    v6 = (void *)qalloc_or_throw();
    memcpy(v6, *(const void **)(a3 + 248), v107);
    v8 = _mm_load_si128(&v144);
  }
  if ( *(_QWORD *)(a2 + 256) )
  {
    *(_QWORD *)(a2 + 264) = 0;
    v144 = v8;
    qfree();
    v8 = _mm_load_si128(&v144);
  }
  *(_QWORD *)(a2 + 256) = v6;
  *(__m128i *)(a2 + 264) = v8;
  if ( !*(_BYTE *)(a3 + 440) )
    sub_28840(a3);
  v9 = nullptr;
  v10 = *(_QWORD *)(a3 + 232);
  v11 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v10 )
  {
    v144 = v11;
    v112 = 72 * v10;
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *(const void **)(a3 + 224), v112);
    v11 = _mm_load_si128(&v144);
  }
  if ( *(_QWORD *)(a2 + 280) )
  {
    *(_QWORD *)(a2 + 288) = 0;
    v144 = v11;
    qfree();
    v11 = _mm_load_si128(&v144);
  }
  *(_QWORD *)(a2 + 280) = v9;
  *(__m128i *)(a2 + 288) = v11;
  sub_2B040((__int64)&v150, (_QWORD *)a3, nullptr, a4);
  v12 = v151;
  v143.m128i_i64[0] = v150;
  if ( (_QWORD)v151 )
  {
    src = (char *)qalloc_or_throw();
    v108 = v143.m128i_i64[0];
    v109 = src;
    v144.m128i_i64[0] = 0;
    do
    {
      *(_QWORD *)v109 = 0;
      *(_OWORD *)(v109 + 8) = 0;
      if ( *(_QWORD *)(v108 + 8) )
      {
        na = *(_QWORD *)(v108 + 8);
        v110 = (void *)qalloc_or_throw();
        *(_QWORD *)v109 = v110;
        *((_QWORD *)v109 + 2) = na;
        memcpy(v110, *(const void **)v108, na);
        *((_QWORD *)v109 + 1) = na;
      }
      ++v144.m128i_i64[0];
      v109 += 24;
      v108 += 24;
    }
    while ( v12 != v144.m128i_i64[0] );
    v13 = *(_QWORD *)(a2 + 304);
    v111 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    v144 = v111;
    if ( !v13 )
    {
      v18 = v143.m128i_i64[0] == 0;
      *(__m128i *)(a2 + 312) = v111;
      *(_QWORD *)(a2 + 304) = src;
      if ( v18 )
        goto LABEL_28;
      goto LABEL_23;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 304);
    if ( !v13 )
    {
      v18 = v143.m128i_i64[0] == 0;
      *(_OWORD *)(a2 + 312) = 0;
      if ( v18 )
        goto LABEL_28;
      goto LABEL_27;
    }
    src = nullptr;
    v144 = 0;
  }
  v14 = *(_QWORD *)(a2 + 312);
  if ( v14 )
  {
    for ( i = 0; i != v14; ++i )
    {
      v16 = (_QWORD *)(v13 + 24 * i);
      if ( *v16 )
      {
        v16[1] = 0;
        qfree();
        v13 = *(_QWORD *)(a2 + 304);
      }
    }
  }
  *(_QWORD *)(a2 + 312) = 0;
  qfree();
  v17 = _mm_load_si128(&v144);
  v18 = v143.m128i_i64[0] == 0;
  *(_QWORD *)(a2 + 304) = src;
  *(__m128i *)(a2 + 312) = v17;
  if ( !v18 )
  {
    if ( !v12 )
    {
LABEL_27:
      qfree();
      goto LABEL_28;
    }
LABEL_23:
    v19 = 0;
    v20 = (_QWORD *)v143.m128i_i64[0];
    do
    {
      if ( *v20 )
      {
        v20[1] = 0;
        qfree();
      }
      ++v19;
      v20 += 3;
    }
    while ( v12 != v19 );
    goto LABEL_27;
  }
LABEL_28:
  v148 = 0;
  v149 = 0;
  v21 = *(_QWORD *)(a3 + 128);
  memset(v152, 0, sizeof(v152));
  v154 = 0;
  v127 = v21;
  v133 = *(_QWORD *)(a2 + 288);
  LODWORD(v21) = *(_DWORD *)(a2 + 364);
  v153 = 0;
  if ( (~(_BYTE)v21 & 0x60) == 0 )
  {
    v113 = *(_QWORD *)(a2 + 32);
    if ( v113 )
    {
      if ( v133 > 1 )
      {
        v22 = *(_QWORD *)(a2 + 280);
        v114 = 0;
        v115 = *(_QWORD *)(v22 + 24);
        v116 = (_QWORD *)(v22 + 32);
        do
        {
          ++v114;
          v117 = *v116 + v115;
          v115 = v116[8];
          if ( v117 != v115 )
            goto LABEL_31;
          v116 += 9;
        }
        while ( v133 - 1 != v114 );
      }
      v118 = _mm_loadu_si128((const __m128i *)(v113 + 8));
      v119 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v120 = v118.m128i_i64[0];
      v144 = _mm_srli_si128(v118, 8);
      v121 = _mm_add_epi64(v144, v118).m128i_u64[0];
      v150 = v118.m128i_i64[0] & v119;
      *(_QWORD *)&v151 = v119 & v121;
      if ( (v118.m128i_i64[0] & v119) < (v119 & v121) )
      {
        v143 = v118;
        sub_122C0(&v148, (const __m128i *)&v150);
        v118 = _mm_load_si128(&v143);
      }
      v143 = v118;
      qstrncpy();
      v122 = _mm_load_si128(&v143);
      *((_QWORD *)&v152[2] + 1) = 0;
      *(_QWORD *)&v153 = v144.m128i_i64[0];
      v123 = *(_QWORD *)(a1 + 8);
      *(__m128i *)((char *)&v152[1] + 8) = v122;
      v124 = *(_QWORD *)(v123 + 16) & v120;
      v125 = *(_QWORD *)(a2 + 288);
      *(_QWORD *)(a2 + 248) = v124;
      v133 = v125;
    }
  }
  if ( v133 )
  {
    v22 = *(_QWORD *)(a2 + 280);
LABEL_31:
    v132 = 0;
    v138 = 0;
    while ( 1 )
    {
      v143.m128i_i64[0] = v22 + v132;
      srca = (const char *)(v22 + v132 + 8);
      v29 = strlen(srca);
      v30 = v29;
      if ( v29 )
      {
        v31 = *(void **)(a2 + 152);
        v32 = v29 + 1;
        if ( *(_QWORD *)(a2 + 168) < v29 + 1 )
        {
          v94 = qvector_reserve();
          *(_QWORD *)(a2 + 152) = v94;
          v31 = (void *)v94;
        }
        *(_QWORD *)(a2 + 160) = v32;
        memmove(v31, srca, v30);
        *(_BYTE *)(*(_QWORD *)(a2 + 152) + v30) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 160) = 0;
      }
      v23 = *(_QWORD *)(a1 + 8);
      v24 = *(_QWORD *)(a2 + 8);
      v25 = _mm_loadu_si128((const __m128i *)(v143.m128i_i64[0] + 24));
      v26 = *(_QWORD *)(v23 + 16) & v25.m128i_i64[0];
      v145.m128i_i64[0] = v26;
      v145.m128i_i64[1] = *(_QWORD *)(v23 + 16) & _mm_add_epi64(_mm_srli_si128(v25, 8), v25).m128i_u64[0];
      v27 = v145.m128i_u64[1];
      v28 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(v24 + 16) != v28 && v28 != -1 && (v28 >= v145.m128i_i64[1] || v28 < v26) )
        goto LABEL_37;
      if ( *(_DWORD *)(a2 + 340) == 12 && !*(_DWORD *)(v143.m128i_i64[0] + 64) && v26 < v145.m128i_i64[1] )
      {
        if ( !strcmp(srca, "__BRANCH_STUBS") )
        {
          v25 = _mm_load_si128(&v145);
          *(__m128i *)(a1 + 13560) = v25;
        }
        else if ( !strcmp(srca, "__BRANCH_GOTS") )
        {
          v25 = _mm_load_si128(&v145);
          *(__m128i *)(a1 + 13576) = v25;
        }
      }
      v33 = *(_DWORD *)(a2 + 364);
      if ( (v33 & 0x20) != 0 )
      {
        v34 = *(_QWORD **)(a2 + 32);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v23 + 16);
          if ( !v26 && v34[2] >= v27 )
          {
            v26 = v35 & (v34[1] + *(_QWORD *)(v143.m128i_i64[0] + 40));
            v36 = v26 + *(_QWORD *)(v143.m128i_i64[0] + 32);
            v145.m128i_i64[0] = v26;
            v145.m128i_i64[1] = v35 & v36;
            v27 = v35 & v36;
          }
          v37 = *(_QWORD *)(a2 + 248);
          if ( v37 == -1 || v37 == v35 )
          {
            v93 = *(_QWORD *)(v143.m128i_i64[0] + 24);
            if ( v93 == v34[3] )
              *(_QWORD *)(a2 + 248) = v35 & v93;
          }
        }
      }
      n = 0;
      if ( (v33 & 0x50) != 0 )
        n = *(_QWORD *)(a2 + 24);
      if ( v27 < v26 )
      {
        sub_196C0((__int64)"%a: bad segment size %llx");
        goto LABEL_37;
      }
      if ( (_QWORD)v149 && v27 != v26 )
        sub_132E0(&v148, (unsigned __int64 *)&v145);
      v38 = *(_QWORD *)(a2 + 248);
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( (v38 == v39 || v38 == -1) && !*(_QWORD *)(v143.m128i_i64[0] + 40) )
      {
        if ( *(_QWORD *)(v143.m128i_i64[0] + 48) )
        {
          v88 = *(_QWORD *)(a2 + 32);
          v89 = *(_QWORD *)(v143.m128i_i64[0] + 24) & v39;
          *(_QWORD *)(a2 + 248) = v89;
          if ( v88 )
          {
            if ( v89 != (*(_QWORD *)(v88 + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL)) )
            {
              sub_19510((__int64)"Subfile is not at the expected load address!");
              v90 = 0;
              goto LABEL_245;
            }
          }
        }
      }
      v40 = *(_WORD *)(a1 + 13688);
      if ( (v40 & 0x2000) != 0 )
        goto LABEL_67;
      if ( (v40 & 8) != 0 )
        break;
      v129 = 0;
LABEL_68:
      v46 = (unsigned __int64)srca;
      qstrncpy();
      if ( (*(_BYTE *)(a2 + 365) & 1) != 0 )
      {
        v46 = (unsigned __int64)&v159;
        netnode_hashset();
      }
      if ( (*(_BYTE *)(a1 + 5200) & 2) != 0 && *(_QWORD *)(a2 + 120) )
      {
        if ( !*(_QWORD *)(v143.m128i_i64[0] + 32) )
        {
          v98 = v143.m128i_i64[0];
          sub_112F0(
            (__int64)"segment: \"%s\" (vm: 0x%llx) has vmsize of 0, loading entire mapping\n",
            srca,
            *(_QWORD *)(v143.m128i_i64[0] + 24));
          v99 = sub_1C420(*(_QWORD **)(a2 + 120), *(_QWORD *)(v98 + 24));
          if ( !v99 )
          {
            sub_112F0((__int64)"ERROR: segment: \"%s\" (vm: 0x%llx), couldn't find subcache for segment\n", srca, v100);
            goto LABEL_37;
          }
          v101 = (const __m128i *)v99[66];
          v102 = &v101[2 * v99[67]];
          if ( v101 == v102 )
            goto LABEL_229;
          v103 = (const __m128i *)v99[66];
          while ( v100 < v103->m128i_i64[0] || v100 >= v103->m128i_i64[1] + v103->m128i_i64[0] )
          {
            v103 += 2;
            if ( v102 == v103 )
              goto LABEL_229;
          }
          if ( !v103 )
          {
LABEL_229:
            sub_112F0(
              (__int64)"ERROR: segment: \"%s\" (vm: 0x%llx), couldn't find mapping info for segment\n",
              srca,
              v100);
            goto LABEL_37;
          }
          v104 = _mm_loadu_si128(v103);
          v145 = _mm_unpacklo_epi64(v104, _mm_add_epi64(_mm_srli_si128(v104, 8), v104));
          v105 = v103->m128i_i64[0];
          do
          {
            if ( v105 >= v101->m128i_i64[0] && v101->m128i_i64[1] >= v105 - v101->m128i_i64[0] )
              break;
            v101 += 2;
          }
          while ( v102 != v101 );
          file2base();
          v46 = (unsigned __int64)&v145;
          rangeset_t_add();
LABEL_203:
          v128 = 1;
          goto LABEL_98;
        }
        if ( v129 )
        {
LABEL_201:
          v49 = *(_QWORD *)(v143.m128i_i64[0] + 48);
          if ( !v49 )
            goto LABEL_203;
          v48 = *(_DWORD *)(a2 + 364);
          if ( (v48 & 0x40) != 0 )
            goto LABEL_203;
LABEL_77:
          if ( *(_DWORD *)(a2 + 340) == 1
            || (v47 = *(_QWORD *)(a2 + 8), v50 = *(_QWORD *)(a2 + 240), *(_QWORD *)(v47 + 16) != v50)
            && v50 != -1
            && *(_DWORD *)(v143.m128i_i64[0] + 64) )
          {
            v128 = v129;
            goto LABEL_98;
          }
          v51 = *(_QWORD *)(v143.m128i_i64[0] + 40);
          v144.m128i_i32[0] = *(_DWORD *)(v143.m128i_i64[0] + 68);
          if ( v51 )
          {
            v56 = 0;
            if ( (v144.m128i_i8[0] & 8) != 0 )
            {
              if ( *(_QWORD *)(v143.m128i_i64[0] + 32) )
              {
                v56 = 1;
                if ( v51 <= 0x3000 )
                {
                  v53 = v49;
                  goto LABEL_92;
                }
              }
            }
          }
          else
          {
            v52 = 28;
            if ( *(_BYTE *)(a3 + 161) )
              v52 = 32;
            v53 = v127;
            v54 = (v52 + *(unsigned int *)(a2 + 348) + 4095) & 0xFFFFFFFFFFFFF000LL;
            if ( v127 > v54 )
              v53 = v54;
            if ( v49 >= v54 )
              v53 = v49;
            if ( v145.m128i_i64[1] - v145.m128i_i64[0] < v54 )
              v145.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v145.m128i_i64[0] + v54);
            if ( (v144.m128i_i8[0] & 8) != 0 && *(_QWORD *)(v143.m128i_i64[0] + 32) )
            {
LABEL_92:
              v55 = v51 + v49;
              v65 = v55 < 0x3000;
              v18 = v55 == 12288;
              v49 = v53;
              v56 = !v65 && !v18;
            }
            else
            {
              v49 = v53;
              v56 = 0;
            }
          }
          if ( (v48 & 0x20) != 0 )
          {
            v57 = *(_QWORD *)(a2 + 72);
            v58 = *(_QWORD *)(v143.m128i_i64[0] + 24);
            if ( v58 >= v57 && v58 < v57 + *(_QWORD *)(a2 + 80) )
              v51 = v58 + *(unsigned int *)(a2 + 88) - v57;
          }
          v46 = a2;
          n = sub_22170(a1, a2, a3, v51, v49, (const char **)&v145, *(double *)v25.m128i_i64, 1, v56);
          v128 = v129;
          goto LABEL_98;
        }
        v48 = *(_DWORD *)(a2 + 364);
        if ( (v48 & 0x40) != 0 )
          goto LABEL_184;
      }
      else
      {
        if ( v129 )
          goto LABEL_201;
        if ( !*(_QWORD *)(v143.m128i_i64[0] + 32) )
          goto LABEL_37;
        v48 = *(_DWORD *)(a2 + 364);
        if ( (v48 & 0x40) != 0 )
        {
LABEL_184:
          v128 = 0;
          goto LABEL_98;
        }
      }
      v46 = a2;
      v128 = sub_21040(a1, a2, srca);
      if ( v128 )
        goto LABEL_37;
      v49 = *(_QWORD *)(v143.m128i_i64[0] + 48);
      if ( v49 )
        goto LABEL_77;
LABEL_98:
      v150 = 0;
      v151 = 0;
      if ( v145.m128i_i64[0] < (unsigned __int64)v145.m128i_i64[1] )
      {
        v46 = (unsigned __int64)&v145;
        sub_122C0((__int64 *)&v150, &v145);
      }
      v59 = *(int *)(*(_QWORD *)(a3 + 272) + 4 * v138);
      v60 = *(_QWORD *)(a2 + 264) - v59;
      v144.m128i_i64[0] = *(unsigned int *)(v143.m128i_i64[0] + 64);
      if ( v60 < v144.m128i_i64[0] )
      {
        v46 = v144.m128i_i64[0];
        sub_196C0((__int64)"Inconsistent section count (%zu vs %zu)");
        v144.m128i_i64[0] = v60;
      }
      if ( v144.m128i_i64[0] )
      {
        v61 = 0;
        v62 = 80 * v59;
        v130 = v132 + 72;
        while ( 1 )
        {
          if ( (unsigned __int8)callui(27, v46, v47) )
            sub_1A260(0, v46, v70, v71, v63, v72, v127);
          v73 = *(_QWORD *)(a2 + 256);
          v155[0] = _mm_loadu_si128((const __m128i *)(v73 + v62));
          v155[1] = _mm_loadu_si128((const __m128i *)(v73 + v62 + 16));
          v156 = _mm_loadu_si128((const __m128i *)(v73 + v62 + 32));
          v157 = _mm_loadu_si128((const __m128i *)(v73 + v62 + 48));
          v82 = _mm_loadu_si128((const __m128i *)(v73 + v62 + 64));
          v158 = v82;
          v47 = v156.m128i_u64[1];
          if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 && *(_DWORD *)(a2 + 340) == 1 )
            break;
          if ( !v156.m128i_i64[1] )
            goto LABEL_122;
          v63 = v145.m128i_u64[1];
          v64 = v145.m128i_i64[1] - v145.m128i_i64[0];
          if ( v145.m128i_i64[1] - v145.m128i_i64[0] < (unsigned __int64)v156.m128i_i64[1] )
            goto LABEL_145;
LABEL_106:
          v46 = v156.m128i_i64[0];
          v65 = __CFADD__(v156.m128i_i64[0], v47);
          v47 += v156.m128i_i64[0];
          v66 = v47;
          if ( *(_DWORD *)(a2 + 340) != 1 )
          {
            if ( v65 )
            {
              v135 = v156.m128i_i64[0];
              sub_196C0((__int64)"%a-%a: section size overflow, adjusting it.");
              v63 = v145.m128i_u64[1];
              v46 = v135;
              v66 = v145.m128i_u64[1];
              v156.m128i_i64[1] = v145.m128i_i64[1] - v135;
            }
            if ( v66 < v145.m128i_i64[0] || v63 < v46 )
            {
              sub_196C0((__int64)"%a-%a: the whole section is outside of the parent segment (%a..%a), skip it");
              goto LABEL_122;
            }
            if ( v46 < v145.m128i_i64[0] )
            {
              sub_196C0((__int64)"%a: section starts outside of the parent segment (%a..%a), adjusting it");
              v63 = v145.m128i_u64[1];
              v46 = v145.m128i_i64[0];
              v82 = _mm_unpacklo_epi64(
                      (__m128i)v145.m128i_u64[0],
                      (__m128i)(unsigned __int64)(v156.m128i_i64[1] + v156.m128i_i64[0] - v145.m128i_i64[0]));
              v156 = v82;
            }
            if ( v66 < v46 || v63 < v66 )
            {
              sub_196C0((__int64)"%a-%a: section ends outside of the parent segment (%a..%a), adjusting it");
              v66 = v145.m128i_u64[1];
              v156.m128i_i64[1] = v145.m128i_i64[1] - v156.m128i_i64[0];
            }
            goto LABEL_116;
          }
LABEL_128:
          if ( v66 < v46 )
            sub_1A260((__int64)"Cannot create section bigger then segment", v46, v47, v64, v63, v72, v127);
LABEL_116:
          v47 = *(_QWORD *)(a2 + 240);
          v67 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v68 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
          v69 = v67 & v66;
          v46 &= v67;
          v146.m128i_i64[0] = v46;
          v146.m128i_i64[1] = v67 & v66;
          if ( v47 == v68 || v47 == -1 )
          {
            v74 = *(_DWORD *)(a2 + 364);
            if ( *(_DWORD *)(a2 + 340) != 1 )
            {
              if ( (v74 & 0x40) != 0 || (v74 & 0x10) != 0 )
              {
                n = v156.m128i_u64[1];
              }
              else if ( v158.m128i_u8[0] == 1 || v158.m128i_u8[0] == 18 )
              {
                v95 = v156.m128i_i64[0];
                if ( v156.m128i_i64[0] < v66 )
                {
                  do
                  {
                    v136 = v95;
                    byte = get_byte();
                    v95 = v136;
                    if ( byte )
                      break;
                    v95 = v136 + 1;
                  }
                  while ( v136 + 1 < v66 );
                }
                if ( v66 == v95 || v145.m128i_i64[0] + *(_QWORD *)(v143.m128i_i64[0] + 48) == v95 )
                {
                  for ( j = v156.m128i_i64[0]; j < v95; ++j )
                  {
                    v137 = v95;
                    del_value();
                    v95 = v137;
                  }
                }
              }
              else if ( v156.m128i_i64[1] )
              {
                v91 = v156.m128i_i32[0];
                v92 = v157.m128i_u32[0];
                if ( v157.m128i_u32[0] != *(_QWORD *)(v143.m128i_i64[0] + 40) + v156.m128i_i64[0] - v145.m128i_i64[0] )
                {
                  if ( !byte_66C38 )
                  {
                    sub_19D90((__int64)"AUTOHIDE REGISTRY\n"
                                       "The input file has invalid section file offsets.\n"
                                       "Usually it means that it has been modified to hide its contents.\n");
                    byte_66C38 = 1;
                    v92 = v157.m128i_u32[0];
                    v91 = v156.m128i_i32[0];
                  }
                  sub_112F0(
                    (__int64)"0x%a: section file offset invalid: (%X; expected %llX); possibly the file was modified to h"
                             "inder analysis!\n",
                    *(double *)v82.m128i_i64,
                    v91,
                    v92);
                }
              }
LABEL_134:
              if ( v61 >= v144.m128i_i64[0] - 1 )
              {
                if ( v138 < v133 - 1 && (v75 = *(_QWORD *)(a2 + 280) + v130, *(_QWORD *)(v75 + 32)) )
                {
                  v134 = *(_QWORD *)(a2 + 280) + v130;
                  if ( !(unsigned __int8)sub_21040(a1, a2, (const char *)(v75 + 8)) )
                    sub_11960((__int64)&v146, *(_QWORD *)(v134 + 24));
                  v76 = *(_DWORD *)(a2 + 364);
                  if ( (v76 & 0x10) == 0 )
                  {
LABEL_140:
                    if ( (~(_BYTE)v76 & 0x60) != 0 )
                      goto LABEL_141;
                  }
                }
                else
                {
                  v76 = *(_DWORD *)(a2 + 364);
                  if ( (v76 & 0x10) == 0 )
                    goto LABEL_140;
                }
                if ( (*(_BYTE *)(v143.m128i_i64[0] + 60) & 4) != 0 )
                {
                  v80 = -4096;
                  v81 = 4095;
                }
                else
                {
                  v80 = -64;
                  v81 = 63;
                }
                sub_11960((__int64)&v146, v80 & (v145.m128i_i64[1] + v81));
                goto LABEL_141;
              }
              sub_11960((__int64)&v146, *(_QWORD *)(*(_QWORD *)(a2 + 256) + v62 + 112));
LABEL_141:
              v77 = strcmp(srca, "__DATA_CONST");
              LOBYTE(v78) = 1;
              if ( v77 )
              {
                v79 = strcmp(srca, "__OBJC_RO");
                LOBYTE(v78) = 1;
                if ( v79 )
                  v78 = *(_DWORD *)(v143.m128i_i64[0] + 60);
              }
              sub_1D380(a1, a2, v155, &v146, v78, n, (__int64 *)&v150);
              v46 = v126;
              goto LABEL_122;
            }
            v83 = v156.m128i_u64[1];
            n = v156.m128i_u64[1];
            if ( (v74 & 0x50) != 0 || (v158.m128i_u8[0] == 1 || v158.m128i_u8[0] == 18) && (v47 == -1 || v47 == v68) )
              goto LABEL_134;
            v84 = v157.m128i_u32[0];
            v85 = v156.m128i_i64[0];
LABEL_164:
            if ( v84 < v157.m128i_u32[2] && v84 + v83 >= v157.m128i_u32[2] )
              v83 = v157.m128i_u32[2] - v84;
            v147[0] = (const char *)(v85 & v67);
            v147[1] = (const char *)(v67 & (v85 + v83));
            qstrncpy();
            qstrncat();
            qstrncat();
            if ( (*(_BYTE *)(a2 + 364) & 0x20) != 0 )
            {
              v87 = *(_QWORD *)(a2 + 72);
              if ( v156.m128i_i64[0] >= v87 && v156.m128i_i64[0] < v87 + *(_QWORD *)(a2 + 80) )
                v84 = v156.m128i_i64[0] + *(unsigned int *)(a2 + 88) - v87;
            }
            n = sub_22170(a1, a2, a3, v84, v156.m128i_u64[1], v147, *(double *)v82.m128i_i64, 0, 0);
            goto LABEL_134;
          }
          if ( v47 < v69 && v47 >= v46 )
          {
            v86 = *(_DWORD *)(a2 + 364);
            if ( *(_DWORD *)(a2 + 340) == 1 || (v86 & 0x40) != 0 || (v86 & 0x10) != 0 )
            {
              v84 = v157.m128i_u32[0];
              v85 = v156.m128i_i64[0];
              if ( !v157.m128i_i32[0] && (*(_DWORD *)(a2 + 364) & 0x10) != 0 )
                v84 = v156.m128i_i64[0] + *(_QWORD *)(v143.m128i_i64[0] + 40) - *(_QWORD *)(v143.m128i_i64[0] + 24);
              v83 = v156.m128i_u64[1];
            }
            else
            {
              v84 = v157.m128i_u32[0];
              v83 = v156.m128i_u64[1];
              v85 = v156.m128i_i64[0];
            }
            goto LABEL_164;
          }
          if ( v46 < v69 )
          {
            v46 = (unsigned __int64)&v146;
            sub_132E0((__int64 *)&v150, (unsigned __int64 *)&v146);
          }
LABEL_122:
          ++v61;
          v62 += 80;
          if ( v144.m128i_i64[0] == v61 )
            goto LABEL_173;
        }
        v64 = v145.m128i_i64[1] - v145.m128i_i64[0];
        if ( v145.m128i_i64[1] - v145.m128i_i64[0] >= (unsigned __int64)v156.m128i_i64[1] )
        {
          v46 = v156.m128i_i64[0];
          v66 = v156.m128i_i64[0] + v156.m128i_i64[1];
          goto LABEL_128;
        }
LABEL_145:
        sub_196C0((__int64)"The size of section (%llx) is bigger then the size of segment (%a), adjusting it");
        v63 = v145.m128i_u64[1];
        v47 = v145.m128i_i64[1] - v145.m128i_i64[0];
        v156.m128i_i64[1] = v145.m128i_i64[1] - v145.m128i_i64[0];
        goto LABEL_106;
      }
LABEL_173:
      if ( (*(_DWORD *)(a2 + 340) != 1 || (*(_BYTE *)(a2 + 364) & 0x40) != 0)
        && (v128 || *(_QWORD *)(v143.m128i_i64[0] + 48))
        && (v129 || (*(_BYTE *)(a2 + 364) & 0x10) == 0 || strcmp(srca, "__LINKEDIT")) )
      {
        sub_22500(a1, a2, a3, (__int64)&v150, v143.m128i_i64[0]);
        if ( !v150 )
          goto LABEL_37;
LABEL_180:
        *(_QWORD *)&v151 = 0;
        qfree();
        goto LABEL_37;
      }
      if ( v150 )
        goto LABEL_180;
LABEL_37:
      ++v138;
      v132 += 72;
      if ( v138 == v133 )
        goto LABEL_240;
      v22 = *(_QWORD *)(a2 + 280);
    }
    if ( (*(_BYTE *)(a2 + 364) & 0x40) == 0 )
      sub_21040(a1, a2, srca);
    v41 = sub_19F30();
    if ( v41 < 0 )
      sub_1A260(
        0,
        (__int64)"AUTOHIDE DATABASE\nLoad segment '%s' (start 0x%08llX, size 0x%08llX)?",
        v42,
        v43,
        v44,
        v45,
        v127);
    if ( !v41 )
      goto LABEL_37;
LABEL_67:
    v129 = 1;
    goto LABEL_68;
  }
LABEL_240:
  if ( *(_QWORD *)(a2 + 152) )
  {
    *(_QWORD *)(a2 + 160) = 0;
    qfree();
    *(_QWORD *)(a2 + 152) = 0;
    *(_QWORD *)(a2 + 168) = 0;
  }
  if ( (_QWORD)v149 )
    sub_22500(a1, a2, a3, (__int64)&v148, (__int64)v152);
  v90 = 1;
LABEL_245:
  if ( v148 )
  {
    *(_QWORD *)&v149 = 0;
    qfree();
  }
  return v90;
}

