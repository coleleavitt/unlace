void __fastcall sub_3A90A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rcx
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 j; // r13
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 k; // r13
  _QWORD *v16; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 **)(v2 + 48 * i);
        v6 = *v5;
        if ( *v5 )
        {
          if ( (*((_DWORD *)v6 + 26))-- == 1 )
          {
            v8 = *v5;
            if ( *v5 )
            {
              sub_253D70(*v5);
              v9 = v8[23];
              if ( v9 )
              {
                v10 = v8[24];
                if ( v10 )
                {
                  for ( j = 0; j != v10; ++j )
                  {
                    v12 = (_QWORD *)(v9 + 24 * j);
                    if ( *v12 )
                    {
                      v12[1] = 0;
                      qfree();
                      v9 = v8[23];
                    }
                  }
                }
                v8[24] = 0;
                qfree();
              }
              if ( v8[20] )
              {
                v8[21] = 0;
                qfree();
              }
              v13 = v8[16];
              if ( v13 )
              {
                v14 = v8[17];
                if ( v14 )
                {
                  for ( k = 0; k != v14; ++k )
                  {
                    v16 = (_QWORD *)(v13 + 32 * k);
                    if ( *v16 )
                    {
                      v16[1] = 0;
                      qfree();
                      v13 = v8[16];
                    }
                  }
                }
                v8[17] = 0;
                qfree();
              }
              sub_250450((__int64)(v8 + 2));
              j__qfree();
            }
          }
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

