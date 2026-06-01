__int64 __fastcall sub_6380(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned __int8 next_byte; // al
  int v5; // r15d
  unsigned __int8 v6; // bp
  __int16 v7; // ax
  __int64 v8; // r13
  char v9; // r14
  unsigned __int8 v10; // al
  char v11; // bp
  __int64 v12; // rcx
  __int16 v13; // dx
  __int64 v14; // rcx
  char v15; // al
  unsigned __int16 v16; // ax
  unsigned __int8 v17; // al
  unsigned __int16 v18; // ax
  unsigned __int16 next_word; // ax
  unsigned __int8 v20; // r13
  unsigned __int8 v21; // al
  unsigned __int8 v22; // r13
  __int16 v23; // ax
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r13
  __int16 v27; // ax
  __int16 v28; // bp
  unsigned __int8 v29; // al
  char v30; // dl
  unsigned __int16 v31; // ax
  char v32; // bp
  unsigned __int8 v33; // al
  __int64 v34; // rcx
  unsigned __int8 v35; // r13
  char v36; // al
  unsigned __int8 v37; // r13
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // ax
  unsigned __int8 v42; // al
  unsigned __int8 v43; // al
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // ax
  __int16 v47; // ax
  __int64 v48; // rcx
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // ax
  unsigned __int16 v52; // ax
  unsigned __int8 v53; // al
  int v54; // ebp
  __int16 v55; // ax
  unsigned __int8 v56; // al
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  unsigned __int8 v59; // al

  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  next_byte = insn_get_next_byte();
  v5 = next_byte;
  v6 = next_byte;
  v7 = *((_WORD *)qword_F140 + next_byte);
  *(_WORD *)(a2 + 24) = v7;
  if ( !v7 )
    return 0;
  v8 = (unsigned __int8)insn_get_next_byte();
  v9 = (v5 & 1) == 0;
  v10 = v5 & 0xF;
  if ( (v5 & 0xFu) > 9 )
  {
    if ( v10 == 13 )
    {
      v12 = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 41) = 10;
      v13 = (char)v8;
      *(_BYTE *)(a2 + 72) = v6 >> 4;
      *(_BYTE *)(a2 + 45) = 0;
      result = v12;
      v14 = *(_QWORD *)(a2 + 8) + v12;
LABEL_14:
      *(_BYTE *)(a2 + 81) = 7;
      *(_BYTE *)(a2 + 85) = 9;
      *(_QWORD *)(a2 + 96) = (unsigned __int16)(v14 + 2 * v13);
      return result;
    }
    if ( v10 > 0xDu )
    {
      *(_BYTE *)(a2 + 41) = 9;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 46) = v8;
      *(_BYTE *)(a2 + 72) = v6 >> 4;
      *(_BYTE *)(a2 + 45) = 1;
      return result;
    }
  }
  else if ( (v5 & 0x80u) == 0 )
  {
    v11 = v6 & 0xE;
    switch ( v11 )
    {
      case 0:
        v21 = v8;
        v22 = v8 & 0xF;
        LOBYTE(v23) = v21 >> 4;
        if ( (v5 & 1) != 0 )
        {
          v22 += 16;
          v23 = (unsigned __int8)(v23 + 16);
        }
        else
        {
          v23 = (unsigned __int8)v23;
          v11 = 1;
        }
        *(_WORD *)(a2 + 46) = v23;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = v9;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = v11;
        *(_WORD *)(a2 + 86) = v22;
        return result;
      case 2:
        if ( (unsigned __int8)sub_7210((unsigned __int8)v8) )
        {
          LOBYTE(v8) = v8 & 0xF;
          if ( (v5 & 1) != 0 )
            LOBYTE(v8) = v8 + 16;
          v15 = 1;
          LOWORD(v8) = (unsigned __int8)v8;
        }
        else
        {
          v15 = 8;
        }
        *(_BYTE *)(a2 + 41) = v15;
        *(_BYTE *)(a2 + 45) = v9;
        *(_WORD *)(a2 + 46) = v8;
        goto LABEL_21;
      case 4:
        next_word = insn_get_next_word();
        *(_BYTE *)(a2 + 41) = 2;
        *(_BYTE *)(a2 + 45) = v9;
        *(_QWORD *)(a2 + 56) = next_word;
        if ( (unsigned __int8)sub_7210((unsigned __int8)v8) )
        {
          v20 = v8 & 0xF;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = v9;
          if ( (v5 & 1) != 0 )
            v20 += 16;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 86) = v20;
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 8;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = v9;
          *(_WORD *)(a2 + 86) = v8;
        }
        return result;
      case 6:
        if ( !(unsigned __int8)sub_7210((unsigned __int8)v8) )
        {
          *(_BYTE *)(a2 + 41) = 8;
          *(_BYTE *)(a2 + 45) = v9;
          *(_WORD *)(a2 + 46) = v8;
          goto LABEL_65;
        }
        *(_BYTE *)(a2 + 41) = 1;
        LOBYTE(v8) = v8 & 0xF;
        *(_BYTE *)(a2 + 45) = v9;
        if ( (v5 & 1) != 0 )
        {
          *(_WORD *)(a2 + 46) = (unsigned __int8)(v8 + 16);
          LOBYTE(v18) = insn_get_next_word();
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          goto LABEL_30;
        }
        LOWORD(v8) = (unsigned __int8)v8;
        break;
      case 8:
        *(_BYTE *)(a2 + 41) = 1;
        v17 = (unsigned __int8)v8 >> 4;
        *(_BYTE *)(a2 + 45) = v9;
        if ( (v5 & 1) != 0 )
          v17 = ((unsigned __int8)v8 >> 4) + 16;
        *(_WORD *)(a2 + 46) = v17;
        result = *(unsigned __int16 *)(a2 + 26);
        if ( (v8 & 8) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 3;
          *(_BYTE *)(a2 + 85) = v9;
          *(_WORD *)(a2 + 86) = v8 & 3;
          *(_BYTE *)(a2 + 112) = ((unsigned __int8)v8 >> 1) & 2;
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 88) = v8 & 7;
        }
        return result;
      default:
        goto LABEL_22;
    }
