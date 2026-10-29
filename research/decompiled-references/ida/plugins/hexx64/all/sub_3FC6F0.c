unsigned __int64 __fastcall sub_3FC6F0(__int64 a1, double a2, double a3, __m128 a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  __m128 v8; // xmm1
  __m128i v9; // xmm0
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v12[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = 8;
  v13 = __readfsqword(0x28u);
  v11[0] = 0xFFFFFFFF00000000LL;
  v5 = *(_DWORD *)(a1 + 52);
  v11[1] = 0;
  v6 = v5 & 0x1018;
  if ( v6 != 4112 )
  {
    if ( (v5 & 0x1008) == 0 || (v4 = 2, v6 == 4104) )
      v4 = 4;
  }
  sub_120A10((__int64)v11, *(unsigned __int64 **)(a1 + 832), 1, v4, -1, 0);
  v7 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v12 = 1;
  v8 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v7 + 388));
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v11[0])), (__m128i)v8);
  *(_QWORD *)&v12[4] = v9.m128i_i64[0];
  sub_1D6450(a1, 13, v12, (unsigned __int8 *)v11, v12, v9, v8, a4);
  sub_11CDA0((__int64)v12);
  sub_11CDA0((__int64)v11);
  return v13 - __readfsqword(0x28u);
}

