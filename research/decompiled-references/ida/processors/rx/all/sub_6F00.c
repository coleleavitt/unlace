__int64 __fastcall sub_6F00(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // bp
  char v5; // al
  char v6; // r13
  unsigned __int8 v7; // al
  __int16 v8; // ax
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // bp
  char v14; // al
  unsigned __int8 v15; // al
  __int16 v16; // dx
  unsigned __int8 v17; // al
  __int16 v18; // dx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // bp
  unsigned __int8 v24; // al
  __int16 v25; // ax
  __int64 v26; // rbp
  unsigned __int8 v27; // al
  char v28; // cl
  unsigned __int8 v29; // bp
  __int16 v30; // ax
  unsigned __int8 v31; // r14
  unsigned __int8 v32; // al
  char v33; // cl
  unsigned __int8 v34; // bp
  unsigned __int8 v35; // r13
  char v36; // al
  unsigned __int8 v37; // al
  char v38; // r15
  char v39; // dl
  unsigned __int8 v40; // al
  __int16 v41; // dx
  char v42; // al
  unsigned __int8 v43; // al
  unsigned __int8 v44; // dl
  __int64 v45; // rdx
  unsigned __int8 v46; // bp
  __int64 v47; // rax
  unsigned __int8 v48; // al
  __int16 v49; // dx
  char v50; // bp
  char v51; // r15
  unsigned __int8 v52; // cl
  char v53; // si
  unsigned __int8 v54; // al
  __int64 v55; // rdx
  __int64 v56; // rsi
  unsigned __int8 v57; // dl
  char v58; // cl
  char v59; // cl
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  unsigned __int8 v62; // al
  unsigned __int8 v63; // r12
  unsigned __int8 v64; // al
  char v65; // cl
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  unsigned __int8 v68; // al
  char v69; // [rsp+Fh] [rbp-39h]

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a2 + 33) = 0;
  v4 = next_byte;
  if ( (next_byte & 0x80u) != 0 )
  {
    if ( next_byte > 0xFAu )
    {
      v5 = next_byte + 4;
      if ( v4 < 0xFCu )
      {
        *(_BYTE *)(a2 + 33) = 3;
        *(_WORD *)(a2 + 24) = 68;
        v12 = insn_get_next_byte();
        if ( (v12 & 3) == 2 )
        {
          sub_57D0(a1, a2, v12 >> 2);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v12 >> 4;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 1;
          return result;
        }
        return 0;
      }
      switch ( v5 )
      {
        case 0:
          return sub_5CB0(a1, a2);
        case 1:
          return sub_67F0(a1, a2);
        case 2:
          v13 = insn_get_next_byte();
          v14 = v13 >> 6;
          if ( v13 >> 6 == 1 )
          {
            v41 = 68;
            v42 = ((v13 >> 4) & 3) + 1;
          }
          else
          {
            if ( v14 != 3 )
            {
              if ( v14 )
                return 0;
              *(_WORD *)(a2 + 24) = 68;
              *(_BYTE *)(a2 + 33) = (v13 >> 4) + 1;
              v15 = insn_get_next_byte();
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 1;
              v16 = v15 & 0xF;
              *(_BYTE *)(a2 + 113) = v15 >> 4;
              result = *(unsigned __int16 *)(a2 + 26);
              *(_WORD *)(a2 + 46) = v16;
              *(_BYTE *)(a2 + 81) = 3;
              *(_BYTE *)(a2 + 85) = 1;
              *(_BYTE *)(a2 + 112) = 46;
              *(_WORD *)(a2 + 86) = v13 & 0xF;
              return result;
            }
            v41 = 71;
            v42 = ((v13 & 0x10) != 0) + 1;
          }
          *(_WORD *)(a2 + 24) = v41;
          *(_BYTE *)(a2 + 33) = v42;
          v19 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 72) = 46;
          *(_WORD *)(a2 + 46) = v13 & 0xF;
          *(_BYTE *)(a2 + 73) = v19 >> 4;
          goto LABEL_23;
        case 3:
          v17 = insn_get_next_byte();
          v18 = *((_WORD *)qword_F620 + (v17 >> 4));
          *(_WORD *)(a2 + 24) = v18;
          if ( !v18 )
            return 0;
          *(_BYTE *)(a2 + 121) = 1;
          *(_BYTE *)(a2 + 125) = 1;
          *(_WORD *)(a2 + 126) = v17 & 0xF;
          v19 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = v19 >> 4;
LABEL_23:
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          *(_WORD *)(a2 + 86) = v19 & 0xF;
          return *(unsigned __int16 *)(a2 + 26);
      }
    }
    v6 = next_byte;
    if ( (unsigned __int8)sub_6230(a1, a2, next_byte) )
      return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    switch ( next_byte )
    {
      case 0u:
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 6;
        return result;
      case 2u:
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 114;
        return result;
      case 3u:
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 90;
        return result;
      case 4u:
        *(_WORD *)(a2 + 24) = 5;
        return (unsigned __int16)sub_5710(a1, a2);
      case 5u:
        *(_WORD *)(a2 + 24) = 40;
        return (unsigned __int16)sub_5710(a1, a2);
      case 6u:
        v23 = insn_get_next_byte();
        v24 = (v23 >> 2) & 0xF;
        if ( v24 > 5u )
        {
          if ( v24 == 8 && (v48 = insn_get_next_byte(), v48 <= 0x15u) )
          {
            v25 = *((_WORD *)qword_F660 + v48);
            *(_WORD *)(a2 + 24) = v25;
          }
          else
          {
            v25 = *(_WORD *)(a2 + 24);
          }
        }
        else
        {
          v25 = *((_WORD *)qword_F690 + ((v23 >> 2) & 0xF));
          *(_WORD *)(a2 + 24) = v25;
        }
        if ( !v25 )
          return 0;
        return (unsigned __int16)sub_58B0(a1, a2, v23);
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
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
        *(_BYTE *)(a2 + 33) = 1;
        v11 = *(_QWORD *)(a2 + 16);
        *(_BYTE *)(a2 + 41) = 7;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F640[-8] + next_byte);
        *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v11 + (char)insn_get_next_byte());
        return *(unsigned __int16 *)(a2 + 26);
      case 0x38u:
        *(_WORD *)(a2 + 24) = 5;
        goto LABEL_40;
      case 0x39u:
        *(_WORD *)(a2 + 24) = 40;
