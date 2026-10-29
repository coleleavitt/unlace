__int64 __fastcall sub_C550(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  unsigned __int8 next_byte; // al
  char v7; // r12
  __int16 next_word; // ax
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // eax
  __m128i v15; // xmm2
  bool v16; // zf
  char v17; // al

  next_byte = insn_get_next_byte();
  *(_DWORD *)(a2 + 28) = 2;
  *(_WORD *)(a2 + 24) = 50;
  v7 = next_byte;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 1;
  *(_WORD *)(a2 + 86) = a4;
  if ( a3 != 120 )
  {
    if ( !(unsigned __int8)sub_BC70(a1, a2, a3, (next_byte >> 4) & 7) )
      return 0;
    if ( v7 >= 0 )
      return 1;
LABEL_11:
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    v11 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v12 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    v13 = *(_DWORD *)(a2 + 112);
    *(_WORD *)(a2 + 24) = 77;
    *(__m128i *)(a2 + 40) = v10;
    v14 = *(_DWORD *)(a2 + 72);
    v15 = _mm_loadu_si128((const __m128i *)(a2 + 96));
    *(__m128i *)(a2 + 80) = v11;
    v16 = *(_BYTE *)(a2 + 81) == 3;
    *(_DWORD *)(a2 + 72) = v13;
    *(_DWORD *)(a2 + 112) = v14;
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
    return 1;
  }
  if ( (next_byte & 0x8F) != 0 )
    return 0;
  next_word = insn_get_next_word();
  if ( next_word == 27552 )
  {
    *(_BYTE *)(a1 + 227) = v7;
    sub_83F0(a1, a2, a2 + 40, 1);
    goto LABEL_11;
  }
  if ( next_word != 27424 )
    return 0;
  *(_BYTE *)(a1 + 227) = v7;
  sub_83F0(a1, a2, a2 + 40, 1);
  return 1;
}

