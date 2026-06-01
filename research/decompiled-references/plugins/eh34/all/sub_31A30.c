unsigned __int64 __fastcall sub_31A30(__int64 a1)
{
  __m128i *v2; // rax
  _BYTE *v3; // rdi
  size_t v4; // rbx
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  void *v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  unsigned __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_8D4F0 && __cxa_guard_acquire(&byte_8D4F0) )
  {
    qword_8D520 = 4;
    dword_8D528 = 256;
    xmmword_8D500 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_8C218),
                                (__m128i)(unsigned __int64)"eh34");
    xmmword_8D510 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_8C220),
                                (__m128i)(unsigned __int64)&off_8C0E0);
    __cxa_atexit(nullsub_27, &xmmword_8D500, &off_8B6C0);
    __cxa_guard_release(&byte_8D4F0);
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v2 = (__m128i *)qvector_reserve(&src, 0, 35, 1);
  src = v2;
  n[0] = 35;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_786E0);
  v3 = src;
  v8 = a1;
  v4 = n[0];
  v2[1] = _mm_load_si128((const __m128i *)&xmmword_786F0);
  v2[2].m128i_i16[0] = 26478;
  v9 = nullptr;
  v3[34] = 0;
  v10 = 0;
  if ( v4 )
  {
    v9 = (void *)qalloc_or_throw(v4);
    *((_QWORD *)&v10 + 1) = v4;
    memcpy(v9, src, v4);
    *(_QWORD *)&v10 = v4;
    v3 = src;
  }
  v12 = 11272448;
  v11 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v3 )
  {
    n[0] = 0;
    qfree(v3);
  }
  create_std_modmerge_handlers(&v8, (unsigned int)dword_8D578, &xmmword_8D500, &off_8C0B0, 1);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v13 - __readfsqword(0x28u);
}
