unsigned __int64 __fastcall sub_313910(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, double a4, __m128 a5)
{
  int v7; // ecx
  unsigned __int64 v8; // rax
  __m128i v9; // xmm1
  int v10; // ecx
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_312B80(a1, a4);
  if ( (a3 & a2) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCA1Eu, a4);
    BUG();
  }
  if ( a3 | a2 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = 5;
    if ( v7 == 8 )
    {
      *(_QWORD *)(a1 + 8) = a2;
    }
    else
    {
      v8 = (1LL << (8 * (unsigned __int8)v7)) - 1;
      if ( v8 < a2 || (*(_QWORD *)(a1 + 8) = a2, v8 < a3) )
        sub_312A40(a4);
    }
    *(_QWORD *)(a1 + 16) = a3;
    sub_312F60(a1, a4, a5);
    if ( (*(_DWORD *)a1 & 0xF) == 5 )
    {
      v9 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v10 = *(_DWORD *)(a1 + 4);
      v11 = _mm_or_si128(_mm_srli_si128(v9, 8), v9).m128i_u64[0];
      v12 = v11;
      if ( v10 != 8 )
        v12 = (-1LL << (8 * (unsigned __int8)v10)) | v11;
      v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)-v12, (__m128i)(unsigned __int64)-v12);
      v14 = _mm_unpackhi_epi64(v9, v13);
      v15 = v14;
      sub_312B80(a1, *(double *)v13.m128i_i64);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      sub_3170B0((__int64 *)(a1 + 8), &v15, 0.0, (__m128)v14);
    }
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  return v16 - __readfsqword(0x28u);
}

