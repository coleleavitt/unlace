int sub_2560()
{
  qword_8220 = 1;
  dword_8228 = 256;
  xmmword_8200 = (__int128)_mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_7D20),
                             (__m128i)(unsigned __int64)"comhelper");
  xmmword_8210 = (__int128)_mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_7D28),
                             (__m128i)(unsigned __int64)&off_7CE0);
  return __cxa_atexit(func, &xmmword_8200, &off_7BA0);
}

