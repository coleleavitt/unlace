void __fastcall sub_31BBC0(_QWORD *a1, char a2, char a3, double a4)
{
  __int64 v4; // r8
  _QWORD *v5; // rax
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  v4 = a1[150];
  if ( v4 )
  {
    v5 = (_QWORD *)a1[149];
    v6 = a3 & a2;
    if ( v6 && (__int64)(v5[1] + a1[17]) < 0 )
    {
LABEL_13:
      if ( !under_debugger )
        sub_383060(0xCA00u, a4);
    }
    else
    {
      v7 = 0;
      do
      {
        ++v7;
        v5 += 2;
        if ( v4 == v7 )
          goto LABEL_10;
        if ( v6 && (__int64)(v5[1] + a1[17]) < 0 )
          goto LABEL_13;
      }
      while ( *(v5 - 2) < *v5 );
      if ( !under_debugger )
        sub_383060(0xCA01u, a4);
    }
LABEL_21:
    BUG();
  }
LABEL_10:
  if ( a3 )
  {
    v8 = sub_1CFBB0((__int64)a1, a1[5], a4);
    v9 = a1[17];
    if ( a1[1] )
    {
      if ( v8 == v9 )
        return;
    }
    else if ( v8 <= v9 )
    {
      return;
    }
    if ( !under_debugger )
      sub_383060(0xCA02u, a4);
    goto LABEL_21;
  }
}

