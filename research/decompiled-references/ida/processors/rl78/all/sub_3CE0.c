char __fastcall sub_3CE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  bool v7; // al
  __int64 v8; // rbx
  unsigned __int8 next_byte; // al
  unsigned __int64 v10; // rdx
  bool v11; // cc
  unsigned __int8 v12; // al
  unsigned __int16 next_word; // ax

  LOBYTE(v2) = insn_get_next_byte();
  v3 = (unsigned __int16)a111111111[(unsigned __int8)v2];
  v4 = v2 & 0xF;
  v5 = (unsigned __int8)v2 >> 4;
  *(_WORD *)(a2 + 24) = v3;
  switch ( v3 )
  {
    case 1LL:
    case 5LL:
    case 11LL:
      *(_WORD *)(a2 + 46) = 8;
      goto LABEL_3;
    case 3LL:
      v2 = v5 - 12;
      if ( v2 > 3 )
        goto LABEL_48;
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(v2) = *((char *)qword_A860 + 4 * v2);
      *(_WORD *)(a2 + 46) = v2;
      break;
    case 7LL:
      *(_BYTE *)(a2 + 41) = 8;
      *(_QWORD *)(a2 + 48) = ((unsigned __int8)v2 >> 4) & 3;
      return v2;
    case 8LL:
    case 17LL:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 14;
      LOBYTE(v2) = 14;
      return v2;
    case 10LL:
    case 19LL:
    case 20LL:
    case 55LL:
      *(_BYTE *)(a2 + 41) = 4;
      *(_WORD *)(a2 + 46) = 11;
      LOBYTE(v2) = insn_get_next_byte();
      *(_BYTE *)(a2 + 72) |= 1u;
      *(_QWORD *)(a2 + 56) = (unsigned __int8)v2;
      return v2;
    case 14LL:
    case 15LL:
    case 18LL:
    case 49LL:
    case 50LL:
    case 51LL:
    case 52LL:
    case 53LL:
      if ( v5 <= 7u )
      {
        *(_BYTE *)(a2 + 41) = 1;
        if ( (v2 & 8) != 0 )
        {
          *(_WORD *)(a2 + 46) = 0;
          LOWORD(v2) = *((char *)&qword_A840[-4] + 4 * (unsigned __int8)v4);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v2;
        }
        else
        {
          LOWORD(v2) = *((char *)qword_A840 + 4 * (unsigned __int8)v4);
          *(_WORD *)(a2 + 86) = 0;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 46) = v2;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        LOBYTE(v2) = 2 - (((_BYTE)v4 == 0) - 1);
        *(_WORD *)(a2 + 46) = 0;
        *(_WORD *)(a2 + 86) = 11;
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 113) = v2;
      }
      return v2;
    case 16LL:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 8;
      return v2;
    case 35LL:
      if ( (_BYTE)v4 == 8 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 18;
LABEL_33:
        next_byte = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 2;
        v10 = (unsigned int)next_byte + 1048064;
        v11 = next_byte <= 0x1Fu;
        v2 = (unsigned int)next_byte + 1048320;
        if ( !v11 )
          v2 = v10;
        *(_QWORD *)(a2 + 96) = v2;
      }
      else
      {
        if ( (v2 & 0x10) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 1;
          v7 = v5 > 0xDu;
          *(_WORD *)(a2 + 86) = 0;
          v8 = a2 + 40;
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 1;
          v7 = v5 > 0xDu;
          *(_WORD *)(a2 + 46) = 0;
          v8 = a2 + 80;
        }
        LOBYTE(v2) = v7 + 2;
        *(_BYTE *)(v8 + 1) = 3;
        *(_WORD *)(v8 + 6) = 11;
        *(_BYTE *)(v8 + 33) = v2;
      }
      return v2;
    case 47LL:
    case 48LL:
      insn_get_next_byte();
      v6 = extend_sign();
      *(_BYTE *)(a2 + 41) = 7;
      v2 = v6 + *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
      *(_QWORD *)(a2 + 56) = v2;
      return v2;
    case 54LL:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 0;
      if ( v5 == 8 )
      {
        v2 = (unsigned __int8)v4 - 8;
        if ( v2 > 7 )
        {
          sub_3920(v4, 0);
LABEL_46:
          if ( under_debugger )
            BUG();
          v4 = 10417;
          interr();
LABEL_48:
          sub_3900(v4);
          LOBYTE(v2) = sub_4140();
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 1;
          LOWORD(v2) = *((char *)qword_A840 + 4 * v2);
          *(_WORD *)(a2 + 86) = v2;
        }
      }
      else
      {
        switch ( (char)v4 )
        {
          case 8:
            goto LABEL_33;
          case 9:
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 11;
            LOBYTE(v2) = (v5 == 10) + 2;
            *(_BYTE *)(a2 + 113) = v2;
            break;
          case 10:
            next_word = insn_get_next_word();
            *(_BYTE *)(a2 + 114) |= 1u;
            *(_BYTE *)(a2 + 81) = 2;
            v2 = (unsigned int)next_word + 983040;
            *(_QWORD *)(a2 + 96) = v2;
            break;
          case 11:
            v12 = insn_get_next_byte();
            *(_BYTE *)(a2 + 81) = 2;
            v2 = (unsigned int)v12 + 1048320;
            *(_QWORD *)(a2 + 96) = v2;
            break;
          case 12:
          case 13:
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = 11;
            if ( (v2 & 1) != 0 )
              goto LABEL_4;
            break;
          case 14:
          case 15:
            *(_BYTE *)(a2 + 81) = 4;
            *(_WORD *)(a2 + 86) = 10;
            if ( (v2 & 1) != 0 )
              goto LABEL_4;
            break;
          default:
            return v2;
        }
      }
      break;
    case 56LL:
      *(_BYTE *)(a2 + 41) = 1;
      *(_QWORD *)(a2 + 88) = 1;
      *(_BYTE *)(a2 + 112) |= 4u;
      *(_WORD *)(a2 + 46) = (v5 != 14) + 8;
      *(_BYTE *)(a2 + 81) = 5;
      LOBYTE(v2) = (v5 != 14) + 8;
      return v2;
    case 58LL:
      *(_WORD *)(a2 + 46) = 1;
