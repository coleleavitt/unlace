__int64 __fastcall sub_123C0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  unsigned __int16 next_word; // ax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int16 v9; // dx
  __int16 v10; // ax

  v2 = (_BYTE *)(a2 + 41);
  *(_QWORD *)(a2 + 24) = 0;
  do
  {
    *v2 = 0;
    v2 += 80;
    *(v2 - 40) = 0;
  }
  while ( (_BYTE *)(a2 + 361) != v2 );
  if ( (*(_BYTE *)(a1 + 468) & 0x10) != 0 || (get_flags_ex(*(_QWORD *)(a2 + 16) - 1LL, 4) & 0x200) == 0 )
    return 0;
  next_word = insn_get_next_word(a2);
  if ( (~(_BYTE)next_word & 3) == 0 )
  {
    LOWORD(v6) = 4;
    v7 = 4;
    if ( (~(_BYTE)next_word & 0x1C) != 0 )
      goto LABEL_9;
    v9 = next_word & 0x7F;
    if ( v9 == 63 )
    {
      LOWORD(v6) = 8;
      v7 = 8;
      goto LABEL_9;
    }
    if ( (next_word & 0x3F) == 0x1F )
    {
      LOWORD(v6) = 6;
      v7 = 6;
      goto LABEL_9;
    }
    if ( v9 == 127 )
    {
      v10 = (next_word >> 12) & 7;
      if ( v10 == 7 )
      {
        LOWORD(v6) = 12;
        v7 = 12;
      }
      else
      {
        v6 = 2 * (unsigned __int16)(v10 + 5);
        v7 = v6;
      }
      goto LABEL_9;
    }
    return 0;
  }
  if ( !next_word )
    return 0;
  LOWORD(v6) = 2;
  v7 = 2;
LABEL_9:
  *(_BYTE *)(a2 + 44) |= 0x10u;
  v8 = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a2 + 24) = 527;
  *(_WORD *)(a2 + 26) = v6;
  *(_QWORD *)(a2 + 48) = v7;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 2;
  remember_problem(7, v8, "Unsupported instruction");
  return *(unsigned __int16 *)(a2 + 26);
}

