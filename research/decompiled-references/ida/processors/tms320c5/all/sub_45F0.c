_BOOL8 __fastcall sub_45F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  unsigned __int8 v4; // r13
  __int16 v6; // ax
  int v7; // eax
  int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  __int16 v13; // ax
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // ax
  int v17; // eax
  int v18; // eax
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  int v26; // edi
  __int64 v27; // rax
  int v28; // edx
  __int16 v29; // di
  __int64 v30; // rax
  int v31; // edx
  __int64 sreg; // rax
  int v33; // edx
  int v34; // eax
  __int16 v35; // di
  unsigned __int16 wide_byte; // ax
  __int16 v37; // ax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  __int16 v42; // ax
  int v43; // eax
  __int64 v44; // rax

  v2 = *(_DWORD *)(a1 + 128);
  v3 = v2 >> 8;
  v4 = BYTE1(v2) & 0xF;
  if ( v2 <= 0xFFFF )
  {
    switch ( *(_DWORD *)(a1 + 128) >> 12 )
    {
      case 0:
        v6 = 140;
        goto LABEL_4;
      case 1:
        v6 = 256;
        goto LABEL_4;
      case 2:
        v6 = 184;
LABEL_4:
        *(_WORD *)(a2 + 24) = v6;
        if ( *(char *)(a1 + 128) >= 0 )
        {
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 56) = (get_sreg() << 7) + (*(_DWORD *)(a1 + 128) & 0x7F);
          goto LABEL_49;
        }
        *(_BYTE *)(a2 + 41) = 3;
        v7 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v7 == 48 )
          return 0;
        goto LABEL_6;
      case 3:
        if ( (v2 & 0x800) == 0 )
        {
          *(_WORD *)(a2 + 24) = 188;
          goto LABEL_28;
        }
        *(_WORD *)(a2 + 24) = *((unsigned __int8 *)&qword_9320 + v4 - 8);
        if ( *(char *)(a1 + 128) >= 0 )
          goto LABEL_51;
        goto LABEL_31;
      case 4:
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_9300 + (BYTE1(*(_DWORD *)(a1 + 128)) & 0xF));
        if ( *(char *)(a1 + 128) < 0 )
          goto LABEL_31;
        goto LABEL_51;
      case 5:
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_92E0 + (BYTE1(*(_DWORD *)(a1 + 128)) & 0xF));
        if ( v4 > 0xBu )
        {
          v29 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 26) = v29 + 1;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)get_wide_byte();
          if ( v4 > 0xDu )
            goto LABEL_21;
          goto LABEL_55;
        }
        v17 = *(_DWORD *)(a1 + 128);
        if ( v4 != 5 )
        {
          if ( (v17 & 0x80) != 0 )
            goto LABEL_31;
          goto LABEL_51;
        }
        if ( (v17 & 0x80) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 0;
          *(_WORD *)(a2 + 24) = 211;
          return 1;
        }
        if ( (v17 & 0xF8) == 0x88 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 190;
          *(_WORD *)(a2 + 46) = (*(_WORD *)(a1 + 128) & 7) + 3;
          return 1;
        }
        goto LABEL_31;
      case 6:
        *(_WORD *)(a2 + 24) = ((v2 & 0x800) == 0) + 234;
        if ( *(char *)(a1 + 128) >= 0 )
        {
          *(_BYTE *)(a2 + 41) = 2;
          sreg = get_sreg();
          v33 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 56) = (sreg << 7) + (v33 & 0x7F);
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 3;
          v18 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v18 == 48 )
            return 0;
        }
        *(_BYTE *)(a2 + 81) = 5;
        v19 = v3 & 7;
        *(_BYTE *)(a2 + 112) = 2;
        *(_QWORD *)(a2 + 88) = (unsigned __int8)v19;
        if ( !v19 )
          goto LABEL_7;
        return 1;
      case 7:
        if ( (v2 & 0x800) != 0 )
        {
          *(_WORD *)(a2 + 24) = *((_WORD *)&qword_92C0[-2] + v4);
          if ( v4 <= 0xDu )
          {
LABEL_65:
            if ( *(char *)(a1 + 128) < 0 )
            {
LABEL_31:
              *(_BYTE *)(a2 + 41) = 3;
              v16 = *(_DWORD *)(a1 + 128) & 0x70;
              *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
              return v16 != 48;
            }
LABEL_51:
            *(_BYTE *)(a2 + 41) = 2;
            v24 = get_sreg();
            v25 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 56) = (v24 << 7) + (v25 & 0x7F);
          }
          else
          {
LABEL_42:
            *(_BYTE *)(a2 + 45) = 0;
            *(_BYTE *)(a2 + 41) = 5;
            v20 = *(unsigned __int8 *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 48) = v20;
          }
          return 1;
        }
        *(_WORD *)(a2 + 24) = 236;
