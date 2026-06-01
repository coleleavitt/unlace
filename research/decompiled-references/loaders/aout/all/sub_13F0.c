unsigned int *__fastcall sub_13F0(unsigned int *a1)
{
  __m128i v2; // xmm5
  unsigned int v3; // edx
  __m128i v4; // xmm0

  v2 = _mm_cvtsi32_si128(_byteswap_ulong(a1[7]));
  v3 = a1[6];
  v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(a1[4])), _mm_cvtsi32_si128(_byteswap_ulong(a1[5])));
  *(__m128i *)a1 = _mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(_byteswap_ulong(*a1)),
                       _mm_cvtsi32_si128(_byteswap_ulong(a1[1]))),
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(_byteswap_ulong(a1[2])),
                       _mm_cvtsi32_si128(_byteswap_ulong(a1[3]))));
  *((__m128i *)a1 + 1) = _mm_unpacklo_epi64(v4, _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v3)), v2));
  return a1;
}
