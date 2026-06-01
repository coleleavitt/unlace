__int64 __fastcall sub_3AAE60(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 **v7; // rax
  __int64 *v8; // rcx
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 j; // r13
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 k; // r13
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 m; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rdi

  *a1 = off_4E7350;
  v3 = a1[30];
  if ( v3 )
  {
    a1[31] = 0;
    qfree(v3);
  }
  v4 = a1[27];
  if ( v4 )
  {
    v5 = a1[28];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 **)(v4 + 48 * i);
        v8 = *v7;
        if ( *v7 )
        {
          if ( (*((_DWORD *)v8 + 26))-- == 1 )
          {
            v10 = *v7;
            if ( *v7 )
            {
              sub_258970(*v7);
              v11 = v10[23];
              if ( v11 )
              {
                v12 = v10[24];
                if ( v12 )
                {
                  for ( j = 0; j != v12; ++j )
                  {
                    v14 = (__int64 *)(v11 + 24 * j);
                    v15 = *v14;
                    if ( *v14 )
                    {
                      v14[1] = 0;
                      qfree(v15);
                      v11 = v10[23];
                    }
                  }
                }
                v10[24] = 0;
                qfree(v11);
              }
              v16 = v10[20];
              if ( v16 )
              {
                v10[21] = 0;
                qfree(v16);
              }
              v17 = v10[16];
              if ( v17 )
              {
                v18 = v10[17];
                if ( v18 )
                {
                  for ( k = 0; k != v18; ++k )
                  {
                    v20 = (__int64 *)(v17 + 32 * k);
                    v21 = *v20;
                    if ( *v20 )
                    {
                      v20[1] = 0;
                      qfree(v21);
                      v17 = v10[16];
                    }
                  }
                }
                v10[17] = 0;
                qfree(v17);
              }
              sub_255050((__int64)(v10 + 2), a2);
              j__qfree((__int64)v10);
            }
          }
          v4 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree(v4);
  }
  v22 = a1[24];
  if ( v22 )
  {
    v23 = a1[25];
    if ( v23 )
    {
      for ( m = 0; m != v23; ++m )
      {
        clear_tinfo_t();
        v22 = a1[24];
      }
    }
    a1[25] = 0;
    qfree(v22);
  }
  v25 = a1 + 19;
  *a1 = &unk_4EBE48;
  do
  {
    v26 = *v25;
    if ( *v25 )
    {
      v25[1] = 0;
      qfree(v26);
    }
    v25 -= 3;
  }
  while ( v25 != a1 + 7 );
  return qfree((__int64)a1);
}

