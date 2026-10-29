__int64 __fastcall sub_5950(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  int v4; // ebp
  char v5; // si
  unsigned __int16 v6; // ax
  int v7; // r13d
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  __int16 v10; // dx
  __int64 result; // rax
  unsigned __int8 v12; // al
  bool v13; // dl
  int v14; // eax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // dl
  char v17; // al
  __int64 v18; // rax
  unsigned int v19; // edx
  __int16 v20; // ax
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  unsigned __int8 v28; // al
  unsigned __int16 next_word; // ax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  char v33; // dl
  __int16 v34; // dx
  char v35; // al
  __int16 v36; // ax
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  __int16 v39; // ax
  char v40; // al
  __int64 v41; // rax
  unsigned int v42; // edx
  __int16 v43; // ax
  char v44; // dl
  unsigned __int8 v45; // al
  char v46; // al
  unsigned __int16 v47; // ax
  __int64 v48; // rdx
  __int64 v49; // rax

  next_byte = insn_get_next_byte();
  if ( next_byte != 0xA5 )
  {
    v4 = next_byte;
    v5 = 0;
    v6 = next_byte & 0xF;
    HIWORD(v7) = HIWORD(v4);
    LOWORD(v7) = (unsigned __int16)v4 >> 4;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 256) == 5 )
  {
    v12 = insn_get_next_byte();
    LOWORD(v4) = v12;
    v7 = v12;
    LOWORD(v7) = v12 >> 4;
    if ( (_WORD)v7 == 6 && (v12 & 8) != 0 )
    {
      *(_BYTE *)(a2 + 41) = 1;
      v13 = (v12 & 4) != 0;
      *(_WORD *)(a2 + 24) = 2;
      v14 = v12 & 3;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v13 + 55;
      if ( !v14 )
        LOBYTE(v14) = 4;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = (unsigned __int8)v14;
      return *(unsigned __int16 *)(a2 + 26);
    }
    else if ( (_WORD)v7 == 4 && (v12 & 8) != 0 )
    {
      v15 = v12 & 3;
      *(_WORD *)(a2 + 24) = 65;
      if ( (v12 & 3) == 0 )
        v15 = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 0;
      *(_BYTE *)(a2 + 81) = 3;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = ((v12 & 4) != 0) + 8;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 112) = 1;
      *(_QWORD *)(a2 + 88) = v15;
    }
    else
    {
      if ( (_WORD)v7 != 5 || (v12 & 8) == 0 )
      {
        v6 = v12 & 0xF;
        v5 = 1;
LABEL_3:
        if ( (v4 & 0xC) == 0 )
        {
          if ( v6 == 2 )
          {
            *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_C8E0 + (v7 & 0xF));
            switch ( (__int16)v7 )
            {
              case 0:
              case 1:
                *(_BYTE *)(a2 + 41) = 7;
                if ( v5 )
                {
                  *(_WORD *)(a2 + 24) = 54 - (((_WORD)v7 == 0) - 1);
                  next_word = insn_get_next_word();
                  *(_QWORD *)(a2 + 56) = next_word;
                  v30 = ((unsigned __int64)next_word << 8) + (unsigned __int8)insn_get_next_byte();
                  v9 = *(unsigned __int16 *)(a2 + 26);
                  v31 = *(_QWORD *)(a2 + 8) + v9;
                  LOWORD(v31) = 0;
                  if ( v30 > 0x7FFFFF )
                    v30 -= 0x800000LL;
                  v32 = v30 | v31;
                  v33 = 2;
                }
                else
                {
                  v48 = (unsigned __int16)insn_get_next_word();
                  v9 = *(unsigned __int16 *)(a2 + 26);
                  v49 = *(_QWORD *)(a2 + 8) + v9;
                  LOWORD(v49) = 0;
                  v32 = v48 | v49;
                  v33 = 1;
                }
                *(_QWORD *)(a2 + 56) = v32;
                *(_BYTE *)(a2 + 45) = v33;
                return (unsigned __int16)v9;
              case 2:
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                if ( v5 )
                  *(_WORD *)(a2 + 24) = 56;
                return (unsigned __int16)v9;
              case 3:
                goto LABEL_35;
              case 4:
              case 5:
              case 6:
                *(_BYTE *)(a2 + 41) = 2;
                v27 = insn_get_next_byte();
                *(_BYTE *)(a2 + 81) = 1;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 86) = 0;
                *(_QWORD *)(a2 + 56) = v27;
                return (unsigned __int16)v9;
              case 7:
              case 8:
              case 10:
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = 52;
                *(_BYTE *)(a2 + 81) = 8;
LABEL_51:
                v6 = (unsigned __int8)insn_get_next_byte();
LABEL_52:
                *(_WORD *)(a2 + 86) = v6;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                return (unsigned __int16)v9;
              case 9:
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = 52;
                goto LABEL_49;
              case 11:
              case 12:
              case 13:
LABEL_49:
                *(_BYTE *)(a2 + 41) = 8;
                v26 = insn_get_next_byte();
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 46) = v26;
                break;
              case 14:
                *(_BYTE *)(a2 + 41) = 1;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 46) = 0;
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = 0;
                break;
              case 15:
                *(_BYTE *)(a2 + 41) = 3;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 46) = 0;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = 0;
                break;
            }
          }
          else if ( v6 > 2u )
          {
            if ( v6 == 3 )
            {
              *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_C8D0 + (v7 & 0xF));
              switch ( v7 )
              {
                case 4:
                case 5:
                case 6:
                  *(_BYTE *)(a2 + 41) = 2;
                  *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
                  goto LABEL_43;
                case 7:
                  *(_BYTE *)(a2 + 41) = 3;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  if ( v5 )
                    v6 = v7;
                  *(_WORD *)(a2 + 46) = v6;
                  break;
                case 8:
                case 9:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 46) = 0;
                  *(_BYTE *)(a2 + 81) = 3;
                  if ( (_WORD)v7 == 8 )
                  {
                    v6 = 4;
                  }
                  else if ( v5 )
                  {
                    v6 = 7;
                  }
                  goto LABEL_52;
                case 10:
                  *(_BYTE *)(a2 + 41) = 1;
                  if ( v5 )
                  {
                    v34 = 54;
                    v35 = 2;
                  }
                  else
                  {
                    v34 = 51;
                    v35 = 1;
                  }
                  *(_WORD *)(a2 + 46) = v34;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_BYTE *)(a2 + 45) = v35;
                  break;
                case 11:
                case 12:
                case 13:
                  *(_BYTE *)(a2 + 41) = 1;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_WORD *)(a2 + 46) = 52;
                  break;
                case 14:
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 86) = 1;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_WORD *)(a2 + 46) = 0;
                  *(_BYTE *)(a2 + 81) = 3;
                  break;
                case 15:
                  *(_BYTE *)(a2 + 41) = 3;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_WORD *)(a2 + 46) = 1;
                  *(_BYTE *)(a2 + 81) = 1;
                  *(_WORD *)(a2 + 86) = 0;
                  break;
                default:
                  goto LABEL_102;
              }
            }
            else
            {
LABEL_35:
              LOWORD(v9) = *(_WORD *)(a2 + 26);
            }
          }
          else if ( v6 )
          {
            v8 = insn_get_next_byte();
            LOWORD(v9) = *(_WORD *)(a2 + 26);
            *(_BYTE *)(a2 + 41) = 7;
            *(_BYTE *)(a2 + 45) = 1;
            *(_QWORD *)(a2 + 56) = ((*(_QWORD *)(a2 + 8) + (unsigned __int16)v9) & 0xFFFFFFFFFFFFF800LL)
                                 + v8
                                 + ((8 * (_WORD)v4) & 0x700u);
            v10 = v7 & 1;
            if ( (v7 & 1) == 0 )
              v10 = 4;
            *(_WORD *)(a2 + 24) = v10;
          }
          else
          {
            *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_C8F0 + (v7 & 0xF));
            switch ( (__int16)v7 )
            {
              case 0:
                goto LABEL_35;
              case 1:
              case 2:
              case 3:
                *(_BYTE *)(a2 + 41) = 8;
                v22 = insn_get_next_byte();
                *(_BYTE *)(a2 + 81) = 7;
                *(_WORD *)(a2 + 46) = v22;
                v23 = (char)insn_get_next_byte();
                goto LABEL_45;
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
                *(_BYTE *)(a2 + 41) = 7;
                v17 = insn_get_next_byte();
                v9 = *(unsigned __int16 *)(a2 + 26);
                v18 = v17 + *(_QWORD *)(a2 + 8) + v9;
                v19 = v18 & 0xFFFFFF;
                if ( !*(_DWORD *)(a1 + 256) )
                  v19 = (unsigned __int16)v18;
                *(_BYTE *)(a2 + 45) = 1;
                *(_QWORD *)(a2 + 56) = v19;
                break;
              case 9:
                *(_BYTE *)(a2 + 41) = 1;
                v36 = *(_WORD *)(a2 + 26);
                if ( v5 )
                {
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_WORD *)(a2 + 46) = 54;
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_BYTE *)(a2 + 82) = v36;
                  v37 = (unsigned __int16)insn_get_next_word();
                  v38 = insn_get_next_byte();
                  *(_BYTE *)(a2 + 85) = 2;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_QWORD *)(a2 + 88) = v38 + (v37 << 8);
                }
                else
                {
                  *(_BYTE *)(a2 + 45) = 1;
                  *(_WORD *)(a2 + 46) = 51;
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_BYTE *)(a2 + 82) = v36;
                  v47 = insn_get_next_word();
                  *(_BYTE *)(a2 + 85) = 1;
                  LOWORD(v9) = *(_WORD *)(a2 + 26);
                  *(_QWORD *)(a2 + 88) = v47;
                }
                break;
              case 10:
              case 11:
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = 52;
                *(_BYTE *)(a2 + 81) = 9;
                goto LABEL_51;
              case 12:
              case 13:
                goto LABEL_59;
              case 14:
                *(_BYTE *)(a2 + 41) = 1;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 46) = 0;
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = v5 == 0 ? 2 : 6;
                break;
              case 15:
                *(_BYTE *)(a2 + 81) = 1;
                LOWORD(v9) = *(_WORD *)(a2 + 26);
                *(_WORD *)(a2 + 86) = 0;
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 46) = v5 == 0 ? 2 : 6;
                break;
            }
          }
          return (unsigned __int16)v9;
        }
        *(_WORD *)(a2 + 24) = *((unsigned __int8 *)qword_C8C0 + (v7 & 0xF));
        switch ( (__int16)v7 )
        {
          case 0:
          case 1:
            sub_4A00(a2, v6);
            LOWORD(v9) = *(_WORD *)(a2 + 26);
            return (unsigned __int16)v9;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 9:
            goto LABEL_33;
          case 7:
            sub_4A00(a2, v6);
LABEL_43:
            v20 = *(_WORD *)(a2 + 26);
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 82) = v20;
            v21 = insn_get_next_byte();
            LOWORD(v9) = *(_WORD *)(a2 + 26);
            *(_QWORD *)(a2 + 88) = v21;
            return (unsigned __int16)v9;
          case 8:
            if ( v6 == 4 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 11;
              *(_WORD *)(a2 + 46) = 1;
            }
            else
            {
              sub_4980(a2, v6);
LABEL_59:
              *(_BYTE *)(a2 + 41) = 2;
              v28 = insn_get_next_byte();
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_QWORD *)(a2 + 56) = v28;
            }
            return (unsigned __int16)v9;
          case 10:
            if ( v6 == 4 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 27;
              *(_WORD *)(a2 + 46) = 1;
            }
            else
            {
              switch ( v6 )
              {
                case 5u:
                  return 0;
                case 6u:
                  v44 = 3;
                  v43 = 0;
                  break;
                case 7u:
                  v44 = 3;
                  v43 = 1;
                  break;
                default:
                  v43 = v6 - 5;
                  v44 = 1;
                  break;
              }
              *(_BYTE *)(a2 + 41) = v44;
              *(_WORD *)(a2 + 46) = v43;
              *(_BYTE *)(a2 + 81) = 2;
              v45 = insn_get_next_byte();
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_QWORD *)(a2 + 96) = v45;
            }
            return (unsigned __int16)v9;
          case 11:
            switch ( v6 )
            {
              case 5u:
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = 0;
                *(_BYTE *)(a2 + 81) = 2;
                *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
LABEL_97:
                *(_BYTE *)(a2 + 121) = 7;
                v40 = insn_get_next_byte();
                v9 = *(unsigned __int16 *)(a2 + 26);
                v41 = v40 + *(_QWORD *)(a2 + 8) + v9;
                v42 = v41 & 0xFFFFFF;
                if ( !*(_DWORD *)(a1 + 256) )
                  v42 = (unsigned __int16)v41;
                *(_BYTE *)(a2 + 125) = 1;
                *(_QWORD *)(a2 + 136) = v42;
                return (unsigned __int16)v9;
              case 6u:
                *(_BYTE *)(a2 + 41) = 3;
                break;
              case 7u:
                *(_BYTE *)(a2 + 41) = 3;
                *(_WORD *)(a2 + 46) = 1;
                goto LABEL_96;
              default:
                *(_BYTE *)(a2 + 41) = 1;
                if ( v6 != 4 )
                {
                  *(_WORD *)(a2 + 46) = v6 - 5;
LABEL_96:
                  v39 = *(_WORD *)(a2 + 26);
                  *(_BYTE *)(a2 + 81) = 5;
                  *(_BYTE *)(a2 + 82) = v39;
                  *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte();
                  goto LABEL_97;
                }
                break;
            }
            *(_WORD *)(a2 + 46) = 0;
            goto LABEL_96;
          case 12:
            if ( v6 == 4 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 41;
              *(_WORD *)(a2 + 46) = 0;
            }
            else
            {
LABEL_33:
              sub_4980(a2, v6);
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 46) = 0;
            }
            return (unsigned __int16)v9;
          case 13:
            if ( v6 == 4 )
            {
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 9;
              *(_WORD *)(a2 + 46) = 0;
            }
            else if ( (unsigned __int16)(v6 - 6) > 1u )
            {
              if ( v6 == 5 )
              {
                *(_BYTE *)(a2 + 41) = 2;
                *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
              }
              else
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = v6 - 5;
              }
              v46 = insn_get_next_byte();
              *(_BYTE *)(a2 + 81) = 7;
              v23 = v46;
