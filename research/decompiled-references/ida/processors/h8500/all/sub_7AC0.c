unsigned __int64 __fastcall sub_7AC0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_8F40);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_B3B8 && __cxa_guard_acquire(&byte_B3B8) )
  {
    qword_B3E0 = 1;
    dword_B3E8 = 256;
    xmmword_B3C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_AD20),
                               (__m128i)(unsigned __int64)"h8500");
    xmmword_B3D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_AD28),
                               (__m128i)(unsigned __int64)&off_ACE0);
    __cxa_atexit(func, &xmmword_B3C0, &off_A3C0);
    __cxa_guard_release(&byte_B3B8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

