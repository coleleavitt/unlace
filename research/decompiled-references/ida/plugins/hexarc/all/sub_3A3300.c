void *__fastcall sub_3A3300(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
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
  __int64 v17; // r12
  __int64 m; // rbp
  void *result; // rax
  _QWORD *v20; // rbp
  _QWORD *v21; // rbx

  *a1 = off_4B3B50;
  if ( a1[30] )
  {
    a1[31] = 0;
    qfree();
  }
  v2 = a1[27];
  if ( v2 )
  {
    v3 = a1[28];
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
              sub_2515F0(*v5);
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
              sub_24DCD0((__int64)(v8 + 2));
              j__qfree();
            }
          }
          v2 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree();
  }
  if ( a1[24] )
  {
    v17 = a1[25];
    if ( v17 )
    {
      for ( m = 0; m != v17; ++m )
        clear_tinfo_t();
    }
    a1[25] = 0;
    qfree();
  }
  result = &unk_4B7C88;
  v20 = a1 + 19;
  v21 = a1 + 7;
  *(v21 - 7) = &unk_4B7C88;
  do
  {
    if ( *v20 )
    {
      v20[1] = 0;
      result = (void *)qfree();
    }
    v20 -= 3;
  }
  while ( v20 != v21 );
  return result;
}

