__int64 __fastcall sub_308D0(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  v1 = a1[109];
  v2 = a1[48];
  if ( v1 > 1 )
  {
    v3 = a1[108];
    v4 = v2;
    v5 = 1;
    v6 = -1;
    v7 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v3 + 40 * v7;
        if ( !*(_BYTE *)(v8 + 1) )
          return (unsigned int)v5;
        v9 = *(_QWORD *)(v8 + 16);
        if ( v2 >= v9 )
          break;
        if ( v4 < v9 )
          goto LABEL_4;
LABEL_5:
        v5 += 2;
        v7 = v5;
        if ( v5 >= v1 )
          goto LABEL_11;
      }
      if ( v9 >= v4 )
        goto LABEL_5;
      if ( v2 >= v4 )
      {
LABEL_4:
        v6 = v5;
        v4 = v9;
        goto LABEL_5;
      }
      v5 += 2;
      v7 = v5;
      if ( v5 >= v1 )
      {
LABEL_11:
        if ( v6 == -1 )
          break;
        return v6;
      }
    }
  }
  if ( under_debugger )
    BUG();
  interr(10387);
  return sub_30980(10387, v2);
}

