__int64 __fastcall sub_69B0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 next_byte; // al
  char v5; // cl
  __int16 v6; // ax
  int v7; // eax
  char v8; // dl
  signed int v9; // eax
  __int64 v10; // rax
  __int16 v12; // ax

  *(_BYTE *)(a2 + 1) = 4;
  *(_BYTE *)(a2 + 5) = a3;
  next_byte = insn_get_next_byte();
  v3 = next_byte;
  if ( (next_byte & 0x20) == 0 )
  {
    *(_WORD *)(a2 + 6) = *((_WORD *)qword_10580 + ((int)next_byte >> 6));
    v10 = next_byte & 0x1F;
    if ( (v3 & 0x10) != 0 )
    {
      *(_QWORD *)(a2 + 16) = v10 | 0xFFFFFFFFFFFFFFE0LL;
      return 1;
    }
LABEL_15:
    *(_QWORD *)(a2 + 16) = v10;
    return 1;
  }
  if ( (next_byte & 0xE4) == 0xE0 )
  {
    if ( (~next_byte & 3) == 0 )
    {
      v5 = next_byte & 0xE7;
      if ( (next_byte & 0xE7) != 0xE3 )
        goto LABEL_20;
      goto LABEL_22;
    }
    if ( (unsigned __int16)(*(_WORD *)(a1 + 24) - 95) <= 1u )
      *(_BYTE *)(a2 + 1) = 8;
    *(_WORD *)(a2 + 6) = *((_WORD *)qword_10580 + (((int)next_byte >> 3) & 3));
    if ( (next_byte & 2) != 0 )
      goto LABEL_25;
    v10 = (unsigned __int8)insn_get_next_byte();
    if ( (v3 & 1) != 0 )
      v10 |= 0xFFFFFFFFFFFFFF00LL;
    goto LABEL_15;
  }
  v5 = next_byte & 0xE7;
  if ( (next_byte & 0xE7) == 0xE3 )
  {
LABEL_22:
    *(_BYTE *)(a2 + 32) |= 4u;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 24) - 95) <= 1u )
      *(_BYTE *)(a2 + 1) = 8;
    *(_WORD *)(a2 + 6) = *((_WORD *)qword_10580 + (((int)next_byte >> 3) & 3));
LABEL_25:
    *(_QWORD *)(a2 + 16) = (unsigned __int16)insn_get_next_word();
    return 1;
  }
  if ( (~next_byte & 0xC0) == 0 )
  {
    if ( (next_byte & 0xE4) == 0xE4 )
    {
      if ( (next_byte & 3) != 3 )
      {
        *(_BYTE *)(a2 + 1) = 3;
        *(_BYTE *)(a2 + 33) = next_byte & 3;
        *(_WORD *)(a2 + 6) = *((_WORD *)qword_10580 + (((int)next_byte >> 3) & 3));
        return 1;
      }
LABEL_30:
      *(_BYTE *)(a2 + 32) |= 4u;
      *(_BYTE *)(a2 + 1) = 3;
      v12 = *((_WORD *)qword_10580 + (((int)next_byte >> 3) & 3));
      *(_BYTE *)(a2 + 33) = 2;
      *(_WORD *)(a2 + 6) = v12;
      return 1;
    }
LABEL_20:
    if ( v5 != -25 )
      return 0;
    goto LABEL_30;
  }
  v6 = *((_WORD *)qword_10580 + ((int)next_byte >> 6));
  *(_WORD *)(a2 + 6) = v6;
  if ( v6 != 6 )
  {
    v7 = v3 & 0xF;
    v8 = *(_BYTE *)(a2 + 32) | (((v3 & 0x10) != 0) + 1);
    if ( (v3 & 8) != 0 )
    {
      v8 |= 0x10u;
      v9 = -(v7 | 0xFFFFFFF0);
    }
    else
    {
      v9 = v7 + 1;
    }
    *(_BYTE *)(a2 + 32) = v8;
    *(_QWORD *)(a2 + 16) = v9;
    return 1;
  }
  return 0;
}

