void __fastcall sub_102C0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rsi

  *a1 = &off_4D8D0;
  sub_10240(a1[31]);
  v1 = a1[25];
  while ( v1 )
  {
    v2 = v1;
    sub_101E0((void *)v1[3]);
    v3 = v1[7];
    v1 = (_QWORD *)v1[2];
    v2[5] = &off_4D850;
    if ( v3 )
      Z3_dec_ref(*(_QWORD *)(v2[6] + 8LL));
    operator delete(v2, 0x40u);
  }
  v4 = a1[19];
  while ( v4 )
  {
    v5 = v4;
    sub_101E0((void *)v4[3]);
    v6 = v4[7];
    v4 = (_QWORD *)v4[2];
    v5[5] = &off_4D850;
    if ( v6 )
      Z3_dec_ref(*(_QWORD *)(v5[6] + 8LL));
    operator delete(v5, 0x40u);
  }
  v7 = a1[13];
  while ( v7 )
  {
    v8 = v7;
    sub_101E0((void *)v7[3]);
    v9 = v7[7];
    v7 = (_QWORD *)v7[2];
    v8[5] = &off_4D850;
    if ( v9 )
      Z3_dec_ref(*(_QWORD *)(v8[6] + 8LL));
    operator delete(v8, 0x40u);
  }
  v10 = a1[7];
  while ( v10 )
  {
    v11 = v10;
    sub_101E0((void *)v10[3]);
    v12 = v10[7];
    v10 = (_QWORD *)v10[2];
    v11[5] = &off_4D850;
    if ( v12 )
      Z3_dec_ref(*(_QWORD *)(v11[6] + 8LL));
    operator delete(v11, 0x40u);
  }
  if ( a1[4] )
    Z3_del_context();
  operator delete(a1, 0x118u);
}

