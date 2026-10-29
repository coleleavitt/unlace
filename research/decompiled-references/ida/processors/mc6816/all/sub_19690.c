unsigned __int64 sub_19690()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_1A9B0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_493D8 && __cxa_guard_acquire(&byte_493D8) )
  {
    qword_49400 = 1;
    dword_49408 = 256;
    xmmword_493E0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1E040),
                                (__m128i)(unsigned __int64)"mc6816");
    xmmword_493F0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1E048),
                                (__m128i)(unsigned __int64)&off_1E000);
    __cxa_atexit(func, &xmmword_493E0, &off_1CA20);
    __cxa_guard_release(&byte_493D8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

