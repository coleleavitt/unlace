int sub_4EB0()
{
  qword_28500 = 3;
  dword_28508 = 256;
  xmmword_284E0 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_27D20),
                              (__m128i)(unsigned __int64)"golang");
  xmmword_284F0 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_27D28),
                              (__m128i)(unsigned __int64)&off_27C60);
  return __cxa_atexit(func, &xmmword_284E0, &off_27480);
}
