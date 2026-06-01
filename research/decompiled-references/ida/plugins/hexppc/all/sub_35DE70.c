void __fastcall sub_35DE70(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rdx
  __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 j; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 k; // rbx
  _QWORD *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]
  __int64 v19; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
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
              sub_254CF0(*(__int64 **)v6);
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
                      v18 = v11;
                      qfree();
                      v10 = v9[23];
                      v11 = v18;
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
                      v19 = v15;
                      qfree();
                      v14 = v9[16];
                      v15 = v19;
                    }
                  }
                }
                v9[17] = 0;
                qfree();
              }
              sub_2513D0((__int64)(v9 + 2));
              j__qfree();
            }
          }
        }
        v2 = *a1;
        v4 += 120;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

