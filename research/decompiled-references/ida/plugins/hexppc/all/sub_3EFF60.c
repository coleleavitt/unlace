unsigned __int64 __fastcall sub_3EFF60(__int64 a1, signed int a2, unsigned int a3, __int16 a4, char a5)
{
  __m128i v5; // xmm3
  __int64 v6; // rdx
  __int64 v7; // rbx
  __m128i v8; // xmm2
  __int64 v9; // r8
  __int64 v10; // rsi
  __m128i v11; // xmm1
  double v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rax
  signed int v15; // r15d
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rsi
  int dtype_size; // eax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v24; // rax
  char v25; // [rsp-80h] [rbp-88h]
  _BYTE v26[12]; // [rsp-70h] [rbp-78h] BYREF
  _BYTE v27[12]; // [rsp-60h] [rbp-68h] BYREF
  _QWORD v28[3]; // [rsp-50h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp-38h] [rbp-40h]

  v5 = _mm_cvtsi32_si128(a3);
  v6 = (unsigned __int16)(64 - a4 - a5);
  v7 = a2;
  v8 = _mm_cvtsi32_si128(a2);
  v25 = a4;
  v9 = *(_QWORD *)(a1 + 40);
  v29 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v26 = 1;
  *(_QWORD *)v27 = 1;
  v28[0] = 0xFFFFFFFF00000000LL;
  v28[1] = 0;
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 80));
  *(_QWORD *)&v12 = _mm_unpacklo_epi32(v11, v5).m128i_u64[0];
  *(double *)&v27[4] = v12;
  *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(v11, v8).m128i_u64[0];
  sub_11CFD0((__int64)v28, v10, v6, 1, v9, 0);
  sub_1D2850(a1, 23, v27, (unsigned __int8 *)v28, v26);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_QWORD *)(v13 + 4464);
  if ( !v14 )
    sub_3E6800(v12);
  v15 = *(_DWORD *)(*(_QWORD *)(v13 + 4456) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 4464) = v14 - 1;
  v16 = 2;
  v17 = 64 - v25;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v16 = 7;
  v18 = -1;
  if ( v17 <= 63 && v17 )
    v18 = ~(-1LL << v25);
  sub_3E9CF0(a1, v18, v16, v15);
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 0x14u, dtype_size, v7, v15, v7, 0);
  v20 = *(_QWORD **)(a1 + 832);
  v21 = v20[558];
  v22 = v20[557];
  if ( v20[559] < (unsigned __int64)(v21 + 1) )
  {
    v24 = qvector_reserve();
    v20[557] = v24;
    v22 = v24;
    v21 = v20[558];
  }
  *(_DWORD *)(v22 + 4 * v21) = v15;
  ++v20[558];
  sub_119360((__int64)v28);
  sub_119360((__int64)v27);
  sub_119360((__int64)v26);
  return v29 - __readfsqword(0x28u);
}

