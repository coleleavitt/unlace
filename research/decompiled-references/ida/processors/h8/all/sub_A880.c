__int64 __fastcall sub_A880(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // rax
  int v12; // eax
  __m128i v13; // xmm0
  __m128i v14; // xmm0

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v9 = next_byte >> 4;
  if ( next_byte >> 4 == 3 )
  {
    *(_WORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 28) = 3;
    if ( sub_7A80(a3, a3 + 40, *(_BYTE *)(a1 + 227) & 7, 0x25u, 0) )
    {
      v12 = *(_DWORD *)(a3 + 72);
      v13 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      *(_BYTE *)(a3 + 41) = 5;
      *(_QWORD *)(a3 + 48) = 4;
      *(_DWORD *)(a3 + 112) = v12;
      LOBYTE(v12) = *(_BYTE *)(a3 + 28);
      *(__m128i *)(a3 + 80) = v13;
      v14 = _mm_loadu_si128((const __m128i *)(a3 + 56));
      *(_BYTE *)(a3 + 80) = 1;
      *(_BYTE *)(a3 + 45) = v12 - 1;
      *(__m128i *)(a3 + 96) = v14;
      if ( (*(_BYTE *)(a1 + 227) & 8) == 0 )
        *(_BYTE *)(a3 + 44) &= ~8u;
      return *(unsigned __int16 *)(a3 + 26);
    }
    return 0;
  }
  if ( v9 == 7 )
  {
    *(_WORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 28) = 3;
    v10 = (-(__int64)((*(_BYTE *)(a1 + 227) & 8) == 0) & 0xFFFFFFFFFFFFFFFALL) + 8;
  }
  else
  {
    if ( v9 != 15 )
    {
      if ( (unsigned __int8)sub_A790(a1, a3, a2, v9) )
        return *(unsigned __int16 *)(a3 + 26);
      return 0;
    }
    *(_DWORD *)(a3 + 28) = 3;
    if ( (next_byte & 8) != 0 )
      a5 = a4;
    *(_WORD *)(a3 + 24) = a5;
    v10 = (-(__int64)((*(_BYTE *)(a1 + 227) & 8) == 0) & 0xFFFFFFFFFFFFFFF2LL) + 16;
  }
  *(_BYTE *)(a3 + 41) = 5;
  *(_QWORD *)(a3 + 48) = v10;
  *(_BYTE *)(a3 + 45) = 2;
  if ( sub_7A80(a3, a3 + 80, *(_BYTE *)(a1 + 227) & 7, 0x25u, 0) )
    return *(unsigned __int16 *)(a3 + 26);
  return 0;
}

