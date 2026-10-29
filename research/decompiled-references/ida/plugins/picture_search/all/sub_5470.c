unsigned __int64 sub_5470(__int64 a1, ...)
{
  const char *v1; // rsi
  __m128i *v3; // [rsp+0h] [rbp-108h] BYREF
  __int128 v4; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-D0h]

  va_start(va, a1);
  v6 = __readfsqword(0x28u);
  v4 = 0;
  v3 = (__m128i *)qvector_reserve();
  *(_QWORD *)&v4 = 17;
  *v3 = _mm_load_si128((const __m128i *)&xmmword_8930);
  v3[1].m128i_i8[0] = 0;
  sub_53B0((__int64 *)&v3);
  v1 = (const char *)word_88EA;
  if ( (_QWORD)v4 )
    v1 = (const char *)v3;
  sub_4E60((__int64)"%s", v1);
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v6 - __readfsqword(0x28u);
}

