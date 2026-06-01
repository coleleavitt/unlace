__int64 __fastcall sub_391C50(
        __m128i *a1,
        __int64 *a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __m128 a8)
{
  __int64 v9; // rax
  int v11; // edx
  __int64 v12; // rbp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __m128i *v20; // rdi
  __m128i *v21; // rax
  unsigned __int64 v22; // r14
  char *v23; // rdi
  __int64 v24; // r15
  __int64 v25; // r14
  char *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdi
  const char *v29; // rax
  const char *v30; // rbp
  size_t v31; // rax
  __int64 v32; // r15
  size_t v33; // r14
  __int64 v34; // rax
  const char *v35; // rbp
  __int64 v36; // rbp
  char v37; // al
  const char *v38; // r13
  size_t v39; // rax
  __int64 v40; // rbp
  size_t v41; // r15
  size_t v42; // r8
  __int64 v43; // rsi
  void *v44; // rdx
  char *v45; // rdi
  __int64 v46; // r15
  __int64 v47; // r14
  char *v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  char *v52; // rbp
  __m128i v53; // xmm0
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rsi
  __m128i si128; // xmm0
  int v58; // ebp
  int v59; // r14d
  int v60; // r13d
  __m128i *v61; // r15
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  char *v64; // rdx
  const void **v65; // rbp
  size_t v66; // r9
  __int64 v67; // r8
  char *v68; // r10
  __int64 v69; // rsi
  __int64 v70; // rbp
  void *v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rsi
  __int32 v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 v78; // r8
  void *v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // r15
  __int64 v82; // r15
  __int64 v83; // r8
  void *v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // r15
  __int64 v87; // r8
  void *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // r15
  __int64 v91; // r15
  __int64 v92; // r8
  void *v93; // rdx
  __int64 v94; // rsi
  _DWORD *v95; // r15
  __int64 v96; // r13
  void *v97; // r8
  unsigned __int64 v98; // r15
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  void *v107; // rdi
  const void *v108; // rsi
  void *src[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+10h] [rbp-D8h]
  __int64 v111; // [rsp+18h] [rbp-D0h]
  size_t v112; // [rsp+20h] [rbp-C8h]
  __int64 v113; // [rsp+28h] [rbp-C0h]
  int v114; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v115; // [rsp+38h] [rbp-B0h] BYREF
  char *v116; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v117; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v118; // [rsp+58h] [rbp-90h]
  __int64 v119; // [rsp+60h] [rbp-88h]
  __int64 v120; // [rsp+68h] [rbp-80h]
  __int128 v121; // [rsp+70h] [rbp-78h]
  __int64 v122; // [rsp+80h] [rbp-68h]
  __int128 v123; // [rsp+88h] [rbp-60h]
  char v124; // [rsp+98h] [rbp-50h]
  unsigned __int64 v125; // [rsp+A8h] [rbp-40h]

  v9 = a1->m128i_i64[1];
  v125 = __readfsqword(0x28u);
  v11 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 1 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v15 = *(_DWORD *)(v12 + 8);
    if ( v15 > 69 )
      goto LABEL_33;
    if ( (*(_BYTE *)(v12 + 56) & 0x40) != 0 )
    {
      v56 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] <= 0x1CuLL )
      {
        v75 = qvector_reserve((__int64)&a1[1].m128i_i64[1], v56, 29, 1);
        a1[1].m128i_i64[1] = v75;
        v56 = v75;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_424A20);
      a1[2].m128i_i64[0] = 29;
      *(__m128i *)v56 = si128;
      a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424A30);
      *(__m128 *)(v56 + 12) = a3;
      *(_BYTE *)(a1[1].m128i_i64[1] + 28) = 0;
      v12 = *(_QWORD *)(a1->m128i_i64[1] + 8);
    }
    v16 = *(_QWORD *)(a1->m128i_i64[0] + 32);
    v17 = sub_256D70(v16 + 16, v12);
    v18 = v17;
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 8) == 57 && *(_QWORD *)(v17 + 24) != v12 )
      {
        v19 = sub_284360(v17, v12, &v114, *(double *)a3.m128_u64);
        if ( v19 )
        {
          if ( !*(_BYTE *)(v19 + 60) )
          {
            v115 = 0;
            sub_386760(*(_QWORD *)(v16 + 216), *(_QWORD *)(v18 + 24), &v115, *(double *)a3.m128_u64, a8);
            a3.m128_u64[0] = 0;
            v117 = 0;
            v116 = nullptr;
            v118 = 0;
            v119 = 0;
            v120 = 0;
            v122 = 0;
            v124 = 16;
            v121 = 0;
            v123 = 0;
            if ( (unsigned __int8)get_tinfo_details() && (unsigned __int64)v114 < v117.m128i_i64[0] )
            {
              v20 = a1 + 3;
              v21 = (__m128i *)&v116[80 * v114];
              if ( &a1[3] != &v21[1] )
              {
                v22 = v21[1].m128i_u64[1];
                if ( v22 > 1 )
                {
                  src[0] = (void *)v21[1].m128i_i64[0];
                  if ( a1[4].m128i_i64[0] < v22 )
                    a1[3].m128i_i64[0] = qvector_reserve((__int64)v20, a1[3].m128i_i64[0], v22, 1);
                  v107 = (void *)a1[3].m128i_i64[0];
                  v108 = src[0];
                  a1[3].m128i_i64[1] = v22;
                  memmove(v107, v108, v22 - 1);
                  *(_BYTE *)(a1[3].m128i_i64[0] + v22 - 1) = 0;
                }
                else
                {
                  a1[3].m128i_i64[1] = 0;
                }
              }
              if ( v122 )
              {
                *(_QWORD *)&v123 = 0;
                qfree(v122);
              }
              cleanup_argloc();
              clear_tinfo_t();
              v23 = v116;
              if ( v116 )
              {
                v24 = v117.m128i_i64[0];
                v25 = 0;
                if ( v117.m128i_i64[0] )
                {
                  do
                  {
                    v26 = &v23[80 * v25];
                    clear_tinfo_t();
                    v27 = *((_QWORD *)v26 + 5);
                    if ( v27 )
                    {
                      *((_QWORD *)v26 + 6) = 0;
                      qfree(v27);
                    }
                    v28 = *((_QWORD *)v26 + 2);
                    if ( v28 )
                    {
                      *((_QWORD *)v26 + 3) = 0;
                      qfree(v28);
                    }
                    ++v25;
                    cleanup_argloc();
                    v23 = v116;
                  }
                  while ( v24 != v25 );
                }
                v117.m128i_i64[0] = 0;
                qfree((__int64)v23);
              }
              clear_tinfo_t();
              v9 = a1->m128i_i64[1];
              v11 = *(_DWORD *)v9;
              goto LABEL_72;
            }
            if ( v122 )
            {
              *(_QWORD *)&v123 = 0;
              qfree(v122);
            }
            cleanup_argloc();
            clear_tinfo_t();
            v45 = v116;
            if ( v116 )
            {
              v46 = v117.m128i_i64[0];
              v47 = 0;
              if ( v117.m128i_i64[0] )
              {
                do
                {
                  v48 = &v45[80 * v47];
                  clear_tinfo_t();
                  v49 = *((_QWORD *)v48 + 5);
                  if ( v49 )
                  {
                    *((_QWORD *)v48 + 6) = 0;
                    qfree(v49);
                  }
                  v50 = *((_QWORD *)v48 + 2);
                  if ( v50 )
                  {
                    *((_QWORD *)v48 + 3) = 0;
                    qfree(v50);
                  }
                  ++v47;
                  cleanup_argloc();
                  v45 = v116;
                }
                while ( v46 != v47 );
              }
              v117.m128i_i64[0] = 0;
              qfree((__int64)v45);
            }
            clear_tinfo_t();
          }
        }
      }
    }
    v9 = a1->m128i_i64[1];
    v11 = *(_DWORD *)v9;
