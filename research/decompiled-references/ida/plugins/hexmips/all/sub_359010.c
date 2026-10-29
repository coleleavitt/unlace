void *__fastcall sub_359010(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  __int64 v6; // rbp
  __int64 *v7; // rdx
  __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 j; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 k; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 m; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 n; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rdi
  void *result; // rax
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  *a1 = off_4CC208;
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  v2 = a1[22];
  if ( v2 )
  {
    v3 = a1[23];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = v2 + v4;
        if ( *(_QWORD *)(v2 + v4 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
        }
        v7 = *(__int64 **)v6;
        if ( *(_QWORD *)v6 )
        {
          if ( (*((_DWORD *)v7 + 26))-- == 1 )
          {
            v9 = *(__int64 **)v6;
            if ( *(_QWORD *)v6 )
            {
              sub_2540F0(*(__int64 **)v6);
              v10 = v9[23];
              if ( v10 )
              {
                v11 = v9[24];
                if ( v11 )
                {
                  for ( j = 0; j != v11; ++j )
                  {
                    v13 = (_QWORD *)(v10 + 24 * j);
                    if ( *v13 )
                    {
                      v13[1] = 0;
                      v29 = v11;
                      qfree();
                      v10 = v9[23];
                      v11 = v29;
                    }
                  }
                }
                v9[24] = 0;
                qfree();
              }
              if ( v9[20] )
              {
                v9[21] = 0;
                qfree();
              }
              v14 = v9[16];
              if ( v14 )
              {
                v15 = v9[17];
                if ( v15 )
                {
                  for ( k = 0; k != v15; ++k )
                  {
                    v17 = (_QWORD *)(v14 + 32 * k);
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      v30 = v15;
                      qfree();
                      v14 = v9[16];
                      v15 = v30;
                    }
                  }
                }
                v9[17] = 0;
                qfree();
              }
              sub_2507D0((__int64)(v9 + 2));
              j__qfree();
            }
          }
        }
        v2 = a1[22];
        v4 += 120;
      }
    }
    a1[23] = 0;
    qfree();
  }
  v18 = a1[19];
  *a1 = off_4CBB18;
  if ( v18 )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v19 = a1[9];
  if ( v19 )
  {
    v20 = a1[10];
    if ( v20 )
    {
      for ( m = 0; m != v20; ++m )
      {
        v22 = (_QWORD *)(v19 + 24 * m);
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
          v19 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  v23 = a1[6];
  if ( v23 )
  {
    v24 = a1[7];
    if ( v24 )
    {
      for ( n = 0; n != v24; ++n )
      {
        v26 = (_QWORD *)(v23 + 24 * n);
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
          v23 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree();
  }
  v27 = a1[1];
  result = &unk_4CC6E0;
  *a1 = &unk_4CC6E0;
  if ( v27 )
  {
    a1[2] = 0;
    return (void *)qfree();
  }
  return result;
}

