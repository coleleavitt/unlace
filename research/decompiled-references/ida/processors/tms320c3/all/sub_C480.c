unsigned __int64 sub_C480()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_DB10);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_1F3F8 && __cxa_guard_acquire(&byte_1F3F8) )
  {
    qword_1F420 = 1;
    dword_1F428 = 256;
    xmmword_1F400 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1ED20),
                                (__m128i)(unsigned __int64)"tms320c3x");
    xmmword_1F410 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1ED28),
                                (__m128i)(unsigned __int64)&off_1ECE0);
    __cxa_atexit(func, &xmmword_1F400, &off_FE40);
    __cxa_guard_release(&byte_1F3F8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

