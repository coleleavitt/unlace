unsigned __int64 __fastcall sub_173E0()
{
  __m128i *src; // [rsp+0h] [rbp-78h]
  void *v2; // [rsp+28h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_198E0);
  strcpy(src[1].m128i_i8, "ic");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_393F8 && __cxa_guard_acquire(&byte_393F8) )
  {
    qword_39420 = 3;
    dword_39428 = 256;
    xmmword_39400 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_38D20),
                                (__m128i)(unsigned __int64)"tms320c55");
    xmmword_39410 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_38D28),
                                (__m128i)(unsigned __int64)&off_38C60);
    __cxa_atexit(func, &xmmword_39400, &off_1CBA0);
    __cxa_guard_release(&byte_393F8);
  }
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