LABEL_56:
    *(_WORD *)(a2 + 46) = v8;
    v18 = insn_get_next_word();
    *(_BYTE *)(a2 + 81) = 5;
    *(_BYTE *)(a2 + 85) = 1;
LABEL_31:
    *(_QWORD *)(a2 + 88) = v18;
    return *(unsigned __int16 *)(a2 + 26);
  }
  switch ( v6 )
  {
    case 0xAu:
      *(_BYTE *)(a2 + 41) = 9;
      *(_WORD *)(a2 + 46) = v8;
      *(_BYTE *)(a2 + 72) = 0;
      *(_BYTE *)(a2 + 45) = 1;
      v56 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = v56;
      v57 = insn_get_next_byte();
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 0;
      *(_QWORD *)(a2 + 128) = v57;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xBu:
    case 0x1Bu:
    case 0x2Bu:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v8 >> 4;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      goto LABEL_22;
    case 0xCu:
    case 0x2Cu:
    case 0x4Cu:
    case 0x6Cu:
    case 0xACu:
    case 0xF0u:
    case 0xF1u:
      v25 = v8;
      v26 = v8 & 0xF;
      LOBYTE(v27) = v25 >> 4;
      if ( (v5 & 1) != 0 )
      {
        v26 += 16;
        v27 = (unsigned __int8)(v27 + 16);
      }
      else
      {
        v27 = (unsigned __int8)v27;
      }
      *(_WORD *)(a2 + 46) = v27;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v9;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = v9;
      *(_WORD *)(a2 + 86) = v26;
      return result;
    case 0x1Au:
      *(_BYTE *)(a2 + 41) = 9;
      *(_WORD *)(a2 + 46) = v8;
      *(_BYTE *)(a2 + 72) = 0;
      *(_BYTE *)(a2 + 45) = 1;
      v58 = insn_get_next_byte();
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 0;
      *(_QWORD *)(a2 + 128) = v58;
      v59 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = v59;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x1Cu:
    case 0x3Cu:
    case 0x5Cu:
    case 0x7Cu:
    case 0x80u:
    case 0x90u:
    case 0xA0u:
    case 0xB0u:
    case 0xBCu:
    case 0xE0u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v9;
      v24 = v8 & 0xF;
      if ( (v5 & 1) != 0 )
        v24 += 16;
      *(_BYTE *)(a2 + 81) = 5;
      *(_WORD *)(a2 + 46) = v24;
      *(_BYTE *)(a2 + 85) = 1;
      goto LABEL_42;
    case 0x2Au:
    case 0x3Au:
    case 0x4Au:
    case 0x5Au:
    case 0x6Au:
    case 0x7Au:
      v28 = (unsigned __int8)insn_get_next_byte();
      v29 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 9;
      *(_WORD *)(a2 + 46) = v28;
      v30 = v29 & 0xF;
      *(_BYTE *)(a2 + 112) = v29 >> 4;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 72) = v30;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 9;
      *(_WORD *)(a2 + 86) = v8;
      *(_BYTE *)(a2 + 85) = 1;
      return result;
    case 0x4Bu:
    case 0x5Bu:
    case 0x6Bu:
    case 0x7Bu:
      v36 = v8;
      v35 = (unsigned __int8)v8 >> 4;
      if ( v35 != (v36 & 0xF) )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      goto LABEL_60;
    case 0x81u:
    case 0x91u:
    case 0xA1u:
    case 0xB1u:
      if ( (v8 & 0xF) != 0 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      v35 = (unsigned __int8)v8 >> 4;
      *(_BYTE *)(a2 + 45) = ((unsigned __int8)(v6 & 0x20) >> 5) ^ 1;
      if ( (v6 & 0x20) != 0 )
        v35 += 16;
LABEL_60:
      *(_WORD *)(a2 + 46) = v35;
      goto LABEL_22;
    case 0x82u:
    case 0x92u:
    case 0xA2u:
    case 0xB2u:
      if ( (~(_BYTE)v8 & 0xF0) != 0 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      goto LABEL_52;
    case 0x83u:
    case 0x93u:
    case 0xA3u:
    case 0xB3u:
    case 0xC3u:
    case 0xD3u:
      if ( !*(_DWORD *)(a1 + 272) || !(unsigned __int8)sub_5CC0(a1, (char *)a2, v5, (unsigned __int8)v8, a3) )
        return 0;
      goto LABEL_22;
    case 0x84u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_BYTE *)(a2 + 72) = 0;
LABEL_52:
      v31 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 2;
      *(_BYTE *)(a2 + 85) = 1;
      *(_QWORD *)(a2 + 96) = v31;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x85u:
      if ( (_BYTE)v8 != 122 || !sub_6340(a2, 0x85u) )
        return 0;
      goto LABEL_22;
    case 0x86u:
    case 0x96u:
    case 0xA6u:
    case 0xB6u:
      if ( (~(_BYTE)v8 & 0xF0) != 0 )
        return 0;
      *(_BYTE *)(a2 + 41) = 1;
      LOWORD(v8) = v8 & 0xF;
      *(_BYTE *)(a2 + 45) = 1;
      goto LABEL_56;
    case 0x87u:
      if ( (_BYTE)v8 != 120 || !sub_6340(a2, 0x87u) )
        return 0;
      goto LABEL_22;
    case 0x88u:
    case 0x89u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v9;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_BYTE *)(a2 + 72) = 1;
      goto LABEL_70;
    case 0x8Au:
    case 0x9Au:
    case 0xAAu:
    case 0xBAu:
      v32 = insn_get_next_byte();
      v33 = insn_get_next_byte();
      v34 = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 41) = 9;
      v13 = v32;
      *(_WORD *)(a2 + 46) = v8;
      *(_BYTE *)(a2 + 72) = v33 >> 4;
      result = v34;
      v14 = *(_QWORD *)(a2 + 8) + v34;
      *(_BYTE *)(a2 + 45) = 1;
      goto LABEL_14;
    case 0x8Cu:
    case 0xCBu:
    case 0xCCu:
    case 0xDBu:
      if ( (_BYTE)v8 )
        return 0;
      goto LABEL_22;
    case 0x94u:
      v45 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 56) = v45;
      goto LABEL_94;
    case 0x97u:
      if ( (_BYTE)v8 != 104 || !sub_6340(a2, 0x97u) )
        return 0;
      goto LABEL_22;
    case 0x98u:
    case 0x99u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v9;
      v43 = (unsigned __int8)v8 >> 4;
      if ( (v5 & 1) != 0 )
        v43 += 16;
      *(_WORD *)(a2 + 46) = v43;
      goto LABEL_86;
    case 0x9Bu:
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)v8 >> 1;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x9Cu:
    case 0xABu:
      *(_BYTE *)(a2 + 41) = 10;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 72) = (unsigned __int8)v8 >> 4;
