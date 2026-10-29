__int64 __fastcall sub_84D0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // r14
  char v7; // al
  unsigned __int8 v8; // dl
  __int16 v9; // ax
  __int64 result; // rax
  char v11; // al
  char v12; // al
  unsigned __int8 v13; // al
  char v14; // al
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // cl
  char v20; // al
  __int16 v21; // ax
  __int16 v22; // ax
  char v23; // al
  int v24; // ebx
  char v25; // al
  char v26; // al
  __int16 v27; // ax
  __int16 v28; // ax
  char v29; // al
  char next_byte; // al
  __int16 v31; // ax
  __int64 v32; // rax
  __int16 v33; // ax
  unsigned __int8 v34; // al
  char v35; // cl
  __int16 v36; // dx

  if ( (a4 & 0x80) != 0 )
    *(_BYTE *)(a1 + 227) = insn_get_next_byte();
  if ( (a4 & 0x1000) != 0 && (*(_BYTE *)(a1 + 227) & 0xF) != 0 || (a4 & 0x2000) != 0 && *(_BYTE *)(a1 + 227) > 0xFu )
    return 0;
  switch ( a4 & 0x7F )
  {
    case 0:
      goto LABEL_12;
    case 1:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (*(_BYTE *)(a1 + 227) >> 4) & 7;
      goto LABEL_12;
    case 2:
      v17 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_BYTE *)(a3 + 2) = v17;
      *(_QWORD *)(a3 + 8) = (unsigned __int8)insn_get_next_byte();
      goto LABEL_12;
    case 3:
      v16 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_BYTE *)(a3 + 2) = v16;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)insn_get_next_word();
      goto LABEL_12;
    case 4:
      if ( *(_WORD *)(a1 + 224) <= 0xFFFu )
        return 0;
      v15 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 2;
      *(_BYTE *)(a3 + 2) = v15;
      *(_QWORD *)(a3 + 8) = (unsigned int)insn_get_next_dword();
      goto LABEL_12;
    case 5:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 0;
      *(_WORD *)(a3 + 6) = 43;
      goto LABEL_12;
    case 6:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 0;
      *(_WORD *)(a3 + 6) = 44;
      goto LABEL_12;
    case 7:
      v14 = *(_BYTE *)(a1 + 227);
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 0;
      *(_WORD *)(a3 + 6) = (v14 & 0xF) + 16;
      goto LABEL_12;
    case 8:
      v13 = *(_BYTE *)(a1 + 227);
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 0;
      *(_WORD *)(a3 + 6) = (unsigned __int8)((v13 >> 4) + 16);
      goto LABEL_12;
    case 9:
      goto LABEL_17;
    case 0xA:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = *(_BYTE *)(a1 + 227) >> 4;
      goto LABEL_12;
    case 0xB:
      if ( (*(_BYTE *)(a1 + 227) & 8) != 0 )
        return 0;
      goto LABEL_32;
    case 0xC:
      if ( *(char *)(a1 + 227) >= 0 )
        goto LABEL_37;
      return 0;
    case 0xD:
      if ( (*(_BYTE *)(a1 + 227) & 8) != 0 )
      {
LABEL_32:
        if ( *(_WORD *)(a1 + 224) <= 0xFFFu )
          return 0;
LABEL_33:
        *(_BYTE *)(a3 + 1) = 1;
        *(_BYTE *)(a3 + 5) = 2;
        *(_WORD *)(a3 + 6) = (*(_BYTE *)(a1 + 227) & 7) + 32;
LABEL_12:
        result = 1;
      }
      else
      {
        result = 0;
      }
      break;
    case 0xE:
      if ( *(char *)(a1 + 227) >= 0 )
        return 0;
LABEL_37:
      if ( *(_WORD *)(a1 + 224) <= 0xFFFu )
        return 0;
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = ((*(_BYTE *)(a1 + 227) >> 4) & 7) + 32;
      goto LABEL_12;
    case 0xF:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = 1;
      goto LABEL_12;
    case 0x10:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = 2;
      goto LABEL_12;
    case 0x11:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = 4;
      goto LABEL_12;
    case 0x12:
      if ( *(char *)(a1 + 228) < 0 )
        return 0;
      *(_BYTE *)(a3 + 1) = 3;
      *(_BYTE *)(a3 + 5) = 2;
      v8 = *(_BYTE *)(a1 + 228);
      v9 = 32 * (*(_WORD *)(a1 + 224) > 0xFFFu);
      goto LABEL_11;
    case 0x13:
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 5) = 0;
      next_byte = *(_BYTE *)(a1 + 228);
      goto LABEL_79;
    case 0x14:
      v33 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      *(_BYTE *)(a3 + 2) = v33;
      *(_QWORD *)(a3 + 16) = ((char)insn_get_next_byte() + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26))
                           & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_12;
    case 0x15:
      v31 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      *(_BYTE *)(a3 + 2) = v31;
      v32 = (__int16)insn_get_next_word() + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a3 + 33) |= 0x10u;
      *(_QWORD *)(a3 + 16) = v32 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_12;
    case 0x16:
      v7 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v7 = 1;
        if ( (a4 & 0x200) == 0 )
          v7 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v7;
      *(_BYTE *)(a3 + 1) = 3;
      v8 = *(_BYTE *)(a1 + 227);
      v9 = 32 * (*(_WORD *)(a1 + 224) > 0xFFFu);
