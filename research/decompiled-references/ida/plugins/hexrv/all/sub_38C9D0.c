__int64 __fastcall sub_38C9D0(
        __m128i *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  char *v26; // rax
  unsigned __int64 v27; // r14
  char *v28; // rdi
  __int64 v29; // r15
  __int64 v30; // r14
  char *v31; // r13
  const char *v32; // rax
  const char *v33; // rbp
  size_t v34; // rax
  __int64 v35; // r15
  size_t v36; // r14
  __int64 v37; // rax
  const char *v38; // rbp
  __int64 v39; // rbp
  char v40; // al
  const char *v41; // r13
  size_t v42; // rax
  __int64 v43; // rbp
  size_t v44; // r15
  size_t v45; // r8
  __int64 v46; // rsi
  void *v47; // rdx
  char *v48; // rdi
  __int64 v49; // r15
  __int64 v50; // r14
  char *v51; // r13
  __int64 v52; // rdi
  char *v53; // rbp
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  char *v56; // rdi
  __int64 v57; // rsi
  __m128i si128; // xmm0
  __int64 v59; // rsi
  __int64 v60; // rdx
  int v61; // ebp
  int v62; // r14d
  int v63; // r13d
  _QWORD *v64; // r15
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // rdx
  const void **v68; // rbp
  size_t v69; // r9
  __int64 v70; // r8
  char *v71; // r10
  __int64 v72; // rsi
  __int64 v73; // rbp
  void *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rsi
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // r8
  void *v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // r15
  __int64 v85; // r15
  __int64 v86; // r8
  void *v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // r15
  __int64 v90; // r8
  void *v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // r15
  __int64 v94; // r15
  __int64 v95; // r8
  void *v96; // rdx
  __int64 v97; // rsi
  _DWORD *v98; // r15
  __int64 v99; // r13
  void *v100; // r8
  unsigned __int64 v101; // r15
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  void *v110; // rdi
  const void *v111; // rsi
  void *src[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v113; // [rsp+10h] [rbp-D8h]
  __int64 v114; // [rsp+18h] [rbp-D0h]
  size_t v115; // [rsp+20h] [rbp-C8h]
  __int64 v116; // [rsp+28h] [rbp-C0h]
  int v117; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v118; // [rsp+38h] [rbp-B0h] BYREF
  char *v119; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v120; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v121; // [rsp+58h] [rbp-90h]
  __int64 v122; // [rsp+60h] [rbp-88h]
  __int64 v123; // [rsp+68h] [rbp-80h]
  __int128 v124; // [rsp+70h] [rbp-78h]
  __int64 v125; // [rsp+80h] [rbp-68h]
  __int128 v126; // [rsp+88h] [rbp-60h]
  char v127; // [rsp+98h] [rbp-50h]
  unsigned __int64 v128; // [rsp+A8h] [rbp-40h]

  v15 = (unsigned int *)a1->m128i_i64[1];
  v128 = __readfsqword(0x28u);
  v17 = *v15;
  if ( (_DWORD)v17 == 1 )
  {
    v18 = *((_QWORD *)v15 + 1);
    v21 = *(_DWORD *)(v18 + 8);
    if ( v21 > 69 )
      goto LABEL_33;
    if ( (*(_BYTE *)(v18 + 56) & 0x40) != 0 )
    {
      v57 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] <= 0x1CuLL )
      {
        v78 = qvector_reserve();
        a1[1].m128i_i64[1] = v78;
        v57 = v78;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FE480);
      a1[2].m128i_i64[0] = 29;
      *(__m128i *)v57 = si128;
      a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_3FE490);
      *(__m128 *)(v57 + 12) = a3;
      *(_BYTE *)(a1[1].m128i_i64[1] + 28) = 0;
      v18 = *(_QWORD *)(a1->m128i_i64[1] + 8);
    }
    v22 = *(_QWORD *)(a1->m128i_i64[0] + 32);
    v23 = sub_252170(v22 + 16, v18);
    v24 = v23;
    if ( v23 )
    {
      if ( *(_DWORD *)(v23 + 8) == 57 && *(_QWORD *)(v23 + 24) != v18 )
      {
        v25 = sub_27F760(v23, v18, &v117);
        if ( v25 )
        {
          if ( !*(_BYTE *)(v25 + 60) )
          {
            v118 = 0;
            sub_3814E0(*(_QWORD *)(v22 + 216), *(_QWORD *)(v24 + 24), &v118);
            a3 = 0;
            v120 = 0;
            v119 = nullptr;
            v121 = 0;
            v122 = 0;
            v123 = 0;
            v125 = 0;
            v127 = 16;
            v124 = 0;
            v126 = 0;
            if ( (unsigned __int8)get_tinfo_details() && (unsigned __int64)v117 < v120.m128i_i64[0] )
            {
              v26 = &v119[80 * v117];
              if ( &a1[3] != (__m128i *)(v26 + 16) )
              {
                v27 = *((_QWORD *)v26 + 3);
                if ( v27 > 1 )
                {
                  src[0] = *((void **)v26 + 2);
                  if ( a1[4].m128i_i64[0] < v27 )
                    a1[3].m128i_i64[0] = qvector_reserve();
                  v110 = (void *)a1[3].m128i_i64[0];
                  v111 = src[0];
                  a1[3].m128i_i64[1] = v27;
                  memmove(v110, v111, v27 - 1);
                  *(_BYTE *)(a1[3].m128i_i64[0] + v27 - 1) = 0;
                }
                else
                {
                  a1[3].m128i_i64[1] = 0;
                }
              }
              if ( v125 )
              {
                *(_QWORD *)&v126 = 0;
                qfree();
              }
              cleanup_argloc();
              clear_tinfo_t();
              v28 = v119;
              if ( v119 )
              {
                v29 = v120.m128i_i64[0];
                v30 = 0;
                if ( v120.m128i_i64[0] )
                {
                  do
                  {
                    v31 = &v28[80 * v30];
                    clear_tinfo_t();
                    if ( *((_QWORD *)v31 + 5) )
                    {
                      *((_QWORD *)v31 + 6) = 0;
                      qfree();
                    }
                    if ( *((_QWORD *)v31 + 2) )
                    {
                      *((_QWORD *)v31 + 3) = 0;
                      qfree();
                    }
                    ++v30;
                    cleanup_argloc();
                    v28 = v119;
                  }
                  while ( v29 != v30 );
                }
                v120.m128i_i64[0] = 0;
                qfree();
              }
              clear_tinfo_t();
              v15 = (unsigned int *)a1->m128i_i64[1];
              v17 = *v15;
              goto LABEL_72;
            }
            if ( v125 )
            {
              *(_QWORD *)&v126 = 0;
              qfree();
            }
            cleanup_argloc();
            clear_tinfo_t();
            v48 = v119;
            if ( v119 )
            {
              v49 = v120.m128i_i64[0];
              v50 = 0;
              if ( v120.m128i_i64[0] )
              {
                do
                {
                  v51 = &v48[80 * v50];
                  clear_tinfo_t();
                  if ( *((_QWORD *)v51 + 5) )
                  {
                    *((_QWORD *)v51 + 6) = 0;
                    qfree();
                  }
                  if ( *((_QWORD *)v51 + 2) )
                  {
                    *((_QWORD *)v51 + 3) = 0;
                    qfree();
                  }
                  ++v50;
                  cleanup_argloc();
                  v48 = v119;
                }
                while ( v49 != v50 );
              }
              v120.m128i_i64[0] = 0;
              qfree();
            }
            clear_tinfo_t();
          }
        }
      }
    }
    v15 = (unsigned int *)a1->m128i_i64[1];
    v17 = *v15;
