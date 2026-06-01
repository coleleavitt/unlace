void __fastcall sub_314840(_QWORD *a1, char a2, char a3)
{
  __int64 v3; // r8
  _QWORD *v4; // rax
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a1[150];
  if ( v3 )
  {
    v4 = (_QWORD *)a1[149];
    v5 = a3 & a2;
    if ( v5 && (__int64)(v4[1] + a1[17]) < 0 )
    {
LABEL_13:
      if ( !under_debugger )
        sub_37B760(51712);
    }
    else
    {
      v6 = 0;
      do
      {
        ++v6;
        v4 += 2;
        if ( v3 == v6 )
          goto LABEL_10;
        if ( v5 && (__int64)(v4[1] + a1[17]) < 0 )
          goto LABEL_13;
      }
      while ( *(v4 - 2) < *v4 );
      if ( !under_debugger )
        sub_37B760(51713);
    }
LABEL_21:
    BUG();
  }
LABEL_10:
  if ( a3 )
  {
    v7 = sub_1C8C90((__int64)a1, a1[5]);
    v8 = a1[17];
    if ( a1[1] )
    {
      if ( v7 == v8 )
        return;
    }
    else if ( v7 <= v8 )
    {
      return;
    }
    if ( !under_debugger )
      sub_37B760(51714);
    goto LABEL_21;
  }
}