LABEL_72:
    if ( v11 != 1 )
      goto LABEL_2;
    v12 = *(_QWORD *)(v9 + 8);
    v15 = *(_DWORD *)(v12 + 8);
    if ( v15 == 65 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 432LL) + 104LL * *(int *)(v12 + 32);
      if ( v12 )
      {
LABEL_4:
        if ( !(unsigned __int8)sub_387970((__int64)&a1[4].m128i_i64[1], 0) )
        {
          sub_2604A0((__int64)&v116, *(_QWORD **)(a1->m128i_i64[0] + 24), v12, 0, *(double *)a3.m128_u64);
          v51 = a1[4].m128i_i64[1];
          v52 = v116;
          v116 = nullptr;
          v53 = _mm_loadu_si128(&v117);
          v117 = 0;
          if ( v51 )
          {
            a1[5].m128i_i64[0] = 0;
            *(__m128i *)src = v53;
            qfree(v51);
            v54 = _mm_load_si128((const __m128i *)src);
            v55 = (__int64)v116;
            a1[4].m128i_i64[1] = (__int64)v52;
            a1[5] = v54;
            if ( v55 )
            {
              v117.m128i_i64[0] = 0;
              qfree(v55);
            }
          }
          else
          {
            a1[4].m128i_i64[1] = (__int64)v52;
            a1[5] = v53;
          }
          v116 = nullptr;
          copy_tinfo_t();
          sub_38DD50();
          clear_tinfo_t();
        }
        goto LABEL_5;
      }
      goto LABEL_75;
    }
    if ( v15 <= 69 )
    {
LABEL_75:
      sub_38E2E0(a1->m128i_i64, *(double *)a3.m128_u64, a8);
      goto LABEL_5;
    }
