void __fastcall sub_13FC0(size_t *a1, const void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const void *v6; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int128 v10; // xmm0
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r15
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  size_t v17; // rbp
  size_t v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r15
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = a2;
  v8 = a1[2];
  if ( v8 < (unsigned __int64)a2 )
  {
    v16 = qvector_reserve(a1, 0, a2, 48);
    a2 = (const void *)a1[2];
    v17 = a1[1];
    a1[2] = v8;
    n = v16;
    v18 = *a1;
    v19 = v17 - 1;
    if ( v19 >= 0 )
    {
      v20 = v16;
      v21 = 0;
      do
      {
        v22 = *(_QWORD *)v18;
        v23 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = v21;
        *(_QWORD *)v20 = v22;
        *(__m128i *)(v20 + 8) = v23;
        v24 = *(_QWORD *)(v18 + 24);
        v25 = _mm_loadu_si128((const __m128i *)(v18 + 32));
        *(_QWORD *)(v18 + 24) = 0;
        *(_QWORD *)(v20 + 24) = v24;
        *(__m128i *)(v20 + 32) = v25;
        v26 = *(_QWORD *)v18;
        *(_QWORD *)(v18 + 40) = 0;
        if ( v26 )
        {
          *(_QWORD *)(v18 + 8) = 0;
          qfree(v26);
          v21 = 0;
        }
        v18 += 48LL;
        v20 += 48;
      }
      while ( v19-- != 0 );
      v18 = *a1;
    }
    qfree(v18);
    *a1 = n;
    a1[2] = (size_t)a2;
  }
  v9 = a1[1];
  if ( v9 < (unsigned __int64)v6 )
  {
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v12 = *a1 + 48 * v9;
        *(_QWORD *)v12 = 0;
        *(_OWORD *)(v12 + 8) = v10;
        v13 = *(_QWORD *)(a3 + 8);
        if ( v13 )
        {
          v14 = (void *)qalloc_or_throw(8 * v13, a2, 8 * v13, a4, a5);
          *(_QWORD *)(v12 + 16) = v13;
          *(_QWORD *)v12 = v14;
          a2 = *(const void **)a3;
          memcpy(v14, *(const void **)a3, 8 * v13);
          *(_QWORD *)(v12 + 8) = v13;
          v10 = 0;
        }
        *(_QWORD *)(v12 + 24) = 0;
        *(_OWORD *)(v12 + 32) = v10;
        v11 = *(_QWORD *)(a3 + 32);
        if ( v11 )
          break;
        if ( v6 == (const void *)++v9 )
          goto LABEL_9;
      }
      v15 = (void *)qalloc_or_throw(8 * v11, a2, a3, 8 * v11, a5);
      *(_QWORD *)(v12 + 24) = v15;
      ++v9;
      *(_QWORD *)(v12 + 40) = v11;
      a2 = *(const void **)(a3 + 24);
      memcpy(v15, a2, 8 * v11);
      *(_QWORD *)(v12 + 32) = v11;
      v10 = 0;
    }
    while ( v6 != (const void *)v9 );
  }
LABEL_9:
  a1[1] = (size_t)v6;
}

