__int64 __fastcall sub_8DF50(const __m128i *a1, __int64 a2, __m128 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r13
  int v21; // r13d
  __int64 v22; // rax
  __int64 *v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rax
  int v26; // r12d
  int v27; // r15d
  __int32 v28; // eax
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  char v31; // si
  _BYTE *v32; // rcx
  char v33; // dl
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rsi
  __int64 **v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  size_t v46; // r13
  unsigned __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // r13
  void *v50; // rax
  size_t v51; // rdx
  unsigned __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // r13
  __int64 v59; // rdi
  __m128i *v60; // rax
  __int64 v61; // r15
  __int64 v62; // r14
  __int64 v63; // r14
  int v64; // eax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rdi
  __int64 **v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 v73; // r13
  unsigned __int8 *v74; // r12
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // r14
  __int64 v81; // rdx
  size_t v82; // r15
  void *v83; // rax
  unsigned __int64 v84; // r14
  __int64 v85; // rax
  unsigned __int64 v86; // r14
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  __m128i v89; // [rsp+0h] [rbp-128h] BYREF
  size_t n; // [rsp+18h] [rbp-110h]
  __m128i *v91; // [rsp+20h] [rbp-108h]
  __m256i *p_src; // [rsp+28h] [rbp-100h]
  __int64 *v93; // [rsp+30h] [rbp-F8h] BYREF
  void *v94[2]; // [rsp+38h] [rbp-F0h] BYREF
  size_t v95[2]; // [rsp+48h] [rbp-E0h]
  _QWORD v96[2]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v97[2]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v98[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v99; // [rsp+90h] [rbp-98h] BYREF
  __m256i src; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v101[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v102[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v103[10]; // [rsp+D8h] [rbp-50h] BYREF

  v103[2] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 40) = 1;
  if ( !(unsigned __int8)sub_8C080((__int64)a1, a2, 0, a3) )
    return 0;
  a1[94].m128i_i32[2] = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
  LOBYTE(n) = sub_871F0((__int64)a1[95].m128i_i64, a2, a3);
  if ( !(_BYTE)n )
    return 0;
  v9 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
  if ( v9 < 0 )
    return 0;
  v89.m128i_i64[0] = v9;
  v10 = v9;
  v11 = a1[115].m128i_i64[0];
  if ( v10 == v11 )
    goto LABEL_18;
  v93 = nullptr;
  v96[0] = 0xFFFFFFFF00000000LL;
  v96[1] = 0;
  v97[0] = 0xFFFFFFFF00000000LL;
  v97[1] = 0;
  v98[0] = 0xFFFFFFFF00000000LL;
  v98[1] = 0;
  sub_330970((__int64)v94, -1);
  v12 = a1[115].m128i_u64[0];
  if ( v89.m128i_i64[0] < v12 )
  {
    v60 = (__m128i *)v89.m128i_i64[0];
    v61 = 88 * v89.m128i_i64[0];
    do
    {
      v62 = a1[114].m128i_i64[1];
      v91 = v60;
      v63 = v61 + v62;
      v61 += 88;
      sub_11CDA0(v63 + 72);
      sub_11CDA0(v63 + 56);
      sub_11CDA0(v63 + 40);
      v60 = (__m128i *)&v91->m128i_i8[1];
    }
    while ( (unsigned __int64)v91->m128i_u64 + 1 < v12 );
LABEL_83:
    a1[115].m128i_i64[0] = v89.m128i_i64[0];
    goto LABEL_17;
  }
  if ( v12 < v89.m128i_i64[0] )
  {
    v13 = a1[114].m128i_u64[1];
    v14 = a1[115].m128i_u64[1];
    if ( (unsigned __int64)&v93 >= v13 && (unsigned __int64)&v93 < v13 + 88 * v14 )
    {
      a3 = 0;
      v101[1] = 0;
      v102[1] = 0;
      LODWORD(v99) = (_DWORD)v93;
      v101[0] = 0xFFFFFFFF00000000LL;
      v102[0] = 0xFFFFFFFF00000000LL;
      v103[0] = 0xFFFFFFFF00000000LL;
      p_src = &src;
      v103[1] = 0;
      *(_OWORD *)&src.m256i_u64[1] = 0;
      sub_1253A0((__int64)&src, (__int64)v94);
      if ( a1[115].m128i_i64[1] < (unsigned __int64)v89.m128i_i64[0] )
        a1[114].m128i_i64[1] = qvector_reserve(
                                 (__int64)&a1[114].m128i_i64[1],
                                 a1[114].m128i_i64[1],
                                 v89.m128i_i64[0],
                                 88);
      v15 = a1[115].m128i_u64[0];
      if ( v15 < v89.m128i_i64[0] )
      {
        v16 = 88 * v15;
        do
        {
          v17 = a1[114].m128i_i64[1];
          a3 = 0;
          v91 = (__m128i *)v15;
          v18 = (__int64)p_src;
          v19 = v16 + v17;
          *(_DWORD *)v19 = v99;
          *(_QWORD *)(v19 + 40) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v19 + 48) = 0;
          *(_QWORD *)(v19 + 56) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v19 + 64) = 0;
          *(_QWORD *)(v19 + 72) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v19 + 80) = 0;
          *(_OWORD *)(v19 + 16) = 0;
          sub_1253A0(v19 + 8, v18);
          v16 += 88;
          v15 = (unsigned __int64)v91->m128i_u64 + 1;
        }
        while ( (__int8 *)v89.m128i_i64[0] != &v91->m128i_i8[1] );
      }
      a1[115].m128i_i64[0] = v89.m128i_i64[0];
      sub_11CDA0((__int64)v103);
      sub_11CDA0((__int64)v102);
      sub_11CDA0((__int64)v101);
      goto LABEL_17;
    }
    if ( v14 >= v89.m128i_i64[0]
      || (v84 = v89.m128i_i64[0],
          v85 = qvector_reserve((__int64)&a1[114].m128i_i64[1], v13, v89.m128i_i64[0], 88),
          v12 = a1[115].m128i_u64[0],
          a1[114].m128i_i64[1] = v85,
          v13 = v85,
          v12 < v84) )
    {
      v75 = 88 * v12;
      while ( 1 )
      {
        v76 = (int)v93;
        v77 = v13 + v75;
        a3 = 0;
        *(_QWORD *)(v77 + 40) = 0xFFFFFFFF00000000LL;
        *(_DWORD *)v77 = v76;
        *(_QWORD *)(v77 + 48) = 0;
        *(_QWORD *)(v77 + 56) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v77 + 64) = 0;
        *(_QWORD *)(v77 + 72) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v77 + 80) = 0;
        *(_OWORD *)(v77 + 16) = 0;
        v91 = (__m128i *)v75;
        sub_1253A0(v13 + v75 + 8, (__int64)v94);
        ++v12;
        v75 = (__int64)&v91[5].m128i_i64[1];
        if ( v12 >= v89.m128i_i64[0] )
          break;
        v13 = a1[114].m128i_u64[1];
      }
    }
    goto LABEL_83;
  }
