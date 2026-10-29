__int64 __fastcall sub_B360(__int64 a1)
{
  unsigned __int8 next_byte; // al
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 sreg; // rax
  __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rbp
  bool v11; // cf
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rbp
  __int64 v15; // rsi
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  next_byte = insn_get_next_byte();
  if ( next_byte > 0x6Au )
  {
    if ( next_byte <= 0x9Fu )
    {
      if ( next_byte > 0x79u )
      {
        switch ( next_byte )
        {
          case 0x7Au:
            *(_WORD *)(a1 + 24) = 52;
LABEL_28:
            *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
            sreg = get_sreg();
            sub_51B0(a1, a1 + 40, 0, sreg == 0);
            v8 = a1 + 80;
            v9 = get_sreg() == 0 ? 16 : 8;
LABEL_29:
            v10 = 5;
            sub_4E70(a1, v8, v9);
            v11 = get_sreg() == 0;
LABEL_30:
            v12 = v11 + v10;
            v13 = insn_get_next_byte();
            v14 = *(_QWORD *)(a1 + 8) + v12;
            *(_BYTE *)(a1 + 121) = 7;
            *(_QWORD *)(a1 + 136) = v13 + v14;
            return *(unsigned __int16 *)(a1 + 26);
          case 0x8Bu:
            *(_WORD *)(a1 + 24) = 90;
            goto LABEL_35;
          case 0x8Fu:
            *(_WORD *)(a1 + 24) = 90;
            goto LABEL_32;
          case 0x9Bu:
            *(_WORD *)(a1 + 24) = 74;
LABEL_35:
            *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
            goto LABEL_36;
          case 0x9Fu:
            *(_WORD *)(a1 + 24) = 74;
LABEL_32:
            *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
            v15 = a1 + 40;
            v16 = get_sreg() == 0;
            goto LABEL_33;
          default:
            return 0;
        }
      }
      return 0;
    }
    if ( next_byte == 0xF3 )
    {
      *(_WORD *)(a1 + 24) = 76;
    }
    else
    {
      if ( next_byte > 0xF3u )
      {
        if ( next_byte == 0xFB )
        {
          *(_WORD *)(a1 + 24) = 173;
          *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
          v6 = get_sreg();
          sub_51B0(a1, a1 + 40, 2, v6 == 0);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = 3;
          return *(unsigned __int16 *)(a1 + 26);
        }
        return 0;
      }
      if ( next_byte != 0xE3 )
      {
        if ( next_byte == 0xE5 )
        {
          *(_WORD *)(a1 + 24) = 172;
          *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
          v4 = get_sreg();
          sub_51B0(a1, a1 + 40, 2, v4 == 0);
          *(_BYTE *)(a1 + 81) = 1;
          *(_WORD *)(a1 + 86) = 4;
          return *(unsigned __int16 *)(a1 + 26);
        }
        return 0;
      }
      *(_WORD *)(a1 + 24) = 75;
    }
    *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( next_byte > 0x3Du )
  {
    switch ( next_byte )
    {
      case '>':
        *(_WORD *)(a1 + 24) = 72;
        *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
        v5 = get_sreg();
        goto LABEL_21;
      case 'J':
        *(_WORD *)(a1 + 24) = 28;
        goto LABEL_43;
      case 'N':
        *(_WORD *)(a1 + 24) = 28;
        goto LABEL_41;
      case 'Z':
        *(_WORD *)(a1 + 24) = 26;
LABEL_43:
        *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
        v20 = get_sreg();
        sub_51B0(a1, a1 + 80, 0, v20 == 0);
        v8 = a1 + 40;
        v9 = get_sreg() == 0 ? 16 : 8;
        goto LABEL_29;
      case '^':
        *(_WORD *)(a1 + 24) = 26;
LABEL_41:
        v10 = 6;
        *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
        v18 = get_sreg();
        sub_4C30(a1, a1 + 80, 0, v18 == 0);
        v19 = get_sreg();
        sub_4E70(a1, a1 + 40, v19 == 0 ? 16 : 8);
        v11 = get_sreg() == 0;
        goto LABEL_30;
      case 'j':
        *(_WORD *)(a1 + 24) = 50;
        goto LABEL_28;
      default:
        return 0;
    }
  }
  if ( next_byte == 27 )
  {
    *(_WORD *)(a1 + 24) = 104;
    *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
LABEL_36:
    v17 = get_sreg();
    sub_51B0(a1, a1 + 40, 0, v17 == 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_WORD *)(a1 + 86) = 3;
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( next_byte > 0x1Bu )
  {
    if ( next_byte == 31 )
    {
      *(_WORD *)(a1 + 24) = 104;
      v21 = get_sreg();
      v15 = a1 + 40;
      v16 = 1;
      *(_DWORD *)(a1 + 28) = (v21 == 0) + 1;
LABEL_33:
      sub_4C30(a1, v15, 1, v16);
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = 3;
      return *(unsigned __int16 *)(a1 + 26);
    }
    if ( next_byte == 46 )
    {
      *(_WORD *)(a1 + 24) = 71;
      *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
      v5 = get_sreg();
LABEL_21:
      get_sreg();
      sub_4C30(a1, a1 + 40, 0, v5 == 0);
      return *(unsigned __int16 *)(a1 + 26);
    }
    return 0;
  }
  if ( next_byte == 5 )
  {
    *(_WORD *)(a1 + 24) = 102;
    *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
    v22 = get_sreg();
    sub_51B0(a1, a1 + 40, 0, v22 == 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_WORD *)(a1 + 86) = 4;
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( next_byte != 6 )
    return 0;
  *(_WORD *)(a1 + 24) = 102;
  *(_DWORD *)(a1 + 28) = (get_sreg() == 0) + 1;
  v2 = get_sreg();
  sub_4C30(a1, a1 + 40, 1, v2 == 0);
  *(_BYTE *)(a1 + 81) = 1;
  *(_WORD *)(a1 + 86) = 4;
  return *(unsigned __int16 *)(a1 + 26);
}

