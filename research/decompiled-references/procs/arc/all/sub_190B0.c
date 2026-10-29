unsigned __int64 __fastcall sub_190B0(__int64 a1)
{
  __m128i *v2; // rax
  _BYTE *v3; // rdi
  size_t v4; // rbx
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  void *v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v2 = (__m128i *)qvector_reserve(&src, 0, 19, 1);
  src = v2;
  n[0] = 19;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_1F690);
  v3 = src;
  v8 = a1;
  v4 = n[0];
  v2[1].m128i_i16[0] = 25449;
  v9 = nullptr;
  v3[18] = 0;
  v10 = 0;
  if ( v4 )
  {
    v9 = (void *)qalloc_or_throw(v4);
    *((_QWORD *)&v10 + 1) = v4;
    memcpy(v9, src, v4);
    *(_QWORD *)&v10 = v4;
    v3 = src;
  }
  v12 = 3;
  v11 = 0x2FFFFFFFFLL;
  if ( v3 )
  {
    n[0] = 0;
    qfree(v3);
  }
  if ( !(_BYTE)byte_2B9D8 && __cxa_guard_acquire(&byte_2B9D8) )
  {
    qword_2BA00 = 4;
    dword_2BA08 = 256;
    xmmword_2B9E0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29C40),
                                (__m128i)(unsigned __int64)"arc");
    xmmword_2B9F0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29C48),
                                (__m128i)(unsigned __int64)&off_29B40);
    __cxa_atexit(func, &xmmword_2B9E0, &off_231A0);
    __cxa_guard_release(&byte_2B9D8);
  }
  create_std_modmerge_handlers(&v8, (unsigned int)dword_2B9D0, &xmmword_2B9E0, &off_2B960, 3);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v13 - __readfsqword(0x28u);
}
