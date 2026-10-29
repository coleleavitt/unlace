unsigned __int64 sub_12BC0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_14770);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_1D2E8 && __cxa_guard_acquire(&byte_1D2E8) )
  {
    qword_1D320 = 4;
    dword_1D328 = 256;
    xmmword_1D300 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1CB80),
                                (__m128i)(unsigned __int64)"xtensa");
    xmmword_1D310 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1CB88),
                                (__m128i)(unsigned __int64)&off_1CA40);
    __cxa_atexit(func, &xmmword_1D300, &off_18020);
    __cxa_guard_release(&byte_1D2E8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

