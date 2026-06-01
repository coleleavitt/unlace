__int64 __fastcall sub_8DA0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int16 v3; // ax
  unsigned __int8 next_byte; // al
  char v5; // al
  __int16 v7; // ax
  unsigned __int8 v8; // al
  bool v9; // zf
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int8 v13; // dl
  bool v14; // cf
  __int16 v15; // ax
  unsigned __int8 v16; // al
  __int16 v17; // ax
  char v18; // al
  int v19; // eax
  __int16 v20; // ax
  __int64 next_dword; // rax
  int v22; // eax
  __int16 v23; // ax

  v2 = *(_BYTE *)(a1 + 227);
  if ( v2 == 64 )
  {
    v3 = 43;
  }
  else
  {
    if ( v2 != 65 )
      return 0;
    v3 = 44;
  }
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = v3;
  *(_WORD *)(a2 + 24) = 50;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte > 0x78u )
    return 0;
  if ( next_byte > 0x68u )
  {
    switch ( next_byte )
    {
      case 'i':
        v12 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v12;
        if ( (v12 & 0xF) != 0 )
          return 0;
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 45) = 1;
        v13 = *(_BYTE *)(a1 + 227);
        v14 = *(_WORD *)(a1 + 224) < 0xFFFu;
        v9 = *(_WORD *)(a1 + 224) == 4095;
        *(_BYTE *)(a2 + 72) = 0;
        v15 = ((v13 >> 4) & 7) + 32 * (!v14 && !v9);
        v9 = *(_WORD *)(a2 + 24) == 50;
        *(_WORD *)(a2 + 46) = v15;
        if ( v9 )
          goto LABEL_34;
        return 1;
      case 'k':
        *(_BYTE *)(a2 + 41) = 2;
        *(_BYTE *)(a2 + 45) = 1;
        v18 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v18;
        v19 = v18 & 0x70;
        if ( v19 )
        {
          if ( (_BYTE)v19 != 32 )
            return 0;
          v20 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 73) |= 0x40u;
          *(_BYTE *)(a2 + 42) = v20;
          next_dword = (unsigned int)insn_get_next_dword();
        }
        else
        {
          v23 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 73) |= 0x10u;
          *(_BYTE *)(a2 + 42) = v23;
          next_dword = (__int16)insn_get_next_word();
        }
        *(_QWORD *)(a2 + 56) = next_dword;
        sub_8300(a1, a2 + 40);
        if ( *(_WORD *)(a2 + 24) != 50 )
          return 1;
LABEL_34:
        v22 = 2;
        break;
      case 'm':
        v16 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v16;
        if ( (v16 & 0xF) != 0 )
          return 0;
        v14 = *(_WORD *)(a1 + 224) < 0xFFFu;
        v9 = *(_WORD *)(a1 + 224) == 4095;
        *(_BYTE *)(a2 + 41) = 3;
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 72) = 19;
        v17 = 32 * (!v14 && !v9) + ((v16 >> 4) & 7);
        v9 = *(_WORD *)(a2 + 24) == 50;
        *(_WORD *)(a2 + 46) = v17;
        if ( v9 )
          goto LABEL_34;
        return 1;
      case 'o':
        v5 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v5;
        if ( (v5 & 0xF) != 0 )
          return 0;
        sub_8370(a1, a2, a2 + 40, 1);
        if ( *(_WORD *)(a2 + 24) == 50 )
          goto LABEL_34;
        return 1;
      case 'x':
        v10 = insn_get_next_byte();
        *(_BYTE *)(a1 + 227) = v10;
        if ( (v10 & 0x8F) != 0 )
          return 0;
        if ( (unsigned __int8)insn_get_next_byte() != 107 )
          return 0;
        v11 = insn_get_next_byte();
        *(_BYTE *)(a1 + 228) = v11;
        if ( (v11 & 0x70) != 0x20 )
          return 0;
        sub_83F0(a1, a2, a2 + 40, 1);
        *(_BYTE *)(a1 + 227) = *(_BYTE *)(a1 + 228);
        if ( *(_WORD *)(a2 + 24) == 50 )
          goto LABEL_34;
        return 1;
      default:
        return 0;
    }
    goto LABEL_36;
  }
  if ( next_byte == 6 )
  {
    *(_WORD *)(a2 + 24) = 5;
  }
  else if ( next_byte > 6u )
  {
    if ( next_byte != 7 )
      return 0;
  }
  else
  {
    if ( next_byte != 4 )
    {
      if ( next_byte == 5 )
      {
        *(_WORD *)(a2 + 24) = 86;
        goto LABEL_15;
      }
      return 0;
    }
    *(_WORD *)(a2 + 24) = 63;
  }
LABEL_15:
  v7 = *(_WORD *)(a2 + 26);
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 42) = v7;
  v8 = insn_get_next_byte();
  v9 = *(_WORD *)(a2 + 24) == 50;
  *(_QWORD *)(a2 + 48) = v8;
  if ( v9 )
  {
    v22 = 1;
LABEL_36:
    *(_DWORD *)(a2 + 28) = v22;
  }
  return 1;
}

