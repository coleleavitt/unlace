int sub_5D5E0()
{
  qword_4BB8B0 = 0;
  qword_4BB8B8 = (__int64)&off_4B04E0;
  qword_4BB8C0 = 112;
  dword_4BB8C8 = 256;
  xmmword_4BB8A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B28C0),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4BB8A0, &off_4A8340);
}

