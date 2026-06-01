__int64 __fastcall sub_3810(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int16 next_word; // ax
  int v5; // ecx
  int v6; // r14d
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // r12
  char v9; // r15
  char v10; // dl
  char v11; // dl
  unsigned __int8 v12; // r14
  unsigned __int16 v13; // cx
  char v14; // cl
  char v15; // cl
  __int16 v16; // r14
  __int16 v17; // ax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int16 v20; // si
  char v21; // cl
  __int64 v22; // rdx
  int v23; // edi
  __m128i v24; // xmm1
  bool v25; // zf
  char v26; // dl
  __int16 v27; // ax
  __int16 v28; // ax
  __int16 v29; // cx
  char v30; // al
  unsigned __int8 v31; // al

  if ( (a2[8] & 1) != 0 )
    return 0;
  v3 = (__int64)a2;
  a2[85] = 1;
  a2[45] = 1;
  next_word = insn_get_next_word();
  LOBYTE(a2) = next_word;
  v5 = next_word >> 12;
  v6 = next_word >> 6;
  v7 = next_word & 0x3F;
  v8 = v6 & 0x3F;
  v9 = (unsigned __int8)(v6 & 0x3F) >> 3;
  switch ( v5 )
  {
    case 0:
      if ( v8 > 0x37u )
        return 0;
      if ( v8 > 0x34u )
      {
        *(_WORD *)(v3 + 24) = aKlmn789Tuvwxyz[v8 - 53];
        goto LABEL_80;
      }
      if ( v8 == 52 )
      {
        *(_BYTE *)(v3 + 41) = 9;
        LOWORD(result) = *(_WORD *)(v3 + 26);
        *(_WORD *)(v3 + 24) = 44;
        *(_QWORD *)(v3 + 48) = v7;
        goto LABEL_87;
      }
      if ( v8 > 0x27u )
        goto LABEL_21;
      if ( (v6 & 0x20) != 0 )
      {
        v12 = v6 & 7;
        v13 = v7;
        if ( v12 != 7 )
        {
          *(_BYTE *)(v3 + 41) = 1;
          *(_WORD *)(v3 + 24) = 31;
          *(_WORD *)(v3 + 46) = v12;
          sub_3770(a1, v3, v3 + 80, v7);
          v10 = *(_BYTE *)(v3 + 41);
          goto LABEL_6;
        }
        *(_WORD *)(v3 + 24) = 105;
        goto LABEL_95;
      }
      if ( v8 == 2 )
      {
        if ( v7 != 7 )
        {
          if ( v7 > 6u )
          {
            if ( v7 <= 0x17u )
              return 0;
            while ( 2 )
            {
              if ( ((unsigned __int8)a2 & 0x20) != 0 )
              {
                v30 = (char)a2;
                LODWORD(a2) = (unsigned __int8)a2 & 0x1F;
                v31 = v30 & 0x1F;
                switch ( (int)a2 )
                {
                  case 0:
                    *(_WORD *)(v3 + 24) = 12;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 1:
                    *(_WORD *)(v3 + 24) = 13;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 2:
                    *(_WORD *)(v3 + 24) = 14;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 3:
                  case 5:
                  case 6:
                  case 7:
                  case 9:
                  case 10:
                  case 11:
                  case 12:
                  case 13:
                  case 14:
                  case 16:
                  case 19:
                  case 21:
                  case 22:
                  case 23:
                    *(_WORD *)(v3 + 24) = 107;
                    v10 = *(_BYTE *)(v3 + 41);
                    *(_WORD *)(v3 + 46) = v31;
                    goto LABEL_6;
                  case 4:
                    *(_WORD *)(v3 + 24) = 15;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 8:
                    *(_WORD *)(v3 + 24) = 16;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 15:
                    *(_WORD *)(v3 + 24) = 17;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 17:
                    *(_WORD *)(v3 + 24) = 18;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 18:
                    *(_WORD *)(v3 + 24) = 19;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  case 20:
                    *(_WORD *)(v3 + 24) = 20;
                    v10 = *(_BYTE *)(v3 + 41);
                    goto LABEL_6;
                  default:
                    continue;
                }
              }
              break;
            }
            *(_WORD *)(v3 + 24) = 11;
            *(_QWORD *)(v3 + 48) = (unsigned __int8)a2 & 7;
            *(_BYTE *)(v3 + 41) = 9;
          }
          else
          {
            *(_WORD *)(v3 + 24) = 10;
            *(_BYTE *)(v3 + 41) = 1;
            *(_WORD *)(v3 + 46) = v7;
          }
LABEL_28:
          LOWORD(result) = *(_WORD *)(v3 + 26);
          if ( *(_BYTE *)(v3 + 28) )
          {
            v11 = *(_BYTE *)(v3 + 81);
            if ( v11 == 2 )
              goto LABEL_30;
            if ( v11 == 4 )
            {
              if ( (*(_WORD *)(v3 + 86) & 0x38) != 0x30 )
                return (unsigned __int16)result;
              goto LABEL_31;
            }
          }
          goto LABEL_12;
        }
        *(_WORD *)(v3 + 24) = 106;
        v10 = *(_BYTE *)(v3 + 41);
LABEL_6:
        LOWORD(result) = *(_WORD *)(v3 + 26);
        if ( !*(_BYTE *)(v3 + 28) )
          goto LABEL_46;
        goto LABEL_7;
      }
      if ( v8 > 2u )
      {
        if ( v8 != 3 )
        {
          v28 = *((char *)&dword_70EC + (v8 >> 2) - 1);
LABEL_90:
          *(_WORD *)(v3 + 24) = v28;
          v29 = *(_WORD *)(v3 + 8);
          LOWORD(result) = *(_WORD *)(v3 + 26);
          *(_BYTE *)(v3 + 41) = 7;
          *(_WORD *)(v3 + 46) = 0;
          *(_WORD *)(v3 + 56) = result + v29 + 2 * (char)a2;
LABEL_87:
          if ( !*(_BYTE *)(v3 + 28) )
            goto LABEL_12;
          v10 = *(_BYTE *)(v3 + 41);
LABEL_7:
          if ( v10 == 2 )
          {
            if ( *(_WORD *)(v3 + 46) == 63 )
            {
LABEL_43:
              v14 = *(_BYTE *)(v3 + 81);
              if ( v14 == 2 )
                goto LABEL_30;
              if ( v14 == 4 )
                goto LABEL_53;
LABEL_12:
              if ( *(_BYTE *)(v3 + 81) == 5 )
              {
                if ( *(_BYTE *)(v3 + 112) )
                {
                  LOWORD(result) = result - 2;
                  *(_WORD *)(v3 + 26) = result;
                }
              }
              return (unsigned __int16)result;
            }
LABEL_42:
            *(_BYTE *)(v3 + 45) = 0;
            goto LABEL_43;
          }
          if ( v10 == 4 )
          {
            if ( (*(_WORD *)(v3 + 46) & 0x38) != 0x30 )
            {
              v10 = *(_BYTE *)(v3 + 81);
              if ( v10 != 2 )
              {
                if ( v10 != 4 )
                  goto LABEL_12;
                goto LABEL_53;
              }
LABEL_30:
              if ( *(_WORD *)(v3 + 86) == 63 )
                return (unsigned __int16)result;
LABEL_31:
              *(_BYTE *)(v3 + 85) = 0;
              return (unsigned __int16)result;
            }
            goto LABEL_42;
          }
          v15 = *(_BYTE *)(v3 + 81);
          if ( v15 == 2 )
          {
            if ( *(_WORD *)(v3 + 86) == 63 )
              goto LABEL_54;
            goto LABEL_69;
          }
          if ( v15 == 4 )
          {
LABEL_53:
            if ( (*(_WORD *)(v3 + 86) & 0x38) != 0x30 )
              goto LABEL_54;
LABEL_69:
            *(_BYTE *)(v3 + 85) = 0;
LABEL_54:
            if ( v10 != 5 )
              return (unsigned __int16)result;
LABEL_47:
            if ( *(_BYTE *)(v3 + 72) )
            {
              LOWORD(result) = result - 2;
              *(_WORD *)(v3 + 26) = result;
            }
            goto LABEL_12;
          }
LABEL_46:
          if ( v10 == 5 )
            goto LABEL_47;
          goto LABEL_12;
        }
        *(_WORD *)(v3 + 24) = 23;
LABEL_80:
        sub_3630(v3, v3 + 40, v7);
        v10 = *(_BYTE *)(v3 + 41);
        goto LABEL_6;
      }
      if ( v8 )
      {
        v13 = v7;
        *(_WORD *)(v3 + 24) = 9;
LABEL_95:
        sub_3770(a1, v3, v3 + 40, v13);
        v10 = *(_BYTE *)(v3 + 41);
        goto LABEL_6;
      }
      if ( (next_word & 0x38) == 0 )
      {
        v10 = *(_BYTE *)(v3 + 41);
        *(_WORD *)(v3 + 24) = *((char *)qword_7100 + (next_word & 0x3F));
        goto LABEL_6;
      }
      return 0;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      *(_WORD *)(v3 + 24) = aAbcdefgh01234L[(v5 & 7) + 19];
      *(_BYTE *)(v3 + 28) = (v5 & 8) != 0;
      goto LABEL_5;
    case 6:
      *(_WORD *)(v3 + 24) = 53;
      goto LABEL_5;
    case 7:
      if ( v9 == 6 )
        return 0;
      if ( v9 == 7 )
      {
        v27 = *(_WORD *)(v3 + 8);
        *(_WORD *)(v3 + 24) = 64;
        *(_BYTE *)(v3 + 41) = 1;
        *(_WORD *)(v3 + 46) = v6 & 7;
        *(_WORD *)(v3 + 96) = v27 + 2 - 2 * v7;
        LOWORD(result) = *(_WORD *)(v3 + 26);
        *(_BYTE *)(v3 + 81) = 7;
        *(_WORD *)(v3 + 86) = 0;
        goto LABEL_12;
      }
      if ( v9 != 5 )
      {
        *(_BYTE *)(v3 + 81) = 1;
        *(_WORD *)(v3 + 86) = v6 & 7;
        sub_3630(v3, v3 + 40, v7);
        v10 = *(_BYTE *)(v3 + 41);
        *(_WORD *)(v3 + 24) = aKlmn789Tuvwxyz[(((unsigned __int8)(v6 & 0x3F) >> 3) & 7) + 7];
        goto LABEL_6;
      }
      if ( (next_word & 0x20) == 0 && v8 == 40 )
      {
        *(_BYTE *)(v3 + 41) = 1;
        *(_WORD *)(v3 + 46) = next_word & 7;
        *(_WORD *)(v3 + 24) = aKlmn789Tuvwxyz[((v7 >> 3) & 7) + 12];
        goto LABEL_28;
      }
      return 0;
    case 8:
      if ( v8 > 0x37u )
        return 0;
      if ( v8 > 0x33u )
      {
        *(_WORD *)(v3 + 24) = aKlmn789Tuvwxyz[v8 - 49];
        goto LABEL_80;
      }
      if ( v8 > 0x27u )
      {
        *(_BYTE *)(v3 + 28) = 1;
LABEL_21:
        sub_3630(v3, v3 + 40, v7);
        v10 = *(_BYTE *)(v3 + 41);
        *(_WORD *)(v3 + 24) = aAbcdefgh01234L[v8 - 32];
        goto LABEL_6;
      }
      if ( (v6 & 0x20) != 0 )
      {
        *(_BYTE *)(v3 + 41) = 9;
        *(_QWORD *)(v3 + 48) = (unsigned __int8)next_word;
        *(_WORD *)(v3 + 24) = (v8 > 0x23u) + 73;
        goto LABEL_28;
      }
      v28 = aAbcdefgh01234L[(v8 >> 2) & 0xF];
      goto LABEL_90;
    case 14:
      *(_WORD *)(v3 + 24) = 54;
LABEL_5:
      sub_3630(v3, v3 + 40, v8);
      sub_3630(v3, v3 + 80, v7);
      v10 = *(_BYTE *)(v3 + 41);
      goto LABEL_6;
    case 15:
      if ( !v8 )
      {
        switch ( next_word & 0x3F )
        {
          case 0:
            v10 = *(_BYTE *)(v3 + 41);
            *(_WORD *)(v3 + 24) = 79;
            goto LABEL_6;
          case 1:
            v10 = *(_BYTE *)(v3 + 41);
            *(_WORD *)(v3 + 24) = 80;
            goto LABEL_6;
          case 2:
            v10 = *(_BYTE *)(v3 + 41);
            *(_WORD *)(v3 + 24) = 81;
            goto LABEL_6;
          case 9:
            v10 = *(_BYTE *)(v3 + 41);
            *(_WORD *)(v3 + 24) = 82;
            goto LABEL_6;
          case 0xA:
            v10 = *(_BYTE *)(v3 + 41);
            *(_WORD *)(v3 + 24) = 83;
            goto LABEL_6;
          default:
            return 0;
        }
      }
      sub_3630(v3, v3 + 40, v7);
      if ( !v9 )
      {
        v10 = *(_BYTE *)(v3 + 41);
        if ( (v6 & 0x3C) != 0 )
        {
          *(_BYTE *)(v3 + 85) = 4;
          *(_BYTE *)(v3 + 45) = 4;
          if ( v10 == 1 )
          {
            *(_BYTE *)(v3 + 41) = 8;
            v10 = 8;
          }
        }
        *(_WORD *)(v3 + 24) = aKlmn789Tuvwxyz[v8 + 15];
        goto LABEL_6;
      }
      v16 = v6 & 3;
      *(_BYTE *)(v3 + 81) = 8;
      *(_WORD *)(v3 + 86) = v16;
      *(_BYTE *)(v3 + 85) = 4;
      v17 = aAbcdefgh[(v8 >> 2) - 2];
      *(_WORD *)(v3 + 24) = v17;
      if ( v17 == 102 )
        goto LABEL_99;
      if ( v17 != 99 )
      {
        if ( *(_BYTE *)(v3 + 41) == 1 )
          *(_BYTE *)(v3 + 41) = 8;
        if ( v17 != 100 )
        {
          if ( v17 == 103 || (*(_BYTE *)(v3 + 45) = 4, (v17 & 0xFB) != 0x61) )
          {
LABEL_99:
            v10 = *(_BYTE *)(v3 + 41);
            goto LABEL_6;
          }
        }
      }
      v18 = _mm_loadu_si128((const __m128i *)(v3 + 40));
      v19 = _mm_loadu_si128((const __m128i *)(v3 + 88));
      *(_BYTE *)(v3 + 45) = 4;
      LODWORD(result) = *(_DWORD *)(v3 + 112);
      v20 = *(_WORD *)(v3 + 82);
      *(_WORD *)(v3 + 46) = v16;
      v21 = *(_BYTE *)(v3 + 84);
      v22 = *(_QWORD *)(v3 + 104);
      *(__m128i *)(v3 + 80) = v18;
      v23 = *(_DWORD *)(v3 + 72);
      v24 = _mm_loadu_si128((const __m128i *)(v3 + 56));
      *(_DWORD *)(v3 + 72) = result;
      v25 = *(_BYTE *)(v3 + 28) == 0;
      *(_WORD *)(v3 + 42) = v20;
      *(_DWORD *)(v3 + 112) = v23;
      LOWORD(result) = *(_WORD *)(v3 + 26);
      *(_BYTE *)(v3 + 44) = v21;
      *(_QWORD *)(v3 + 64) = v22;
      *(_WORD *)(v3 + 40) = 2048;
      *(_BYTE *)(v3 + 80) = 1;
      *(__m128i *)(v3 + 96) = v24;
      *(__m128i *)(v3 + 48) = v19;
      if ( v25 )
        goto LABEL_12;
      v26 = *(_BYTE *)(v3 + 81);
      if ( v26 == 2 )
        goto LABEL_30;
      if ( v26 != 4 )
        goto LABEL_12;
      v10 = 8;
      goto LABEL_53;
  }
}

