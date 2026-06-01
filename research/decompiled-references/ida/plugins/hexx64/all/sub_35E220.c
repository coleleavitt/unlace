__int64 __fastcall sub_35E220(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 *v10; // rdx
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 j; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 k; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 m; // rbp
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 n; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  *a1 = off_4EC330;
  v3 = a1[25];
  if ( v3 )
  {
    a1[26] = 0;
    qfree(v3);
  }
  v4 = a1[22];
  if ( v4 )
  {
    v5 = a1[23];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = v4 + v6;
        v9 = *(_QWORD *)(v4 + v6 + 8);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 16) = 0;
          qfree(v9);
        }
        v10 = *(__int64 **)v8;
        if ( *(_QWORD *)v8 )
        {
          if ( (*((_DWORD *)v10 + 26))-- == 1 )
          {
            v12 = *(__int64 **)v8;
            if ( *(_QWORD *)v8 )
            {
              sub_258970(*(__int64 **)v8);
              v13 = v12[23];
              if ( v13 )
              {
                v14 = v12[24];
                if ( v14 )
                {
                  for ( j = 0; j != v14; ++j )
                  {
                    v16 = (__int64 *)(v13 + 24 * j);
                    v17 = *v16;
                    if ( *v16 )
                    {
                      v16[1] = 0;
                      v39 = v14;
                      qfree(v17);
                      v13 = v12[23];
                      v14 = v39;
                    }
                  }
                }
                v12[24] = 0;
                qfree(v13);
              }
              v18 = v12[20];
              if ( v18 )
              {
                v12[21] = 0;
                qfree(v18);
              }
              v19 = v12[16];
              if ( v19 )
              {
                v20 = v12[17];
                if ( v20 )
                {
                  for ( k = 0; k != v20; ++k )
                  {
                    v22 = (__int64 *)(v19 + 32 * k);
                    v23 = *v22;
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      v40 = v20;
                      qfree(v23);
                      v19 = v12[16];
                      v20 = v40;
                    }
                  }
                }
                v12[17] = 0;
                qfree(v19);
              }
              sub_255050((__int64)(v12 + 2), a2);
              j__qfree((__int64)v12);
            }
          }
        }
        v4 = a1[22];
        v6 += 120;
      }
    }
    a1[23] = 0;
    qfree(v4);
  }
  v24 = a1[19];
  *a1 = off_4EBC98;
  if ( v24 )
  {
    a1[20] = 0;
    qfree(v24);
  }
  v25 = a1[15];
  if ( v25 )
  {
    a1[16] = 0;
    qfree(v25);
  }
  v26 = a1[12];
  if ( v26 )
  {
    a1[13] = 0;
    qfree(v26);
  }
  v27 = a1[9];
  if ( v27 )
  {
    v28 = a1[10];
    if ( v28 )
    {
      for ( m = 0; m != v28; ++m )
      {
        v30 = (__int64 *)(v27 + 24 * m);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31);
          v27 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v27);
  }
  v32 = a1[6];
  if ( v32 )
  {
    v33 = a1[7];
    if ( v33 )
    {
      for ( n = 0; n != v33; ++n )
      {
        v35 = (__int64 *)(v32 + 24 * n);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v32);
  }
  v37 = a1[1];
  *a1 = &unk_4EC808;
  if ( v37 )
  {
    a1[2] = 0;
    qfree(v37);
  }
  return j__qfree((__int64)a1);
}

