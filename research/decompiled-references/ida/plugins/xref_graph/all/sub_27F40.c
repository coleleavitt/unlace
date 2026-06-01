__m128i *__fastcall sub_27F40(__m128i *a1, __int64 a2)
{
  *a1 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  a1[1] = _mm_loadu_si128((const __m128i *)(a2 + 40));
  return a1;
}

