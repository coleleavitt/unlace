unsigned __int64 __fastcall sub_152B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v7; // rax
  _BYTE *v8; // rdi
  size_t v9; // rbx
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  void *v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  unsigned __int64 v18; // [rsp+58h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v7 = (__m128i *)qvector_reserve(&src, 0, 19, 1, a5, a6);
  src = v7;
  n[0] = 19;
  *v7 = _mm_load_si128((const __m128i *)&xmmword_16E90);
  v8 = src;
  v13 = a1;
  v9 = n[0];
  v7[1].m128i_i16[0] = 25449;
  v14 = nullptr;
  v8[18] = 0;
  v15 = 0;
  if ( v9 )
  {
    v14 = (void *)qalloc_or_throw(v9);
    *((_QWORD *)&v15 + 1) = v9;
    memcpy(v14, src, v9);
    *(_QWORD *)&v15 = v9;
    v8 = src;
  }
  v17 = 3;
  v16 = 0x2FFFFFFFFLL;
  if ( v8 )
  {
    n[0] = 0;
    qfree(v8);
  }
  if ( !(_BYTE)byte_1D4B8 && __cxa_guard_acquire(&byte_1D4B8) )
  {
    qword_1D4E0 = 1;
    dword_1D4E8 = 256;
    xmmword_1D4C0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1CB60),
                                (__m128i)(unsigned __int64)"mc68k");
    xmmword_1D4D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_1CB68),
                                (__m128i)(unsigned __int64)&off_1CB20);
    __cxa_atexit(func, &xmmword_1D4C0, &off_1AB80);
    __cxa_guard_release(&byte_1D4B8);
  }
  create_std_modmerge_handlers(&v13, (unsigned int)dword_1D4B0, &xmmword_1D4C0, 0, 0);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v18 - __readfsqword(0x28u);
}
