_DWORD *__fastcall sub_72550(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rax
  _DWORD *result; // rax
  char i; // cl
  unsigned __int64 v13; // rbx
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  _QWORD *exception; // rax
  char v23; // [rsp+Fh] [rbp-39h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    v17 = qalloc();
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    if ( !v17 )
      goto LABEL_30;
    *(_QWORD *)(v17 + 32) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    *(__m128i *)(v17 + 8) = v18;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                (__m128i)*(unsigned __int64 *)(a1 + 8));
    **(_QWORD **)(a1 + 8) &= ~1uLL;
    **(_QWORD **)(a1 + 8) |= 2uLL;
    v6 = *(_QWORD *)(a1 + 8);
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_3:
    v7 = qalloc();
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 16) = 0;
      *(_OWORD *)v7 = 0;
      *(_DWORD *)(v7 + 24) = a2;
      *(_DWORD *)(v7 + 28) = a3;
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v9 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v9, v9);
      if ( *(_QWORD *)(a1 + 8) != v6 )
        goto LABEL_5;
      goto LABEL_17;
    }
    goto LABEL_30;
  }
  i = 1;
  v13 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v13 & 2) != 0 )
    goto LABEL_21;
  result = (_DWORD *)(v13 + 24);
  v14 = a2 == *(_DWORD *)(v13 + 24);
  if ( a2 >= *(_DWORD *)(v13 + 24) )
    goto LABEL_15;
LABEL_12:
  v15 = *(_QWORD *)(v13 + 8);
  for ( i = 1; ; i = 0 )
  {
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
      v6 = v13;
      goto LABEL_21;
    }
    v13 = v15;
    result = (_DWORD *)(v15 + 24);
    v14 = a2 == *result;
    if ( a2 < *result )
      goto LABEL_12;
LABEL_15:
    if ( v14 )
    {
      if ( a3 < result[1] )
        goto LABEL_12;
      if ( a3 <= result[1] )
        break;
    }
    v15 = *(_QWORD *)(v13 + 16);
  }
  if ( !v13 )
  {
    v6 = 0;
LABEL_21:
    v23 = i;
    v19 = qalloc();
    v8 = v19;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 32) = 0;
      *(_OWORD *)(v19 + 16) = 0;
      *(_OWORD *)v19 = 0;
      *(_DWORD *)(v19 + 24) = a2;
      *(_DWORD *)(v19 + 28) = a3;
      *(_QWORD *)v19 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v20 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
      *(_QWORD *)v19 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v20, v20);
      if ( *(_QWORD *)(a1 + 8) != v6 )
      {
        if ( !v23 )
        {
          *(_QWORD *)(v6 + 16) = v19;
          v21 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(v21 + 16) == v6 )
            *(_QWORD *)(v21 + 16) = v8;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v6 + 8) = v8;
        v10 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v10 + 8) == v6 )
          *(_QWORD *)(v10 + 8) = v8;
LABEL_7:
        sub_72170((_QWORD *)(a1 + 8), (__int64 *)v8);
LABEL_8:
        ++*(_QWORD *)(a1 + 16);
        result = (_DWORD *)(v8 + 24);
        goto LABEL_9;
      }
LABEL_17:
      *(_QWORD *)v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v8;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v8;
      v16 = *(_QWORD *)v8 & 2LL;
      *(_QWORD *)v8 &= ~1uLL;
      *(_QWORD *)v8 = v16 | *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_30:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
LABEL_9:
  result[2] = a4;
  return result;
}