LABEL_28:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v4 + 3);
        if ( *(char *)(a1 + 128) >= 0 )
          goto LABEL_56;
        goto LABEL_29;
      case 8:
        *(_WORD *)(a2 + 24) = 183;
        if ( *(char *)(a1 + 128) >= 0 )
          goto LABEL_44;
        goto LABEL_17;
      case 9:
        *(_WORD *)(a2 + 24) = 160;
        if ( *(char *)(a1 + 128) >= 0 )
        {
          *(_BYTE *)(a2 + 41) = 2;
          v30 = get_sreg();
          v31 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 56) = (v30 << 7) + (v31 & 0x7F);
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 3;
          v23 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v23 == 48 )
            return 0;
        }
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v4;
        *(_BYTE *)(a2 + 112) = 0;
        return 1;
      case 0xA:
      case 0xB:
        *(_WORD *)(a2 + 24) = 207;
        v9 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 72) = 0;
        v10 = v9 & 0x1FFF;
        if ( (v9 & 0x1000) != 0 )
          v10 = v9 | 0xFFFFFFFFFFFFE000LL;
        *(_QWORD *)(a2 + 48) = v10;
        return 1;
      case 0xC:
        switch ( v4 )
        {
          case 8u:
          case 9u:
            *(_BYTE *)(a2 + 45) = 1;
            *(_WORD *)(a2 + 24) = 192;
            v34 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 48) = v34 & 0x1FF;
            return 1;
          case 0xAu:
            if ( v2 == 51712 )
            {
              *(_WORD *)(a2 + 24) = 269;
              return 1;
            }
            v37 = 185;
