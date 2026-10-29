__m128i *__fastcall sub_18E660(_QWORD *a1, unsigned int a2, _BYTE *a3)
{
  _QWORD *exception; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __m128i *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r15
  __m128i *v23; // rcx
  __m128i v24; // xmm0
  bool v25; // r10
  _BYTE *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm0
  unsigned __int8 v30; // al
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  const __m128i *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __m128i v42; // xmm0
  bool v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  __int64 v51; // [rsp+20h] [rbp-58h]
  bool v52; // [rsp+2Fh] [rbp-49h]
  __m128i v53; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned __int64)(int)a2 >= a1[18] )
  {
    if ( !under_debugger )
      sub_37CFE0(51545);
LABEL_65:
    BUG();
  }
  v7 = (__m128i *)(a1[17] + 16LL * (int)a2);
  if ( !a3[8] && v7->m128i_i64[1] )
  {
    if ( !under_debugger )
      sub_37CFE0(51546);
    goto LABEL_65;
  }
  v8 = a1[8];
  a1[7] = 0;
  if ( v8 )
  {
    a1[9] = 0;
    qfree();
    a1[8] = 0;
    a1[10] = 0;
  }
  v9 = a1[1];
  if ( a2 >= *(_DWORD *)(v9 + 64) )
    sub_18C210();
  v53.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * a2);
  v51 = *(_QWORD *)(v53.m128i_i64[0] + 48);
  if ( !v51 )
    return v7;
  while ( 2 )
  {
    v52 = sub_18D9F0((__int64)a1, (_BYTE *)v51, a3);
    if ( !v52 || !a1[12] )
      goto LABEL_9;
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = sub_18D6F0((__int64)a1, *(_QWORD *)(a1[11] + 8 * v11), a3);
      v14 = v12;
      if ( !(_BYTE)v12 )
      {
        if ( !under_debugger )
          sub_37CFE0(51669);
        goto LABEL_65;
      }
      v15 = *(_QWORD *)(a1[11] + 8 * v11);
      if ( !v15 )
      {
        if ( !under_debugger )
          sub_37CFE0(51668);
        goto LABEL_65;
      }
      v16 = v7->m128i_i64[0];
      if ( !v7->m128i_i64[0] )
      {
        v49 = v12;
        v41 = qalloc();
        v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
        if ( !v41 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v14 = v49;
        *(_OWORD *)(v41 + 16) = 0;
        *(__m128i *)(v41 + 8) = v42;
        *(_OWORD *)(v41 + 32) = 0;
        *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v41 + 48) = 0;
        v7->m128i_i64[0] = v41;
        *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v41 & 3LL;
        *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
        *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
        v16 = v7->m128i_i64[0];
LABEL_17:
        v47 = v14;
        v17 = qalloc();
        v18 = v17;
        if ( !v17 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 32) = v47;
        *(_QWORD *)(v17 + 24) = v13;
        *(_QWORD *)(v17 + 40) = 0;
        *(_OWORD *)v17 = 0;
        *(_OWORD *)(v17 + 48) = 0;
        *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = _mm_loadl_epi64(v7);
        *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v19, v19);
        if ( v7->m128i_i64[0] != v16 )
        {
LABEL_19:
          *(_QWORD *)(v16 + 8) = v18;
          if ( *(_QWORD *)(v7->m128i_i64[0] + 8) == v16 )
            *(_QWORD *)(v7->m128i_i64[0] + 8) = v18;
          goto LABEL_21;
        }
LABEL_49:
        *(_QWORD *)v16 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
        *(_QWORD *)(v7->m128i_i64[0] + 8) = v18;
        *(_QWORD *)(v7->m128i_i64[0] + 16) = v18;
        v40 = *(_QWORD *)v18 & 2LL;
        *(_QWORD *)v18 &= ~1uLL;
        *(_QWORD *)v18 = v40 | v7->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_22;
      }
      if ( !v7->m128i_i64[1] )
        goto LABEL_17;
      v25 = v52;
      v26 = (_BYTE *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v26 & 2) != 0 )
        goto LABEL_33;
      while ( 1 )
      {
        v16 = (unsigned __int64)v26;
        v30 = v26[32];
        if ( (unsigned __int8)v12 >= v30 )
        {
          if ( v30 < (unsigned __int8)v12 )
            goto LABEL_52;
          if ( v13 >= *(_QWORD *)(v16 + 24) )
            break;
        }
        v26 = *(_BYTE **)(v16 + 8);
        v25 = v52;
LABEL_39:
        if ( (*v26 & 2) != 0 )
          goto LABEL_33;
      }
      if ( v13 > *(_QWORD *)(v16 + 24) )
      {
LABEL_52:
        v26 = *(_BYTE **)(v16 + 16);
        v25 = 0;
        goto LABEL_39;
      }
      if ( v16 )
      {
        v18 = v16;
        goto LABEL_23;
      }
