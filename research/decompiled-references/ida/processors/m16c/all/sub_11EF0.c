__int64 __fastcall sub_11EF0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // r12
  __int64 *v10; // r12
  __int16 v11; // dx
  char v12; // al
  int v13; // r14d
  int v14; // r15d
  __int64 *v15; // r13
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(_QWORD); // rax
  _QWORD *v18; // rdi
  int v19; // eax
  unsigned __int8 next_byte; // r12
  unsigned __int8 v22; // r13
  __int64 v23; // rdi
  unsigned int (__fastcall *v24)(_QWORD); // rax
  _QWORD *v25; // rdi
  __int64 v26; // rdi
  unsigned int (__fastcall *v27)(_QWORD); // rax
  _QWORD *v28; // rdi
  __int16 v29; // ax
  __int64 v30; // rdx
  unsigned int v31; // eax
  char v32; // dl
  __int16 v33; // cx
  bool v34; // al
  __int64 v35; // rax
  unsigned __int8 v36; // dl
  int v37; // edx
  __int64 v38; // rdi
  unsigned int (__fastcall *v39)(_QWORD); // rax
  _QWORD *v40; // rdi
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(_QWORD); // rax
  _QWORD *v43; // rdi
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rdi
  unsigned int (__fastcall *v47)(_QWORD); // rax
  _QWORD *v48; // rdi
  __int64 v49; // rdi
  unsigned int v50; // edx
  __int64 *v51; // rsi
  char v52; // al
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  unsigned __int8 v55; // al
  char v56; // dl
  unsigned __int8 v57; // r13
  char v58; // al
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // al
  char v61; // al

  *(_BYTE *)(a2 + 45) = 0;
  v4 = *(_DWORD *)(a1 + 4328);
  if ( v4 <= 5 )
  {
    if ( v4 > 3 )
    {
      v5 = sub_D910(a1, a2);
LABEL_4:
      if ( v5 >= 0 )
      {
LABEL_5:
        LOBYTE(v6) = v5;
        v7 = 9LL * (unsigned __int8)v5;
        goto LABEL_6;
      }
      return 0;
    }
  }
  else if ( v4 == 6 )
  {
    v5 = sub_DB10(a1, a2);
    goto LABEL_4;
  }
  next_byte = insn_get_next_byte();
  v22 = next_byte & 0xF;
  switch ( next_byte >> 4 )
  {
    case 0:
      if ( !v22 )
      {
        LOBYTE(v5) = 28;
        goto LABEL_5;
      }
      if ( v22 == 4 )
      {
        v7 = 1098;
        LOBYTE(v6) = 122;
      }
      else if ( (next_byte & 8) != 0 )
      {
        v7 = 891;
        LOBYTE(v6) = 99;
      }
      else
      {
        v7 = 882;
        LOBYTE(v6) = 98;
      }
      break;
    case 1:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 1134;
        LOBYTE(v6) = 126;
      }
      else
      {
        v7 = 117;
        LOBYTE(v6) = 13;
      }
      break;
    case 2:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 1548;
        LOBYTE(v6) = -84;
      }
      else
      {
        v7 = 45;
        LOBYTE(v6) = 5;
      }
      break;
    case 3:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 333;
        LOBYTE(v6) = 37;
      }
      else
      {
        v7 = 900;
        LOBYTE(v6) = 100;
      }
      break;
    case 4:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 270;
        LOBYTE(v6) = 30;
      }
      else
      {
        v7 = 162;
        LOBYTE(v6) = 18;
      }
      break;
    case 5:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 288;
        LOBYTE(v6) = 32;
      }
      else
      {
        v7 = 216;
        LOBYTE(v6) = 24;
      }
      break;
    case 6:
      if ( (next_byte & 8) != 0 )
      {
        v7 = 675;
        LOBYTE(v6) = 75;
      }
      else
      {
        v7 = 711;
        LOBYTE(v6) = 79;
      }
      break;
    case 7:
      v55 = insn_get_next_byte();
      if ( (next_byte & 0xE) == 0 )
      {
        v7 = 1080;
        LOBYTE(v6) = 120;
        break;
      }
      if ( (next_byte & 0xC) == 0 )
      {
        v7 = 936;
        LOBYTE(v6) = 104;
        break;
      }
      v56 = v55 >> 4;
      if ( v22 <= 5u )
      {
        v6 = *((unsigned __int8 *)qword_1AC00 + (v55 >> 4));
        v7 = 9 * v6;
        break;
      }
      if ( (next_byte & 8) == 0 )
      {
        v6 = *((unsigned __int8 *)qword_1ABF0 + (v55 >> 4));
        v7 = 9 * v6;
        break;
      }
      if ( v22 <= 0xBu )
      {
        if ( v22 <= 9u )
        {
          v7 = 1062;
          LOBYTE(v6) = 118;
        }
        else if ( (v56 & 8) != 0 )
        {
          if ( v22 == 10 )
            goto LABEL_255;
          v7 = 1467;
          LOBYTE(v6) = -93;
        }
        else
        {
          v7 = 1611;
          LOBYTE(v6) = -77;
        }
        break;
      }
      v61 = v55 & 0xF;
      switch ( v22 )
      {
        case 0xCu:
          switch ( v56 )
          {
            case 0:
              LOBYTE(v5) = 113;
              goto LABEL_5;
            case 1:
              v7 = 1035;
              LOBYTE(v6) = 115;
              goto LABEL_6;
            case 2:
              v7 = 1026;
              LOBYTE(v6) = 114;
              goto LABEL_6;
            case 3:
              v7 = 1044;
              LOBYTE(v6) = 116;
              goto LABEL_6;
            case 4:
              v7 = 1071;
              LOBYTE(v6) = 119;
              goto LABEL_6;
            case 5:
              v7 = 1053;
              LOBYTE(v6) = 117;
              goto LABEL_6;
            case 6:
              v7 = 603;
              LOBYTE(v6) = 67;
              goto LABEL_6;
            case 7:
            case 13:
              return 0;
            case 8:
              v7 = 981;
              LOBYTE(v6) = 109;
              goto LABEL_6;
            case 9:
              v7 = 999;
              LOBYTE(v6) = 111;
              goto LABEL_6;
            case 10:
              v7 = 990;
              LOBYTE(v6) = 110;
              goto LABEL_6;
            case 11:
              v7 = 1008;
              LOBYTE(v6) = 112;
              goto LABEL_6;
            case 12:
              v7 = 1458;
              LOBYTE(v6) = -94;
              goto LABEL_6;
            case 14:
              LOBYTE(v6) = *((_BYTE *)qword_1ABE0 + (v61 & 0xF));
              v7 = 9LL * (unsigned __int8)v6;
              goto LABEL_6;
            case 15:
              LOBYTE(v6) = *((_BYTE *)qword_1ABD0 + (v61 & 0xF));
              v7 = 9LL * (unsigned __int8)v6;
              goto LABEL_6;
          }
        case 0xDu:
          switch ( v56 )
          {
            case 0:
              LOBYTE(v5) = 81;
              goto LABEL_5;
            case 1:
              v7 = 774;
              LOBYTE(v6) = 86;
              goto LABEL_6;
            case 2:
              v7 = 738;
              LOBYTE(v6) = 82;
              goto LABEL_6;
            case 3:
              v7 = 783;
              LOBYTE(v6) = 87;
              goto LABEL_6;
            case 4:
              v7 = 1071;
              LOBYTE(v6) = 119;
              goto LABEL_6;
            case 5:
              v7 = 1053;
              LOBYTE(v6) = 117;
              goto LABEL_6;
            case 6:
            case 7:
            case 8:
              return 0;
            case 9:
              v7 = 1242;
              LOBYTE(v6) = -118;
              goto LABEL_6;
            case 10:
              v7 = 864;
              LOBYTE(v6) = 96;
              goto LABEL_6;
            case 11:
              v7 = 81;
              LOBYTE(v6) = 9;
              goto LABEL_6;
            case 12:
              v7 = 684;
              LOBYTE(v6) = 76;
              goto LABEL_6;
            case 13:
              v7 = 171;
              LOBYTE(v6) = 19;
              goto LABEL_6;
            case 14:
              LOBYTE(v6) = *((_BYTE *)qword_1ABC0 + (v61 & 0xF));
              v7 = 9LL * (unsigned __int8)v6;
              goto LABEL_6;
            case 15:
              LOBYTE(v6) = *((_BYTE *)&word_1ABAE + (v61 & 0xF));
              v7 = 9LL * (unsigned __int8)v6;
              goto LABEL_6;
          }
        case 0xEu:
          v6 = *((unsigned __int8 *)&qword_1ABA0 + (v56 & 0xF));
          v7 = 9 * v6;
          goto LABEL_6;
      }
      return 0;
    case 8:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 1629;
          LOBYTE(v6) = -75;
        }
        else if ( v22 == 10 )
        {
          v7 = 1206;
          LOBYTE(v6) = -122;
        }
        else
        {
          v7 = 1539;
          LOBYTE(v6) = -85;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 1206;
          LOBYTE(v6) = -122;
        }
        else
        {
          v7 = 36;
          LOBYTE(v6) = 4;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 1584;
        LOBYTE(v6) = -80;
      }
      break;
    case 9:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 1152;
          LOBYTE(v6) = 0x80;
        }
        else if ( v22 == 10 )
        {
          v7 = 1161;
          LOBYTE(v6) = -127;
        }
        else
        {
          v7 = 1125;
          LOBYTE(v6) = 125;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 1161;
          LOBYTE(v6) = -127;
        }
        else
        {
          v7 = 108;
          LOBYTE(v6) = 12;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 135;
        LOBYTE(v6) = 15;
      }
      break;
    case 10:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 1566;
          LOBYTE(v6) = -82;
        }
        else if ( v22 == 10 )
        {
          v7 = 963;
          LOBYTE(v6) = 107;
        }
        else
        {
          v7 = 441;
          LOBYTE(v6) = 49;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 963;
          LOBYTE(v6) = 107;
        }
        else
        {
          v7 = 639;
          LOBYTE(v6) = 71;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 72;
        LOBYTE(v6) = 8;
      }
      break;
    case 11:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 1341;
          LOBYTE(v6) = -107;
        }
        else if ( v22 == 10 )
        {
          v7 = 648;
          LOBYTE(v6) = 72;
        }
        else
        {
          v7 = 1107;
          LOBYTE(v6) = 123;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 648;
          LOBYTE(v6) = 72;
        }
        else
        {
          v7 = 909;
          LOBYTE(v6) = 101;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 18;
        LOBYTE(v6) = 2;
      }
      break;
    case 12:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 90;
          LOBYTE(v6) = 10;
        }
        else if ( v22 == 10 )
        {
          v7 = 1215;
          LOBYTE(v6) = -121;
        }
        else
        {
          v7 = 1521;
          LOBYTE(v6) = -87;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 1215;
          LOBYTE(v6) = -121;
        }
        else
        {
          v7 = 873;
          LOBYTE(v6) = 97;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 351;
        LOBYTE(v6) = 39;
      }
      break;
    case 13:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 954;
          LOBYTE(v6) = 106;
        }
        else if ( v22 == 10 )
        {
          v7 = 1170;
          LOBYTE(v6) = -126;
        }
        else
        {
          v7 = 1530;
          LOBYTE(v6) = -86;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 2 )
        {
          v7 = 1170;
          LOBYTE(v6) = -126;
        }
        else
        {
          v7 = 1512;
          LOBYTE(v6) = -88;
        }
      }
      else
      {
        insn_get_next_byte();
        v7 = 360;
        LOBYTE(v6) = 40;
      }
      break;
    case 14:
      if ( (next_byte & 8) == 0 )
      {
        if ( (next_byte & 0xE) != 0 )
        {
          if ( v22 == 2 )
          {
            v7 = 963;
            LOBYTE(v6) = 107;
          }
          else
          {
            v7 = 324;
            LOBYTE(v6) = 36;
          }
        }
        else
        {
          insn_get_next_byte();
          v7 = 1305;
          LOBYTE(v6) = -111;
        }
        break;
      }
      if ( v22 <= 9u )
      {
        insn_get_next_byte();
        v7 = 1413;
        LOBYTE(v6) = -99;
        break;
      }
      if ( v22 == 10 )
      {
        v7 = 963;
        LOBYTE(v6) = 107;
        break;
      }
      v57 = v22 - 12;
      if ( v57 <= 3u )
      {
        v5 = *((_DWORD *)qword_1AB00 + v57);
        goto LABEL_4;
      }
      v58 = insn_get_next_byte();
      v59 = (unsigned __int8)v58 >> 4;
      if ( v58 < 0 )
      {
        if ( v59 <= 9u )
        {
          v7 = 1395;
          LOBYTE(v6) = -101;
        }
        else if ( v59 > 0xBu )
        {
          v7 = 657;
          LOBYTE(v6) = 73;
        }
        else
        {
          v7 = 1359;
          LOBYTE(v6) = -105;
        }
        break;
      }
      if ( (v58 & 0xEF) == 1 )
      {
        v7 = 1404;
        LOBYTE(v6) = -100;
        break;
      }
      if ( v58 != 32 )
      {
        if ( (v58 & 0xEF) == 0x21 )
        {
          v7 = 1368;
          LOBYTE(v6) = -104;
        }
        else
        {
          v60 = v58 & 0xF;
          if ( v60 <= 5u )
          {
            v5 = *((_DWORD *)qword_1AAE0 + v60);
            goto LABEL_4;
          }
          v7 = 972;
          LOBYTE(v6) = 108;
        }
        break;
      }
      if ( (unsigned __int8)insn_get_next_byte() <= 0xFu
        && !(unsigned __int8)insn_get_next_byte()
        && (unsigned __int8)insn_get_next_byte() == 0xEB
        && (unsigned __int8)insn_get_next_byte() == 16 )
      {
        v7 = 855;
        LOBYTE(v6) = 95;
        break;
      }
      return 0;
    case 15:
      if ( (next_byte & 8) != 0 )
      {
        if ( v22 <= 9u )
        {
          insn_get_next_byte();
          v7 = 99;
          LOBYTE(v6) = 11;
        }
        else
        {
          v6 = *((unsigned __int8 *)&dword_1AB94 + v22 - 10);
          v7 = 9 * v6;
        }
      }
      else if ( (next_byte & 0xE) != 0 )
      {
        if ( v22 == 7 )
          return 0;
        v6 = *((unsigned __int8 *)&word_1AB9A[-1] + v22);
        v7 = 9 * v6;
      }
      else
      {
        insn_get_next_byte();
        v7 = 1377;
        LOBYTE(v6) = -103;
      }
      break;
  }
