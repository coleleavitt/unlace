unsigned __int64 __fastcall sub_19720()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_1BA70);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_2C438 && __cxa_guard_acquire(&byte_2C438) )
  {
    qword_2C460 = 1;
    dword_2C468 = 256;
    xmmword_2C440 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2BC40),
                                (__m128i)(unsigned __int64)"m16c");
    xmmword_2C450 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2BC48),
                                (__m128i)(unsigned __int64)&off_2BC00);
    __cxa_atexit(func, &xmmword_2C440, &off_203E0);
    __cxa_guard_release(&byte_2C438);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

