__int64 __fastcall sub_1ED040(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  _QWORD *v3; // r13
  __int64 v4; // rdi
  __int64 j; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 k; // r14
  __int64 v10; // r15
  __int64 v11; // [rsp+0h] [rbp-58h]
  __int64 i; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v14 = *(_QWORD *)(result + 8);
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v3 = (_QWORD *)(v2 + 80 * i);
        v4 = v3[7];
        if ( v4 )
        {
          v11 = v3[8];
          if ( v11 )
          {
            for ( j = 0; j != v11; ++j )
            {
              v6 = (_QWORD *)(v4 + 96 * j);
              v7 = v6[5];
              if ( v7 )
              {
                v8 = v6[6];
                if ( v8 )
                {
                  for ( k = 0; k != v8; ++k )
                  {
                    v10 = v7 + 40 * k;
                    if ( *(_QWORD *)(v10 + 16) )
                    {
                      *(_QWORD *)(v10 + 24) = 0;
                      qfree();
                    }
                    qfree();
                    v7 = v6[5];
                  }
                }
                v6[6] = 0;
                qfree();
              }
              if ( v6[2] )
              {
                v6[3] = 0;
                qfree();
              }
              qfree();
              v4 = v3[7];
            }
          }
          v3[8] = 0;
          qfree();
        }
        if ( v3[4] )
        {
          v3[5] = 0;
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

