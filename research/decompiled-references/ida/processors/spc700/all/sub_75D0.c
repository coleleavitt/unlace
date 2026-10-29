unsigned __int64 sub_75D0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_9E00);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_C398 && __cxa_guard_acquire(&byte_C398) )
  {
    qword_C3C0 = 1;
    dword_C3C8 = 256;
    xmmword_C3A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_BD20),
                               (__m128i)(unsigned __int64)"spc700");
    xmmword_C3B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_BD28),
                               (__m128i)(unsigned __int64)&off_BCE0);
    __cxa_atexit(func, &xmmword_C3A0, &off_B1A0);
    __cxa_guard_release(&byte_C398);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

