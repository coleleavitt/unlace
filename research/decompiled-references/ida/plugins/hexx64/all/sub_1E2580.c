__int64 __fastcall sub_1E2580(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  void **v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  unsigned __int64 *v33; // rbx
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  _DWORD *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  void *v40; // rbx
  __m128i v41; // xmm0
  __int64 v42; // rbp
  unsigned __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  char *v46; // rax
  __int64 v47; // rax
  size_t v48; // r13
  __int64 v49; // rbp
  __int64 v50; // r15
  unsigned __int64 v51; // r14
  __int64 v52; // r13
  const char *v53; // r14
  __int64 v54; // rbp
  __int64 v55; // r15
  char *v56; // rsi
  __int64 v57; // rdx
  char *v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  const char *v61; // r8
  const char *v62; // rcx
  __int64 v63; // rbp
  __int64 v64; // r12
  __int64 v65; // rbx
  __int64 *v66; // rax
  __int64 v67; // rdi
  void *v68; // rdx
  unsigned __int64 v69; // rax
  const void **v70; // r14
  __int64 v71; // r13
  size_t v72; // r13
  __int64 v73; // rbp
  unsigned __int64 v74; // rdx
  int v75; // eax
  char *v76; // rax
  __m128i v77; // xmm0
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ebx
  int v81; // eax
  const char *v82; // rbx
  char *v83; // rax
  __m128i si128; // xmm0
  _QWORD *v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // r13
  __int64 *v88; // rbp
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rax
  unsigned __int64 v95; // [rsp+10h] [rbp-198h]
  __m128i v97; // [rsp+20h] [rbp-188h] BYREF
  void **p_src; // [rsp+30h] [rbp-178h]
  unsigned __int64 v99; // [rsp+38h] [rbp-170h]
  unsigned __int8 v100; // [rsp+42h] [rbp-166h]
  unsigned __int8 v101; // [rsp+43h] [rbp-165h]
  int v102; // [rsp+44h] [rbp-164h]
  unsigned __int64 v103; // [rsp+48h] [rbp-160h]
  __m128i v104; // [rsp+50h] [rbp-158h] BYREF
  int v105; // [rsp+6Ch] [rbp-13Ch] BYREF
  __int64 v106; // [rsp+70h] [rbp-138h] BYREF
  char v107; // [rsp+78h] [rbp-130h]
  unsigned __int64 v108; // [rsp+80h] [rbp-128h] BYREF
  __int128 v109; // [rsp+88h] [rbp-120h]
  const char *v110; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-100h]
  char *v112; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v113; // [rsp+C8h] [rbp-E0h]
  void *src; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v115; // [rsp+E8h] [rbp-C0h] BYREF
  _DWORD v116[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v117; // [rsp+108h] [rbp-A0h]
  __int64 v118; // [rsp+118h] [rbp-90h]
  _BYTE v119[32]; // [rsp+120h] [rbp-88h] BYREF
  int v120[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v121; // [rsp+148h] [rbp-60h]
  __int64 v122; // [rsp+158h] [rbp-50h]
  unsigned __int64 v123; // [rsp+168h] [rbp-40h]

  v123 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1496LL) + 728LL) & 1) == 0 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 760LL);
  if ( v4 <= 0 )
    return 0;
  v101 = a1[24];
  if ( v101 )
    return 0;
  v6 = *(_QWORD *)(v3 + 1504);
  v107 = 0;
  v106 = 0;
  v103 = a3 + 32;
  if ( !(unsigned __int8)sub_1DFF30((__int64)&v106, v6, &v105, a3 + 32) )
    return 0;
  v7 = *(__int64 **)(a3 + 56);
  v8 = v7[1];
  v9 = *v7;
  v97.m128i_i64[1] = (__int64)v7;
  v10 = v9 + 24 * v8;
  if ( v9 != v10 )
  {
    v11 = 0;
    do
    {
      v11 += *(_QWORD *)(v9 + 8);
      if ( v4 < v11 )
        return 0;
      v9 += 24;
    }
    while ( v10 != v9 );
  }
  v13 = v105;
  v116[0] = 0;
  v118 = 0;
  v116[1] = v105;
  v117 = 0;
  v100 = sub_1E0180((__int64)a1, (__m128i *)v116, (__int64)&v106, 0);
  if ( !v100 )
    goto LABEL_83;
  if ( v116[0] == 8 )
  {
    v100 = 0;
    goto LABEL_83;
  }
  v16.m128i_i64[0] = 0;
  v108 = 0;
  v109 = 0;
  v99 = *(_QWORD *)(v97.m128i_i64[1] + 32);
  if ( !v99 )
  {
    p_src = (void **)v119;
    sub_312C40((__int64)v119, (__int64)v116, v14, v15);
    goto LABEL_90;
  }
  v102 = -1;
  v17 = 0;
  v97.m128i_i64[0] = ~(-1LL << (8 * (unsigned __int8)v13));
  while ( 2 )
  {
    v18 = v97.m128i_i64[1];
    v19 = *(_QWORD *)v97.m128i_i64[1];
    v20 = (_QWORD *)(*(_QWORD *)v97.m128i_i64[1] + 24 * v17);
    if ( !v20[1] )
    {
      v102 = v17++;
      goto LABEL_16;
    }
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v23 = v97.m128i_i64[0] & *(_QWORD *)(*v20 + 8 * v21);
        if ( v13 == 8 )
          v23 = *(_QWORD *)(*v20 + 8 * v21);
        if ( !sub_315890((__int64)v116, v23) )
          break;
        ++v21;
LABEL_20:
        v22 = v20[1];
        if ( v21 >= v22 )
          goto LABEL_31;
      }
      src = nullptr;
      v115 = 0;
      p_src = &src;
      sub_6B870((__int64 *)&src);
      v24 = v109;
      v25 = v108;
      v26 = v109 + 1;
      if ( (unsigned __int64)&src < v108 || (unsigned __int64)p_src >= v108 + 24LL * *((_QWORD *)&v109 + 1) )
      {
        if ( *((_QWORD *)&v109 + 1) < v26 )
        {
          v108 = qvector_reserve((__int64)&v108, v108, v109 + 1, 24);
          v25 = v108;
          v24 = v109;
        }
        v16 = _mm_loadu_si128(&v115);
        v68 = src;
        src = nullptr;
        v69 = v25 + 24 * v24;
        *(__m128i *)(v69 + 8) = v16;
        v16.m128i_i64[0] = 0;
        *(_QWORD *)v69 = v68;
        v115 = 0;
      }
      else
      {
        v27 = (void **)src;
        v28 = _mm_loadl_epi64(&v115);
        src = nullptr;
        v29 = _mm_loadl_epi64((const __m128i *)&v115.m128i_u64[1]);
        v115 = 0;
        p_src = v27;
        if ( *((_QWORD *)&v109 + 1) < v26 )
        {
          v104.m128i_i64[1] = v29.m128i_i64[0];
          v104.m128i_i64[0] = v28.m128i_i64[0];
          v108 = qvector_reserve((__int64)&v108, v108, v109 + 1, 24);
          v25 = v108;
          v29 = _mm_loadl_epi64((const __m128i *)&v104.m128i_u64[1]);
          v24 = v109;
          v28 = _mm_loadl_epi64(&v104);
        }
        v16 = _mm_unpacklo_epi64(v28, v29);
        v30 = v25 + 24 * v24;
        *(_QWORD *)v30 = p_src;
        *(__m128i *)(v30 + 8) = v16;
      }
      *(_QWORD *)&v109 = v109 + 1;
      memmove((void *)(8 * v21 + *v20), (const void *)(8 * v21 + *v20 + 8), 8LL * v20[1]-- - 8 - 8 * v21);
      if ( !src )
        goto LABEL_20;
      v115.m128i_i64[0] = 0;
      qfree((__int64)src);
      v22 = v20[1];
    }
    while ( v21 < v22 );
