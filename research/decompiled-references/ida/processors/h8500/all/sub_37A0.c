char __fastcall sub_37A0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r14d
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // kr00_8
  __int16 v13; // cx
  __int64 v14; // rcx
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __m128i v18; // xmm0
  int v19; // eax
  __m128i v20; // xmm0
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rdi
  __m128i v26; // xmm0
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __m128i v36; // xmm0
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  unsigned __int8 v40; // al
  unsigned __int16 next_word; // ax
  int v42; // eax
  unsigned __int8 v43; // al
  int v44; // ecx
  unsigned __int8 v45; // al
  int v46; // eax
  char v47; // al
  char v49; // [rsp+7h] [rbp-71h]

  v2 = a2;
  next_byte = insn_get_next_byte();
  v4 = next_byte;
  if ( next_byte > 0x5Fu )
  {
LABEL_65:
    v33 = *(_DWORD *)(a2 + 28);
    if ( (v4 & 8) != 0 )
    {
      v49 = 1;
      v34 = v33 | 2;
    }
    else
    {
      v49 = 0;
      v34 = v33 | 1;
    }
    *(_DWORD *)(a2 + 28) = v34;
    v5 = *((__int16 *)&qword_8760[-1] + (v4 >> 4) - 2);
  }
  else
  {
    v49 = 0;
    v5 = *((__int16 *)qword_8780 + next_byte);
  }
  *(_WORD *)(a2 + 24) = v5;
  if ( !(_WORD)v5 )
    goto LABEL_29;
  switch ( v4 )
  {
    case 0u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0x11u:
    case 0x16u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
      goto LABEL_9;
    case 1u:
      v44 = *(_DWORD *)(a2 + 28) | 0x40;
      goto LABEL_107;
    case 2u:
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = 7;
      *(_BYTE *)(a2 + 72) = 2;
      *(_BYTE *)(a2 + 81) = 8;
      v43 = insn_get_next_byte();
      *(_WORD *)(a2 + 86) = v43;
      if ( !v43 )
        goto LABEL_29;
      goto LABEL_8;
    case 3u:
    case 0x13u:
      *(_DWORD *)(a2 + 28) |= 0x10u;
      v40 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 6;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word() | (v40 << 16);
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 4u:
      v42 = *(_DWORD *)(a2 + 28) | 1;
      goto LABEL_100;
    case 5u:
      *(_DWORD *)(a2 + 28) |= 0x25u;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 6u:
      v44 = *(_DWORD *)(a2 + 28);
      LOBYTE(v44) = v44 | 0x80;
      goto LABEL_107;
    case 7u:
      v44 = *(_DWORD *)(a2 + 28);
      BYTE1(v44) |= 1u;
LABEL_107:
      *(_DWORD *)(a2 + 28) = v44;
      goto LABEL_9;
    case 8u:
      v47 = insn_get_next_byte();
      if ( (v47 & 0xF0) != 0x10 )
        goto LABEL_29;
      *(_BYTE *)(a2 + 41) = 5;
      *(_QWORD *)(a2 + 48) = v47 & 0xF;
      v5 = *(__int16 *)(a2 + 24);
      *(_BYTE *)(a2 + 45) = 0;
      goto LABEL_9;
    case 0xCu:
      v46 = *(_DWORD *)(a2 + 28) | 2;
      goto LABEL_114;
    case 0xDu:
      *(_DWORD *)(a2 + 28) |= 0x26u;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 1;
      v49 = 1;
      *(_QWORD *)(a2 + 56) = (unsigned __int8)insn_get_next_byte();
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 0xEu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Au:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x2Fu:
      *(_DWORD *)(a2 + 28) |= 4u;
      v6 = (char)insn_get_next_byte();
      goto LABEL_6;
    case 0xFu:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = 6;
      goto LABEL_9;
    case 0x10u:
    case 0x18u:
      *(_DWORD *)(a2 + 28) |= 8u;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 9;
      next_word = insn_get_next_word();
      *(_BYTE *)(a2 + 41) = 7;
      v6 = next_word;
      v8 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 56) = v6;
      LOWORD(v8) = 0;
      goto LABEL_7;
    case 0x12u:
      *(_BYTE *)(a2 + 41) = 8;
      v45 = insn_get_next_byte();
      *(_WORD *)(a2 + 46) = v45;
      if ( !v45 )
        goto LABEL_29;
      *(_BYTE *)(a2 + 81) = 3;
      v5 = *(__int16 *)(a2 + 24);
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = 7;
      *(_BYTE *)(a2 + 112) = 1;
      goto LABEL_9;
    case 0x14u:
      v42 = *(_DWORD *)(a2 + 28);
