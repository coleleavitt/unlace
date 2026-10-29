unsigned __int64 __fastcall sub_A190()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_BA80);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_F4F8 && __cxa_guard_acquire(&byte_F4F8) )
  {
    qword_F520 = 2;
    dword_F528 = 256;
    xmmword_F500 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_ED00),
                               (__m128i)(unsigned __int64)"avr");
    xmmword_F510 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_ED08),
                               (__m128i)(unsigned __int64)&off_EC80);
    __cxa_atexit(func, &xmmword_F500, &off_DF00);
    __cxa_guard_release(&byte_F4F8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

