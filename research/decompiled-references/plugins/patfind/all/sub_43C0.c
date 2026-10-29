__int64 __fastcall sub_43C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 k; // r12
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 m; // r12
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 n; // r14
  __int64 *v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 ii; // r14
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 result; // rax
  __int64 v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-58h]
  __int64 j; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 48 * i);
        v6 = v5[3];
        if ( v6 )
        {
          v5[4] = 0;
          qfree(v6);
        }
        v7 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v7);
        }
        v2 = a1[9];
      }
    }
    a1[10] = 0;
    qfree(v2);
  }
  v8 = a1[6];
  if ( v8 )
  {
    v39 = a1[7];
    if ( v39 )
    {
      for ( j = 0; j != v39; ++j )
      {
        v9 = (__int64 *)(v8 + 96 * j);
        v10 = v9[9];
        if ( v10 )
        {
          v11 = v9[10];
          if ( v11 )
          {
            for ( k = 0; k != v11; ++k )
            {
              v13 = (__int64 *)(v10 + 48 * k);
              v14 = v13[3];
              if ( v14 )
              {
                v13[4] = 0;
                qfree(v14);
              }
              v15 = *v13;
              if ( *v13 )
              {
                v13[1] = 0;
                qfree(v15);
              }
              v10 = v9[9];
            }
          }
          v9[10] = 0;
          qfree(v10);
        }
        v16 = v9[6];
        if ( v16 )
        {
          v36 = v9[7];
          if ( v36 )
          {
            for ( m = 0; m != v36; ++m )
            {
              v18 = (__int64 *)(v16 + 96 * m);
              v19 = v18[9];
              if ( v19 )
              {
                v20 = v18[10];
                if ( v20 )
                {
                  for ( n = 0; n != v20; ++n )
                  {
                    v22 = (__int64 *)(v19 + 48 * n);
                    v23 = v22[3];
                    if ( v23 )
                    {
                      v22[4] = 0;
                      qfree(v23);
                    }
                    v24 = *v22;
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      qfree(v24);
                    }
                    v19 = v18[9];
                  }
                }
                v18[10] = 0;
                qfree(v19);
              }
              v25 = v18[6];
              if ( v25 )
              {
                v26 = v18[7];
                if ( v26 )
                {
                  for ( ii = 0; ii != v26; ++ii )
                  {
                    v28 = 3 * ii;
                    sub_43C0(32 * v28 + v25);
                    v25 = v18[6];
                  }
                }
                v18[7] = 0;
                qfree(v25);
              }
              v29 = v18[3];
              if ( v29 )
              {
                v18[4] = 0;
                qfree(v29);
              }
              v30 = *v18;
              if ( *v18 )
              {
                v18[1] = 0;
                qfree(v30);
              }
              v16 = v9[6];
            }
          }
          v9[7] = 0;
          qfree(v16);
        }
        v31 = v9[3];
        if ( v31 )
        {
          v9[4] = 0;
          qfree(v31);
        }
        v32 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v32);
        }
        v8 = a1[6];
      }
    }
    a1[7] = 0;
    qfree(v8);
  }
  v33 = a1[3];
  if ( v33 )
  {
    a1[4] = 0;
    qfree(v33);
  }
  result = (__int64)a1;
  v35 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v35);
  }
  return result;
}
