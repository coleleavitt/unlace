__int64 __fastcall sub_BE10(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rcx
  char v6; // r12
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rbp
  __int64 result; // rax
  char v13; // bp
  unsigned __int8 v14; // al
  __int16 v15; // ax
  __int16 v16; // ax
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int16 v20; // si
  char v21; // cl
  char v22; // al
  __int16 v23; // ax
  char v24; // al
  __int16 v25; // ax
  char v26; // dl
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // dl
  __int16 v30; // si
  __int16 v31; // dx
  char v32; // cl
  char v33; // cl
  char v34; // dl
  unsigned __int8 v35; // al
  __int64 next_word; // rax
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // r12
  char v44; // al

  next_byte = insn_get_next_byte();
  if ( next_byte == 16 )
  {
    v6 = 1;
    next_byte = insn_get_next_byte();
    v4 = next_byte >> 4;
    v5 = next_byte & 0xF;
    if ( next_byte >> 4 == 2 )
    {
      *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_DB60 + (next_byte & 0xF));
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  if ( next_byte == 17 )
  {
    next_byte = insn_get_next_byte();
    v4 = next_byte >> 4;
    v5 = next_byte & 0xF;
    if ( next_byte >> 4 == 2 )
    {
      *(_BYTE *)(a2 + 41) = 7;
      v18 = *(_QWORD *)(a2 + 8);
      *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_DB60 + (next_byte & 0xF));
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
LABEL_117:
      v6 = v4 - 1;
      *(_QWORD *)(a2 + 56) = (__int16)insn_get_next_word() + v18 + *(unsigned __int16 *)(a2 + 26);
      goto LABEL_23;
    }
    v6 = 2;
LABEL_18:
    if ( v4 != 3 )
    {
LABEL_5:
      if ( v4 == 1 )
      {
        v7 = *((unsigned __int8 *)qword_DB80 + (v5 & 0xF));
        *(_WORD *)(a2 + 24) = v7;
        if ( !v7 )
          return 0;
        if ( v7 != 33 && v7 != 38 )
        {
          v8 = 9215;
          if ( _bittest64(&v8, v5) )
            goto LABEL_23;
          if ( (unsigned __int8)v5 > 0xDu )
          {
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 41) = 1;
            v27 = insn_get_next_byte();
            v28 = v27 & 0xF;
            v29 = v27 >> 4;
            if ( ((v28 ^ v29) & 8) != 0 )
              return 0;
            v30 = *((char *)qword_DB70 + (v29 & 0xF));
            *(_WORD *)(a2 + 46) = v30;
            if ( (v30 & 0x80u) != 0 )
              return 0;
            v31 = *((char *)qword_DB70 + (v28 & 0xF));
            *(_WORD *)(a2 + 86) = v31;
            if ( (v31 & 0x80u) != 0 )
              return 0;
            goto LABEL_23;
          }
          goto LABEL_11;
        }
        if ( v6 )
        {
          v10 = *(_WORD *)(a2 + 26);
          v11 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 42) = v10;
          *(_QWORD *)(a2 + 56) = (__int16)insn_get_next_word() + v11 + *(unsigned __int16 *)(a2 + 26);
          return 0;
        }
LABEL_34:
        if ( (_BYTE)v5 )
        {
          v16 = *(_WORD *)(a2 + 26);
          v17 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 32) = -1;
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 42) = v16;
          *(_QWORD *)(a2 + 56) = (__int16)insn_get_next_word() + v17 + *(unsigned __int16 *)(a2 + 26);
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      if ( v4 <= 7u )
      {
        v15 = *((unsigned __int8 *)qword_DB40 + (unsigned __int8)v5);
        *(_WORD *)(a2 + 24) = v15;
        if ( !v15 )
          return 0;
        *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
        if ( v4 != 6 )
        {
          if ( v4 != 7 )
          {
            if ( v4 )
            {
              if ( v15 == 67 )
                return 0;
              *(_BYTE *)(a2 + 32) = (v4 & 1) + 1;
              goto LABEL_23;
            }
LABEL_92:
            v34 = 2;
            goto LABEL_81;
          }
          goto LABEL_63;
        }
LABEL_50:
        v24 = insn_get_next_byte();
        if ( v24 == -97 )
        {
          ++*(_BYTE *)(a2 + 73);
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 41) = 2;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
        }
        else
        {
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = *((unsigned __int8 *)&dword_DB24 + (((unsigned __int8)v24 >> 5) & 3));
          if ( v24 < 0 )
          {
            if ( (v24 & 0x1D) == 0x10 )
              return 0;
            if ( (v24 & 0x10) != 0 )
              --*(_BYTE *)(a2 + 72);
            switch ( v24 & 0xF )
            {
              case 0:
                v39 = *(_BYTE *)(a2 + 73);
                goto LABEL_105;
              case 1:
                v38 = *(_BYTE *)(a2 + 73);
                goto LABEL_104;
              case 2:
                v40 = *(_BYTE *)(a2 + 73);
                goto LABEL_107;
              case 3:
                v41 = *(_BYTE *)(a2 + 73);
                goto LABEL_111;
              case 4:
                v41 = *(_BYTE *)(a2 + 73) - 1;
LABEL_111:
                v40 = v41 - 1;
LABEL_107:
                *(_BYTE *)(a2 + 73) = v40 - 1;
                goto LABEL_23;
              case 5:
                v42 = *(_BYTE *)(a2 + 73);
                goto LABEL_114;
              case 6:
                v37 = *(_BYTE *)(a2 + 73);
                goto LABEL_103;
              case 8:
              case 9:
                goto LABEL_99;
              case 0xB:
                v42 = *(_BYTE *)(a2 + 73) + 1;
LABEL_114:
                v37 = v42 + 1;
LABEL_103:
                v38 = v37 + 1;
LABEL_104:
                v39 = v38 + 1;
LABEL_105:
                *(_BYTE *)(a2 + 73) = v39 + 1;
                break;
              default:
                if ( (unsigned __int8)((v24 & 0xF) - 12) > 1u )
                  return 0;
                *(_WORD *)(a2 + 46) = 6;
LABEL_99:
                if ( (v24 & 1) != 0 )
                  next_word = (__int16)insn_get_next_word();
                else
                  next_word = (char)insn_get_next_byte();
                *(_QWORD *)(a2 + 56) = next_word;
                break;
            }
          }
          else
          {
            ++*(_BYTE *)(a2 + 72);
            *(_QWORD *)(a2 + 56) = (char)(8 * v24) >> 3;
          }
        }
        goto LABEL_23;
      }
      v15 = *((unsigned __int8 *)qword_DB30 + (unsigned __int8)v5);
      v20 = *(_WORD *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v15;
      *(_BYTE *)(a2 + 42) = v20;
      if ( (_BYTE)v5 == 3 || (unsigned __int8)v5 > 0xBu )
      {
        switch ( (char)v5 )
        {
          case 3:
            v21 = v4 & 3;
            if ( (v4 & 4) != 0 )
            {
              *(_WORD *)(a2 + 24) = 5;
            }
            else
            {
              if ( !v6 )
                goto LABEL_43;
              v44 = 9 - v6;
              *(_WORD *)(a2 + 24) = 47;
              v6 = 0;
              *(_BYTE *)(a2 + 32) = v44;
            }
            switch ( v21 )
            {
              case 2:
                goto LABEL_50;
              case 3:
                v15 = *(_WORD *)(a2 + 24);
                goto LABEL_61;
              case 1:
                goto LABEL_92;
            }
            goto LABEL_46;
          case 12:
            v21 = v4 & 3;
            if ( (v4 & 4) != 0 )
              goto LABEL_43;
            *(_WORD *)(a2 + 24) = 47;
            *(_BYTE *)(a2 + 32) = v6 + 4;
            if ( v21 == 2 )
            {
              v6 = 0;
              goto LABEL_50;
            }
            if ( v21 == 3 )
            {
              *(_BYTE *)(a2 + 45) = 1;
              v6 = 0;
              goto LABEL_64;
            }
            if ( v21 != 1 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              *(_BYTE *)(a2 + 45) = 1;
              *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word();
              return *(unsigned __int16 *)(a2 + 26);
            }
            v6 = 0;
            v34 = 2;
            goto LABEL_81;
          case 13:
            v33 = v4 & 3;
            if ( (v4 & 4) != 0 )
            {
              switch ( v33 )
              {
                case 0:
                  return 0;
                case 2:
                  goto LABEL_50;
                case 3:
                  goto LABEL_61;
              }
              goto LABEL_80;
            }
            if ( !v33 )
            {
              *(_BYTE *)(a2 + 41) = 7;
              v18 = *(_QWORD *)(a2 + 8);
              *(_WORD *)(a2 + 24) = 38;
              if ( !v6 )
                goto LABEL_37;
              v4 = v6;
              goto LABEL_117;
            }
            *(_WORD *)(a2 + 24) = 68;
            if ( v33 == 2 )
              goto LABEL_50;
            if ( v33 != 3 )
              goto LABEL_125;
            break;
          case 14:
            goto LABEL_72;
          case 15:
            if ( (v4 & 3) == 0 )
              return 0;
LABEL_72:
            if ( v6 == 2 )
              return 0;
            v32 = v6 + 4;
            if ( (v4 & 4) != 0 )
              v32 = 7 - v6;
            v6 = 0;
            *(_BYTE *)(a2 + 32) = v32;
            v21 = v4 & 3;
            goto LABEL_43;
          default:
            v21 = v4 & 3;
            goto LABEL_43;
        }
      }
      else
      {
        if ( (_BYTE)v5 == 7 && v4 == 8 )
          return 0;
        *(_BYTE *)(a2 + 32) = ((v4 & 4) != 0) + 1;
        v21 = v4 & 3;
LABEL_43:
        if ( v21 == 2 )
          goto LABEL_50;
        if ( v21 != 3 )
        {
          if ( v21 == 1 )
          {
LABEL_80:
            v34 = 2;
            if ( v15 == 68 )
LABEL_125:
              v34 = 7;
LABEL_81:
            *(_BYTE *)(a2 + 41) = v34;
            v35 = insn_get_next_byte();
            *(_DWORD *)(a2 + 28) |= 1u;
            *(_QWORD *)(a2 + 56) = v35;
            goto LABEL_23;
          }
LABEL_46:
          v22 = *(_BYTE *)(a2 + 32);
          *(_BYTE *)(a2 + 41) = 5;
          if ( v22 <= 2 && v22 )
          {
            *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
          }
          else
          {
            *(_BYTE *)(a2 + 45) = 1;
            *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word();
          }
LABEL_23:
          if ( !v6 )
            return *(unsigned __int16 *)(a2 + 26);
          return 0;
        }
LABEL_61:
        if ( v15 != 68 )
        {
          *(_BYTE *)(a2 + 45) = 1;
LABEL_63:
          v26 = 7;
          if ( v15 != 67 )
LABEL_64:
            v26 = 2;
          goto LABEL_65;
        }
      }
      v26 = 7;
LABEL_65:
      *(_BYTE *)(a2 + 41) = v26;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
      goto LABEL_23;
    }
