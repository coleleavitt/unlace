int sub_79F0()
{
  qword_2F660 = 3;
  dword_2F668 = 256;
  xmmword_2F640 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_2EC40),
                              (__m128i)(unsigned __int64)"eh_parse");
  xmmword_2F650 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_2EC48),
                              (__m128i)(unsigned __int64)&off_2EB80);
  return __cxa_atexit(func, &xmmword_2F640, &off_2DFC0);
}

