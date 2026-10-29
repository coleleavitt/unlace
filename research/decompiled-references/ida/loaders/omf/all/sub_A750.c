__int64 __fastcall sub_A750(__int64 *a1, __int64 a2)
{
  void *v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __m128 v12; // xmm0
  __int64 result; // rax
  size_t v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // [rsp+8h] [rbp-70h] BYREF
  double v27; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int8 v28; // [rsp+25h] [rbp-53h]
  __int16 v29; // [rsp+26h] [rbp-52h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v26.m128i_i64[0] = v4;
  if ( v4 )
  {
    v14 = v4;
    v3 = (void *)qalloc_or_throw(v4);
    memcpy(v3, *(const void **)a2, v14);
  }
  v5 = a1[2];
  v30 = *(_QWORD *)(a2 + 24);
  v31 = *(_QWORD *)(a2 + 32);
  v26.m128i_i64[1] = *(_QWORD *)(a2 + 40);
  v27 = *(double *)(a2 + 48);
  v28 = *(_BYTE *)(a2 + 58);
  v29 = *(_WORD *)(a2 + 56);
  v6 = a1[1];
  if ( v5 < v6 + 1 )
  {
    v15 = qvector_reserve(a1, 0, v6 + 1, 59);
    v16 = a1[1];
    v7 = v15;
    v17 = a1[2];
    a1[2] = v5;
    v18 = *a1;
    v32 = v17;
    if ( v16 - 1 >= 0 )
    {
      v19 = v7;
      do
      {
        v20 = *(_QWORD *)v18;
        v21 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = 0;
        *(_QWORD *)(v18 + 16) = 0;
        *(_QWORD *)v19 = v20;
        *(__m128i *)(v19 + 8) = v21;
        v22 = _mm_loadu_si128((const __m128i *)(v18 + 40));
        *(_QWORD *)(v19 + 24) = *(_QWORD *)(v18 + 24);
        v23 = *(_QWORD *)(v18 + 32);
        *(__m128i *)(v19 + 40) = v22;
        *(_QWORD *)(v19 + 32) = v23;
        *(_BYTE *)(v19 + 56) = *(_BYTE *)(v18 + 56);
        *(_WORD *)(v19 + 57) = *(_WORD *)(v18 + 57);
        v24 = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
        {
          *(_QWORD *)(v18 + 8) = 0;
          qfree(v24);
        }
        v19 += 59;
        v18 += 59;
      }
      while ( v19 != v7 + 59 * v16 );
      v18 = *a1;
    }
    qfree(v18);
    v25 = v32;
    *a1 = v7;
    a1[2] = v25;
    v6 = a1[1];
  }
  else
  {
    v7 = *a1;
  }
  v8 = _mm_loadl_epi64(&v26);
  v9 = 59 * v6 + v7;
  v10 = v30;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v8, v8);
  *(_QWORD *)(v9 + 24) = v10;
  v11 = v31;
  v12 = _mm_loadh_ps(&v27);
  *(_QWORD *)v9 = v3;
  *(_QWORD *)(v9 + 32) = v11;
  LOWORD(v11) = v29;
  *(__m128 *)(v9 + 40) = v12;
  *(_WORD *)(v9 + 56) = v11;
  result = v28;
  *(_BYTE *)(v9 + 58) = v28;
  ++a1[1];
  return result;
}