LABEL_68:
            *(_WORD *)(a2 + 24) = v37;
            break;
          case 0xBu:
            *(_BYTE *)(a2 + 45) = 0;
            *(_WORD *)(a2 + 24) = 229;
            *(_BYTE *)(a2 + 41) = 5;
            v38 = *(unsigned __int8 *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 1;
            *(_QWORD *)(a2 + 48) = v38;
            return 1;
          case 0xCu:
            v37 = 143;
            goto LABEL_68;
          case 0xDu:
            v37 = 260;
            goto LABEL_68;
          case 0xEu:
            switch ( (unsigned __int8)v2 >> 4 )
            {
              case 0:
                v42 = *((_WORD *)qword_92A0 + (v2 & 0xF));
                *(_WORD *)(a2 + 24) = v42;
                if ( v42 == 248 )
                  goto LABEL_78;
                if ( v42 == 181 )
                {
                  v43 = *(_DWORD *)(a1 + 128);
                  *(_BYTE *)(a2 + 41) = 5;
                  *(_BYTE *)(a2 + 72) = 0;
                  *(_QWORD *)(a2 + 48) = v43 & 1;
                }
                break;
              case 1:
                *(_WORD *)(a2 + 24) = *((_WORD *)&qword_9280 + (v2 & 0xF));
                return 1;
              case 2:
                if ( (v2 & 8) == 0 )
                  *(_WORD *)(a2 + 24) = *((_WORD *)qword_9270 + (v2 & 0xF));
                return 1;
              case 3:
                v41 = v2 & 0xF;
                if ( (unsigned int)v41 <= 0xB )
                {
                  *(_WORD *)(a2 + 24) = *((_WORD *)qword_9250 + v41);
                }
                else
                {
                  *(_WORD *)(a2 + 24) = 177;
LABEL_78:
                  v40 = *(_DWORD *)(a1 + 128);
                  *(_BYTE *)(a2 + 41) = 5;
                  *(_BYTE *)(a2 + 72) = 0;
                  *(_QWORD *)(a2 + 48) = v40 & 3;
                }
                break;
              case 4:
              case 6:
              case 7:
                return 0;
              case 5:
                if ( (v2 & 0xC) != 0 )
                  return 1;
                *(_WORD *)(a2 + 24) = 174;
                goto LABEL_78;
              case 8:
              case 9:
              case 10:
              case 11:
              case 12:
              case 13:
              case 14:
              case 15:
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 24) = 212;
                v39 = *(_DWORD *)(a1 + 128);
                *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
                if ( (v39 & 0x70) == 0 )
                  *(_BYTE *)(a2 + 44) &= ~8u;
                return 1;
            }
            return 1;
          case 0xFu:
            *(_WORD *)(a2 + 24) = 209;
            goto LABEL_65;
          default:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 189;
            *(_WORD *)(a2 + 46) = (unsigned __int8)(v4 + 3);
            *(_BYTE *)(a2 + 85) = 0;
            *(_BYTE *)(a2 + 81) = 5;
            v44 = *(unsigned __int8 *)(a1 + 128);
            *(_BYTE *)(a2 + 112) = 0;
            *(_QWORD *)(a2 + 88) = v44;
            return 1;
        }
        goto LABEL_42;
      case 0xD:
        if ( !(_BYTE)v2 )
        {
          if ( (v2 & 0x800) != 0 )
            return 0;
          v35 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 194;
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v4 + 3);
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 26) = v35 + 1;
          wide_byte = get_wide_byte();
          *(_BYTE *)(a2 + 112) = 0;
          *(_QWORD *)(a2 + 88) = wide_byte;
          return 1;
        }
        if ( (unsigned __int8)v2 > 6u )
          return 0;
        v26 = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 41) = 5;
        *(_DWORD *)(a2 + 24) = *((unsigned __int16 *)qword_9240 + (unsigned __int8)v2) | ((v26 + 1) << 16);
        *(_QWORD *)(a2 + 48) = (unsigned __int16)get_wide_byte();
LABEL_49:
        *(_BYTE *)(a2 + 72) = 0;
LABEL_6:
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v4;
        *(_BYTE *)(a2 + 112) = 2;
        if ( !v4 )
          goto LABEL_7;
        return 1;
      case 0xE:
        *(_WORD *)(a2 + 24) = 215;
        if ( *(char *)(a1 + 128) >= 0 )
        {
LABEL_44:
          *(_BYTE *)(a2 + 41) = 2;
          v21 = get_sreg();
          v22 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 56) = (v21 << 7) + (v22 & 0x7F);
        }
        else
        {
LABEL_17:
          *(_BYTE *)(a2 + 41) = 3;
          v11 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v11 == 48 )
            return 0;
        }
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v4;
        *(_BYTE *)(a2 + 112) = 1;
        return 1;
      case 0xF:
        v12 = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 7;
        *(_DWORD *)(a2 + 24) = *((unsigned __int16 *)qword_9220 + (BYTE1(v2) & 0xF)) | ((v12 + 1) << 16);
        *(_QWORD *)(a2 + 56) = (unsigned __int16)get_wide_byte();
        v13 = *(_WORD *)(a2 + 24);
        if ( v13 == 163 )
        {
          *(_BYTE *)(a2 + 41) = 2;
          *(_BYTE *)(a2 + 72) = 1;
        }
        else if ( v13 != 164 )
        {
LABEL_21:
          *(_BYTE *)(a2 + 81) = 3;
          v14 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v14 == 48 )
            return 0;
          if ( !(_WORD)v14 )
LABEL_7:
            *(_BYTE *)(a2 + 84) &= ~8u;
          return 1;
        }
LABEL_55:
        if ( *(char *)(a1 + 128) < 0 )
        {
LABEL_29:
          *(_BYTE *)(a2 + 81) = 3;
          v15 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
          return v15 != 48;
        }
LABEL_56:
        *(_BYTE *)(a2 + 81) = 2;
        v27 = get_sreg();
        v28 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 112) = 0;
        *(_QWORD *)(a2 + 96) = (v27 << 7) + (v28 & 0x7F);
        break;
    }
  }
  return 1;
}

