__m128i *__fastcall sub_382EF0(const __m128i *a1)
{
  __m128i *result; // rax

  result = (__m128i *)qalloc();
  if ( !result )
    sub_382E30((__int64)"hexrays_place_t");
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  return result;
}

