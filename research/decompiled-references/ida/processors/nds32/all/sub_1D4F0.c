unsigned __int64 __fastcall sub_1D4F0(__int64 a1)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  void *v4; // rsi
  _BYTE *v5; // rdi
  size_t v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  void *v10; // rax
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
  v2 = (__m128i *)qvector_reserve(&src, 0, 19, 1);
  src = v2;
  v4 = &stru_6368 + 1;
  n[0] = 19;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_21460);
  v5 = src;
  v13 = a1;
  v6 = n[0];
  v2[1].m128i_i16[0] = 25449;
  v14 = nullptr;
  v5[18] = 0;
  v15 = 0;
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw(v6);
    v4 = src;
    v14 = v10;
    *((_QWORD *)&v15 + 1) = v6;
    memcpy(v10, src, v6);
    *(_QWORD *)&v15 = v6;
    v5 = src;
  }
  v17 = 3;
  v16 = 0x2FFFFFFFFLL;
  if ( v5 )
  {
    n[0] = 0;
    qfree(v5, v4, v3);
  }
  if ( !(_BYTE)byte_2A528 && __cxa_guard_acquire(&byte_2A528) )
  {
    qword_2A560 = 8;
    dword_2A568 = 256;
    xmmword_2A540 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29D00),
                                (__m128i)(unsigned __int64)"nds32");
    xmmword_2A550 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_29D08),
                                (__m128i)(unsigned __int64)&off_29B00);
    __cxa_atexit(func, &xmmword_2A540, &off_26F80);
    __cxa_guard_release(&byte_2A528);
  }
  v7 = (unsigned int)dword_2A524;
  create_std_modmerge_handlers(&v13, (unsigned int)dword_2A524, &xmmword_2A540, &off_2A4E0, 2);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, v7, v8);
  }
  return v18 - __readfsqword(0x28u);
}

