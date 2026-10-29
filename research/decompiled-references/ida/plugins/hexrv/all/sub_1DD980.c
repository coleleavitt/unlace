__int64 __fastcall sub_1DD980(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  int v15; // r13d
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  void **v24; // rcx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  void *v37; // rbx
  __m128i v38; // xmm0
  __int64 v39; // rbp
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  char *v43; // rax
  int v44; // r9d
  __int64 v45; // rax
  size_t v46; // r13
  __int64 v47; // rbp
  __int64 v48; // r15
  unsigned __int64 v49; // r14
  __int64 v50; // r13
  const char *v51; // r14
  __int64 v52; // rbp
  __int64 v53; // r15
  char *v54; // rsi
  __int64 v55; // rdx
  char *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  const char *v59; // r8
  const char *v60; // rcx
  unsigned __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rbx
  _QWORD *v64; // rax
  __m128i v65; // xmm0
  void *v66; // rdx
  unsigned __int64 v67; // rax
  const void **v68; // r14
  __int64 v69; // r13
  size_t v70; // r13
  __int64 v71; // rbp
  size_t v72; // rdx
  int v73; // eax
  char *v74; // rax
  __m128i v75; // xmm0
  __m128i v76; // xmm0
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  int v79; // ebx
  int v80; // eax
  const char *v81; // rbx
  char *v82; // rax
  __m128i si128; // xmm0
  _QWORD *v84; // rbp
  __int64 v85; // r13
  __int64 *v86; // rbp
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 *v89; // rax
  __int64 v90; // rax
  size_t v92; // [rsp+10h] [rbp-198h]
  __m128i v94; // [rsp+20h] [rbp-188h] BYREF
  void **p_src; // [rsp+30h] [rbp-178h]
  unsigned __int64 v96; // [rsp+38h] [rbp-170h]
  unsigned __int8 v97; // [rsp+42h] [rbp-166h]
  unsigned __int8 v98; // [rsp+43h] [rbp-165h]
  int v99; // [rsp+44h] [rbp-164h]
  __int64 v100; // [rsp+48h] [rbp-160h]
  __m128i v101; // [rsp+50h] [rbp-158h] BYREF
  int v102; // [rsp+6Ch] [rbp-13Ch] BYREF
  __int64 v103; // [rsp+70h] [rbp-138h] BYREF
  char v104; // [rsp+78h] [rbp-130h]
  unsigned __int64 v105; // [rsp+80h] [rbp-128h] BYREF
  __int128 v106; // [rsp+88h] [rbp-120h]
  __int64 v107; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-100h]
  char *v109; // [rsp+C0h] [rbp-E8h]
  __int128 v110; // [rsp+C8h] [rbp-E0h]
  void *src; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v112; // [rsp+E8h] [rbp-C0h] BYREF
  _DWORD v113[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v114; // [rsp+108h] [rbp-A0h]
  __int64 v115; // [rsp+118h] [rbp-90h]
  _BYTE v116[32]; // [rsp+120h] [rbp-88h] BYREF
  _DWORD v117[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v118; // [rsp+148h] [rbp-60h]
  __int64 v119; // [rsp+158h] [rbp-50h]
  unsigned __int64 v120; // [rsp+168h] [rbp-40h]

  v120 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1496LL) + 728LL) & 1) == 0 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 760LL);
  if ( v4 <= 0 )
    return 0;
  v98 = a1[24];
  if ( v98 )
    return 0;
  v6 = *(_QWORD *)(v3 + 1504);
  v104 = 0;
  v103 = 0;
  v100 = a3 + 32;
  if ( !(unsigned __int8)sub_1DB310((__int64)&v103, v6, &v102, a3 + 32) )
    return 0;
  v9 = *(__int64 **)(a3 + 56);
  v10 = v9[1];
  v11 = *v9;
  v94.m128i_i64[1] = (__int64)v9;
  v12 = v11 + 24 * v10;
  if ( v11 != v12 )
  {
    v13 = 0;
    do
    {
      v13 += *(_QWORD *)(v11 + 8);
      if ( v4 < v13 )
        return 0;
      v11 += 24;
    }
    while ( v12 != v11 );
  }
  v15 = v102;
  v113[0] = 0;
  v115 = 0;
  v113[1] = v102;
  v114 = 0;
  v97 = sub_1DB560((_DWORD)a1, (unsigned int)v113, (unsigned int)&v103, 0, v7, v8);
  if ( !v97 )
    goto LABEL_83;
  if ( v113[0] == 8 )
  {
    v97 = 0;
    goto LABEL_83;
  }
  v105 = 0;
  v106 = 0;
  v96 = *(_QWORD *)(v94.m128i_i64[1] + 32);
  if ( !v96 )
  {
    p_src = (void **)v116;
    sub_30DB40(v116, v113);
    goto LABEL_90;
  }
  v99 = -1;
  v16 = 0;
  v94.m128i_i64[0] = ~(-1LL << (8 * (unsigned __int8)v15));
  while ( 2 )
  {
    v17 = (_QWORD *)(*(_QWORD *)v94.m128i_i64[1] + 24 * v16);
    if ( !v17[1] )
    {
      v99 = v16++;
      goto LABEL_16;
    }
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v20 = v94.m128i_i64[0] & *(_QWORD *)(*v17 + 8 * v18);
        if ( v15 == 8 )
          v20 = *(_QWORD *)(*v17 + 8 * v18);
        if ( !(unsigned __int8)sub_310790(v113, v20) )
          break;
        ++v18;
LABEL_20:
        v19 = v17[1];
        if ( v18 >= v19 )
          goto LABEL_31;
      }
      src = nullptr;
      v112 = 0;
      p_src = &src;
      sub_674F0((__int64 *)&src);
      v21 = v106;
      v22 = v105;
      v23 = v106 + 1;
      if ( (unsigned __int64)&src < v105 || (unsigned __int64)p_src >= v105 + 24LL * *((_QWORD *)&v106 + 1) )
      {
        if ( *((_QWORD *)&v106 + 1) < v23 )
        {
          v105 = qvector_reserve();
          v22 = v105;
          v21 = v106;
        }
        v65 = _mm_loadu_si128(&v112);
        v66 = src;
        src = nullptr;
        v67 = v22 + 24 * v21;
        *(__m128i *)(v67 + 8) = v65;
        *(_QWORD *)v67 = v66;
        v112 = 0;
      }
      else
      {
        v24 = (void **)src;
        v25 = _mm_loadl_epi64(&v112);
        src = nullptr;
        v26 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
        v112 = 0;
        p_src = v24;
        if ( *((_QWORD *)&v106 + 1) < v23 )
        {
          v101.m128i_i64[1] = v26.m128i_i64[0];
          v101.m128i_i64[0] = v25.m128i_i64[0];
          v105 = qvector_reserve();
          v22 = v105;
          v26 = _mm_loadl_epi64((const __m128i *)&v101.m128i_u64[1]);
          v21 = v106;
          v25 = _mm_loadl_epi64(&v101);
        }
        v27 = v22 + 24 * v21;
        *(_QWORD *)v27 = p_src;
        *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
      }
      *(_QWORD *)&v106 = v106 + 1;
      memmove((void *)(8 * v18 + *v17), (const void *)(8 * v18 + *v17 + 8), 8LL * v17[1]-- - 8 - 8 * v18);
      if ( !src )
        goto LABEL_20;
      v112.m128i_i64[0] = 0;
      qfree();
      v19 = v17[1];
    }
    while ( v18 < v19 );