LABEL_72:
    if ( (_DWORD)v17 != 1 )
      goto LABEL_2;
    v18 = *((_QWORD *)v15 + 1);
    v21 = *(_DWORD *)(v18 + 8);
    if ( v21 == 65 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 432LL) + 104LL * *(int *)(v18 + 32);
      if ( v18 )
      {
LABEL_4:
        if ( !(unsigned __int8)sub_3826F0((__int64)&a1[4].m128i_i64[1], 0) )
        {
          sub_25B8A0((__int64)&v119, *(_QWORD **)(a1->m128i_i64[0] + 24), v18, 0);
          v52 = a1[4].m128i_i64[1];
          v53 = v119;
          v119 = nullptr;
          v54 = _mm_loadu_si128(&v120);
          v120 = 0;
          if ( v52 )
          {
            a1[5].m128i_i64[0] = 0;
            *(__m128i *)src = v54;
            qfree();
            v55 = _mm_load_si128((const __m128i *)src);
            v56 = v119;
            a1[4].m128i_i64[1] = (__int64)v53;
            a1[5] = v55;
            if ( v56 )
            {
              v120.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            a1[4].m128i_i64[1] = (__int64)v53;
            a1[5] = v54;
          }
          v119 = nullptr;
          copy_tinfo_t();
          sub_388AD0();
          clear_tinfo_t();
        }
        goto LABEL_5;
      }
      goto LABEL_75;
    }
    if ( v21 <= 69 )
    {
LABEL_75:
      sub_389060(a1->m128i_i64);
      goto LABEL_5;
    }
