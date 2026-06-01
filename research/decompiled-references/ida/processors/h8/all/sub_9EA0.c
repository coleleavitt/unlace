__int64 __fastcall sub_9EA0(__int64 a1, __int64 a2)
{
  char next_byte; // r12
  char v3; // al
  char v4; // dl
  __int64 v5; // rdx
  __int16 v6; // cx
  char v7; // al
  __int64 v8; // rdx
  __int16 v9; // cx
  __int64 v11; // rdx
  __int16 v12; // cx

  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  v4 = *(_BYTE *)(a1 + 227);
  *(_BYTE *)(a1 + 227) = v3;
  switch ( v4 )
  {
    case -64:
      *(_WORD *)(a2 + 24) = 57;
      if ( next_byte == 80 )
        goto LABEL_51;
      if ( next_byte != 82 )
        return 0;
      goto LABEL_27;
    case -62:
      *(_WORD *)(a2 + 24) = 103;
      if ( next_byte != 80 )
        goto LABEL_16;
      goto LABEL_3;
    case -61:
      if ( next_byte != 82 )
        return 0;
      *(_DWORD *)(a2 + 28) = 3;
      v11 = a2 + 40;
      v12 = 12;
      *(_WORD *)(a2 + 24) = 107;
      goto LABEL_9;
    case -60:
      *(_WORD *)(a2 + 24) = 57;
      if ( next_byte == 80 )
        goto LABEL_37;
      goto LABEL_45;
    case -58:
      *(_WORD *)(a2 + 24) = 103;
      if ( next_byte == 80 )
        goto LABEL_35;
      goto LABEL_21;
    case -57:
      if ( next_byte != 82 )
        return 0;
      *(_WORD *)(a2 + 24) = 107;
      goto LABEL_8;
    case -54:
      *(_WORD *)(a2 + 24) = 105;
      if ( next_byte == 80 )
        goto LABEL_3;
LABEL_16:
      if ( next_byte == 82 )
        goto LABEL_17;
      return 0;
    case -53:
      if ( next_byte != 82 )
        return 0;
      *(_WORD *)(a2 + 24) = 108;
      goto LABEL_17;
    case -52:
      *(_WORD *)(a2 + 24) = 58;
      if ( next_byte == 80 )
        goto LABEL_37;
LABEL_45:
      if ( next_byte == 82 )
        goto LABEL_33;
      return 0;
    case -50:
      *(_WORD *)(a2 + 24) = 105;
      if ( next_byte == 80 )
        goto LABEL_35;
LABEL_21:
      if ( next_byte == 82 )
        goto LABEL_8;
      return 0;
    case -49:
      if ( next_byte != 82 )
        return 0;
      *(_WORD *)(a2 + 24) = 108;
      goto LABEL_8;
    case -48:
      *(_WORD *)(a2 + 24) = 42;
      if ( next_byte == 81 )
      {
LABEL_51:
        *(_DWORD *)(a2 + 28) = 1;
        v5 = a2 + 40;
        v6 = 8;
        goto LABEL_4;
      }
      if ( next_byte != 83 )
        return 0;
LABEL_27:
      *(_DWORD *)(a2 + 28) = 2;
      v11 = a2 + 40;
      v12 = 10;
      goto LABEL_9;
    case -46:
      *(_WORD *)(a2 + 24) = 104;
      if ( next_byte != 81 )
        goto LABEL_29;
      goto LABEL_3;
    case -44:
      *(_WORD *)(a2 + 24) = 42;
      if ( next_byte != 81 )
        goto LABEL_32;
      goto LABEL_37;
    case -42:
      *(_WORD *)(a2 + 24) = 104;
      if ( next_byte == 81 )
        goto LABEL_35;
      goto LABEL_7;
    case -38:
      *(_WORD *)(a2 + 24) = 106;
      if ( next_byte == 81 )
      {
LABEL_3:
        *(_DWORD *)(a2 + 28) = 2;
        v5 = a2 + 40;
        v6 = 10;
        goto LABEL_4;
      }
LABEL_29:
      if ( next_byte != 83 )
        return 0;
LABEL_17:
      *(_DWORD *)(a2 + 28) = 3;
      v11 = a2 + 40;
      v12 = 12;
      goto LABEL_9;
    case -36:
      *(_WORD *)(a2 + 24) = 43;
      if ( next_byte == 81 )
      {
LABEL_37:
        *(_DWORD *)(a2 + 28) = 1;
        v5 = a2 + 40;
        v6 = 292;
        goto LABEL_4;
      }
LABEL_32:
      if ( next_byte != 83 )
        return 0;
LABEL_33:
      *(_DWORD *)(a2 + 28) = 2;
      v11 = a2 + 40;
      v12 = 548;
      goto LABEL_9;
    case -34:
      *(_WORD *)(a2 + 24) = 106;
      if ( next_byte == 81 )
      {
LABEL_35:
        *(_DWORD *)(a2 + 28) = 2;
        v5 = a2 + 40;
        v6 = 548;
LABEL_4:
        v7 = sub_84D0(a1, a2, v5, v6);
        v8 = a2 + 80;
        v9 = 9;
        if ( v7 )
          return sub_84D0(a1, a2, v8, v9);
        return 0;
      }
LABEL_7:
      if ( next_byte != 83 )
        return 0;
LABEL_8:
      *(_DWORD *)(a2 + 28) = 3;
      v11 = a2 + 40;
      v12 = 1060;
LABEL_9:
      if ( !(unsigned __int8)sub_84D0(a1, a2, v11, v12) )
        return 0;
      v8 = a2 + 80;
      v9 = 11;
      return sub_84D0(a1, a2, v8, v9);
    default:
      return 0;
  }
}

