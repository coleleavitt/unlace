void *__fastcall sub_25B60(const __m128i *a1, _QWORD *a2, double a3, double a4, __m128 a5)
{
  __m128i *v6; // r13
  __int64 v7; // rdi
  size_t v8; // rbx
  __m128 v9; // xmm0

  v6 = (__m128i *)&a1[4];
  v7 = a2[4];
  v8 = a2[5] - v7;
  if ( v8 > a1[3].m128i_i64[0] )
    v8 = a1[3].m128i_u64[0];
  memcpy((void *)(a2[3] + v7), v6, v8);
  a2[4] += v8;
  v9 = (__m128)_mm_sub_epi64(_mm_loadu_si128(a1 + 3), _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8));
  a1[3] = (const __m128i)v9;
  return memmove(v6, &v6->m128i_i8[v8], _mm_movehl_ps(a5, v9).m128_u64[0]);
}
