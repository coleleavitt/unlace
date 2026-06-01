__int64 __fastcall sub_88E0(__int64 a1, __int64 a2)
{
  __int64 sreg; // rax
  unsigned __int8 next_byte; // al
  int v5; // r12d
  int v6; // ecx
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int8 v9; // al
  char v10; // dl
  unsigned __int16 v11; // ax
  unsigned __int8 v12; // dl
  __int64 v13; // rsi
  char v14; // al
  unsigned __int16 v15; // ax
  unsigned __int8 v16; // dl
  __int64 v17; // rsi
  char byte; // al
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  char v23; // al
  __int64 v24; // rdx
  __int16 next_word; // ax
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  unsigned __int16 v28; // ax
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  char v33; // bp
  unsigned __int8 v34; // al
  __int16 v35; // dx
  char v36; // al
  __int16 v37; // dx
  unsigned __int8 v38; // al
  signed int v39; // edx
  unsigned int v40; // eax
  unsigned __int16 v41; // ax
  unsigned __int64 v42; // rdx
  unsigned __int8 v43; // cl
  __int64 v44; // rcx
  unsigned __int16 v45; // ax
  unsigned __int64 v46; // rdx
  unsigned __int8 v47; // cl
  __int64 v48; // rcx
  unsigned __int16 v49; // ax
  unsigned __int8 v50; // al
  char v51; // bp
  __int16 flags; // ax
  __int16 v53; // ax
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int16 v63; // cx
  unsigned int v64; // edi
  unsigned int v65; // eax
  bool v66; // dl
  unsigned __int16 v67; // dx

  sreg = get_sreg();
  if ( *(_DWORD *)(a1 + 248) == 2 && (unsigned __int64)(sreg - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    return sub_6D40(a2);
  next_byte = insn_get_next_byte();
  v5 = next_byte;
  LOWORD(v6) = *((_WORD *)qword_109A0 + 2 * next_byte);
  v7 = *((unsigned __int16 *)qword_109A0 + 2 * next_byte + 1);
  *(_WORD *)(a2 + 24) = v6;
  if ( (_WORD)v6 != 196 )
  {
    if ( (_WORD)v6 != 138 )
    {
      if ( (unsigned __int16)v6 <= 0x8Au )
      {
        if ( !(_WORD)v6 )
          return 0;
        goto LABEL_26;
      }
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  v9 = insn_get_next_byte();
  LOWORD(v6) = *((_WORD *)qword_105A0 + 2 * v9);
  *(_WORD *)(a2 + 24) = v6;
  if ( (_WORD)v6 )
  {
    v7 = *((unsigned __int16 *)qword_105A0 + 2 * v9 + 1);
    if ( (v7 & 0x2000) == 0 || *(_DWORD *)(a1 + 248) == 2 )
    {
      v5 = v9 | 0x100;
      LOWORD(v7) = v7 & 0xDFFF;
      if ( (_WORD)v6 != 138 )
      {
        if ( (unsigned __int16)v6 <= 0x8Au )
        {
LABEL_26:
          v10 = 0;
LABEL_21:
          if ( (_WORD)v7 != 1032 )
          {
            if ( (unsigned __int16)v7 <= 0x408u )
            {
              if ( (unsigned __int16)v7 <= 0x20u )
              {
                if ( (_WORD)v7 )
                {
                  switch ( v7 )
                  {
                    case 1LL:
                      goto LABEL_40;
                    case 2LL:
                      goto LABEL_120;
                    case 4LL:
                      goto LABEL_122;
                    case 8LL:
                      goto LABEL_121;
                    case 16LL:
                      goto LABEL_126;
                    case 32LL:
                      goto LABEL_124;
                    default:
                      goto LABEL_110;
                  }
                }
                goto LABEL_110;
              }
LABEL_68:
              if ( (_WORD)v7 == 256 )
              {
                v33 = insn_get_next_byte();
                v34 = v33 & 0xE0;
                if ( (v33 & 0xE0) == 0x60 )
                {
                  v35 = 193;
                }
                else if ( v34 > 0x60u )
                {
                  if ( v34 == 0x80 )
                  {
                    v35 = 85;
                  }
                  else
                  {
                    v35 = 86;
                    if ( v34 != 0xA0 )
                      return 0;
                  }
                }
                else if ( v34 == 32 )
                {
                  v35 = 64;
                }
                else if ( v34 == 64 )
                {
                  v35 = 191;
                }
                else
                {
                  v35 = 63;
                  if ( v34 )
                    return 0;
                }
                *(_WORD *)(a2 + 24) = v35;
                v36 = v33 & 0xF;
                switch ( v33 & 0xF )
                {
                  case 0:
                    v37 = 0;
                    break;
                  case 1:
                    v36 = 0;
                    v37 = 1;
                    break;
                  case 4:
                    v36 = 1;
                    v37 = 2;
                    break;
                  case 5:
                    v36 = 1;
                    v37 = 3;
                    break;
                  case 6:
                    v36 = 1;
                    v37 = 4;
                    break;
                  case 7:
                    v36 = 1;
                    v37 = 5;
                    break;
                  default:
                    return 0;
                }
                *(_WORD *)(a2 + 46) = v37;
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = v36;
                v38 = insn_get_next_byte();
                *(_BYTE *)(a2 + 81) = 7;
                v39 = v38;
                v40 = *(_DWORD *)&v38 | 0xFFFFFF00;
                *(_BYTE *)(a2 + 85) = 9;
                if ( (v33 & 0x10) != 0 )
                  v39 = v40;
                *(_QWORD *)(a2 + 96) = v39 + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                goto LABEL_74;
              }
              if ( (unsigned __int16)v7 <= 0x100u )
              {
                if ( (_WORD)v7 == 64 )
                {
                  next_word = insn_get_next_word();
                  v26 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                  *(_BYTE *)(a2 + 41) = 7;
                  *(_BYTE *)(a2 + 45) = 9;
                  LOWORD(v6) = *(_WORD *)(a2 + 24);
                  *(_QWORD *)(a2 + 56) = next_word + v26;
                  goto LABEL_40;
                }
                if ( (_WORD)v7 == 128 )
                {
                  if ( !(unsigned __int8)sub_69B0(a2, a2 + 40, 0) )
                    return 0;
                  if ( v5 == 75 && (*(_BYTE *)(a2 + 72) & 4) == 0 )
                  {
LABEL_182:
                    v50 = insn_get_next_byte();
                    *(_BYTE *)(a2 + 81) = 5;
                    LOWORD(v6) = *(_WORD *)(a2 + 24);
                    *(_BYTE *)(a2 + 85) = 0;
                    *(_QWORD *)(a2 + 88) = v50;
LABEL_40:
                    if ( (_WORD)v6 == 122 )
                    {
                      if ( (unsigned __int8)get_byte() == 0xE5 )
                      {
                        *(_BYTE *)(a2 + 41) = 0;
                        *(_WORD *)(a2 + 24) = 2;
                      }
                    }
                    else if ( (unsigned __int16)v6 > 0x7Au )
                    {
                      if ( (_WORD)v6 == 123 )
                      {
                        if ( (unsigned __int8)get_byte() == 0xED )
                        {
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 3;
                        }
                      }
                      else if ( (_WORD)v6 == 146 )
                      {
                        byte = get_byte();
                        switch ( byte )
                        {
                          case 2:
                            *(_BYTE *)(a2 + 41) = 0;
                            *(_WORD *)(a2 + 24) = 175;
                            break;
                          case 16:
                            *(_BYTE *)(a2 + 41) = 0;
                            *(_WORD *)(a2 + 24) = 174;
                            break;
                          case 1:
                            *(_BYTE *)(a2 + 41) = 0;
                            *(_WORD *)(a2 + 24) = 173;
                            break;
                        }
                      }
                    }
                    else if ( (_WORD)v6 == 11 )
                    {
                      v19 = get_byte();
                      switch ( v19 )
                      {
                        case -3:
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 52;
                          break;
                        case -2:
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 47;
                          break;
                        case -17:
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 48;
                          break;
                      }
                    }
                    else if ( (_WORD)v6 == 121 )
                    {
                      v14 = get_byte();
                      if ( v14 == -127 )
                      {
                        *(_BYTE *)(a2 + 41) = 0;
                        *(_WORD *)(a2 + 24) = 92;
                      }
                      else if ( v14 == -97 )
                      {
                        *(_BYTE *)(a2 + 41) = 0;
                        *(_WORD *)(a2 + 24) = 68;
                      }
                    }
                    return *(unsigned __int16 *)(a2 + 26);
                  }
LABEL_74:
                  LOWORD(v6) = *(_WORD *)(a2 + 24);
                  goto LABEL_40;
                }
LABEL_110:
                if ( under_debugger )
                  BUG();
                interr();
                goto LABEL_112;
              }
              if ( (_WORD)v7 != 512 )
                goto LABEL_110;
              v32 = insn_get_next_byte();
              if ( v32 == 117 )
              {
                *(_WORD *)(a2 + 24) = 200;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( v32 > 0x75u )
              {
                switch ( v32 )
                {
                  case 0xC5:
                    *(_WORD *)(a2 + 24) = 207;
                    return *(unsigned __int16 *)(a2 + 26);
                  case 0xC6:
                    *(_WORD *)(a2 + 24) = 208;
                    return *(unsigned __int16 *)(a2 + 26);
                  case 0x76u:
                    *(_WORD *)(a2 + 24) = 201;
                    return *(unsigned __int16 *)(a2 + 26);
                }
                v63 = (((char)v32 >> 15) & 0xFF91) + 194;
              }
              else
              {
                if ( v32 == 87 )
                {
                  *(_WORD *)(a2 + 24) = 202;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( v32 > 0x57u )
                {
                  if ( v32 == 103 )
                  {
                    *(_WORD *)(a2 + 24) = 203;
                    return *(unsigned __int16 *)(a2 + 26);
                  }
                }
                else
                {
                  if ( v32 == 2 )
                  {
                    *(_WORD *)(a2 + 24) = 189;
                    return *(unsigned __int16 *)(a2 + 26);
                  }
                  if ( v32 == 32 )
                  {
                    *(_WORD *)(a2 + 24) = 195;
                    return *(unsigned __int16 *)(a2 + 26);
                  }
                }
                v63 = 194;
              }
              *(_WORD *)(a2 + 24) = v63;
              switch ( v32 & 0x7F )
              {
                case '(':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 21;
                  goto LABEL_254;
                case ')':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 15;
                  goto LABEL_254;
                case '*':
                case '+':
                case ',':
                case '-':
                case '.':
                case '/':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 8;
                  goto LABEL_254;
                case '8':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 23;
                  goto LABEL_254;
                case '9':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 17;
                  goto LABEL_254;
                case '<':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 9;
                  goto LABEL_254;
                case 'X':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 18;
                  goto LABEL_254;
                case 'Y':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 12;
                  goto LABEL_254;
                case 'h':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 19;
                  goto LABEL_254;
                case 'i':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 13;
                  goto LABEL_254;
                case 'x':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 20;
                  goto LABEL_254;
                case 'y':
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 14;
LABEL_254:
                  v65 = *((_DWORD *)qword_10520 + (v32 & 0xF));
                  v66 = v65 != 7 && v65 > 1;
                  break;
                default:
                  *(_BYTE *)(a2 + 41) = 1;
                  v64 = *((_DWORD *)qword_10560 + ((v32 >> 4) & 7));
                  *(_WORD *)(a2 + 46) = v64;
                  *(_BYTE *)(a2 + 45) = v64 != 7 && v64 > 1;
                  switch ( v32 & 0x7F )
                  {
                    case 0xA:
                      v66 = 1;
                      LOWORD(v65) = 21;
                      break;
                    case 0xB:
                      v66 = 1;
                      LOWORD(v65) = 22;
                      break;
                    case 0xD:
                      v66 = 1;
                      LOWORD(v65) = 18;
                      break;
                    case 0xE:
                      v66 = 1;
                      LOWORD(v65) = 19;
                      break;
                    case 0xF:
                      v66 = 1;
                      LOWORD(v65) = 20;
                      break;
                    case 0x1A:
                      v66 = 1;
                      LOWORD(v65) = 15;
                      break;
                    case 0x1B:
                      v66 = 1;
                      LOWORD(v65) = 16;
                      break;
                    case 0x1D:
                      v66 = 1;
                      LOWORD(v65) = 12;
                      break;
                    case 0x1E:
                      v66 = 1;
                      LOWORD(v65) = 13;
                      break;
                    case 0x1F:
                      v66 = 1;
                      LOWORD(v65) = 14;
                      break;
                    case 0x4B:
                      v66 = 1;
                      LOWORD(v65) = 9;
                      break;
                    default:
                      goto LABEL_254;
                  }
                  break;
              }
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = v66;
              *(_WORD *)(a2 + 86) = v65;
              if ( v63 == 194 )
              {
                v67 = *(_WORD *)(a2 + 46);
                if ( (v67 <= 1u || v67 == 7) && ((unsigned int)(unsigned __int16)v65 - 2 <= 3 || (_WORD)v65 == 10) )
                  *(_WORD *)(a2 + 24) = 176;
              }
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( (_WORD)v7 != 2176 )
            {
              if ( (unsigned __int16)v7 <= 0x880u )
              {
                if ( (_WORD)v7 != 2050 )
                {
                  if ( (unsigned __int16)v7 > 0x802u )
                  {
                    if ( (_WORD)v7 != 2052 )
                    {
                      if ( (_WORD)v7 != 2064 )
                        goto LABEL_110;
LABEL_54:
                      if ( !(unsigned __int8)sub_69B0(a2, a2 + 80, v10) )
                        return 0;
                      v15 = insn_get_next_word();
                      v6 = *(unsigned __int16 *)(a2 + 24);
                      *(_BYTE *)(a2 + 41) = 2;
                      v16 = 2;
                      if ( (_WORD)v6 == 73 )
                        goto LABEL_60;
                      if ( (unsigned __int16)v6 <= 0x49u )
                      {
LABEL_228:
                        if ( (_WORD)v6 == 8 )
LABEL_263:
                          v16 = 1;
                        else
                          v16 = (unsigned __int16)(v6 - 58) <= 3u;
                        goto LABEL_60;
                      }
                      if ( (unsigned __int16)v6 <= 0x116u )
                      {
                        if ( (unsigned __int16)v6 > 0xDCu )
                        {
LABEL_59:
                          v17 = 0x3F24C93E799F259LL;
                          v16 = _bittest64(&v17, (unsigned int)(v6 - 221));
                          goto LABEL_60;
                        }
                        if ( (unsigned __int16)v6 <= 0xDAu )
                        {
                          if ( (unsigned __int16)v6 > 0xB2u )
                          {
LABEL_249:
                            v62 = 0xFF0000009DLL;
                            v16 = _bittest64(&v62, (unsigned int)(v6 - 179));
                            goto LABEL_60;
                          }
                          v16 = 1;
                          if ( (unsigned __int16)v6 <= 0x4Du )
                            goto LABEL_60;
LABEL_135:
                          v31 = 0x100007800000001LL;
                          v16 = _bittest64(&v31, (unsigned int)(v6 - 82));
                          if ( (unsigned __int16)(v6 - 82) <= 0x38u )
                          {
LABEL_60:
                            *(_BYTE *)(a2 + 45) = v16;
                            *(_QWORD *)(a2 + 56) = v15;
                            goto LABEL_40;
                          }
                        }
                      }
LABEL_136:
                      v16 = 0;
                      goto LABEL_60;
                    }
                    goto LABEL_161;
                  }
                  if ( (_WORD)v7 != 1040 )
                  {
                    if ( (_WORD)v7 != 1152 )
                      goto LABEL_110;
LABEL_104:
                    if ( !(unsigned __int8)sub_69B0(a2, a2 + 40, v10) || (*(_BYTE *)(a2 + 72) & 4) != 0 )
                      return 0;
                    goto LABEL_106;
                  }
                  goto LABEL_164;
                }
                goto LABEL_119;
              }
              if ( (_WORD)v7 != 4112 )
              {
                if ( (unsigned __int16)v7 <= 0x1010u )
                  goto LABEL_85;
                if ( (_WORD)v7 != 4224 )
                  goto LABEL_110;
                goto LABEL_33;
              }
              goto LABEL_170;
            }
            v51 = v10;
            goto LABEL_184;
          }
          goto LABEL_163;
        }
LABEL_13:
        if ( (unsigned __int16)(v6 - 242) <= 0xBu )
        {
          *(_BYTE *)(a2 + 72) |= 0x40u;
          if ( (_WORD)v7 != 1032 )
          {
            if ( (unsigned __int16)v7 <= 0x408u )
            {
              if ( (unsigned __int16)v7 <= 0x20u )
              {
                if ( (_WORD)v7 )
                {
                  switch ( v7 )
                  {
                    case 1LL:
                      return *(unsigned __int16 *)(a2 + 26);
                    case 2LL:
                      goto LABEL_120;
                    case 4LL:
LABEL_122:
                      if ( v5 != 143 )
                        goto LABEL_123;
                      flags = get_flags_ex();
                      if ( (~flags & 0x600) != 0 && (flags & 0x1000) == 0 )
                        goto LABEL_123;
                      *(_WORD *)(a2 + 24) = 210;
                      return *(unsigned __int16 *)(a2 + 26);
                    case 8LL:
LABEL_121:
                      sub_6BC0(a2, a2 + 40);
                      LOWORD(v6) = *(_WORD *)(a2 + 24);
                      goto LABEL_40;
                    case 16LL:
LABEL_126:
                      if ( (v5 & 0xFFFFFFEF) == 6 || v5 == 74 )
                      {
                        v49 = insn_get_next_word();
                        LOWORD(v6) = *(_WORD *)(a2 + 24);
                        *(_BYTE *)(a2 + 41) = 7;
                        *(_BYTE *)(a2 + 45) = 9;
                        *(_QWORD *)(a2 + 56) = v49;
                        if ( (_WORD)v6 != 45 )
                          goto LABEL_40;
                        goto LABEL_182;
                      }
                      v15 = insn_get_next_word();
                      v6 = *(unsigned __int16 *)(a2 + 24);
                      *(_BYTE *)(a2 + 41) = 2;
                      v16 = 2;
                      if ( (_WORD)v6 == 73 )
                        goto LABEL_60;
                      if ( (unsigned __int16)v6 <= 0x49u )
                        goto LABEL_228;
                      if ( (unsigned __int16)v6 > 0x116u )
                        goto LABEL_136;
                      if ( (unsigned __int16)v6 > 0xDCu )
                        goto LABEL_59;
                      if ( (unsigned __int16)v6 > 0xDAu )
                        goto LABEL_136;
                      if ( (unsigned __int16)v6 > 0xB2u )
                        goto LABEL_249;
                      if ( (unsigned __int16)v6 <= 0x4Du )
                        goto LABEL_263;
                      goto LABEL_135;
                    case 32LL:
LABEL_124:
                      if ( v5 != 33 || (v53 = get_flags_ex(), (~v53 & 0x600) != 0) && (v53 & 0x1000) == 0 )
                      {
                        v29 = insn_get_next_byte();
                        v30 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                        *(_BYTE *)(a2 + 41) = 7;
                        *(_BYTE *)(a2 + 45) = 9;
                        LOWORD(v6) = *(_WORD *)(a2 + 24);
                        *(_QWORD *)(a2 + 56) = v29 + v30;
                        goto LABEL_40;
                      }
                      *(_WORD *)(a2 + 24) = 209;
                      break;
                    default:
                      goto LABEL_110;
                  }
                  return *(unsigned __int16 *)(a2 + 26);
                }
                goto LABEL_110;
              }
              goto LABEL_68;
            }
            if ( (_WORD)v7 != 2176 )
            {
              if ( (unsigned __int16)v7 <= 0x880u )
              {
                if ( (_WORD)v7 != 2050 )
                {
                  if ( (unsigned __int16)v7 > 0x802u )
                  {
                    if ( (_WORD)v7 != 2052 )
                    {
                      if ( (_WORD)v7 != 2064 )
                        goto LABEL_110;
                      v10 = 0;
                      goto LABEL_54;
                    }
                    v10 = 0;
LABEL_161:
                    if ( !(unsigned __int8)sub_69B0(a2, a2 + 80, v10) )
                      return 0;
LABEL_123:
                    v28 = insn_get_next_word();
                    *(_BYTE *)(a2 + 41) = 5;
                    LOWORD(v6) = *(_WORD *)(a2 + 24);
                    *(_BYTE *)(a2 + 45) = 1;
                    *(_QWORD *)(a2 + 48) = v28;
                    goto LABEL_40;
                  }
                  if ( (_WORD)v7 != 1040 )
                  {
                    if ( (_WORD)v7 != 1152 )
                      goto LABEL_110;
                    v10 = 0;
                    goto LABEL_104;
                  }
LABEL_164:
                  v41 = insn_get_next_word();
                  v42 = *(unsigned __int16 *)(a2 + 24);
                  *(_BYTE *)(a2 + 41) = 2;
                  v43 = 2;
                  if ( (_WORD)v42 != 73 )
                  {
                    if ( (unsigned __int16)v42 <= 0x49u )
                    {
                      v43 = (_WORD)v42 == 8 || (unsigned __int16)(v42 - 58) <= 3u;
                      goto LABEL_169;
                    }
                    if ( (unsigned __int16)v42 <= 0x116u )
                    {
                      if ( (unsigned __int16)v42 > 0xDCu )
                      {
                        v44 = 0x3F24C93E799F259LL;
                        LOWORD(v42) = v42 - 221;
                        v43 = _bittest64(&v44, v42);
                        goto LABEL_169;
                      }
                      if ( (unsigned __int16)v42 <= 0xDAu )
                      {
                        if ( (unsigned __int16)v42 > 0xB2u )
                        {
                          v61 = 0xFF0000009DLL;
                          LOWORD(v42) = v42 - 179;
                          v43 = _bittest64(&v61, v42);
                        }
                        else
                        {
                          v43 = 1;
                          if ( (unsigned __int16)v42 > 0x4Du )
                          {
                            v58 = 0x100007800000001LL;
                            v59 = (unsigned int)(v42 - 82);
                            v43 = _bittest64(&v58, v59);
                            if ( (unsigned __int16)v59 >= 0x39u )
                              v43 = 0;
                          }
                        }
                        goto LABEL_169;
                      }
                    }
                    v43 = 0;
                  }
LABEL_169:
                  *(_BYTE *)(a2 + 45) = v43;
                  *(_QWORD *)(a2 + 56) = v41;
LABEL_106:
                  v22 = insn_get_next_byte();
                  LOWORD(v6) = *(_WORD *)(a2 + 24);
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_BYTE *)(a2 + 85) = 0;
                  *(_QWORD *)(a2 + 88) = v22;
                  if ( (((_WORD)v6 - 38) & 0xFFFD) == 0 )
                  {
                    v23 = insn_get_next_byte();
                    v24 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
                    *(_BYTE *)(a2 + 121) = 7;
                    *(_BYTE *)(a2 + 125) = 9;
                    LOWORD(v6) = *(_WORD *)(a2 + 24);
                    *(_QWORD *)(a2 + 136) = v23 + v24;
                  }
                  goto LABEL_40;
                }
                v10 = 0;
LABEL_119:
                if ( !(unsigned __int8)sub_69B0(a2, a2 + 80, v10) )
                  return 0;
LABEL_120:
                v27 = insn_get_next_byte();
                *(_BYTE *)(a2 + 41) = 5;
                LOWORD(v6) = *(_WORD *)(a2 + 24);
                *(_BYTE *)(a2 + 45) = 0;
                *(_QWORD *)(a2 + 48) = v27;
                goto LABEL_40;
              }
              if ( (_WORD)v7 != 4112 )
              {
                if ( (unsigned __int16)v7 <= 0x1010u )
                {
LABEL_85:
                  if ( (_WORD)v7 == 4098 )
                  {
LABEL_112:
                    LOBYTE(v20) = insn_get_next_byte();
                    *(_BYTE *)(a2 + 41) = 5;
                    *(_BYTE *)(a2 + 45) = 0;
                    v20 = (unsigned __int8)v20;
                    goto LABEL_88;
                  }
                  if ( (_WORD)v7 == 4100 )
                  {
                    LOWORD(v20) = insn_get_next_word();
                    *(_BYTE *)(a2 + 41) = 5;
                    *(_BYTE *)(a2 + 45) = 1;
                    v20 = (unsigned __int16)v20;
LABEL_88:
                    *(_QWORD *)(a2 + 48) = v20;
                    goto LABEL_89;
                  }
                  goto LABEL_110;
                }
                if ( (_WORD)v7 != 4224 )
                  goto LABEL_110;
                v10 = 0;
LABEL_33:
                if ( !(unsigned __int8)sub_69B0(a2, a2 + 40, v10) )
                  return 0;
                v11 = insn_get_next_word();
                v6 = *(unsigned __int16 *)(a2 + 24);
                *(_BYTE *)(a2 + 81) = 2;
                v12 = 2;
                if ( (_WORD)v6 == 73 )
                  goto LABEL_39;
                if ( (unsigned __int16)v6 > 0x49u )
                {
                  if ( (unsigned __int16)v6 <= 0x116u )
                  {
                    if ( (unsigned __int16)v6 <= 0xDCu )
                    {
                      if ( (unsigned __int16)v6 <= 0xDAu )
                      {
                        if ( (unsigned __int16)v6 > 0xB2u )
                        {
LABEL_209:
                          v55 = 0xFF0000009DLL;
                          v12 = _bittest64(&v55, (unsigned int)(v6 - 179));
                          goto LABEL_39;
                        }
                        v12 = 1;
                        if ( (unsigned __int16)v6 <= 0x4Du )
                          goto LABEL_39;
                        v54 = 0x100007800000001LL;
                        v12 = _bittest64(&v54, (unsigned int)(v6 - 82));
                        if ( (unsigned __int16)(v6 - 82) <= 0x38u )
                          goto LABEL_39;
                      }
                      goto LABEL_208;
                    }
LABEL_38:
                    v13 = 0x3F24C93E799F259LL;
                    v12 = _bittest64(&v13, (unsigned int)(v6 - 221));
LABEL_39:
                    *(_BYTE *)(a2 + 85) = v12;
                    *(_QWORD *)(a2 + 96) = v11;
                    goto LABEL_40;
                  }
LABEL_208:
                  v12 = 0;
                  goto LABEL_39;
                }
LABEL_179:
                v12 = (_WORD)v6 == 8 || (unsigned __int16)(v6 - 58) <= 3u;
                goto LABEL_39;
              }
LABEL_170:
              v45 = insn_get_next_word();
              v46 = *(unsigned __int16 *)(a2 + 24);
              *(_BYTE *)(a2 + 41) = 2;
              v47 = 2;
              if ( (_WORD)v46 != 73 )
              {
                if ( (unsigned __int16)v46 <= 0x49u )
                {
                  v47 = (_WORD)v46 == 8 || (unsigned __int16)(v46 - 58) <= 3u;
                  goto LABEL_175;
                }
                if ( (unsigned __int16)v46 <= 0x116u )
                {
                  if ( (unsigned __int16)v46 > 0xDCu )
                  {
                    v48 = 0x3F24C93E799F259LL;
                    LOWORD(v46) = v46 - 221;
                    v47 = _bittest64(&v48, v46);
                    goto LABEL_175;
                  }
                  if ( (unsigned __int16)v46 <= 0xDAu )
                  {
                    if ( (unsigned __int16)v46 > 0xB2u )
                    {
                      v60 = 0xFF0000009DLL;
                      LOWORD(v46) = v46 - 179;
                      v47 = _bittest64(&v60, v46);
                    }
                    else
                    {
                      v47 = 1;
                      if ( (unsigned __int16)v46 > 0x4Du )
                      {
                        v56 = 0x100007800000001LL;
                        v57 = (unsigned int)(v46 - 82);
                        v47 = _bittest64(&v56, v57);
                        if ( (unsigned __int16)v57 >= 0x39u )
                          v47 = 0;
                      }
                    }
                    goto LABEL_175;
                  }
                }
                v47 = 0;
              }
LABEL_175:
              *(_BYTE *)(a2 + 45) = v47;
              *(_QWORD *)(a2 + 56) = v45;
LABEL_89:
              v11 = insn_get_next_word();
              v6 = *(unsigned __int16 *)(a2 + 24);
              *(_BYTE *)(a2 + 81) = 2;
              v12 = 2;
              if ( (_WORD)v6 == 73 )
                goto LABEL_39;
              if ( (unsigned __int16)v6 > 0x49u )
              {
                if ( (unsigned __int16)v6 <= 0x116u )
                {
                  if ( (unsigned __int16)v6 <= 0xDCu )
                  {
                    if ( (unsigned __int16)v6 <= 0xDAu )
                    {
                      if ( (unsigned __int16)v6 <= 0xB2u )
                      {
                        v12 = 1;
                        if ( (unsigned __int16)v6 > 0x4Du )
                        {
                          v21 = 0x100007800000001LL;
                          v12 = _bittest64(&v21, (unsigned int)(v6 - 82));
                          if ( (unsigned __int16)(v6 - 82) >= 0x39u )
                            v12 = 0;
                        }
                        goto LABEL_39;
                      }
                      goto LABEL_209;
                    }
                    goto LABEL_208;
                  }
                  goto LABEL_38;
                }
                goto LABEL_208;
              }
              goto LABEL_179;
            }
            v51 = 0;
LABEL_184:
            if ( !(unsigned __int8)sub_69B0(a2, a2 + 40, v51) || !(unsigned __int8)sub_69B0(a2, a2 + 80, v51) )
              return 0;
            goto LABEL_74;
          }
LABEL_163:
          sub_6BC0(a2, a2 + 40);
          goto LABEL_106;
        }
        goto LABEL_26;
      }
LABEL_20:
      v10 = 1;
      goto LABEL_21;
    }
  }
  *(_BYTE *)(a2 + 41) = 5;
  *(_QWORD *)(a2 + 48) = v9;
  result = *(unsigned __int16 *)(a2 + 26);
  *(_WORD *)(a2 + 24) = 196;
  *(_BYTE *)(a2 + 45) = 0;
  return result;
}

