__int64 __fastcall sub_5CB0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // eax
  unsigned __int8 v9; // bp
  unsigned __int16 next_word; // ax
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // dx
  int v13; // eax
  char v14; // si
  int v15; // ecx
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // si
  int v18; // edi
  unsigned __int8 v19; // r13
  char v20; // bp
  unsigned __int8 v21; // al
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  char v25; // bp
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  int v30; // r13d
  char v31; // bp
  unsigned __int8 v32; // al
  __int16 v33; // dx
  __int64 v34; // rax

  next_byte = insn_get_next_byte();
  v4 = next_byte;
  if ( next_byte <= 0x5Eu )
  {
    if ( next_byte > 0x3Au )
    {
      switch ( next_byte )
      {
        case ';':
          *(_WORD *)(a2 + 24) = 91;
          goto LABEL_7;
        case 'K':
          *(_WORD *)(a2 + 24) = 144;
          goto LABEL_7;
        case 'O':
          *(_WORD *)(a2 + 24) = 143;
          goto LABEL_7;
        case 'Z':
        case '^':
          *(_WORD *)(a2 + 24) = (next_byte == 90) + 8;
          v9 = insn_get_next_byte();
          next_word = insn_get_next_word();
          *(_BYTE *)(a2 + 41) = 5;
          v11 = next_word;
          v12 = next_word;
          v13 = next_word & 0x1F;
          *(_BYTE *)(a2 + 45) = 0;
          v14 = v11 >> 5;
          v15 = v14 & 0x1F;
          v16 = (v12 >> 10) & 0x1F;
          v17 = v14 & 0x1F;
          if ( v13 >= v15 )
            v18 = (-v13 & 0x1F) + v15;
          else
            v18 = v15 - v13;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 48) = v18;
          *(_QWORD *)(a2 + 88) = v17;
          *(_BYTE *)(a2 + 85) = 0;
          *(_BYTE *)(a2 + 121) = 5;
          *(_QWORD *)(a2 + 128) = v16 - v15;
          *(_BYTE *)(a2 + 125) = 0;
          *(_BYTE *)(a2 + 161) = 1;
          *(_WORD *)(a2 + 166) = v9 >> 4;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 165) = 1;
          *(_BYTE *)(a2 + 201) = 1;
          *(_BYTE *)(a2 + 205) = 1;
          *(_WORD *)(a2 + 206) = v9 & 0xF;
          break;
        default:
          v7 = next_byte >> 2;
          v8 = next_byte >> 2;
          goto LABEL_28;
      }
      return result;
    }
    if ( next_byte == 7 )
    {
      *(_WORD *)(a2 + 24) = 89;
      goto LABEL_7;
    }
    if ( next_byte == 15 )
    {
      *(_WORD *)(a2 + 24) = 1;
LABEL_7:
      v5 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 46) = v5 >> 4;
      *(_WORD *)(a2 + 86) = v5 & 0xF;
      return *(unsigned __int16 *)(a2 + 26);
    }
    v7 = next_byte >> 2;
    v8 = next_byte >> 2;
    if ( v7 <= 1u )
    {
      if ( !v7 )
      {
        *(_WORD *)(a2 + 24) = 119;
        goto LABEL_7;
      }
      return 0;
    }
