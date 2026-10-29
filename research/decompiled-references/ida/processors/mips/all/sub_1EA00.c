__int64 __fastcall sub_1EA00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v9; // rdx
  unsigned __int16 word; // ax
  unsigned __int8 *v11; // rdi
  int v12; // edx
  unsigned __int8 v13; // si
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r14
  __int16 v17; // dx
  int v18; // edx
  unsigned int v19; // r12d
  char v20; // al
  __int64 v21; // rdx
  int v22; // edx
  unsigned __int16 v23; // ax

  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v5 > 0x22Du )
  {
    if ( (unsigned __int16)v5 > 0x2F4u )
    {
      if ( (unsigned __int16)(v5 - 1690) <= 3u )
        return 1;
    }
    else if ( (unsigned __int16)v5 > 0x2DEu )
    {
      LOWORD(v5) = v5 - 735;
      v21 = 3945447;
      if ( _bittest64(&v21, v5) )
        return 1;
    }
  }
  else if ( (unsigned __int16)v5 > 0x1F9u )
  {
    v9 = 0x800C00400047DLL;
    LOWORD(v5) = v5 - 506;
    if ( _bittest64(&v9, v5) )
      return 1;
  }
  else if ( (unsigned __int16)v5 > 0x9Du )
  {
    if ( (_WORD)v5 == 206 || (unsigned __int16)(v5 - 217) <= 1u )
      return 1;
  }
  else if ( (unsigned __int16)v5 <= 0x76u )
  {
    if ( (_WORD)v5 == 53 || (_WORD)v5 == 56 )
      return 1;
  }
  else
  {
    v7 = 0x7E10C00861LL;
    if ( _bittest64(&v7, (unsigned int)(v5 - 119)) )
      return 1;
  }
  word = get_word(*(_QWORD *)(a2 + 16) + 2LL);
  v11 = (unsigned __int8 *)(a2 + 41);
  v12 = 0;
  while ( 1 )
  {
    v13 = *v11;
    if ( *v11 <= 5u )
    {
      if ( v13 > 3u )
        goto LABEL_14;
      goto LABEL_28;
    }
    if ( v13 != 7 )
      goto LABEL_28;
    v14 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v14 <= 0xCBu )
      break;
    if ( (unsigned __int16)(v14 - 439) <= 1u )
      goto LABEL_14;
LABEL_28:
    ++v12;
    v11 += 40;
    if ( v12 == 3 )
      return 0;
  }
  if ( (unsigned __int16)v14 <= 0xC5u )
    goto LABEL_28;
  LOWORD(v14) = v14 - 198;
  v15 = 53;
  if ( !_bittest64(&v15, v14) )
    goto LABEL_28;
LABEL_14:
  v16 = a2 + 40LL * (v12 + 1);
  v17 = *(_WORD *)(*(_QWORD *)(a1 + 192) + 2LL * ((int)word >> 11));
  if ( v17 == -2 )
  {
    v22 = 16 * (((_WORD)a3 << 7) & 0x780 | (a3 >> 4) & 0x7F);
    v19 = v22 | word & 0xF;
    if ( (v22 & 0x4000) != 0 )
      v19 |= 0xFFFF8000;
    sub_41340(a1, a2, v16, 4, 0, 27, 16, -1, -1);
    goto LABEL_19;
  }
  if ( (~v17 & 0xFFFB) == 0 )
  {
    v19 = a3 & 0x20 | (a3 >> 6) & 0x1F;
    goto LABEL_19;
  }
  v18 = 32 * ((a3 >> 5) & 0x3F | ((_WORD)a3 << 6) & 0x7C0);
  v19 = v18 | word & 0x1F;
  if ( (v18 & 0x8000) == 0 )
    goto LABEL_17;
  v23 = *(_WORD *)(a2 + 24);
  if ( v23 == 204 )
    goto LABEL_17;
  if ( v23 > 0xCCu )
  {
    if ( v23 == 442 )
      goto LABEL_17;
LABEL_48:
    v19 |= 0xFFFF0000;
    goto LABEL_17;
  }
  if ( v23 > 0x26u )
  {
    if ( v23 == 135 )
      goto LABEL_17;
    goto LABEL_48;
  }
  if ( v23 <= 0x23u )
    goto LABEL_48;
LABEL_17:
  if ( *(_BYTE *)(v16 + 1) == 7 )
    sub_41590(a1, a2, v16, 5, 0, 27, 16);
  else
    sub_41340(a1, a2, v16, 5, 0, 27, 16, -1, -1);
LABEL_19:
  v20 = *(_BYTE *)(v16 + 1);
  switch ( v20 )
  {
    case 5:
      *(_BYTE *)(v16 + 5) = 2;
      *(_QWORD *)(v16 + 8) = v19;
      break;
    case 7:
      *(_BYTE *)(v16 + 5) = 9;
      *(_QWORD *)(v16 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                            & ((int)(2 * v19) + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26));
      break;
    case 4:
      *(_QWORD *)(v16 + 16) = v19;
      break;
  }
  return 1;
}

