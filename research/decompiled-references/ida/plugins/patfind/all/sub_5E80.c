__int64 __fastcall sub_5E80(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 j; // r15
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 k; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v18 = a1[1];
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v4 = (__int64 *)(v2 + 96 * i);
        v5 = v4[9];
        if ( v5 )
        {
          v6 = v4[10];
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = (__int64 *)(v5 + 48 * j);
              v9 = v8[3];
              if ( v9 )
              {
                v8[4] = 0;
                qfree(v9);
              }
              v10 = *v8;
              if ( *v8 )
              {
                v8[1] = 0;
                qfree(v10);
              }
              v5 = v4[9];
            }
          }
          v4[10] = 0;
          qfree(v5);
        }
        v11 = v4[6];
        if ( v11 )
        {
          v12 = v4[7];
          if ( v12 )
          {
            for ( k = 0; k != v12; ++k )
            {
              v14 = 3 * k;
              sub_43C0((__int64 *)(32 * v14 + v11));
              v11 = v4[6];
            }
          }
          v4[7] = 0;
          qfree(v11);
        }
        v15 = v4[3];
        if ( v15 )
        {
          v4[4] = 0;
          qfree(v15);
        }
        v16 = *v4;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree(v16);
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}