LABEL_94:
      *(_BYTE *)(a2 + 81) = 3;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_BYTE *)(a2 + 112) = 0;
      return result;
    case 0xA4u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_BYTE *)(a2 + 72) = 0;
      goto LABEL_79;
    case 0xA5u:
      if ( (_BYTE)v8 != 90 || !sub_6340(a2, 0xA5u) )
        return 0;
      goto LABEL_22;
    case 0xA7u:
      if ( (_BYTE)v8 != 88 || !sub_6340(a2, 0xA7u) )
        return 0;
      goto LABEL_22;
    case 0xA8u:
    case 0xA9u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v9;
      v42 = (unsigned __int8)v8 >> 4;
      if ( (v5 & 1) != 0 )
        v42 += 16;
      *(_WORD *)(a2 + 46) = v42;
      goto LABEL_76;
    case 0xB4u:
      v44 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 56) = v44;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 81) = 3;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_BYTE *)(a2 + 112) = 0;
      return result;
    case 0xB5u:
      if ( (_BYTE)v8 != 74 || !sub_6340(a2, 0xB5u) )
        return 0;
      goto LABEL_22;
    case 0xB7u:
      if ( (_BYTE)v8 != 72 || !sub_6340(a2, 0xB7u) )
        return 0;
      goto LABEL_22;
    case 0xB8u:
    case 0xB9u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v9;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_BYTE *)(a2 + 72) = 0;
