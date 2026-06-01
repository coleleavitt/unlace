__int64 __fastcall sub_161F0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __m128i a10,
        __int128 a11,
        __int128 a12)
{
  const char *v12; // rdx
  int v13; // eax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbx
  _DWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __m128i v37; // xmm0
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rbx
  const char *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // r12
  _QWORD *v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // r15
  unsigned __int64 v52; // rdx
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // xmm0_8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 v67; // r15
  _QWORD *v68; // rbx
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v72; // r15
  __int64 v73; // rbx
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  unsigned __int64 v76; // rax
  void *v77; // rax
  __int64 v78; // rbx
  __int64 v79; // r12
  __int64 v80; // rbx
  __int64 v81; // r14
  void *v82; // rax
  size_t v83; // rdx
  void *v84; // rax
  size_t v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r13
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  const char *v94; // rax
  const char *v95; // r13
  size_t v96; // rax
  size_t v97; // r14
  size_t v98; // r12
  unsigned __int64 v99; // rdi
  __m128i v100; // xmm0
  unsigned __int64 v101; // rax
  __int64 v102; // rdi
  __int64 v103; // r13
  __int64 v104; // r12
  _QWORD *v105; // r15
  __int64 v106; // rdi
  __int64 v107; // rdi
  __int64 v108; // rax
  const char *v109; // rdx
  unsigned __int64 v110; // rsi
  __int64 v111; // rax
  unsigned __int8 v112; // [rsp+2Fh] [rbp-191h]
  __m128i n; // [rsp+30h] [rbp-190h] BYREF
  __int64 *v114; // [rsp+40h] [rbp-180h]
  char *v115; // [rsp+48h] [rbp-178h]
  _BYTE *v116; // [rsp+50h] [rbp-170h]
  __m128i v117; // [rsp+58h] [rbp-168h] BYREF
  __int64 v118; // [rsp+68h] [rbp-158h] BYREF
  unsigned __int64 v119; // [rsp+70h] [rbp-150h] BYREF
  __int128 v120; // [rsp+78h] [rbp-148h]
  __int64 v121; // [rsp+90h] [rbp-130h] BYREF
  __int128 v122; // [rsp+98h] [rbp-128h]
  __int64 v123; // [rsp+A8h] [rbp-118h]
  __int64 v124; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-108h] BYREF
  __int128 v126; // [rsp+C0h] [rbp-100h]
  void *src; // [rsp+D0h] [rbp-F0h]
  __int128 v128; // [rsp+D8h] [rbp-E8h]
  char v129; // [rsp+E8h] [rbp-D8h]
  _BYTE v130[24]; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v131; // [rsp+108h] [rbp-B8h]
  __int64 v132; // [rsp+110h] [rbp-B0h] BYREF
  _DWORD v133[4]; // [rsp+118h] [rbp-A8h] BYREF
  __int64 v134; // [rsp+128h] [rbp-98h]
  void *v135; // [rsp+130h] [rbp-90h]
  __int128 v136; // [rsp+138h] [rbp-88h]
  char v137; // [rsp+148h] [rbp-78h]
  __m128i v138; // [rsp+150h] [rbp-70h] BYREF
  __int64 v139; // [rsp+160h] [rbp-60h]
  __m128i v140; // [rsp+170h] [rbp-50h] BYREF
  unsigned __int64 v141; // [rsp+188h] [rbp-38h]

  v117.m128i_i64[0] = a1;
  v115 = (char *)a2;
  v141 = __readfsqword(0x28u);
  if ( (a2[108] & 2) != 0 )
  {
    sub_10160(
      (__int64)v130,
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v12 = s1;
    if ( *(_QWORD *)&v130[8] )
      v12 = *(const char **)v130;
    a2 = "method";
    sub_7470((__int64)"%-12s %s\n", "method", v12);
    a1 = *(_QWORD *)v130;
    if ( *(_QWORD *)v130 )
    {
      *(_QWORD *)&v130[8] = 0;
      qfree(*(_QWORD *)v130);
    }
  }
  v121 = 0;
  v122 = 0;
  v126 = 0;
  v128 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  src = nullptr;
  v13 = sub_CB90(
          a1,
          (int)a2,
          a3,
          a4,
          a5,
          a6,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          (__int128)_mm_loadu_si128((const __m128i *)&a12));
  if ( (v13 & 0xFFFFFF0F) != 0 || v13 == 192 )
  {
    v14 = -64;
  }
  else
  {
    v14 = v13;
    v13 = 0;
  }
  HIDWORD(v123) = v13;
  v129 = v14;
  v15 = sub_BB20();
  sub_A290((__int64)&v138, v15, v16, v17);
  v18 = sub_BB20();
  v19 = sub_A170(v18);
  if ( v19 == 24 )
  {
    v119 = 0;
    v118 = 0;
    v72 = *(_QWORD *)v117.m128i_i64[0];
    *(_OWORD *)v130 = 0;
    copy_tinfo_t(&v130[8], &v118);
    *(_QWORD *)&v130[16] = 0;
    copy_tinfo_t(&v130[16], &v119);
    LODWORD(v131) = 0;
    WORD2(v131) = 0;
    clear_tinfo_t(&v118);
    clear_tinfo_t(&v119);
    v116 = v130;
    copy_tinfo_t(v130, v72);
    v114 = &v124;
    create_tinfo(&v124, 10, 10, v130);
    clear_tinfo_t(&v130[16]);
    clear_tinfo_t(&v130[8]);
    clear_tinfo_t(v130);
  }
  else if ( v19 == 25 )
  {
    v114 = &v124;
    create_tinfo(&v124, 1, 7, 0);
  }
  else
  {
    v55 = sub_BB20();
    sub_A830((__int64)&v140, v55, v56, v57, v58, v59, (__int128)_mm_load_si128(&v138), v139);
    v60 = _mm_load_si128(&v140).m128i_u64[0];
    v114 = &v124;
    if ( !(unsigned __int8)sub_138E0(&v124, v115, v61, v62, v63, v64, *(double *)&v60, a8, a9, a10, v60) )
    {
LABEL_57:
      v112 = 0;
      goto LABEL_58;
    }
  }
  v20 = sub_BB20();
  if ( !(unsigned int)sub_B1C0(v20) )
  {
    v24 = v122;
    v25 = v121;
    if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
    {
      v121 = qvector_reserve(&v121, v121, v122 + 1, 80);
      v24 = v122;
      v25 = v121;
    }
    v26 = v25 + 80 * v24;
    *(_DWORD *)v26 = 0;
    *(_QWORD *)(v26 + 8) = 0;
    *(_QWORD *)(v26 + 16) = 0;
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 64) = 0;
    *(_DWORD *)(v26 + 72) = 0;
    *(_OWORD *)(v26 + 24) = 0;
    *(_OWORD *)(v26 + 48) = 0;
    *(_QWORD *)&v122 = v122 + 1;
    v27 = (_DWORD *)qvector_reserve(v26 + 16, 0, 5, 1);
    *(_QWORD *)(v26 + 16) = v27;
    *(_QWORD *)(v26 + 24) = 5;
    *v27 = 1936287860;
    v28 = *(_QWORD *)(v26 + 16);
    n.m128i_i64[1] = v26 + 64;
    *(_BYTE *)(v28 + 4) = 0;
    v29 = (_QWORD *)v117.m128i_i64[0];
    *(_DWORD *)(v26 + 72) |= 1u;
    copy_tinfo_t(v26 + 64, *v29);
    v30 = sub_BB20();
    if ( (unsigned int)sub_B220(v30) )
    {
      v31 = *(_QWORD *)(v26 + 64);
      if ( (_BYTE)v31 )
        *(_QWORD *)(v26 + 64) = v31 | 0x40;
    }
    v119 = 0;
    v118 = 0;
    *(_OWORD *)v130 = 0;
    copy_tinfo_t(&v130[8], &v118);
    *(_QWORD *)&v130[16] = 0;
    copy_tinfo_t(&v130[16], &v119);
    LODWORD(v131) = 0;
    WORD2(v131) = 0;
    clear_tinfo_t(&v118);
    clear_tinfo_t(&v119);
    v116 = v130;
    copy_tinfo_t(v130, n.m128i_i64[1]);
    create_tinfo(n.m128i_i64[1], 10, 10, v130);
    clear_tinfo_t(&v130[16]);
    clear_tinfo_t(&v130[8]);
    clear_tinfo_t(v130);
  }
  v32 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  v112 = sub_15ED0(
           &v121,
           (__int64)v115,
           0,
           *(double *)&v32,
           *(double *)a8.m128i_i64,
           a9,
           a10,
           v21,
           v22,
           v23,
           (__int128)_mm_loadu_si128((const __m128i *)&a11),
           v32);
  if ( !v112 )
    goto LABEL_57;
  v119 = 0;
  v120 = 0;
  v33 = sub_BB20();
  if ( (unsigned int)sub_A170(v33) - 24 > 1 )
  {
    v116 = v130;
    sub_C6E0((__int64)v130);
    v34 = v120;
    v35 = v119;
    v36 = v120 + 1;
    if ( (unsigned __int64)v130 < v119 || (unsigned __int64)v130 >= v119 + 24LL * *((_QWORD *)&v120 + 1) )
    {
      if ( *((_QWORD *)&v120 + 1) < v36 )
      {
        v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
        v35 = v119;
        v34 = v120;
      }
      v37 = _mm_loadu_si128((const __m128i *)&v130[8]);
      v38 = v35 + 24 * v34;
      *(_QWORD *)v38 = *(_QWORD *)v130;
      *(__m128i *)(v38 + 8) = v37;
      v39 = v120 + 1;
      *(_QWORD *)&v120 = v120 + 1;
      goto LABEL_25;
    }
    v73 = *(_QWORD *)v130;
    v74 = _mm_loadl_epi64((const __m128i *)&v130[8]);
    memset(v130, 0, sizeof(v130));
    v75 = _mm_loadl_epi64((const __m128i *)&v130[16]);
    if ( *((_QWORD *)&v120 + 1) < v36 )
    {
      n.m128i_i64[1] = v75.m128i_i64[0];
      v117.m128i_i64[0] = v74.m128i_i64[0];
      v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
      v35 = v119;
      v75 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
      v74 = _mm_loadl_epi64(&v117);
      v34 = v120;
    }
    v76 = v35 + 24 * v34;
    *(_QWORD *)v76 = v73;
    *(__m128i *)(v76 + 8) = _mm_unpacklo_epi64(v74, v75);
    v39 = v120 + 1;
    *(_QWORD *)&v120 = v120 + 1;
    if ( !*(_QWORD *)v130 )
    {
LABEL_25:
      v40 = v119;
      n.m128i_i64[1] = v119 + 24 * v39;
      if ( n.m128i_i64[1] == v119 )
        goto LABEL_48;
      v117.m128i_i64[0] = v119;
      while ( 1 )
      {
        if ( *(_QWORD *)(v117.m128i_i64[0] + 8) > 1u )
        {
          v41 = v122;
          v118 = 0;
          memset(v130, 0, sizeof(v130));
          if ( (_QWORD)v122 )
          {
            *(_QWORD *)v130 = qalloc_or_throw(80 * v122);
            v78 = *(_QWORD *)v130;
            v79 = 0;
            *(_QWORD *)&v130[16] = v41;
            while ( 1 )
            {
              v80 = 80 * v79 + v78;
              v81 = v121 + 80 * v79;
              *(_DWORD *)v80 = 0;
              copy_argloc(v80, v81);
              *(_QWORD *)(v80 + 16) = 0;
              *(_OWORD *)(v80 + 24) = 0;
              if ( *(_QWORD *)(v81 + 24) )
              {
                n.m128i_i64[0] = *(_QWORD *)(v81 + 24);
                v82 = (void *)qalloc_or_throw(n.m128i_i64[0]);
                v83 = n.m128i_i64[0];
                *(_QWORD *)(v80 + 16) = v82;
                *(_QWORD *)(v80 + 32) = v83;
                memcpy(v82, *(const void **)(v81 + 16), v83);
                *(_QWORD *)(v80 + 24) = n.m128i_i64[0];
              }
              *(_QWORD *)(v80 + 40) = 0;
              *(_OWORD *)(v80 + 48) = 0;
              if ( *(_QWORD *)(v81 + 48) )
              {
                n.m128i_i64[0] = *(_QWORD *)(v81 + 48);
                v84 = (void *)qalloc_or_throw(n.m128i_i64[0]);
                v85 = n.m128i_i64[0];
                *(_QWORD *)(v80 + 40) = v84;
                *(_QWORD *)(v80 + 56) = v85;
                memcpy(v84, *(const void **)(v81 + 40), v85);
                *(_QWORD *)(v80 + 48) = n.m128i_i64[0];
              }
              *(_QWORD *)(v80 + 64) = 0;
              copy_tinfo_t(v80 + 64, v81 + 64);
              ++v79;
              *(_DWORD *)(v80 + 72) = *(_DWORD *)(v81 + 72);
              if ( v41 == v79 )
                break;
              v78 = *(_QWORD *)v130;
            }
            *(_QWORD *)&v130[8] = v41;
          }
          v132 = 0;
          v131 = v123;
          copy_tinfo_t(&v132, v114);
          v133[0] = 0;
          copy_argloc(v133, &v125);
          v42 = v128;
          v135 = nullptr;
          v136 = 0;
          v134 = *((_QWORD *)&v126 + 1);
          if ( (_QWORD)v128 )
          {
            n.m128i_i64[0] = 8 * v128;
            v77 = (void *)qalloc_or_throw(8 * v128);
            *((_QWORD *)&v136 + 1) = v42;
            v135 = v77;
            memcpy(v77, src, n.m128i_u64[0]);
            *(_QWORD *)&v136 = v42;
          }
          v137 = v129;
          create_tinfo(&v118, 12, 12, v116);
          v43 = s1;
          if ( *(_QWORD *)(v117.m128i_i64[0] + 8) )
            v43 = *(const char **)v117.m128i_i64[0];
          if ( (unsigned int)sub_EB50(&v118, v43, v115, 0, nullptr) )
          {
            if ( v135 )
            {
              *(_QWORD *)&v136 = 0;
              qfree(v135);
            }
            cleanup_argloc(v133);
            clear_tinfo_t(&v132);
            v102 = *(_QWORD *)v130;
            if ( *(_QWORD *)v130 )
            {
              v103 = *(_QWORD *)&v130[8];
              if ( *(_QWORD *)&v130[8] )
              {
                v104 = 0;
                do
                {
                  v105 = (_QWORD *)(v102 + 80 * v104);
                  clear_tinfo_t(v105 + 8);
                  v106 = v105[5];
                  if ( v106 )
                  {
                    v105[6] = 0;
                    qfree(v106);
                  }
                  v107 = v105[2];
                  if ( v107 )
                  {
                    v105[3] = 0;
                    qfree(v107);
                  }
                  ++v104;
                  cleanup_argloc(v105);
                  v102 = *(_QWORD *)v130;
                }
                while ( v103 != v104 );
              }
              *(_QWORD *)&v130[8] = 0;
              qfree(v102);
            }
            clear_tinfo_t(&v118);
            v112 = 0;
            v40 = v119;
            goto LABEL_48;
          }
          if ( v135 )
          {
            *(_QWORD *)&v136 = 0;
            qfree(v135);
          }
          cleanup_argloc(v133);
          clear_tinfo_t(&v132);
          v44 = *(_QWORD *)v130;
          if ( *(_QWORD *)v130 )
          {
            v45 = *(_QWORD *)&v130[8];
            if ( *(_QWORD *)&v130[8] )
            {
              v46 = 0;
              do
              {
                v47 = (_QWORD *)(v44 + 80 * v46);
                clear_tinfo_t(v47 + 8);
                v48 = v47[5];
                if ( v48 )
                {
                  v47[6] = 0;
                  qfree(v48);
                }
                v49 = v47[2];
                if ( v49 )
                {
                  v47[3] = 0;
                  qfree(v49);
                }
                ++v46;
                cleanup_argloc(v47);
                v44 = *(_QWORD *)v130;
              }
              while ( v45 != v46 );
            }
            *(_QWORD *)&v130[8] = 0;
            qfree(v44);
          }
          clear_tinfo_t(&v118);
        }
        v117.m128i_i64[0] += 24;
        if ( n.m128i_i64[1] == v117.m128i_i64[0] )
        {
          v40 = v119;
          goto LABEL_48;
        }
      }
    }
    *(_QWORD *)&v130[8] = 0;
    qfree(*(_QWORD *)v130);
LABEL_77:
    v39 = v120;
    goto LABEL_25;
  }
  v86 = sub_BB20();
  v87 = sub_B250(v86);
  v117.m128i_i64[0] = v87;
  if ( v87 )
  {
    v88 = 0;
    if ( *(_DWORD *)(v87 + 8) )
    {
      do
      {
        v93 = sub_BB20();
        v94 = (const char *)sub_A3E0(
                              v93,
                              *(_QWORD *)(*(_QWORD *)v117.m128i_i64[0] + 16 * v88),
                              *(_QWORD *)(*(_QWORD *)v117.m128i_i64[0] + 16 * v88 + 8));
        v95 = v94;
        memset(v130, 0, sizeof(v130));
        if ( v94 )
        {
          v96 = strlen(v94);
          v97 = v96 + 1;
          v98 = v96;
          v116 = v130;
          *(_QWORD *)v130 = qvector_reserve(v130, 0, v96 + 1, 1);
          *(_QWORD *)&v130[8] = v97;
          memmove(*(void **)v130, v95, v98);
          *(_BYTE *)(*(_QWORD *)v130 + v98) = 0;
        }
        else
        {
          v116 = v130;
        }
        v111 = v120;
        v110 = v119;
        v99 = v120 + 1;
        if ( (unsigned __int64)v116 < v119 || (unsigned __int64)v116 >= v119 + 24LL * *((_QWORD *)&v120 + 1) )
        {
          if ( *((_QWORD *)&v120 + 1) < v99 )
          {
            v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
            v110 = v119;
            v111 = v120;
          }
          v100 = _mm_loadu_si128((const __m128i *)&v130[8]);
          v101 = v110 + 24 * v111;
          *(_QWORD *)v101 = *(_QWORD *)v130;
          *(__m128i *)(v101 + 8) = v100;
          *(_QWORD *)&v120 = v120 + 1;
        }
        else
        {
          v89 = *(_QWORD *)v130;
          v90 = _mm_loadl_epi64((const __m128i *)&v130[8]);
          memset(v130, 0, sizeof(v130));
          v91 = _mm_loadl_epi64((const __m128i *)&v130[16]);
          if ( *((_QWORD *)&v120 + 1) < v99 )
          {
            n.m128i_i64[0] = v91.m128i_i64[0];
            n.m128i_i64[1] = v90.m128i_i64[0];
            v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
            v110 = v119;
            v91 = _mm_loadl_epi64(&n);
            v90 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
            v111 = v120;
          }
          v92 = v110 + 24 * v111;
          *(_QWORD *)v92 = v89;
          *(__m128i *)(v92 + 8) = _mm_unpacklo_epi64(v90, v91);
          *(_QWORD *)&v120 = v120 + 1;
          if ( *(_QWORD *)v130 )
          {
            *(_QWORD *)&v130[8] = 0;
            qfree(*(_QWORD *)v130);
          }
        }
        ++v88;
      }
      while ( (unsigned int)v88 < *(_DWORD *)(v117.m128i_i64[0] + 8) );
      v108 = sub_BB20();
      sub_B280(v108, v117.m128i_i64[0]);
      goto LABEL_77;
    }
  }
  sub_C260((__int64)v130);
  v109 = s1;
  if ( *(_QWORD *)&v130[8] )
    v109 = *(const char **)v130;
  sub_67C0((__int64 *)v115 + 10, (__int64)"mangling failed for %s", v109);
  if ( *(_QWORD *)v130 )
  {
    *(_QWORD *)&v130[8] = 0;
    qfree(*(_QWORD *)v130);
  }
  v112 = 0;
  v40 = v119;
  ++*((_QWORD *)v115 + 17);
