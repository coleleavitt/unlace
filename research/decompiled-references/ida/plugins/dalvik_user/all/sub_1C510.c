_QWORD *__fastcall sub_1C510(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 j; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rbx
  void *v14; // rdi
  __int64 i; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v2 = a1[20];
  if ( v2 )
  {
    v18 = a1[21];
    if ( v18 )
    {
      v17 = 0;
      for ( i = 0; i != v18; ++i )
      {
        v3 = (_QWORD *)(v2 + v17);
        if ( *(_QWORD *)(v2 + v17 + 368) )
        {
          v3[47] = 0;
          qfree();
        }
        v4 = v3[18];
        if ( v4 )
        {
          v5 = v3[19];
          if ( v5 )
          {
            v6 = 0;
            for ( j = 0; j != v5; ++j )
            {
              v8 = (_QWORD *)(v4 + v6);
              if ( *(_QWORD *)(v4 + v6 + 56) )
              {
                v8[8] = 0;
                qfree();
              }
              if ( v8[4] )
              {
                v8[5] = 0;
                qfree();
              }
              if ( v8[1] )
              {
                v8[2] = 0;
                qfree();
              }
              v4 = v3[18];
              v6 += 120;
            }
          }
          v3[19] = 0;
          qfree();
        }
        if ( v3[14] )
        {
          v3[15] = 0;
          qfree();
        }
        if ( v3[8] )
        {
          v3[9] = 0;
          qfree();
        }
        if ( v3[5] )
        {
          v3[6] = 0;
          qfree();
        }
        if ( v3[2] )
        {
          v3[3] = 0;
          qfree();
        }
        v2 = a1[20];
        v17 += 392;
      }
    }
    a1[21] = 0;
    qfree();
    a1[20] = 0;
    a1[22] = 0;
  }
  v9 = a1[25];
  while ( v9 )
  {
    sub_17C20(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x38u);
  }
  v11 = a1[31];
  a1[25] = 0;
  a1[26] = a1 + 24;
  a1[27] = a1 + 24;
  a1[28] = 0;
  while ( v11 )
  {
    sub_189A0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x30u);
  }
  v13 = a1[37];
  a1[31] = 0;
  a1[32] = a1 + 30;
  a1[33] = a1 + 30;
  a1[34] = 0;
  while ( v13 )
  {
    sub_17A50(*(_QWORD **)(v13 + 24));
    v14 = (void *)v13;
    v13 = *(_QWORD *)(v13 + 16);
    operator delete(v14, 0x30u);
  }
  a1[37] = 0;
  a1[38] = a1 + 36;
  a1[39] = a1 + 36;
  a1[40] = 0;
  return a1 + 36;
}

