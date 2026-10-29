void __fastcall sub_361FF0(__int64 *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 j; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 k; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = v3 + v5;
        v8 = *(_QWORD *)(v3 + v5 + 8);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree(v8);
        }
        v9 = *(__int64 **)v7;
        if ( *(_QWORD *)v7 )
        {
          if ( (*((_DWORD *)v9 + 26))-- == 1 )
          {
            v11 = *(__int64 **)v7;
            if ( *(_QWORD *)v7 )
            {
              sub_258970(*(__int64 **)v7);
              v12 = v11[23];
              if ( v12 )
              {
                v13 = v11[24];
                if ( v13 )
                {
                  for ( j = 0; j != v13; ++j )
                  {
                    v15 = (__int64 *)(v12 + 24 * j);
                    v16 = *v15;
                    if ( *v15 )
                    {
                      v15[1] = 0;
                      v23 = v13;
                      qfree(v16);
                      v12 = v11[23];
                      v13 = v23;
                    }
                  }
                }
                v11[24] = 0;
                qfree(v12);
              }
              v17 = v11[20];
              if ( v17 )
              {
                v11[21] = 0;
                qfree(v17);
              }
              v18 = v11[16];
              if ( v18 )
              {
                v19 = v11[17];
                if ( v19 )
                {
                  for ( k = 0; k != v19; ++k )
                  {
                    v21 = (__int64 *)(v18 + 32 * k);
                    v22 = *v21;
                    if ( *v21 )
                    {
                      v21[1] = 0;
                      v24 = v19;
                      qfree(v22);
                      v18 = v11[16];
                      v19 = v24;
                    }
                  }
                }
                v11[17] = 0;
                qfree(v18);
              }
              sub_255050((__int64)(v11 + 2), a2);
              j__qfree((__int64)v11);
            }
          }
        }
        v3 = *a1;
        v5 += 120;
      }
    }
    a1[1] = 0;
    qfree(v3);
  }
}

