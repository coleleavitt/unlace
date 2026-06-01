__int64 __fastcall sub_B130(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v3; // dl
  __int16 v4; // ax
  __int16 v5; // r12
  char v7; // al
  __int16 v8; // cx
  unsigned __int8 v9; // r12

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v3 = next_byte >> 4;
  if ( next_byte <= 0x6Fu )
  {
    v4 = 54;
    if ( v3 )
    {
      switch ( v3 )
      {
        case 2:
          v4 = 38;
          break;
        case 3:
          v4 = 80;
          break;
        case 4:
          v4 = 62;
          break;
        case 5:
          v4 = 85;
          break;
        case 6:
          v4 = 4;
          break;
        default:
          v4 = 1;
          break;
      }
    }
    *(_WORD *)(a2 + 24) = v4;
    *(_DWORD *)(a2 + 28) = 3;
    v5 = ((*(_BYTE *)(a1 + 227) & 8) == 0) + 3;
    if ( sub_7A80(a2, a2 + 80, *(_BYTE *)(a1 + 227) & 7, 0x25u, 0) && (unsigned __int8)sub_84D0(a1, a2, a2 + 40, v5) )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  if ( (unsigned __int8)(v3 - 8) <= 5u )
    return sub_9D50(a1, a2, next_byte, 0, 1);
  *(_DWORD *)(a2 + 28) = 3;
  *(_WORD *)(a2 + 24) = 54;
  v7 = *(_BYTE *)(a1 + 227);
  if ( v7 == 116 )
  {
    v8 = 4;
  }
  else
  {
    v8 = 3;
    if ( v7 != 124 )
      return 0;
  }
  if ( !(unsigned __int8)sub_84D0(a1, a2, a2 + 40, v8) )
    return 0;
  v9 = insn_get_next_byte();
  if ( (unsigned __int8)insn_get_next_byte() || !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v9) )
    return 0;
  return *(unsigned __int16 *)(a2 + 26);
}

