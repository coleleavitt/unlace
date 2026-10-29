__int64 __fastcall sub_4100(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 next_dword; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax

  next_byte = insn_get_next_byte(a2);
  v3 = word_141A0[next_byte];
  *(_WORD *)(a2 + 24) = v3;
  if ( next_byte == 0xFE )
  {
    v4 = insn_get_next_byte(a2);
    if ( v4 > 0x1Eu )
    {
      v3 = *(unsigned __int16 *)(a2 + 24);
    }
    else
    {
      v3 = word_14160[v4];
      *(_WORD *)(a2 + 24) = v3;
    }
  }
  if ( (unsigned __int16)v3 > 0x8Bu )
  {
    if ( (unsigned __int16)v3 > 0xDDu )
    {
      v8 = v3 - 222;
      if ( v8 > 0xBu )
        goto LABEL_25;
      if ( ((1LL << v8) & 0xC33) != 0 )
        goto LABEL_15;
      if ( ((1LL << v8) & 0x3C8) != 0 )
      {
LABEL_30:
        *(_BYTE *)(a2 + 41) = 10;
LABEL_31:
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = (unsigned int)insn_get_next_dword(a2);
        LOWORD(result) = *(_WORD *)(a2 + 26);
        return (unsigned __int16)result;
      }
    }
    else
    {
      if ( (unsigned __int16)v3 > 0xBFu )
      {
        LOWORD(v3) = v3 - 193;
        switch ( v3 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 9LL:
          case 10LL:
          case 11LL:
          case 12LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 16LL:
          case 18LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 25LL:
          case 26LL:
          case 27LL:
            goto LABEL_15;
          case 8LL:
          case 23LL:
          case 24LL:
            goto LABEL_30;
          case 17LL:
            goto LABEL_32;
          case 28LL:
            *(_BYTE *)(a2 + 41) = 9;
            LODWORD(result) = insn_get_next_dword(a2);
            v10 = *(unsigned __int16 *)(a2 + 26);
            v11 = *(_QWORD *)(a2 + 16) + v10;
            *(_QWORD *)(a2 + 48) = (unsigned int)result;
            LOWORD(result) = v10 + 4 * result;
            *(_QWORD *)(a2 + 56) = v11;
            *(_WORD *)(a2 + 26) = result;
            break;
          default:
            goto LABEL_36;
        }
        return (unsigned __int16)result;
      }
      if ( (_WORD)v3 == 167 )
      {
LABEL_50:
        next_dword = (int)insn_get_next_dword(a2);
        goto LABEL_49;
      }
      if ( (unsigned __int16)v3 > 0xA7u )
      {
LABEL_27:
        if ( (_WORD)v3 == 168 )
        {
LABEL_48:
          next_dword = (char)insn_get_next_byte(a2);
LABEL_49:
          v13 = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 45) = 9;
          LOWORD(result) = v13;
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (next_dword + *(_QWORD *)(a2 + 8) + v13);
          return (unsigned __int16)result;
        }
        v7 = 1LL << ((unsigned __int8)v3 + 87);
        if ( (v7 & 0x1FDF3D) == 0 )
        {
          if ( (v7 & 0x2020C2) != 0 )
            goto LABEL_30;
LABEL_32:
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 1;
          *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word(a2);
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        }
LABEL_15:
        LOWORD(result) = *(_WORD *)(a2 + 26);
        return (unsigned __int16)result;
      }
      if ( (unsigned __int16)v3 > 0xA0u )
        goto LABEL_30;
      v6 = 1LL << ((unsigned __int8)v3 + 116);
      if ( (v6 & 0x11EFFF) != 0 )
        goto LABEL_15;
      if ( (v6 & 0x41000) != 0 )
        goto LABEL_32;
      if ( (v6 & 0xA0000) == 0 )
      {
LABEL_25:
        if ( under_debugger )
          BUG();
        interr(10367);
        goto LABEL_27;
      }
    }
LABEL_36:
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte(a2);
    LOWORD(result) = *(_WORD *)(a2 + 26);
    return (unsigned __int16)result;
  }
  if ( (unsigned __int16)v3 <= 0x65u )
  {
    switch ( v3 )
    {
      case 0LL:
        return 0;
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 7LL:
      case 11LL:
      case 12LL:
      case 14LL:
      case 19LL:
        goto LABEL_15;
      case 6LL:
      case 13LL:
        goto LABEL_30;
      case 8LL:
        goto LABEL_37;
      case 9LL:
      case 18LL:
        goto LABEL_36;
      case 10LL:
      case 15LL:
      case 17LL:
        goto LABEL_32;
      case 16LL:
        *(_BYTE *)(a2 + 41) = 8;
        *(_BYTE *)(a2 + 45) = 0;
        LOBYTE(result) = insn_get_next_byte(a2);
        *(_QWORD *)(a2 + 48) = (unsigned __int8)result;
        v9 = *(unsigned __int16 *)(a2 + 26);
        LOWORD(result) = v9 + 2 * (unsigned __int8)result;
        *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 16) + v9;
        *(_WORD *)(a2 + 26) = result;
        return (unsigned __int16)result;
      default:
        if ( (unsigned __int16)v3 <= 0x28u )
        {
          if ( ((1LL << v3) & 0x5555500000LL) != 0 )
            goto LABEL_50;
          if ( ((1LL << v3) & 0xAAAAA00000LL) != 0 )
            goto LABEL_48;
          if ( (_WORD)v3 == 40 )
            goto LABEL_30;
          goto LABEL_25;
        }
        if ( (unsigned __int16)v3 <= 0x2Eu )
        {
          if ( ((1LL << v3) & 0x520000000000LL) != 0 )
            goto LABEL_50;
          if ( ((1LL << v3) & 0x240000000000LL) != 0 )
            goto LABEL_48;
          if ( (_WORD)v3 != 43 )
            goto LABEL_25;
          goto LABEL_15;
        }
        v14 = 1LL << ((unsigned __int8)v3 - 47);
        if ( (v14 & 0xFDFFFFFFFFFE0LL) != 0 )
          goto LABEL_15;
        if ( (v14 & 0x7020000000001ELL) != 0 )
          goto LABEL_30;
        break;
    }
    goto LABEL_48;
  }
  switch ( (__int16)v3 )
  {
    case 103:
    case 104:
    case 105:
    case 106:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
      goto LABEL_15;
    case 107:
    case 109:
      goto LABEL_36;
    case 110:
LABEL_37:
      *(_BYTE *)(a2 + 41) = 5;
      goto LABEL_31;
    case 121:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (char)insn_get_next_byte(a2);
      LOWORD(result) = *(_WORD *)(a2 + 26);
      return (unsigned __int16)result;
    case 122:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 7;
      goto LABEL_40;
    case 123:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 3;
      LODWORD(result) = insn_get_next_dword(a2);
      *(_QWORD *)(a2 + 56) = 0;
      *(_QWORD *)(a2 + 48) = (unsigned int)result;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      return (unsigned __int16)result;
    case 124:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 4;
LABEL_40:
      *(_QWORD *)(a2 + 48) = (unsigned int)insn_get_next_dword(a2);
      *(_QWORD *)(a2 + 48) |= insn_get_next_dword(a2) << 32;
      LOWORD(result) = *(_WORD *)(a2 + 26);
      break;
    case 136:
    case 137:
    case 138:
    case 139:
      goto LABEL_30;
    default:
      goto LABEL_32;
  }
  return (unsigned __int16)result;
}
