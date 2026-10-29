__int64 __fastcall sub_B650(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // bl
  int v3; // eax
  char v4; // r14
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // dl
  __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // ax
  int v15; // ecx
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  unsigned __int8 v19; // al
  __int16 v20; // ax
  __int64 v21; // rbx
  char v22; // al
  char v23; // al
  char v24; // al
  int v25; // edx
  bool v26; // bl
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  unsigned __int8 v31; // al

  next_byte = insn_get_next_byte();
  v3 = *(_DWORD *)(a1 + 224);
  if ( next_byte == 0xCD )
  {
    v4 = 3;
    goto LABEL_21;
  }
  if ( (unsigned int)(v3 - 9) <= 1 )
  {
    v4 = 0;
  }
  else
  {
    if ( next_byte == 26 )
    {
      v4 = 2;
      goto LABEL_21;
    }
    v4 = 0;
    if ( next_byte == 24 )
    {
      v4 = 1;
LABEL_21:
      if ( v3 != 5 )
        return 0;
      next_byte = insn_get_next_byte();
    }
  }
  v5 = next_byte >> 4;
  v6 = next_byte & 0xF;
  v7 = next_byte & 0xF;
  if ( next_byte >> 4 == 2 )
  {
    v20 = *((unsigned __int8 *)qword_DA90 + v7);
    *(_WORD *)(a2 + 24) = v20;
    if ( *(_DWORD *)(a1 + 224) == 8 && v20 == 35 )
      return 0;
LABEL_49:
    v21 = *(_QWORD *)(a2 + 8);
    *(_WORD *)(a2 + 41) = 263;
    *(_QWORD *)(a2 + 56) = v21 + (char)insn_get_next_byte() + 2;
    goto LABEL_31;
  }
  if ( (unsigned __int8)(next_byte >> 4) <= 2u )
  {
    if ( v5 )
    {
      v8 = *((unsigned __int8 *)qword_DAA0 + v7);
      *(_WORD *)(a2 + 24) = v8;
      if ( v8 == 135 || v8 == 108 )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 224) - 9) > 1 )
          return 0;
        if ( v8 == 135 )
          *(_BYTE *)(a2 + 32) = 4;
      }
      else if ( (unsigned __int8)(v6 - 2) <= 3u || v6 > 0xBu )
      {
        if ( *(_DWORD *)(a1 + 224) == 5 )
        {
          *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
          if ( (next_byte & 8) != 0 )
          {
            if ( (unsigned __int8)v4 > 1u )
              return 0;
            *(_BYTE *)(a2 + 41) = 4;
            *(_WORD *)(a2 + 46) = v4 == 0 ? 3 : 5;
            v9 = (unsigned __int8)insn_get_next_byte();
            goto LABEL_18;
          }
          if ( !v4 )
          {
            *(_BYTE *)(a2 + 41) = 9;
            *(_BYTE *)(a2 + 72) = 9;
            v9 = (unsigned __int8)insn_get_next_byte();
LABEL_18:
            *(_QWORD *)(a2 + 56) = v9;
            v10 = *(_WORD *)(a2 + 26);
            *(_BYTE *)(a2 + 84) |= 0x10u;
            *(_BYTE *)(a2 + 82) = v10;
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte();
            result = *(unsigned __int16 *)(a2 + 26);
            if ( (next_byte & 2) != 0 )
            {
              *(_BYTE *)(a2 + 121) = 7;
              v12 = *(_QWORD *)(a2 + 8);
              *(_BYTE *)(a2 + 122) = result;
              v13 = (char)insn_get_next_byte();
              result = *(unsigned __int16 *)(a2 + 26);
              *(_QWORD *)(a2 + 136) = v13 + v12 + result;
            }
            return result;
          }
        }
        return 0;
      }
      goto LABEL_31;
    }
    v14 = *((unsigned __int8 *)qword_DAB0 + v7);
    *(_WORD *)(a2 + 24) = v14;
    if ( v14 == 124 )
      return 0;
    if ( (((_BYTE)v14 - 56) & 0xF7) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 224);
      if ( v15 != 5 && ((unsigned __int16)(v14 - 62) <= 1u || v15 == 8 && (v14 & 0xFD) == 0x4D) )
        return 0;
      goto LABEL_31;
    }
