__int64 *__fastcall sub_DC5F0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 *result; // rax

  result = sub_DC1C0(*a1, 0x20u);
  if ( result )
  {
    *result = a2;
    *(__m128i *)(result + 1) = _mm_loadu_si128(a3);
    result[3] = a1[50];
    a1[50] = (__int64)result;
  }
  return result;
}
