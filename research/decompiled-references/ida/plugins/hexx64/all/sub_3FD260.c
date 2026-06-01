unsigned __int64 __fastcall sub_3FD260(__int64 a1, __m128i a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rbp
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  char v13; // al
  int dtype_size; // eax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int8 v19[16]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 832);
  v21 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v4 + 472);
  v6 = *(_DWORD *)(v4 + 468);
  sub_3F8EE0(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
  if ( *(_WORD *)(a1 + 48) == 160 )
  {
    sub_3F8EE0(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 65) || sub_CFF70() != 1 )
    {
      v7 = *(_QWORD *)(a1 + 832);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v20[0] )
        return v21 - __readfsqword(0x28u);
      v13 = getinf();
      v7 = *(_QWORD *)(a1 + 832);
      if ( (v13 & 0xF) != 1 || *(_DWORD *)(v7 + 84) != 8 )
      {
        dtype_size = get_dtype_size();
        sub_1D6310(a1, 3u, dtype_size, v20[0], 0x3BEA45E214ADDC55LL, v6, *(double *)a2.m128i_i64, 0);
        v7 = *(_QWORD *)(a1 + 832);
      }
    }
    v8 = *(int *)(v7 + 64);
    v9 = get_dtype_size();
    sub_1D6310(a1, 4u, v9, v8, 0x3BEA45E214ADDC55LL, v5, *(double *)a2.m128i_i64, 0);
  }
  if ( *(_BYTE *)(a1 + 65) == 5 )
  {
    v15 = *(_DWORD *)(a1 + 52);
    v16 = 8;
    if ( (v15 & 0x1018) != 0x1010 )
    {
      if ( (v15 & 0x1008) == 0 || (v16 = 2, (v15 & 0x1018) == 0x1008) )
        v16 = 4;
    }
    v17 = *(_QWORD *)(a1 + 72);
    v18 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v19 = 1;
    a3 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v18 + 60));
    v20[0] = 0xFFFFFFFF00000000LL;
    v20[1] = 0;
    a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), (__m128i)a3);
    *(_QWORD *)&v19[4] = a2.m128i_i64[0];
    sub_120A10((__int64)v20, (unsigned __int64 *)v18, v17, v16, -1, 0);
    sub_1D6450(a1, 12, (unsigned __int8 *)v20, v19, v19, a2, a3, a4);
    sub_11CDA0((__int64)v20);
    sub_11CDA0((__int64)v19);
  }
  v10 = *(_DWORD *)(a1 + 52);
  v11 = 8;
  if ( (v10 & 0x1018) != 0x1010 )
  {
    if ( (v10 & 0x1008) == 0 || (v11 = 2, (v10 & 0x1018) == 0x1008) )
      v11 = 4;
  }
  sub_3F7E20(a1, 0x36u, *(unsigned __int8 *)(a1 + 69), 0x3BEA45E214ADDC55LL, v5, v6, a2, a3, a4, v11);
  return v21 - __readfsqword(0x28u);
}

