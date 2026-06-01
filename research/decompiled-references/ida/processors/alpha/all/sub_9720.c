__int64 __fastcall sub_9720(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 j; // r15
  _QWORD *v10; // r14
  __int64 result; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]

  v3 = a1[19];
  if ( v3 )
  {
    v13 = a1[20];
    if ( v13 )
    {
      v4 = 0;
      for ( i = 0; i != v13; ++i )
      {
        v6 = (_QWORD *)(v3 + v4);
        v7 = *(_QWORD *)(v3 + v4 + 56);
        if ( v7 )
        {
          v8 = v6[8];
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = (_QWORD *)(v7 + 48 * j);
              if ( v10[3] )
              {
                v10[4] = 0;
                qfree();
              }
              if ( *v10 )
              {
                v10[1] = 0;
                qfree();
              }
              v7 = v6[7];
            }
          }
          v6[8] = 0;
          qfree();
        }
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        v4 += 88;
        v3 = a1[19];
      }
    }
    a1[20] = 0;
    qfree();
    a1[19] = 0;
    a1[21] = 0;
  }
  result = read_ioports();
  if ( !a1[20] )
    return sub_5AB0((__int64)"No palcode definitions for architecture '%s' are found", a2);
  return result;
}

