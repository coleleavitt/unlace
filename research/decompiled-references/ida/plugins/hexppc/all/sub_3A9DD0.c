__int64 __fastcall sub_3A9DD0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx

  if ( *(_DWORD *)(a2 + 8) != *(_DWORD *)(a1 + 80) )
    return 0;
  v3 = **(_QWORD ***)(a1 + 64);
  if ( !v3 )
    return 0;
  v4 = 24;
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)v5 & 2) != 0 )
        return 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 24);
        v4 = v5 + 24;
        if ( a2 >= v6 )
          break;
        v5 = *(_QWORD *)(v5 + 8);
        if ( (*(_BYTE *)v5 & 2) != 0 )
          return 0;
      }
      if ( v6 >= a2 )
        break;
      v5 = *(_QWORD *)(v5 + 16);
    }
    if ( v3 == (_QWORD *)v5 )
      return 0;
  }
  v7 = sub_3A9B40(*(__int64 **)(a1 + 72));
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 8);
  v8 = *(_DWORD *)(v4 + 16);
  *(_QWORD *)v7 = a2;
  *(_DWORD *)(v7 + 24) = v8;
  *(_DWORD *)(v7 + 28) = 3;
  return 0;
}

