__int64 __fastcall sub_374BA0(__int64 a1, unsigned __int64 a2, double a3)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
  if ( !v3 )
    goto LABEL_4;
  v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v4 & 2) != 0 )
          goto LABEL_4;
        v6 = *(_QWORD *)(v4 + 24);
        if ( a2 >= v6 )
          break;
        v4 = *(_QWORD *)(v4 + 8);
      }
      if ( v6 >= a2 )
        break;
      v4 = *(_QWORD *)(v4 + 16);
    }
    if ( v3 == (_QWORD *)v4 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_383060(0xCD68u, a3);
      BUG();
    }
  }
  sub_1460B0(a1);
  return sub_147D70(*(_QWORD *)(a1 + 112), a2, 0);
}

