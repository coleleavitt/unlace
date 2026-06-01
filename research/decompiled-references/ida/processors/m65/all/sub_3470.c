__int64 __fastcall sub_3470(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int64 v4; // rcx
  __int16 v5; // dx
  unsigned int v6; // esi
  unsigned __int8 v7; // al
  char v9; // al
  unsigned __int16 next_word; // ax
  __int64 v11; // rax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al

  *(_BYTE *)(a2 + 45) = 0;
  next_byte = insn_get_next_byte();
  if ( *(_BYTE *)(a1 + 120) )
    v4 = *((unsigned __int8 *)qword_5180 + next_byte);
  else
    v4 = *((unsigned __int8 *)&unk_5280 + next_byte);
  v5 = (unsigned __int8)v4;
  v6 = 0;
  *(_WORD *)(a2 + 24) = (unsigned __int8)v4;
  if ( (_BYTE)v4 )
  {
    switch ( next_byte & 0x1F )
    {
      case 0:
      case 2:
      case 9:
      case 0xB:
        if ( (unsigned __int8)v4 > 0x37u )
        {
          if ( (_BYTE)v4 == 116 )
            goto LABEL_23;
          if ( (_BYTE)v4 != 117 )
            goto LABEL_59;
        }
        else if ( (unsigned __int8)v4 <= 0x35u && (_BYTE)v4 != 15 )
        {
          if ( (_BYTE)v4 == 36 )
          {
            *(_BYTE *)(a2 + 45) = 9;
            *(_BYTE *)(a2 + 41) = 7;
            goto LABEL_33;
          }
LABEL_59:
          *(_BYTE *)(a2 + 41) = 5;
          v13 = insn_get_next_byte();
          v5 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 48) = v13;
          goto LABEL_8;
        }
LABEL_10:
        v6 = *(unsigned __int16 *)(a2 + 26);
        break;
      case 1:
      case 3:
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = ((unsigned __int8)v4 == 38) + 5;
        goto LABEL_7;
      case 4:
      case 5:
      case 6:
      case 7:
        goto LABEL_6;
      case 8:
      case 0x18:
      case 0x1A:
        if ( (v4 & 0xFB) == 0x1A )
          goto LABEL_25;
        goto LABEL_8;
      case 0xA:
        if ( (unsigned __int8)v4 > 0x34u )
          goto LABEL_10;
        v11 = 0x18040000000040LL;
        if ( !_bittest64(&v11, v4) )
          goto LABEL_8;
LABEL_25:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        goto LABEL_10;
      case 0xC:
      case 0xD:
      case 0xE:
        goto LABEL_13;
      case 0xF:
        if ( *(_BYTE *)(a1 + 120) )
          goto LABEL_52;
LABEL_13:
        if ( (_BYTE)v4 == 34 )
        {
          *(_BYTE *)(a2 + 45) = 9;
          v9 = 7;
          goto LABEL_17;
        }
        if ( (_BYTE)v4 == 35 )
        {
          *(_BYTE *)(a2 + 45) = 1;
          *(_DWORD *)(a2 + 28) = 1;
        }
        goto LABEL_16;
      case 0x10:
LABEL_23:
        *(_BYTE *)(a2 + 45) = 9;
        *(_BYTE *)(a2 + 41) = 7;
        *(_QWORD *)(a2 + 56) = (char)insn_get_next_byte() + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
        v5 = *(_WORD *)(a2 + 24);
        goto LABEL_8;
      case 0x11:
      case 0x13:
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = 6;
        goto LABEL_7;
      case 0x12:
        *(_DWORD *)(a2 + 28) = 1;
        goto LABEL_6;
      case 0x14:
      case 0x15:
      case 0x16:
        goto LABEL_19;
      case 0x17:
        if ( *(_BYTE *)(a1 + 120) )
          goto LABEL_6;
LABEL_19:
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = 7;
        if ( (_BYTE)v4 == 69 )
          goto LABEL_43;
        if ( (unsigned __int8)v4 <= 0x45u )
        {
          if ( (v4 & 0xEF) == 0x28 || (_BYTE)v4 == 38 )
LABEL_43:
            *(_WORD *)(a2 + 46) = 8;
        }
        else if ( (_BYTE)v4 == 111 )
        {
LABEL_6:
          *(_BYTE *)(a2 + 41) = 2;
        }
LABEL_7:
        v7 = insn_get_next_byte();
        v5 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 56) = v7;
        goto LABEL_8;
      case 0x19:
      case 0x1B:
        if ( (unsigned __int8)v4 == 118 )
          goto LABEL_10;
        *(_BYTE *)(a2 + 41) = 4;
LABEL_32:
        *(_WORD *)(a2 + 46) = 2;
        goto LABEL_33;
      case 0x1C:
      case 0x1D:
      case 0x1E:
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = 1;
        if ( (unsigned __int8)v4 <= 0x40u )
        {
          if ( (unsigned __int8)v4 > 0x22u )
          {
            switch ( (char)v4 )
            {
              case '#':
                goto LABEL_53;
              case '&':
              case '(':
              case '>':
              case '@':
                goto LABEL_32;
              default:
                goto LABEL_33;
            }
          }
          goto LABEL_33;
        }
        if ( (_BYTE)v4 != 109 )
        {
          if ( (_BYTE)v4 == 111 )
            goto LABEL_16;
          goto LABEL_33;
        }
        if ( next_byte == 0x9E )
          goto LABEL_33;
        goto LABEL_16;
      case 0x1F:
        if ( *(_BYTE *)(a1 + 120) )
        {
LABEL_52:
          *(_BYTE *)(a2 + 41) = 2;
          v12 = insn_get_next_byte();
          *(_BYTE *)(a2 + 85) = 9;
          *(_BYTE *)(a2 + 81) = 7;
          *(_QWORD *)(a2 + 56) = v12;
          *(_QWORD *)(a2 + 96) = (char)insn_get_next_byte() + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
          v5 = *(_WORD *)(a2 + 24);
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 1;
          if ( (unsigned __int8)v4 > 0x40u )
          {
            if ( (v4 & 0xFD) == 0x6D )
            {
LABEL_16:
              v9 = 2;
LABEL_17:
              *(_BYTE *)(a2 + 41) = v9;
            }
          }
          else if ( (unsigned __int8)v4 > 0x22u )
          {
            switch ( (char)v4 )
            {
              case '#':
LABEL_53:
                *(_WORD *)(a2 + 46) = 5;
                break;
              case '&':
              case '(':
              case '>':
              case '@':
                goto LABEL_32;
              default:
                break;
            }
          }
LABEL_33:
          next_word = insn_get_next_word();
          v5 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 56) = next_word;
        }
LABEL_8:
        if ( v5 == 44 )
          *(_BYTE *)(a2 + 41) = 0;
        goto LABEL_10;
    }
  }
  return v6;
}

