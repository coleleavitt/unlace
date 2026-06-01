unsigned __int64 __fastcall sub_9980(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // xmm1_8
  unsigned __int64 v18; // rdi
  __int64 v19; // xmm0_8
  __int64 *v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 792);
  v25 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 784);
  for ( i = v7 + 8 * v6; i != v7; ++a2[1] )
  {
    while ( !*(_BYTE *)(*(_QWORD *)v7 + 860LL) )
    {
      v7 += 8;
      if ( i == v7 )
        return v25 - __readfsqword(0x28u);
    }
    v11 = *a2;
    v12 = a2[2];
    v13 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(*(_QWORD *)v7 + 528LL));
    v14 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)a1 + 16LL));
    v15 = a2[1];
    v16 = _mm_add_epi64(_mm_srli_si128(v13, 8), v13);
    v17 = _mm_and_si128(v13, v14).m128i_u64[0];
    v18 = v15 + 1;
    v19 = _mm_and_si128(v16, v14).m128i_u64[0];
    v24.m128i_i64[0] = v17;
    v24.m128i_i64[1] = v19;
    if ( (unsigned __int64)&v24 < v11 || (unsigned __int64)&v24 >= v11 + 16 * v12 )
    {
      if ( v12 < v18 )
      {
        v22 = qvector_reserve(a2, v11, v15 + 1, 16, a5, a6);
        *a2 = v22;
        v11 = v22;
        v15 = a2[1];
      }
      *(__m128i *)(v11 + 16 * v15) = _mm_load_si128(&v24);
    }
    else
    {
      if ( v12 < v18 )
      {
        v23 = qvector_reserve(a2, v11, v15 + 1, 16, a5, a6);
        *a2 = v23;
        v11 = v23;
        v15 = a2[1];
      }
      v20 = (__int64 *)(16 * v15 + v11);
      *v20 = v17;
      v20[1] = v19;
    }
    v7 += 8;
  }
  return v25 - __readfsqword(0x28u);
}
