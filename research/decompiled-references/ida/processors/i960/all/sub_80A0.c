__int64 __fastcall sub_80A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 i; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 j; // r15
  _QWORD *v9; // r12
  __int64 v12; // [rsp+10h] [rbp-48h]

  v2 = a1[20];
  if ( v2 )
  {
    v12 = a1[21];
    if ( v12 )
    {
      v3 = 0;
      for ( i = 0; i != v12; ++i )
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
              v9 = (_QWORD *)(v6 + 48 * j);
              if ( v9[3] )
              {
                v9[4] = 0;
                qfree();
              }
              if ( *v9 )
              {
                v9[1] = 0;
                qfree();
              }
              v6 = v5[7];
            }
          }
          v5[8] = 0;
          qfree();
        }
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v3 += 88;
        v2 = a1[20];
      }
    }
    a1[21] = 0;
    qfree();
    a1[20] = 0;
    a1[22] = 0;
  }
  return read_ioports();
}