LABEL_6:
  v8 = *(_DWORD *)(a1 + 4328);
  if ( v8 > 5 )
  {
    v9 = qword_27340;
    if ( v8 == 6 )
      v9 = qword_20400;
  }
  else
  {
    v9 = qword_27340;
    if ( v8 >= 4 )
      v9 = qword_23860;
  }
  v10 = &v9[v7];
  *(_BYTE *)(a2 + 28) = v6;
  *(_WORD *)(a2 + 24) = *(_DWORD *)v10;
  v11 = *((_WORD *)v10 + 32) | *(_WORD *)(a2 + 30);
  *(_WORD *)(a2 + 30) = v11;
  if ( *((_DWORD *)v10 + 1) == 1 )
  {
    v50 = *(_DWORD *)(a1 + 4328);
    if ( v50 > 5 )
    {
      v51 = qword_27340;
      if ( v50 == 6 )
        v51 = qword_20400;
    }
    else
    {
      v51 = qword_27340;
      if ( v50 >= 4 )
        v51 = qword_23860;
    }
    v52 = sub_E7E0(a1, (unsigned int *)&v51[v7]);
    v11 = *(_WORD *)(a2 + 30);
    if ( v52 == 1 )
    {
      v11 |= 1u;
      *(_WORD *)(a2 + 30) = v11;
    }
    else if ( v52 == 2 )
    {
      HIBYTE(v11) |= 2u;
      *(_WORD *)(a2 + 30) = v11;
    }
  }
  if ( (v11 & 0x1000) != 0 )
  {
    v12 = *(_BYTE *)(a2 + 29);
    if ( (v12 & 2) != 0 )
      *(_BYTE *)(a2 + 29) = v12 & 0xFC | 1;
  }
  if ( (v11 & 0x20) != 0 )
  {
    v23 = v10[5];
    v24 = (unsigned int (__fastcall *)(_QWORD))v10[4];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 1;
    v25 = (_QWORD *)(a1 + v23);
    if ( ((unsigned __int8)v24 & 1) != 0 )
      v24 = *(unsigned int (__fastcall **)(_QWORD))((char *)v24 + *v25 - 1);
    if ( !v24(v25) )
      return 0;
    v26 = v10[3];
    v27 = (unsigned int (__fastcall *)(_QWORD))v10[2];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 0;
    v28 = (_QWORD *)(a1 + v26);
    if ( ((unsigned __int8)v27 & 1) != 0 )
LABEL_33:
      v27 = *(unsigned int (__fastcall **)(_QWORD))((char *)v27 + *v28 - 1);
LABEL_34:
    if ( !v27(v28) )
      return 0;
LABEL_35:
    v29 = *(_WORD *)(a2 + 24);
    if ( v29 != 9 && v29 != 53 && v29 != 143 )
      goto LABEL_40;
    if ( *(_BYTE *)(a2 + 41) == 10 )
    {
      v30 = 0;
    }
    else if ( *(_BYTE *)(a2 + 81) == 10 )
    {
      v30 = 1;
    }
    else
    {
      v30 = 2;
      if ( *(_BYTE *)(a2 + 121) != 10 )
        goto LABEL_40;
    }
    *(_WORD *)(a2 + 24) = *(_WORD *)(a2 + 40 * v30 + 48) + v29;
LABEL_40:
    v31 = *(_DWORD *)(a1 + 4328);
    v32 = *(_BYTE *)(a2 + 29);
    if ( v31 <= 5
      && *((_DWORD *)v10 + 2) == 3
      && ((*(_WORD *)(a2 + 24) & 0xFFDF) == 4 || *(_WORD *)(a2 + 24) == 79)
      && *((_DWORD *)v10 + 1) == 1
      && (v33 = *(_WORD *)(a2 + 30), (v33 & 0x201) == 0)
      && (*(_QWORD *)(a2 + 40) & 0xFF000000FF00LL) == 0x500
      && *(_BYTE *)(a2 + 81) == 1
      && (unsigned __int16)(*(_WORD *)(a2 + 86) - 22) <= 1u )
    {
      if ( !v32 )
      {
        *(_QWORD *)(a2 + 48) = (unsigned __int8)*(_QWORD *)(a2 + 48);
        *(_BYTE *)(a2 + 45) = 1;
        goto LABEL_48;
      }
      v34 = 0;
    }
    else
    {
      if ( !v32 )
      {
LABEL_48:
        v35 = a2 + 40;
        while ( 1 )
        {
          v36 = *(_BYTE *)(v35 + 1);
          if ( v36 > 4u )
            break;
          if ( v36 > 1u )
          {
            *(_QWORD *)(v35 + 16) = (unsigned int)*(_QWORD *)(v35 + 16);
            if ( *(_BYTE *)(v35 + 33) && v36 == 4 )
            {
              v53 = *(unsigned __int16 *)(v35 + 6);
              if ( (unsigned __int16)v53 > 0x1Eu )
                return 0;
              v54 = 1992294400;
              if ( !_bittest64(&v54, v53) )
                return 0;
              goto LABEL_80;
            }
            goto LABEL_78;
          }
          if ( !*(_BYTE *)(v35 + 33) )
            goto LABEL_78;
          if ( v36 != 1 )
            return 0;
          v37 = *(unsigned __int16 *)(v35 + 6);
          if ( *(_DWORD *)(a1 + 4328) != 6 )
          {
            if ( (unsigned int)(v37 - 22) > 1 )
              return 0;
            goto LABEL_80;
          }
LABEL_79:
          if ( (_WORD)v37 == 0xFFFF )
          {
            if ( under_debugger )
              BUG();
            interr();
LABEL_255:
            v7 = 810;
            LOBYTE(v6) = 90;
            goto LABEL_6;
          }
LABEL_80:
          v35 += 40;
          if ( v35 == a2 + 360 )
            return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (unsigned __int8)(v36 - 6) <= 1u )
          *(_QWORD *)(v35 + 16) = (unsigned int)*(_QWORD *)(v35 + 16);
        if ( *(_BYTE *)(v35 + 33) )
          return 0;
LABEL_78:
        LOWORD(v37) = *(_WORD *)(v35 + 6);
        goto LABEL_79;
      }
      v33 = *(_WORD *)(a2 + 30);
      v34 = v31 == 6;
    }
    if ( (v33 & 0xC00) != 0 || (v33 & 0x100) != 0 && !v34 || !*((_BYTE *)v10 + 12) )
      return 0;
    goto LABEL_48;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v38 = v10[3];
    v39 = (unsigned int (__fastcall *)(_QWORD))v10[2];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 0;
    v40 = (_QWORD *)(a1 + v38);
    if ( ((unsigned __int8)v39 & 1) != 0 )
      v39 = *(unsigned int (__fastcall **)(_QWORD))((char *)v39 + *v40 - 1);
    if ( !v39(v40) )
      return 0;
    v41 = v10[7];
    v42 = (__int64 (__fastcall *)(_QWORD))v10[6];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 2;
    v43 = (_QWORD *)(a1 + v41);
    if ( ((unsigned __int8)v42 & 1) != 0 )
    {
LABEL_68:
      v44 = (*(__int64 (__fastcall **)(_QWORD *))((char *)v42 + *v43 - 1))(v43);
LABEL_61:
      if ( !v44 )
        return 0;
      v45 = v10[5];
      v27 = (unsigned int (__fastcall *)(_QWORD))v10[4];
      *(_QWORD *)(a1 + 4352) = a2;
      *(_QWORD *)(a1 + 4344) = v10;
      *(_DWORD *)(a1 + 4360) = 1;
      v28 = (_QWORD *)(a1 + v45);
      if ( ((unsigned __int8)v27 & 1) != 0 )
        goto LABEL_33;
      goto LABEL_34;
    }
LABEL_60:
    v44 = v42(v43);
    goto LABEL_61;
  }
  if ( (v11 & 0x80) != 0 )
  {
    v46 = v10[7];
    v47 = (unsigned int (__fastcall *)(_QWORD))v10[6];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 2;
    v48 = (_QWORD *)(a1 + v46);
    if ( ((unsigned __int8)v47 & 1) != 0 )
      v47 = *(unsigned int (__fastcall **)(_QWORD))((char *)v47 + *v48 - 1);
    if ( !v47(v48) )
      return 0;
    v49 = v10[3];
    v42 = (__int64 (__fastcall *)(_QWORD))v10[2];
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = 0;
    v43 = (_QWORD *)(a1 + v49);
    if ( ((unsigned __int8)v42 & 1) != 0 )
      goto LABEL_68;
    goto LABEL_60;
  }
  v13 = 0;
  v14 = 0;
  v15 = v10 + 2;
  if ( !*((_BYTE *)v10 + 12) )
    goto LABEL_35;
  while ( 1 )
  {
    v16 = v15[1];
    v17 = (__int64 (__fastcall *)(_QWORD))*v15;
    *(_QWORD *)(a1 + 4352) = a2;
    *(_QWORD *)(a1 + 4344) = v10;
    *(_DWORD *)(a1 + 4360) = v13;
    v18 = (_QWORD *)(a1 + v16);
    if ( ((unsigned __int8)v17 & 1) != 0 )
      v17 = *(__int64 (__fastcall **)(_QWORD))((char *)v17 + *v18 - 1);
    v19 = v17(v18);
    if ( !v19 )
      return 0;
    v13 += v19;
    ++v14;
    v15 += 2;
    if ( *((unsigned __int8 *)v10 + 12) <= v14 )
      goto LABEL_35;
  }
}

