__int64 __fastcall sub_3880(__int64 a1)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // r8d
  unsigned __int64 v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  __int64 result; // rax
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rax
  __int64 *v17; // rsi
  int v18; // edi
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 *v24; // rsi
  int v25; // edi
  __int16 v26; // dx
  char v27; // si
  __int16 v28; // r12
  __int16 v29; // ax
  unsigned __int8 v30; // cl
  int v31; // esi
  char v32; // r13
  unsigned __int8 v33; // bl
  __int16 v34; // dx
  unsigned __int8 v35; // al
  __int16 v36; // ax
  unsigned __int8 v37; // al
  __int16 v38; // cx
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  __int16 v42; // cx
  __int16 v43; // dx
  __int16 v44; // ax
  unsigned __int8 v45; // al
  __int16 v46; // ax
  __int64 v47; // rcx
  __int64 v48; // rcx

  next_byte = insn_get_next_byte();
  if ( next_byte == 0x91 )
  {
    *(_DWORD *)(a1 + 28) |= 2u;
    v19 = insn_get_next_byte();
    v20 = 50;
    v21 = 0;
    v22 = v19;
    v3 = v19;
LABEL_21:
    if ( v21 < v20 )
    {
      while ( 1 )
      {
        v23 = (v20 + v21) >> 1;
        v24 = &qword_8540[v23];
        v25 = *((unsigned __int8 *)v24 + 4);
        if ( v22 - v25 < 0 )
        {
          v20 = (v20 + v21) >> 1;
          goto LABEL_21;
        }
        if ( v22 == v25 )
          break;
        v21 = v23 + 1;
        if ( v23 + 1 >= v20 )
          goto LABEL_9;
      }
      if ( v24 )
      {
        v26 = *(unsigned __int8 *)v24;
        *(_WORD *)(a1 + 24) = v26;
        if ( v26 )
        {
          v27 = 1;
          v28 = 2;
          goto LABEL_29;
        }
        return 0;
      }
    }
LABEL_9:
    *(_WORD *)(a1 + 24) = 0;
    return 0;
  }
  v3 = next_byte;
  if ( next_byte == 0x92 )
  {
    *(_DWORD *)(a1 + 28) |= 2u;
    v12 = insn_get_next_byte();
    v13 = 137;
    v14 = 0;
    v15 = v12;
    v3 = v12;
LABEL_13:
    if ( v14 >= v13 )
      goto LABEL_9;
    while ( 1 )
    {
      v16 = (v13 + v14) >> 1;
      v17 = &qword_80E0[v16];
      v18 = *((unsigned __int8 *)v17 + 4);
      if ( v15 - v18 < 0 )
      {
        v13 = (v13 + v14) >> 1;
        goto LABEL_13;
      }
      if ( v15 == v18 )
        break;
      v14 = v16 + 1;
      if ( v16 + 1 >= v13 )
        goto LABEL_9;
    }
    if ( !v17 )
      goto LABEL_9;
    v26 = *(unsigned __int8 *)v17;
    *(_WORD *)(a1 + 24) = v26;
    if ( !v26 )
      return 0;
LABEL_28:
    v27 = 0;
    v28 = 1;
    goto LABEL_29;
  }
  if ( next_byte != 0x90 )
  {
    v26 = *((unsigned __int8 *)qword_8A00 + next_byte);
    *(_WORD *)(a1 + 24) = v26;
    if ( !v26 )
      return 0;
    goto LABEL_28;
  }
  v4 = insn_get_next_byte();
  v5 = 100;
  v6 = 0;
  v7 = v4;
  v3 = v4;