LABEL_100:
      *(_BYTE *)(a2 + 41) = 5;
      *(_DWORD *)(a2 + 28) = v42 | 4;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 0x15u:
      *(_DWORD *)(a2 + 28) |= 9u;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
      goto LABEL_8;
    case 0x17u:
      a2 = 6;
      *(_DWORD *)(v2 + 28) |= 4u;
      *(_BYTE *)(v2 + 41) = 1;
      *(_BYTE *)(v2 + 45) = 1;
      *(_WORD *)(v2 + 46) = 6;
      *(_BYTE *)(v2 + 81) = 5;
      *(_BYTE *)(v2 + 85) = 0;
      *(_QWORD *)(v2 + 88) = (unsigned __int8)insn_get_next_byte();
      v5 = *(__int16 *)(v2 + 24);
      goto LABEL_9;
    case 0x1Cu:
      v46 = *(_DWORD *)(a2 + 28);
LABEL_114:
      *(_BYTE *)(a2 + 41) = 5;
      *(_DWORD *)(a2 + 28) = v46 | 8;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word();
      goto LABEL_8;
    case 0x1Du:
      *(_DWORD *)(a2 + 28) |= 0xAu;
      *(_BYTE *)(a2 + 41) = 2;
      *(_BYTE *)(a2 + 45) = 1;
      v49 = 1;
      *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 0x1Eu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Du:
    case 0x3Eu:
    case 0x3Fu:
      *(_DWORD *)(a2 + 28) |= 8u;
      v6 = (__int16)insn_get_next_word();
LABEL_6:
      *(_BYTE *)(a2 + 41) = 7;
      v7 = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 45) = 9;
      v8 = *(_QWORD *)(a2 + 8) + v7;
LABEL_7:
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v6 + v8);
      goto LABEL_8;
    case 0x1Fu:
      *(_DWORD *)(a2 + 28) |= 8u;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = 6;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 1;
      *(_QWORD *)(a2 + 88) = (unsigned __int16)insn_get_next_word();
      v5 = *(__int16 *)(a2 + 24);
      goto LABEL_9;
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
      *(_DWORD *)(a2 + 28) |= 5u;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      v39 = (unsigned __int8)insn_get_next_byte();
      goto LABEL_93;
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x5Eu:
    case 0x5Fu:
      *(_DWORD *)(a2 + 28) |= 0xAu;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 1;
      v39 = (unsigned __int16)insn_get_next_word();
LABEL_93:
      *(_QWORD *)(a2 + 48) = v39;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = v49;
      *(_WORD *)(a2 + 86) = v4 & 7;
LABEL_8:
      v5 = *(__int16 *)(a2 + 24);
