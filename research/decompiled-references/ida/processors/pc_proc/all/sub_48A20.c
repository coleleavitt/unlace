__int64 __fastcall sub_48A20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned int v4; // ecx
  unsigned int v6; // ebp
  int v7; // ebx
  unsigned int v8; // ecx
  __int16 v9; // ax

  v3 = *(_BYTE *)(a2 + 1);
  v4 = 0;
  if ( v3 != *(_BYTE *)(a3 + 1) )
    return v4;
  if ( v3 == 4 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return v4;
    goto LABEL_10;
  }
  if ( v3 > 4u )
  {
    v4 = 1;
    if ( v3 != 99 )
    {
      v4 = 0;
      if ( v3 == 100 )
        LOBYTE(v4) = *(_QWORD *)(a2 + 8) == *(_QWORD *)(a3 + 8);
    }
    return v4;
  }
  if ( v3 == 2 )
  {
LABEL_10:
    if ( *(_QWORD *)(a2 + 16) != *(_QWORD *)(a3 + 16) )
      return v4;
LABEL_11:
    v9 = *(_WORD *)(a2 + 26);
    if ( v9 == *(_WORD *)(a3 + 26) && (v9 != -1 || *(_WORD *)(a2 + 24) == *(_WORD *)(a3 + 24)) )
      LOBYTE(v4) = *(_WORD *)(a2 + 32) == *(_WORD *)(a3 + 32);
    return v4;
  }
  if ( v3 == 3 )
  {
    if ( *(_WORD *)(a2 + 6) != *(_WORD *)(a3 + 6) )
      return v4;
    goto LABEL_11;
  }
  if ( v3 != 1 )
    return v4;
  v6 = *(unsigned __int16 *)(a3 + 6);
  v7 = sub_72FC0(*(unsigned __int16 *)(a2 + 6), 0);
  LOBYTE(v8) = v7 == (unsigned int)sub_72FC0(v6, 0);
  return v8;
}

