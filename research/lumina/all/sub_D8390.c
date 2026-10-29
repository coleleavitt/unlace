void __fastcall sub_D8390(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r12
  _QWORD *v5; // rsi
  _QWORD *v6; // rsi
  _QWORD *v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 40);
      v4 = *(_QWORD *)(v2 + 80);
      if ( v3 )
        sub_D7720(a1, v3);
      v5 = *(_QWORD **)(v2 + 48);
      if ( v5 )
        sub_D7810(a1, v5);
      v6 = *(_QWORD **)(v2 + 16);
      if ( v6 )
        sub_D75C0(a1, v6, 1);
      v7 = *(_QWORD **)(v2 + 56);
      if ( v7 )
        sub_CF6E0(a1, v7);
      v8 = *(_QWORD **)(v2 + 64);
      if ( v8 )
        sub_D7BC0(a1, v8);
      sub_D8260(a1, *(_QWORD **)(v2 + 32));
      v9 = *(_QWORD **)(v2 + 72);
      if ( v9 )
        sub_C9250(a1, v9);
      v10 = (_QWORD *)v2;
      v2 = v4;
      sub_C9250(a1, v10);
    }
    while ( v4 );
  }
}