LABEL_45:
              v9 = *(unsigned __int16 *)(a2 + 26);
              v24 = v23 + *(_QWORD *)(a2 + 8) + v9;
              v25 = (v23 + *(_DWORD *)(a2 + 8) + v9) & 0xFFFFFF;
              if ( !*(_DWORD *)(a1 + 256) )
                v25 = (unsigned __int16)v24;
              *(_BYTE *)(a2 + 85) = 1;
              *(_QWORD *)(a2 + 96) = v25;
            }
            else
            {
              *(_BYTE *)(a2 + 41) = 1;
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 43;
              *(_WORD *)(a2 + 46) = 0;
              *(_BYTE *)(a2 + 81) = 3;
              *(_WORD *)(a2 + 86) = v6 == 7;
            }
            return (unsigned __int16)v9;
          case 14:
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 0;
            if ( v6 == 4 )
            {
              LOWORD(v9) = *(_WORD *)(a2 + 26);
              *(_WORD *)(a2 + 24) = 7;
            }
            else
            {
              sub_4980(a2, v6);
              LOWORD(v9) = *(_WORD *)(a2 + 26);
            }
            return (unsigned __int16)v9;
          case 15:
            if ( v6 != 4 )
            {
              sub_4A00(a2, v6);
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = 0;
              goto LABEL_35;
            }
            *(_WORD *)(a2 + 24) = 8;
LABEL_102:
            *(_BYTE *)(a2 + 41) = 1;
            LOWORD(v9) = *(_WORD *)(a2 + 26);
            *(_WORD *)(a2 + 46) = 0;
            return (unsigned __int16)v9;
        }
      }
      *(_BYTE *)(a2 + 41) = 3;
      v16 = v12 & 3;
      *(_WORD *)(a2 + 24) = 65;
      if ( (v12 & 3) == 0 )
        v16 = 4;
      *(_BYTE *)(a2 + 45) = 2;
      *(_BYTE *)(a2 + 72) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_QWORD *)(a2 + 48) = v16;
      *(_WORD *)(a2 + 46) = ((v12 & 4) != 0) + 8;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 86) = 0;
    }
  }
  else
  {
    *(_WORD *)(a2 + 24) = 24;
    return 0;
  }
  return result;
}

