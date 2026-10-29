unsigned __int64 __fastcall sub_147C0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_17C20);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_38C58 && __cxa_guard_acquire(&byte_38C58) )
  {
    qword_38C80 = 1;
    dword_38C88 = 256;
    xmmword_38C60 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1BD00),
                                (__m128i)(unsigned __int64)"dsp56k");
    xmmword_38C70 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1BD08),
                                (__m128i)(unsigned __int64)&off_1BCC0);
    __cxa_atexit(func, &xmmword_38C60, &off_1AB40);
    __cxa_guard_release(&byte_38C58);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

