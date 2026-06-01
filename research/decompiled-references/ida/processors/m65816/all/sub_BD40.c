unsigned __int64 __fastcall sub_BD40()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_DCC0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_123B8 && __cxa_guard_acquire(&byte_123B8) )
  {
    qword_123E0 = 25;
    dword_123E8 = 256;
    xmmword_123C0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_11D00),
                                (__m128i)(unsigned __int64)"m65816");
    xmmword_123D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_11D08),
                                (__m128i)(unsigned __int64)&off_116C0);
    __cxa_atexit(func, &xmmword_123C0, &off_104A0);
    __cxa_guard_release(&byte_123B8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

