__int64 (__fastcall **sub_EE60())()
{
  dword_7FC48 = 0;
  qword_7FC50 = 0;
  qword_7FC58 = (__int64)&dword_7FC48;
  qword_7FC60 = (__int64)&dword_7FC48;
  qword_7FC68 = 0;
  __cxa_atexit(sub_31FB0, &dword_7FC48 - 2, &off_7D260);
  qword_7FC08 = 40;
  dword_7FC10 = 0x4000000;
  qword_7FC00 = (__int64)off_7D848;
  xmmword_7FC18 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_7DB90),
                              (__m128i)(unsigned __int64)"Dalvik");
  return off_7D848;
}

