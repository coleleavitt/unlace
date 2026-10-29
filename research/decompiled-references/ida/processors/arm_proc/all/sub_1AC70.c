int sub_1AC70()
{
  qword_AA6A0 = 24;
  dword_AA6A8 = 256;
  xmmword_AA680 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_A3A00),
                              (__m128i)(unsigned __int64)"arm");
  xmmword_AA690 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_A3A08),
                              (__m128i)(unsigned __int64)&off_A2FA0);
  __cxa_atexit(nullsub_12, &xmmword_AA680, &off_9FF60);
  return __cxa_atexit(nullsub_11, &off_AA340, &off_9FF60);
}

