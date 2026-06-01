unsigned __int64 __fastcall sub_1D3050(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __m128i si128; // xmm1
  char *v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rsi
  __m128i v12; // xmm0
  unsigned int v15; // [rsp+0h] [rbp-114h]
  unsigned int dtype_size; // [rsp+Ch] [rbp-108h]
  __int64 v19; // [rsp+Ch] [rbp-108h]
  __int64 v20; // [rsp+14h] [rbp-100h]
  __int64 v21; // [rsp+24h] [rbp-F0h] BYREF
  _BYTE v22[4]; // [rsp+2Ch] [rbp-E8h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-E4h]
  _BYTE v24[24]; // [rsp+7Ch] [rbp-98h] BYREF
  char v25; // [rsp+CCh] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+D4h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v7 = &v25;
  v26 = __readfsqword(0x28u);
  v8 = (__m128i *)v22;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v25 );
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  dtype_size = get_dtype_size();
  sub_328100(&v21, v20, dtype_size, 2);
  sub_32AD90(v22, a4, dtype_size, &v21, 0.0);
  clear_tinfo_t();
  sub_327F40(&v21, *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL), v23);
  copy_tinfo_t();
  clear_tinfo_t();
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v15 = get_dtype_size();
  sub_328100(&v21, v19, v15, 2);
  sub_32AD90(v24, a5, v15, &v21, 0.0);
  clear_tinfo_t();
  v21 = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  v9 = sub_1D2FA0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), a2, (int)v22);
  v10 = j__qalloc_or_throw();
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_32C520(v10, v11);
  *(_DWORD *)v10 = 4;
  v12 = _mm_cvtsi32_si128(v23);
  *(_BYTE *)(v10 + 32) = 4;
  *(_QWORD *)(v10 + 40) = v9;
  *(_DWORD *)(v10 + 36) = _mm_cvtsi128_si32(v12);
  *(_BYTE *)(v10 + 64) = 1;
  *(_QWORD *)(v10 + 68) = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a6)).m128i_u64[0];
  sub_B1850(*(_QWORD **)(a1 + 16), v10);
  do
  {
    v7 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v7 + 4) )
    {
      *((_QWORD *)v7 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_119360((__int64)v7);
  }
  while ( v7 != v22 );
  return v26 - __readfsqword(0x28u);
}