LABEL_3:
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 86) = 11;
      *(_BYTE *)(a2 + 81) = 4;
LABEL_4:
      LOBYTE(v2) = insn_get_next_byte();
      *(_BYTE *)(a2 + 112) |= 1u;
      *(_QWORD *)(a2 + 96) = (unsigned __int8)v2;
      return v2;
    case 59LL:
      *(_BYTE *)(a2 + 41) = 4;
      *(_WORD *)(a2 + 46) = 11;
      LOBYTE(v2) = insn_get_next_byte();
      *(_BYTE *)(a2 + 72) |= 1u;
      *(_WORD *)(a2 + 86) = 1;
      *(_QWORD *)(a2 + 56) = (unsigned __int8)v2;
      *(_BYTE *)(a2 + 81) = 1;
      return v2;
    case 64LL:
    case 65LL:
    case 66LL:
    case 67LL:
      *(_BYTE *)(a2 + 112) |= 4u;
      *(_WORD *)(a2 + 46) = 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_QWORD *)(a2 + 88) = 1;
      *(_BYTE *)(a2 + 81) = 5;
      return v2;
    case 73LL:
      if ( (v2 & 0xC) == 0 || v5 <= 7u || (v2 & 8) != 0 )
        goto LABEL_46;
      *(_BYTE *)(a2 + 41) = 10;
      v2 = 2 * ((unsigned __int8)(v5 + 56) + 8 * (unsigned __int8)v4 - 32);
      *(_QWORD *)(a2 + 56) = v2;
      break;
    default:
      return v2;
  }
  return v2;
}

