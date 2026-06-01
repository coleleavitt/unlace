__int64 __fastcall sub_17B70(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx

  v2 = a1[75];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( a1[72] )
  {
    a1[73] = 0;
    result = qfree();
  }
  v4 = a1[36];
  if ( v4 )
  {
    v5 = a1[37];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 96 * i);
        if ( v7[3] )
        {
          v7[4] = 0;
          qfree();
        }
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v4 = a1[36];
      }
    }
    a1[37] = 0;
    result = qfree();
  }
  if ( a1[14] )
  {
    a1[15] = 0;
    result = qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    return qfree();
  }
  return result;
}

