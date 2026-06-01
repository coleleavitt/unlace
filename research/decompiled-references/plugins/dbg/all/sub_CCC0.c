unsigned __int64 __fastcall sub_CCC0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm1
  unsigned __int16 v5; // cx
  unsigned __int64 v6; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-1D8h]
  __int64 v13; // [rsp+18h] [rbp-1D0h]
  _QWORD v14[5]; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i *v15; // [rsp+48h] [rbp-1A0h]
  __int64 v16; // [rsp+1A8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+1B8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 12) )
  {
    v4 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 16));
    v12 = *(unsigned int *)(a3 + 12);
    v5 = *(_WORD *)(a3 + 4);
    LODWORD(v13) = *(_DWORD *)(a3 + 20);
    LODWORD(v11) = v5;
    v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned __int16 *)(a3 + 6)), v4).m128i_u64[0];
    HIDWORD(v11) = *(_DWORD *)(a3 + 8);
    *(_QWORD *)((char *)&v11 + 4) = v6;
    sub_5EA0((__int64)v14, a2, 0);
    v14[0] = &off_12BB8;
    v16 = a1;
    if ( (unsigned __int8)sub_C980(v15, a2, (unsigned __int16 *)&v11, 0) && v15[4].m128i_i64[0] )
    {
      sub_5800((__int64)"Loading COFF symbols...\n", a2, v7, v8, v9, v10, v11, v12, v13);
      sub_74B0((__int64)v14, *(_QWORD *)(a1 + 8), 0, 0, 1, nullptr);
    }
    v14[0] = &off_12BB8;
    sub_47F0(v14);
  }
  return v17 - __readfsqword(0x28u);
}