LABEL_70:
      *(_BYTE *)(a2 + 81) = 1;
      v37 = (unsigned __int8)v8 >> 4;
      *(_BYTE *)(a2 + 85) = v9;
      if ( (v5 & 1) != 0 )
        v37 += 16;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 86) = v37;
      return result;
    case 0xBBu:
      v48 = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      result = v48;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)(*(_WORD *)(a2 + 8) + v48 + 2 * (char)v8);
      return result;
    case 0xC0u:
    case 0xD0u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      goto LABEL_88;
    case 0xC2u:
    case 0xD2u:
      sub_5C60(a2 + 40, (unsigned __int8)v8, 1);
LABEL_79:
      v40 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 2;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 96) = v40;
      goto LABEL_22;
    case 0xC4u:
      v49 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 56) = v49;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (unsigned __int8)v8 >> 4;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      return result;
    case 0xC5u:
    case 0xD5u:
      v39 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 56) = v39;
      sub_5C60(a2 + 80, (unsigned __int8)v8, 0);
      goto LABEL_22;
    case 0xC6u:
    case 0xE6u:
    case 0xE7u:
      sub_5C60(a2 + 40, (unsigned __int8)v8, v9);
LABEL_65:
      v18 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = v9;
      if ( (v5 & 1) != 0 )
LABEL_30:
        v18 = (unsigned __int8)v18;
      goto LABEL_31;
    case 0xC8u:
    case 0xC9u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v9;
      *(_BYTE *)(a2 + 72) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v8 >> 4;
      goto LABEL_76;
    case 0xCAu:
    case 0xEAu:
      if ( ((*(_DWORD *)(a1 + 272) - 2) & 0xFFFFFFFD) != 0 )
        LOBYTE(v8) = (unsigned __int8)v8 >> 4;
      *(_BYTE *)(a2 + 41) = 10;
      *(_BYTE *)(a2 + 72) = v8;
      *(_BYTE *)(a2 + 45) = 0;
      goto LABEL_74;
    case 0xD1u:
      v47 = asc_EB78[((unsigned __int8)v8 >> 6) + 4];
      *(_WORD *)(a2 + 24) = v47;
      if ( !v47 )
        return 0;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = (((unsigned __int8)v8 >> 4) & 3) + 1LL;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xD4u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v8 >> 4;
      v46 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_QWORD *)(a2 + 96) = v46;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      return result;
    case 0xD6u:
    case 0xF2u:
    case 0xF3u:
      sub_5C60(a2 + 40, (unsigned __int8)v8, v9);
