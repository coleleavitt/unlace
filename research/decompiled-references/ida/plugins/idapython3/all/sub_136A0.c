__int64 __fastcall sub_136A0(__int64 *a1, __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __m128i v9; // xmm0
  __int64 result; // rax
  __int64 v11; // rbx
  __m128i v12; // xmm0
  size_t v13; // rbp
  size_t v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int128 v21; // xmm1
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v28.m128i_i64[1] = v4;
  if ( v4 )
  {
    v13 = 4 * v4;
    v6 = nullptr;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)a2, v13);
    v5 = *(_QWORD *)(a2 + 32);
    v28.m128i_i64[0] = v5;
    if ( !v5 )
      goto LABEL_3;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 32);
    v6 = nullptr;
    v28.m128i_i64[0] = v5;
    if ( !v5 )
      goto LABEL_3;
  }
  v14 = v5;
  v6 = (void *)qalloc_or_throw();
  memcpy(v6, *(const void **)(a2 + 24), v14);
LABEL_3:
  v7 = a1[1];
  v8 = a1[2];
  if ( v8 < v7 + 1 )
  {
    v15 = qvector_reserve();
    v16 = a1[2];
    v17 = *a1;
    a1[2] = v8;
    v18 = a1[1];
    v29 = v15;
    v30 = v16;
    v19 = v18 - 1;
    if ( v19 >= 0 )
    {
      v20 = v15;
      v21 = 0;
      do
      {
        v22 = *(_QWORD *)v17;
        v23 = _mm_loadu_si128((const __m128i *)(v17 + 8));
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = v21;
        *(_QWORD *)v20 = v22;
        *(__m128i *)(v20 + 8) = v23;
        v24 = *(_QWORD *)(v17 + 24);
        v25 = _mm_loadu_si128((const __m128i *)(v17 + 32));
        *(_QWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v20 + 24) = v24;
        *(__m128i *)(v20 + 32) = v25;
        v26 = *(_QWORD *)v17;
        *(_QWORD *)(v17 + 40) = 0;
        if ( v26 )
        {
          *(_QWORD *)(v17 + 8) = 0;
          qfree();
          v21 = 0;
        }
        v17 += 48;
        v20 += 48;
      }
      while ( v19-- != 0 );
    }
    qfree();
    *a1 = v29;
    a1[2] = v30;
    v7 = a1[1];
  }
  else
  {
    v29 = *a1;
  }
  v9 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
  result = 48 * v7;
  v11 = result + v29;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v9, v9);
  v12 = _mm_loadl_epi64(&v28);
  *(_QWORD *)v11 = v3;
  *(_QWORD *)(v11 + 24) = v6;
  *(__m128i *)(v11 + 32) = _mm_unpacklo_epi64(v12, v12);
  ++a1[1];
  return result;
}

