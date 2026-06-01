unsigned __int64 __fastcall sub_42A20(_QWORD *a1, _QWORD *a2, _QWORD *a3, double a4, double a5, double a6, __m128 a7)
{
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  __m128i v11; // xmm2
  unsigned __int64 v12; // r12
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  unsigned __int64 result; // rax
  int v16; // esi

  v8 = a2[1];
  v9 = (_QWORD *)*a1;
  a1[7] = v8;
  if ( v9[1] )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = _mm_loadl_epi64((const __m128i *)(*v9 + 48 * v12));
      v14 = _mm_unpacklo_epi32(v13, _mm_cmpgt_epi32(v11, v13));
      result = _mm_add_epi64(_mm_srli_si128(v14, 8), v14).m128i_u64[0];
      if ( v8 < result )
      {
        if ( ++v12 >= v9[1] )
          return result;
      }
      else
      {
        a7 = _mm_movehl_ps(a7, (__m128)v14);
        v16 = v12++;
        result = sub_42940(
                   (__int64)a1,
                   v16,
                   (const void *)(*a2 + v14.m128i_i64[0]),
                   v14.m128i_i64[0] + *a3,
                   a7.m128_u64[0]);
        v9 = (_QWORD *)*a1;
        v11 = 0;
        if ( v12 >= *(_QWORD *)(*a1 + 8LL) )
          return result;
      }
      v8 = a1[7];
    }
  }
  return result;
}

