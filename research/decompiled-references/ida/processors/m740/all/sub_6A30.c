unsigned __int64 sub_6A30()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_7880);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_A338 && __cxa_guard_acquire(&byte_A338) )
  {
    qword_A360 = 1;
    dword_A368 = 256;
    xmmword_A340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_9D20),
                               (__m128i)(unsigned __int64)"m740");
    xmmword_A350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_9D28),
                               (__m128i)(unsigned __int64)&off_9CE0);
    __cxa_atexit(func, &xmmword_A340, &off_9320);
    __cxa_guard_release(&byte_A338);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