LABEL_31:
    if ( v22 )
    {
      ++v17;
    }
    else
    {
      sub_122440((__int64 *)v97.m128i_i64[1], a2, v17, *(double *)v16.m128i_i64);
      --v99;
    }
LABEL_16:
    if ( v17 < v99 )
      continue;
    break;
  }
  p_src = (void **)v119;
  sub_312C40((__int64)v119, (__int64)v116, v19, v18);
  if ( v102 != -1 )
  {
    v31 = *(_QWORD *)(v97.m128i_i64[1] + 8);
    goto LABEL_35;
  }
LABEL_90:
  v31 = *(_QWORD *)(v97.m128i_i64[1] + 8);
  if ( v31 == 1 )
  {
    v102 = -1;
LABEL_35:
    v32 = *(_QWORD *)v97.m128i_i64[1];
    for ( v97.m128i_i64[0] = *(_QWORD *)v97.m128i_i64[1] + 24 * v31; v97.m128i_i64[0] != v32; v32 += 24 )
    {
      v33 = *(unsigned __int64 **)v32;
      v34 = *(_QWORD *)v32 + 8LL * *(_QWORD *)(v32 + 8);
      if ( v34 != *(_QWORD *)v32 )
      {
        do
        {
          v35 = *v33;
          v120[0] = 0;
          v120[1] = v13;
          v122 = 0;
          v121 = 0;
          sub_313200((__int64)v120, 0, v35);
          sub_3147B0((__int64)v116, v120);
          ++v33;
          sub_312B80((__int64)v120);
        }
        while ( (unsigned __int64 *)v34 != v33 );
      }
    }
    if ( !v116[0] )
    {
      if ( v102 != -1 )
      {
        sub_122440((__int64 *)v97.m128i_i64[1], a2, v102, *(double *)v16.m128i_i64);
        v115 = 0;
        v97.m128i_i64[0] = (__int64)&src;
        src = nullptr;
        v36 = (_DWORD *)qvector_reserve((__int64)&src, 0, 8, 1);
        src = v36;
        v115.m128i_i64[0] = 8;
        *v36 = 1634100580;
        *(_DWORD *)((char *)v36 + 3) = 1953264993;
        *((_BYTE *)src + 7) = 0;
        v37 = v109;
        v38 = v108;
        v39 = v109 + 1;
        if ( (unsigned __int64)&src < v108 || (unsigned __int64)&src >= v108 + 24LL * *((_QWORD *)&v109 + 1) )
        {
          if ( *((_QWORD *)&v109 + 1) < v39 )
          {
            v108 = qvector_reserve((__int64)&v108, v108, v39, 24);
            v38 = v108;
            v37 = v109;
          }
          v16 = _mm_loadu_si128(&v115);
          v78 = v38 + 24 * v37;
          *(_QWORD *)v78 = src;
          *(__m128i *)(v78 + 8) = v16;
          *(_QWORD *)&v109 = v109 + 1;
        }
        else
        {
          v40 = src;
          v41 = _mm_loadl_epi64(&v115);
          src = nullptr;
          v42 = v115.m128i_i64[1];
          v115 = 0;
          if ( *((_QWORD *)&v109 + 1) < v39 )
          {
            v97.m128i_i64[0] = v41.m128i_i64[0];
            v108 = qvector_reserve((__int64)&v108, v108, v39, 24);
            v38 = v108;
            v41 = _mm_loadl_epi64(&v97);
            v37 = v109;
          }
          v43 = v38 + 24 * v37;
          v16 = _mm_unpacklo_epi64(v41, (__m128i)(unsigned __int64)v42);
          *(_QWORD *)v43 = v40;
          *(__m128i *)(v43 + 8) = v16;
          *(_QWORD *)&v109 = v109 + 1;
          if ( src )
          {
            v115.m128i_i64[0] = 0;
            qfree((__int64)src);
          }
        }
      }
      v44 = *(_QWORD *)(v97.m128i_i64[1] + 8);
      if ( v44 == 1 )
      {
        v85 = *(_QWORD **)v97.m128i_i64[1];
        v86 = **(_QWORD **)v97.m128i_i64[1];
        if ( v86 )
        {
          v85[1] = 0;
          qfree(v86);
          *v85 = 0;
          v85[2] = 0;
        }
        v87 = v109;
        v88 = (__int64 *)v108;
        if ( (_QWORD)v109 != 1 )
        {
          v16.m128i_i64[0] = 0;
          v89 = v108;
          src = nullptr;
          v115 = 0;
          if ( (unsigned __int64)v109 > 1 )
          {
            do
            {
              v91 = &v88[3 * v44];
              v92 = *v91;
              if ( *v91 )
              {
                v91[1] = 0;
                qfree(v92);
                v88 = (__int64 *)v108;
              }
              ++v44;
            }
            while ( v87 != v44 );
          }
          else if ( *((_QWORD *)&v109 + 1)
                 || (v89 = qvector_reserve((__int64)&v108, v108, 1, 24), v108 = v89, v88 = (__int64 *)v89, !(_QWORD)v109) )
          {
            v16.m128i_i64[0] = 0;
            *(_QWORD *)v89 = 0;
            *(_OWORD *)(v89 + 8) = 0;
            v88 = (__int64 *)v108;
          }
          *(_QWORD *)&v109 = 1;
        }
        v90 = *v88;
        if ( (unsigned __int64)v88[2] <= 3 )
        {
          v93 = qvector_reserve((__int64)v88, v90, 4, 1);
          *v88 = v93;
          v90 = v93;
        }
        v88[1] = 4;
        *(_WORD *)v90 = 27745;
        *(_BYTE *)(v90 + 2) = 108;
        *(_BYTE *)(*v88 + 3) = 0;
      }
    }
  }
  if ( !(_QWORD)v109 )
    goto LABEL_75;
  sub_3166B0((__int64)&v110, (__int64)p_src, v103);
  v45 = *(_QWORD *)(v97.m128i_i64[1] + 32);
  if ( !v45 )
  {
    sub_159B40(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0, *(double *)v16.m128i_i64);
    sub_11D5A0(a3);
    v75 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 76) = 2;
    BYTE1(v75) &= ~2u;
    LOBYTE(v75) = v75 | 0x80;
    *(_DWORD *)(a2 + 24) = v75;
    v112 = nullptr;
    v113 = 0;
    goto LABEL_100;
  }
  if ( v45 != 1 || *(_QWORD *)(*(_QWORD *)v97.m128i_i64[1] + 8LL) )
  {
    v112 = nullptr;
    v113 = 0;
    if ( (_QWORD)v109 != 1 )
    {
      v46 = (char *)qvector_reserve((__int64)&v112, 0, 11, 1);
      *(_QWORD *)&v113 = 11;
      v112 = v46;
      strcpy(v46, "the cases ");
      sub_1DF580((__int64)&src, (__int64 *)&v108, ", ");
      if ( v115.m128i_i64[0] )
      {
        v47 = v115.m128i_i64[0] - 1;
        v48 = v115.m128i_i64[0] - 1;
        if ( v115.m128i_i64[0] != 1 )
        {
          v49 = ((_QWORD)v113 == 0) + (_QWORD)v113 - 1LL;
          v50 = v47 + v49;
          v51 = v47 + ((_QWORD)v113 == 0) + (_QWORD)v113;
          if ( *((_QWORD *)&v113 + 1) < v51 )
            v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v47 + ((_QWORD)v113 == 0) + (_QWORD)v113, 1);
          *(_QWORD *)&v113 = v51;
          v112[v50] = 0;
          memcpy(&v112[v49], src, v48);
        }
      }
      if ( src )
      {
        v115.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      goto LABEL_59;
    }
    if ( *(_QWORD *)(v108 + 8) )
    {
      v82 = *(const char **)v108;
      if ( !strcmp(*(const char **)v108, "all") )
      {
        v112 = (char *)qvector_reserve((__int64)&v112, 0, 14, 1);
        *(_QWORD *)&v113 = 14;
        strcpy(v112, "the all cases");
LABEL_59:
        v52 = 5;
        v53 = " were";
        goto LABEL_60;
      }
      if ( !strcmp(v82, "default") )
      {
        v83 = (char *)qvector_reserve((__int64)&v112, 0, 17, 1);
        si128 = _mm_load_si128((const __m128i *)&xmmword_4248A0);
        v112 = v83;
        *(_QWORD *)&v113 = 17;
        v83[16] = 0;
        *(__m128i *)v83 = si128;
        goto LABEL_98;
      }
    }
    v112 = (char *)qvector_reserve((__int64)&v112, 0, 10, 1);
    *(_QWORD *)&v113 = 10;
    strcpy(v112, "the case ");
    v70 = (const void **)v108;
    v71 = *(_QWORD *)(v108 + 8);
    if ( v71 )
    {
      v72 = v71 - 1;
      if ( v72 )
      {
        v73 = ((_QWORD)v113 == 0) + (_QWORD)v113 - 1LL;
        v74 = v72 + ((_QWORD)v113 == 0) + (_QWORD)v113;
        if ( *((_QWORD *)&v113 + 1) < v74 )
        {
          v95 = v72 + ((_QWORD)v113 == 0) + (_QWORD)v113;
          v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v74, 1);
          v74 = v95;
        }
        *(_QWORD *)&v113 = v74;
        v112[v72 + v73] = 0;
        memcpy(&v112[v73], *v70, v72);
      }
    }
    goto LABEL_98;
  }
  sub_159B40(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0, *(double *)v16.m128i_i64);
  v79 = v97.m128i_i64[1];
  *(_DWORD *)a3 = 55;
  v80 = **(_DWORD **)(v79 + 24);
  sub_11CDA0(v103);
  *(_BYTE *)(a3 + 32) = 7;
  *(_DWORD *)(a3 + 40) = v80;
  sub_11CDA0(a3 + 48);
  v81 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 76) = 3;
  BYTE1(v81) &= ~2u;
  LOBYTE(v81) = v81 | 0x80;
  *(_DWORD *)(a2 + 24) = v81;
  v112 = nullptr;
  v113 = 0;
