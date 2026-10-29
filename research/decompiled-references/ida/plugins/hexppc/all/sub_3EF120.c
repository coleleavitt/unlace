unsigned __int64 __fastcall sub_3EF120(__int64 a1, int a2, unsigned int a3, char a4, char a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v10; // r8
  __int64 v11; // rsi
  __m128i v12; // xmm0
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  _BYTE v18[12]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 v20[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v21 = __readfsqword(0x28u);
  if ( a5 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v18 = 1;
    v12 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 80));
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    *(_QWORD *)&v13 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    *(double *)&v18[4] = v13;
    sub_11CFD0((__int64)v19, v11, a5, 1, v10, 0);
    v14 = *(_QWORD *)(a1 + 832);
    v15 = *(_QWORD *)(v14 + 4464);
    if ( !v15 )
      sub_3E6800(v13);
    v16 = _mm_cvtsi32_si128(*(unsigned int *)&v18[4]);
    v6 = *(_DWORD *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
    *(_DWORD *)v20 = 1;
    *(_QWORD *)(v14 + 4464) = v15 - 1;
    *(_QWORD *)&a6 = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v6)).m128i_u64[0];
    *(double *)&v20[4] = a6;
    sub_1D2850(a1, 22, v18, (unsigned __int8 *)v19, v20);
    sub_119360((__int64)v20);
    sub_119360((__int64)v19);
    sub_119360((__int64)v18);
  }
  sub_3EE990(a1, a2, v6, a4 - a5, 31 - a5, a6);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

