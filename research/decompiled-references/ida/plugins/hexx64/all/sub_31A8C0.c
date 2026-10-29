unsigned __int64 __fastcall sub_31A8C0(_QWORD *a1, unsigned __int64 a2, __m128 a3)
{
  _QWORD *exception; // rdi
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 *v14; // rax
  char v15; // cl
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  char v18; // si
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __m128i v21; // xmm0
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  int v28; // [rsp+8h] [rbp-60h]
  unsigned __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]

  v5 = sub_319CB0((__int64)a1, a2, 0, *(double *)a3.m128_u64);
  v6 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    v28 = *(_DWORD *)(a2 + 4);
    __memcpy_chk();
    if ( (unsigned int)(v28 - 1) > 1 && v28 != 4 && v28 != 8 )
      goto LABEL_41;
    return 0;
  }
  v8 = 0;
  v9 = 0;
  if ( v6 <= 0 )
    goto LABEL_41;
  do
  {
    v16 = a1[1];
    v17 = v8 + *(_QWORD *)(a2 + 8);
    if ( !v16 )
    {
      v31 = v8 + *(_QWORD *)(a2 + 8);
      v25 = qalloc();
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
      if ( !v25 )
      {
LABEL_42:
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v17 = v31;
      *(_QWORD *)(v25 + 32) = 0;
      *(_OWORD *)(v25 + 16) = 0;
      *(__m128i *)(v25 + 8) = v26;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[1] = v25;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      *(_QWORD *)a1[1] |= 2uLL;
      v16 = a1[1];
LABEL_9:
      v29 = v17;
      v10 = qalloc();
      v11 = v10;
      if ( !v10 )
        goto LABEL_42;
      *(_QWORD *)(v10 + 32) = 0;
      *(_OWORD *)(v10 + 16) = 0;
      *(_OWORD *)v10 = 0;
      *(_QWORD *)(v10 + 24) = v29;
      *(_QWORD *)v10 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = _mm_loadl_epi64((const __m128i *)(a1 + 1));
      *(_QWORD *)v10 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
      a3 = (__m128)_mm_unpacklo_epi64(v12, v12);
      *(__m128 *)(v10 + 8) = a3;
      if ( a1[1] != v16 )
      {
        *(_QWORD *)(v16 + 8) = v10;
        v13 = a1[1];
        if ( *(_QWORD *)(v13 + 8) == v16 )
LABEL_22:
          *(_QWORD *)(v13 + 8) = v11;
LABEL_12:
        sub_31A4E0(a1 + 1, (__int64 *)v11);
LABEL_13:
        ++a1[2];
        v6 = *(_DWORD *)(a2 + 4);
        v14 = (__int64 *)(v11 + 24);
        goto LABEL_14;
      }
LABEL_29:
      *(_QWORD *)v16 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
      *(_QWORD *)(a1[1] + 8LL) = v11;
      *(_QWORD *)(a1[1] + 16LL) = v11;
      v24 = *(_QWORD *)v11 & 2LL;
      *(_QWORD *)v11 &= ~1uLL;
      *(_QWORD *)v11 = v24 | a1[1] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_13;
    }
    if ( !a1[2] )
      goto LABEL_9;
    v18 = 1;
    v19 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_18;
    v22 = *(_QWORD *)(v19 + 24);
    v14 = (__int64 *)(v19 + 24);
    if ( v17 < v22 )
    {
LABEL_24:
      v23 = *(_QWORD *)(v19 + 8);
      v18 = 1;
      if ( (*(_BYTE *)v23 & 2) == 0 )
        goto LABEL_25;
LABEL_28:
      v16 = v19;
LABEL_18:
      v30 = v8 + *(_QWORD *)(a2 + 8);
      v20 = qalloc();
      v11 = v20;
      if ( !v20 )
        goto LABEL_42;
      *(_QWORD *)(v20 + 32) = 0;
      *(_OWORD *)(v20 + 16) = 0;
      *(_OWORD *)v20 = 0;
      *(_QWORD *)(v20 + 24) = v30;
      *(_QWORD *)v20 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = _mm_loadl_epi64((const __m128i *)(a1 + 1));
      *(_QWORD *)v20 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
      a3 = (__m128)_mm_unpacklo_epi64(v21, v21);
      *(__m128 *)(v20 + 8) = a3;
      if ( v16 != a1[1] )
      {
        if ( !v18 )
        {
          *(_QWORD *)(v16 + 16) = v20;
          v27 = a1[1];
          if ( v16 == *(_QWORD *)(v27 + 16) )
            *(_QWORD *)(v27 + 16) = v11;
          goto LABEL_12;
        }
        *(_QWORD *)(v16 + 8) = v20;
        v13 = a1[1];
        if ( v16 == *(_QWORD *)(v13 + 8) )
          goto LABEL_22;
        goto LABEL_12;
      }
      goto LABEL_29;
    }
    while ( v22 < v17 )
    {
      v23 = *(_QWORD *)(v19 + 16);
      v18 = 0;
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_28;
LABEL_25:
      v19 = v23;
      v22 = *(_QWORD *)(v23 + 24);
      v14 = (__int64 *)(v23 + 24);
      if ( v17 < v22 )
        goto LABEL_24;
    }
    if ( !v19 )
    {
      v16 = 0;
      goto LABEL_18;
    }
LABEL_14:
    v15 = 8 * v8++;
    v9 |= *((unsigned __int8 *)v14 + 8) << v15;
  }
  while ( v6 > (int)v8 );
  if ( (unsigned int)(v6 - 1) > 1 && v6 != 4 )
  {
    if ( v6 == 8 )
      return v9;
LABEL_41:
    sub_318660(*(double *)a3.m128_u64);
  }
  v9 &= ~(-1LL << (8 * (unsigned __int8)v6));
  return v9;
}

