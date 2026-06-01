__int64 __fastcall sub_4950(__int64 a1, double a2, double a3)
{
  unsigned __int8 next_byte; // al
  _DWORD *v4; // rdx
  int v5; // ecx
  __int64 result; // rax
  bool v7; // zf
  unsigned __int16 next_word; // ax
  __m128i v9; // xmm0
  __int16 v10; // ax
  char v11; // cl
  unsigned __int8 v12; // al
  __m128i v13; // xmm0
  __int16 v14; // ax
  unsigned __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // dx
  __int16 v18; // cx
  unsigned __int8 v19; // al
  unsigned __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // dx
  __int16 v23; // cx
  __int64 v24; // rdx
  char v25; // al
  __int16 v26; // dx
  __int16 v27; // cx
  __int16 v28; // bp
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  unsigned __int8 v31; // al

  *(_BYTE *)(a1 + 45) = 0;
  next_byte = insn_get_next_byte();
  v4 = (_DWORD *)qword_C2C0 + 3 * next_byte;
  *(_WORD *)(a1 + 24) = *v4;
  v5 = v4[1];
  switch ( v5 )
  {
    case 0:
      *(_BYTE *)(a1 + 41) = 2;
      next_word = insn_get_next_word();
      *(_BYTE *)(a1 + 45) = 1;
      v9 = (__m128i)next_word;
      v10 = *(_WORD *)(a1 + 24);
      v11 = v10 - 22;
      *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v9, v9);
      if ( (unsigned __int16)(v10 - 22) > 0x33u
        || ((1LL << v11) & 0xC00000000C003LL) != 0
        || ((1LL << v11) & 0x1400) == 0 )
      {
        goto LABEL_4;
      }
      *(_BYTE *)(a1 + 41) = 7;
      return *(unsigned __int16 *)(a1 + 26);
    case 1:
    case 2:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = (v5 != 1) + 105;
      *(_QWORD *)(a1 + 56) = (unsigned __int16)insn_get_next_word();
      goto LABEL_4;
    case 3:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 108;
      goto LABEL_19;
    case 4:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 103;
      goto LABEL_19;
    case 5:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 104;
LABEL_19:
      v15 = insn_get_next_word();
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 56) = v15;
      return *(unsigned __int16 *)(a1 + 26);
    case 6:
      *(_BYTE *)(a1 + 41) = 8;
      *(_QWORD *)(a1 + 56) = (unsigned __int16)insn_get_next_word();
      v13 = (__m128i)(*(_QWORD *)(a1 + 56) | (unsigned __int64)(((unsigned int)insn_get_next_byte() << 16) & 0xFF0000));
      v14 = *(_WORD *)(a1 + 24) - 31;
      *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v13, v13);
      if ( (v14 & 0xFFFD) != 0 )
        goto LABEL_4;
      *(_BYTE *)(a1 + 41) = 6;
      return *(unsigned __int16 *)(a1 + 26);
    case 7:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 107;
      *(_QWORD *)(a1 + 56) = (unsigned __int16)insn_get_next_word();
      *(_QWORD *)(a1 + 56) |= ((unsigned int)insn_get_next_byte() << 16) & 0xFF0000;
      goto LABEL_4;
    case 8:
    case 19:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
      return *(unsigned __int16 *)(a1 + 26);
    case 9:
      *(_BYTE *)(a1 + 41) = 5;
      v30 = insn_get_next_byte();
      *(_BYTE *)(a1 + 45) = 0;
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 48) = v30;
      v31 = insn_get_next_byte();
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v31;
      return *(unsigned __int16 *)(a1 + 26);
    case 10:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 7;
      *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
      goto LABEL_4;
    case 11:
    case 12:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = (v5 != 11) + 100;
      *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
      goto LABEL_4;
    case 13:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 102;
      goto LABEL_7;
    case 14:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 109;
      goto LABEL_7;
    case 15:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 110;
      goto LABEL_7;
    case 16:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 111;
      goto LABEL_7;
    case 17:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 112;
LABEL_7:
      *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
LABEL_4:
      v7 = get_sreg() == 0;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = v7;
      return result;
    case 18:
      *(_BYTE *)(a1 + 41) = 5;
      v28 = *((_WORD *)&qword_C2C0[1] + 6 * next_byte + 1);
      if ( (v28 & 1) != 0 && !get_sreg() || (v28 & 2) != 0 && !get_sreg() )
        goto LABEL_27;
      v29 = insn_get_next_byte();
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 48) = v29;
      return *(unsigned __int16 *)(a1 + 26);
    case 20:
      *(_BYTE *)(a1 + 41) = 7;
      v25 = insn_get_next_byte();
      v26 = *(_WORD *)(a1 + 8);
      *(_BYTE *)(a1 + 45) = 1;
      v27 = v25;
      result = *(unsigned __int16 *)(a1 + 26);
      *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int16)(v27 + result + v26),
                                (__m128i)(unsigned __int16)(v27 + result + v26));
      return result;
    case 21:
      *(_BYTE *)(a1 + 41) = 6;
      v21 = insn_get_next_word();
      v22 = *(_WORD *)(a1 + 8);
      *(_BYTE *)(a1 + 45) = 1;
      v23 = v21;
      result = *(unsigned __int16 *)(a1 + 26);
      v24 = *(_QWORD *)(a1 + 16) & 0xFF0000LL | (unsigned __int16)(v23 + result + v22);
      *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
      return result;
    case 22:
      *(_BYTE *)(a1 + 41) = 5;
LABEL_27:
      v20 = insn_get_next_word();
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 48) = v20;
      return *(unsigned __int16 *)(a1 + 26);
    case 23:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 114;
      v19 = insn_get_next_byte();
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 56) = v19;
      return *(unsigned __int16 *)(a1 + 26);
    case 24:
      insn_get_next_byte();
      return *(unsigned __int16 *)(a1 + 26);
    case 25:
      v16 = insn_get_next_word();
      v17 = *(_WORD *)(a1 + 8);
      *(_BYTE *)(a1 + 41) = 7;
      v18 = v16;
      result = *(unsigned __int16 *)(a1 + 26);
      *(_BYTE *)(a1 + 45) = 1;
      *(_QWORD *)(a1 + 56) = (unsigned __int16)(v18 + result + v17);
      return result;
    case 31:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 3;
      goto LABEL_15;
    case 32:
      *(_BYTE *)(a1 + 41) = 4;
      *(_WORD *)(a1 + 46) = 113;
LABEL_15:
      v12 = insn_get_next_byte();
      *(_BYTE *)(a1 + 45) = 0;
      *(_QWORD *)(a1 + 56) = v12;
      result = *(unsigned __int16 *)(a1 + 26);
      break;
    default:
      sub_4860((__int64)"ana: bad code 0x%x, @: 0x%a (IP=%a)", next_byte, a2, a3);
      result = 0;
      break;
  }
  return result;
}

