void __fastcall sub_28190(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 j; // r14
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 k; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 m; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 n; // rbp
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 ii; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 jj; // rbp
  _QWORD *v30; // rbx
  __int64 v31; // [rsp+8h] [rbp-40h]

  v2 = a1[15];
  if ( v2 )
  {
    v3 = a1[16];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 9 * i;
        sub_28190(16 * v5 + v2);
        v2 = a1[15];
      }
    }
    a1[16] = 0;
    qfree();
  }
  v6 = a1[12];
  if ( v6 )
  {
    v31 = a1[13];
    if ( v31 )
    {
      for ( j = 0; j != v31; ++j )
      {
        v8 = (_QWORD *)(v6 + 48 * j);
        v9 = v8[3];
        if ( v9 )
        {
          v10 = v8[4];
          if ( v10 )
          {
            for ( k = 0; k != v10; ++k )
            {
              v12 = (_QWORD *)(v9 + 48 * k);
              if ( v12[3] )
              {
                v12[4] = 0;
                qfree();
              }
              if ( *v12 )
              {
                v12[1] = 0;
                qfree();
              }
              v9 = v8[3];
            }
          }
          v8[4] = 0;
          qfree();
        }
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        v6 = a1[12];
      }
    }
    a1[13] = 0;
    qfree();
  }
  v13 = a1[9];
  if ( v13 )
  {
    v14 = a1[10];
    if ( v14 )
    {
      v15 = 0;
      for ( m = 0; m != v14; ++m )
      {
        v17 = (_QWORD *)(v13 + v15);
        if ( *(_QWORD *)(v13 + v15 + 24) )
        {
          v17[4] = 0;
          qfree();
        }
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
        }
        v13 = a1[9];
        v15 += 56;
      }
    }
    a1[10] = 0;
    qfree();
  }
  v18 = a1[6];
  if ( v18 )
  {
    v19 = a1[7];
    if ( v19 )
    {
      for ( n = 0; n != v19; ++n )
      {
        v21 = (_QWORD *)(v18 + 80 * n);
        v22 = v21[7];
        if ( v22 )
        {
          v23 = v21[8];
          if ( v23 )
          {
            for ( ii = 0; ii != v23; ++ii )
            {
              v25 = (_QWORD *)(v22 + 32 * ii);
              if ( *v25 )
              {
                v25[1] = 0;
                qfree();
                v22 = v21[7];
              }
            }
          }
          v21[8] = 0;
          qfree();
        }
        if ( v21[4] )
        {
          v21[5] = 0;
          qfree();
        }
        if ( *v21 )
        {
          v21[1] = 0;
          qfree();
        }
        v18 = a1[6];
      }
    }
    a1[7] = 0;
    qfree();
  }
  v26 = a1[3];
  if ( v26 )
  {
    v27 = a1[4];
    if ( v27 )
    {
      v28 = 0;
      for ( jj = 0; jj != v27; ++jj )
      {
        v30 = (_QWORD *)(v26 + v28);
        if ( *(_QWORD *)(v26 + v28 + 112) )
        {
          v30[15] = 0;
          qfree();
        }
        if ( v30[11] )
        {
          v30[12] = 0;
          qfree();
        }
        if ( v30[8] )
        {
          v30[9] = 0;
          qfree();
        }
        if ( v30[5] )
        {
          v30[6] = 0;
          qfree();
        }
        if ( *v30 )
        {
          v30[1] = 0;
          qfree();
        }
        v26 = a1[3];
        v28 += 136;
      }
    }
    a1[4] = 0;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
}

