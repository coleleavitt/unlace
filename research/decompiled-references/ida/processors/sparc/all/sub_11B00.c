unsigned __int64 __fastcall sub_11B00(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, __int64 a6)
{
  __m128i *v7; // rax
  __int64 v8; // rdx
  void *v9; // rsi
  _BYTE *v10; // rdi
  __m128i v11; // xmm0
  size_t v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  void *v16; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  void *v20; // [rsp+28h] [rbp-50h]
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  int v23; // [rsp+48h] [rbp-30h]
  unsigned __int64 v24; // [rsp+58h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v7 = (__m128i *)qvector_reserve(&src, 0, 19, 1, a5, a6);
  src = v7;
  v9 = &stru_6358 + 17;
  n[0] = 19;
  *v7 = _mm_load_si128((const __m128i *)&xmmword_13CE0);
  v10 = src;
  v11.m128i_i64[0] = 0;
  v19 = a1;
  v12 = n[0];
  v7[1].m128i_i16[0] = 25449;
  v20 = nullptr;
  v10[18] = 0;
  v21 = 0;
  if ( v12 )
  {
    v16 = (void *)qalloc_or_throw(v12);
    v9 = src;
    v20 = v16;
    *((_QWORD *)&v21 + 1) = v12;
    memcpy(v16, src, v12);
    *(_QWORD *)&v21 = v12;
    v10 = src;
  }
  v23 = 3;
  v22 = 0x2FFFFFFFFLL;
  if ( v10 )
  {
    n[0] = 0;
    qfree(v10, v9, v8, 0.0);
  }
  if ( !(_BYTE)byte_194F8 && __cxa_guard_acquire(&byte_194F8) )
  {
    qword_19520 = 4;
    dword_19528 = 256;
    xmmword_19500 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_18C40),
                                (__m128i)(unsigned __int64)"sparc");
    v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_18C48), (__m128i)(unsigned __int64)&off_18B40);
    xmmword_19510 = (__int128)v11;
    __cxa_atexit(func, &xmmword_19500, &off_16A40);
    __cxa_guard_release(&byte_194F8);
  }
  v13 = (unsigned int)dword_194F0;
  create_std_modmerge_handlers(&v19, (unsigned int)dword_194F0, &xmmword_19500, 0, 0);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v13, v14, *(double *)v11.m128i_i64);
  }
  return v24 - __readfsqword(0x28u);
}

