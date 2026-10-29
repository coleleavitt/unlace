__int64 __fastcall sub_5070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int next_word; // esi
  int v15; // eax
  __int16 v16; // bp
  int v17; // r12d
  __int64 v18; // r12
  int wide_byte; // ebp
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  int v24; // eax
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r12
  __int16 sreg; // ax
  unsigned int v29; // edx
  unsigned __int64 v30; // rbp
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdx
  signed int v38; // eax
  __int64 v39; // rdx
  signed int v40; // eax
  signed int v41; // eax
  __int64 v42; // rdx
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rdx
  unsigned int v49; // eax
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rbp
  char v58; // al
  char v59; // [rsp+0h] [rbp-28h]

  v7 = *(_BYTE *)(a1 + 246);
  if ( v7 == 1 )
  {
    wide_byte = get_wide_byte();
    *(_WORD *)(a2 + 26) = 1;
    v20 = wide_byte >> 12;
    v13 = (wide_byte >> 8) & 0xF;
    if ( wide_byte >> 12 == 2 )
    {
      sreg = get_sreg();
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      v29 = (wide_byte & 0x800) == 0 ? 0xFFFFFFFE : 0;
      v30 = (sreg << 8) & 0x1800 | (unsigned __int64)(wide_byte & 0x7FF);
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = v29 + 27;
      *(_QWORD *)(a2 + 56) = v30;
      return result;
    }
    if ( v20 > 2 )
    {
      if ( v20 == 3 )
      {
        LODWORD(v13) = word_D620[v13];
        *(_WORD *)(a2 + 24) = v13;
        switch ( (int)v13 )
        {
          case 127:
          case 131:
          case 132:
          case 133:
          case 134:
            goto LABEL_82;
          case 128:
            if ( (wide_byte & 0x80u) != 0 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              *(_QWORD *)(a2 + 48) = wide_byte & 0x7F;
              *(_BYTE *)(a2 + 45) = 0;
            }
            else
            {
              *(_WORD *)(a2 + 24) = 130;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = ((wide_byte & 0x40) != 0) + 5;
              v41 = wide_byte & 0x3F;
              *(_BYTE *)(a2 + 45) = 0;
              if ( (wide_byte & 0x20) != 0 )
                v41 = wide_byte | 0xFFFFFFE0;
              *(_BYTE *)(a2 + 81) = 5;
              *(_BYTE *)(a2 + 85) = 0;
              *(_QWORD *)(a2 + 88) = v41;
            }
            return 1;
          case 135:
            v39 = *(_QWORD *)(a2 + 16);
            *(_BYTE *)(a2 + 41) = 7;
            v40 = wide_byte & 0x1FF;
            *(_BYTE *)(a2 + 45) = 9;
            if ( (wide_byte & 0x100) != 0 )
              v40 = wide_byte | 0xFFFFFF00;
            *(_QWORD *)(a2 + 56) = v39 + v40 + 1;
            return 1;
          case 139:
            *(_BYTE *)(a2 + 41) = 4;
            if ( (wide_byte & 0x80u) != 0 )
              LOWORD(v13) = 140;
            *(_BYTE *)(a2 + 45) = 0;
            *(_WORD *)(a2 + 24) = v13;
            *(_WORD *)(a2 + 46) = ((wide_byte & 0x40) != 0) + 5;
            v38 = wide_byte & 0x3F;
            if ( (wide_byte & 0x20) != 0 )
              v38 = wide_byte | 0xFFFFFFE0;
            *(_QWORD *)(a2 + 56) = v38;
            return 1;
          default:
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = (unsigned __int8)wide_byte;
            *(_BYTE *)(a2 + 45) = 0;
            goto LABEL_24;
        }
      }
      goto LABEL_44;
    }
    if ( v20 )
    {
      if ( v20 != 1 )
        goto LABEL_44;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 24) = word_D648[(wide_byte >> 10) & 3];
      v21 = get_sreg();
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      v22 = v21 << 7;
      if ( v21 == -1 )
        v22 = 0;
      *(_QWORD *)(a2 + 88) = (wide_byte >> 7) & 7;
      *(_QWORD *)(a2 + 56) = v22 | wide_byte & 0x7F;
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      goto LABEL_24;
    }
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 != 1 )
      {
        *(_WORD *)(a2 + 24) = word_D660[v13];
LABEL_82:
        *(_BYTE *)(a2 + 41) = 2;
        *(_BYTE *)(a2 + 45) = 0;
        v36 = get_sreg();
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 0;
        v37 = v36 << 7;
        if ( v36 == -1 )
          v37 = 0;
        *(_WORD *)(a2 + 86) = (wide_byte >> 7) & 1;
        *(_QWORD *)(a2 + 56) = v37 | wide_byte & 0x7F;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        goto LABEL_24;
      }
      if ( (wide_byte & 0x80u) == 0 )
      {
LABEL_76:
        *(_WORD *)(a2 + 24) = 4;
        return 1;
      }
      *(_WORD *)(a2 + 24) = 3;
    }
    else
    {
      if ( (wide_byte & 0x80u) == 0 )
      {
        if ( wide_byte >> 4 == 1 )
        {
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 24) = ((wide_byte & 8) != 0) + 139;
          *(_WORD *)(a2 + 46) = ((wide_byte & 4) != 0) + 5;
          *(_BYTE *)(a2 + 72) = (wide_byte & 3) + 1;
          return 1;
        }
        if ( wide_byte >> 5 == 1 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 129;
          *(_QWORD *)(a2 + 48) = wide_byte & 0x1F;
          *(_BYTE *)(a2 + 45) = 0;
          return 1;
        }
        if ( wide_byte <= 11 )
        {
          if ( (unsigned int)wide_byte <= 0xB )
          {
            switch ( wide_byte )
            {
              case 0:
                goto LABEL_101;
              case 1:
                *(_WORD *)(a2 + 24) = 138;
                return 1;
              case 8:
                *(_WORD *)(a2 + 24) = 32;
                return 1;
              case 9:
                *(_WORD *)(a2 + 24) = 30;
                return 1;
              case 10:
                *(_WORD *)(a2 + 24) = 137;
                return 1;
              case 11:
                *(_WORD *)(a2 + 24) = 136;
                v13 = get_sreg();
                v42 = *(_QWORD *)(a2 + 16);
                *(_BYTE *)(a2 + 41) = 7;
                *(_BYTE *)(a2 + 45) = 9;
                *(_QWORD *)(a2 + 48) = v42 + v13 + 1;
                LOWORD(v13) = *(_WORD *)(a2 + 24);
                goto LABEL_24;
              default:
                goto LABEL_44;
            }
          }
          goto LABEL_44;
        }
        if ( wide_byte == 100 )
          goto LABEL_122;
        if ( wide_byte > 100 )
        {
          if ( (unsigned int)(wide_byte - 101) > 2 )
            goto LABEL_44;
          *(_WORD *)(a2 + 24) = 37;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = wide_byte & 7;
          return 1;
        }
        if ( wide_byte == 98 )
          goto LABEL_80;
        if ( wide_byte != 99 )
          goto LABEL_44;
        goto LABEL_123;
      }
      *(_WORD *)(a2 + 24) = 12;
    }
    *(_BYTE *)(a2 + 41) = 2;
    *(_BYTE *)(a2 + 45) = 0;
    v51 = get_sreg();
    v52 = v51 << 7;
    v34 = v51 == -1;
    v13 = 0;
    if ( !v34 )
      v13 = v52;
    v53 = v13 | wide_byte & 0x7F;
    LOWORD(v13) = *(_WORD *)(a2 + 24);
    *(_QWORD *)(a2 + 56) = v53;
    goto LABEL_24;
  }
  if ( v7 == 2 )
  {
    next_word = (unsigned __int16)insn_get_next_word();
    v15 = next_word >> 12;
    if ( next_word >> 12 )
    {
      if ( next_word >> 14 != 3 )
      {
        v16 = next_word & 0x100;
        v17 = next_word >> 9;
        if ( v15 <= 5 )
        {
          *(_WORD *)(a2 + 24) = word_D5A0[next_word >> 10];
          sub_4A80(a2, next_word);
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v17 & 1;
        }
        else
        {
          v18 = v17 & 7;
          if ( v15 == 6 )
          {
            *(_WORD *)(a2 + 24) = aFdeWbrp[v18];
            sub_4A80(a2, next_word);
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 0;
            *(_WORD *)(a2 + 86) = 2 - ((v16 == 0) - 1);
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            goto LABEL_24;
          }
          *(_WORD *)(a2 + 24) = aBA[v15 - 7];
          sub_4A80(a2, next_word);
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = v18;
        }
        *(_BYTE *)(a2 + 85) = 0;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 126) = 2 - ((v16 == 0) - 1);
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        *(_BYTE *)(a2 + 125) = 0;
        goto LABEL_24;
      }
      v24 = (next_word >> 12) & 3;
      if ( v24 != 2 )
      {
        if ( v24 == 3 )
        {
          *(_WORD *)(a2 + 24) = 13;
          return *(unsigned __int16 *)(a2 + 26);
        }
        else
        {
          if ( v24 != 1 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            *(_WORD *)(a2 + 24) = 79;
            *(_BYTE *)(a2 + 45) = 0;
            *(_QWORD *)(a2 + 56) = next_word & 0xFFF;
            *(_BYTE *)(a2 + 81) = 2;
            *(_BYTE *)(a2 + 85) = 0;
            *(_QWORD *)(a2 + 96) = insn_get_next_word() & 0xFFF;
            LOWORD(v13) = *(_WORD *)(a2 + 24);
            goto LABEL_24;
          }
          *(_BYTE *)(a2 + 41) = 7;
          v48 = *(_QWORD *)(a2 + 16);
          *(_WORD *)(a2 + 24) = (next_word & 0x800) == 0 ? 106 : 112;
          v49 = next_word & 0x7FF;
          if ( (next_word & 0x400) != 0 )
            v49 = next_word | 0xFFFFFC00;
          *(_BYTE *)(a2 + 45) = 9;
          *(_QWORD *)(a2 + 56) = ((_DWORD)v48 + 2 * v49 + 2) & 0x1FFFFF;
          return *(unsigned __int16 *)(a2 + 26);
        }
      }
      if ( (next_word & 0x800) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 7;
        v46 = *(_QWORD *)(a2 + 16);
        LOWORD(v13) = aKhceigdf[BYTE1(next_word) & 7];
        v47 = (unsigned __int8)next_word;
        *(_WORD *)(a2 + 24) = v13;
        if ( (next_word & 0x80u) != 0 )
          v47 = next_word | 0xFFFFFF80;
        *(_BYTE *)(a2 + 45) = 9;
        *(_QWORD *)(a2 + 56) = ((_DWORD)v46 + 2 * v47 + 2) & 0x1FFFFF;
        goto LABEL_24;
      }
      v54 = 45056;
      if ( _bittest64(&v54, BYTE1(next_word) & 0xF) )
      {
        *(_BYTE *)(a2 + 41) = 7;
        *(_WORD *)(a2 + 24) = aLl[BYTE1(next_word) & 3];
        LODWORD(v13) = insn_get_next_word();
        *(_BYTE *)(a2 + 45) = 9;
        *(_QWORD *)(a2 + 56) = (2 * (_WORD)next_word) & 0x1FE | ((_DWORD)v13 << 9) & 0x1FFE00u;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        if ( (_WORD)v13 != 108 )
          goto LABEL_24;
        if ( (next_word & 0x100) != 0 )
        {
          *(_WORD *)(a2 + 86) = 4;
          v58 = 1;
        }
        else
        {
          v58 = 5;
          *(_QWORD *)(a2 + 88) = 0;
        }
        *(_BYTE *)(a2 + 81) = v58;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 85) = 0;
        return result;
      }
      if ( (next_word & 0xFFC0) == 0xEE00 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 116;
        *(_BYTE *)(a2 + 45) = 0;
        *(_BYTE *)(a2 + 81) = 5;
        *(_WORD *)(a2 + 46) = ((next_word >> 4) & 3) + 5;
        LOBYTE(v13) = insn_get_next_word();
        *(_BYTE *)(a2 + 85) = 1;
        *(_QWORD *)(a2 + 88) = (unsigned __int8)v13 | ((_WORD)next_word << 8) & 0xF00u;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        goto LABEL_24;
      }
    }
    else
    {
      if ( !(next_word >> 4) )
      {
        LOWORD(v13) = word_D600[next_word];
        *(_WORD *)(a2 + 24) = v13;
        goto LABEL_24;
      }
      if ( next_word >> 4 > 127 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = (char)next_word;
        LOWORD(v13) = word_D5E0[(next_word >> 8) & 7];
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = v13;
        goto LABEL_24;
      }
      if ( (next_word & 0xFFFC) == 0x10 )
      {
        *(_WORD *)(a2 + 24) = ((next_word & 2) != 0) + 114;
        if ( (next_word & 1) != 0 )
        {
          v50 = 1;
          *(_WORD *)(a2 + 46) = 4;
        }
        else
        {
          *(_QWORD *)(a2 + 48) = 0;
          v50 = 5;
        }
        *(_BYTE *)(a2 + 41) = v50;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 45) = 0;
        return result;
      }
      if ( next_word == 255 )
      {
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 113;
        return result;
      }
      if ( (next_word & 0xFFF0) == 0x100 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_WORD *)(a2 + 24) = 117;
        *(_QWORD *)(a2 + 48) = next_word & 0xF;
        *(_BYTE *)(a2 + 45) = 0;
        return result;
      }
      if ( (next_word & 0xFE00) == 0x200 )
      {
        *(_WORD *)(a2 + 24) = 81;
        sub_4A80(a2, next_word);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 0;
        *(_WORD *)(a2 + 86) = ((next_word & 0x100) != 0) + 2;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        goto LABEL_24;
      }
      if ( (next_word & 0xFC00) == 0x400 )
      {
        *(_WORD *)(a2 + 24) = 71;
        sub_4A80(a2, next_word);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 0;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 0;
        *(_WORD *)(a2 + 86) = (next_word >> 9) & 1;
        *(_WORD *)(a2 + 126) = ((next_word & 0x100) != 0) + 2;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        goto LABEL_24;
      }
    }
    *(_WORD *)(a2 + 24) = 0;
    return 0;
  }
  if ( v7 )
    sub_4AF0((__int64)"interr: ana", a2, a3, a4, a5, a6, v59);
  v8 = get_wide_byte();
  *(_WORD *)(a2 + 26) = 1;
  v9 = v8;
  v10 = v8 >> 10;
  if ( v10 != 2 )
  {
    if ( v10 > 2 )
    {
      if ( v10 == 3 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)v9;
        *(_BYTE *)(a2 + 45) = 0;
        LOWORD(v13) = word_D640[(v9 >> 8) & 3];
        *(_WORD *)(a2 + 24) = v13;
        goto LABEL_24;
      }
      goto LABEL_44;
    }
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = word_D648[(v9 >> 8) & 3];
        v11 = get_sreg();
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 0;
        v12 = 32 * v11;
        if ( v11 == -1 )
          v12 = 0;
        *(_QWORD *)(a2 + 88) = (v9 >> 5) & 7;
        *(_QWORD *)(a2 + 56) = v12 | v9 & 0x1F;
        LOWORD(v13) = *(_WORD *)(a2 + 24);
        goto LABEL_24;
      }
