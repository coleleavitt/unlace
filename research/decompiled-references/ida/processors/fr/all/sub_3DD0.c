__int64 __fastcall sub_3DD0(__int64 a1)
{
  unsigned __int8 next_byte; // al
  int v3; // r12d
  unsigned __int8 byte; // al
  int v5; // ebp
  char *v6; // rax
  char *v7; // rbp
  unsigned int v8; // eax
  signed int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 result; // rax
  int v13; // eax
  int v14; // ebp
  int v15; // ebp
  unsigned __int16 word; // ax
  int v17; // ecx
  int v18; // edx
  __int16 v19; // r8
  char v20; // di
  __int16 v21; // ax
  char v22; // si
  int v23; // edx
  __int16 v24; // ax
  __int16 v25; // ax
  unsigned int v26; // ecx
  __int64 v27; // rsi
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rax
  int v31; // edx
  __m128i v32; // xmm2
  int v33; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128i v34; // [rsp+10h] [rbp-58h]
  __m128i v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-38h]
  unsigned __int64 v37; // [rsp+38h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  if ( next_byte == 0x9B )
  {
    *(_WORD *)(a1 + 24) = 45;
    v13 = insn_get_next_byte();
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    v14 = (v13 << 12) & 0xF0000;
    *(_WORD *)(a1 + 86) = v13 & 0xF;
    LOWORD(result) = insn_get_next_word();
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 2;
    v15 = (unsigned __int16)result | v14;
    LOWORD(result) = *(_WORD *)(a1 + 26);
    *(_QWORD *)(a1 + 48) = v15;
    return (unsigned __int16)result;
  }
  v3 = next_byte;
  byte = get_byte();
  v5 = byte | (v3 << 8);
  if ( (byte & 0xF0 | (unsigned __int16)((_WORD)v3 << 8)) == 0x9F80 )
  {
    ++*(_WORD *)(a1 + 26);
    *(_WORD *)(a1 + 24) = 44;
    *(_BYTE *)(a1 + 81) = 1;
    *(_WORD *)(a1 + 86) = byte & 0xF;
    *(_BYTE *)(a1 + 85) = 0;
    LODWORD(result) = insn_get_next_dword();
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 2;
    *(_QWORD *)(a1 + 48) = (int)result;
    LOWORD(result) = *(_WORD *)(a1 + 26);
    return (unsigned __int16)result;
  }
  if ( (unsigned int)((v5 >> 11) - 26) <= 1 )
  {
    v25 = *(_WORD *)(a1 + 26);
    *(_BYTE *)(a1 + 41) = 7;
    *(_WORD *)(a1 + 24) = 55;
    LOWORD(result) = v25 + 1;
    v26 = v5 & 0x7FF;
    *(_BYTE *)(a1 + 45) = 9;
    if ( (v5 & 0x400) != 0 )
      v26 = v5 | 0xFFFFF800;
    v27 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(a1 + 26) = result;
    *(_QWORD *)(a1 + 56) = v27 + (int)(2 * v26) + 2;
    if ( v5 >> 11 == 27 )
      *(_DWORD *)(a1 + 28) |= 1u;
    return (unsigned __int16)result;
  }
  if ( (unsigned __int16)((_WORD)v3 << 8) == 40704 )
  {
    word = get_word();
    v17 = word;
    v18 = (v5 >> 4) & 0xF;
    switch ( v18 )
    {
      case 14:
        v21 = word & 0xF;
        v19 = 83;
        v20 = 1;
        v22 = 0;
        LOWORD(v23) = ((v17 >> 4) & 0xF) + 16;
        break;
      case 15:
        v21 = word & 0xF;
        v19 = 84;
        v20 = 1;
        v22 = 0;
        LOWORD(v23) = ((v17 >> 4) & 0xF) + 16;
        break;
      case 12:
        v19 = 81;
        v20 = 1;
        v21 = (word & 0xF) + 16;
        v22 = 1;
        LOWORD(v23) = ((v17 >> 4) & 0xF) + 16;
        break;
      case 13:
        v19 = 82;
        v20 = 0;
        v21 = (word & 0xF) + 16;
        v22 = 1;
        v23 = (v17 >> 4) & 0xF;
        break;
      default:
        *(_WORD *)(a1 + 24) = 0;
        goto LABEL_5;
    }
    *(_WORD *)(a1 + 166) = v21;
    v24 = *(_WORD *)(a1 + 26);
    *(_WORD *)(a1 + 24) = v19;
    LOWORD(result) = v24 + 3;
    *(_BYTE *)(a1 + 121) = 1;
    *(_WORD *)(a1 + 126) = v23;
    *(_BYTE *)(a1 + 125) = v20;
    *(_BYTE *)(a1 + 161) = 1;
    *(_BYTE *)(a1 + 165) = v22;
    *(_BYTE *)(a1 + 41) = 5;
    *(_QWORD *)(a1 + 48) = v5 & 0xF;
    *(_BYTE *)(a1 + 45) = 0;
    *(_BYTE *)(a1 + 81) = 5;
    *(_QWORD *)(a1 + 88) = SBYTE1(v17);
    *(_BYTE *)(a1 + 85) = 0;
    *(_WORD *)(a1 + 26) = result;
    return (unsigned __int16)result;
  }
LABEL_5:
  v33 = v3;
  v6 = sub_3C70(a1, &v33);
  v7 = v6;
  if ( v6 )
  {
    *(_WORD *)(a1 + 24) = *(_DWORD *)v6;
    v8 = *((_DWORD *)v6 + 3);
    if ( v8 )
    {
      v9 = v33 >> *((_DWORD *)qword_A470 + *((int *)v7 + 2));
      sub_37B0(a1, v9, a1 + 40, v8, *((_DWORD *)v7 + 4), *((_DWORD *)v7 + 7));
      v10 = *((_DWORD *)v7 + 5);
      v11 = v9 >> *((_DWORD *)qword_A470 + *((int *)v7 + 4));
      v33 = v11;
      if ( !v10 )
        goto LABEL_8;
    }
    else
    {
      v10 = *((_DWORD *)v7 + 5);
      if ( !v10 )
      {
LABEL_9:
        *(_DWORD *)(a1 + 28) = 0;
        if ( (v7[29] & 2) != 0 )
          *(_DWORD *)(a1 + 28) = 1;
        LOWORD(result) = *(_WORD *)(a1 + 26);
        return (unsigned __int16)result;
      }
      v11 = v33 >> *((_DWORD *)qword_A470 + *((int *)v7 + 2));
      v33 = v11;
    }
    sub_37B0(a1, v11, a1 + 80, v10, *((_DWORD *)v7 + 6), *((_DWORD *)v7 + 7));
LABEL_8:
    if ( (v7[29] & 1) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 41) || !*(_BYTE *)(a1 + 81) )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v28 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v29 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v30 = *(_QWORD *)(a1 + 72);
      v31 = *(_DWORD *)(a1 + 112);
      *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 80));
      v32 = _mm_loadu_si128((const __m128i *)(a1 + 96));
      v36 = v30;
      *(_DWORD *)(a1 + 72) = v31;
      *(_DWORD *)(a1 + 112) = v30;
      v34 = v28;
      v35 = v29;
      *(__m128i *)(a1 + 56) = v32;
      *(__m128i *)(a1 + 80) = v28;
      *(__m128i *)(a1 + 96) = v29;
    }
    goto LABEL_9;
  }
  return 0;
}

