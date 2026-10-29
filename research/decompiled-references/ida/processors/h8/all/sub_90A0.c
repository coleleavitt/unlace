__int64 __fastcall sub_90A0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int16 v3; // ax
  char v4; // al
  __int64 next_dword; // rax
  int next_byte; // r13d
  unsigned __int8 v7; // al
  bool v8; // cc

  v2 = *(_BYTE *)(a1 + 227);
  v3 = *(_WORD *)(a2 + 26);
  *(_BYTE *)(a2 + 81) = 2;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 82) = v3;
  v4 = *(_BYTE *)(a2 + 113);
  if ( v2 > 0x2Fu )
  {
    *(_BYTE *)(a2 + 113) = v4 | 0x40;
    next_dword = (unsigned int)insn_get_next_dword();
  }
  else
  {
    *(_BYTE *)(a2 + 113) = v4 | 0x10;
    next_dword = (__int16)insn_get_next_word();
  }
  *(_QWORD *)(a2 + 96) = next_dword;
  sub_8300(a1, a2 + 80);
  next_byte = insn_get_next_byte();
  v7 = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = v7;
  if ( (v7 & 0xF) != 0 )
    return 0;
  if ( (unsigned __int8)(next_byte - 96) <= 3u )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 0;
    *(_WORD *)(a2 + 46) = (unsigned __int8)((v7 >> 4) + 16);
    goto LABEL_6;
  }
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  *(_QWORD *)(a2 + 48) = (*(_BYTE *)(a1 + 227) >> 4) & 7;
  if ( (unsigned __int8)(next_byte - 112) > 3u )
  {
LABEL_6:
    v8 = v2 <= 0x30u;
    if ( v2 == 48 )
      goto LABEL_15;
    goto LABEL_7;
  }
  if ( *(char *)(a1 + 227) < 0 )
    return 0;
  v8 = v2 <= 0x30u;
  if ( v2 == 48 )
    goto LABEL_15;
LABEL_7:
  if ( !v8 )
  {
    if ( v2 != 56 )
      return 0;
    goto LABEL_17;
  }
  if ( v2 == 16 )
  {
LABEL_15:
    switch ( next_byte )
    {
      case 'c':
      case 's':
        *(_WORD *)(a2 + 24) = 35;
        return 1;
      case 't':
        *(_WORD *)(a2 + 24) = 31;
        return 1;
      case 'u':
        *(_WORD *)(a2 + 24) = 36;
        return 1;
      case 'v':
        *(_WORD *)(a2 + 24) = 6;
        return 1;
      case 'w':
        *(_WORD *)(a2 + 24) = 29;
        return 1;
      default:
        return 0;
    }
  }
  if ( v2 != 24 )
    return 0;
LABEL_17:
  switch ( next_byte )
  {
    case '`':
    case 'p':
      *(_WORD *)(a2 + 24) = 32;
      break;
    case 'a':
    case 'q':
      *(_WORD *)(a2 + 24) = 30;
      break;
    case 'b':
    case 'r':
      *(_WORD *)(a2 + 24) = 23;
      break;
    case 'g':
      *(_WORD *)(a2 + 24) = 34;
      break;
    default:
      return 1;
  }
  return 1;
}

