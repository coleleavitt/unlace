__int64 __fastcall sub_68D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, double a5)
{
  __int64 result; // rax
  __int64 next_word; // r12
  char v8; // al
  __int64 next_byte; // rdx

  if ( a4 <= 0x18u )
  {
    result = 1LL << a4;
    if ( ((1LL << a4) & 0x106017E) == 0 )
    {
      if ( (result & 0xEE00) == 0 )
        return sub_6800((__int64)"%a: interr in z380, code=%x", a5, *(_QWORD *)(a2 + 16));
LABEL_7:
      *(_BYTE *)(a3 + 5) = 1;
    }
    *(_BYTE *)(a3 + 1) = 1;
    *(_WORD *)(a3 + 6) = a4 - 1;
  }
  else
  {
    result = (unsigned __int8)(a4 - 25);
    switch ( a4 )
    {
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
        goto LABEL_7;
      case 0x30u:
        result = 8;
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 8;
        return result;
      case 0x31u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 9;
        return result;
      case 0x32u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 10;
        return result;
      case 0x33u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 12;
        return result;
      case 0x34u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 13;
        return result;
      case 0x35u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 14;
        return result;
      case 0x36u:
        *(_BYTE *)(a3 + 1) = 3;
        *(_WORD *)(a3 + 6) = 1;
        return result;
      case 0x37u:
        next_byte = (char)insn_get_next_byte();
        goto LABEL_17;
      case 0x38u:
        next_byte = (__int16)insn_get_next_word();
LABEL_17:
        *(_BYTE *)(a3 + 1) = 7;
        result = next_byte + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
        *(_QWORD *)(a3 + 16) = result;
        break;
      case 0x39u:
        next_word = (unsigned __int16)insn_get_next_word();
        v8 = insn_get_next_byte();
        *(_BYTE *)(a3 + 1) = 7;
        result = next_word | ((__int64)v8 << 16);
        *(_QWORD *)(a3 + 16) = result + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
        break;
      case 0x3Au:
        *(_BYTE *)(a3 + 1) = 5;
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a3 + 8) = (unsigned __int8)result;
        break;
      case 0x3Bu:
        *(_BYTE *)(a3 + 1) = 5;
        *(_BYTE *)(a3 + 5) = 1;
        result = (unsigned __int16)insn_get_next_word();
        *(_QWORD *)(a3 + 8) = (unsigned __int16)result;
        break;
      case 0x3Cu:
        *(_BYTE *)(a3 + 1) = 2;
        result = (unsigned __int16)insn_get_next_word();
        *(_QWORD *)(a3 + 16) = (unsigned __int16)result;
        break;
      case 0x40u:
        *(_BYTE *)(a3 + 1) = 4;
        *(_WORD *)(a3 + 6) = 13;
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a3 + 16) = (unsigned __int8)result;
        break;
      case 0x41u:
        *(_BYTE *)(a3 + 1) = 4;
        *(_WORD *)(a3 + 6) = 14;
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a3 + 16) = (unsigned __int8)result;
        break;
      case 0x42u:
        *(_BYTE *)(a3 + 1) = 4;
        *(_WORD *)(a3 + 6) = 13;
        result = *(unsigned __int8 *)(a1 + 232);
        *(_QWORD *)(a3 + 16) = result;
        break;
      case 0x43u:
        *(_BYTE *)(a3 + 1) = 4;
        *(_WORD *)(a3 + 6) = 14;
        result = *(unsigned __int8 *)(a1 + 232);
        *(_QWORD *)(a3 + 16) = result;
        break;
      case 0x44u:
        *(_BYTE *)(a3 + 1) = 4;
        *(_WORD *)(a3 + 6) = 12;
        result = *(unsigned __int8 *)(a1 + 232);
        *(_QWORD *)(a3 + 16) = result;
        break;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
        *(_BYTE *)(a3 + 1) = 8;
        *(_WORD *)(a3 + 6) = a4 - 80;
        break;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
        *(_BYTE *)(a3 + 1) = 5;
        result = a4 - 96;
        *(_QWORD *)(a3 + 8) = result;
        break;
      default:
        return sub_6800((__int64)"%a: interr in z380, code=%x", a5, *(_QWORD *)(a2 + 16));
    }
  }
  return result;
}