LABEL_9:
      if ( (unsigned __int16)v5 <= 0x58u )
        goto LABEL_59;
      break;
    default:
      goto LABEL_65;
  }
  while ( 1 )
  {
LABEL_10:
    v9 = -3 - v5;
    if ( (unsigned int)(-3 - v5) > 3 )
    {
      if ( under_debugger )
        BUG();
      interr();
      LOBYTE(v24) = 1;
      return v24;
    }
    v10 = insn_get_next_byte();
    v11 = v10;
    if ( (unsigned __int8)v10 > 0x1Fu )
    {
      v5 = *((__int16 *)&(*(&off_A3E0)[2 * v9 + 1])[-1] + ((unsigned __int8)v10 >> 3));
      *(_BYTE *)(v2 + 81) = 1;
      *(_BYTE *)(v2 + 85) = v49;
      *(_WORD *)(v2 + 86) = v11 & 7;
      *(_WORD *)(v2 + 24) = v5;
      if ( v9 != 3 )
        goto LABEL_13;
    }
    else
    {
      v5 = *((__int16 *)(&off_A3E0)[2 * v9] + (unsigned __int8)v10);
      *(_WORD *)(v2 + 24) = v5;
      if ( v9 != 3 )
        goto LABEL_13;
    }
    if ( v4 > 7u )
      break;
    if ( v4 <= 5u && v4 != 1 )
    {
LABEL_27:
      a2 = (unsigned int)(v5 - 11);
      if ( (unsigned __int16)(v5 - 11) > 1u )
      {
        a2 = (unsigned int)(v5 - 20);
        if ( (unsigned __int16)(v5 - 20) > 1u )
          goto LABEL_29;
      }
      goto LABEL_13;
    }
    if ( (_WORD)v5 != 74 )
      goto LABEL_29;
LABEL_25:
    v18 = _mm_loadu_si128((const __m128i *)(v2 + 80));
    v19 = *(_DWORD *)(v2 + 112);
    *(_DWORD *)(v2 + 28) |= 4u;
    *(__m128i *)(v2 + 40) = v18;
    v20 = _mm_loadu_si128((const __m128i *)(v2 + 96));
    *(_DWORD *)(v2 + 72) = v19;
    *(__m128i *)(v2 + 56) = v20;
    v21 = insn_get_next_byte();
    v22 = *(_QWORD *)(v2 + 8) + *(unsigned __int16 *)(v2 + 26);
    *(_BYTE *)(v2 + 81) = 7;
    *(_BYTE *)(v2 + 85) = 9;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v21 + v22);
    v5 = *(__int16 *)(v2 + 24);
    *(_QWORD *)(v2 + 96) = v23;
    if ( (unsigned __int16)v5 <= 0x58u )
      goto LABEL_59;
  }
  if ( v4 != 17 )
    goto LABEL_27;
  a2 = (unsigned int)(v5 - 65);
  if ( (unsigned __int16)(v5 - 65) > 8u )
    goto LABEL_29;
  v25 = -348;
  if ( _bittest64(&v25, a2) )
    goto LABEL_29;