LABEL_44:
      LOWORD(v13) = *(_WORD *)(a2 + 24);
      goto LABEL_24;
    }
    if ( v9 != 3 )
    {
      if ( v9 > 3 )
      {
        if ( v9 != 4 )
        {
          if ( v9 != 64 )
          {
            if ( (v9 & 0xFF8) != 0 )
            {
              v31 = v9 >> 5;
              if ( (v9 & 0xF80) == 0 )
              {
                *(_WORD *)(a2 + 24) = word_D680[v31];
LABEL_70:
                *(_BYTE *)(a2 + 41) = 2;
                *(_BYTE *)(a2 + 45) = 0;
                v32 = get_sreg();
                v33 = 32 * v32;
                v34 = v32 == -1;
                v13 = 0;
                if ( !v34 )
                  v13 = v33;
                v35 = v13 | v9 & 0x1F;
                LOWORD(v13) = *(_WORD *)(a2 + 24);
                *(_QWORD *)(a2 + 56) = v35;
                goto LABEL_24;
              }
              *(_BYTE *)(a2 + 41) = 2;
              *(_BYTE *)(a2 + 45) = 0;
              *(_WORD *)(a2 + 24) = word_D660[v9 >> 6];
              v55 = get_sreg();
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 0;
              v56 = 32 * v55;
              v34 = v55 == -1;
              v13 = 0;
              if ( !v34 )
                v13 = v56;
              *(_WORD *)(a2 + 86) = v31 & 1;
              v57 = v13 | v9 & 0x1F;
              LOWORD(v13) = *(_WORD *)(a2 + 24);
              *(_QWORD *)(a2 + 56) = v57;
LABEL_24:
              if ( (_WORD)v13 )
                return *(unsigned __int16 *)(a2 + 26);
              return 0;
            }
LABEL_138:
            *(_WORD *)(a2 + 24) = 37;
            goto LABEL_70;
          }
          goto LABEL_76;
        }
LABEL_122:
        *(_WORD *)(a2 + 24) = 26;
        return 1;
      }
      if ( !v9 )
      {
LABEL_101:
        *(_WORD *)(a2 + 24) = 13;
        return 1;
      }
      if ( v9 != 2 )
        goto LABEL_138;
LABEL_80:
      *(_WORD *)(a2 + 24) = 36;
      return 1;
    }