LABEL_5:
  if ( v6 >= v5 )
    goto LABEL_9;
  while ( 1 )
  {
    v8 = (v5 + v6) >> 1;
    v9 = &qword_86E0[v8];
    v10 = *((unsigned __int8 *)v9 + 4);
    if ( v7 - v10 < 0 )
    {
      v5 = (v5 + v6) >> 1;
      goto LABEL_5;
    }
    if ( v7 == v10 )
      break;
    v6 = v8 + 1;
    if ( v8 + 1 >= v5 )
      goto LABEL_9;
  }
  if ( !v9 )
    goto LABEL_9;
  v26 = *(unsigned __int8 *)v9;
  v28 = 2;
  v27 = 1;
  *(_WORD *)(a1 + 24) = v26;
  if ( !v26 )
    return 0;
LABEL_29:
  switch ( v3 >> 4 )
  {
    case 0:
      v44 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 42) = v44;
      v45 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 56) = v45;
      *(_QWORD *)(a1 + 88) = v3 >> 1;
      v46 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 121) = 7;
      *(_BYTE *)(a1 + 125) = 9;
      *(_BYTE *)(a1 + 122) = v46;
      v47 = (char)insn_get_next_byte();
      result = *(unsigned __int16 *)(a1 + 26);
      *(_QWORD *)(a1 + 136) = v47 + *(_QWORD *)(a1 + 8) + result;
      return result;
    case 1:
      v36 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 41) = 2;
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 42) = v36;
      v37 = insn_get_next_byte();
      *(_BYTE *)(a1 + 81) = 5;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 56) = v37;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_QWORD *)(a1 + 88) = (v3 >> 1) & 7;
      return result;
    case 2:
      goto LABEL_39;
    case 3:
      *(_BYTE *)(a1 + 41) = 2;
      v29 = *(_WORD *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = 0;
      goto LABEL_41;
    case 4:
      *(_BYTE *)(a1 + 41) = 1;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = 0;
      if ( v26 == 39 )
      {
LABEL_85:
        *(_WORD *)(a1 + 46) = v28;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 86) = 0;
      }
      else
      {
        *(_WORD *)(a1 + 46) = 0;
      }
      return result;
    case 5:
      *(_BYTE *)(a1 + 41) = 1;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = 0;
      *(_WORD *)(a1 + 46) = v28;
      return result;
    case 6:
      v29 = *(_WORD *)(a1 + 26);
      if ( (*(_BYTE *)(a1 + 28) & 2) != 0 )
      {
        *(_BYTE *)(a1 + 41) = 2;
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 42) = v29;
        v35 = insn_get_next_byte();
        *(_DWORD *)(a1 + 28) |= 4u;
        *(_WORD *)(a1 + 46) = v28;
        *(_QWORD *)(a1 + 56) = v35;
        return *(unsigned __int16 *)(a1 + 26);
      }
      *(_BYTE *)(a1 + 41) = 4;
      *(_BYTE *)(a1 + 45) = 0;
      *(_WORD *)(a1 + 46) = v28;
      goto LABEL_41;
    case 7:
      *(_BYTE *)(a1 + 41) = 3;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = 0;
      *(_WORD *)(a1 + 46) = v28;
      return result;
    case 8:
      result = *(unsigned __int16 *)(a1 + 26);
      if ( (unsigned __int16)(v26 - 43) <= 1u )
      {
        v33 = v3 & 3;
        v34 = 3;
        if ( v33 != 2 )
        {
          v34 = v33;
          if ( v33 == 1 )
            v34 = v28;
        }
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = v34;
      }
      return result;
    case 9:
      result = *(unsigned __int16 *)(a1 + 26);
      switch ( v3 )
      {
        case 0x93:
          if ( v27 )
          {
            v42 = 2;
            v43 = 1;
          }
          else
          {
            v42 = 1;
            v43 = 2;
          }
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v42;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v43;
          break;
        case 0x94:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 4;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v28;
          break;
        case 0x95:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 4;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 0;
          break;
        case 0x96:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v28;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 4;
          break;
        case 0x97:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          goto LABEL_85;
        case 0x9E:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 4;
          break;
        case 0x9F:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v28;
          break;
        default:
          return result;
      }
      return result;
    case 10:
      if ( v26 == 10 )
      {
LABEL_39:
        v29 = *(_WORD *)(a1 + 26);
        if ( (*(_BYTE *)(a1 + 28) & 2) != 0 )
        {
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 1;
LABEL_41:
          *(_BYTE *)(a1 + 42) = v29;
          *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
          result = *(unsigned __int16 *)(a1 + 26);
        }
        else
        {
          *(_BYTE *)(a1 + 41) = 7;
          *(_BYTE *)(a1 + 45) = 9;
          *(_BYTE *)(a1 + 42) = v29;
          v48 = (char)insn_get_next_byte();
          result = *(unsigned __int16 *)(a1 + 26);
          *(_QWORD *)(a1 + 56) = v48 + *(_QWORD *)(a1 + 8) + result;
        }
      }
      else
      {
        if ( v3 != 0xA3 && v3 != 0xAE )
          v28 = 0;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = v28;
        v39 = insn_get_next_byte();
        *(_BYTE *)(a1 + 81) = 5;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 88) = v39;
        result = *(unsigned __int16 *)(a1 + 26);
      }
      break;
    case 11:
      v38 = *(_WORD *)(a1 + 26);
      switch ( v3 )
      {
        case 0xB3:
        case 0xBE:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v28;
          goto LABEL_76;
        case 0xB7:
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 42) = v38;
          v40 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 56) = v40;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_WORD *)(a1 + 86) = 0;
          return result;
        case 0xBC:
        case 0xBD:
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 1;
          *(_BYTE *)(a1 + 42) = v38;
          *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
          if ( (*(_BYTE *)(a1 + 28) & 2) == 0 )
            goto LABEL_79;
          return *(unsigned __int16 *)(a1 + 26);
        case 0xBF:
          *(_BYTE *)(a1 + 41) = 2;
          *(_BYTE *)(a1 + 45) = 0;
          *(_BYTE *)(a1 + 42) = v38;
          v41 = insn_get_next_byte();
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 56) = v41;
          *(_WORD *)(a1 + 86) = v28;
          return *(unsigned __int16 *)(a1 + 26);
        default:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 0;
