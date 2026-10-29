int sub_63550()
{
  qword_4EB8D0 = 0;
  qword_4EB8D8 = (__int64)&off_4DE3A0;
  qword_4EB8E0 = 112;
  dword_4EB8E8 = 256;
  xmmword_4EB8C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E0780),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4EB8C0, &off_4D61C0);
}