LABEL_28:
    v24 = 1LL << v7;
    if ( ((1LL << v7) & 0x2333F0) == 0 )
    {
LABEL_29:
      if ( (v24 & 4) != 0 )
      {
        *(_WORD *)(a2 + 24) = 2;
        goto LABEL_7;
      }
      return 0;
    }
    goto LABEL_39;
  }
  v19 = next_byte >> 2;
  v8 = next_byte >> 2;
  if ( v19 <= 0x1Bu )
  {
    v24 = 1LL << v19;
    if ( ((1LL << v19) & 0x2333F0) == 0 )
    {
      if ( (v24 & 0xF000000) != 0 )
      {
        *(_WORD *)(a2 + 24) = asc_F728[v8 - 24];
        return (unsigned __int16)sub_5A60(a1, a2, v4);
      }
      goto LABEL_29;
    }
LABEL_39:
    *(_WORD *)(a2 + 24) = aBc12[v8 - 4];
    v28 = insn_get_next_byte();
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 1;
    *(_WORD *)(a2 + 86) = v28 & 0xF;
    *(_WORD *)(a2 + 46) = v28 >> 4;
    sub_5960(a1, a2, a2 + 40, v4);
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( v19 <= 0x29u )
  {
    if ( v19 <= 0x27u )
    {
      if ( v19 == 30 )
      {
        *(_BYTE *)(a2 + 33) = 7;
        v20 = v4 & 3;
        *(_WORD *)(a2 + 24) = 160;
        v21 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 4;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = v21 >> 4;
        if ( v20 == 1 )
        {
          v22 = (4 * (unsigned __int16)insn_get_next_byte()) & 0x3FC;
        }
        else
        {
          v22 = 0;
          if ( v20 == 2 )
            v22 = (4 * (unsigned int)insn_get_next_word()) & 0x3FFFC;
        }
        *(_QWORD *)(a2 + 88) = v22;
        v23 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 46) = (unsigned __int8)((v23 >> 4) + 32);
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (unsigned __int8)(v19 - 32) > 6u )
        return 0;
    }
    *(_WORD *)(a2 + 24) = a843659n[v8 - 32];
    return (unsigned __int16)sub_58B0(a1, a2, v4);
  }
  if ( v19 != 50 )
  {
    if ( v4 >> 5 == 6 )
    {
      *(_BYTE *)(a2 + 33) = (v19 & 3) + 1;
      v29 = insn_get_next_byte();
      *(_BYTE *)(a2 + 45) = 2;
      v30 = v29 & 0xF;
      *(_WORD *)(a2 + 46) = v29 >> 4;
      sub_5960(a1, a2, a2 + 40, v4);
      *(_WORD *)(a2 + 24) = aXyz[v30];
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( v4 >> 5 == 7 )
    {
      v31 = v4 & 3;
      v32 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = v19 & 7;
      v33 = *((_WORD *)qword_F800 + (v32 & 0xF));
      *(_WORD *)(a2 + 86) = v32 >> 4;
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 24) = v33;
      *(_WORD *)(a2 + 112) = 298;
      if ( v31 == 1 )
      {
        *(_BYTE *)(a2 + 85) = 0;
        v34 = (unsigned __int8)insn_get_next_byte();
      }
      else if ( v31 == 2 )
      {
        *(_BYTE *)(a2 + 85) = 1;
        v34 = (unsigned __int16)insn_get_next_word();
      }
      else
      {
        *(_BYTE *)(a2 + 85) = 0;
        v34 = 0;
      }
      *(_QWORD *)(a2 + 88) = v34;
      return *(unsigned __int16 *)(a2 + 26);
    }
    return 0;
  }
  *(_BYTE *)(a2 + 33) = 7;
  v25 = v4 & 3;
  *(_WORD *)(a2 + 24) = 160;
  v26 = insn_get_next_byte();
  *(_BYTE *)(a2 + 41) = 4;
  *(_BYTE *)(a2 + 45) = 2;
  *(_WORD *)(a2 + 46) = v26 >> 4;
  if ( v25 == 1 )
  {
    *(_QWORD *)(a2 + 48) = (4 * (unsigned __int16)insn_get_next_byte()) & 0x3FC;
  }
  else if ( v25 == 2 )
  {
    *(_QWORD *)(a2 + 48) = (4 * (unsigned int)insn_get_next_word()) & 0x3FFFC;
  }
  v27 = insn_get_next_byte();
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 4;
  *(_WORD *)(a2 + 86) = (unsigned __int8)((v27 >> 4) + 32);
  return *(unsigned __int16 *)(a2 + 26);
}

