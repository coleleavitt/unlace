void __fastcall sub_3CBF80(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 i; // rbx
  _QWORD *v7; // rax
  __m128i v8; // xmm2
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  void *v17; // rax
  const void **v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v21; // [rsp+20h] [rbp-48h]
  const void **v22; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v3 = a2[1];
  v19 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    n = v3;
    v9 = 0;
    v10 = qalloc_or_throw();
    v11 = n;
    v12 = 0;
    v2 = v10;
    v13 = v10;
    do
    {
      v14 = *a2;
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = v12;
      v15 = v14 + 24 * v9;
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v21 = v11;
        v22 = (const void **)v15;
        n = 4 * v16;
        v17 = (void *)qalloc_or_throw();
        v18 = v22;
        *(_QWORD *)(v13 + 16) = v16;
        *(_QWORD *)v13 = v17;
        memcpy(v17, *v18, n);
        *(_QWORD *)(v13 + 8) = v16;
        v11 = v21;
        v12 = 0;
      }
      ++v9;
      v13 += 24;
    }
    while ( v11 != v9 );
  }
  v4 = *a1;
  if ( *a1 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
  v8 = _mm_load_si128(&v19);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v8;
}

