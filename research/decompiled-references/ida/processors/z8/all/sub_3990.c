__int64 __fastcall sub_3990(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int64 v4; // rbp
  unsigned __int16 v5; // r12
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r14
  char v9; // r13
  char v10; // al
  __int16 v11; // dx
  int v12; // eax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int16 v15; // ax
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  int v20; // eax
  int v21; // edx
  __m128i v22; // xmm2
  unsigned __int8 v23; // al
  unsigned __int8 v24; // al
  unsigned __int16 v25; // ax
  unsigned __int8 v26; // al
  unsigned __int16 next_word; // ax
  unsigned __int8 v28; // al
  __int64 v29; // rsi
  int v30; // ebp
  int v31; // r14d
  int v32; // r13d
  unsigned __int8 v33; // al
  unsigned __int16 v34; // ax
  unsigned __int8 v35; // al
  __int16 v36; // bp
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  __int16 v39; // bp
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  unsigned __int8 v42; // r13
  unsigned __int8 v43; // bp

  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  next_byte = insn_get_next_byte();
  v4 = next_byte & 0xF;
  v5 = next_byte >> 4;
  if ( (_BYTE)v4 == 15 )
  {
    v15 = *((char *)qword_81B0 + (next_byte >> 4));
    *(_WORD *)(a2 + 24) = v15;
    goto LABEL_13;
  }
  if ( (next_byte & 8) != 0 )
  {
    *(_WORD *)(a2 + 24) = *((char *)&qword_81A0[-1] + (unsigned __int8)v4);
    v6 = 21760;
    if ( _bittest64(&v6, v4) )
    {
      v7 = v5;
      v8 = a2 + 40;
      sub_37B0(a2, a2 + 40, v5, 0, 0);
      switch ( (char)v4 )
      {
        case 8:
          sub_38B0(a2, a2 + 80, 0, 0);
          goto LABEL_20;
        case 9:
          goto LABEL_19;
        case 10:
        case 11:
          v9 = 0;
LABEL_6:
          v10 = insn_get_next_byte();
          v11 = *(_WORD *)(a2 + 8) + *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 81) = 7;
          *(_QWORD *)(a2 + 96) = (unsigned __int16)(v10 + v11);
          if ( !v9 )
            goto LABEL_20;
LABEL_7:
          if ( (v5 & 7) != 0 )
            goto LABEL_20;
          if ( v5 )
          {
            v12 = *(_DWORD *)(a2 + 112);
            v13 = _mm_loadu_si128((const __m128i *)(a2 + 80));
            *(_BYTE *)(a2 + 81) = 0;
            *(_DWORD *)(a2 + 72) = v12;
            LOWORD(v12) = *(_WORD *)(a2 + 24);
            *(__m128i *)(a2 + 40) = v13;
            v14 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            v15 = v12 - 1;
            *(_WORD *)(a2 + 24) = v15;
            *(__m128i *)(a2 + 56) = v14;
            goto LABEL_13;
          }
          *(_BYTE *)(a2 + 41) = 0;
          *(_WORD *)(a2 + 24) = 28;
          *(_BYTE *)(a2 + 81) = 0;
          break;
        case 12:
          v26 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = v26;
          goto LABEL_20;
        case 13:
          next_word = insn_get_next_word();
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 81) = 7;
          *(_QWORD *)(a2 + 96) = next_word;
          goto LABEL_20;
        default:
          goto LABEL_20;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    v7 = v5;
    v8 = a2 + 40;
    if ( (((_BYTE)v4 - 11) & 0xFD) == 0 )
    {
      *(_BYTE *)(a2 + 41) = 3;
      v9 = 1;
      *(_WORD *)(a2 + 46) = v5;
      switch ( (char)v4 )
      {
        case 12:
          v24 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 88) = v24;
          goto LABEL_7;
        case 13:
          v25 = insn_get_next_word();
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 81) = 7;
          *(_QWORD *)(a2 + 96) = v25;
          goto LABEL_7;
        default:
          goto LABEL_6;
      }
    }
