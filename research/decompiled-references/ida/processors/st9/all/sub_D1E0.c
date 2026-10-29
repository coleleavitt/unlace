__int64 __fastcall sub_D1E0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 j; // r15
  _QWORD *v13; // r13
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]

  v2 = a1[580];
  *a1 = off_16598;
  if ( v2 )
  {
    v3 = a1[581];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[580];
        }
      }
    }
    a1[581] = 0;
    qfree();
  }
  v6 = a1[23];
  a1[16] = &off_164C8;
  if ( v6 )
  {
    a1[24] = 0;
    qfree();
  }
  v7 = a1[20];
  if ( v7 )
  {
    v16 = a1[21];
    if ( v16 )
    {
      v15 = 0;
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v7 + v8);
        v10 = *(_QWORD *)(v7 + v8 + 56);
        if ( v10 )
        {
          v11 = v9[8];
          if ( v11 )
          {
            for ( j = 0; j != v11; ++j )
            {
              v13 = (_QWORD *)(v10 + 48 * j);
              if ( v13[3] )
              {
                v13[4] = 0;
                qfree();
              }
              if ( *v13 )
              {
                v13[1] = 0;
                qfree();
              }
              v10 = v9[7];
            }
          }
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
        ++v15;
        v7 = a1[20];
        v8 += 88;
      }
      while ( v16 != v15 );
    }
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  *a1 = &off_17D40;
  remove_event_listener();
  return qfree();
}