LABEL_33:
    v20 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v20 + 123) & 0x40) != 0 )
      goto LABEL_38;
    if ( v21 == 81 )
    {
      v59 = **(unsigned int **)(v18 + 24);
      v61 = sub_386970(*(_QWORD *)(v20 + 32), v59);
      if ( v61 != -1 )
      {
        v62 = 5;
        v63 = v61 + 5;
        v64 = (_QWORD *)sub_2535E0(*(_QWORD *)(a1->m128i_i64[0] + 32), v59, v60);
        while ( 1 )
        {
          v65 = v63 - v62;
          if ( v65 >= v64[1] )
            break;
          v66 = *v64 + 32 * v65;
          v67 = *(char **)(v66 + 8);
          v68 = (const void **)v66;
          if ( v67 )
          {
            v69 = (size_t)(v67 - 1);
            if ( v67 != &byte_1 )
            {
              v70 = a1[5].m128i_i64[0];
              v71 = v67 - 1;
              if ( v70 )
              {
                --v70;
                v71 = (char *)(v69 + v70);
                v67 += v70;
              }
              v72 = a1[4].m128i_i64[1];
              if ( a1[5].m128i_i64[1] < (unsigned __int64)v67 )
              {
                v116 = v70;
                v115 = v69;
                v114 = (__int64)v71;
                src[0] = v67;
                v103 = qvector_reserve();
                v70 = v116;
                v69 = v115;
                v71 = (char *)v114;
                v67 = (char *)src[0];
                a1[4].m128i_i64[1] = v103;
                v72 = v103;
              }
              a1[5].m128i_i64[0] = (__int64)v67;
              v71[v72] = 0;
              memcpy((void *)(v70 + a1[4].m128i_i64[1]), *v68, v69);
            }
          }
          v73 = a1[5].m128i_i64[0];
          if ( v73 )
          {
            v74 = (void *)(v73 + 1);
            v75 = a1[5].m128i_i64[0];
            --v73;
          }
          else
          {
            v75 = 1;
            v74 = &word_2;
          }
          v76 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v74 )
          {
            v114 = v75;
            src[0] = v74;
            v79 = qvector_reserve();
            v75 = v114;
            v74 = src[0];
            a1[4].m128i_i64[1] = v79;
            v76 = v79;
          }
          a1[5].m128i_i64[0] = (__int64)v74;
          *(_BYTE *)(v76 + v73) = 10;
          *(_BYTE *)(a1[4].m128i_i64[1] + v75) = 0;
          if ( !--v62 )
          {
            v77 = 5;
            goto LABEL_104;
          }
        }
        v77 = 5 - v62;
LABEL_104:
        a1[1].m128i_i32[0] = v77;
        goto LABEL_5;
      }
    }
    return 0;
  }
