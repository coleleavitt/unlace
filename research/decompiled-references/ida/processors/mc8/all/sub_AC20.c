__int64 __fastcall sub_AC20(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // bp
  bool v4; // dl
  unsigned __int8 v5; // si
  char v6; // r14
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // al
  __int16 v10; // dx
  __int16 flags; // ax
  int v13; // eax
  char v14; // al
  __int16 v15; // ax
  __int64 v16; // rbp
  int v17; // eax
  char v18; // bp
  unsigned __int16 v19; // ax
  __int64 v20; // rbp
  char v21; // al
  unsigned __int8 v22; // al
  __int64 v23; // rbp
  char v24; // al
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  char v27; // al
  unsigned __int8 v28; // al
  __int16 v29; // ax
  int v30; // eax
  __int16 v31; // ax
  unsigned __int8 v32; // al
  unsigned __int16 v33; // ax
  __int16 v34; // ax
  unsigned __int8 v35; // al
  unsigned __int16 next_word; // ax
  __int16 v37; // ax
  unsigned __int8 v38; // al
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  bool v41; // dl
  __int64 v42; // rbp
  char v43; // al
  __int64 v44; // rax
  char v45; // al
  bool v46; // [rsp+Fh] [rbp-39h]

  next_byte = insn_get_next_byte();
  v4 = next_byte == 101 || next_byte == 33;
  if ( v4 )
  {
    flags = get_flags_ex();
    if ( (~flags & 0x600) == 0 || (flags & 0x1000) != 0 )
    {
      *(_WORD *)(a2 + 24) = (next_byte != 33) + 146;
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( next_byte >> 4 == 2 )
    {
      v6 = 0;
      LOBYTE(v8) = 1;
LABEL_40:
      *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_DA10 + (v8 & 0xF));
      goto LABEL_41;
    }
    v6 = 0;
    v4 = 0;
    LOBYTE(v8) = 5;
    *(_WORD *)(a2 + 24) = 255;
    v7 = 6;
LABEL_15:
    v13 = *(_DWORD *)(a1 + 224);
    if ( v13 == 4 )
      return 0;
    if ( (_BYTE)v8 == 5 )
    {
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = (unsigned __int8)aPh3qT6[((int)v7 >> 1) - 1];
      v27 = 2;
      if ( (v7 & 1) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        next_word = insn_get_next_word();
        *(_BYTE *)(a2 + 42) = 1;
        *(_QWORD *)(a2 + 48) = next_word;
        goto LABEL_42;
      }
LABEL_61:
      *(_BYTE *)(a2 + 41) = v27;
      v28 = insn_get_next_byte();
      *(_BYTE *)(a2 + 42) = 1;
      *(_QWORD *)(a2 + 56) = v28;
      goto LABEL_42;
    }
    if ( (_BYTE)v8 != 14 )
    {
      if ( v7 == 5 )
      {
        v14 = 4;
      }
      else
      {
        if ( v7 > 5u )
        {
          if ( v7 != 7 )
          {
            *(_BYTE *)(a2 + 41) = 4;
            *(_WORD *)(a2 + 46) = 0;
            v46 = v4;
            v40 = insn_get_next_byte();
            *(_BYTE *)(a2 + 42) = 1;
            v41 = v46;
            *(_QWORD *)(a2 + 56) = v40;
            *(_BYTE *)(a2 + 81) = 2 * ((_BYTE)v8 == 1) + 1;
            if ( *(_DWORD *)(a1 + 224) == 2 )
              ++*(_BYTE *)(a2 + 112);
            *(_BYTE *)(a2 + 121) = 7;
            *(_WORD *)(a2 + 86) = 5 * (next_byte == 0x9E) + 3;
            *(_BYTE *)(a2 + 122) = *(_WORD *)(a2 + 26);
            v42 = *(_QWORD *)(a2 + 8) + 3LL;
            *(_QWORD *)(a2 + 136) = (char)insn_get_next_byte() + v41 + v42;
            return *(unsigned __int16 *)(a2 + 26);
          }
          *(_WORD *)(a2 + 46) = 3;
          *(_BYTE *)(a2 + 41) = 2 * ((_BYTE)v8 == 1) + 1;
          goto LABEL_24;
        }
        if ( v7 == 3 )
        {
          *(_BYTE *)(a2 + 41) = 2;
          v39 = insn_get_next_byte();
          *(_BYTE *)(a2 + 42) = 1;
          *(_QWORD *)(a2 + 56) = v39;
          goto LABEL_24;
        }
        v14 = *(_BYTE *)(a2 + 32) + 1;
      }
      *(_BYTE *)(a2 + 32) = v14;
      if ( (_BYTE)v8 == 11 )
      {
LABEL_41:
        *(_BYTE *)(a2 + 41) = 7;
        v20 = *(_QWORD *)(a2 + 8);
        v21 = insn_get_next_byte();
        *(_BYTE *)(a2 + 42) = 1;
        *(_QWORD *)(a2 + 56) = v20 + v21 + 2;
        goto LABEL_42;
      }
      *(_WORD *)(a2 + 41) = 261;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
LABEL_24:
      v15 = *(_WORD *)(a2 + 26);
      v16 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 81) = 7;
      *(_BYTE *)(a2 + 82) = v15;
      *(_QWORD *)(a2 + 96) = (char)insn_get_next_byte() + v16 + *(unsigned __int16 *)(a2 + 26);
      goto LABEL_42;
    }
    if ( v13 == 3 && v7 == 3 )
    {
      *(_WORD *)(a2 + 24) = 51;
LABEL_52:
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 41) = 2;
LABEL_53:
      v26 = insn_get_next_word();
      *(_BYTE *)(a2 + 42) = 1;
      *(_QWORD *)(a2 + 56) = v26;
      goto LABEL_42;
    }
    v38 = insn_get_next_byte();
    *(_BYTE *)(a2 + 42) = 1;
    *(_QWORD *)(a2 + 56) = v38;
    switch ( v7 )
    {
      case 6u:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v38;
        break;
      case 7u:
        *(_QWORD *)(a2 + 96) = v38;
        *(_WORD *)(a2 + 41) = 3;
        *(_WORD *)(a2 + 46) = 3;
        goto LABEL_119;
      case 4u:
        *(_BYTE *)(a2 + 41) = 2;
        break;
      case 5u:
        *(_BYTE *)(a2 + 41) = 2;
        *(_BYTE *)(a2 + 81) = 3;
        *(_WORD *)(a2 + 86) = 3;
        goto LABEL_42;
      default:
        return 0;
    }
    *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
