unsigned __int64 sub_B000()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_10300);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_14318 && __cxa_guard_acquire(&byte_14318) )
  {
    qword_14340 = 2;
    dword_14348 = 256;
    xmmword_14320 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_139C0),
                                (__m128i)(unsigned __int64)"rx");
    xmmword_14330 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_139C8),
                                (__m128i)(unsigned __int64)&off_13940);
    __cxa_atexit(func, &xmmword_14320, &off_125C0);
    __cxa_guard_release(&byte_14318);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

