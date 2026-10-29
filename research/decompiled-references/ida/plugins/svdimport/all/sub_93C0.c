__int64 __fastcall sub_93C0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 j; // r15
  _QWORD *v10; // r13
  __int64 v11; // [rsp+0h] [rbp-68h]
  __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 i; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+28h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v16 = *(_QWORD *)(result + 8);
    if ( v16 )
    {
      v14 = 0;
      for ( i = 0; i != v16; ++i )
      {
        v3 = (_QWORD *)(v2 + v14);
        v4 = *(_QWORD *)(v2 + v14 + 200);
        if ( v4 )
        {
          v12 = v3[26];
          if ( v12 )
          {
            v11 = 0;
            v5 = 0;
            do
            {
              v6 = (_QWORD *)(v4 + v5);
              v7 = *(_QWORD *)(v4 + v5 + 88);
              if ( v7 )
              {
                v8 = v6[12];
                if ( v8 )
                {
                  for ( j = 0; j != v8; ++j )
                  {
                    v10 = (_QWORD *)(v7 + 72 * j);
                    if ( v10[6] )
                    {
                      v10[7] = 0;
                      qfree();
                    }
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
                    v7 = v6[11];
                  }
                }
                v6[12] = 0;
                qfree();
              }
              if ( v6[8] )
              {
                v6[9] = 0;
                qfree();
              }
              if ( v6[3] )
              {
                v6[4] = 0;
                qfree();
              }
              if ( *v6 )
              {
                v6[1] = 0;
                qfree();
              }
              ++v11;
              v4 = v3[25];
              v5 += 112;
            }
            while ( v12 != v11 );
          }
          v3[26] = 0;
          qfree();
        }
        sub_93C0(v3 + 19);
        if ( v3[16] )
        {
          v3[17] = 0;
          qfree();
        }
        if ( v3[13] )
        {
          v3[14] = 0;
          qfree();
        }
        if ( v3[7] )
        {
          v3[8] = 0;
          qfree();
        }
        if ( v3[4] )
        {
          v3[5] = 0;
          qfree();
        }
        if ( v3[1] )
        {
          v3[2] = 0;
          qfree();
        }
        v14 += 224;
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

