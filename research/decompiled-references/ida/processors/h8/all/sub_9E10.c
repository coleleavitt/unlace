__int64 __fastcall sub_9E10(__int64 a1, __int64 a2)
{
  char next_byte; // bp
  unsigned __int8 v4; // al
  int v6; // esi
  __int16 v7; // ax
  char v8; // cl
  __int16 v9; // dx

  next_byte = insn_get_next_byte();
  v4 = insn_get_next_byte();
  if ( next_byte != 123 || (v4 & 0x8F) != 0xC )
    return 0;
  v6 = *(_DWORD *)(a2 + 28);
  *(_BYTE *)(a2 + 41) = 3;
  *(_WORD *)(a2 + 24) = 83;
  v7 = v4 >> 4;
  v8 = v6 - 1;
  if ( !v6 )
    v8 = 0;
  *(_BYTE *)(a2 + 45) = v8;
  v9 = *(_WORD *)(a1 + 224) > 0xFFFu;
  *(_BYTE *)(a2 + 72) = 0;
  *(_WORD *)(a2 + 46) = 32 * v9 + v7;
  return 1;
}

