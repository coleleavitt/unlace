__int64 __fastcall sub_10120(_QWORD *a1, __int64 a2, double a3)
{
  __int64 (__fastcall **v3)(); // rdx
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 j; // r15
  __int64 *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v3 = off_17F70;
  *a1 = off_17F70;
  v5 = a1[16];
  if ( v5 )
  {
    v20 = a1[17];
    if ( v20 )
    {
      v6 = 0;
      for ( i = 0; i != v20; ++i )
      {
        v8 = (_QWORD *)(v5 + v6);
        v9 = *(_QWORD *)(v5 + v6 + 56);
        if ( v9 )
        {
          v10 = v8[8];
          if ( v10 )
          {
            for ( j = 0; j != v10; ++j )
            {
              v12 = (__int64 *)(v9 + 48 * j);
              v13 = v12[3];
              if ( v13 )
              {
                v12[4] = 0;
                qfree(v13, a2, v3, a3);
              }
              v14 = *v12;
              if ( *v12 )
              {
                v12[1] = 0;
                qfree(v14, a2, v3, a3);
              }
              v9 = v8[7];
            }
          }
          v8[8] = 0;
          qfree(v9, a2, v3, a3);
        }
        v15 = v8[4];
        if ( v15 )
        {
          v8[5] = 0;
          qfree(v15, a2, v3, a3);
        }
        v16 = v8[1];
        if ( v16 )
        {
          v8[2] = 0;
          qfree(v16, a2, v3, a3);
        }
        v6 += 88;
        v5 = a1[16];
      }
    }
    a1[17] = 0;
    qfree(v5, a2, v3, a3);
  }
  *a1 = &off_18D30;
  remove_event_listener(a1);
  return qfree(a1, a2, v17, a3);
}
