unsigned __int64 __fastcall sub_198FF0(int a1)
{
  __m128i v1; // xmm0
  __m128i i; // [rsp+0h] [rbp-48h] BYREF
  struct timespec remaining; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1 / 1000), _mm_cvtsi32_si128(1000000 * (a1 % 1000)));
  for ( i = _mm_unpacklo_epi32(v1, _mm_cmpgt_epi32((__m128i)0LL, v1));
        nanosleep((const struct timespec *)&i, &remaining);
        i = _mm_load_si128((const __m128i *)&remaining) )
  {
    if ( *__errno_location() != 4 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1256);
      BUG();
    }
  }
  return v5 - __readfsqword(0x28u);
}
