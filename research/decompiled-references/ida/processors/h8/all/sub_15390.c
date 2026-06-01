unsigned __int64 sub_15390()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_18310);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_1E458 && __cxa_guard_acquire(&byte_1E458) )
  {
    qword_1E480 = 1;
    dword_1E488 = 256;
    xmmword_1E460 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1DB80),
                                (__m128i)(unsigned __int64)"h8");
    xmmword_1E470 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1DB88),
                                (__m128i)(unsigned __int64)&off_1DB40);
    __cxa_atexit(func, &xmmword_1E460, &off_1C580);
    __cxa_guard_release(&byte_1E458);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

