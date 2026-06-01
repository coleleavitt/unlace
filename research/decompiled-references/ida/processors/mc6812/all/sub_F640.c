unsigned __int64 __fastcall sub_F640()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_10DE0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_17458 && __cxa_guard_acquire(&byte_17458) )
  {
    qword_17480 = 1;
    dword_17488 = 256;
    xmmword_17460 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_16D00),
                                (__m128i)(unsigned __int64)"mc6812");
    xmmword_17470 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_16D08),
                                (__m128i)(unsigned __int64)&off_16CC0);
    __cxa_atexit(func, &xmmword_17460, &off_14D40);
    __cxa_guard_release(&byte_17458);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

