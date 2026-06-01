__int64 __fastcall sub_1E820(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // r15
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 i; // rbp
  _QWORD *v9; // r14
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v12 = *(_QWORD *)(result + 8);
    if ( v12 )
    {
      v10 = 0;
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v2 + v3);
        if ( *(_QWORD *)(v2 + v3 + 368) )
        {
          v4[47] = 0;
          qfree();
        }
        v5 = v4[18];
        if ( v5 )
        {
          v6 = v4[19];
          if ( v6 )
          {
            v7 = 0;
            for ( i = 0; i != v6; ++i )
            {
              v9 = (_QWORD *)(v5 + v7);
              if ( *(_QWORD *)(v5 + v7 + 56) )
              {
                v9[8] = 0;
                qfree();
              }
              if ( v9[4] )
              {
                v9[5] = 0;
                qfree();
              }
              if ( v9[1] )
              {
                v9[2] = 0;
                qfree();
              }
              v5 = v4[18];
              v7 += 120;
            }
          }
          v4[19] = 0;
          qfree();
        }
        if ( v4[14] )
        {
          v4[15] = 0;
          qfree();
        }
        if ( v4[8] )
        {
          v4[9] = 0;
          qfree();
        }
        if ( v4[5] )
        {
          v4[6] = 0;
          qfree();
        }
        if ( v4[2] )
        {
          v4[3] = 0;
          qfree();
        }
        ++v10;
        v3 += 392;
        v2 = *a1;
      }
      while ( v12 != v10 );
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

