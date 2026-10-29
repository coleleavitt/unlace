unsigned __int64 __fastcall sub_9C40()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_B2B0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_E420 && __cxa_guard_acquire(&byte_E420) )
  {
    qword_E460 = 1;
    dword_E468 = 256;
    xmmword_E440 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_DD20),
                               (__m128i)(unsigned __int64)"rl78");
    xmmword_E450 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_DD28),
                               (__m128i)(unsigned __int64)&off_DCE0);
    __cxa_atexit(nullsub_5, &xmmword_E440, &off_D320);
    __cxa_guard_release(&byte_E420);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

