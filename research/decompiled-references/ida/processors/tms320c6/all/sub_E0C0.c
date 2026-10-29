unsigned __int64 sub_E0C0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_10FC0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_16D50 && __cxa_guard_acquire(&byte_16D50) )
  {
    qword_16D80 = 2;
    dword_16D88 = 256;
    xmmword_16D60 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_15D00),
                                (__m128i)(unsigned __int64)"tms6");
    xmmword_16D70 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_15D08),
                                (__m128i)(unsigned __int64)&off_15C80);
    __cxa_atexit(func, &xmmword_16D60, &off_13E20);
    __cxa_guard_release(&byte_16D50);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

