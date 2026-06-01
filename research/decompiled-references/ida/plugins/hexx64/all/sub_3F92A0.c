unsigned __int64 __fastcall sub_3F92A0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 dtype_size; // rax
  __m128i v5; // xmm0
  signed int v6; // r15d
  __int64 v7; // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __int64 v10; // r12
  __m128 v11; // xmm1
  __m128i v12; // xmm0
  int v13; // eax
  unsigned __int64 *v14; // rsi
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v19; // [rsp+4h] [rbp-8Ch]
  int v20; // [rsp+18h] [rbp-78h]
  unsigned __int8 v21[16]; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int8 v22[16]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v19 = a2;
  v2 = *(_QWORD *)(a1 + 832);
  v20 = *(_DWORD *)(v2 + 56);
  v3 = *(_DWORD *)(v2 + 60);
  dtype_size = get_dtype_size();
  *(_QWORD *)v21 = 1;
  v5 = (__m128i)(unsigned __int64)dtype_size;
  v6 = dtype_size;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = _mm_cvtsi32_si128(v3);
  *(_QWORD *)v22 = 1;
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 468));
  v10 = *(int *)(v7 + 472);
  v11 = (__m128)_mm_unpacklo_epi32(v5, v8);
  *(_QWORD *)&v21[4] = v11.m128_u64[0];
  v12 = _mm_unpacklo_epi32(v5, v9);
  *(_QWORD *)&v22[4] = v12.m128i_i64[0];
  v13 = get_dtype_size();
  sub_1D6310(a1, 4u, v13, v20, 0x3BEA45E214ADDC55LL, v10, *(double *)v12.m128i_i64, 0);
  v14 = *(unsigned __int64 **)(a1 + 832);
  v24 = 0;
  v23 = 0xFFFFFFFF00000000LL;
  sub_120A10((__int64)&v23, v14, 0, v6, -1, 0);
  if ( *(int *)(*(_QWORD *)(a1 + 832) + 408LL) > 7 )
  {
    v15 = 8;
    do
    {
      if ( v3 != v15 )
      {
        sub_1D6450(a1, 12, v21, (unsigned __int8 *)&v23, v22, v12, v11, (__m128)v8);
        v16 = sub_3F7E20(
                a1,
                2u,
                v19,
                *(int *)(*(_QWORD *)(a1 + 832) + 472LL),
                *(int *)(*(_QWORD *)(a1 + 832) + 468LL),
                v15,
                v12,
                v11,
                (__m128)v8,
                v6);
        *(_DWORD *)(v16 + 4) |= 0x10000u;
      }
      v12 = _mm_unpacklo_epi64(
              (__m128i)(unsigned __int64)(*(_QWORD *)(v24 + 16) + v6),
              (__m128i)(unsigned __int64)(*(_QWORD *)(v24 + 16) + v6));
      *(__m128i *)(v24 + 16) = v12;
      v17 = *(_QWORD *)(a1 + 832);
      v15 += *(_DWORD *)(v17 + 80);
    }
    while ( *(_DWORD *)(v17 + 408) >= v15 );
  }
  sub_1D6450(a1, 12, v21, (unsigned __int8 *)&v23, v21, v12, v11, (__m128)v8);
  sub_11CDA0((__int64)&v23);
  sub_11CDA0((__int64)v22);
  sub_11CDA0((__int64)v21);
  return v25 - __readfsqword(0x28u);
}

