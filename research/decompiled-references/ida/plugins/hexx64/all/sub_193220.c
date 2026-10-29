__m128i *__fastcall sub_193220(_QWORD *a1, unsigned int a2, _BYTE *a3, __m128 a4)
{
  _QWORD *exception; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __m128i *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __m128 *v22; // rax
  _QWORD *v23; // r15
  __m128 *v24; // rcx
  unsigned __int64 v25; // rdx
  bool v26; // r10
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm0
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  const __m128i *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm0
  bool v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  unsigned __int64 v52; // [rsp+20h] [rbp-58h]
  bool v53; // [rsp+2Fh] [rbp-49h]
  __m128i v54; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned __int64)(int)a2 >= a1[18] )
  {
    if ( !under_debugger )
      sub_383060(0xC959u, *(double *)a4.m128_u64);
LABEL_66:
    BUG();
  }
  v8 = (__m128i *)(a1[17] + 16LL * (int)a2);
  if ( !a3[8] && v8->m128i_i64[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC95Au, *(double *)a4.m128_u64);
    goto LABEL_66;
  }
  v9 = a1[8];
  a1[7] = 0;
  if ( v9 )
  {
    a1[9] = 0;
    qfree(v9);
    a1[8] = 0;
    a1[10] = 0;
  }
  v10 = a1[1];
  if ( a2 >= *(_DWORD *)(v10 + 64) )
    sub_190DD0(*(double *)a4.m128_u64);
  v54.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * a2);
  v52 = *(_QWORD *)(v54.m128i_i64[0] + 48);
  if ( !v52 )
    return v8;
  while ( 2 )
  {
    v53 = sub_1925B0((__int64)a1, (_BYTE *)v52, a3, *(double *)a4.m128_u64);
    if ( !v53 || !a1[12] )
      goto LABEL_9;
    v11 = 0;
    v12 = 0;
    do
    {
      v14 = sub_1922B0((__int64)a1, *(_QWORD *)(a1[11] + 8 * v12), a3, *(double *)a4.m128_u64);
      v15 = v13;
      if ( !(_BYTE)v13 )
      {
        if ( !under_debugger )
          sub_383060(0xC9D5u, *(double *)a4.m128_u64);
        goto LABEL_66;
      }
      v16 = *(_QWORD *)(a1[11] + 8 * v12);
      if ( !v16 )
      {
        if ( !under_debugger )
          sub_383060(0xC9D4u, *(double *)a4.m128_u64);
        goto LABEL_66;
      }
      v17 = v8->m128i_i64[0];
      if ( !v8->m128i_i64[0] )
      {
        v50 = v13;
        v42 = qalloc();
        v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
        if ( !v42 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v15 = v50;
        *(_OWORD *)(v42 + 16) = 0;
        *(__m128i *)(v42 + 8) = v43;
        *(_OWORD *)(v42 + 32) = 0;
        *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v42 + 48) = 0;
        v8->m128i_i64[0] = v42;
        *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v42 & 3LL;
        *(__m128i *)(v8->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v8->m128i_u64[0], (__m128i)v8->m128i_u64[0]);
        *(_QWORD *)v8->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v8->m128i_i64[0] |= 2uLL;
        v17 = v8->m128i_i64[0];
LABEL_17:
        v48 = v15;
        v18 = qalloc();
        v19 = v18;
        if ( !v18 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v18 + 16) = 0;
        *(_QWORD *)(v18 + 32) = v48;
        *(_QWORD *)(v18 + 24) = v14;
        *(_QWORD *)(v18 + 40) = 0;
        *(_OWORD *)v18 = 0;
        *(_OWORD *)(v18 + 48) = 0;
        *(_QWORD *)v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
        v20 = _mm_loadl_epi64(v8);
        *(_QWORD *)v18 = v17 & 0xFFFFFFFFFFFFFFFCLL | 1;
        a4 = (__m128)_mm_unpacklo_epi64(v20, v20);
        *(__m128 *)(v18 + 8) = a4;
        if ( v8->m128i_i64[0] != v17 )
        {
LABEL_19:
          *(_QWORD *)(v17 + 8) = v19;
          if ( *(_QWORD *)(v8->m128i_i64[0] + 8) == v17 )
            *(_QWORD *)(v8->m128i_i64[0] + 8) = v19;
          goto LABEL_21;
        }
LABEL_50:
        *(_QWORD *)v17 = v19 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
        *(_QWORD *)(v8->m128i_i64[0] + 8) = v19;
        *(_QWORD *)(v8->m128i_i64[0] + 16) = v19;
        v41 = *(_QWORD *)v19 & 2LL;
        *(_QWORD *)v19 &= ~1uLL;
        *(_QWORD *)v19 = v41 | v8->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_22;
      }
      if ( !v8->m128i_i64[1] )
        goto LABEL_17;
      v26 = v53;
      v27 = (_BYTE *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v27 & 2) != 0 )
        goto LABEL_33;
      while ( 1 )
      {
        v17 = (unsigned __int64)v27;
        v31 = v27[32];
        if ( (unsigned __int8)v13 >= v31 )
        {
          if ( v31 < (unsigned __int8)v13 )
            goto LABEL_53;
          if ( v14 >= *(_QWORD *)(v17 + 24) )
            break;
        }
        v27 = *(_BYTE **)(v17 + 8);
        v26 = v53;
LABEL_39:
        if ( (*v27 & 2) != 0 )
          goto LABEL_33;
      }
      if ( v14 > *(_QWORD *)(v17 + 24) )
      {
LABEL_53:
        v27 = *(_BYTE **)(v17 + 16);
        v26 = 0;
        goto LABEL_39;
      }
      if ( v17 )
      {
        v19 = v17;
        goto LABEL_23;
      }
LABEL_33:
      v54.m128i_i64[1] = v13;
      v45 = v26;
      v28 = qalloc();
      v19 = v28;
      if ( !v28 )
      {
        v6 = __cxa_allocate_exception(8u);
        *v6 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v29 = v54.m128i_i64[1];
      *(_OWORD *)(v28 + 16) = 0;
      *(_QWORD *)(v28 + 24) = v14;
      *(_QWORD *)(v28 + 32) = v29;
      *(_QWORD *)(v28 + 40) = 0;
      *(_OWORD *)v28 = 0;
      *(_OWORD *)(v28 + 48) = 0;
      *(_QWORD *)v28 = v17 & 0xFFFFFFFFFFFFFFFCLL;
      v30 = _mm_loadl_epi64(v8);
      *(_QWORD *)v28 = v17 & 0xFFFFFFFFFFFFFFFCLL | 1;
      a4 = (__m128)_mm_unpacklo_epi64(v30, v30);
      *(__m128 *)(v28 + 8) = a4;
      if ( v8->m128i_i64[0] == v17 )
        goto LABEL_50;
      if ( v45 )
        goto LABEL_19;
      *(_QWORD *)(v17 + 16) = v28;
      if ( *(_QWORD *)(v8->m128i_i64[0] + 16) == v17 )
        *(_QWORD *)(v8->m128i_i64[0] + 16) = v28;
LABEL_21:
      sub_192E40(v8, (__int64 *)v19);
LABEL_22:
      ++v8->m128i_i64[1];
LABEL_23:
      v21 = *(_QWORD *)(v19 + 48);
      v22 = *(__m128 **)(v19 + 40);
      v23 = (_QWORD *)(v19 + 24);
      v24 = (__m128 *)((char *)v22 + 24 * v21);
      if ( v22 == v24 )
        goto LABEL_30;
      while ( v16 != v22->m128_u64[1] )
      {
        v22 = (__m128 *)((char *)v22 + 24);
        if ( v24 == v22 )
          goto LABEL_30;
      }
      if ( v22 == v24 )
      {
LABEL_30:
        v25 = v21 + 1;
        if ( v23[4] < v25 )
        {
          v46 = v23[4];
          v32 = qvector_reserve((__int64)(v23 + 2), 0, v25, 24);
          v33 = v23[3];
          v34 = v23[4];
          v35 = (const __m128i *)v23[2];
          v36 = v32;
          v23[4] = v46;
          v37 = v33 - 1;
          if ( v37 >= 0 )
          {
            do
            {
              v38 = _mm_loadu_si128(v35);
              v32 += 24;
              v35 = (const __m128i *)((char *)v35 + 24);
              *(__m128i *)(v32 - 24) = v38;
              *(_QWORD *)(v32 - 8) = v35[-1].m128i_i64[1];
            }
            while ( v37-- != 0 );
            v35 = (const __m128i *)v23[2];
          }
          v49 = v34;
          v47 = v36;
          qfree((__int64)v35);
          v40 = 3LL * v23[3];
          v23[2] = v47;
          v23[4] = v49;
          v24 = (__m128 *)(v47 + 8 * v40);
        }
        a4 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v54), (__m128i)v16);
        v24[1].m128_u64[0] = v52;
        *v24 = a4;
        ++v23[3];
      }
      v12 = ++v11;
    }
    while ( (unsigned __int64)v11 < a1[12] );
LABEL_9:
    v52 = *(_QWORD *)(v52 + 8);
    if ( v52 )
      continue;
    return v8;
  }
}

