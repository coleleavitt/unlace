unsigned __int64 __fastcall sub_6AF0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_7830);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_B6C8 && __cxa_guard_acquire(&byte_B6C8) )
  {
    qword_B700 = 1;
    dword_B708 = 256;
    xmmword_B6E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_9D00),
                               (__m128i)(unsigned __int64)"kr1878");
    xmmword_B6F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_9D08),
                               (__m128i)(unsigned __int64)&off_9CC0);
    __cxa_atexit(func, &xmmword_B6E0, &off_9400);
    __cxa_guard_release(&byte_B6C8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

