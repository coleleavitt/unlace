unsigned __int64 __fastcall sub_BBF0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_D0C0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_11438 && __cxa_guard_acquire(&byte_11438) )
  {
    qword_11460 = 4;
    dword_11468 = 256;
    xmmword_11440 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_10D20),
                                (__m128i)(unsigned __int64)"tms320c54");
    xmmword_11450 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_10D28),
                                (__m128i)(unsigned __int64)&off_10C20);
    __cxa_atexit(func, &xmmword_11440, &off_F7E0);
    __cxa_guard_release(&byte_11438);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

