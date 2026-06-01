unsigned __int64 __fastcall sub_408A10(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __m128i v5; // xmm0
  __int64 *v8; // rbx
  __m128 si128; // xmm1
  __m128 *v10; // rax
  __m128 v11; // xmm2
  int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v20; // [rsp-10Ch] [rbp-114h]
  unsigned __int64 v21; // [rsp-100h] [rbp-108h] BYREF
  __int64 v22; // [rsp-F8h] [rbp-100h]
  _BYTE v23[12]; // [rsp-F0h] [rbp-F8h] BYREF
  _BYTE v24[4]; // [rsp-E0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp-DCh] [rbp-E4h]
  char v26; // [rsp-90h] [rbp-98h]
  __int64 v27; // [rsp-8Ch] [rbp-94h]
  __int64 v28; // [rsp-40h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp-38h] [rbp-40h]

  v5 = 0;
  v8 = &v28;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v29 = __readfsqword(0x28u);
  v20 = *(_DWORD *)(a1[104] + 448LL);
  v10 = (__m128 *)v24;
  v11 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(a4));
  do
  {
    v10->m128_i32[1] = -1;
    v10 += 5;
    v10[-5].m128_i16[0] = 0;
    v10[-5].m128_i16[1] = 0;
    v10[-5].m128_u64[1] = 0;
    v10[-4] = si128;
    v10[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v10[-3] + 8) = 0;
    v10[-2].m128_i32[2] = 0;
    v10[-1].m128_u64[0] = 0;
    v10[-1].m128_i32[2] = 0;
  }
  while ( v10 != (__m128 *)&v28 );
  v24[0] = 1;
  v12 = 1;
  v25 = v11.m128_u64[0];
  if ( a5 != -1 )
  {
    v26 = 1;
    v12 = 2;
    v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(a5));
    v27 = v5.m128i_i64[0];
  }
  *(_QWORD *)v23 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  *(_QWORD *)v23 = 41;
  copy_tinfo_t();
  clear_tinfo_t();
  v13 = a1[1];
  v14 = a1[5];
  v21 = 0xFFFFFFFF00000000LL;
  v22 = 0;
  *(_QWORD *)v23 = 41;
  v15 = sub_335B10(v13, v14, a2, (__int64)v23, v12, (__int64)v24, *(double *)v5.m128i_i64, si128, 1);
  clear_tinfo_t();
  v16 = *(_QWORD *)(v15 + 72);
  v22 = v15;
  *(_DWORD *)(v16 + 280) |= 0x10u;
  *(_DWORD *)v23 = 1;
  *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  LOBYTE(v21) = 4;
  HIDWORD(v21) = v20;
  sub_1D6450((__int64)a1, 67, (unsigned __int8 *)&v21, nullptr, v23, v5, si128, v11);
  *(_DWORD *)(a1[100] + 1416LL) |= 1u;
  sub_11CDA0((__int64)v23);
  sub_11CDA0((__int64)&v21);
  do
  {
    v8 -= 10;
    cleanup_argloc();
    v17 = v8[4];
    if ( v17 )
    {
      v8[5] = 0;
      qfree(v17);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v8);
  }
  while ( v8 != (__int64 *)v24 );
  return v29 - __readfsqword(0x28u);
}

