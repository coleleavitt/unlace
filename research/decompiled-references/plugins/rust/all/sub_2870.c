int sub_2870()
{
  qword_B2C0 = 1;
  dword_B2C8 = 256;
  xmmword_B2A0 = (__int128)_mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_9C60),
                             (__m128i)(unsigned __int64)"rust");
  xmmword_B2B0 = (__int128)_mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_9C68),
                             (__m128i)(unsigned __int64)&off_9C20);
  return __cxa_atexit(func, &xmmword_B2A0, &off_9A40);
}