LABEL_37:
    if ( (unsigned __int8)v4 <= 1u )
    {
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 32) = v4 + 4;
      return result;
    }
    return 0;
  }
  if ( v5 == 3 )
  {
    v16 = *((unsigned __int8 *)qword_DA80 + v7);
    *(_WORD *)(a2 + 24) = v16;
    if ( *(_DWORD *)(a1 + 224) == 8 && (v16 == 81 || v16 == 2) )
      return 0;
    if ( (next_byte & 3) == 0 )
    {
      if ( v6 == 4 )
        goto LABEL_31;
      goto LABEL_37;
    }
    if ( v6 == 10 )
      goto LABEL_37;
    if ( v6 == 5 )
    {
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          result = *(unsigned __int16 *)(a2 + 26);
          *(_WORD *)(a2 + 24) = 132;
          return result;
        }
        return 0;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
LABEL_31:
    if ( v4 )
      return 0;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( v5 <= 7u )
  {
    v17 = *((unsigned __int8 *)qword_DA70 + v7);
    *(_WORD *)(a2 + 24) = v17;
    if ( (unsigned __int16)(v17 - 139) <= 3u )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 224) - 9) > 1 || (unsigned __int8)(v5 - 6) > 1u )
        return 0;
      v18 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 44) |= 0x10u;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 42) = v18;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
      *(_BYTE *)(a2 + 82) = *(_WORD *)(a2 + 26);
      if ( v5 != 7 )
      {
        if ( (unsigned __int8)v4 <= 1u )
        {
          v19 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 4;
          *(_QWORD *)(a2 + 96) = v19;
          *(_WORD *)(a2 + 86) = v4 == 0 ? 3 : 5;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      v31 = insn_get_next_byte();
      *(_BYTE *)(a2 + 81) = 2;
      *(_QWORD *)(a2 + 96) = v31;
      goto LABEL_31;
    }
    *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
    if ( v5 != 6 )
    {
      if ( v5 != 7 )
      {
        if ( v6 == 14 )
        {
          if ( *(_DWORD *)(a1 + 224) == 5 )
            return 0;
          *(_WORD *)(a2 + 24) = (unsigned __int8)(((next_byte & 0x10) != 0) - 120);
        }
        else
        {
          *(_BYTE *)(a2 + 32) = ((next_byte & 0x10) != 0) + 1;
        }
        goto LABEL_31;
      }
      goto LABEL_87;
    }
LABEL_104:
    if ( (unsigned __int8)v4 > 1u )
      return 0;
    goto LABEL_105;
  }
  *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_DA60 + v7);
  *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
  if ( v6 != 3 && v6 <= 0xBu )
  {
    *(_BYTE *)(a2 + 32) = ((v5 & 4) != 0) + 1;
    v22 = v5 & 3;
LABEL_53:
    if ( v22 != 2 )
    {
LABEL_54:
      if ( v22 != 3 )
      {
LABEL_55:
        if ( v22 == 1 )
        {
LABEL_93:
          *(_BYTE *)(a2 + 41) = 9;
          *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
        }
        else
        {
          v23 = *(_BYTE *)(a2 + 32);
          *(_BYTE *)(a2 + 41) = 5;
          if ( v23 && v23 <= 2 )
          {
            *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
          }
          else
          {
            *(_BYTE *)(a2 + 45) = 1;
            *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word();
          }
        }
        goto LABEL_31;
      }
LABEL_107:
      v28 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)v28 <= 0x75u )
      {
LABEL_84:
        if ( (unsigned __int16)v28 <= 0x46u )
        {
          if ( (_WORD)v28 != 5 && (unsigned __int16)(v28 - 49) > 1u )
            goto LABEL_87;
        }
        else
        {
          v29 = 0x490000000005LL;
          if ( !_bittest64(&v29, (unsigned int)(v28 - 71)) )
            goto LABEL_87;
        }
LABEL_86:
        *(_BYTE *)(a2 + 45) = 1;
      }
