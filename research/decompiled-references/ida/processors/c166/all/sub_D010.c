unsigned __int64 __fastcall sub_D010()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_FC50);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_14498 && __cxa_guard_acquire(&byte_14498) )
  {
    qword_144C0 = 1;
    dword_144C8 = 256;
    xmmword_144A0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_13D00),
                                (__m128i)(unsigned __int64)"c166");
    xmmword_144B0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_13D08),
                                (__m128i)(unsigned __int64)&off_13CC0);
    __cxa_atexit(func, &xmmword_144A0, &off_12CC0);
    __cxa_guard_release(&byte_14498);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

