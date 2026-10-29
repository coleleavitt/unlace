__int64 __fastcall sub_39C020(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *exception; // rax
  __m128i *v10; // r12
  int v11; // ebp
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __m128i v15; // xmm0
  char v17; // dl
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm1
  char v25; // [rsp+Fh] [rbp-39h]

  v10 = *(__m128i **)(a1 + 8);
  v11 = a3 - *(_DWORD *)(a1 + 16);
  v12 = v10->m128i_i64[0];
  if ( !v10->m128i_i64[0] )
  {
    v23 = qalloc();
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v23 + 16) = 0;
    *(_OWORD *)(v23 + 32) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v10->m128i_i64[0] = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(v10->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v10->m128i_u64[0], (__m128i)v10->m128i_u64[0]);
    *(_QWORD *)v10->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v10->m128i_i64[0] |= 2uLL;
    v12 = v10->m128i_i64[0];
LABEL_3:
    v13 = qalloc();
    v14 = v13;
    if ( !v13 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 24) = a4;
    *(_DWORD *)(v13 + 36) = a2;
    *(_DWORD *)(v13 + 40) = v11;
    *(_OWORD *)v13 = 0;
    *(_QWORD *)v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    v15 = _mm_loadl_epi64(v10);
    *(_QWORD *)v13 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v15, v15);
    if ( v12 != v10->m128i_i64[0] )
      goto LABEL_5;
LABEL_20:
    *(_QWORD *)v12 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(_QWORD *)(v10->m128i_i64[0] + 8) = v14;
    *(_QWORD *)(v10->m128i_i64[0] + 16) = v14;
    v22 = *(_QWORD *)v14 & 2LL;
    *(_QWORD *)v14 &= ~1uLL;
    *(_QWORD *)v14 = v22 | v10->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
  if ( !v10->m128i_i64[1] )
    goto LABEL_3;
  if ( (*(_BYTE *)(*(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v17 = 1;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
  v17 = 1;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v12 + 24);
    if ( a4 < v18 )
    {
      v19 = *(_BYTE **)(v12 + 8);
      v17 = 1;
      if ( (*v19 & 2) != 0 )
        goto LABEL_14;
      goto LABEL_23;
    }
    if ( v18 >= a4 )
      break;
    v19 = *(_BYTE **)(v12 + 16);
    v17 = 0;
    if ( (*v19 & 2) != 0 )
      goto LABEL_14;
LABEL_23:
    v12 = (unsigned __int64)v19;
  }
  if ( v12 )
    return 0;
LABEL_14:
  v25 = v17;
  v20 = qalloc();
  v14 = v20;
  if ( !v20 )
  {
    v4 = __cxa_allocate_exception(8u);
    *v4 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v20 + 32) = 0;
  *(_OWORD *)(v20 + 16) = 0;
  *(_DWORD *)(v20 + 32) = a3;
  *(_QWORD *)(v20 + 24) = a4;
  *(_DWORD *)(v20 + 36) = a2;
  *(_DWORD *)(v20 + 40) = v11;
  *(_OWORD *)v20 = 0;
  *(_QWORD *)v20 = v12 & 0xFFFFFFFFFFFFFFFCLL;
  v21 = _mm_loadl_epi64(v10);
  *(_QWORD *)v20 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v21, v21);
  if ( v12 == v10->m128i_i64[0] )
    goto LABEL_20;
  if ( v25 )
  {
LABEL_5:
    *(_QWORD *)(v12 + 8) = v14;
    if ( v12 == *(_QWORD *)(v10->m128i_i64[0] + 8) )
      *(_QWORD *)(v10->m128i_i64[0] + 8) = v14;
    goto LABEL_7;
  }
  *(_QWORD *)(v12 + 16) = v20;
  if ( v12 == *(_QWORD *)(v10->m128i_i64[0] + 16) )
    *(_QWORD *)(v10->m128i_i64[0] + 16) = v20;
LABEL_7:
  sub_39BC40(v10, (__int64 *)v14);
LABEL_8:
  ++v10->m128i_i64[1];
  return 0;
}

