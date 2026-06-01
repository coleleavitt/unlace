__int64 __fastcall sub_9510(__int64 a1, __int64 a2)
{
  char next_byte; // al
  unsigned __int8 v3; // al
  int v5; // eax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte == 92 || next_byte == -44 )
  {
    v5 = 2;
    *(_WORD *)(a2 + 24) = 44;
    if ( *(_BYTE *)(a1 + 227) == 92 )
      v5 = 1;
    *(_DWORD *)(a2 + 28) = v5;
    if ( (unsigned __int16)insn_get_next_word() == 22927 )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 224) & 8) == 0 )
    return 0;
  *(_WORD *)(a2 + 24) = 89;
  v3 = *(_BYTE *)(a1 + 227);
  if ( v3 == 0xA4 )
  {
    *(_DWORD *)(a2 + 28) = 2;
    return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    if ( v3 <= 0xA4u )
    {
      if ( v3 != 0x84 )
      {
        if ( v3 == 0x94 )
        {
          *(_DWORD *)(a2 + 28) = 1;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      *(_WORD *)(a2 + 24) = 90;
      *(_DWORD *)(a2 + 28) = 1;
      if ( (unsigned __int8)sub_84D0(a1, a2, a2 + 40, 21) )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    }
    if ( v3 != 0xB4 )
      return 0;
    *(_DWORD *)(a2 + 28) = 3;
    return *(unsigned __int16 *)(a2 + 26);
  }
}

