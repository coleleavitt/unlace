unsigned __int64 sub_8180()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_AB70);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_D378 && __cxa_guard_acquire(&byte_D378) )
  {
    qword_D3A0 = 1;
    dword_D3A8 = 256;
    xmmword_D380 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_CD20),
                               (__m128i)(unsigned __int64)"fr");
    xmmword_D390 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_CD28),
                               (__m128i)(unsigned __int64)&off_CCE0);
    __cxa_atexit(func, &xmmword_D380, &off_C180);
    __cxa_guard_release(&byte_D378);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

