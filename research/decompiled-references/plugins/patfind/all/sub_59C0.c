__int64 __fastcall sub_59C0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // r15
  __int64 *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 k; // r15
  __int64 *v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 m; // r13
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 n; // r13
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 ii; // r13
  __int64 *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  __int64 i; // [rsp+18h] [rbp-50h]
  __int64 v47; // [rsp+28h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v47 = *(_QWORD *)(result + 8);
    if ( v47 )
    {
      for ( i = 0; i != v47; ++i )
      {
        v3 = (__int64 *)(v2 + 96 * i);
        v4 = v3[9];
        if ( v4 )
        {
          v44 = v3[10];
          if ( v44 )
          {
            v43 = 0;
            v5 = 0;
            do
            {
              v6 = (__int64 *)(v4 + v5);
              v7 = *(_QWORD *)(v4 + v5 + 48);
              if ( v7 )
              {
                v8 = v6[7];
                if ( v8 )
                {
                  for ( j = 0; j != v8; ++j )
                  {
                    v10 = (__int64 *)(v7 + 80 * j);
                    v11 = v10[6];
                    if ( v11 )
                    {
                      v10[7] = 0;
                      qfree(v11);
                    }
                    v12 = v10[3];
                    if ( v12 )
                    {
                      v10[4] = 0;
                      qfree(v12);
                    }
                    v13 = *v10;
                    if ( *v10 )
                    {
                      v10[1] = 0;
                      qfree(v13);
                    }
                    v7 = v6[6];
                  }
                }
                v6[7] = 0;
                qfree(v7);
              }
              v14 = v6[3];
              if ( v14 )
              {
                v15 = v6[4];
                if ( v15 )
                {
                  for ( k = 0; k != v15; ++k )
                  {
                    v17 = (__int64 *)(v14 + 80 * k);
                    v18 = v17[6];
                    if ( v18 )
                    {
                      v17[7] = 0;
                      qfree(v18);
                    }
                    v19 = v17[3];
                    if ( v19 )
                    {
                      v17[4] = 0;
                      qfree(v19);
                    }
                    v20 = *v17;
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      qfree(v20);
                    }
                    v14 = v6[3];
                  }
                }
                v6[4] = 0;
                qfree(v14);
              }
              v21 = *v6;
              if ( *v6 )
              {
                v6[1] = 0;
                qfree(v21);
              }
              ++v43;
              v4 = v3[9];
              v5 += 88;
            }
            while ( v44 != v43 );
          }
          v3[10] = 0;
          qfree(v4);
        }
        v22 = v3[6];
        if ( v22 )
        {
          v23 = v3[7];
          if ( v23 )
          {
            for ( m = 0; m != v23; ++m )
            {
              v25 = (__int64 *)(v22 + 80 * m);
              v26 = v25[6];
              if ( v26 )
              {
                v25[7] = 0;
                qfree(v26);
              }
              v27 = v25[3];
              if ( v27 )
              {
                v25[4] = 0;
                qfree(v27);
              }
              v28 = *v25;
              if ( *v25 )
              {
                v25[1] = 0;
                qfree(v28);
              }
              v22 = v3[6];
            }
          }
          v3[7] = 0;
          qfree(v22);
        }
        v29 = v3[3];
        if ( v29 )
        {
          v30 = v3[4];
          if ( v30 )
          {
            for ( n = 0; n != v30; ++n )
            {
              v32 = (__int64 *)(v29 + 80 * n);
              v33 = v32[6];
              if ( v33 )
              {
                v32[7] = 0;
                qfree(v33);
              }
              v34 = v32[3];
              if ( v34 )
              {
                v32[4] = 0;
                qfree(v34);
              }
              v35 = *v32;
              if ( *v32 )
              {
                v32[1] = 0;
                qfree(v35);
              }
              v29 = v3[3];
            }
          }
          v3[4] = 0;
          qfree(v29);
        }
        v36 = *v3;
        if ( *v3 )
        {
          v37 = v3[1];
          if ( v37 )
          {
            for ( ii = 0; ii != v37; ++ii )
            {
              v39 = (__int64 *)(v36 + 80 * ii);
              v40 = v39[6];
              if ( v40 )
              {
                v39[7] = 0;
                qfree(v40);
              }
              v41 = v39[3];
              if ( v41 )
              {
                v39[4] = 0;
                qfree(v41);
              }
              v42 = *v39;
              if ( *v39 )
              {
                v39[1] = 0;
                qfree(v42);
              }
              v36 = *v3;
            }
          }
          v3[1] = 0;
          qfree(v36);
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