LABEL_87:
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
      *(_BYTE *)(a2 + 41) = (unsigned __int16)(*(_WORD *)(a2 + 24) - 67) < 2u ? 7 : 2;
      goto LABEL_31;
    }
    goto LABEL_104;
  }
  switch ( v6 )
  {
    case 3u:
      if ( *(_DWORD *)(a1 + 224) == 8 )
        return 0;
      v22 = v5 & 3;
      v27 = v5 & 4;
      if ( v27 )
      {
        *(_WORD *)(a2 + 24) = 5;
        if ( v22 == 2 )
          goto LABEL_104;
        goto LABEL_98;
      }
      if ( (unsigned __int8)v4 > 1u )
      {
        v4 -= 2;
        *(_WORD *)(a2 + 24) = 50;
        v26 = v4;
        if ( v22 == 2 )
          goto LABEL_106;
LABEL_98:
        if ( v22 != 3 )
          goto LABEL_55;
        goto LABEL_86;
      }
      if ( v22 != 2 )
        goto LABEL_54;
LABEL_105:
      v26 = v4;
      LOBYTE(v27) = 0;
LABEL_106:
      v30 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 4;
      *(_QWORD *)(a2 + 56) = v30;
      *(_WORD *)(a2 + 46) = (v26 | (unsigned __int8)v27) == 0 ? 3 : 5;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xCu:
      if ( (v5 & 4) == 0 )
      {
        v25 = 49;
        goto LABEL_81;
      }
      if ( *(_DWORD *)(a1 + 224) == 8 )
        return 0;
LABEL_74:
      v22 = v5 & 3;
      goto LABEL_53;
    case 0xDu:
      v24 = v5 & 3;
      if ( ((next_byte >> 4) & 4) != 0 )
      {
        if ( !v24 || *(_DWORD *)(a1 + 224) == 8 )
          return 0;
        goto LABEL_91;
      }
      if ( !v24 )
      {
        *(_WORD *)(a2 + 24) = 38;
        goto LABEL_49;
      }
      *(_WORD *)(a2 + 24) = 68;
      if ( *(_DWORD *)(a1 + 224) == 8 && v24 == 1 )
        return 0;
      if ( v24 == 2 )
        goto LABEL_104;
      if ( v24 != 3 )
        goto LABEL_93;
      goto LABEL_87;
    case 0xEu:
      if ( (v5 & 4) == 0 )
        goto LABEL_74;
      v25 = 69;
      goto LABEL_81;
    case 0xFu:
      v24 = v5 & 3;
      if ( (v5 & 3) == 0 )
      {
        if ( *(_DWORD *)(a1 + 224) != 5 )
          return 0;
        if ( ((next_byte >> 4) & 4) != 0 )
        {
          *(_WORD *)(a2 + 24) = 113;
          goto LABEL_31;
        }
        *(_WORD *)(a2 + 24) = 135;
        goto LABEL_37;
      }
      if ( (v5 & 4) != 0 )
      {
        v25 = 109;
LABEL_81:
        *(_WORD *)(a2 + 24) = v25;
        *(_BYTE *)(a2 + 32) = ((-10LL >> v4) & 1) + 4;
        v26 = v4 == 3;
        v22 = v5 & 3;
        LOBYTE(v27) = v4 & 1;
        if ( v22 == 2 )
          goto LABEL_106;
        v4 = v4 == 3;
        if ( v22 != 3 )
          goto LABEL_55;
        v28 = v25;
        v4 = v26;
        goto LABEL_84;
      }
LABEL_91:
      if ( v24 == 2 )
        goto LABEL_104;
      if ( v24 == 3 )
        goto LABEL_107;
      goto LABEL_93;
  }
}