LABEL_33:
    v14 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v14 + 123) & 0x40) != 0 )
      goto LABEL_38;
    if ( v15 == 81 )
    {
      v58 = sub_38BBF0(*(_QWORD *)(v14 + 32), **(_DWORD **)(v12 + 24));
      if ( v58 != -1 )
      {
        v59 = 5;
        v60 = v58 + 5;
        v61 = sub_2581E0(*(__m128i **)(a1->m128i_i64[0] + 32));
        while ( 1 )
        {
          v62 = v60 - v59;
          if ( v62 >= v61->m128i_i64[1] )
            break;
          v63 = v61->m128i_i64[0] + 32 * v62;
          v64 = *(char **)(v63 + 8);
          v65 = (const void **)v63;
          if ( v64 )
          {
            v66 = (size_t)(v64 - 1);
            if ( v64 != &byte_1 )
            {
              v67 = a1[5].m128i_i64[0];
              v68 = v64 - 1;
              if ( v67 )
              {
                --v67;
                v68 = (char *)(v66 + v67);
                v64 += v67;
              }
              v69 = a1[4].m128i_i64[1];
              if ( a1[5].m128i_i64[1] < (unsigned __int64)v64 )
              {
                v113 = v67;
                v112 = v66;
                v111 = (__int64)v68;
                src[0] = v64;
                v100 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v69, (__int64)v64, 1);
                v67 = v113;
                v66 = v112;
                v68 = (char *)v111;
                v64 = (char *)src[0];
                a1[4].m128i_i64[1] = v100;
                v69 = v100;
              }
              a1[5].m128i_i64[0] = (__int64)v64;
              v68[v69] = 0;
              memcpy((void *)(v67 + a1[4].m128i_i64[1]), *v65, v66);
            }
          }
          v70 = a1[5].m128i_i64[0];
          if ( v70 )
          {
            v71 = (void *)(v70 + 1);
            v72 = a1[5].m128i_i64[0];
            --v70;
          }
          else
          {
            v72 = 1;
            v71 = &word_2;
          }
          v73 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v71 )
          {
            v111 = v72;
            src[0] = v71;
            v76 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v73, (__int64)v71, 1);
            v72 = v111;
            v71 = src[0];
            a1[4].m128i_i64[1] = v76;
            v73 = v76;
          }
          a1[5].m128i_i64[0] = (__int64)v71;
          *(_BYTE *)(v73 + v70) = 10;
          *(_BYTE *)(a1[4].m128i_i64[1] + v72) = 0;
          if ( !--v59 )
          {
            v74 = 5;
            goto LABEL_104;
          }
        }
        v74 = 5 - v59;
