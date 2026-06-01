__int64 (__fastcall *__fastcall sub_2C9560(__int64 a1, const __m128i *a2))(__int64, const __m128i *, __int64)
{
  __int64 (__fastcall *result)(__int64, const __m128i *, __int64); // rax

  result = (__int64 (__fastcall *)(__int64, const __m128i *, __int64))a2[1].m128i_i64[0];
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)a1 = 0;
  if ( result )
  {
    result = (__int64 (__fastcall *)(__int64, const __m128i *, __int64))result(a1, a2, 2);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(a2 + 1);
  }
  return result;
}

