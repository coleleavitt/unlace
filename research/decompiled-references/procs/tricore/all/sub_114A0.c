__int64 __fastcall sub_114A0(_QWORD *a1, __int64 a2, double a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 i; // r15
  __int64 *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v22; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = a1 + 32;
  *(v4 - 32) = &off_23278;
  *v4 = &off_23CF0;
  remove_event_listener(v4);
  v6 = a1[29];
  a1[16] = &off_231C0;
  if ( v6 )
  {
    a1[30] = 0;
    qfree(v6, a2, v5, a3);
  }
  v7 = a1[23];
  a1[16] = &off_23158;
  if ( v7 )
  {
    a1[24] = 0;
    qfree(v7, a2, v5, a3);
  }
  v8 = a1[20];
  if ( v8 )
  {
    v23 = a1[21];
    if ( v23 )
    {
      v22 = 0;
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
            for ( i = 0; i != v12; ++i )
            {
              v14 = (__int64 *)(v11 + 48 * i);
              v15 = v14[3];
              if ( v15 )
              {
                v14[4] = 0;
                qfree(v15, a2, v5, a3);
              }
              v16 = *v14;
              if ( *v14 )
              {
                v14[1] = 0;
                qfree(v16, a2, v5, a3);
              }
              v11 = v10[7];
            }
          }
          v10[8] = 0;
          qfree(v11, a2, v5, a3);
        }
        v17 = v10[4];
        if ( v17 )
        {
          v10[5] = 0;
          qfree(v17, a2, v5, a3);
        }
        v18 = v10[1];
        if ( v18 )
        {
          v10[2] = 0;
          qfree(v18, a2, v5, a3);
        }
        ++v22;
        v8 = a1[20];
        v9 += 88;
      }
      while ( v23 != v22 );
    }
    a1[21] = 0;
    qfree(v8, a2, v5, a3);
  }
  v19 = a1[17];
  if ( v19 )
  {
    a1[18] = 0;
    qfree(v19, a2, v5, a3);
  }
  *a1 = &off_23CF0;
  remove_event_listener(a1);
  return qfree(a1, a2, v20, a3);
}