LABEL_17:
  sub_11CDA0((__int64)v98);
  sub_11CDA0((__int64)v97);
  sub_11CDA0((__int64)v96);
  v11 = a1[115].m128i_i64[0];
LABEL_18:
  v20 = a1[114].m128i_i64[1];
  if ( 88 * v11 )
  {
    while ( (unsigned __int8)sub_883D0(v20 + 8, a2, (__m128i)a3) )
    {
      v20 += 88;
      *(_DWORD *)(v20 - 88) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
      if ( v20 == a1[114].m128i_i64[1] + 88 * a1[115].m128i_i64[0] )
        goto LABEL_23;
    }
    return 0;
  }
LABEL_23:
  v21 = 0;
  v89.m128i_i32[0] = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
  v91 = (__m128i *)&a1[116];
  if ( v89.m128i_i32[0] > 0 )
  {
LABEL_32:
    v26 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    v27 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    v28 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    HIDWORD(v99) = v27;
    v29 = a1[116].m128i_u64[0];
    LODWORD(v99) = v26;
    src.m256i_i32[0] = v28;
    v93 = &v99;
    if ( !v29 )
    {
      v34 = qalloc();
      v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
      if ( !v34 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v34 + 32) = 0;
      *(_OWORD *)(v34 + 16) = 0;
      *(__m128i *)(v34 + 8) = v35;
      *(_QWORD *)v34 = v34 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[116].m128i_i64[0] = v34;
      *(_QWORD *)v34 = v34 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v34 & 3LL;
      *(__m128i *)(a1[116].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                 (__m128i)a1[116].m128i_u64[0],
                                                 (__m128i)a1[116].m128i_u64[0]);
      *(_QWORD *)a1[116].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[116].m128i_i64[0] |= 2uLL;
      v29 = a1[116].m128i_u64[0];
LABEL_25:
      v22 = qalloc();
      v23 = (__int64 *)v22;
      if ( !v22 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v22 + 32) = 0;
      *(_OWORD *)v22 = 0;
      *(_OWORD *)(v22 + 16) = 0;
      *(_QWORD *)(v22 + 24) = v99;
      *(_DWORD *)(v22 + 32) = src.m256i_i32[0];
      *(_QWORD *)v22 = v29 & 0xFFFFFFFFFFFFFFFCLL;
      v24 = _mm_loadl_epi64(a1 + 116);
      *(_QWORD *)v22 = v29 & 0xFFFFFFFFFFFFFFFCLL | 1;
      a3 = (__m128)_mm_unpacklo_epi64(v24, v24);
      *(__m128 *)(v22 + 8) = a3;
      if ( a1[116].m128i_i64[0] == v29 )
      {
        *(_QWORD *)v29 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
        *(_QWORD *)(a1[116].m128i_i64[0] + 8) = v22;
        *(_QWORD *)(a1[116].m128i_i64[0] + 16) = v22;
        v36 = *(_QWORD *)v22 & 2LL;
        *(_QWORD *)v22 &= ~1uLL;
        *(_QWORD *)v22 = v36 | a1[116].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v29 + 8) = v22;
        v25 = a1[116].m128i_i64[0];
        if ( *(_QWORD *)(v25 + 8) == v29 )
          *(_QWORD *)(v25 + 8) = v23;
        sub_89B70(v91, v23);
      }
      ++a1[116].m128i_i64[1];
      goto LABEL_31;
    }
    if ( !a1[116].m128i_i64[1] )
      goto LABEL_25;
    v30 = *(_QWORD *)v29 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v30 & 2) != 0 )
    {
      v33 = 1;
LABEL_41:
      sub_89E40(v91, (unsigned __int64 *)v29, v33, &v93);
      goto LABEL_31;
    }
    v31 = n;
    while ( 1 )
    {
      if ( v26 >= *(_DWORD *)(v30 + 24) )
      {
        if ( v26 <= *(_DWORD *)(v30 + 24) )
        {
          if ( !v30 )
          {
LABEL_39:
            v33 = v31;
            v29 = v30;
            goto LABEL_41;
          }
LABEL_31:
          if ( v89.m128i_i32[0] == ++v21 )
            break;
          goto LABEL_32;
        }
        v32 = *(_BYTE **)(v30 + 16);
        v31 = 0;
      }
      else
      {
        v32 = *(_BYTE **)(v30 + 8);
        v31 = n;
      }
      if ( (*v32 & 2) != 0 )
        goto LABEL_39;
      v30 = (unsigned __int64)v32;
    }
  }
  v37 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
  if ( v37 < 0 )
    return 0;
  v38 = a1[117].m128i_u64[1];
  v39 = v37;
  if ( v37 != v38 )
  {
    a3 = 0;
    v40 = a1[117].m128i_u64[0];
    v93 = (__int64 *)0xFFFFFFFF00000000LL;
    *(_OWORD *)v94 = 0;
    *(_OWORD *)v95 = 0;
    if ( v37 < v38 )
    {
      v52 = v37;
      while ( 1 )
      {
        v53 = v40 + 40 * v52;
        v54 = *(_QWORD *)(v53 + 16);
        if ( v54 )
        {
          *(_QWORD *)(v53 + 24) = 0;
          qfree(v54);
        }
        v55 = v40 + 40 * v52++;
        sub_11CDA0(v55);
        if ( v52 >= v38 )
          break;
        v40 = a1[117].m128i_u64[0];
      }
      a1[117].m128i_i64[1] = v39;
      v89.m128i_i64[0] = (__int64)&v93;
    }
    else
    {
      v41 = &v93;
      v42 = a1[118].m128i_u64[0];
      v89.m128i_i64[0] = (__int64)&v93;
      if ( (unsigned __int64)&v93 < v40 || (v43 = v40 + 40 * v42, (unsigned __int64)&v93 >= v43) )
      {
        if ( v42 < v39 )
        {
          a1[117].m128i_i64[0] = qvector_reserve((__int64)a1[117].m128i_i64, v40, v39, 40);
          v38 = a1[117].m128i_u64[1];
        }
        for ( ; v38 < v39; ++v38 )
        {
          v78 = a1[117].m128i_i64[0];
          v79 = v89.m128i_i64[0];
          v80 = v78 + 40 * v38;
          sub_123A40(v80, (unsigned __int8 *)v89.m128i_i64[0], v78, (__int64)v41);
          *(_QWORD *)(v80 + 16) = 0;
          *(_OWORD *)(v80 + 24) = 0;
          v82 = v95[0];
          if ( v95[0] )
          {
            v83 = (void *)qalloc_or_throw(v95[0], v79, v81, (__int64)v41);
            *(_QWORD *)(v80 + 16) = v83;
            *(_QWORD *)(v80 + 32) = v82;
            memcpy(v83, v94[1], v82);
            *(_QWORD *)(v80 + 24) = v82;
          }
        }
        a1[117].m128i_i64[1] = v39;
      }
      else
      {
        sub_123A40((__int64)&v99, (unsigned __int8 *)&v93, v43, (__int64)&v93);
        v46 = v95[0];
        a3 = 0;
        memset(&src.m256i_u64[1], 0, 24);
        if ( v95[0] )
        {
          src.m256i_i64[1] = qalloc_or_throw(v95[0], (__int64)&v93, v44, v45);
          src.m256i_i64[3] = v46;
          memcpy((void *)src.m256i_i64[1], v94[1], v46);
          src.m256i_i64[2] = v46;
        }
        if ( a1[118].m128i_i64[0] < v39 )
          a1[117].m128i_i64[0] = qvector_reserve((__int64)a1[117].m128i_i64, a1[117].m128i_i64[0], v39, 40);
        v47 = a1[117].m128i_u64[1];
        if ( v47 < v39 )
        {
          do
          {
            v48 = a1[117].m128i_i64[0];
            v49 = v48 + 40 * v47;
            sub_123A40(v49, (unsigned __int8 *)&v99, v48, v45);
            *(_QWORD *)(v49 + 16) = 0;
            *(_OWORD *)(v49 + 24) = 0;
            if ( src.m256i_i64[2] )
            {
              n = src.m256i_u64[2];
              v50 = (void *)qalloc_or_throw(src.m256i_i64[2], (__int64)&v99, src.m256i_i64[2], v45);
              v51 = n;
              *(_QWORD *)(v49 + 16) = v50;
              *(_QWORD *)(v49 + 32) = v51;
              memcpy(v50, (const void *)src.m256i_i64[1], v51);
              *(_QWORD *)(v49 + 24) = n;
            }
            ++v47;
          }
          while ( v39 != v47 );
        }
        v88 = src.m256i_i64[1];
        a1[117].m128i_i64[1] = v39;
        if ( v88 )
        {
          src.m256i_i64[2] = 0;
          qfree(v88);
        }
        sub_11CDA0((__int64)&v99);
      }
    }
    if ( v94[1] )
    {
      v95[0] = 0;
      qfree((__int64)v94[1]);
    }
    sub_11CDA0(v89.m128i_i64[0]);
    v38 = a1[117].m128i_u64[1];
  }
  v56 = a1[117].m128i_i64[0];
  if ( 40 * v38 )
  {
    do
    {
      sub_7D150((__int64)&v99, (_QWORD *)a2, *(double *)a3.m128_u64);
      v58 = v99;
      a3 = (__m128)_mm_loadu_si128((const __m128i *)&src);
      v99 = 0;
      *(_OWORD *)src.m256i_i8 = 0;
      v59 = *(_QWORD *)(v56 + 16);
      if ( v59 )
      {
        *(_QWORD *)(v56 + 24) = 0;
        v89 = (__m128i)a3;
        qfree(v59);
        v57 = v99;
        a3 = (__m128)_mm_load_si128(&v89);
        *(_QWORD *)(v56 + 16) = v58;
        *(__m128 *)(v56 + 24) = a3;
        if ( v57 )
        {
          src.m256i_i64[0] = 0;
          qfree(v57);
        }
      }
      else
      {
        *(_QWORD *)(v56 + 16) = v58;
        *(__m128 *)(v56 + 24) = a3;
      }
      if ( !(unsigned __int8)sub_87990((unsigned __int8 *)v56, a2, (__m128i)a3) )
        return 0;
      v56 += 40;
    }
    while ( v56 != a1[117].m128i_i64[0] + 40 * a1[117].m128i_i64[1] );
  }
  v64 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
  if ( v64 < 0 )
    return 0;
  v66 = a1[119].m128i_u64[0];
  v67 = v64;
  if ( v64 != v66 )
  {
    v94[0] = nullptr;
    v68 = a1[118].m128i_u64[1];
    v93 = (__int64 *)0xFFFFFFFF00000000LL;
    if ( v64 < v66 )
    {
      v86 = v64;
      while ( 1 )
      {
        v87 = v86++;
        sub_11CDA0(16 * v87 + v68);
        if ( v86 >= v66 )
          break;
        v68 = a1[118].m128i_u64[1];
      }
      a1[119].m128i_i64[0] = v67;
      v89.m128i_i64[0] = (__int64)&v93;
    }
    else
    {
      v69 = &v93;
      v70 = a1[119].m128i_u64[1];
      v89.m128i_i64[0] = (__int64)&v93;
      if ( (unsigned __int64)&v93 < v68 || (v65 = v68 + 16 * v70, (unsigned __int64)&v93 >= v65) )
      {
        if ( v70 < v67 )
        {
          a1[118].m128i_i64[1] = qvector_reserve((__int64)&a1[118].m128i_i64[1], v68, v67, 16);
          v66 = a1[119].m128i_u64[0];
        }
        while ( v66 < v67 )
          sub_123A40(a1[118].m128i_i64[1] + 16 * v66++, (unsigned __int8 *)v89.m128i_i64[0], v65, (__int64)v69);
        a1[119].m128i_i64[0] = v67;
      }
      else
      {
        sub_123A40((__int64)&v99, (unsigned __int8 *)&v93, v65, (__int64)&v93);
        if ( a1[119].m128i_i64[1] < v67 )
          a1[118].m128i_i64[1] = qvector_reserve((__int64)&a1[118].m128i_i64[1], a1[118].m128i_i64[1], v67, 16);
        v73 = a1[119].m128i_u64[0];
        if ( v73 < v67 )
        {
          do
            sub_123A40(a1[118].m128i_i64[1] + 16 * v73++, (unsigned __int8 *)&v99, v71, v72);
          while ( v67 != v73 );
        }
        a1[119].m128i_i64[0] = v67;
        sub_11CDA0((__int64)&v99);
      }
    }
    sub_11CDA0(v89.m128i_i64[0]);
    v66 = a1[119].m128i_u64[0];
  }
  v74 = (unsigned __int8 *)a1[118].m128i_i64[1];
  if ( 16 * v66 )
  {
    while ( (unsigned __int8)sub_87990(v74, a2, (__m128i)a3) )
    {
      v74 += 16;
      if ( v74 == (unsigned __int8 *)(a1[118].m128i_i64[1] + 16 * a1[119].m128i_i64[0]) )
        goto LABEL_105;
    }
    return 0;
  }
LABEL_105:
  v7 = sub_7D530((_QWORD *)a2, &a1[120].m128i_i64[1], *(double *)a3.m128_u64);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (unsigned __int8)sub_7CD00((unsigned __int8 **)a2, *(double *)a3.m128_u64) != 0xFF )
  {
    if ( !under_debugger )
      sub_383060(0xC59Fu, *(double *)a3.m128_u64);
    BUG();
  }
  return v7;
}

