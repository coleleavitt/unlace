void __fastcall sub_3A08D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *exception; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 *v22; // rcx
  char v23; // dl
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  _BYTE *v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+8h] [rbp-40h]
  char v35; // [rsp+Fh] [rbp-39h]
  __int64 v36; // [rsp+10h] [rbp-38h]
  __int64 v37; // [rsp+18h] [rbp-30h]

  ((void (__fastcall *)(__int64, unsigned __int64, __int64, __int64, __int64, __int64))callui)(71, a2, a3, a4, a5, a6);
  v11 = v10;
  callui(72, v10, v12, v13, v14, v15, v33, v34, v36, v37);
  if ( !v16 )
    return;
  v17 = *(_QWORD *)(a1 + 24);
  if ( !v17 )
  {
    v31 = qalloc();
    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    if ( !v31 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v31 + 32) = 0;
    *(_OWORD *)(v31 + 16) = 0;
    *(__m128i *)(v31 + 8) = v32;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 24) = v31;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24));
    **(_QWORD **)(a1 + 24) &= ~1uLL;
    **(_QWORD **)(a1 + 24) |= 2uLL;
    v17 = *(_QWORD *)(a1 + 24);
LABEL_4:
    v18 = qalloc();
    v19 = v18;
    if ( !v18 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v18 + 32) = 0;
    *(_OWORD *)(v18 + 16) = 0;
    *(_OWORD *)v18 = 0;
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
    v20 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    *(_QWORD *)v18 = v17 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v20, v20);
    if ( *(_QWORD *)(a1 + 24) != v17 )
      goto LABEL_6;
LABEL_23:
    *(_QWORD *)v17 = v19 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v19;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = v19;
    v30 = *(_QWORD *)v19 & 2LL;
    *(_QWORD *)v19 &= ~1uLL;
    *(_QWORD *)v19 = v30 | *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  v23 = v16;
  v24 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v24 & 2) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v29 = *(_QWORD *)(v24 + 24);
    v22 = (__int64 *)(v24 + 24);
    if ( a2 >= v29 )
      break;
    v28 = *(_BYTE **)(v24 + 8);
    v16 = v23;
LABEL_19:
    if ( (*v28 & 2) != 0 )
    {
      v17 = v24;
      v23 = v16;
      goto LABEL_12;
    }
    v24 = (unsigned __int64)v28;
  }
  if ( v29 < a2 )
  {
    v28 = *(_BYTE **)(v24 + 16);
    v16 = 0;
    goto LABEL_19;
  }
  if ( v24 )
    goto LABEL_10;
  v17 = 0;
  v23 = v16;
LABEL_12:
  v35 = v23;
  v25 = qalloc();
  v19 = v25;
  if ( !v25 )
  {
    v7 = __cxa_allocate_exception(8u);
    *v7 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v25 + 32) = 0;
  *(_OWORD *)(v25 + 16) = 0;
  *(_OWORD *)v25 = 0;
  *(_QWORD *)(v25 + 24) = a2;
  *(_QWORD *)v25 = v17 & 0xFFFFFFFFFFFFFFFCLL;
  v26 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
  *(_QWORD *)v25 = v17 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v26, v26);
  if ( *(_QWORD *)(a1 + 24) == v17 )
    goto LABEL_23;
  if ( v35 )
  {
LABEL_6:
    *(_QWORD *)(v17 + 8) = v19;
    v21 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v21 + 8) == v17 )
      *(_QWORD *)(v21 + 8) = v19;
    goto LABEL_8;
  }
  *(_QWORD *)(v17 + 16) = v25;
  v27 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v27 + 16) == v17 )
    *(_QWORD *)(v27 + 16) = v19;
LABEL_8:
  sub_3A04F0((_QWORD *)(a1 + 24), (__int64 *)v19);
LABEL_9:
  ++*(_QWORD *)(a1 + 32);
  v22 = (__int64 *)(v19 + 24);
LABEL_10:
  v22[1] = v11;
}

