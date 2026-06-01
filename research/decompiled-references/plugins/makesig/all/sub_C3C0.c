void __fastcall sub_C3C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 j; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 k; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 m; // r12
  __int64 *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 n; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi

  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  v3 = a1[16];
  if ( v3 )
  {
    v4 = a1[17];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + (i << 6));
        v7 = v6[4];
        if ( v7 )
        {
          v8 = v6[5];
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = (__int64 *)(v7 + 32 * j);
              v11 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v11);
                v7 = v6[4];
              }
            }
          }
          v6[5] = 0;
          qfree(v7);
        }
        v12 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v12);
        }
        v3 = a1[16];
      }
    }
    a1[17] = 0;
    qfree(v3);
  }
  v13 = a1[13];
  if ( v13 )
  {
    a1[14] = 0;
    qfree(v13);
  }
  v14 = a1[8];
  if ( v14 )
  {
    v15 = a1[9];
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = (__int64 *)(v14 + 32 * k);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18);
          v14 = a1[8];
        }
      }
    }
    a1[9] = 0;
    qfree(v14);
  }
  v19 = a1[4];
  if ( v19 )
  {
    a1[5] = 0;
    qfree(v19);
  }
  v20 = a1[1];
  if ( v20 )
  {
    v21 = a1[2];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = (__int64 *)(v20 + (m << 6));
        v24 = v23[4];
        if ( v24 )
        {
          v25 = v23[5];
          if ( v25 )
          {
            for ( n = 0; n != v25; ++n )
            {
              v27 = (__int64 *)(v24 + 32 * n);
              v28 = *v27;
              if ( *v27 )
              {
                v27[1] = 0;
                qfree(v28);
                v24 = v23[4];
              }
            }
          }
          v23[5] = 0;
          qfree(v24);
        }
        v29 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v29);
        }
        v20 = a1[1];
      }
    }
    a1[2] = 0;
    qfree(v20);
  }
}