LABEL_11:
      *(_BYTE *)(a3 + 32) = 0;
      *(_WORD *)(a3 + 6) = ((v8 >> 4) & 7) + v9;
      goto LABEL_12;
    case 0x17:
      v4 = a4 & 0x100;
      if ( (*(_BYTE *)(a1 + 224) & 8) != 0 )
        goto LABEL_89;
      v28 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 2) = v28;
      v29 = 0;
      if ( !v4 )
      {
        v29 = 1;
        if ( (a4 & 0x200) == 0 )
          v29 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v29;
      next_byte = insn_get_next_byte();
LABEL_79:
      *(_QWORD *)(a3 + 16) = (int)(*(_DWORD *)&next_byte | 0xFFFFFF00);
      sub_8300(a1, a3);
      goto LABEL_12;
    case 0x18:
      *(_BYTE *)(a3 + 1) = 2;
      v26 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v26 = 1;
        if ( (a4 & 0x200) == 0 )
          v26 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v26;
      v27 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 33) |= 0x10u;
      *(_BYTE *)(a3 + 2) = v27;
      *(_QWORD *)(a3 + 16) = (__int16)insn_get_next_word();
      sub_8300(a1, a3);
      goto LABEL_12;
    case 0x19:
      v22 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 2) = v22;
      v23 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v23 = 1;
        if ( (a4 & 0x200) == 0 )
          v23 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v23;
      v24 = (unsigned __int8)insn_get_next_byte();
      if ( *(_BYTE *)(a1 + 225) < 0x10u && v24 )
        return 0;
      *(_QWORD *)(a3 + 16) = (unsigned __int16)insn_get_next_word() | (unsigned int)(v24 << 16);
      v25 = 16;
      if ( *(_WORD *)(a1 + 224) > 0xFFFu )
        v25 = 32;
      *(_BYTE *)(a3 + 33) |= v25;
      goto LABEL_12;
    case 0x1A:
      *(_BYTE *)(a3 + 1) = 2;
      v20 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v20 = 1;
        if ( (a4 & 0x200) == 0 )
          v20 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v20;
      v21 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 33) |= 0x40u;
      *(_BYTE *)(a3 + 2) = v21;
      *(_QWORD *)(a3 + 16) = (unsigned int)insn_get_next_dword();
      goto LABEL_12;
    case 0x1B:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 41;
      goto LABEL_12;
    case 0x1C:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 40;
      goto LABEL_12;
    case 0x1D:
      v19 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v19 = 1;
        if ( (a4 & 0x200) == 0 )
          v19 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      sub_8370(a1, a2, a3, v19);
      goto LABEL_12;
    case 0x1E:
      v18 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 32) = 3;
      *(_BYTE *)(a3 + 2) = v18;
      *(_BYTE *)(a3 + 5) = (*(_WORD *)(a1 + 224) > 0xFFFu) + 1;
      *(_QWORD *)(a3 + 16) = (unsigned __int8)insn_get_next_byte();
      goto LABEL_12;
    case 0x1F:
      if ( (*(_BYTE *)(a1 + 227) & 8) != 0 )
        return 0;
      if ( *(_WORD *)(a1 + 224) > 0xFFFu )
        goto LABEL_33;
LABEL_17:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      *(_WORD *)(a3 + 6) = *(_BYTE *)(a1 + 227) & 0xF;
      goto LABEL_12;
    case 0x20:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = 8;
      goto LABEL_12;
    case 0x21:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 47;
      goto LABEL_12;
    case 0x22:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 48;
      goto LABEL_12;
    case 0x23:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = *(_BYTE *)(a1 + 227) & 0xF;
      goto LABEL_12;
    case 0x24:
      *(_BYTE *)(a3 + 1) = 5;
      *(_QWORD *)(a3 + 8) = *(_BYTE *)(a1 + 227) >> 4;
      v12 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v12 = 1;
        if ( (a4 & 0x200) == 0 )
          v12 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 5) = v12;
      goto LABEL_12;
    case 0x27:
      *(_BYTE *)(a3 + 1) = 5;
      v11 = 0;
      if ( (a4 & 0x100) == 0 )
      {
        v11 = 1;
        if ( (a4 & 0x200) == 0 )
          v11 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 4) &= ~8u;
      *(_BYTE *)(a3 + 5) = v11;
      *(_QWORD *)(a3 + 8) = 1;
      goto LABEL_12;
    default:
      if ( under_debugger )
        BUG();
      interr();
LABEL_89:
      v34 = insn_get_next_byte();
      v35 = 0;
      if ( !v4 )
      {
        v35 = 1;
        if ( (a4 & 0x200) == 0 )
          v35 = (a4 & 0x400) == 0 ? 9 : 2;
      }
      *(_BYTE *)(a3 + 1) = 2;
      v36 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a3 + 5) = v35;
      *(_QWORD *)(a3 + 16) = v34;
      *(_BYTE *)(a3 + 2) = v36 - 1;
      *(_BYTE *)(a3 + 32) = 1;
      goto LABEL_12;
  }
  return result;
}

