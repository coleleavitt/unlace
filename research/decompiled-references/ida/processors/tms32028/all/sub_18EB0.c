unsigned __int64 __fastcall sub_18EB0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_1A0F0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_2A4D8 && __cxa_guard_acquire(&byte_2A4D8) )
  {
    qword_2A500 = 4;
    dword_2A508 = 256;
    xmmword_2A4E0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29C20),
                                (__m128i)(unsigned __int64)"c28");
    xmmword_2A4F0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29C28),
                                (__m128i)(unsigned __int64)&off_29B20);
    __cxa_atexit(func, &xmmword_2A4E0, &off_1EEC0);
    __cxa_guard_release(&byte_2A4D8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

