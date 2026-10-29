__int64 *__fastcall sub_1BE10(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 72 * i);
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v6 = a1[5];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_180B0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree();
    }
    operator delete(v7, 0x40u);
  }
  v9 = a1[11];
  a1[5] = 0;
  a1[6] = (__int64)(a1 + 4);
  a1[7] = (__int64)(a1 + 4);
  a1[8] = 0;
  while ( v9 )
  {
    sub_189A0(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  a1[11] = 0;
  a1[12] = (__int64)(a1 + 10);
  a1[13] = (__int64)(a1 + 10);
  a1[14] = 0;
  return a1 + 10;
}

