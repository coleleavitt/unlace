unsigned __int64 __fastcall sub_3EA0C0(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __m128i v5; // xmm1
  unsigned __int8 v7[16]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 52) & 8) != 0 && (*(_BYTE *)(a1 + 65) != 7 || sub_CC530() != 1) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    v2 = *(_QWORD *)(a1 + 832);
    v3 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
    *(_QWORD *)v7 = 1;
    v4 = *(_DWORD *)(v2 + 84);
    v8[0] = 0xFFFFFFFF00000000LL;
    v5 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 452));
    v8[1] = 0;
    *(_QWORD *)&v7[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), v5).m128i_u64[0];
    sub_11CFD0((__int64)v8, v2, v3, v4, v1, 0);
    sub_1D2850(a1, 3, (unsigned __int8 *)v8, nullptr, v7);
    sub_119360((__int64)v8);
    sub_119360((__int64)v7);
  }
  return v9 - __readfsqword(0x28u);
}

