__int64 __fastcall sub_442E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 k; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 m; // r12
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 n; // r14
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 ii; // r14
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-58h]
  __int64 j; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
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
        v2 = a1[9];
      }
    }
    a1[10] = 0;
    qfree();
  }
  v6 = a1[6];
  if ( v6 )
  {
    v27 = a1[7];
    if ( v27 )
    {
      for ( j = 0; j != v27; ++j )
      {
        v7 = (_QWORD *)(v6 + 96 * j);
        v8 = v7[9];
        if ( v8 )
        {
          v9 = v7[10];
          if ( v9 )
          {
            for ( k = 0; k != v9; ++k )
            {
              v11 = (_QWORD *)(v8 + 48 * k);
              if ( v11[3] )
              {
                v11[4] = 0;
                qfree();
              }
              if ( *v11 )
              {
                v11[1] = 0;
                qfree();
              }
              v8 = v7[9];
            }
          }
          v7[10] = 0;
          qfree();
        }
        v12 = v7[6];
        if ( v12 )
        {
          v24 = v7[7];
          if ( v24 )
          {
            for ( m = 0; m != v24; ++m )
            {
              v14 = (_QWORD *)(v12 + 96 * m);
              v15 = v14[9];
              if ( v15 )
              {
                v16 = v14[10];
                if ( v16 )
                {
                  for ( n = 0; n != v16; ++n )
                  {
                    v18 = (_QWORD *)(v15 + 48 * n);
                    if ( v18[3] )
                    {
                      v18[4] = 0;
                      qfree();
                    }
                    if ( *v18 )
                    {
                      v18[1] = 0;
                      qfree();
                    }
                    v15 = v14[9];
                  }
                }
                v14[10] = 0;
                qfree();
              }
              v19 = v14[6];
              if ( v19 )
              {
                v20 = v14[7];
                if ( v20 )
                {
                  for ( ii = 0; ii != v20; ++ii )
                  {
                    v22 = 3 * ii;
                    sub_442E0(32 * v22 + v19);
                    v19 = v14[6];
                  }
                }
                v14[7] = 0;
                qfree();
              }
              if ( v14[3] )
              {
                v14[4] = 0;
                qfree();
              }
              if ( *v14 )
              {
                v14[1] = 0;
                qfree();
              }
              v12 = v7[6];
            }
          }
          v7[7] = 0;
          qfree();
        }
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
        v6 = a1[6];
      }
    }
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  result = (__int64)a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

