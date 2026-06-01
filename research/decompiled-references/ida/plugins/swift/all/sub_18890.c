void __fastcall sub_18890(size_t *a1, size_t a2, __int64 a3)
{
  size_t v6; // rbx
  size_t v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // r12
  __int64 v10; // rbx
  void *v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  size_t v14; // rsi
  size_t v15; // r12
  size_t v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rdi
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = a1[2];
  if ( v6 < a2 )
  {
    v13 = qvector_reserve(a1, 0, a2, 56);
    v14 = a1[2];
    v15 = a1[1];
    a1[2] = v6;
    n = v13;
    v16 = *a1;
    v17 = v15 - 1;
    if ( v17 >= 0 )
    {
      v18 = v13;
      do
      {
        v19 = *(_QWORD *)v16;
        v20 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_QWORD *)v18 = v19;
        *(__m128i *)(v18 + 8) = v20;
        v21 = *(_QWORD *)(v16 + 24);
        v22 = _mm_loadu_si128((const __m128i *)(v16 + 32));
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v18 + 24) = v21;
        *(__m128i *)(v18 + 32) = v22;
        LODWORD(v21) = *(_DWORD *)(v16 + 48);
        *(_QWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v18 + 48) = v21;
        *(_BYTE *)(v18 + 52) = *(_BYTE *)(v16 + 52);
        v23 = *(_QWORD *)(v16 + 24);
        if ( v23 )
        {
          *(_QWORD *)(v16 + 32) = 0;
          qfree(v23);
        }
        v24 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
        {
          *(_QWORD *)(v16 + 8) = 0;
          qfree(v24);
        }
        v16 += 56LL;
        v18 += 56;
      }
      while ( v17-- != 0 );
      v16 = *a1;
    }
    qfree(v16);
    *a1 = n;
    a1[2] = v14;
  }
  v7 = a1[1];
  if ( v7 < a2 )
  {
    v8 = 0;
    v9 = 56 * v7;
    do
    {
      v10 = v9 + *a1;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = v8;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nb = *(_QWORD *)(a3 + 8);
        v11 = (void *)qalloc_or_throw(nb);
        *(_QWORD *)v10 = v11;
        *(_QWORD *)(v10 + 16) = nb;
        memcpy(v11, *(const void **)a3, nb);
        v8 = 0;
        *(_QWORD *)(v10 + 8) = nb;
      }
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = v8;
      if ( *(_QWORD *)(a3 + 32) )
      {
        na = *(_QWORD *)(a3 + 32);
        v12 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v10 + 24) = v12;
        *(_QWORD *)(v10 + 40) = na;
        memcpy(v12, *(const void **)(a3 + 24), na);
        v8 = 0;
        *(_QWORD *)(v10 + 32) = na;
      }
      ++v7;
      v9 += 56;
      *(_DWORD *)(v10 + 48) = *(_DWORD *)(a3 + 48);
      *(_BYTE *)(v10 + 52) = *(_BYTE *)(a3 + 52);
    }
    while ( a2 != v7 );
  }
  a1[1] = a2;
}

