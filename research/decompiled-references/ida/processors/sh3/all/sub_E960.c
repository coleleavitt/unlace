__int64 __fastcall sub_E960(_QWORD *a1, __int64 a2, double a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 i; // r15
  __int64 *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = a1 + 28;
  *(v4 - 28) = off_143D8;
  *v4 = &off_14D30;
  remove_event_listener(v4);
  v6 = a1[22];
  a1[15] = &off_142E0;
  if ( v6 )
  {
    a1[23] = 0;
    qfree(v6, a2, v5, a3);
  }
  v7 = a1[19];
  if ( v7 )
  {
    v22 = a1[20];
    if ( v22 )
    {
      v21 = 0;
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
            for ( i = 0; i != v11; ++i )
            {
              v13 = (__int64 *)(v10 + 48 * i);
              v14 = v13[3];
              if ( v14 )
              {
                v13[4] = 0;
                qfree(v14, a2, v5, a3);
              }
              v15 = *v13;
              if ( *v13 )
              {
                v13[1] = 0;
                qfree(v15, a2, v5, a3);
              }
              v10 = v9[7];
            }
          }
          v9[8] = 0;
          qfree(v10, a2, v5, a3);
        }
        v16 = v9[4];
        if ( v16 )
        {
          v9[5] = 0;
          qfree(v16, a2, v5, a3);
        }
        v17 = v9[1];
        if ( v17 )
        {
          v9[2] = 0;
          qfree(v17, a2, v5, a3);
        }
        ++v21;
        v7 = a1[19];
        v8 += 88;
      }
      while ( v22 != v21 );
    }
    a1[20] = 0;
    qfree(v7, a2, v5, a3);
  }
  v18 = a1[16];
  if ( v18 )
  {
    a1[17] = 0;
    qfree(v18, a2, v5, a3);
  }
  *a1 = &off_14D30;
  remove_event_listener(a1);
  return qfree(a1, a2, v19, a3);
}