LABEL_40:
        *(_BYTE *)(a2 + 33) = 2;
        v26 = *(_QWORD *)(a2 + 16);
        *(_BYTE *)(a2 + 41) = 7;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v26 + (__int16)insn_get_next_word());
        return *(unsigned __int16 *)(a2 + 26);
      case 0x3Fu:
        v29 = insn_get_next_byte();
        v30 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 24) = 115;
        *(_BYTE *)(a2 + 45) = 1;
        *(_QWORD *)(a2 + 48) = (4 * v30) & 0x3FC;
        *(_BYTE *)(a2 + 81) = 10;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = v29 >> 4;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 113) = v29 & 0xF;
        return result;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
        *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F690[-24] + next_byte);
        goto LABEL_26;
      case 0x66u:
        *(_BYTE *)(a2 + 33) = 3;
        *(_WORD *)(a2 + 24) = 68;
LABEL_26:
        v20 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 48) = v20 >> 4;
        *(_WORD *)(a2 + 86) = v20 & 0xF;
        return *(unsigned __int16 *)(a2 + 26);
      case 0x67u:
        *(_WORD *)(a2 + 24) = 115;
LABEL_47:
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
        return *(unsigned __int16 *)(a2 + 26);
      case 0x6Eu:
      case 0x6Fu:
        *(_BYTE *)(a2 + 41) = 10;
        *(_WORD *)(a2 + 24) = 3 * (next_byte == 110) + 95;
        v21 = insn_get_next_byte();
        *(_BYTE *)(a2 + 45) = 1;
        v22 = v21 >> 4;
        *(_BYTE *)(a2 + 73) = v21 & 0xF;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 46) = v22;
        return result;
      case 0x7Eu:
        v27 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        v28 = v27 >> 4;
        *(_WORD *)(a2 + 46) = v27 & 0xF;
        if ( v27 <= 0xEFu )
        {
          switch ( v28 )
          {
            case 0:
              *(_WORD *)(a2 + 24) = 91;
              break;
            case 1:
              *(_WORD *)(a2 + 24) = 89;
              break;
            case 2:
              *(_WORD *)(a2 + 24) = 1;
              break;
            case 3:
              *(_WORD *)(a2 + 24) = 116;
              break;
            case 4:
              *(_WORD *)(a2 + 24) = 107;
              break;
            case 5:
              *(_WORD *)(a2 + 24) = 106;
              break;
            case 6:
            case 7:
            case 13:
              return *(unsigned __int16 *)(a2 + 26);
            case 8:
            case 9:
            case 10:
              *(_WORD *)(a2 + 24) = 96;
              *(_BYTE *)(a2 + 33) = (v28 & 3) + 1;
              break;
            case 11:
              *(_WORD *)(a2 + 24) = 93;
              break;
            case 12:
            case 14:
              *(_WORD *)(a2 + 24) = 3 * (v28 == 12) + 94;
              *(_WORD *)(a2 + 46) = (unsigned __int8)((v27 & 0xF) + 16);
              break;
          }
        }
        return *(unsigned __int16 *)(a2 + 26);
      case 0x7Fu:
        return sub_5B80(a1, a2);
      default:
        v6 = next_byte;
        if ( (unsigned __int8)sub_6230(a1, a2, next_byte) )
          return *(unsigned __int16 *)(a2 + 26);
        v7 = v4 >> 1;
        if ( v4 <= 0x6Du )
        {
          if ( v7 <= 0x33u )
          {
            if ( v7 == 29 )
            {
              *(_BYTE *)(a2 + 33) = 2;
              v8 = v4 != 58;
              *(_BYTE *)(a2 + 41) = 7;
              v9 = *(_QWORD *)(a2 + 16);
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 24) = v8 + 10;
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v9 + (__int16)insn_get_next_word());
              return *(unsigned __int16 *)(a2 + 26);
            }
            v31 = v4 >> 2;
            switch ( v31 )
            {
              case 0xFu:
                v62 = insn_get_next_byte();
                *(_BYTE *)(a2 + 41) = 5;
                v63 = v62;
                *(_WORD *)(a2 + 24) = 68;
                *(_BYTE *)(a2 + 45) = 0;
                *(_BYTE *)(a2 + 33) = (v4 & 3) + 1;
                v64 = insn_get_next_byte();
                v65 = *(_BYTE *)(a2 + 33);
                *(_BYTE *)(a2 + 81) = 4;
                *(_BYTE *)(a2 + 85) = 1;
                *(_QWORD *)(a2 + 48) = v64;
                *(_WORD *)(a2 + 86) = (v63 >> 4) & 7;
                v66 = (v63 >> 3) & 0x10 | v63 & 0xF;
                if ( v65 == 2 )
                {
                  v67 = (2 * v66) & 0x3E;
                }
                else
                {
                  v67 = v66;
                  if ( v65 == 3 )
                    v67 = (4 * v66) & 0x7C;
                }
                *(_QWORD *)(a2 + 88) = v67;
                return *(unsigned __int16 *)(a2 + 26);
              case 0x10u:
              case 0x11u:
              case 0x12u:
              case 0x13u:
              case 0x14u:
              case 0x15u:
                *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F690[-4] + v31);
                v61 = insn_get_next_byte();
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 1;
                *(_WORD *)(a2 + 86) = v61 & 0xF;
                *(_WORD *)(a2 + 46) = v61 >> 4;
                sub_5960(a1, a2, a2 + 40, v4);
                return *(unsigned __int16 *)(a2 + 26);
              default:
                v39 = v4 >> 3;
                if ( v4 <= 0x1Fu )
                {
                  v38 = 0;
                  if ( !v39 )
                    goto LABEL_103;
                  v45 = v4 >> 3;
                  v46 = v4 & 7;
                  *(_WORD *)(a2 + 24) = *((_WORD *)qword_F5D0 + v45);
                  if ( v46 <= 2u )
                    v46 += 8;
                  *(_BYTE *)(a2 + 33) = 6;
                  v47 = *(_QWORD *)(a2 + 16) + v46;
                  *(_BYTE *)(a2 + 41) = 7;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v47;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( v39 == 11 )
                {
                  *(_WORD *)(a2 + 24) = 71;
                  *(_BYTE *)(a2 + 33) = ((v4 & 4) != 0) + 1;
                  return (unsigned __int16)sub_5A10(a1, a2, v4);
                }
                v38 = v4 >> 4;
                break;
            }
