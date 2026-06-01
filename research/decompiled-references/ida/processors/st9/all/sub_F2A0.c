unsigned __int64 sub_F2A0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_127E0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_18478 && __cxa_guard_acquire(&byte_18478) )
  {
    qword_184A0 = 4;
    dword_184A8 = 256;
    xmmword_18480 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_17D20),
                                (__m128i)(unsigned __int64)"st9");
    xmmword_18490 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_17D28),
                                (__m128i)(unsigned __int64)&off_17C20);
    __cxa_atexit(func, &xmmword_18480, &off_15DE0);
    __cxa_guard_release(&byte_18478);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