LABEL_19:
    sub_38B0(a2, v8, 0, 0);
    sub_37B0(a2, a2 + 80, v7, 0, 0);
    goto LABEL_20;
  }
  if ( (next_byte & 0xE) != 0 )
  {
    switch ( next_byte )
    {
      case 0x82:
      case 0x83:
      case 0x92:
      case 0x93:
        v33 = insn_get_next_byte();
        v29 = a2 + 40;
        LOBYTE(v31) = (_BYTE)v4 != 2;
        v30 = v33 & 0xF;
        v31 = (unsigned __int8)v31;
        v32 = v33 >> 4;
        *(_WORD *)(a2 + 24) = (unsigned __int8)v31 + 26;
        if ( v5 == 8 )
          goto LABEL_40;
        goto LABEL_38;
      case 0xC2:
      case 0xC3:
      case 0xD2:
      case 0xD3:
        v28 = insn_get_next_byte();
        v29 = a2 + 40;
        LOBYTE(v31) = (_BYTE)v4 != 2;
        v30 = v28 & 0xF;
        v31 = (unsigned __int8)v31;
        v32 = v28 >> 4;
        *(_WORD *)(a2 + 24) = (unsigned __int8)v31 + 24;
        if ( v5 == 12 )
        {
LABEL_40:
          sub_37B0(a2, v29, v32, 0, v31);
          sub_37B0(a2, a2 + 80, v30, 1, 1);
          v15 = *(_WORD *)(a2 + 24);
        }
        else
        {
LABEL_38:
          sub_37B0(a2, v29, v30, 1, 1);
          sub_37B0(a2, a2 + 80, v32, 0, v31);
          v15 = *(_WORD *)(a2 + 24);
        }
        goto LABEL_13;
      case 0xC7:
        v38 = insn_get_next_byte();
        v39 = v38 & 0xF;
        sub_37B0(a2, a2 + 40, v38 >> 4, 0, 0);
        *(_WORD *)(a2 + 86) = v39;
        *(_BYTE *)(a2 + 81) = 4;
        v40 = insn_get_next_byte();
        *(_WORD *)(a2 + 24) = 23;
        *(_QWORD *)(a2 + 96) = v40;
        return *(unsigned __int16 *)(a2 + 26);
      case 0xD4:
      case 0xD6:
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 24) = 4;
        if ( next_byte != 214 )
          goto LABEL_23;
        v34 = insn_get_next_word();
        *(_BYTE *)(a2 + 41) = 7;
        *(_QWORD *)(a2 + 56) = v34;
        v15 = *(_WORD *)(a2 + 24);
        goto LABEL_13;
      case 0xD7:
        v35 = insn_get_next_byte();
        v36 = v35 & 0xF;
        sub_37B0(a2, a2 + 80, v35 >> 4, 0, 0);
        *(_WORD *)(a2 + 46) = v36;
        *(_BYTE *)(a2 + 41) = 4;
        v37 = insn_get_next_byte();
        *(_WORD *)(a2 + 24) = 23;
        *(_QWORD *)(a2 + 56) = v37;
        return *(unsigned __int16 *)(a2 + 26);
      default:
        *(_WORD *)(a2 + 24) = *((char *)qword_8190 + (next_byte >> 4));
        if ( (unsigned __int8)v4 > 5u )
        {
          if ( (unsigned __int8)(v4 - 6) <= 1u )
          {
            sub_38B0(a2, a2 + 40, 0, (_BYTE)v4 == 7);
            v41 = insn_get_next_byte();
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = v41;
            if ( v5 != 14 )
              break;
            goto LABEL_48;
          }
          v43 = insn_get_next_byte();
          sub_37B0(a2, a2 + 40, v43 >> 4, 0, 0);
          sub_37B0(a2, a2 + 80, v43 & 0xF, 0, 1);
          if ( v5 == 14 )
          {
LABEL_48:
            *(_WORD *)(a2 + 24) = 23;
            return *(unsigned __int16 *)(a2 + 26);
          }
        }
        else
        {
          if ( (next_byte & 0xC) != 0 )
          {
            sub_38B0(a2, a2 + 80, 0, (_BYTE)v4 == 5);
            sub_38B0(a2, a2 + 40, 0, 0);
            if ( v5 != 14 )
            {
              if ( v5 == 15 && (_BYTE)v4 == 5 )
              {
                v17 = _mm_loadu_si128((const __m128i *)(a2 + 80));
                v18 = _mm_loadu_si128((const __m128i *)(a2 + 40));
                v19 = _mm_loadu_si128((const __m128i *)(a2 + 56));
                v20 = *(_DWORD *)(a2 + 72);
                *(_WORD *)(a2 + 24) = 23;
                v21 = *(_DWORD *)(a2 + 112);
                *(__m128i *)(a2 + 40) = v17;
                v22 = _mm_loadu_si128((const __m128i *)(a2 + 96));
                *(_DWORD *)(a2 + 112) = v20;
                *(_DWORD *)(a2 + 72) = v21;
                *(__m128i *)(a2 + 56) = v22;
                *(__m128i *)(a2 + 80) = v18;
                *(__m128i *)(a2 + 96) = v19;
                return *(unsigned __int16 *)(a2 + 26);
              }
              break;
            }
            goto LABEL_48;
          }
          v42 = insn_get_next_byte();
          sub_37B0(a2, a2 + 40, v42 >> 4, 0, 0);
          sub_37B0(a2, a2 + 80, v42 & 0xF, 0, (_BYTE)v4 != 2);
          if ( v5 != 14 )
          {
            if ( v5 == 15 && (_BYTE)v4 == 3 )
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 41) = 9;
              *(_WORD *)(a2 + 24) = 23;
              return *(unsigned __int16 *)(a2 + 26);
            }
            break;
          }
          if ( (_BYTE)v4 != 2 )
            goto LABEL_48;
        }
        break;
    }
LABEL_20:
    v15 = *(_WORD *)(a2 + 24);
    goto LABEL_13;
  }
  *(_WORD *)(a2 + 24) = *((char *)qword_8180 + (next_byte >> 4));
  if ( next_byte == 48 )
  {
LABEL_23:
    sub_38B0(a2, a2 + 40, 1, 1);
    v15 = *(_WORD *)(a2 + 24);
  }
  else
  {
    if ( next_byte != 49 )
    {
      sub_38B0(a2, a2 + 40, (next_byte & 0xDF) == 0x80, (unsigned __int8)v4);
      goto LABEL_20;
    }
    *(_BYTE *)(a2 + 41) = 5;
    *(_WORD *)(a2 + 24) = 41;
    v23 = insn_get_next_byte();
    *(_BYTE *)(a2 + 44) |= 0x10u;
    *(_QWORD *)(a2 + 48) = v23;
    v15 = *(_WORD *)(a2 + 24);
  }
LABEL_13:
  if ( v15 )
    return *(unsigned __int16 *)(a2 + 26);
  return 0;
}

