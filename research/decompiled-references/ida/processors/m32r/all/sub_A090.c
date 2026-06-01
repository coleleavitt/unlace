unsigned __int64 sub_A090()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_BF10);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_10398 && __cxa_guard_acquire(&byte_10398) )
  {
    qword_103C0 = 3;
    dword_103C8 = 256;
    xmmword_103A0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_FD20),
                                (__m128i)(unsigned __int64)"m32r");
    xmmword_103B0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_FD28),
                                (__m128i)(unsigned __int64)&off_FC60);
    __cxa_atexit(func, &xmmword_103A0, &off_EDC0);
    __cxa_guard_release(&byte_10398);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

