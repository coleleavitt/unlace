void __fastcall sub_3630(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int16 flags; // bp
  __int16 v5; // ax
  bool v6; // al
  __int16 next_word; // ax
  __int16 v8; // ax

  if ( a3 == 31 )
  {
    *(_BYTE *)(a2 + 1) = 2;
    *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
    next_word = insn_get_next_word();
    *(_WORD *)(a2 + 6) = 31;
    goto LABEL_12;
  }
  if ( a3 > 0x1Fu )
  {
    if ( (a3 & 0xFFF7) == 0x37 )
    {
      *(_BYTE *)(a2 + 1) = 2;
      *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
      v8 = insn_get_next_word();
      *(_WORD *)(a2 + 6) = a3;
      next_word = *(_WORD *)(a1 + 26) + *(_WORD *)(a1 + 8) + v8;
    }
    else
    {
      if ( (a3 & 0x38) == 0 )
        goto LABEL_14;
      *(_WORD *)(a2 + 6) = a3;
      if ( a3 <= 0x2Fu )
      {
LABEL_17:
        *(_BYTE *)(a2 + 1) = 3;
        return;
      }
      *(_BYTE *)(a2 + 1) = 4;
      *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
      next_word = insn_get_next_word();
    }
LABEL_12:
    *(_WORD *)(a2 + 16) = next_word;
    return;
  }
  if ( a3 != 23 )
  {
    if ( (a3 & 0x38) != 0 )
    {
      *(_WORD *)(a2 + 6) = a3;
      goto LABEL_17;
    }
LABEL_14:
    *(_BYTE *)(a2 + 1) = 1;
    *(_WORD *)(a2 + 6) = a3;
    return;
  }
  flags = get_flags_ex();
  v5 = get_flags_ex();
  *(_BYTE *)(a2 + 1) = 5;
  if ( (flags & 0x400) != 0 )
    v6 = (v5 & 0x600) != 512;
  else
    v6 = (v5 & 0x400) != 0;
  *(_BYTE *)(a2 + 32) = v6;
  *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
  *(_QWORD *)(a2 + 8) = (unsigned __int16)insn_get_next_word();
}

