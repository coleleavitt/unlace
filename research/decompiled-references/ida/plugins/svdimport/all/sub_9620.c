void *__fastcall sub_9620(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 k; // r13
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 m; // r15
  _QWORD *v17; // rbx
  __int64 v18; // [rsp+8h] [rbp-40h]

  result = &unk_1BD30;
  v3 = a1[11];
  a1[10] = &unk_1BD30;
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 48 * i;
        if ( *(_QWORD *)(v6 + 24) )
        {
          *(_QWORD *)(v6 + 32) = 0;
          qfree();
          v3 = a1[11];
        }
      }
    }
    a1[12] = 0;
    result = (void *)qfree();
  }
  v7 = a1[6];
  if ( v7 )
  {
    v8 = a1[7];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 160 * j);
        sub_93C0(v10 + 17);
        if ( v10[12] )
        {
          v10[13] = 0;
          qfree();
        }
        if ( v10[9] )
        {
          v10[10] = 0;
          qfree();
        }
        if ( v10[6] )
        {
          v10[7] = 0;
          qfree();
        }
        if ( v10[3] )
        {
          v10[4] = 0;
          qfree();
        }
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
        }
        v7 = a1[6];
      }
    }
    a1[7] = 0;
    result = (void *)qfree();
  }
  v11 = a1[2];
  if ( v11 )
  {
    v18 = a1[3];
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v13 = (_QWORD *)(v11 + 80 * k);
        v14 = v13[6];
        if ( v14 )
        {
          v15 = v13[7];
          if ( v15 )
          {
            for ( m = 0; m != v15; ++m )
            {
              v17 = (_QWORD *)(v14 + 48 * m);
              if ( v17[3] )
              {
                v17[4] = 0;
                qfree();
              }
              if ( *v17 )
              {
                v17[1] = 0;
                qfree();
              }
              v14 = v13[6];
            }
          }
          v13[7] = 0;
          qfree();
        }
        if ( v13[3] )
        {
          v13[4] = 0;
          qfree();
        }
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
        }
        v11 = a1[2];
      }
    }
    a1[3] = 0;
    return (void *)qfree();
  }
  return result;
}