LABEL_72:
            if ( (~v4 & 0xCF) == 0 )
            {
              *(_WORD *)(a2 + 24) = 68;
              *(_BYTE *)(a2 + 33) = (v38 & 3) + 1;
              return (unsigned __int16)sub_5790(a1, a2);
            }
            if ( (~v4 & 0xCC) == 0 )
            {
              *(_WORD *)(a2 + 24) = 68;
              v40 = insn_get_next_byte();
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 1;
              *(_WORD *)(a2 + 46) = v40 >> 4;
              *(_WORD *)(a2 + 86) = v40 & 0xF;
              *(_BYTE *)(a2 + 33) = (v38 & 3) + 1;
LABEL_64:
              sub_5960(a1, a2, a2 + 40, v6);
              if ( *(_BYTE *)(a2 + 41) == 1 )
                return 0;
              return *(unsigned __int16 *)(a2 + 26);
            }
LABEL_103:
            if ( (~v4 & 0xC3) != 0 )
            {
              if ( (~v4 & 0xC0) != 0 )
              {
                if ( (v39 & 0x18) == 0x10 )
                {
                  *(_WORD *)(a2 + 24) = 68;
                  v51 = v38 & 3;
                  v69 = v39;
                  v52 = insn_get_next_byte();
                  *(_BYTE *)(a2 + 33) = v51 + 1;
                  if ( v51 == 2 )
                    v53 = 4;
                  else
                    v53 = (((v51 - 1) & 0xFD) == 0) + 1;
                  v54 = v53 * (((v52 & 8) != 0) + ((v52 >> 6) & 2 | (4 * v4) & 0x1C));
                  if ( (v69 & 0x19) == 0x10 )
                  {
                    v55 = a2 + 40;
                    v56 = a2 + 80;
                  }
                  else
                  {
                    v55 = a2 + 80;
                    v56 = a2 + 40;
                  }
                  *(_BYTE *)(v55 + 1) = 1;
                  *(_BYTE *)(v55 + 5) = 1;
                  *(_WORD *)(v55 + 6) = v52 & 7;
                  *(_BYTE *)(v56 + 1) = 4;
                  *(_BYTE *)(v56 + 5) = 1;
                  *(_WORD *)(v56 + 6) = (v52 >> 4) & 7;
                  *(_QWORD *)(v56 + 8) = v54;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                return 0;
              }
              *(_WORD *)(a2 + 24) = 68;
              *(_BYTE *)(a2 + 33) = (v38 & 3) + 1;
              v68 = insn_get_next_byte();
              *(_WORD *)(a2 + 86) = v68 & 0xF;
              *(_WORD *)(a2 + 46) = v68 >> 4;
              sub_5960(a1, a2, a2 + 40, v4 & 3);
              if ( *(_BYTE *)(a2 + 41) == 1 )
                return 0;
            }
            else
            {
              v60 = insn_get_next_byte();
              *(_WORD *)(a2 + 24) = 68;
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 1;
              *(_BYTE *)(a2 + 33) = (v38 & 3) + 1;
              *(_WORD *)(a2 + 46) = v60 & 0xF;
              *(_WORD *)(a2 + 86) = v60 >> 4;
            }
            sub_5960(a1, a2, a2 + 80, v31 & 3);
            if ( *(_BYTE *)(a2 + 81) == 1 )
              return 0;
            return *(unsigned __int16 *)(a2 + 26);
          }