LABEL_21:
      v16 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 2;
      *(_BYTE *)(a2 + 85) = v9;
      *(_QWORD *)(a2 + 96) = v16;
      goto LABEL_22;
    case 0xD7u:
      *(_WORD *)(a2 + 24) = asc_EB78[(unsigned __int8)v8 >> 6];
      v54 = (unsigned __int8)insn_get_next_byte();
      v55 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 48) = v54 | (v55 << 8) & 0xF00;
      goto LABEL_134;
    case 0xD8u:
    case 0xD9u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v9;
      *(_BYTE *)(a2 + 72) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v8 >> 4;
LABEL_76:
      *(_BYTE *)(a2 + 81) = 3;
      *(_BYTE *)(a2 + 85) = v9;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_BYTE *)(a2 + 112) = 0;
      goto LABEL_22;
    case 0xDAu:
    case 0xFAu:
      *(_BYTE *)(a2 + 41) = 11;
      *(_QWORD *)(a2 + 56) = v8;
      *(_BYTE *)(a2 + 45) = 1;
LABEL_74:
      v38 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 7;
      *(_BYTE *)(a2 + 85) = 9;
      *(_QWORD *)(a2 + 96) = v38;
      goto LABEL_22;
    case 0xDCu:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = asc_EB78[(unsigned __int8)v8 >> 6];
      *(_WORD *)(a2 + 46) = v8 & 0xF;
LABEL_134:
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = (((unsigned __int8)v8 >> 4) & 3) + 1LL;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xE1u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = v9;
      v53 = v8 & 0xF;
      if ( (v5 & 1) != 0 )
        v53 += 16;
      *(_BYTE *)(a2 + 81) = 5;
      *(_WORD *)(a2 + 46) = v53;
      *(_BYTE *)(a2 + 85) = 0;
LABEL_42:
      *(_QWORD *)(a2 + 88) = (unsigned __int8)v8 >> 4;
      goto LABEL_22;
    case 0xE2u:
      sub_5C60(a2 + 40, (unsigned __int8)v8, 1);
      v52 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 7;
      *(_BYTE *)(a2 + 85) = 9;
      *(_QWORD *)(a2 + 96) = v52;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xE4u:
      v51 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 4;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = v8 & 0xF;
      *(_QWORD *)(a2 + 56) = v51;
LABEL_88:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = (unsigned __int8)(((unsigned __int8)v8 >> 4) + 16);
      return *(unsigned __int16 *)(a2 + 26);
    case 0xE8u:
    case 0xE9u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = v9;
      *(_BYTE *)(a2 + 72) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)v8 >> 4;
LABEL_86:
      *(_BYTE *)(a2 + 81) = 3;
      *(_BYTE *)(a2 + 85) = v9;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_BYTE *)(a2 + 112) = 2;
      goto LABEL_22;
    case 0xEBu:
    case 0xECu:
    case 0xFCu:
      sub_5C60(a2 + 40, (unsigned __int8)v8, 1);
      return *(unsigned __int16 *)(a2 + 26);
    case 0xF4u:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)(((unsigned __int8)v8 >> 4) + 16);
      v50 = insn_get_next_word();
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      *(_QWORD *)(a2 + 96) = v50;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 0;
      return result;
    case 0xF6u:
    case 0xF7u:
      v41 = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = v9;
      *(_QWORD *)(a2 + 56) = v41;
      sub_5C60(a2 + 80, (unsigned __int8)v8, v9);
      return *(unsigned __int16 *)(a2 + 26);
    case 0xFBu:
      if ( (_BYTE)v8 != 0x88 )
        return 0;
      goto LABEL_22;
    default:
LABEL_22:
      result = *(unsigned __int16 *)(a2 + 26);
      break;
  }
  return result;
}

