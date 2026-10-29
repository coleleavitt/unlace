__int64 __fastcall sub_58D0(__int64 a1, __int64 a2)
{
  unsigned int next_byte; // r12d
  unsigned int v4; // eax
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int16 v11; // ax
  int v12; // edx
  __int64 v13; // rcx
  char v14; // dl
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int16 v20; // dx
  char v21; // al
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // si
  unsigned __int8 v27; // al
  int v28; // ecx
  int v29; // r12d
  __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // rdx
  __int16 v33; // ax
  int v34; // edx
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  char v37; // al
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rax
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // ecx
  unsigned __int8 v45; // al
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // ecx
  int next_word; // ebp
  int v52; // edx
  __int64 v53; // rcx
  int v54; // edx
  unsigned __int8 v55; // al
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // al
  unsigned __int8 v58; // al
  unsigned __int8 v59; // al
  unsigned __int64 v60; // rax
  unsigned __int8 v61; // al
  int v62; // edx
  __int16 v63; // ax
  int v64; // eax
  char v65; // si
  unsigned int v66; // edx
  char v67; // dl
  __int16 v68; // ax
  unsigned __int64 v69; // rax
  unsigned __int8 v70; // al
  __int64 v71; // rcx
  char v72; // dl
  __int16 v73; // ax
  __int16 v74; // ax
  char v75; // al

  if ( !a2 )
    return 0;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 125) = 0;
  next_byte = (unsigned __int8)insn_get_next_byte();
  v4 = next_byte >> 4;
  if ( next_byte <= 0x1F )
  {
    v11 = *((char *)qword_9140 + next_byte);
    *(_WORD *)(a2 + 24) = v11;
    v12 = *(_DWORD *)(a1 + 124);
    if ( v12 == 5 )
      goto LABEL_37;
    if ( v11 == 123 )
      return 0;
    if ( (unsigned int)(v12 - 1) > 1 )
    {
LABEL_37:
      if ( (unsigned __int16)(v11 - 109) <= 1u )
        return 0;
    }
    switch ( (char)next_byte )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
      case 6:
      case 7:
      case 17:
      case 18:
      case 19:
      case 21:
      case 22:
      case 23:
        goto LABEL_43;
      case 4:
      case 11:
      case 20:
      case 27:
        if ( (next_byte & 0x10) == 0 )
          *(_BYTE *)(a2 + 85) = 1;
        sub_5790(a1, a2, next_byte, a2 + 80);
        goto LABEL_43;
      case 15:
        v38 = insn_get_next_byte();
        v39 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v38);
        *(_BYTE *)(a2 + 81) = 2;
        *(_QWORD *)(a2 + 96) = v39;
        v40 = insn_get_next_byte();
        v41 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v40);
        *(_BYTE *)(a2 + 41) = 2;
        v26 = *(_WORD *)(a2 + 26);
        *(_QWORD *)(a2 + 56) = v41;
        goto LABEL_66;
      case 16:
        v37 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v37 & 0xF;
        return *(unsigned __int16 *)(a2 + 26);
      case 28:
      case 29:
        if ( v12 != 2 )
          return 0;
        return sub_56C0(a1, a2, 119, 1, next_byte == 28, a2 + 40, a2 + 80);
      case 30:
      case 31:
        if ( v12 != 2 )
          return 0;
        return sub_56C0(a1, a2, 120, 0, next_byte == 30, a2 + 40, a2 + 80);
      default:
        v35 = insn_get_next_byte();
        if ( v35 > 0xFu )
        {
          v69 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v35);
          *(_BYTE *)(a2 + 81) = 2;
          *(_QWORD *)(a2 + 96) = v69;
        }
        else
        {
          *(_QWORD *)(a2 + 88) = v35;
          *(_BYTE *)(a2 + 81) = 5;
        }
