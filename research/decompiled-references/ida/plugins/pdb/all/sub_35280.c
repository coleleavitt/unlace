unsigned __int64 __fastcall sub_35280(__int64 a1, double a2, double a3, double a4)
{
  __int64 idati; // rdx
  __m128i *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  const __m128i *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v12; // r14
  __int64 v13; // rdi
  unsigned int type_ordinal; // eax
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // rbx
  void *v18; // rax
  const __m128i *v19; // r13
  __int64 v20; // r15
  const __m128i *v21; // rbp
  const char *v22; // rax
  const __m128i *v23; // r12
  __m128i *v24; // r13
  const __m128i *v25; // rbx
  const char *v26; // rdi
  int v27; // eax
  __int64 v28; // rax
  const char *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  const char *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdi
  _QWORD *v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // r15
  _QWORD *v50; // r13
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  const __m128i *i; // rbx
  size_t v55; // rbp
  __int64 v56; // r14
  __int64 v57; // rax
  __m128i v58; // xmm0
  size_t v59; // rbp
  unsigned __int64 v60; // rbp
  _DWORD *v61; // rsi
  size_t v62; // r14
  __m128i v63; // xmm0
  __m128i *v64; // rbp
  size_t v65; // r14
  __m128i v66; // xmm0
  size_t v67; // r8
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  __int64 v76; // rax
  __m128i v77; // xmm0
  const char *v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  char *v84; // rdi
  __int64 v85; // r15
  __int64 v86; // r14
  char *v87; // rbp
  __int64 v88; // rdi
  __int64 v89; // rdi
  const __m128i *v91; // r13
  void *v92; // rax
  const void *v93; // rsi
  char *v94; // rbp
  __int64 v95; // r13
  __int64 v96; // rax
  __int64 v97; // rdx
  __m128i v98; // xmm0
  __m128i v99; // xmm0
  char *v100; // rbp
  __int64 v101; // r15
  __m128i v102; // xmm0
  void *v103; // rax
  void *v104; // rax
  char *v105; // rax
  const void *v106; // rsi
  char *v107; // rax
  char *v108; // rbp
  const __m128i *v109; // [rsp+8h] [rbp-210h]
  __int64 v110; // [rsp+8h] [rbp-210h]
  int n; // [rsp+10h] [rbp-208h]
  size_t nc; // [rsp+10h] [rbp-208h]
  size_t nb; // [rsp+10h] [rbp-208h]
  size_t na; // [rsp+10h] [rbp-208h]
  const __m128i *v115; // [rsp+18h] [rbp-200h]
  char v116; // [rsp+27h] [rbp-1F1h]
  __int64 v117; // [rsp+28h] [rbp-1F0h]
  __int64 v118; // [rsp+38h] [rbp-1E0h] BYREF
  const char *v119; // [rsp+40h] [rbp-1D8h]
  __int128 v120; // [rsp+48h] [rbp-1D0h]
  void *src; // [rsp+58h] [rbp-1C0h] BYREF
  __int128 v122; // [rsp+60h] [rbp-1B8h]
  __m128i v123; // [rsp+70h] [rbp-1A8h]
  __int64 v124; // [rsp+80h] [rbp-198h]
  int v125; // [rsp+88h] [rbp-190h]
  void *v126; // [rsp+90h] [rbp-188h]
  __int128 v127; // [rsp+98h] [rbp-180h]
  __m128i v128; // [rsp+B0h] [rbp-168h] BYREF
  void *v129; // [rsp+C0h] [rbp-158h] BYREF
  size_t v130[2]; // [rsp+C8h] [rbp-150h]
  void *v131; // [rsp+D8h] [rbp-140h]
  size_t v132[2]; // [rsp+E0h] [rbp-138h]
  __int128 v133; // [rsp+F0h] [rbp-128h] BYREF
  __m128i v134; // [rsp+108h] [rbp-110h] BYREF
  __m128i v135; // [rsp+118h] [rbp-100h] BYREF
  __int64 v136; // [rsp+128h] [rbp-F0h]
  __int64 v137; // [rsp+130h] [rbp-E8h]
  __int8 v138; // [rsp+138h] [rbp-E0h]
  _BYTE s2[24]; // [rsp+140h] [rbp-D8h] BYREF
  __m128i v140; // [rsp+158h] [rbp-C0h] BYREF
  __int64 v141; // [rsp+168h] [rbp-B0h]
  __m128i v142; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v143; // [rsp+180h] [rbp-98h] BYREF
  __m128i v144; // [rsp+188h] [rbp-90h] BYREF
  __m128i v145; // [rsp+198h] [rbp-80h] BYREF
  __m128i v146; // [rsp+1A8h] [rbp-70h] BYREF
  __int64 v147; // [rsp+1B8h] [rbp-60h]
  __int64 v148; // [rsp+1C0h] [rbp-58h]
  __int8 v149; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v150; // [rsp+1D8h] [rbp-40h]

  v150 = __readfsqword(0x28u);
  n = 0;
  do
  {
    if ( !*(_QWORD *)(a1 + 296) )
      return v150 - __readfsqword(0x28u);
    v115 = (const __m128i *)(a1 + 264);
    v109 = *(const __m128i **)(a1 + 280);
    if ( v109 == (const __m128i *)(a1 + 264) )
      goto LABEL_117;
    v116 = 0;
    do
    {
      v12 = ::src;
      if ( v109[7].m128i_i64[1] )
        v12 = (const char *)v109[7].m128i_i64[0];
      v13 = *(_QWORD *)(a1 + 312);
      v6 = (__m128i *)v12;
      type_ordinal = get_type_ordinal(v13);
      if ( !type_ordinal )
      {
        memset(s2, 0, sizeof(s2));
        a2 = 0.0;
        if ( v12 )
        {
          v15 = strlen(v12);
          v16 = v15 + 1;
          v17 = v15;
          v18 = (void *)qvector_reserve(s2, 0, v15 + 1, 1);
          v6 = (__m128i *)v12;
          *(_QWORD *)&s2[8] = v16;
          *(_QWORD *)s2 = v18;
          memmove(v18, v12, v17);
          *(_BYTE *)(*(_QWORD *)s2 + v17) = 0;
          v19 = *(const __m128i **)(a1 + 272);
          v12 = *(const char **)s2;
          if ( !v19 )
            goto LABEL_40;
        }
        else
        {
          v19 = *(const __m128i **)(a1 + 272);
          if ( !v19 )
            goto LABEL_42;
        }
        v20 = *(_QWORD *)&s2[8];
        v21 = v115;
        v117 = a1;
        v22 = ::src;
        v23 = v19;
        if ( *(_QWORD *)&s2[8] )
          v22 = v12;
        v24 = (__m128i *)v22;
        while ( 2 )
        {
          v28 = v23[2].m128i_i64[1];
          if ( v20 )
          {
            v25 = v23;
            v6 = (__m128i *)v12;
            v26 = ::src;
            if ( v28 )
              goto LABEL_25;
          }
          else
          {
            if ( !v28 )
            {
              while ( 1 )
              {
                v8 = v23[1].m128i_i64[0];
                if ( !v8 )
                  break;
                v21 = v23;
                v23 = (const __m128i *)v23[1].m128i_i64[0];
                if ( *(_QWORD *)(v8 + 40) )
                  goto LABEL_33;
              }
              v91 = v23;
              a1 = v117;
              v21 = v91;
LABEL_35:
              if ( v21 == v115 )
                goto LABEL_40;
              if ( v21[2].m128i_i64[1] )
              {
                v29 = ::src;
                v6 = (__m128i *)v21[2].m128i_i64[0];
                if ( v20 )
                  v29 = v12;
LABEL_39:
                if ( strcmp(v29, v6->m128i_i8) < 0 )
                {
LABEL_40:
                  if ( v12 )
                  {
                    *(_QWORD *)&s2[8] = 0;
                    qfree(v12);
                  }
                  goto LABEL_42;
                }
              }
              else
              {
                v29 = v12;
                v6 = (__m128i *)::src;
                if ( v20 )
                  goto LABEL_39;
              }
              if ( v12 )
              {
                *(_QWORD *)&s2[8] = 0;
                qfree(v12);
              }
              if ( !v21[4].m128i_i64[0] && v21[7].m128i_i64[1] <= 1uLL )
              {
LABEL_42:
                v30 = v109[7].m128i_i64[0];
                if ( v30 )
                {
                  v109[7].m128i_i64[1] = 0;
                  qfree(v30);
                  v109[7].m128i_i64[0] = 0;
                  v109[8].m128i_i64[0] = 0;
                }
                goto LABEL_10;
              }
              goto LABEL_11;
            }
LABEL_33:
            v25 = v23;
LABEL_25:
            v26 = (const char *)v23[2].m128i_i64[0];
            v6 = v24;
          }
          v27 = strcmp(v26, v6->m128i_i8);
          v9 = (const __m128i *)v23[1].m128i_i64[0];
          v23 = (const __m128i *)v23[1].m128i_i64[1];
          if ( v27 >= 0 )
          {
            v21 = v25;
            v23 = v9;
          }
          if ( !v23 )
          {
            a1 = v117;
            goto LABEL_35;
          }
          continue;
        }
      }
      idati = *(_QWORD *)(a1 + 312);
      v128.m128i_i64[0] = 0;
      *(_WORD *)&s2[16] = 257;
      *(_QWORD *)&s2[8] = type_ordinal;
      if ( !idati )
        idati = get_idati(v13, v12);
      *(_QWORD *)s2 = idati;
      create_tinfo(&v128, 61, 189, s2);
      v6 = &v128;
      sub_34B90(&v109[3].m128i_i64[1], v128.m128i_i64, 0);
      v7 = v109[7].m128i_i64[0];
      if ( v7 )
      {
        v109[7].m128i_i64[1] = 0;
        qfree(v7);
        v109[7].m128i_i64[0] = 0;
        v109[8].m128i_i64[0] = 0;
      }
      clear_tinfo_t(&v128);
LABEL_10:
      v116 = 1;
LABEL_11:
      if ( v109[7].m128i_i64[1] <= 1uLL )
      {
        v128.m128i_i64[0] = 0;
        if ( !(unsigned __int8)create_tinfo(&v128, 13, 13, &v109[3].m128i_u64[1]) || !set_tinfo_property(&v128, 2, 4) )
        {
          a2 = 0.0;
          memset(s2, 0, sizeof(s2));
          v141 = 0x10000000000LL;
          v142.m128i_i32[0] = 1;
          v140 = 0;
          create_tinfo(&v128, 13, 13, s2);
          v31 = *(_QWORD *)s2;
          if ( *(_QWORD *)s2 )
          {
            if ( *(_QWORD *)&s2[8] )
            {
              v32 = 0;
              v33 = *(_QWORD *)&s2[8];
              do
              {
                v34 = (_QWORD *)(v31 + 144 * v32);
                clear_tinfo_t(v34 + 8);
                v35 = v34[5];
                if ( v35 )
                {
                  v34[6] = 0;
                  qfree(v35);
                }
                v36 = v34[2];
                if ( v36 )
                {
                  v34[3] = 0;
                  qfree(v36);
                }
                ++v32;
                v31 = *(_QWORD *)s2;
              }
              while ( v33 != v32 );
            }
            *(_QWORD *)&s2[8] = 0;
            qfree(v31);
          }
        }
        v37 = ::src;
        if ( v109[2].m128i_i64[1] )
          v37 = (const char *)v109[2].m128i_i64[0];
        v38 = *(_QWORD *)(a1 + 312);
        save_tinfo(&v128, v38, 0, v37, 3);
        v43 = std::_Rb_tree_increment(v109, v38, v39, v40, v41, v42, a2, a3, a4);
        v44 = std::_Rb_tree_rebalance_for_erase(v109, v115);
        v45 = *(_QWORD *)(v44 + 112);
        v46 = (_QWORD *)v44;
        if ( v45 )
        {
          *(_QWORD *)(v44 + 120) = 0;
          qfree(v45);
        }
        v47 = v46[7];
        if ( v47 )
        {
          if ( v46[8] )
          {
            v110 = v43;
            v48 = 0;
            v49 = v46[8];
            do
            {
              v50 = (_QWORD *)(v47 + 144 * v48);
              clear_tinfo_t(v50 + 8);
              v51 = v50[5];
              if ( v51 )
              {
                v50[6] = 0;
                qfree(v51);
              }
              v52 = v50[2];
              if ( v52 )
              {
                v50[3] = 0;
                qfree(v52);
              }
              ++v48;
              v47 = v46[7];
            }
            while ( v49 != v48 );
            v43 = v110;
          }
          v46[8] = 0;
          qfree(v47);
        }
        v53 = v46[4];
        if ( v53 )
        {
          v46[5] = 0;
          qfree(v53);
        }
        operator delete(v46, 0x88u);
        --*(_QWORD *)(a1 + 296);
        clear_tinfo_t(&v128);
        v109 = (const __m128i *)v43;
        v116 = 1;
      }
      else
      {
        v109 = (const __m128i *)std::_Rb_tree_increment(v109, v6, v8, v9, v10, v11, a2, a3, a4);
      }
      ++n;
    }
    while ( (__ROR4__(652835029 * n + 17179864, 3) > 0x418936u || !(unsigned __int8)callui(27)) && v109 != v115 );
  }
  while ( v116 && !(unsigned __int8)callui(27) );
  if ( *(_QWORD *)(a1 + 296) )
  {
    for ( i = *(const __m128i **)(a1 + 280);
          v115 != i;
          i = (const __m128i *)std::_Rb_tree_increment(i, v79, v80, v81, v82, v83, *(double *)v58.m128i_i64, a3, a4) )
    {
      v55 = i[2].m128i_u64[1];
      v119 = nullptr;
      v120 = 0;
      if ( v55 )
      {
        v105 = (char *)qalloc_or_throw(v55);
        v106 = (const void *)i[2].m128i_i64[0];
        *((_QWORD *)&v120 + 1) = v55;
        v119 = v105;
        memcpy(v105, v106, v55);
        *(_QWORD *)&v120 = v55;
      }
      v56 = i[4].m128i_i64[0];
      src = nullptr;
      v122 = 0;
      if ( v56 )
      {
        src = (void *)qalloc_or_throw(144 * v56);
        v94 = (char *)src;
        v95 = 0;
        *((_QWORD *)&v122 + 1) = v56;
        while ( 1 )
        {
          a3 = 0.0;
          v100 = &v94[144 * v95];
          v101 = i[3].m128i_i64[1] + 144 * v95;
          v102 = _mm_loadu_si128((const __m128i *)v101);
          *((_QWORD *)v100 + 2) = 0;
          *(_OWORD *)(v100 + 24) = 0;
          *(__m128i *)v100 = v102;
          if ( *(_QWORD *)(v101 + 24) )
          {
            nc = *(_QWORD *)(v101 + 24);
            v103 = (void *)qalloc_or_throw(nc);
            *((_QWORD *)v100 + 2) = v103;
            *((_QWORD *)v100 + 4) = nc;
            memcpy(v103, *(const void **)(v101 + 16), nc);
            *((_QWORD *)v100 + 3) = nc;
          }
          a4 = 0.0;
          *((_QWORD *)v100 + 5) = 0;
          *((_OWORD *)v100 + 3) = 0;
          if ( *(_QWORD *)(v101 + 48) )
          {
            nb = *(_QWORD *)(v101 + 48);
            v104 = (void *)qalloc_or_throw(nb);
            *((_QWORD *)v100 + 5) = v104;
            *((_QWORD *)v100 + 7) = nb;
            memcpy(v104, *(const void **)(v101 + 40), nb);
            *((_QWORD *)v100 + 6) = nb;
          }
          *((_QWORD *)v100 + 8) = 0;
          copy_tinfo_t(v100 + 64, v101 + 64);
          v96 = *(_QWORD *)(v101 + 120);
          ++v95;
          v97 = *(_QWORD *)(v101 + 128);
          *(__m128i *)(v100 + 72) = _mm_loadu_si128((const __m128i *)(v101 + 72));
          v98 = _mm_loadu_si128((const __m128i *)(v101 + 88));
          *((_QWORD *)v100 + 15) = v96;
          LOBYTE(v96) = *(_BYTE *)(v101 + 136);
          *(__m128i *)(v100 + 88) = v98;
          v99 = _mm_loadu_si128((const __m128i *)(v101 + 104));
          *((_QWORD *)v100 + 16) = v97;
          v100[136] = v96;
          *(__m128i *)(v100 + 104) = v99;
          if ( v56 == v95 )
            break;
          v94 = (char *)src;
        }
        *(_QWORD *)&v122 = v56;
      }
      v57 = i[6].m128i_i64[0];
      v58 = _mm_loadu_si128(i + 5);
      v126 = nullptr;
      v59 = i[7].m128i_u64[1];
      v127 = 0;
      v124 = v57;
      LODWORD(v57) = i[6].m128i_i32[2];
      v123 = v58;
      v125 = v57;
      if ( v59 )
      {
        v92 = (void *)qalloc_or_throw(v59);
        v93 = (const void *)i[7].m128i_i64[0];
        v126 = v92;
        *((_QWORD *)&v127 + 1) = v59;
        memcpy(v92, v93, v59);
        *(_QWORD *)&v127 = v59;
      }
      if ( (_QWORD)v122 )
      {
        v60 = *(_QWORD *)src;
        if ( *(_QWORD *)src )
        {
          *(_DWORD *)&s2[8] = 0;
          v135.m128i_i64[1] = 1;
          v129 = nullptr;
          v131 = nullptr;
          LODWORD(v136) = -1;
          v137 = 0;
          v138 = 0;
          v118 = 17;
          *(_QWORD *)s2 = 0;
          *(_DWORD *)&s2[12] = v60 >> 3;
          v128 = 0;
          *(_OWORD *)v130 = 0;
          *(_OWORD *)v132 = 0;
          v133 = 0;
          copy_tinfo_t(s2, &v118);
          create_tinfo(&v133, 11, 11, s2);
          clear_tinfo_t(s2);
          clear_tinfo_t(&v118);
          v128.m128i_i64[1] = v60;
          v128.m128i_i64[0] = 0;
          v61 = v129;
          LODWORD(v137) = 1;
          if ( v130[1] <= 4 )
          {
            v129 = (void *)qvector_reserve(&v129, v129, 5, 1);
            v61 = v129;
          }
          v130[0] = 5;
          *v61 = 812671335;
          *((_BYTE *)v129 + 4) = 0;
          v62 = v130[0];
          v63 = _mm_load_si128(&v128);
          v64 = (__m128i *)src;
          *(_QWORD *)&s2[16] = 0;
          v140 = 0;
          *(__m128i *)s2 = v63;
          if ( v130[0] )
          {
            *(_QWORD *)&s2[16] = qalloc_or_throw(v130[0]);
            v140.m128i_i64[1] = v62;
            memcpy(*(void **)&s2[16], v129, v62);
            v140.m128i_i64[0] = v62;
          }
          v65 = v132[0];
          v141 = 0;
          v142 = 0;
          if ( v132[0] )
          {
            v141 = qalloc_or_throw(v132[0]);
            v142.m128i_i64[1] = v65;
            memcpy((void *)v141, v131, v65);
            v142.m128i_i64[0] = v65;
          }
          v143 = 0;
          copy_tinfo_t(&v143, &v133);
          v66 = _mm_loadu_si128((const __m128i *)((char *)&v133 + 8));
          v147 = v136;
          v67 = (char *)v64 - (_BYTE *)src;
          v144 = v66;
          v68 = _mm_loadu_si128(&v134);
          v148 = v137;
          v145 = v68;
          v69 = _mm_loadu_si128(&v135);
          v149 = v138;
          v70 = v122;
          v146 = v69;
          if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
          {
            na = (char *)v64 - (_BYTE *)src;
            v107 = (char *)qvector_reserve(&src, src, v122 + 1, 144);
            v67 = na;
            v108 = v107;
            src = v107;
            v70 = v122;
            v64 = (__m128i *)&v108[na];
          }
          memmove(&v64[9], v64, 144 * v70 - v67);
          *v64 = _mm_load_si128((const __m128i *)s2);
          v71 = *(_QWORD *)&s2[16];
          v72 = _mm_loadu_si128(&v140);
          *(_QWORD *)&s2[16] = 0;
          v64[1].m128i_i64[0] = v71;
          *(__m128i *)((char *)v64 + 24) = v72;
          v73 = v141;
          v74 = _mm_load_si128(&v142);
          v140 = 0;
          v141 = 0;
          v142 = 0;
          v64[2].m128i_i64[1] = v73;
          v64[4].m128i_i64[0] = 0;
          v64[3] = v74;
          copy_tinfo_t(&v64[4], &v143);
          v75 = _mm_loadu_si128(&v144);
          v76 = v147;
          *(_QWORD *)&v122 = v122 + 1;
          *(__m128i *)((char *)v64 + 72) = v75;
          v77 = _mm_loadu_si128(&v145);
          v64[7].m128i_i64[1] = v76;
          *(__m128i *)((char *)v64 + 88) = v77;
          v58 = _mm_loadu_si128(&v146);
          *(__m128i *)((char *)v64 + 104) = v58;
          v64[8].m128i_i64[0] = v148;
          v64[8].m128i_i8[8] = v149;
          clear_tinfo_t(&v143);
          if ( v141 )
          {
            v142.m128i_i64[0] = 0;
            qfree(v141);
          }
          if ( *(_QWORD *)&s2[16] )
          {
            v140.m128i_i64[0] = 0;
            qfree(*(_QWORD *)&s2[16]);
          }
          clear_tinfo_t(&v133);
          if ( v131 )
          {
            v132[0] = 0;
            qfree(v131);
          }
          if ( v129 )
          {
            v130[0] = 0;
            qfree(v129);
          }
        }
      }
      *(_QWORD *)s2 = 0;
      create_tinfo(s2, 13, 13, &src);
      set_tinfo_property(s2, 2, 4);
      v78 = ::src;
      if ( (_QWORD)v120 )
        v78 = v119;
      v79 = *(_QWORD *)(a1 + 312);
      save_tinfo(s2, v79, 0, v78, 3);
      clear_tinfo_t(s2);
      if ( v126 )
      {
        *(_QWORD *)&v127 = 0;
        qfree(v126);
      }
      v84 = (char *)src;
      if ( src )
      {
        v85 = v122;
        if ( (_QWORD)v122 )
        {
          v86 = 0;
          do
          {
            v87 = &v84[144 * v86];
            clear_tinfo_t(v87 + 64);
            v88 = *((_QWORD *)v87 + 5);
            if ( v88 )
            {
              *((_QWORD *)v87 + 6) = 0;
              qfree(v88);
            }
            v89 = *((_QWORD *)v87 + 2);
            if ( v89 )
            {
              *((_QWORD *)v87 + 3) = 0;
              qfree(v89);
            }
            ++v86;
            v84 = (char *)src;
          }
          while ( v85 != v86 );
        }
        *(_QWORD *)&v122 = 0;
        qfree(v84);
      }
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        qfree(v119);
      }
    }
LABEL_117:
    sub_26170(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 280) = v115;
    *(_QWORD *)(a1 + 288) = v115;
  }
  return v150 - __readfsqword(0x28u);
}

