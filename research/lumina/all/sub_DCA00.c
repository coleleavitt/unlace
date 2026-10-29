__m128i *__fastcall sub_DCA00(__int64 a1, __int64 a2, const __m128i *a3)
{
  __m128i *result; // rax
  __m128i *v5; // rdx

  result = (__m128i *)sub_DBFF0(a2, 88);
  if ( result )
  {
    result->m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    *(_QWORD *)(*(_QWORD *)a1 + 96LL) = result;
    result->m128i_i64[1] = (__int64)a3;
    v5 = result + 1;
    result[1] = _mm_loadu_si128(a3);
    result[2] = _mm_loadu_si128(a3 + 1);
    result[3] = _mm_loadu_si128(a3 + 2);
    result[4] = _mm_loadu_si128(a3 + 3);
    result = (__m128i *)a3[4].m128i_i64[0];
    v5[4].m128i_i64[0] = (__int64)result;
  }
  return result;
}
