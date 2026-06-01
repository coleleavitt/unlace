__int64 __fastcall sub_1CFD0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 k; // rbp
  _QWORD *v13; // rax

  netnode_kill();
  result = netnode_kill();
  if ( a1[1705] )
  {
    a1[1706] = 0;
    result = qfree();
  }
  if ( a1[1700] )
  {
    a1[1701] = 0;
    result = qfree();
  }
  if ( a1[664] )
  {
    a1[665] = 0;
    result = qfree();
  }
  if ( a1[659] )
  {
    a1[660] = 0;
    result = qfree();
  }
  if ( a1[654] )
  {
    a1[655] = 0;
    result = qfree();
  }
  v2 = a1[651];
  if ( v2 )
  {
    v3 = a1[652];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = a1[651];
        }
      }
    }
    a1[652] = 0;
    result = qfree();
  }
  v6 = a1[647];
  if ( v6 )
  {
    v7 = a1[648];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[647];
        }
      }
    }
    a1[648] = 0;
    result = qfree();
  }
  v10 = a1[644];
  if ( v10 )
  {
    v11 = a1[645];
    if ( v11 )
    {
      for ( k = 0; k != v11; ++k )
      {
        v13 = (_QWORD *)(v10 + 24 * k);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = a1[644];
        }
      }
    }
    a1[645] = 0;
    return qfree();
  }
  return result;
}

