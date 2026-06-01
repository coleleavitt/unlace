unsigned __int64 __fastcall sub_DEB0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_115D0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_163B8 && __cxa_guard_acquire(&byte_163B8) )
  {
    qword_163E0 = 1;
    dword_163E8 = 256;
    xmmword_163C0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_15D20),
                                (__m128i)(unsigned __int64)"z80");
    xmmword_163D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_15D28),
                                (__m128i)(unsigned __int64)&off_15CE0);
    __cxa_atexit(func, &xmmword_163C0, &off_13080);
    __cxa_guard_release(&byte_163B8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

