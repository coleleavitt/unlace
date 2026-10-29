unsigned __int64 __fastcall sub_14DC0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rax
  int v12; // edx

  v2 = a1[83];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    if ( a1[84] )
    {
      a1[85] = 0;
      qfree();
      a1[84] = 0;
      a1[86] = 0;
    }
    v3 = a1[87];
    if ( v3 )
    {
      v4 = a1[88];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (_QWORD *)(v3 + 24 * i);
          if ( *v6 )
          {
            v6[1] = 0;
            qfree();
            v3 = a1[87];
          }
        }
      }
      a1[88] = 0;
      qfree();
      a1[87] = 0;
      a1[89] = 0;
    }
    if ( a1[90] )
    {
      a1[91] = 0;
      qfree();
      a1[90] = 0;
      a1[92] = 0;
    }
    v7 = a1[93];
    if ( v7 )
    {
      v8 = a1[94];
      if ( v8 )
      {
        for ( j = 0; j != v8; ++j )
        {
          v10 = (_QWORD *)(v7 + 24 * j);
          if ( *v10 )
          {
            v10[1] = 0;
            qfree();
            v7 = a1[93];
          }
        }
      }
      a1[94] = 0;
      qfree();
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  v11 = *a1;
  a1[83] = 0;
  (*(void (__fastcall **)(__int64 *))(v11 + 592))(a1);
  if ( *((_DWORD *)a1 + 195) == -1 || *((_DWORD *)a1 + 196) == -1 )
    goto LABEL_26;
  v12 = a1[85];
  if ( !a1[85] )
    v12 = *((_DWORD *)a1 + 194);
  if ( v12 <= 0 )
  {
LABEL_26:
    if ( !under_debugger )
      interr();
    BUG();
  }
  return sub_C2E0(1);
}

