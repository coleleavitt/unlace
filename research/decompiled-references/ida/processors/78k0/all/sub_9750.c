unsigned __int64 __fastcall sub_9750()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_AB10);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_D338 && __cxa_guard_acquire(&byte_D338) )
  {
    qword_D360 = 1;
    dword_D368 = 256;
    xmmword_D340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_CD20),
                               (__m128i)(unsigned __int64)"nec78k0");
    xmmword_D350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_CD28),
                               (__m128i)(unsigned __int64)&off_CCE0);
    __cxa_atexit(func, &xmmword_D340, &off_C4E0);
    __cxa_guard_release(&byte_D338);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

