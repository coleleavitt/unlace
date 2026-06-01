_BOOL8 __fastcall sub_D9C0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int16 v5; // dx
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  int v11; // r12d

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v3 )
    return 0;
  v5 = *(_WORD *)(a2 + 26);
  if ( v5 == 2 )
  {
    if ( (unsigned __int16)(get_word(*(_QWORD *)(a2 + 16)) - 1) > 0xFFFDu )
      return 0;
    goto LABEL_24;
  }
  if ( v5 == 4 )
  {
    if ( (unsigned int)get_dword(*(_QWORD *)(a2 + 16)) - 1 > 0xFFFFFFFD )
      return 0;
LABEL_24:
    v3 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v3 <= 0x79u )
      goto LABEL_5;
    goto LABEL_16;
  }
  if ( (unsigned __int16)v3 <= 0x79u )
  {
LABEL_5:
    if ( (unsigned __int16)v3 <= 0x5Eu )
      goto LABEL_9;
    v6 = 100695939;
    if ( !_bittest64(&v6, (unsigned int)(v3 - 95)) )
      goto LABEL_9;
    goto LABEL_7;
  }
LABEL_16:
  if ( (unsigned __int16)(v3 - 475) > 3u )
    goto LABEL_17;
LABEL_7:
  if ( *(_BYTE *)(a2 + 41) != 7 )
  {
    if ( *(_BYTE *)(a2 + 121) != 7 )
      goto LABEL_9;
LABEL_30:
    if ( (unsigned __int8)is_mapped(*(_QWORD *)(a2 + 136)) )
      goto LABEL_31;
    return 0;
  }
  if ( !(unsigned __int8)is_mapped(*(_QWORD *)(a2 + 56)) )
    return 0;
  if ( *(_BYTE *)(a2 + 121) == 7 )
    goto LABEL_30;
LABEL_31:
  LOWORD(v3) = *(_WORD *)(a2 + 24);
LABEL_17:
  if ( (_WORD)v3 == 191 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 <= 0x1F )
      return 1;
    v11 = 0;
    while ( 1 )
    {
      v10 -= 2LL;
      if ( (unsigned __int16)get_word(v10) != 0x9200 )
        break;
      if ( ++v11 == 16 )
        return 0;
    }
  }
LABEL_9:
  if ( !a3 )
    return 1;
  v8 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v8 > 0x47u )
  {
    LOWORD(v8) = v8 - 192;
    if ( (unsigned __int16)v8 > 0xEu )
      return 1;
    v9 = 30759;
    return !_bittest64(&v9, v8);
  }
  return (unsigned __int16)v8 <= 0x45u;
}