LABEL_119:
    v43 = *(_BYTE *)(a2 + 26);
    *(_BYTE *)(a2 + 81) = 2;
    *(_BYTE *)(a2 + 82) = v43 - 1;
    goto LABEL_42;
  }
  v5 = next_byte;
  v6 = 0;
  if ( next_byte == 0x9E )
  {
    if ( *(_DWORD *)(a1 + 224) == 4 )
      return 0;
    v6 = 1;
    v9 = insn_get_next_byte();
    v4 = 1;
    v5 = v9;
  }
  v7 = v5 >> 4;
  v8 = v5 & 0xF;
  if ( v5 <= 0x9Fu )
  {
    switch ( v7 )
    {
      case 0u:
        *(_WORD *)(a2 + 24) = (v5 & 1) == 0 ? 36 : 34;
        v22 = insn_get_next_byte();
        *(_BYTE *)(a2 + 121) = 7;
        v23 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 96) = v22;
        v24 = insn_get_next_byte();
        *(_BYTE *)(a2 + 122) = 2;
        *(_QWORD *)(a2 + 136) = v23 + v24 + 3;
        goto LABEL_45;
      case 1u:
        *(_WORD *)(a2 + 24) = (v5 & 1) == 0 ? 37 : 12;
        *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
LABEL_45:
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 81) = 258;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)v8 >> 1;
        goto LABEL_42;
      case 2u:
        goto LABEL_40;
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        if ( v7 > 9u )
          break;
        v29 = (unsigned __int8)aR[v5 & 0xF];
        *(_WORD *)(a2 + 24) = v29;
        if ( !v29 )
        {
          v30 = *(_DWORD *)(a1 + 224);
          if ( v7 != 3 )
          {
            if ( v30 != 4 || v7 == 4 )
            {
              *(_WORD *)(a2 + 24) = (unsigned __int8)aPh3qT6[v7 - 1];
              goto LABEL_42;
            }
            return 0;
          }
          if ( v30 != 3 )
            return 0;
          *(_WORD *)(a2 + 24) = 72;
          goto LABEL_52;
        }
        v44 = 18466;
        if ( _bittest64(&v44, v8) )
          goto LABEL_15;
        switch ( v7 )
        {
          case 4u:
            v45 = *(_BYTE *)(a2 + 32) + 1;
            break;
          case 5u:
            v45 = 4;
            break;
          case 3u:
            goto LABEL_60;
          default:
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 3;
            if ( v7 != 7 )
            {
              if ( *(_DWORD *)(a1 + 224) == 2 )
                ++*(_BYTE *)(a2 + 112);
              if ( next_byte == 0x9E )
              {
                if ( *(_DWORD *)(a1 + 224) == 4 )
                  return 0;
                *(_WORD *)(a2 + 86) = 8;
              }
              *(_WORD *)(a2 + 46) = 0;
              *(_WORD *)(a2 + 41) = 260;
              *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
              return *(unsigned __int16 *)(a2 + 26);
            }
LABEL_42:
            if ( !v6 )
              return *(unsigned __int16 *)(a2 + 26);
            return 0;
        }
        *(_BYTE *)(a2 + 32) = v45;
        goto LABEL_42;
      case 8u:
        if ( *(_DWORD *)(a1 + 224) == 4 && (unsigned __int8)(v8 - 4) <= 9u )
          return 0;
        v10 = *((unsigned __int8 *)qword_D9F0 + (v5 & 0xF));
        *(_WORD *)(a2 + 24) = v10;
        if ( *(_DWORD *)(a1 + 224) != 3 && (((_BYTE)v10 + 113) & 0xFD) == 0 )
          return 0;
        if ( v10 == 45 )
          *(_BYTE *)(a2 + 32) = 3;
        goto LABEL_42;
      case 9u:
        if ( *(_DWORD *)(a1 + 224) == 4 )
        {
          if ( (unsigned __int8)v8 <= 6u )
            return 0;
          v31 = *((unsigned __int8 *)qword_DA00 + (v5 & 0xF));
          *(_WORD *)(a2 + 24) = v31;
          if ( !v31 )
            return 0;
          if ( (v5 & 0xC) != 0 )
            goto LABEL_42;
          goto LABEL_41;
        }
        v25 = *((unsigned __int8 *)qword_DA00 + (v5 & 0xF));
        *(_WORD *)(a2 + 24) = v25;
        if ( !v25 )
          return 0;
        if ( (v5 & 0xC) == 0 )
          goto LABEL_41;
        if ( (_BYTE)v8 != 6 )
          goto LABEL_42;
        if ( *(_DWORD *)(a1 + 224) == 3 )
          goto LABEL_52;
        return 0;
    }
  }
  *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_D9E0 + (v5 & 0xF));
  v17 = *(_DWORD *)(a1 + 224);
  if ( v17 == 3 && next_byte == 0x9E )
  {
    if ( (_BYTE)v8 == 3 && v7 == 15 )
    {
      v18 = 1;
      v7 = 14;
      *(_WORD *)(a2 + 24) = 51;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v8 > 0xDu && v7 == 15 )
    {
      v37 = 112;
      if ( (_BYTE)v8 == 14 )
        v37 = 72;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 3;
      *(_WORD *)(a2 + 24) = v37;
      if ( *(_DWORD *)(a1 + 224) == 2 )
      {
        ++*(_BYTE *)(a2 + 112);
        *(_WORD *)(a2 + 86) = 8;
        *(_BYTE *)(a2 + 41) = 4;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 86) = 8;
      }
      *(_WORD *)(a2 + 46) = 0;
      goto LABEL_99;
    }
    if ( (_BYTE)v8 == 14 )
    {
      if ( v7 <= 0xCu )
      {
        *(_WORD *)(a2 + 24) = 72;
        if ( v7 == 10 )
        {
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 3;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( v7 != 12 )
        {
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 3;
          if ( *(_DWORD *)(a1 + 224) == 2 )
            ++*(_BYTE *)(a2 + 112);
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = 0;
          v18 = 1;
LABEL_34:
          if ( *(_DWORD *)(a1 + 224) == 2 )
            ++*(_BYTE *)(a2 + 72);
          v19 = insn_get_next_word();
          *(_BYTE *)(a2 + 45) = v18;
          *(_QWORD *)(a2 + 56) = v19;
          goto LABEL_37;
        }
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 3;
        if ( *(_DWORD *)(a1 + 224) == 2 )
          ++*(_BYTE *)(a2 + 112);
        *(_BYTE *)(a2 + 41) = 4;
        *(_WORD *)(a2 + 46) = 0;
LABEL_99:
        *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
LABEL_37:
        *(_BYTE *)(a2 + 42) = 1;
        return *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_75;
    }
  }
  if ( v7 == 12 )
  {
    *(_BYTE *)(a2 + 41) = (unsigned __int8)(v8 - 12) < 2u ? 7 : 2;
    goto LABEL_53;
  }
  if ( v7 > 0xCu )
  {
LABEL_75:
    v18 = 0;
    if ( v7 == 15 )
    {
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = 3;
      goto LABEL_42;
    }
LABEL_30:
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = 3;
    if ( *(_DWORD *)(a1 + 224) == 2 )
      ++*(_BYTE *)(a2 + 112);
    if ( v6 )
    {
      if ( (unsigned __int8)(v8 - 12) <= 1u )
        return 0;
      *(_WORD *)(a2 + 86) = 8;
    }
    *(_BYTE *)(a2 + 41) = 4;
    *(_WORD *)(a2 + 46) = 0;
    if ( v7 != 14 )
      goto LABEL_34;
    goto LABEL_99;
  }
  if ( v7 != 10 )
  {
    v27 = 7;
    if ( (unsigned __int8)(v8 - 12) > 1u )
LABEL_60:
      v27 = 2;
    goto LABEL_61;
  }
  if ( (_BYTE)v8 == 13 )
  {
    *(_WORD *)(a2 + 24) = 38;
    goto LABEL_41;
  }
  if ( (unsigned __int8)v8 > 0xDu )
  {
    v34 = 7;
    if ( (_BYTE)v8 != 15 )
      goto LABEL_87;
LABEL_86:
    *(_WORD *)(a2 + 24) = v34;
    if ( *(_DWORD *)(a1 + 224) == 4 )
      return 0;
    goto LABEL_87;
  }
  if ( (_BYTE)v8 == 7 )
  {
    v34 = 6;
    goto LABEL_86;
  }
  if ( (_BYTE)v8 != 12 )
  {
LABEL_87:
    *(_BYTE *)(a2 + 41) = 5;
    v35 = insn_get_next_byte();
    *(_BYTE *)(a2 + 42) = 1;
    *(_QWORD *)(a2 + 48) = v35;
    goto LABEL_42;
  }
  if ( v17 != 3 )
    return 0;
  *(_WORD *)(a2 + 24) = 144;
  *(_BYTE *)(a2 + 41) = 5;
  v32 = insn_get_next_byte();
  *(_BYTE *)(a2 + 42) = 1;
  *(_BYTE *)(a2 + 81) = 7;
  *(_QWORD *)(a2 + 48) = v32;
  v33 = insn_get_next_word();
  *(_BYTE *)(a2 + 85) = 1;
  *(_BYTE *)(a2 + 82) = 2;
  *(_QWORD *)(a2 + 96) = v33;
  return *(unsigned __int16 *)(a2 + 26);
}

