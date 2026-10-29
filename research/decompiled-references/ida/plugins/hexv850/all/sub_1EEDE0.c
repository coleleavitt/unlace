__int64 __fastcall sub_1EEDE0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 j; // rbx
  __int64 v8; // r15
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
        v4 = (_QWORD *)(v2 + 96 * i);
        v5 = v4[5];
        if ( v5 )
        {
          v6 = v4[6];
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = v5 + 40 * j;
              if ( *(_QWORD *)(v8 + 16) )
              {
                *(_QWORD *)(v8 + 24) = 0;
                qfree();
              }
              qfree();
              v5 = v4[5];
            }
          }
          v4[6] = 0;
          qfree();
        }
        if ( v4[2] )
        {
          v4[3] = 0;
          qfree();
        }
        qfree();
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