LABEL_19:
    if ( (next_byte & 0xC) == 0 )
    {
      v23 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = 75;
      *(_BYTE *)(a2 + 32) = v5 + 4;
      *(_BYTE *)(a2 + 42) = v23;
      goto LABEL_50;
    }
    if ( (next_byte & 8) == 0 )
    {
      v13 = next_byte & 1;
      *(_WORD *)(a2 + 24) = (next_byte & 1) == 0 ? 87 : 92;
      *(_BYTE *)(a2 + 32) = ((unsigned __int8)v5 > 5u) + 6;
      *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
      v14 = insn_get_next_byte();
      *(_WORD *)(a2 + 46) = v14;
      if ( !v14 )
      {
        v9 = 0;
        goto LABEL_12;
      }
      *(_BYTE *)(a2 + 41) = 8;
      *(_BYTE *)(a2 + 73) = -v13 & 7;
      goto LABEL_23;
    }
    v25 = *((unsigned __int8 *)&qword_DB50[-1] + (unsigned __int8)v5);
    *(_WORD *)(a2 + 24) = v25;
    if ( !v25 )
      return 0;
    if ( v25 == 53 )
      goto LABEL_11;
    if ( v6 )
    {
      if ( v25 != 118 )
      {
        if ( v25 == 2 )
          *(_BYTE *)(a2 + 32) = 4;
        return 0;
      }
      v43 = v6 + 10;
      *(_BYTE *)(a2 + 32) = v43;
      if ( v43 != 11 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 5LL) & 1) != 0 )
      {
        if ( (get_flags_ex() & 0x400) != 0 && (get_flags_ex() & 0x600) != 0x200 )
          goto LABEL_130;
        *(_WORD *)(a2 + 24) = 138;
        v6 = 0;
        *(_BYTE *)(a2 + 32) = 0;
LABEL_11:
        *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
        v9 = (unsigned __int8)insn_get_next_byte();
LABEL_12:
        *(_BYTE *)(a2 + 44) |= 0x10u;
        *(_QWORD *)(a2 + 48) = v9;
        *(_BYTE *)(a2 + 41) = 5;
        goto LABEL_23;
      }
      if ( (get_flags_ex() & 0x600) == 0x200 )
      {
LABEL_130:
        auto_mark_range();
        return 0;
      }
      v25 = *(_WORD *)(a2 + 24);
    }
    if ( v25 == 2 )
      *(_BYTE *)(a2 + 32) = 4;
    return *(unsigned __int16 *)(a2 + 26);
  }
  v4 = next_byte >> 4;
  v5 = next_byte & 0xF;
  if ( next_byte >> 4 != 2 )
  {
    v6 = 0;
    if ( v4 != 3 )
      goto LABEL_5;
    goto LABEL_19;
  }
  *(_BYTE *)(a2 + 41) = 7;
  v18 = *(_QWORD *)(a2 + 8);
  *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_DB60 + (next_byte & 0xF));
  *(_BYTE *)(a2 + 42) = *(_WORD *)(a2 + 26);
LABEL_37:
  v19 = (char)insn_get_next_byte();
  result = *(unsigned __int16 *)(a2 + 26);
  *(_QWORD *)(a2 + 56) = v19 + v18 + result;
  return result;
}

