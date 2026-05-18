__int64 __fastcall sub_C45E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi

  v2 = a1[5];
  if ( *(_BYTE *)a2 != 77 )
  {
    if ( *(_BYTE *)a2 != 0xA7 )
      return 0;
    if ( *(__int16 *)(a2 + 48) != *(_DWORD *)(v2 + 12) )
      return 0;
    if ( (*(_DWORD *)(a2 + 4) & 0x3000000) != 0 )
      return 0;
    if ( *(_QWORD *)(v2 + 16) != *(_QWORD *)(a2 + 64) )
      return 0;
    if ( !a2 )
      return 0;
    v4 = *a1;
    v5 = *(_QWORD **)(*a1 + 400LL);
    if ( !v5 )
      return 0;
    if ( a2 != *v5 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)v5[3];
        if ( !v6 )
          return 0;
        if ( a2 == *v6 )
          goto LABEL_25;
        v5 = (_QWORD *)v5[3];
      }
    }
    goto LABEL_28;
  }
  if ( *(__int16 *)(a2 + 48) != *(_DWORD *)(v2 + 12) )
    return 0;
  v4 = *a1;
  if ( *(_QWORD *)(*a1 + 168LL) != *(_QWORD *)(v2 + 16) )
    return 0;
  if ( !a2 )
    return 0;
  v5 = *(_QWORD **)(v4 + 400);
  if ( !v5 )
    return 0;
  if ( a2 == *v5 )
  {
LABEL_28:
    v7 = (_QWORD *)(v4 + 400);
    v6 = v5;
LABEL_26:
    if ( v2 )
    {
      *v7 = v6[3];
      v6[3] = *(_QWORD *)v2;
      *(_QWORD *)v2 = v6;
      ++*(_DWORD *)(v2 + 8);
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = (_QWORD *)v5[3];
    if ( !v6 )
      return 0;
    if ( a2 == *v6 )
    {
LABEL_25:
      v7 = v5 + 3;
      goto LABEL_26;
    }
    v5 = (_QWORD *)v5[3];
  }
}
