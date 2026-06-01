__int64 __fastcall sub_13C90(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 j; // r15
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v15 = *(_QWORD *)(result + 8);
    if ( v15 )
    {
      v3 = 0;
      for ( i = 0; i != v15; ++i )
      {
        v5 = (_QWORD *)(v2 + v3);
        v6 = *(_QWORD *)(v2 + v3 + 56);
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (__int64 *)(v6 + 48 * j);
              v10 = v9[3];
              if ( v10 )
              {
                v9[4] = 0;
                qfree(v10);
              }
              v11 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v11);
              }
              v6 = v5[7];
            }
          }
          v5[8] = 0;
          qfree(v6);
        }
        v12 = v5[4];
        if ( v12 )
        {
          v5[5] = 0;
          qfree(v12);
        }
        v13 = v5[1];
        if ( v13 )
        {
          v5[2] = 0;
          qfree(v13);
        }
        v3 += 88;
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}