LABEL_123:
    *(_WORD *)(a2 + 24) = 33;
    return 1;
  }
  if ( ((v9 >> 8) & 3) == 0 )
  {
    *(_BYTE *)(a2 + 41) = 5;
    *(_WORD *)(a2 + 24) = 31;
    *(_QWORD *)(a2 + 48) = (unsigned __int8)v9;
    *(_BYTE *)(a2 + 45) = 0;
    return 1;
  }
  if ( ((v9 >> 8) & 3) == 1 )
  {
    v43 = get_sreg();
    v44 = get_sreg();
    if ( v43 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v45 = (v43 >> 5) & 3;
      if ( (unsigned __int64)(v44 - 1) > 0xFFFFFFFFFFFFFFFDLL )
        v44 = v45;
    }
    *(_BYTE *)(a2 + 41) = 7;
    *(_WORD *)(a2 + 24) = 25;
    *(_QWORD *)(a2 + 56) = (unsigned __int8)v9 | (unsigned __int64)(v44 << 9);
    result = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 45) = 9;
  }
  else
  {
    v25 = get_sreg();
    v26 = get_sreg();
    if ( v25 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v27 = (v25 >> 5) & 3;
      if ( (unsigned __int64)(v26 - 1) > 0xFFFFFFFFFFFFFFFDLL )
        v26 = v27;
    }
    *(_BYTE *)(a2 + 41) = 7;
    *(_WORD *)(a2 + 24) = 27;
    *(_QWORD *)(a2 + 56) = v9 & 0x1FF | (unsigned __int64)(v26 << 9);
    result = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 45) = 9;
  }
  return result;
}

