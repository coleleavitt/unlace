__int64 __fastcall sub_1F6660(const __m128i *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *exception; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // rax
  char v12; // r14
  unsigned __int64 v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0

  v6 = a1[3].m128i_u64[0];
  if ( !v6 )
  {
    v19 = qalloc();
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( !v19 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v19 + 16) = 0;
    *(__m128i *)(v19 + 8) = v20;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1[3].m128i_i64[0] = v19;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 3LL;
    *(__m128i *)(a1[3].m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1[3].m128i_u64[0], (__m128i)a1[3].m128i_u64[0]);
    *(_QWORD *)a1[3].m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1[3].m128i_i64[0] |= 2uLL;
    v6 = a1[3].m128i_u64[0];
LABEL_3:
    v7 = qalloc();
    v8 = v7;
    if ( !v7 )
    {
      v3 = __cxa_allocate_exception(8u);
      *v3 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v7 + 16) = 0;
    *(_OWORD *)v7 = 0;
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = _mm_loadl_epi64(a1 + 3);
    *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v9, v9);
    if ( a1[3].m128i_i64[0] != v6 )
      goto LABEL_5;
    goto LABEL_19;
  }
  if ( !a1[3].m128i_i64[1] )
    goto LABEL_3;
  if ( (*(_BYTE *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v12 = 1;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = 1;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v6 + 24);
    if ( a2 < v13 )
    {
      v14 = *(_BYTE **)(v6 + 8);
      v12 = 1;
      if ( (*v14 & 2) != 0 )
        goto LABEL_13;
      goto LABEL_22;
    }
    if ( v13 >= a2 )
      break;
    v14 = *(_BYTE **)(v6 + 16);
    v12 = 0;
    if ( (*v14 & 2) != 0 )
      goto LABEL_13;
LABEL_22:
    v6 = (unsigned __int64)v14;
  }
  if ( !v6 )
  {
LABEL_13:
    v15 = qalloc();
    v8 = v15;
    if ( !v15 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v15 + 16) = 0;
    *(_OWORD *)v15 = 0;
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)v15 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    v16 = _mm_loadl_epi64(a1 + 3);
    *(_QWORD *)v15 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v16, v16);
    if ( a1[3].m128i_i64[0] != v6 )
    {
      if ( !v12 )
      {
        *(_QWORD *)(v6 + 16) = v15;
        v17 = a1[3].m128i_i64[0];
        if ( *(_QWORD *)(v17 + 16) == v6 )
          *(_QWORD *)(v17 + 16) = v8;
        goto LABEL_7;
      }
LABEL_5:
      *(_QWORD *)(v6 + 8) = v8;
      v10 = a1[3].m128i_i64[0];
      if ( *(_QWORD *)(v10 + 8) == v6 )
        *(_QWORD *)(v10 + 8) = v8;
LABEL_7:
      sub_1F6280((const __m128i *)a1[3].m128i_i64, (__int64 *)v8);
LABEL_8:
      ++a1[3].m128i_i64[1];
      return 0;
    }
LABEL_19:
    *(_QWORD *)v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
    *(_QWORD *)(a1[3].m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1[3].m128i_i64[0] + 16) = v8;
    v18 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v18 | a1[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
  return 0;
}