LABEL_2:
  if ( (_DWORD)v17 != 2 )
  {
    v20 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v20 + 123) & 0x40) != 0 )
    {
      v18 = *((_QWORD *)v15 + 1);
LABEL_38:
      if ( *(_DWORD *)(v18 + 8) != 77 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCAADu, *(double *)a3.m128_u64);
        BUG();
      }
      v32 = (const char *)callui(70, *(_QWORD *)(v20 + 8), 1, &callui, a13, a14, src[0], src[1], v113, v114);
      v119 = nullptr;
      v33 = v32;
      v120 = 0;
      if ( !v32 )
        goto LABEL_87;
      v34 = strlen(v32);
      v35 = v34 + 1;
      v36 = v34;
      v119 = (char *)qvector_reserve();
      v120.m128i_i64[0] = v35;
      memmove(v119, v33, v36);
      v119[v36] = 0;
      v37 = v120.m128i_i64[0];
      if ( v120.m128i_i64[0] > 1uLL )
      {
        tag_remove();
        v37 = v120.m128i_i64[0];
      }
      v38 = v119;
      if ( !v37 )
LABEL_87:
        v38 = s1;
      if ( skip_spaces() - (__int64)v38 + 4 < (unsigned __int64)*(int *)(a1->m128i_i64[0] + 48) )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 8) + 24LL);
        v40 = *(_BYTE *)(v39 + 77);
        if ( (v40 & 1) != 0 )
        {
          v94 = a1[5].m128i_i64[0];
          if ( v94 )
          {
            v95 = v94 + 6;
            v96 = (void *)(v94 + 7);
            --v94;
          }
          else
          {
            v96 = &byte_8;
            v95 = 7;
          }
          v97 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v96 )
          {
            v114 = v95;
            src[0] = v96;
            v105 = qvector_reserve();
            v95 = v114;
            v96 = src[0];
            a1[4].m128i_i64[1] = v105;
            v97 = v105;
          }
          a1[5].m128i_i64[0] = (__int64)v96;
          *(_BYTE *)(v97 + v95) = 0;
          v98 = (_DWORD *)(a1[4].m128i_i64[1] + v94);
          *v98 = 1702390118;
          *(_DWORD *)((char *)v98 + 3) = 540763237;
          v40 = *(_BYTE *)(v39 + 77);
        }
        if ( (v40 & 8) != 0 )
        {
          v89 = a1[5].m128i_i64[0];
          if ( v89 )
          {
            v90 = v89 + 8;
            v91 = (void *)(v89 + 9);
            --v89;
          }
          else
          {
            v91 = byte_9 + 1;
            v90 = 9;
          }
          v92 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v91 )
          {
            v114 = v90;
            src[0] = v91;
            v108 = qvector_reserve();
            v90 = v114;
            v91 = src[0];
            a1[4].m128i_i64[1] = v108;
            v92 = v108;
          }
          a1[5].m128i_i64[0] = (__int64)v91;
          *(_BYTE *)(v92 + v90) = 0;
          v93 = a1[4].m128i_i64[1] + v89;
          *(_QWORD *)v93 = 0x3B6465746167656ELL;
          *(_BYTE *)(v93 + 8) = 32;
          v40 = *(_BYTE *)(v39 + 77);
        }
        if ( (v40 & 0x10) != 0 )
        {
          v85 = a1[5].m128i_i64[0];
          if ( v85 )
          {
            v86 = v85 + 7;
            v87 = (void *)(v85 + 8);
            --v85;
          }
          else
          {
            v87 = byte_9;
            v86 = 8;
          }
          v88 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v87 )
          {
            v114 = v86;
            src[0] = v87;
            v104 = qvector_reserve();
            v86 = v114;
            v87 = src[0];
            a1[4].m128i_i64[1] = v104;
            v88 = v104;
          }
          a1[5].m128i_i64[0] = (__int64)v87;
          *(_BYTE *)(v88 + v86) = 0;
          *(_QWORD *)(a1[4].m128i_i64[1] + v85) = 0x203B746F6E746962LL;
        }
        if ( (*(_QWORD *)(v39 + 104) & 0x20000) != 0 )
        {
          v80 = a1[5].m128i_i64[0];
          if ( v80 )
          {
            v81 = v80 + 8;
            v82 = (void *)(v80 + 9);
            --v80;
          }
          else
          {
            v82 = byte_9 + 1;
            v81 = 9;
          }
          v83 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v82 )
          {
            v114 = v81;
            src[0] = v82;
            v106 = qvector_reserve();
            v81 = v114;
            v82 = src[0];
            a1[4].m128i_i64[1] = v106;
            v83 = v106;
          }
          a1[5].m128i_i64[0] = (__int64)v82;
          *(_BYTE *)(v83 + v81) = 0;
          v84 = a1[4].m128i_i64[1] + v80;
          *(_QWORD *)v84 = 0x3B6E676973766E69LL;
          *(_BYTE *)(v84 + 8) = 32;
        }
        if ( (unsigned __int8)is_enum() )
        {
          sub_380C10(&a1[4].m128i_i64[1]);
          v99 = a1[5].m128i_i64[0];
          if ( v99 )
          {
            v100 = (void *)(v99 + 1);
            v101 = v99 + 2;
            --v99;
          }
          else
          {
            v101 = 3;
            v100 = &word_2;
          }
          v102 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < v101 )
          {
            src[0] = v100;
            v107 = qvector_reserve();
            a1[4].m128i_i64[1] = v107;
            v100 = src[0];
            v102 = v107;
          }
          a1[5].m128i_i64[0] = v101;
          *((_BYTE *)v100 + v102) = 0;
          *(_WORD *)(a1[4].m128i_i64[1] + v99) = 8251;
        }
        if ( (unsigned __int8)is_enum() )
        {
          v41 = s1;
          if ( *(_QWORD *)(v39 + 88) )
            v41 = *(const char **)(v39 + 80);
          if ( v41 )
          {
            v42 = strlen(v41);
            v43 = a1[5].m128i_i64[0];
            v44 = v42;
            v45 = v42;
            if ( v43 )
            {
              --v43;
              v45 = v42 + v43;
            }
            v46 = a1[4].m128i_i64[1];
            v47 = (void *)(v45 + 1);
            if ( a1[5].m128i_i64[1] < v45 + 1 )
            {
              v114 = v45;
              src[0] = (void *)(v45 + 1);
              v109 = qvector_reserve();
              v45 = v114;
              v47 = src[0];
              a1[4].m128i_i64[1] = v109;
              v46 = v109;
            }
            a1[5].m128i_i64[0] = (__int64)v47;
            *(_BYTE *)(v46 + v45) = 0;
            memmove((void *)(v43 + a1[4].m128i_i64[1]), v41, v44);
          }
        }
      }
      if ( v119 )
      {
        v120.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_5;
    }
    if ( (_DWORD)v17 == 3 )
    {
      v118 = 0;
      sub_371520(
        *(_QWORD *)(*((_QWORD *)v15 + 1) + 8LL),
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        (__int64)&v118,
        v17,
        v20,
        a13,
        a14);
      v119 = nullptr;
      copy_tinfo_t();
      sub_388AD0();
      clear_tinfo_t();
      clear_tinfo_t();
LABEL_5:
      sub_674F0(a2);
      ++a1[1].m128i_i32[0];
      return 1;
    }
    return 0;
  }
  v18 = *((_QWORD *)v15 + 1);
  if ( v18 )
    goto LABEL_4;
  v20 = a1->m128i_i64[0];
  if ( *(_DWORD *)(a1->m128i_i64[0] + 104) != 4 )
    return 0;
  if ( (*(_BYTE *)(v20 + 123) & 0x40) != 0 )
    goto LABEL_38;
  return 0;
}

