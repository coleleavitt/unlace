__int64 __fastcall sub_102C30(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 j; // rbp
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 k; // rbp
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 m; // rbp
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 n; // rbp
  _QWORD *v20; // rax
  __int64 v21; // r12
  __int64 ii; // rbp
  __int64 v23; // r12
  __int64 jj; // rbp

  *a1 = &off_4D7938;
  a1[40] = 0;
  if ( a1[41] )
  {
    a1[42] = 0;
    qfree();
  }
  qfree();
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  result = qfree();
  v3 = a1[28];
  if ( v3 )
  {
    v4 = a1[29];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        if ( *(_QWORD *)(v6 + 16) )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree();
        }
        qfree();
        v3 = a1[28];
      }
    }
    a1[29] = 0;
    result = qfree();
  }
  v7 = a1[25];
  if ( v7 )
  {
    v8 = a1[26];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = v7 + 40 * j;
        if ( *(_QWORD *)(v10 + 16) )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree();
        }
        qfree();
        v7 = a1[25];
      }
    }
    a1[26] = 0;
    result = qfree();
  }
  v11 = a1[22];
  if ( v11 )
  {
    v12 = a1[23];
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = v11 + 40 * k;
        if ( *(_QWORD *)(v14 + 16) )
        {
          *(_QWORD *)(v14 + 24) = 0;
          qfree();
        }
        qfree();
        v11 = a1[22];
      }
    }
    a1[23] = 0;
    result = qfree();
  }
  if ( a1[19] )
  {
    v15 = a1[20];
    if ( v15 )
    {
      for ( m = 0; m != v15; ++m )
        qfree();
    }
    a1[20] = 0;
    result = qfree();
  }
  if ( a1[16] )
  {
    a1[17] = 0;
    result = qfree();
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    result = qfree();
  }
  v17 = a1[10];
  if ( v17 )
  {
    v18 = a1[11];
    if ( v18 )
    {
      for ( n = 0; n != v18; ++n )
      {
        v20 = (_QWORD *)(v17 + 24 * n);
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
          v17 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    result = qfree();
  }
  if ( a1[4] )
  {
    v21 = a1[5];
    if ( v21 )
    {
      for ( ii = 0; ii != v21; ++ii )
        qfree();
    }
    a1[5] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    v23 = a1[2];
    if ( v23 )
    {
      for ( jj = 0; jj != v23; ++jj )
        qfree();
    }
    a1[2] = 0;
    return qfree();
  }
  return result;
}

