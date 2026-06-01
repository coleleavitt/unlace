__int64 __fastcall sub_3A740(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 i; // r15
  __int64 *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  *a1 = &off_73328;
  v2 = a1[40];
  if ( v2 )
  {
    a1[41] = 0;
    qfree(v2);
  }
  v3 = a1[36];
  if ( v3 )
  {
    a1[37] = 0;
    qfree(v3);
  }
  v4 = a1[33];
  if ( v4 )
  {
    a1[34] = 0;
    qfree(v4);
  }
  v5 = a1[20];
  if ( v5 )
  {
    v18 = a1[21];
    if ( v18 )
    {
      v17 = 0;
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
              v11 = (__int64 *)(v8 + 48 * i);
              v12 = v11[3];
              if ( v12 )
              {
                v11[4] = 0;
                qfree(v12);
              }
              v13 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v13);
              }
              v8 = v7[7];
            }
          }
          v7[8] = 0;
          qfree(v8);
        }
        v14 = v7[4];
        if ( v14 )
        {
          v7[5] = 0;
          qfree(v14);
        }
        v15 = v7[1];
        if ( v15 )
        {
          v7[2] = 0;
          qfree(v15);
        }
        ++v17;
        v5 = a1[20];
        v6 += 88;
      }
      while ( v18 != v17 );
    }
    a1[21] = 0;
    qfree(v5);
  }
  a1[16] = &off_74D20;
  remove_event_listener(a1 + 16);
  *a1 = &off_74D20;
  return remove_event_listener(a1);
}