LABEL_79:
          *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F5F0[-13] + v7);
          v43 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          v44 = v43 >> 4;
          *(_WORD *)(a2 + 86) = v43 & 0xF;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          *(_QWORD *)(a2 + 48) = (16 * v4) & 0x10u | v44;
          return result;
        }
        if ( (unsigned __int8)(v7 - 60) <= 2u )
          goto LABEL_79;
        break;
    }
  }
  v31 = v4 >> 2;
  switch ( v4 >> 2 )
  {
    case 28:
      *(_WORD *)(a2 + 24) = 3;
      v37 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 126) = v37 & 0xF;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 86) = v37 >> 4;
      *(_BYTE *)(a2 + 125) = 1;
      sub_57D0(a1, a2, v4 & 3);
      return *(unsigned __int16 *)(a2 + 26);
    case 29:
      v35 = insn_get_next_byte();
      v36 = v35 >> 4;
      if ( (v35 & 0x80u) != 0 )
      {
        *(_WORD *)(a2 + 24) = 0;
        return 0;
      }
      *(_WORD *)(a2 + 24) = *((_WORD *)qword_F5E0 + (v35 >> 4));
      if ( v36 == 6 )
        goto LABEL_47;
      if ( v36 != 7 )
      {
        if ( v36 == 4 )
        {
          *(_BYTE *)(a2 + 33) = 3;
        }
        else if ( v36 != 5 )
        {
          sub_57D0(a1, a2, v4 & 3);
          *(_BYTE *)(a2 + 81) = 1;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 1;
          *(_WORD *)(a2 + 86) = v35 & 0xF;
          return result;
        }
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = v35 & 0xF;
        goto LABEL_47;
      }
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = insn_get_next_byte() & 0xF;
      result = *(unsigned __int16 *)(a2 + 26);
      break;
    case 60:
    case 61:
      v32 = insn_get_next_byte();
      v33 = v32 & 8;
      if ( v31 == 60 )
      {
        v49 = 39;
        if ( v33 )
          v49 = 7;
      }
      else
      {
        if ( v33 )
        {
          *(_WORD *)(a2 + 24) = 96;
          *(_BYTE *)(a2 + 45) = 1;
          *(_WORD *)(a2 + 46) = v32 >> 4;
          *(_BYTE *)(a2 + 33) = (v32 & 3) + 1;
          goto LABEL_64;
        }
        v49 = 41;
      }
      *(_WORD *)(a2 + 24) = v49;
      v50 = v4 & 3;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = v32 & 7;
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = v32 >> 4;
      *(_WORD *)(a2 + 112) = 298;
      if ( v50 == 1 )
      {
        *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte();
      }
      else if ( v50 == 2 )
      {
        *(_QWORD *)(a2 + 88) = (unsigned __int16)insn_get_next_word();
      }
      else
      {
        *(_QWORD *)(a2 + 88) = 0;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 62:
      *(_WORD *)(a2 + 24) = 68;
      v34 = insn_get_next_byte();
      *(_BYTE *)(a2 + 33) = (v34 & 3) + 1;
      *(_WORD *)(a2 + 86) = v34 >> 4;
      sub_5960(a1, a2, a2 + 80, v6);
      if ( *(_BYTE *)(a2 + 81) == 1 )
        return 0;
      sub_57D0(a1, a2, v34 >> 2);
      return *(unsigned __int16 *)(a2 + 26);
    default:
      v38 = v4 >> 4;
      v39 = v4 >> 3;
      if ( v4 >> 4 != 11 )
        goto LABEL_72;
      *(_WORD *)(a2 + 24) = 71;
      *(_BYTE *)(a2 + 33) = ((v4 & 8) != 0) + 1;
      v57 = insn_get_next_byte();
      v58 = *(_BYTE *)(a2 + 33);
      if ( v58 == 3 )
        v59 = 4;
      else
        v59 = (((v58 - 2) & 0xFD) == 0) + 1;
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (v57 >> 4) & 7;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)(v59 * ((4 * v4) & 0x1C | ((v57 & 8) != 0) | (v57 >> 6) & 2));
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = v57 & 7;
      return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