LABEL_43:
        v24 = insn_get_next_byte();
        v25 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v24);
        *(_BYTE *)(a2 + 41) = 2;
        *(_QWORD *)(a2 + 56) = v25;
        result = *(unsigned __int16 *)(a2 + 26);
        v26 = *(_WORD *)(a2 + 26);
        if ( (unsigned __int8)next_byte <= 0x16u )
        {
          if ( ((1LL << next_byte) & 0x400FBE) != 0 )
          {
LABEL_45:
            *(_BYTE *)(a2 + 45) = 1;
          }
          else if ( ((1LL << next_byte) & 0xF040) != 0 )
          {
LABEL_66:
            *(_BYTE *)(a2 + 45) = 2;
            result = v26;
          }
        }
        break;
    }
  }
  else
  {
    if ( v4 <= 3 )
    {
      *(_WORD *)(a2 + 24) = aAv[(next_byte >> 3) - 4];
      if ( v4 != 2 )
      {
        *(_BYTE *)(a2 + 81) = 11;
        *(_WORD *)(a2 + 86) = next_byte & 7;
        v5 = insn_get_next_byte();
        v6 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v5);
        *(_BYTE *)(a2 + 41) = 2;
        *(_QWORD *)(a2 + 56) = v6;
        *(_BYTE *)(a2 + 121) = 7;
        v7 = (char)insn_get_next_byte();
        result = *(unsigned __int16 *)(a2 + 26);
        v9 = v7 + *(_QWORD *)(a2 + 8) + result;
        v10 = 0xFFFF;
        if ( *(_DWORD *)(a1 + 124) == 2 )
          v10 = 0xFFFFF;
        *(_QWORD *)(a2 + 136) = (unsigned int)v9 & v10;
        return result;
      }
      *(_BYTE *)(a2 + 41) = 7;
      v27 = insn_get_next_byte();
      v28 = 0xFFFF;
      v29 = v27 + (((_WORD)next_byte << 8) & 0x700);
      if ( (v29 & 0x400) != 0 )
        v29 |= 0xFFFFF800;
      result = *(unsigned __int16 *)(a2 + 26);
      v30 = v29 + *(_QWORD *)(a2 + 8) + result;
      if ( *(_DWORD *)(a1 + 124) != 2 )
      {
LABEL_50:
        *(_QWORD *)(a2 + 56) = (unsigned int)v30 & v28;
        return result;
      }
LABEL_70:
      v28 = 0xFFFFF;
      goto LABEL_50;
    }
    if ( v4 <= 5 )
    {
      *(_WORD *)(a2 + 24) = *((char *)&qword_9120 + (next_byte >> 2) - 16);
      if ( (next_byte & 0x10) == 0 )
      {
        *(_BYTE *)(a2 + 125) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_BYTE *)(a2 + 45) = 1;
      }
      if ( (~(_BYTE)next_byte & 0xC) == 0 )
        ++*(_BYTE *)(a2 + 45);
      v13 = a2 + 120;
      v14 = next_byte;
      goto LABEL_18;
    }
    if ( v4 <= 0xC )
    {
      *(_WORD *)(a2 + 24) = *((char *)&qword_9100[-3] + (next_byte >> 2));
      switch ( v4 )
      {
        case 8u:
          goto LABEL_75;
        case 0xAu:
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 85) = (~(_BYTE)next_byte & 0xC) != 0;
          goto LABEL_76;
        case 6u:
LABEL_75:
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 45) = ((~(_BYTE)next_byte & 0xC) == 0) + 1;
          goto LABEL_76;
      }
      if ( (next_byte & 0xFC) == 0x7C )
      {
        *(_BYTE *)(a2 + 45) = 1;
        goto LABEL_76;
      }
      if ( (unsigned __int8)((next_byte & 0xFC) + 100) <= 0x30u )
      {
        v19 = 0x1100100000001LL;
        if ( _bittest64(&v19, (next_byte & 0xFC) + 100) )
        {
LABEL_30:
          *(_BYTE *)(a2 + 45) = 1;
          goto LABEL_31;
        }
        if ( (next_byte & 0xFC) == 0xC0 )
        {
          *(_BYTE *)(a2 + 85) = 1;
          goto LABEL_30;
        }
      }
LABEL_31:
      switch ( (_BYTE)next_byte )
      {
        case 0xC5:
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) <= 1 )
          {
            v20 = 20;
            v21 = 2;
            goto LABEL_36;
          }
          return 0;
        case 0xCD:
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) <= 1 )
          {
            v20 = 12;
            goto LABEL_35;
          }
          return 0;
        case 0xC1:
          v20 = 11;
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) <= 1 )
          {
LABEL_35:
            v21 = 1;
LABEL_36:
            *(_WORD *)(a2 + 24) = v20;
            *(_BYTE *)(a2 + 85) = v21;
            v22 = insn_get_next_byte();
            v23 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v22);
            *(_BYTE *)(a2 + 81) = 2;
            *(_QWORD *)(a2 + 96) = v23;
            *(_BYTE *)(a2 + 45) = 2;
            goto LABEL_19;
          }
          return 0;
      }
      if ( next_byte > 0xC7 )
      {
        sub_5790(a1, a2, next_byte, a2 + 40);
        return *(unsigned __int16 *)(a2 + 26);
      }
