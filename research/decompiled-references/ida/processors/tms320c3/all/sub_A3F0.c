__int64 __fastcall sub_A3F0(_QWORD *a1)
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

  *a1 = &off_1E7B8;
  sub_7A50();
  v2 = a1[23];
  a1[16] = &off_1E6E8;
  if ( v2 )
  {
    a1[24] = 0;
    qfree();
  }
  v3 = a1[20];
  if ( v3 )
  {
    v12 = a1[21];
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
        v3 = a1[20];
        v4 += 88;
      }
      while ( v12 != v11 );
    }
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  *a1 = &off_1ED40;
  remove_event_listener();
  return qfree();
}

