__int64 __fastcall sub_B76E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbp
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp

  v2 = a1[36];
  if ( v2 )
  {
    v3 = a1[37];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 48 * i);
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[36];
      }
    }
    a1[37] = 0;
    qfree();
  }
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  qfree();
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  qfree();
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  qfree();
  if ( a1[14] )
  {
    a1[15] = 0;
    qfree();
  }
  qfree();
  cleanup_argloc();
  result = clear_tinfo_t();
  v7 = a1[6];
  if ( v7 )
  {
    v8 = a1[7];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = j;
        sub_119360(16 * v10 + v7);
        v7 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree();
  }
  v11 = a1[3];
  if ( v11 )
  {
    v12 = a1[4];
    if ( v12 )
    {
      v13 = 0;
      do
      {
        v14 = v11 + 80 * v13;
        cleanup_argloc();
        if ( *(_QWORD *)(v14 + 32) )
        {
          *(_QWORD *)(v14 + 40) = 0;
          qfree();
        }
        ++v13;
        clear_tinfo_t();
        sub_119360(v14);
        v11 = a1[3];
      }
      while ( v12 != v13 );
    }
    a1[4] = 0;
    return qfree();
  }
  return result;
}

