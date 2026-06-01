__int64 __fastcall sub_BDFF0(__int64 a1, int a2, double a3)
{
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 320) + 1856LL);
  if ( !v3 )
    goto LABEL_4;
  v4 = 24;
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v5 & 2) != 0 )
          goto LABEL_4;
        v4 = v5 + 24;
        if ( a2 >= *(_DWORD *)(v5 + 24) )
          break;
        v5 = *(_QWORD *)(v5 + 8);
      }
      if ( a2 <= *(_DWORD *)(v5 + 24) )
        break;
      v5 = *(_QWORD *)(v5 + 16);
    }
    if ( v3 == (_QWORD *)v5 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_383060(0xC386u, a3);
      goto LABEL_15;
    }
  }
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * *(int *)(v4 + 4));
  v7 = *(int *)(v4 + 8);
  if ( v7 >= v6[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC714u, a3);
LABEL_15:
    BUG();
  }
  return *(_QWORD *)(*v6 + 8 * v7);
}