LABEL_76:
          *(_BYTE *)(a1 + 81) = 2;
          *(_BYTE *)(a1 + 85) = 0;
          *(_BYTE *)(a1 + 82) = v38;
          *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte();
          break;
      }
      return *(unsigned __int16 *)(a1 + 26);
    case 12:
      v30 = 0;
      v31 = 1;
      v32 = 0;
      goto LABEL_43;
    case 13:
      v32 = v28;
      v30 = v28;
      v31 = 1;
      goto LABEL_43;
    case 14:
      v32 = v28;
      v30 = v28;
      v31 = 0;
      goto LABEL_43;
    case 15:
      v32 = v28;
      v30 = v28;
      v31 = 2;
LABEL_43:
      switch ( v3 & 0xF )
      {
        case 3:
        case 0xE:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = v28;
          goto LABEL_45;
        case 7:
          sub_3790(a1, a1 + 40, v31, v30);
          *(_BYTE *)(a1 + 81) = 1;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 0;
          return result;
        case 0xC:
        case 0xD:
          sub_3790(a1, a1 + 40, v31, v30);
          if ( (*(_BYTE *)(a1 + 28) & 2) != 0 || v32 )
            return *(unsigned __int16 *)(a1 + 26);
LABEL_79:
          *(_BYTE *)(a1 + 41) = 7;
          result = *(unsigned __int16 *)(a1 + 26);
          *(_BYTE *)(a1 + 45) = 9;
          return result;
        case 0xF:
          sub_3790(a1, a1 + 40, v31, v30);
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = v28;
          return *(unsigned __int16 *)(a1 + 26);
        default:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 0;
LABEL_45:
          sub_3790(a1, a1 + 80, v31, v30);
          result = *(unsigned __int16 *)(a1 + 26);
          break;
      }
      return result;
  }
  return result;
}

