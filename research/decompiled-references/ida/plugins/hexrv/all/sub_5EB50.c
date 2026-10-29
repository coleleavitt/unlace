int sub_5EB50()
{
  qword_4C1B90 = 0;
  qword_4C1B98 = (__int64)&off_4B6700;
  qword_4C1BA0 = 112;
  dword_4C1BA8 = 256;
  xmmword_4C1B80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B8AE0),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4C1B80, &off_4AE580);
}