LABEL_76:
      sub_5790(a1, a2, next_byte, a2 + 80);
      goto LABEL_19;
    }
    v31 = next_byte & 0xF;
    v32 = next_byte & 0xF;
    if ( v4 == 13 )
    {
      *(_BYTE *)(a2 + 41) = 7;
      *(_WORD *)(a2 + 24) = a21430576[v32];
      v36 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a2 + 26);
      v30 = v36 + *(_QWORD *)(a2 + 8) + result;
      v28 = 0xFFFF;
      if ( *(_DWORD *)(a1 + 124) != 2 )
        goto LABEL_50;
      goto LABEL_70;
    }
    if ( v4 == 14 )
    {
      switch ( v31 )
      {
        case 0:
        case 1:
          if ( (next_byte & 1) != 0 )
          {
            if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) > 1 )
              return 0;
            *(_WORD *)(a2 + 24) = 29;
            *(_BYTE *)(a2 + 45) = 1;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 28;
          }
          *(_BYTE *)(a2 + 41) = 2;
          v45 = insn_get_next_byte();
          *(_QWORD *)(a2 + 56) = sub_55F0(a1, *(_QWORD *)(a2 + 16), v45);
          v46 = insn_get_next_byte();
          v47 = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 81) = 7;
          v48 = v46;
          result = v47;
          v49 = v48 + *(_QWORD *)(a2 + 8) + v47;
          v50 = 0xFFFF;
          if ( *(_DWORD *)(a1 + 124) == 2 )
            v50 = 0xFFFFF;
          *(_QWORD *)(a2 + 96) = (unsigned int)v49 & v50;
          break;
        case 2:
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) > 1 )
            return 0;
          *(_WORD *)(a2 + 24) = 107;
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 81) = 8;
          v55 = insn_get_next_byte();
          v56 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v55);
          *(_BYTE *)(a2 + 121) = 5;
          *(_QWORD *)(a2 + 96) = v56;
          v57 = insn_get_next_byte();
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 128) = v57;
          v58 = insn_get_next_byte();
          *(_QWORD *)(a2 + 56) = sub_55F0(a1, *(_QWORD *)(a2 + 16), v58);
          return *(unsigned __int16 *)(a2 + 26);
        case 3:
          v62 = *(_DWORD *)(a1 + 124);
          if ( (unsigned int)(v62 - 4) <= 1 )
            return 0;
          v63 = 13;
          if ( v62 == 2 )
            v63 = 114;
          *(_WORD *)(a2 + 24) = v63;
          sub_5790(a1, a2, 2, a2 + 40);
          return *(unsigned __int16 *)(a2 + 26);
        case 4:
          if ( *(_DWORD *)(a1 + 124) != 2 )
            return 0;
          *(_WORD *)(a2 + 24) = 113;
          *(_BYTE *)(a2 + 41) = 2;
          v59 = insn_get_next_byte();
          v60 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v59);
          *(_BYTE *)(a2 + 81) = 2;
          *(_QWORD *)(a2 + 56) = v60;
          v61 = insn_get_next_byte();
          *(_QWORD *)(a2 + 96) = sub_55F0(a1, *(_QWORD *)(a2 + 16), v61);
          return *(unsigned __int16 *)(a2 + 26);
        case 5:
        case 14:
          return 0;
        case 6:
          if ( *(_DWORD *)(a1 + 124) != 2 )
            return 0;
          *(_WORD *)(a2 + 24) = 116;
          *(_BYTE *)(a2 + 41) = 7;
          next_word = (unsigned __int16)insn_get_next_word();
          v52 = (unsigned __int8)insn_get_next_byte();
          goto LABEL_96;
        case 7:
        case 15:
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = (next_byte & 8) == 0 ? 61 : 56;
          v42 = (__int16)insn_get_next_word();
          result = *(unsigned __int16 *)(a2 + 26);
          v43 = v42 + *(_QWORD *)(a2 + 8) + result;
          v44 = 0xFFFF;
          if ( *(_DWORD *)(a1 + 124) == 2 )
            v44 = 0xFFFFF;
          *(_QWORD *)(a2 + 56) = (unsigned int)v43 & v44;
          goto LABEL_45;
        case 8:
        case 9:
          if ( *(_DWORD *)(a1 + 124) != 2 )
            return 0;
          return sub_56C0(a1, a2, 117, 1, v31 == 8, a2 + 40, a2 + 80);
        case 10:
        case 11:
          if ( *(_DWORD *)(a1 + 124) != 2 )
            return 0;
          return sub_56C0(a1, a2, 118, 0, v31 == 10, a2 + 40, a2 + 80);
        case 12:
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) > 1 )
            return 0;
          *(_WORD *)(a2 + 24) = 30;
          return *(unsigned __int16 *)(a2 + 26);
        case 13:
          if ( (unsigned int)(*(_DWORD *)(a1 + 124) - 1) > 1 )
            return 0;
          *(_WORD *)(a2 + 24) = 32;
          return *(unsigned __int16 *)(a2 + 26);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 124) == 5 )
        v33 = *((char *)qword_90C0 + v32);
      else
        v33 = *((char *)qword_90D0 + v32);
      *(_WORD *)(a2 + 24) = v33;
      v34 = *(_DWORD *)(a1 + 124);
      if ( (unsigned int)(v34 - 1) > 1 )
      {
        if ( v33 == 82 || v33 == 79 )
          return 0;
        if ( v31 == 1 )
        {
          if ( v34 == 4 )
          {
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 24) = 121;
            return result;
          }
          if ( v34 == 5 )
          {
            result = *(unsigned __int16 *)(a2 + 26);
            *(_WORD *)(a2 + 24) = 122;
            return result;
          }
          return 0;
        }
        if ( v31 != 6 )
        {
          if ( v31 != 14 )
          {
            result = *(unsigned __int16 *)(a2 + 26);
            if ( v31 == 15 && (unsigned int)(v34 - 4) <= 1 )
              *(_WORD *)(a2 + 24) = 72;
            return result;
          }
LABEL_118:
          v64 = insn_get_next_byte();
          v65 = v64;
          v66 = v64 & 0xFFFFFFFC;
          if ( (v64 & 0xFCu) > 0x9C )
            return 0;
          if ( (unsigned __int8)v66 <= 0x6Bu )
          {
            if ( (v64 & 0xEC) == 0x4C )
            {
              if ( (v64 & 0x10) != 0 )
              {
                v67 = 1;
                v68 = 65;
              }
              else
              {
                *(_BYTE *)(a2 + 85) = 1;
                v67 = 2;
                v68 = 63;
                *(_BYTE *)(a2 + 125) = 1;
              }
              *(_BYTE *)(a2 + 45) = v67;
              v13 = a2 + 120;
              v14 = v65;
              *(_WORD *)(a2 + 24) = v68;
LABEL_18:
              sub_5790(a1, a2, v14, v13);
              v15 = insn_get_next_byte();
              v16 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v15);
              *(_BYTE *)(a2 + 81) = 2;
              *(_QWORD *)(a2 + 96) = v16;
LABEL_19:
              v17 = insn_get_next_byte();
              v18 = sub_55F0(a1, *(_QWORD *)(a2 + 16), v17);
              *(_BYTE *)(a2 + 41) = 2;
              *(_QWORD *)(a2 + 56) = v18;
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          v71 = 0x1000100010001LL;
          if ( !_bittest64(&v71, v66 - 108) )
            return 0;
          v72 = v64 & 0x10;
          if ( (v64 & 0x80u) != 0 )
          {
            v73 = 24;
            if ( v72 )
            {
              v74 = 25;
              goto LABEL_141;
            }
          }
          else
          {
            v73 = 62;
            if ( v72 )
            {
              v74 = 64;
LABEL_141:
              *(_WORD *)(a2 + 24) = v74;
              v75 = 1;
LABEL_142:
              *(_BYTE *)(a2 + 45) = v75;
              sub_5790(a1, a2, v65, a2 + 80);
              goto LABEL_19;
            }
          }
          *(_WORD *)(a2 + 24) = v73;
          v75 = 2;
          *(_BYTE *)(a2 + 85) = 1;
          goto LABEL_142;
        }
        if ( v33 == 35 )
          return 0;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v31 != 1 )
      {
        if ( v31 != 6 )
        {
          if ( v31 != 14 )
            return *(unsigned __int16 *)(a2 + 26);
          goto LABEL_118;
        }
        if ( v33 == 35 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
          return *(unsigned __int16 *)(a2 + 26);
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v34 != 2 )
        return 0;
      next_word = (unsigned __int16)insn_get_next_word();
      v70 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 7;
      v52 = v70;
LABEL_96:
      result = *(unsigned __int16 *)(a2 + 26);
      v53 = (next_word | (v52 << 16)) + *(_QWORD *)(a2 + 8) + result;
      v54 = 0xFFFF;
      if ( *(_DWORD *)(a1 + 124) == 2 )
        v54 = 0xFFFFF;
      *(_QWORD *)(a2 + 56) = (unsigned int)v53 & v54;
    }
  }
  return result;
}

