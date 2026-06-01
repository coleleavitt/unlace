__int64 __fastcall sub_B930(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v3; // r13
  unsigned __int8 v5; // bp
  char v6; // r14
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r9
  __int64 v10; // rdx
  _BOOL4 v11; // eax
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  int v14; // eax
  int v15; // edx
  __m128i v16; // xmm2
  __int16 v17; // ax
  char v18; // al
  int v19; // eax
  __int16 v20; // bp
  unsigned __int8 v21; // al
  unsigned __int8 v22; // r13
  __int16 v23; // ax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v3 = next_byte & 0xF;
  if ( (next_byte & 0xFu) > 9 )
    return 0;
  v5 = next_byte;
  v6 = insn_get_next_byte();
  v7 = insn_get_next_byte();
  v8 = v7;
  if ( (v5 & 8) != 0 )
  {
    if ( v6 != 122 )
    {
      if ( v3 == 8 )
      {
        if ( v6 == 16 )
        {
          v17 = 74;
        }
        else
        {
          v17 = 75;
          if ( v6 != 17 )
            return 0;
        }
        *(_WORD *)(a2 + 24) = v17;
        v18 = v8 & 0xF0;
        if ( (v8 & 0xF0) == 0x10 )
        {
          v19 = 2;
        }
        else if ( v18 == 48 )
        {
          v19 = 3;
        }
        else
        {
          if ( v18 )
            return 0;
          v19 = 1;
        }
        *(_DWORD *)(a2 + 28) = v19;
        if ( (unsigned __int8)sub_84D0(a1, a2, a2 + 40, 8) && sub_7A80(a2, a2 + 80, v8, 0x25u, 0) )
          return *(unsigned __int16 *)(a2 + 26);
      }
      return 0;
    }
    return sub_9D50(a1, a2, v7, *(_BYTE *)(a1 + 227) >> 4, 0);
  }
  else
  {
    v9 = v5 >> 4;
    if ( v6 == 106 )
    {
      *(_DWORD *)(a2 + 28) = 1;
      v10 = a2 + 40;
      if ( (v9 & 8) != 0 )
        return 0;
    }
    else
    {
      if ( v6 != 107 )
        return 0;
      v10 = a2 + 40;
      v11 = (v9 & 8) != 0;
      v9 &= ~8u;
      *(_DWORD *)(a2 + 28) = v11 + 2;
    }
    sub_8440(a1, a2, v10, v3, 1, v9);
    if ( (v5 & 0xC) == 0 )
    {
      *(_WORD *)(a2 + 24) = 54;
      sub_7A80(a2, a2 + 80, v8, 0x25u, 0);
      if ( (v8 & 0xF0) == 0x20 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( (v8 & 0xF0) == 0xA0 )
      {
        v12 = _mm_loadu_si128((const __m128i *)(a2 + 40));
        v13 = _mm_loadu_si128((const __m128i *)(a2 + 56));
        v14 = *(_DWORD *)(a2 + 72);
        v15 = *(_DWORD *)(a2 + 112);
        *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
        v16 = _mm_loadu_si128((const __m128i *)(a2 + 96));
        *(__m128i *)(a2 + 80) = v12;
        *(_DWORD *)(a2 + 72) = v15;
        *(_DWORD *)(a2 + 112) = v14;
        *(_BYTE *)(a2 + 40) = 0;
        *(_BYTE *)(a2 + 80) = 1;
        *(__m128i *)(a2 + 56) = v16;
        *(__m128i *)(a2 + 96) = v13;
        return *(unsigned __int16 *)(a2 + 26);
      }
      return 0;
    }
    v20 = (unsigned __int8)insn_get_next_byte();
    v21 = insn_get_next_byte();
    v22 = v21;
    if ( v8 == 40 )
    {
      if ( (unsigned __int8)sub_6AB0(a2, v20, v21, 7) || (unsigned __int8)sub_79B0(a2, v20, v22) )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    }
    if ( v8 != 44 || (v21 & 0xF) != 0 || !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v20) || v22 > 0x6Fu )
      return 0;
    switch ( v22 >> 4 )
    {
      case 0:
        return 0;
      case 1:
        v23 = 1;
        break;
      case 2:
        v23 = 38;
        break;
      case 3:
        v23 = 80;
        break;
      case 4:
        v23 = 62;
        break;
      case 5:
        v23 = 85;
        break;
      case 6:
        v23 = 4;
        break;
    }
    *(_WORD *)(a2 + 24) = v23;
    return *(unsigned __int16 *)(a2 + 26);
  }
}

