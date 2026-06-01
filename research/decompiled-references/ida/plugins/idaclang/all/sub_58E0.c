int sub_58E0()
{
  qword_293A0 = 5;
  dword_293A8 = 256;
  xmmword_29380 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_28D20),
                              (__m128i)(unsigned __int64)"idaclang");
  xmmword_29390 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_28D28),
                              (__m128i)(unsigned __int64)&off_28BE0);
  return __cxa_atexit(func, &xmmword_29380, &off_289E0);
}

