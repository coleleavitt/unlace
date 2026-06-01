unsigned __int64 sub_3A570()
{
  __int64 v0; // rcx
  __m128i *src; // [rsp+0h] [rbp-A0h]
  void *v3; // [rsp+28h] [rbp-78h]
  __int128 v4; // [rsp+50h] [rbp-50h] BYREF
  void (__fastcall *v5)(__int128 *, __int128 *, __int64, __int64, __int64); // [rsp+60h] [rbp-40h]
  __int64 v6; // [rsp+68h] [rbp-38h]
  unsigned __int64 v7; // [rsp+78h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_960B0);
  strcpy(src[1].m128i_i8, "ic");
  v3 = (void *)qalloc_or_throw();
  memcpy(v3, src, 0x13u);
  if ( src )
    qfree();
  if ( !(_BYTE)byte_18C288 && __cxa_guard_acquire(&byte_18C288) )
  {
    qword_18C2C0 = 19;
    dword_18C2C8 = 256;
    xmmword_18C2A0 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_181200),
                                 (__m128i)(unsigned __int64)"pc");
    xmmword_18C2B0 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_181208),
                                 (__m128i)(unsigned __int64)&off_180D40);
    __cxa_atexit(nullsub_3, &xmmword_18C2A0, &off_1809E0);
    __cxa_guard_release(&byte_18C288);
  }
  create_std_modmerge_handlers();
  create_nodeval_merge_handler();
  v5 = nullptr;
  v4 = 0;
  v6 = 0;
  create_nodeval_merge_handler();
  if ( v5 )
    v5(&v4, &v4, 3, v0, 1);
  v5 = nullptr;
  v4 = 0;
  v6 = 0;
  create_nodeval_merge_handler();
  if ( v5 )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v5)(&v4, &v4, 3);
  if ( v3 )
    qfree();
  return v7 - __readfsqword(0x28u);
}

