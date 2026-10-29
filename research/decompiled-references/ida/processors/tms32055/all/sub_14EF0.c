__int64 __fastcall sub_14EF0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 i; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 j; // r15
  _QWORD *v8; // r14
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  *a1 = &off_384A0;
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  v1 = a1[4];
  if ( v1 )
  {
    v11 = a1[5];
    if ( v11 )
    {
      v2 = 0;
      for ( i = 0; i != v11; ++i )
      {
        v4 = (_QWORD *)(v1 + v2);
        v5 = *(_QWORD *)(v1 + v2 + 56);
        if ( v5 )
        {
          v6 = v4[8];
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
              v5 = v4[7];
            }
          }
          v4[8] = 0;
          qfree();
        }
        if ( v4[4] )
        {
          v4[5] = 0;
          qfree();
        }
        if ( v4[1] )
        {
          v4[2] = 0;
          qfree();
        }
        v2 += 88;
        v1 = a1[4];
      }
    }
    a1[5] = 0;
    qfree();
  }
  result = (__int64)a1;
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

