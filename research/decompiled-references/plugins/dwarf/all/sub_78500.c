void __fastcall sub_78500(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int128 v7; // xmm0
  size_t v8; // r15
  __int64 v9; // rbx
  __m128i v10; // xmm1
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r15
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+8h] [rbp-40h]

  v5 = a1[2];
  if ( v5 < a2 )
  {
    v14 = qvector_reserve(a1, 0, a2, 80);
    v15 = a1[2];
    v16 = a1[1];
    a1[2] = v5;
    v27 = v14;
    v17 = *a1;
    v28 = v15;
    v18 = v16 - 1;
    if ( v18 >= 0 )
    {
      v19 = v14;
      v20 = 0;
      do
      {
        *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)v17);
        *(__m128i *)(v19 + 16) = _mm_loadu_si128((const __m128i *)(v17 + 16));
        v21 = *(_QWORD *)(v17 + 32);
        v22 = _mm_loadu_si128((const __m128i *)(v17 + 40));
        *(_QWORD *)(v17 + 32) = 0;
        *(_QWORD *)(v19 + 32) = v21;
        *(__m128i *)(v19 + 40) = v22;
        v23 = *(_QWORD *)(v17 + 56);
        v24 = _mm_loadu_si128((const __m128i *)(v17 + 64));
        *(_OWORD *)(v17 + 40) = v20;
        *(_QWORD *)(v19 + 56) = v23;
        *(__m128i *)(v19 + 64) = v24;
        v25 = *(_QWORD *)(v17 + 32);
        *(_QWORD *)(v17 + 56) = 0;
        *(_QWORD *)(v17 + 72) = 0;
        if ( v25 )
        {
          *(_QWORD *)(v17 + 40) = 0;
          qfree(v25);
          v20 = 0;
        }
        v17 += 80;
        v19 += 80;
      }
      while ( v18-- != 0 );
      v17 = *a1;
    }
    qfree(v17);
    *a1 = v27;
    a1[2] = v28;
  }
  v6 = a1[1];
  if ( v6 < a2 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *a1 + 80 * v6;
        *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)a3);
        v10 = _mm_loadu_si128((const __m128i *)(a3 + 16));
        *(_QWORD *)(v9 + 32) = 0;
        *(__m128i *)(v9 + 16) = v10;
        *(_OWORD *)(v9 + 40) = v7;
        v11 = *(_QWORD *)(a3 + 40);
        if ( v11 )
        {
          v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40));
          *(_QWORD *)(v9 + 48) = v11;
          *(_QWORD *)(v9 + 32) = v12;
          memcpy(v12, *(const void **)(a3 + 32), v11);
          *(_QWORD *)(v9 + 40) = v11;
          v7 = 0;
        }
        *(_QWORD *)(v9 + 56) = 0;
        *(_OWORD *)(v9 + 64) = v7;
        v8 = *(_QWORD *)(a3 + 64);
        if ( v8 )
          break;
        if ( a2 == ++v6 )
          goto LABEL_9;
      }
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 64));
      *(_QWORD *)(v9 + 56) = v13;
      ++v6;
      *(_QWORD *)(v9 + 72) = v8;
      memcpy(v13, *(const void **)(a3 + 56), v8);
      *(_QWORD *)(v9 + 64) = v8;
      v7 = 0;
    }
    while ( a2 != v6 );
  }
LABEL_9:
  a1[1] = a2;
}
