unsigned __int64 __fastcall sub_9C40()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_B440);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_F398 && __cxa_guard_acquire(&byte_F398) )
  {
    qword_F3C0 = 2;
    dword_F3C8 = 256;
    xmmword_F3A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_ED00),
                               (__m128i)(unsigned __int64)"i960");
    xmmword_F3B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_ED08),
                               (__m128i)(unsigned __int64)&off_EC80);
    __cxa_atexit(func, &xmmword_F3A0, &off_D680);
    __cxa_guard_release(&byte_F398);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

