__int64 __fastcall sub_64710(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r8
  __int64 v4; // r8
  int v5; // r9d
  char v6; // r10
  int v7; // ecx
  char v8; // al
  int v9; // ecx
  unsigned __int8 next_byte; // al

  v2 = (__int64)*(&off_181AC0 + *(unsigned __int8 *)(a2 + 24));
  if ( !*(_BYTE *)(a1 + 5220) )
  {
    *(_BYTE *)(a1 + 5220) = 1;
    next_byte = insn_get_next_byte();
    *(_DWORD *)(a1 + 5196) = next_byte;
    *(_DWORD *)(a1 + 5200) = ((int)next_byte >> 3) & 7;
  }
  if ( !*(_WORD *)(v2 + 8) )
    return 0;
  v3 = v2;
  while ( 1 )
  {
    if ( !sub_64610(a1, a2, *(_BYTE *)v3) )
      goto LABEL_5;
    v7 = *(_DWORD *)(a1 + 5196);
    if ( (unsigned __int8)(v7 & HIBYTE(*(_WORD *)(v4 + 2))) != (unsigned __int8)*(_WORD *)(v4 + 2) )
      goto LABEL_5;
    v8 = *(_BYTE *)(v4 + 1);
    if ( v8 == 3 )
      goto LABEL_11;
    v9 = v7 >> 6;
    if ( v8 )
      break;
    if ( v9 == 3 )
      goto LABEL_11;
LABEL_5:
    v3 = v2 + 20LL * (v5 + 1);
    if ( !*(_WORD *)(v3 + 8) )
      return 0;
  }
  if ( v9 == 3 )
    goto LABEL_5;
LABEL_11:
  switch ( v6 )
  {
    case 2:
      *(_BYTE *)(a1 + 5222) = 1;
      break;
    case 3:
      *(_DWORD *)(a2 + 28) &= ~4u;
      break;
    case 1:
      *(_DWORD *)(a2 + 28) &= ~2u;
      break;
  }
  return v4 + 4;
}