LABEL_104:
        a1[1].m128i_i32[0] = v74;
        goto LABEL_5;
      }
    }
    return 0;
  }
LABEL_2:
  if ( v11 != 2 )
  {
    v14 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v14 + 123) & 0x40) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 8);
LABEL_38:
      if ( *(_DWORD *)(v12 + 8) != 77 )
      {
        if ( !under_debugger )
          sub_383060(0xCAADu, *(double *)a3.m128_u64);
        BUG();
      }
      callui(70, *(_QWORD *)(v14 + 8), 1, &callui, a6, a7, src[0], src[1], v110, v111);
      v116 = nullptr;
      v30 = v29;
      v117 = 0;
      if ( !v29 )
        goto LABEL_87;
      v31 = strlen(v29);
      v32 = v31 + 1;
      v33 = v31;
      v116 = (char *)qvector_reserve((__int64)&v116, 0, v31 + 1, 1);
      v117.m128i_i64[0] = v32;
      memmove(v116, v30, v33);
      v116[v33] = 0;
      v34 = v117.m128i_i64[0];
      if ( v117.m128i_i64[0] > 1uLL )
      {
        tag_remove();
        v34 = v117.m128i_i64[0];
      }
      v35 = v116;
      if ( !v34 )
LABEL_87:
        v35 = s1;
      if ( skip_spaces() - (__int64)v35 + 4 < (unsigned __int64)*(int *)(a1->m128i_i64[0] + 48) )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 8) + 24LL);
        v37 = *(_BYTE *)(v36 + 77);
        if ( (v37 & 1) != 0 )
        {
          v91 = a1[5].m128i_i64[0];
          if ( v91 )
          {
            v92 = v91 + 6;
            v93 = (void *)(v91 + 7);
            --v91;
          }
          else
          {
            v93 = &byte_8;
            v92 = 7;
          }
          v94 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v93 )
          {
            v111 = v92;
            src[0] = v93;
            v102 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v94, (__int64)v93, 1);
            v92 = v111;
            v93 = src[0];
            a1[4].m128i_i64[1] = v102;
            v94 = v102;
          }
          a1[5].m128i_i64[0] = (__int64)v93;
          *(_BYTE *)(v94 + v92) = 0;
          v95 = (_DWORD *)(a1[4].m128i_i64[1] + v91);
          *v95 = 1702390118;
          *(_DWORD *)((char *)v95 + 3) = 540763237;
          v37 = *(_BYTE *)(v36 + 77);
        }
        if ( (v37 & 8) != 0 )
        {
          v86 = a1[5].m128i_i64[0];
          if ( v86 )
          {
            v87 = v86 + 8;
            v88 = (void *)(v86 + 9);
            --v86;
          }
          else
          {
            v88 = byte_9 + 1;
            v87 = 9;
          }
          v89 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v88 )
          {
            v111 = v87;
            src[0] = v88;
            v105 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v89, (__int64)v88, 1);
            v87 = v111;
            v88 = src[0];
            a1[4].m128i_i64[1] = v105;
            v89 = v105;
          }
          a1[5].m128i_i64[0] = (__int64)v88;
          *(_BYTE *)(v89 + v87) = 0;
          v90 = a1[4].m128i_i64[1] + v86;
          *(_QWORD *)v90 = 0x3B6465746167656ELL;
          *(_BYTE *)(v90 + 8) = 32;
          v37 = *(_BYTE *)(v36 + 77);
        }
        if ( (v37 & 0x10) != 0 )
        {
          v82 = a1[5].m128i_i64[0];
          if ( v82 )
          {
            v83 = v82 + 7;
            v84 = (void *)(v82 + 8);
            --v82;
          }
          else
          {
            v84 = byte_9;
            v83 = 8;
          }
          v85 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v84 )
          {
            v111 = v83;
            src[0] = v84;
            v101 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v85, (__int64)v84, 1);
            v83 = v111;
            v84 = src[0];
            a1[4].m128i_i64[1] = v101;
            v85 = v101;
          }
          a1[5].m128i_i64[0] = (__int64)v84;
          *(_BYTE *)(v85 + v83) = 0;
          *(_QWORD *)(a1[4].m128i_i64[1] + v82) = 0x203B746F6E746962LL;
        }
        if ( (*(_QWORD *)(v36 + 104) & 0x20000) != 0 )
        {
          v77 = a1[5].m128i_i64[0];
          if ( v77 )
          {
            v78 = v77 + 8;
            v79 = (void *)(v77 + 9);
            --v77;
          }
          else
          {
            v79 = byte_9 + 1;
            v78 = 9;
          }
          v80 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v79 )
          {
            v111 = v78;
            src[0] = v79;
            v103 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v80, (__int64)v79, 1);
            v78 = v111;
            v79 = src[0];
            a1[4].m128i_i64[1] = v103;
            v80 = v103;
          }
          a1[5].m128i_i64[0] = (__int64)v79;
          *(_BYTE *)(v80 + v78) = 0;
          v81 = a1[4].m128i_i64[1] + v77;
          *(_QWORD *)v81 = 0x3B6E676973766E69LL;
          *(_BYTE *)(v81 + 8) = 32;
        }
        if ( (unsigned __int8)is_enum() )
        {
          sub_385E90(&a1[4].m128i_i64[1]);
          v96 = a1[5].m128i_i64[0];
          if ( v96 )
          {
            v97 = (void *)(v96 + 1);
            v98 = v96 + 2;
            --v96;
          }
          else
          {
            v98 = 3;
            v97 = &word_2;
          }
          v99 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < v98 )
          {
            src[0] = v97;
            v104 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v99, v98, 1);
            a1[4].m128i_i64[1] = v104;
            v97 = src[0];
            v99 = v104;
          }
          a1[5].m128i_i64[0] = v98;
          *((_BYTE *)v97 + v99) = 0;
          *(_WORD *)(a1[4].m128i_i64[1] + v96) = 8251;
        }
        if ( (unsigned __int8)is_enum() )
        {
          v38 = s1;
          if ( *(_QWORD *)(v36 + 88) )
            v38 = *(const char **)(v36 + 80);
          if ( v38 )
          {
            v39 = strlen(v38);
            v40 = a1[5].m128i_i64[0];
            v41 = v39;
            v42 = v39;
            if ( v40 )
            {
              --v40;
              v42 = v39 + v40;
            }
            v43 = a1[4].m128i_i64[1];
            v44 = (void *)(v42 + 1);
            if ( a1[5].m128i_i64[1] < v42 + 1 )
            {
              v111 = v42;
              src[0] = (void *)(v42 + 1);
              v106 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v43, (__int64)v44, 1);
              v42 = v111;
              v44 = src[0];
              a1[4].m128i_i64[1] = v106;
              v43 = v106;
            }
            a1[5].m128i_i64[0] = (__int64)v44;
            *(_BYTE *)(v43 + v42) = 0;
            memmove((void *)(v40 + a1[4].m128i_i64[1]), v38, v41);
          }
        }
      }
      if ( v116 )
      {
        v117.m128i_i64[0] = 0;
        qfree((__int64)v116);
      }
      goto LABEL_5;
    }
    if ( v11 == 3 )
    {
      v115 = 0;
      sub_3767A0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL));
      v116 = nullptr;
      copy_tinfo_t();
      sub_38DD50();
      clear_tinfo_t();
      clear_tinfo_t();
LABEL_5:
      sub_6B870(a2);
      ++a1[1].m128i_i32[0];
      return 1;
    }
    return 0;
  }
  v12 = *(_QWORD *)(v9 + 8);
  if ( v12 )
    goto LABEL_4;
  v14 = a1->m128i_i64[0];
  if ( *(_DWORD *)(a1->m128i_i64[0] + 104) != 4 )
    return 0;
  if ( (*(_BYTE *)(v14 + 123) & 0x40) != 0 )
    goto LABEL_38;
  return 0;
}

