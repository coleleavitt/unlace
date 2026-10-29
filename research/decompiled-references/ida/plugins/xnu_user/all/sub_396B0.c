__int64 __fastcall sub_396B0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 j; // r15
  _QWORD *v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v10 = a1[1];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v4 = (_QWORD *)(v2 + 48 * i);
        v5 = v4[3];
        if ( v5 )
        {
          v6 = v4[4];
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = (_QWORD *)(v5 + 48 * j);
              if ( v8[3] )
              {
                v8[4] = 0;
                qfree();
              }
              if ( *v8 )
              {
                v8[1] = 0;
                qfree();
              }
              v5 = v4[3];
            }
          }
          v4[4] = 0;
          qfree();
        }
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

