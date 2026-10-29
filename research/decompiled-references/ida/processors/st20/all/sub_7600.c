unsigned __int64 sub_7600()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_8D10);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_C338 && __cxa_guard_acquire(&byte_C338) )
  {
    qword_C360 = 1;
    dword_C368 = 256;
    xmmword_C340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_BD20),
                               (__m128i)(unsigned __int64)"st20");
    xmmword_C350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_BD28),
                               (__m128i)(unsigned __int64)&off_BCE0);
    __cxa_atexit(func, &xmmword_C340, &off_AA60);
    __cxa_guard_release(&byte_C338);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