LABEL_100:
  v76 = (char *)qvector_reserve((__int64)&v112, 0, 18, 1);
  v77 = _mm_load_si128((const __m128i *)&xmmword_424890);
  v112 = v76;
  *(_QWORD *)&v113 = 18;
  v76[17] = 0;
  v76[16] = 104;
  *(__m128i *)v76 = v77;
LABEL_98:
  v52 = 4;
  v53 = " was";
LABEL_60:
  v54 = v113;
  v55 = v52;
  if ( (_QWORD)v113 )
  {
    v54 = v113 - 1;
    v55 = v52 + v113 - 1;
  }
  v56 = v112;
  v57 = v55 + 1;
  if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v55 + 1) )
  {
    v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v57, 1);
    v57 = v55 + 1;
    v56 = v112;
  }
  *(_QWORD *)&v113 = v57;
  v56[v55] = 0;
  v58 = &v112[v54];
  *(_DWORD *)v58 = *(_DWORD *)v53;
  *(_DWORD *)&v58[(unsigned int)v52 - 4] = *(_DWORD *)&v53[(unsigned int)v52 - 4];
  v59 = *(_QWORD **)a1;
  v60 = *(_QWORD *)(*(_QWORD *)a1 + 784LL);
  if ( v60 )
  {
    *(_DWORD *)(v60 + 48) = 63;
    v59 = *(_QWORD **)a1;
  }
  v61 = s1;
  if ( v111 )
    v61 = v110;
  v62 = s1;
  if ( (_QWORD)v113 )
    v62 = v112;
  sub_3311F0(v59, *(_QWORD *)(a3 + 24), 0x38u, v62, v61);
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree((__int64)v112);
  }
  if ( v110 )
  {
    v111 = 0;
    qfree((__int64)v110);
  }
  v101 = v100;
LABEL_75:
  sub_312B80((__int64)p_src);
  v63 = v108;
  if ( v108 )
  {
    v64 = v109;
    if ( (_QWORD)v109 )
    {
      v65 = 0;
      do
      {
        v66 = (__int64 *)(v63 + 24 * v65);
        v67 = *v66;
        if ( *v66 )
        {
          v66[1] = 0;
          qfree(v67);
          v63 = v108;
        }
        ++v65;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v63);
  }
  v100 = v101;
LABEL_83:
  sub_312B80((__int64)v116);
  return v100;
}

