__int64 __fastcall sub_9C80(__int64 a1, __int64 a2)
{
  char next_byte; // bp
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  int v6; // edx
  char v7; // si
  __int16 v8; // dx
  __int16 v9; // dx

  next_byte = insn_get_next_byte();
  v4 = insn_get_next_byte();
  if ( next_byte == 109 )
  {
    v5 = v4 >> 4;
    *(_WORD *)(a2 + 24) = 53;
    if ( ((v4 >> 4) & 8) != 0 )
      return 0;
  }
  else
  {
    if ( (v4 & 0x88) != 0 )
      return 0;
    *(_WORD *)(a2 + 24) = 53;
    v5 = v4 >> 4;
  }
  v6 = *(_DWORD *)(a2 + 28);
  *(_BYTE *)(a2 + 41) = 3;
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  *(_BYTE *)(a2 + 45) = v7;
  v8 = *(_WORD *)(a1 + 224) > 0xFFFu;
  *(_BYTE *)(a2 + 72) = 19;
  *(_WORD *)(a2 + 46) = v5 + 32 * v8;
  if ( (v4 & 8) == 0 )
  {
    *(_BYTE *)(a2 + 81) = 3;
    *(_BYTE *)(a2 + 85) = v7;
    v9 = *(_WORD *)(a1 + 224) > 0xFFFu;
    *(_BYTE *)(a2 + 112) = 19;
    *(_WORD *)(a2 + 86) = 32 * v9 + (v4 & 0xF);
    return 1;
  }
  return 0;
}