LABEL_13:
  v12 = a2;
  a2 = (unsigned __int16)v5;
  switch ( (__int16)v5 )
  {
    case 0:
      goto LABEL_29;
    case 1:
      if ( (v11 & 0xF8) == 0x80 )
        goto LABEL_59;
      a2 = *(unsigned int *)(v2 + 72);
      *(__m128i *)(v2 + 80) = _mm_loadu_si128((const __m128i *)(v2 + 40));
      v30 = _mm_loadu_si128((const __m128i *)(v2 + 56));
      *(_DWORD *)(v2 + 112) = a2;
      *(__m128i *)(v2 + 96) = v30;
      if ( (_BYTE)v11 == 6 )
      {
        v37 = *(_DWORD *)(v2 + 28);
        if ( (v37 & 2) == 0 )
        {
LABEL_78:
          v38 = v37 | 1;
LABEL_79:
          *(_DWORD *)(v2 + 28) = v38;
        }
        *(_BYTE *)(v2 + 41) = 5;
        *(_BYTE *)(v2 + 45) = 0;
        *(_QWORD *)(v2 + 48) = (unsigned __int8)insn_get_next_byte();
        v5 = *(__int16 *)(v2 + 24);
        if ( *(_WORD *)(v2 + 24) <= 0x58u )
          goto LABEL_59;
      }
      else
      {
        if ( (_BYTE)v11 != 7 )
        {
          *(_BYTE *)(v2 + 41) = 1;
          *(_WORD *)(v2 + 46) = v11 & 7;
          *(_BYTE *)(v2 + 45) = v49;
          goto LABEL_59;
        }
        v29 = *(_DWORD *)(v2 + 28);
        if ( (v29 & 1) == 0 )
          v29 = *(_DWORD *)(v2 + 28) | 2;
        BYTE1(v29) |= 2u;
LABEL_47:
        *(_DWORD *)(v2 + 28) = v29;
        *(_BYTE *)(v2 + 41) = 5;
        *(_BYTE *)(v2 + 45) = 1;
        *(_QWORD *)(v2 + 48) = (unsigned __int16)insn_get_next_word();
        v5 = *(__int16 *)(v2 + 24);
        if ( *(_WORD *)(v2 + 24) <= 0x58u )
          goto LABEL_59;
      }
      goto LABEL_10;
    case 11:
      goto LABEL_17;
    case 14:
      a2 = *(unsigned int *)(v2 + 72);
      *(__m128i *)(v2 + 80) = _mm_loadu_si128((const __m128i *)(v2 + 40));
      v31 = _mm_loadu_si128((const __m128i *)(v2 + 56));
      *(_DWORD *)(v2 + 112) = a2;
      *(__m128i *)(v2 + 96) = v31;
      if ( (_BYTE)v11 != 12 )
      {
        if ( (unsigned __int8)v11 > 0xCu )
        {
          if ( (_BYTE)v11 == 13 )
          {
            *(_BYTE *)(v2 + 41) = 5;
            *(_BYTE *)(v2 + 45) = 2;
            *(_QWORD *)(v2 + 48) = -2;
            goto LABEL_59;
          }
        }
        else
        {
          if ( (_BYTE)v11 == 8 )
          {
            *(_BYTE *)(v2 + 41) = 5;
            *(_BYTE *)(v2 + 45) = 2;
            *(_QWORD *)(v2 + 48) = 1;
            goto LABEL_59;
          }
          if ( (_BYTE)v11 == 9 )
          {
            *(_BYTE *)(v2 + 41) = 5;
            *(_BYTE *)(v2 + 45) = 2;
            *(_QWORD *)(v2 + 48) = 2;
            goto LABEL_59;
          }
        }
LABEL_18:
        if ( (unsigned __int16)v5 <= 0x58u )
          goto LABEL_59;
        goto LABEL_10;
      }
      *(_BYTE *)(v2 + 41) = 5;
      *(_BYTE *)(v2 + 45) = 2;
      *(_QWORD *)(v2 + 48) = -1;
LABEL_59:
      if ( (*(_BYTE *)(a1 + 152) & 1) == 0 )
        return *(_WORD *)(v2 + 26);
      v32 = *(_DWORD *)(v2 + 28);
      if ( ((v32 & 2) == 0 || *(_BYTE *)(v2 + 45)) && ((v32 & 1) == 0 || *(_BYTE *)(v2 + 45) != 1) )
        return *(_WORD *)(v2 + 26);
      if ( (_WORD)v5 == 1 )
        return *(_WORD *)(v2 + 26);
LABEL_29:
      LOBYTE(v24) = 0;
      return v24;
    case 20:
    case 21:
      v27 = *(_DWORD *)(v2 + 28);
      if ( (v27 & 1) == 0 )
        goto LABEL_29;
      *(_DWORD *)(v2 + 28) = v27 & 0xFFFFFFFE;
      if ( (unsigned __int16)v5 <= 0x58u )
        goto LABEL_59;
      goto LABEL_10;
    case 24:
      if ( (unsigned __int8)v11 > 5u )
        goto LABEL_59;
      v35 = *(_DWORD *)(v2 + 72);
      *(__m128i *)(v2 + 80) = _mm_loadu_si128((const __m128i *)(v2 + 40));
      v36 = _mm_loadu_si128((const __m128i *)(v2 + 56));
      *(_DWORD *)(v2 + 112) = v35;
      v37 = *(_DWORD *)(v2 + 28);
      *(__m128i *)(v2 + 96) = v36;
      if ( (_BYTE)v11 == 4 )
        goto LABEL_78;
      v29 = v37 | 2;
      goto LABEL_47;
    case 45:
    case 46:
    case 47:
    case 48:
      a2 = *(unsigned int *)(v2 + 72);
      *(__m128i *)(v2 + 80) = _mm_loadu_si128((const __m128i *)(v2 + 40));
      v26 = _mm_loadu_si128((const __m128i *)(v2 + 56));
      *(_DWORD *)(v2 + 112) = a2;
      *(__m128i *)(v2 + 96) = v26;
      if ( (unsigned __int8)v11 > 0xBFu )
      {
        *(_BYTE *)(v2 + 41) = 5;
        *(_BYTE *)(v2 + 45) = 2;
        *(_QWORD *)(v2 + 48) = v11 & 0xF;
        if ( (unsigned __int16)v5 <= 0x58u )
          goto LABEL_59;
      }
      else
      {
        *(_BYTE *)(v2 + 41) = 1;
        *(_WORD *)(v2 + 46) = v11 & 7;
        *(_BYTE *)(v2 + 45) = v49;
        if ( (unsigned __int16)v5 <= 0x58u )
          goto LABEL_59;
      }
      goto LABEL_10;
    case 65:
    case 66:
    case 68:
    case 69:
      *(_BYTE *)(v2 + 81) = 0;
      a2 = v11 & 0xFFFFFFF0;
      if ( (v11 & 0xF0) == 0xE0 )
      {
        *(_DWORD *)(v2 + 28) |= 4u;
        *(_BYTE *)(v2 + 41) = 4;
        *(_BYTE *)(v2 + 45) = 9;
        *(_WORD *)(v2 + 46) = v11 & 7;
        *(_QWORD *)(v2 + 56) = (unsigned __int8)insn_get_next_byte();
        v5 = *(__int16 *)(v2 + 24);
        if ( *(_WORD *)(v2 + 24) <= 0x58u )
          goto LABEL_59;
      }
      else if ( (v11 & 0xF0u) > 0xE0 )
      {
        if ( (v11 & 0xF0) != 0xF0 )
          goto LABEL_18;
        *(_DWORD *)(v2 + 28) |= 8u;
        *(_BYTE *)(v2 + 41) = 4;
        *(_BYTE *)(v2 + 45) = 9;
        *(_WORD *)(v2 + 46) = v11 & 7;
        *(_QWORD *)(v2 + 56) = (unsigned __int16)insn_get_next_word();
        v5 = *(__int16 *)(v2 + 24);
        if ( *(_WORD *)(v2 + 24) <= 0x58u )
          goto LABEL_59;
      }
      else
      {
        a2 = v11 & 0xFFFFFFE0;
        if ( (v11 & 0xE0) != 0xC0 )
          goto LABEL_18;
        *(_BYTE *)(v2 + 41) = 3;
        *(_BYTE *)(v2 + 45) = 9;
        *(_WORD *)(v2 + 46) = v11 & 7;
        *(_BYTE *)(v2 + 72) = 0;
        if ( (unsigned __int16)v5 <= 0x58u )
          goto LABEL_59;
      }
      goto LABEL_10;
    case 72:
    case 73:
      v28 = *(_DWORD *)(v2 + 28);
      if ( (_BYTE)v11 != 20 )
      {
        v29 = v28 | 8;
        goto LABEL_47;
      }
      v38 = v28 | 4;
      goto LABEL_79;
    case 74:
      goto LABEL_25;
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
      v13 = *(_WORD *)(v2 + 86) + 8;
      *(_WORD *)(v2 + 86) = v13;
      if ( (v13 & 0xFFFB) == 0xA )
        goto LABEL_29;
      a2 = (*(_BYTE *)(v2 + 28) & 2) != 0;
      if ( (_BYTE)a2 != (v13 == 8) )
        goto LABEL_29;
      if ( (_WORD)v5 == 82 )
      {
LABEL_17:
        v14 = *(_QWORD *)(v2 + 72);
        a2 = *(unsigned int *)(v2 + 112);
        v15 = _mm_loadu_si128((const __m128i *)(v2 + 40));
        v16 = _mm_loadu_si128((const __m128i *)(v2 + 56));
        *(__m128i *)(v2 + 40) = _mm_loadu_si128((const __m128i *)(v2 + 80));
        v17 = _mm_loadu_si128((const __m128i *)(v2 + 96));
        *(_DWORD *)(v2 + 72) = a2;
        *(_DWORD *)(v2 + 112) = v14;
        *(__m128i *)(v2 + 56) = v17;
        *(__m128i *)(v2 + 80) = v15;
        *(__m128i *)(v2 + 96) = v16;
      }
      goto LABEL_18;
    default:
      a2 = v12;
      goto LABEL_18;
  }
}