LABEL_48:
  if ( v40 )
  {
    if ( (_QWORD)v120 )
    {
      v50 = 0;
      v51 = v120;
      v52 = v40;
      do
      {
        v53 = (__int64 *)(v52 + 24 * v50);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54);
          v52 = v119;
        }
        ++v50;
      }
      while ( v51 != v50 );
      v40 = v52;
    }
    *(_QWORD *)&v120 = 0;
    qfree(v40);
  }
LABEL_58:
  if ( src )
  {
    *(_QWORD *)&v128 = 0;
    qfree(src);
  }
  cleanup_argloc(&v125);
  clear_tinfo_t(v114);
  v65 = v121;
  if ( v121 )
  {
    v66 = v122;
    if ( (_QWORD)v122 )
    {
      v67 = 0;
      do
      {
        v68 = (_QWORD *)(v65 + 80 * v67);
        clear_tinfo_t(v68 + 8);
        v69 = v68[5];
        if ( v69 )
        {
          v68[6] = 0;
          qfree(v69);
        }
        v70 = v68[2];
        if ( v70 )
        {
          v68[3] = 0;
          qfree(v70);
        }
        cleanup_argloc(v68);
        v65 = v121;
        ++v67;
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v122 = 0;
    qfree(v65);
  }
  return v112;
}
