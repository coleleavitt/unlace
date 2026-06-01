__int64 __fastcall sub_93A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 i; // r15
  _QWORD *v9; // r13
  __int64 v11; // [rsp+0h] [rbp-48h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  *a1 = off_108B0;
  if ( a1[31] )
  {
    a1[32] = 0;
    qfree();
  }
  v2 = a1[22];
  a1[15] = &off_107E0;
  if ( v2 )
  {
    a1[23] = 0;
    qfree();
  }
  v3 = a1[19];
  if ( v3 )
  {
    v12 = a1[20];
    if ( v12 )
    {
      v11 = 0;
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v3 + v4);
        v6 = *(_QWORD *)(v3 + v4 + 56);
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = (_QWORD *)(v6 + 48 * i);
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
        ++v11;
        v3 = a1[19];
        v4 += 88;
      }
      while ( v12 != v11 );
    }
    a1[20] = 0;
    qfree();
  }
  if ( a1[16] )
  {
    a1[17] = 0;
    qfree();
  }
  *a1 = &off_10D20;
  return remove_event_listener();
}

