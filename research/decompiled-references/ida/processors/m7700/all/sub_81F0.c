__int64 __fastcall sub_81F0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 i; // r15
  _QWORD *v10; // r13
  __int64 v12; // [rsp+0h] [rbp-48h]
  __int64 v13; // [rsp+8h] [rbp-40h]

  v2 = a1 + 29;
  *(v2 - 29) = &off_F7F0;
  *v2 = &off_FD20;
  remove_event_listener();
  v3 = a1[23];
  a1[16] = &off_F6F8;
  if ( v3 )
  {
    a1[24] = 0;
    qfree();
  }
  v4 = a1[20];
  if ( v4 )
  {
    v13 = a1[21];
    if ( v13 )
    {
      v12 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v4 + v5);
        v7 = *(_QWORD *)(v4 + v5 + 56);
        if ( v7 )
        {
          v8 = v6[8];
          if ( v8 )
          {
            for ( i = 0; i != v8; ++i )
            {
              v10 = (_QWORD *)(v7 + 48 * i);
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
        ++v12;
        v4 = a1[20];
        v5 += 88;
      }
      while ( v13 != v12 );
    }
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  *a1 = &off_FD20;
  return remove_event_listener();
}

