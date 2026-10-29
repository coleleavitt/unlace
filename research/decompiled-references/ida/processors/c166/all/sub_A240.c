__int64 __fastcall sub_A240(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 j; // r15
  _QWORD *v14; // r13
  __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  *a1 = &off_13608;
  v2 = a1[30];
  if ( v2 )
  {
    v3 = a1[31];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 24) )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = a1[30];
        v4 += 56;
      }
    }
    a1[31] = 0;
    qfree();
  }
  v7 = a1[23];
  a1[16] = &off_13538;
  if ( v7 )
  {
    a1[24] = 0;
    qfree();
  }
  v8 = a1[20];
  if ( v8 )
  {
    v17 = a1[21];
    if ( v17 )
    {
      v16 = 0;
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v8 + v9);
        v11 = *(_QWORD *)(v8 + v9 + 56);
        if ( v11 )
        {
          v12 = v10[8];
          if ( v12 )
          {
            for ( j = 0; j != v12; ++j )
            {
              v14 = (_QWORD *)(v11 + 48 * j);
              if ( v14[3] )
              {
                v14[4] = 0;
                qfree();
              }
              if ( *v14 )
              {
                v14[1] = 0;
                qfree();
              }
              v11 = v10[7];
            }
          }
          v10[8] = 0;
          qfree();
        }
        if ( v10[4] )
        {
          v10[5] = 0;
          qfree();
        }
        if ( v10[1] )
        {
          v10[2] = 0;
          qfree();
        }
        ++v16;
        v8 = a1[20];
        v9 += 88;
      }
      while ( v17 != v16 );
    }
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  *a1 = &off_13D20;
  return remove_event_listener();
}