LABEL_33:
      v53.m128i_i64[1] = v12;
      v44 = v25;
      v27 = qalloc();
      v18 = v27;
      if ( !v27 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v28 = v53.m128i_i64[1];
      *(_OWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = v13;
      *(_QWORD *)(v27 + 32) = v28;
      *(_QWORD *)(v27 + 40) = 0;
      *(_OWORD *)v27 = 0;
      *(_OWORD *)(v27 + 48) = 0;
      *(_QWORD *)v27 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = _mm_loadl_epi64(v7);
      *(_QWORD *)v27 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v29, v29);
      if ( v7->m128i_i64[0] == v16 )
        goto LABEL_49;
      if ( v44 )
        goto LABEL_19;
      *(_QWORD *)(v16 + 16) = v27;
      if ( *(_QWORD *)(v7->m128i_i64[0] + 16) == v16 )
        *(_QWORD *)(v7->m128i_i64[0] + 16) = v27;
LABEL_21:
      sub_18E280(v7, (__int64 *)v18);
LABEL_22:
      ++v7->m128i_i64[1];
LABEL_23:
      v20 = *(_QWORD *)(v18 + 48);
      v21 = *(_QWORD *)(v18 + 40);
      v22 = (_QWORD *)(v18 + 24);
      v23 = (__m128i *)(v21 + 24 * v20);
      if ( (__m128i *)v21 == v23 )
        goto LABEL_30;
      while ( v15 != *(_QWORD *)(v21 + 8) )
      {
        v21 += 24;
        if ( v23 == (__m128i *)v21 )
          goto LABEL_30;
      }
      if ( (__m128i *)v21 == v23 )
      {
LABEL_30:
        if ( v22[4] < (unsigned __int64)(v20 + 1) )
        {
          v45 = v22[4];
          v31 = qvector_reserve();
          v32 = v22[3];
          v33 = v22[4];
          v34 = (const __m128i *)v22[2];
          v35 = v31;
          v22[4] = v45;
          v36 = v32 - 1;
          if ( v36 >= 0 )
          {
            do
            {
              v37 = _mm_loadu_si128(v34);
              v31 += 24;
              v34 = (const __m128i *)((char *)v34 + 24);
              *(__m128i *)(v31 - 24) = v37;
              *(_QWORD *)(v31 - 8) = v34[-1].m128i_i64[1];
            }
            while ( v36-- != 0 );
          }
          v48 = v33;
          v46 = v35;
          qfree();
          v39 = 3LL * v22[3];
          v22[2] = v46;
          v22[4] = v48;
          v23 = (__m128i *)(v46 + 8 * v39);
        }
        v24 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v53), (__m128i)v15);
        v23[1].m128i_i64[0] = v51;
        *v23 = v24;
        ++v22[3];
      }
      v11 = ++v10;
    }
    while ( (unsigned __int64)v10 < a1[12] );
LABEL_9:
    v51 = *(_QWORD *)(v51 + 8);
    if ( v51 )
      continue;
    return v7;
  }
}

