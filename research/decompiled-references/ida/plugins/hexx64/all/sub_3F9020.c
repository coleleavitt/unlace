unsigned __int64 __fastcall sub_3F9020(__int64 a1, unsigned __int8 a2, double a3)
{
  int *v3; // rax
  signed int v4; // r13d
  __int64 v5; // r15
  __int64 v6; // r14
  int dtype_size; // eax
  __m128i v8; // xmm2
  signed int v9; // r15d
  unsigned __int64 *v10; // rsi
  __m128 v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm3
  __int64 v14; // r9
  __m128i v15; // xmm0
  int v16; // eax
  int i; // r14d
  int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-90h]
  unsigned int v23; // [rsp+14h] [rbp-7Ch]
  unsigned __int64 v24; // [rsp+20h] [rbp-70h] BYREF
  __int64 v25; // [rsp+28h] [rbp-68h]
  unsigned __int8 v26[16]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int8 v27[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v3 = *(int **)(a1 + 832);
  v4 = v3[15];
  v5 = v3[116];
  v6 = v3[14];
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 4u, dtype_size, v4, 0x3BEA45E214ADDC55LL, v5, a3, 0);
  v23 = a2;
  v8 = _mm_cvtsi32_si128(v4);
  v9 = get_dtype_size();
  v10 = *(unsigned __int64 **)(a1 + 832);
  v11 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v8);
  v24 = 0xFFFFFFFF00000000LL;
  v25 = 0;
  sub_120A10((__int64)&v24, v10, 0, v9, -1, 0);
  v12 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v26 = 1;
  *(_QWORD *)v27 = 1;
  v13 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 468));
  v14 = *(int *)(v12 + 472);
  *(_QWORD *)&v26[4] = v11.m128_u64[0];
  v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), v13);
  v22 = v14;
  *(_QWORD *)&v27[4] = v15.m128i_i64[0];
  v16 = get_dtype_size();
  sub_1D6310(a1, 4u, v16, v6, 0x3BEA45E214ADDC55LL, v22, *(double *)v15.m128i_i64, 0);
  for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 408LL); i > 7; i -= *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) )
  {
    v15 = _mm_unpacklo_epi64(
            (__m128i)(unsigned __int64)(*(_QWORD *)(v25 + 16) + v9),
            (__m128i)(unsigned __int64)(*(_QWORD *)(v25 + 16) + v9));
    *(__m128i *)(v25 + 16) = v15;
    sub_1D6450(a1, 13, v26, (unsigned __int8 *)&v24, v27, v15, v11, (__m128)v8);
    v18 = *(int **)(a1 + 832);
    v19 = i;
    if ( v4 == i )
      v19 = v18[116];
    v20 = sub_3F7E20(a1, 1u, v23, v19, v18[118], v18[117], v15, v11, (__m128)v8, v9);
    *(_DWORD *)(v20 + 4) |= 0x10000u;
  }
  sub_1D6450(a1, 13, v26, (unsigned __int8 *)&v24, v26, v15, v11, (__m128)v8);
  sub_11CDA0((__int64)v27);
  sub_11CDA0((__int64)v26);
  sub_11CDA0((__int64)&v24);
  return v28 - __readfsqword(0x28u);
}

