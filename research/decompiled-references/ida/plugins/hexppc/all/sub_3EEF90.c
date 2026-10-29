unsigned __int64 __fastcall sub_3EEF90(__int64 a1, int a2, unsigned int a3, char a4, char a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v9; // rsi
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // r8
  __m128i v13; // xmm0
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  _DWORD v19[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 v21[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v22 = __readfsqword(0x28u);
  if ( a5 )
  {
    v9 = *(_QWORD *)(a1 + 832);
    v10 = _mm_cvtsi32_si128(a3);
    v11 = a5;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 80));
    v19[0] = 1;
    v20[0] = 0xFFFFFFFF00000000LL;
    v20[1] = 0;
    *(_QWORD *)&v14 = _mm_unpacklo_epi32(v13, v10).m128i_u64[0];
    *(double *)&v19[1] = v14;
    sub_11CFD0((__int64)v20, v9, v11, 1, v12, 0);
    v15 = *(_QWORD *)(a1 + 832);
    v16 = *(_QWORD *)(v15 + 4464);
    if ( !v16 )
      sub_3E6800(v14);
    v17 = _mm_cvtsi32_si128(v19[1]);
    v6 = *(_DWORD *)(*(_QWORD *)(v15 + 4456) + 4 * v16 - 4);
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v15 + 4464) = v16 - 1;
    *(_QWORD *)&a6 = _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(v6)).m128i_u64[0];
    *(double *)&v21[4] = a6;
    sub_1D2850(a1, 22, (unsigned __int8 *)v19, (unsigned __int8 *)v20, v21);
    sub_119360((__int64)v21);
    sub_119360((__int64)v20);
    sub_119360((__int64)v19);
  }
  sub_3EE990(a1, a2, v6, 0, a4 - 1, a6);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

