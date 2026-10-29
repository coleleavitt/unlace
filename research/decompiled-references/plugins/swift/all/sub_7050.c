int sub_7050()
{
  qword_29980 = 4;
  dword_29988 = 256;
  xmmword_29960 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_27D00),
                              (__m128i)(unsigned __int64)"swift");
  xmmword_29970 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_27D08),
                              (__m128i)(unsigned __int64)&off_27C00);
  return __cxa_atexit(nullsub_2, &xmmword_29960, &off_274A0);
}
