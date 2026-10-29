__int64 __fastcall sub_BDA0(__int64 a1, __int64 a2)
{
  char next_byte; // bp
  char v3; // r13
  unsigned int v4; // r15d
  unsigned int v6; // eax
  unsigned __int8 v7; // cl
  __m128i v8; // xmm0
  int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  int v13; // eax
  int v14; // edx
  __m128i v15; // xmm2
  bool v16; // zf
  char v17; // al

  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  if ( next_byte == 122 )
  {
    if ( *(_BYTE *)(a1 + 227) != 1 )
      return 0;
  }
  else if ( (next_byte & 0xEF) == 9 )
  {
    if ( *(_BYTE *)(a1 + 227) != 81 )
      return 0;
  }
  else if ( next_byte == 121 && *(_BYTE *)(a1 + 227) != 81 )
  {
    return 0;
  }
  LOBYTE(v6) = sub_7A80(a2, a2 + 80, v3, 0x25u, 0);
  v4 = v6;
  if ( !(_BYTE)v6 )
    return 0;
  if ( !sub_8180(a2, a2 + 40, next_byte, v3, 6, 0x26u)
    && !(unsigned __int8)sub_A200(a1, a2, a2 + 40, next_byte, v3, 6, 0) )
  {
    v7 = ((unsigned __int8)v3 >> 4) & 7;
    if ( !*(_BYTE *)(a1 + 227) && next_byte == 109 && v7 == 7 )
    {
      v8 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v9 = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a2 + 81) = 0;
      *(__m128i *)(a2 + 40) = v8;
      v10 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_WORD *)(a2 + 24) = ((unsigned __int16)v3 >> 15) + 64;
      *(_DWORD *)(a2 + 72) = v9;
      *(_BYTE *)(a2 + 40) = 0;
      *(__m128i *)(a2 + 56) = v10;
      return v4;
    }
    *(_WORD *)(a2 + 24) = 54;
    if ( !(unsigned __int8)sub_BC70(a1, a2, next_byte, v7) )
      return 0;
    if ( v3 < 0 )
    {
      v11 = _mm_loadu_si128((const __m128i *)(a2 + 40));
      v12 = _mm_loadu_si128((const __m128i *)(a2 + 56));
      v13 = *(_DWORD *)(a2 + 72);
      v14 = *(_DWORD *)(a2 + 112);
      *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v15 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(__m128i *)(a2 + 80) = v11;
      v16 = *(_BYTE *)(a2 + 81) == 3;
      *(_DWORD *)(a2 + 72) = v14;
      *(_DWORD *)(a2 + 112) = v13;
      *(_BYTE *)(a2 + 40) = 0;
      *(_BYTE *)(a2 + 80) = 1;
      *(__m128i *)(a2 + 56) = v15;
      *(__m128i *)(a2 + 96) = v12;
      if ( v16 )
      {
        v17 = *(_BYTE *)(a2 + 112);
        if ( v17 )
          *(_BYTE *)(a2 + 112) = v17 ^ 3;
      }
    }
  }
  return v4;
}

