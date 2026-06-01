__int64 __fastcall sub_B2F0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned int v3; // ebp
  int v4; // ecx
  char v5; // dl
  char v6; // al
  __int16 v7; // ax
  char v8; // r12
  char v9; // r14
  unsigned __int8 v10; // r15
  __int16 v12; // ax

  next_byte = insn_get_next_byte();
  v3 = (char)next_byte;
  *(_BYTE *)(a1 + 227) = next_byte;
  v4 = *(_DWORD *)(a2 + 28);
  v5 = next_byte >> 4;
  *(_BYTE *)(a2 + 41) = 3;
  v6 = v4 - 1;
  if ( !v4 )
    v6 = 0;
  *(_BYTE *)(a2 + 45) = v6;
  v7 = *(_WORD *)(a1 + 224) > 0xFFFu;
  *(_BYTE *)(a2 + 72) = 0;
  *(_WORD *)(a2 + 46) = (v5 & 7) + 32 * v7;
  v8 = *(_BYTE *)(a1 + 227) & 0xF;
  v9 = insn_get_next_byte();
  v10 = insn_get_next_byte();
  if ( v8 != 5 )
  {
    if ( v8 == 1 )
    {
      if ( (v9 & 0xEF) != 9 )
        return 0;
    }
    else
    {
      if ( v8 )
        return 0;
      if ( (v9 & 0xEF) != 0xE )
      {
        if ( sub_7C50(a2, v9, v10, 0, (v3 >> 31) + 1) || sub_7E30(a2, v9, v10, 16) || sub_A5C0(a1, a2, v9, v10) )
          return *(unsigned __int16 *)(a2 + 26);
        if ( (~v9 & 0xF0) == 0 )
        {
          if ( !(unsigned __int8)sub_8D00(a1, a2, v9, v10, 1) )
            return 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
    }
    if ( sub_8180(a2, a2 + 80, v9, v10, 3, 0x2025u) )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  *(_DWORD *)(a2 + 28) = (v3 >> 31) + 1;
  if ( !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v9) || v10 > 0x6Fu )
    return 0;
  switch ( v10 >> 4 )
  {
    case 0:
      return 0;
    case 1:
      v12 = 1;
      break;
    case 2:
      v12 = 38;
      break;
    case 3:
      v12 = 80;
      break;
    case 4:
      v12 = 62;
      break;
    case 5:
      v12 = 85;
      break;
    case 6:
      v12 = 4;
      break;
  }
  *(_WORD *)(a2 + 24) = v12;
  return *(unsigned __int16 *)(a2 + 26);
}