LABEL_31:
    if ( v19 )
    {
      ++v16;
    }
    else
    {
      sub_11DF80((__int64 *)v94.m128i_i64[1], a2, v16);
      --v96;
    }
LABEL_16:
    if ( v16 < v96 )
      continue;
    break;
  }
  p_src = (void **)v116;
  sub_30DB40(v116, v113);
  if ( v99 != -1 )
  {
    v28 = *(_QWORD *)(v94.m128i_i64[1] + 8);
    goto LABEL_35;
  }
LABEL_90:
  v28 = *(_QWORD *)(v94.m128i_i64[1] + 8);
  if ( v28 == 1 )
  {
    v99 = -1;
LABEL_35:
    v29 = *(_QWORD *)v94.m128i_i64[1];
    for ( v94.m128i_i64[0] = *(_QWORD *)v94.m128i_i64[1] + 24 * v28; v94.m128i_i64[0] != v29; v29 += 24 )
    {
      v30 = *(__int64 **)v29;
      v31 = *(_QWORD *)v29 + 8LL * *(_QWORD *)(v29 + 8);
      if ( v31 != *(_QWORD *)v29 )
      {
        do
        {
          v32 = *v30;
          v117[0] = 0;
          v117[1] = v15;
          v119 = 0;
          v118 = 0;
          sub_30E100(v117, 0, v32);
          sub_30F6B0(v113, v117);
          ++v30;
          sub_30DA80(v117);
        }
        while ( (__int64 *)v31 != v30 );
      }
    }
    if ( !v113[0] )
    {
      if ( v99 != -1 )
      {
        sub_11DF80((__int64 *)v94.m128i_i64[1], a2, v99);
        v112 = 0;
        v94.m128i_i64[0] = (__int64)&src;
        src = nullptr;
        v33 = (_DWORD *)qvector_reserve();
        src = v33;
        v112.m128i_i64[0] = 8;
        *v33 = 1634100580;
        *(_DWORD *)((char *)v33 + 3) = 1953264993;
        *((_BYTE *)src + 7) = 0;
        v34 = v106;
        v35 = v105;
        v36 = v106 + 1;
        if ( (unsigned __int64)&src < v105 || (unsigned __int64)&src >= v105 + 24LL * *((_QWORD *)&v106 + 1) )
        {
          if ( *((_QWORD *)&v106 + 1) < v36 )
          {
            v105 = qvector_reserve();
            v35 = v105;
            v34 = v106;
          }
          v76 = _mm_loadu_si128(&v112);
          v77 = v35 + 24 * v34;
          *(_QWORD *)v77 = src;
          *(__m128i *)(v77 + 8) = v76;
          *(_QWORD *)&v106 = v106 + 1;
        }
        else
        {
          v37 = src;
          v38 = _mm_loadl_epi64(&v112);
          src = nullptr;
          v39 = v112.m128i_i64[1];
          v112 = 0;
          if ( *((_QWORD *)&v106 + 1) < v36 )
          {
            v94.m128i_i64[0] = v38.m128i_i64[0];
            v105 = qvector_reserve();
            v35 = v105;
            v38 = _mm_loadl_epi64(&v94);
            v34 = v106;
          }
          v40 = v35 + 24 * v34;
          *(_QWORD *)v40 = v37;
          *(__m128i *)(v40 + 8) = _mm_unpacklo_epi64(v38, (__m128i)(unsigned __int64)v39);
          *(_QWORD *)&v106 = v106 + 1;
          if ( src )
          {
            v112.m128i_i64[0] = 0;
            qfree();
          }
        }
      }
      v41 = *(_QWORD *)(v94.m128i_i64[1] + 8);
      if ( v41 == 1 )
      {
        v84 = *(_QWORD **)v94.m128i_i64[1];
        if ( **(_QWORD **)v94.m128i_i64[1] )
        {
          v84[1] = 0;
          qfree();
          *v84 = 0;
          v84[2] = 0;
        }
        v85 = v106;
        v86 = (__int64 *)v105;
        if ( (_QWORD)v106 != 1 )
        {
          v87 = v105;
          src = nullptr;
          v112 = 0;
          if ( (unsigned __int64)v106 > 1 )
          {
            do
            {
              v89 = &v86[3 * v41];
              if ( *v89 )
              {
                v89[1] = 0;
                qfree();
                v86 = (__int64 *)v105;
              }
              ++v41;
            }
            while ( v85 != v41 );
          }
          else if ( *((_QWORD *)&v106 + 1) || (v87 = qvector_reserve(), v105 = v87, v86 = (__int64 *)v87, !(_QWORD)v106) )
          {
            *(_QWORD *)v87 = 0;
            *(_OWORD *)(v87 + 8) = 0;
            v86 = (__int64 *)v105;
          }
          *(_QWORD *)&v106 = 1;
        }
        v88 = *v86;
        if ( (unsigned __int64)v86[2] <= 3 )
        {
          v90 = qvector_reserve();
          *v86 = v90;
          v88 = v90;
        }
        v86[1] = 4;
        *(_WORD *)v88 = 27745;
        *(_BYTE *)(v88 + 2) = 108;
        *(_BYTE *)(*v86 + 3) = 0;
      }
    }
  }
  if ( !(_QWORD)v106 )
    goto LABEL_75;
  sub_3115B0(&v107, p_src, v100);
  v42 = *(_QWORD *)(v94.m128i_i64[1] + 32);
  if ( !v42 )
  {
    sub_155680(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
    sub_1190E0(a3);
    v73 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 76) = 2;
    BYTE1(v73) &= ~2u;
    LOBYTE(v73) = v73 | 0x80;
    *(_DWORD *)(a2 + 24) = v73;
    v109 = nullptr;
    v110 = 0;
    goto LABEL_100;
  }
  if ( v42 != 1 || *(_QWORD *)(*(_QWORD *)v94.m128i_i64[1] + 8LL) )
  {
    v109 = nullptr;
    v110 = 0;
    if ( (_QWORD)v106 != 1 )
    {
      v43 = (char *)qvector_reserve();
      *(_QWORD *)&v110 = 11;
      v109 = v43;
      strcpy(v43, "the cases ");
      sub_1DA960((__int64 *)&src, (__int64 *)&v105, ", ");
      if ( v112.m128i_i64[0] )
      {
        v45 = v112.m128i_i64[0] - 1;
        v46 = v112.m128i_i64[0] - 1;
        if ( v112.m128i_i64[0] != 1 )
        {
          v47 = ((_QWORD)v110 == 0) + (_QWORD)v110 - 1LL;
          v48 = v45 + v47;
          v49 = v45 + ((_QWORD)v110 == 0) + (_QWORD)v110;
          if ( *((_QWORD *)&v110 + 1) < v49 )
            v109 = (char *)qvector_reserve();
          *(_QWORD *)&v110 = v49;
          v109[v48] = 0;
          memcpy(&v109[v47], src, v46);
        }
      }
      if ( src )
      {
        v112.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_59;
    }
    if ( *(_QWORD *)(v105 + 8) )
    {
      v81 = *(const char **)v105;
      if ( !strcmp(*(const char **)v105, "all") )
      {
        v109 = (char *)qvector_reserve();
        *(_QWORD *)&v110 = 14;
        strcpy(v109, "the all cases");
LABEL_59:
        v50 = 5;
        v51 = " were";
        goto LABEL_60;
      }
      if ( !strcmp(v81, "default") )
      {
        v82 = (char *)qvector_reserve();
        si128 = _mm_load_si128((const __m128i *)&xmmword_3FE300);
        v109 = v82;
        *(_QWORD *)&v110 = 17;
        v82[16] = 0;
        *(__m128i *)v82 = si128;
        goto LABEL_98;
      }
    }
    v109 = (char *)qvector_reserve();
    *(_QWORD *)&v110 = 10;
    strcpy(v109, "the case ");
    v68 = (const void **)v105;
    v69 = *(_QWORD *)(v105 + 8);
    if ( v69 )
    {
      v70 = v69 - 1;
      if ( v70 )
      {
        v71 = ((_QWORD)v110 == 0) + (_QWORD)v110 - 1LL;
        v72 = v70 + ((_QWORD)v110 == 0) + (_QWORD)v110;
        if ( *((_QWORD *)&v110 + 1) < v72 )
        {
          v92 = v70 + ((_QWORD)v110 == 0) + (_QWORD)v110;
          v109 = (char *)qvector_reserve();
          v72 = v92;
        }
        *(_QWORD *)&v110 = v72;
        v109[v70 + v71] = 0;
        memcpy(&v109[v71], *v68, v70);
      }
    }
    goto LABEL_98;
  }
  sub_155680(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
  v78 = v94.m128i_i64[1];
  *(_DWORD *)a3 = 55;
  v79 = **(_DWORD **)(v78 + 24);
  sub_1188E0(v100);
  *(_BYTE *)(a3 + 32) = 7;
  *(_DWORD *)(a3 + 40) = v79;
  sub_1188E0(a3 + 48);
  v80 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 76) = 3;
  BYTE1(v80) &= ~2u;
  LOBYTE(v80) = v80 | 0x80;
  *(_DWORD *)(a2 + 24) = v80;
  v109 = nullptr;
  v110 = 0;
LABEL_100:
  v74 = (char *)qvector_reserve();
  v75 = _mm_load_si128((const __m128i *)&xmmword_3FE2F0);
  v109 = v74;
  *(_QWORD *)&v110 = 18;
  v74[17] = 0;
  v74[16] = 104;
  *(__m128i *)v74 = v75;
LABEL_98:
  v50 = 4;
  v51 = " was";
LABEL_60:
  v52 = v110;
  v53 = v50;
  if ( (_QWORD)v110 )
  {
    v52 = v110 - 1;
    v53 = v50 + v110 - 1;
  }
  v54 = v109;
  v55 = v53 + 1;
  if ( *((_QWORD *)&v110 + 1) < (unsigned __int64)(v53 + 1) )
  {
    v109 = (char *)qvector_reserve();
    v55 = v53 + 1;
    v54 = v109;
  }
  *(_QWORD *)&v110 = v55;
  v54[v53] = 0;
  v56 = &v109[v52];
  *(_DWORD *)v56 = *(_DWORD *)v51;
  *(_DWORD *)&v56[(unsigned int)v50 - 4] = *(_DWORD *)&v51[(unsigned int)v50 - 4];
  v57 = *(_QWORD *)a1;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 784LL);
  if ( v58 )
  {
    *(_DWORD *)(v58 + 48) = 63;
    v57 = *(_QWORD *)a1;
  }
  v59 = s1;
  if ( v108 )
    LODWORD(v59) = v107;
  v60 = s1;
  if ( (_QWORD)v110 )
    LODWORD(v60) = (_DWORD)v109;
  sub_32BE10(v57, *(_QWORD *)(a3 + 24), 56, (_DWORD)v60, (_DWORD)v59, v44);
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  if ( v107 )
  {
    v108 = 0;
    qfree();
  }
  v98 = v97;
LABEL_75:
  sub_30DA80(p_src);
  v61 = v105;
  if ( v105 )
  {
    v62 = v106;
    if ( (_QWORD)v106 )
    {
      v63 = 0;
      do
      {
        v64 = (_QWORD *)(v61 + 24 * v63);
        if ( *v64 )
        {
          v64[1] = 0;
          qfree();
          v61 = v105;
        }
        ++v63;
      }
      while ( v62 != v63 );
    }
    *(_QWORD *)&v106 = 0;
    qfree();
  }
  v97 = v98;
LABEL_83:
  sub_30DA80(v113);
  return v97;
}

