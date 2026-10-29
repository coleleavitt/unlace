__int64 __fastcall sub_7FC0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 i; // r15
  _QWORD *v11; // r13
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  *a1 = &off_10CB8;
  v2 = (void *)a1[31];
  if ( v2 )
    operator delete(v2, 0x30u);
  v3 = (void *)a1[32];
  a1[31] = 0;
  if ( v3 )
    operator delete(v3, 0x30u);
  a1[32] = 0;
  a1[28] = &off_11D20;
  remove_event_listener();
  v4 = a1[23];
  a1[16] = &off_10BE8;
  if ( v4 )
  {
    a1[24] = 0;
    qfree();
  }
  v5 = a1[20];
  if ( v5 )
  {
    v14 = a1[21];
    if ( v14 )
    {
      v13 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v5 + v6);
        v8 = *(_QWORD *)(v5 + v6 + 56);
        if ( v8 )
        {
          v9 = v7[8];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (_QWORD *)(v8 + 48 * i);
              if ( v11[3] )
              {
                v11[4] = 0;
                qfree();
              }
              if ( *v11 )
              {
                v11[1] = 0;
                qfree();
              }
              v8 = v7[7];
            }
          }
          v7[8] = 0;
          qfree();
        }
        if ( v7[4] )
        {
          v7[5] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        ++v13;
        v5 = a1[20];
        v6 += 88;
      }
      while ( v14 != v13 );
    }
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  *a1 = &off_11D20;
  return remove_event_listener();
}

