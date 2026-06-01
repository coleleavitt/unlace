__int64 __fastcall sub_13600(__int64 a1, __int64 a2)
{
  unsigned __int16 next_word; // bx
  char v3; // al
  __int16 v4; // cx
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned __int8 v7; // r14
  unsigned int v8; // r13d
  __int16 v9; // r9
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 **v14; // rdi
  unsigned __int16 v15; // r8
  __int16 v16; // ax
  __int16 *v17; // r14
  __int16 *v18; // r11
  unsigned int v19; // r10d
  __int16 v20; // r13
  int v21; // eax
  unsigned __int16 v22; // [rsp+2h] [rbp-1B6h]
  __int16 v23; // [rsp+4h] [rbp-1B4h]
  unsigned int v24; // [rsp+Ch] [rbp-1ACh]
  _BYTE v25[360]; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 v26; // [rsp+178h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  next_word = insn_get_next_word(a2);
  if ( (~(_BYTE)next_word & 0x1F) == 0 )
    return 0;
  v3 = next_word & 3;
  if ( (next_word & 3) != 3 )
  {
    v4 = next_word >> 13;
    if ( v3 == 1 )
      return sub_C4B0(a1, a2, next_word, v4);
    if ( v3 == 2 )
      return sub_CC70(a1, a2, next_word, v4);
    return sub_C1E0(a1, a2, next_word, v4);
  }
  v6 = insn_get_next_word(a2);
  v7 = next_word & 0x7F;
  v8 = v6;
  v9 = (unsigned __int16)v6 >> 9;
  if ( (next_word & 0x7Fu) <= 0x37 )
  {
    switch ( v7 )
    {
      case 3u:
        return sub_D2F0(a1, a2, next_word, v6, (next_word >> 12) & 7);
      case 7u:
        return sub_D530(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      case 0xBu:
        v23 = (unsigned __int16)v6 >> 9;
        v17 = (__int16 *)&unk_2AB68;
        v18 = (__int16 *)&unk_2AB6C;
        v19 = 0;
        v22 = v6;
        break;
      case 0xFu:
        return sub_D1E0(a1, a2, next_word, v6, (next_word >> 12) & 7);
      case 0x13u:
        return sub_E510(a1, a2, next_word, (unsigned __int16)v6, (next_word >> 12) & 7, v9 & 0x7F);
      case 0x17u:
      case 0x37u:
        return sub_EFB0(a1, a2, v7, next_word, v6);
      case 0x1Bu:
        if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          return 0;
        return sub_EC30(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      case 0x23u:
        v15 = word_2AEC0[(next_word >> 12) & 7];
        *(_WORD *)(a2 + 24) = v15;
        if ( !v15 )
          return 0;
        v16 = *(_WORD *)(a2 + 34);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = ((unsigned __int16)v8 >> 4) & 0x1F;
        *(_BYTE *)(a2 + 45) = (v16 & 4) == 0 ? 2 : 7;
        sub_C050(a1, a2 + 80, next_word, (unsigned __int16)v8, v15);
        goto LABEL_25;
      case 0x27u:
        return sub_D610(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      case 0x2Bu:
        if ( *(char *)(a1 + 468) >= 0 )
          return 0;
        return sub_11C80(a1, a2, next_word, (unsigned __int16)v6);
      case 0x2Fu:
        return sub_F170(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      case 0x33u:
        return sub_DF00(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      default:
        return 0;
    }
    while ( 1 )
    {
      v20 = *v17;
      if ( (*(_WORD *)(a1 + 468) & (unsigned __int16)*v17) != 0 )
      {
        qmemcpy(v25, (const void *)a2, sizeof(v25));
        if ( v20 == 64 )
        {
          v24 = v19;
          v21 = sub_118E0(a1, (__int64)v25, next_word, v22, (next_word >> 12) & 7, v23 & 0x7F);
          v19 = v24;
          v18 = (__int16 *)&unk_2AB6C;
          if ( v21 )
            goto LABEL_44;
        }
        else if ( v20 == 128 )
        {
          sub_11A60(a1, (__int64)v25, next_word, v22);
          v21 = 4;
LABEL_44:
          if ( v19 )
          {
            *(_BYTE *)(a2 + 33) |= v20;
          }
          else
          {
            v19 = v21;
            qmemcpy((void *)a2, v25, 0x168u);
          }
        }
      }
      if ( v18 == ++v17 )
        return v19;
    }
  }
  if ( v7 <= 0x53u )
  {
    if ( v7 > 0x3Au )
    {
      v10 = 1LL << (v7 - 59);
      if ( (v10 & 0x111100) != 0 )
        return sub_DDA0(a1, a2, v7, next_word, v8, (next_word >> 12) & 7, v9);
      if ( (v10 & 1) != 0 )
      {
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
          return sub_E360(a1, a2, next_word, v8, (next_word >> 12) & 7, v9 & 0x7F);
      }
      else if ( v7 == 83 )
      {
        return sub_D6C0(a1, a2, next_word, v8, (next_word >> 12) & 7, v9 & 0x7F);
      }
    }
    return 0;
  }
  switch ( next_word & 0x7F )
  {
    case 'W':
      result = sub_FA10(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      break;
    case '[':
      if ( *(char *)(a1 + 468) >= 0 )
        return 0;
      result = sub_11FE0(a1, a2, next_word, (unsigned __int16)v6);
      break;
    case 'c':
      result = sub_EE70(a1, a2, next_word, (unsigned __int16)v6, (next_word >> 12) & 7);
      break;
    case 'g':
      if ( ((next_word >> 12) & 7) != 0 )
        return 0;
      v11 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 4;
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 46) = (unsigned __int8)(next_word >> 7);
      *(_BYTE *)(a2 + 45) = (v11 & 4) == 0 ? 2 : 7;
      v12 = v8;
      LOWORD(v12) = (unsigned __int16)v8 >> 4;
      *(_QWORD *)(a2 + 96) = v12 << 52 >> 52;
      *(_WORD *)(a2 + 86) = (next_word >> 15) + ((2 * (_BYTE)v8) & 0x1E);
      v13 = *(_QWORD *)(a1 + 504);
      if ( v13 )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
        v14 = *(__int64 ***)(a1 + 504);
        if ( v14 )
          sub_BAE0(v14, 32, 32, 20);
      }
LABEL_25:
      result = *(unsigned __int16 *)(a2 + 26);
      break;
    case 'o':
      result = sub_F080(a1, a2, next_word, v6);
      break;
    case 's':
      result = sub_F2F0(a1, a2, next_word, v6, (next_word >> 12) & 7, v9 & 0x7F);
      break;
    default:
      return 0;
  }
  return result;
}

