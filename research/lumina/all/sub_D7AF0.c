void __fastcall sub_D7AF0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rsi
  _QWORD *v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  _QWORD *v10; // rsi

  if ( a2 )
  {
    v2 = (_QWORD *)a2[7];
    if ( v2 )
    {
      *v2 = a2[8];
      v3 = a2[8];
      if ( v3 )
        *(_QWORD *)(v3 + 56) = a2[7];
      a2[7] = 0;
    }
    v5 = a2[9];
    if ( v5 )
      sub_D7720(a1, v5);
    v6 = (_QWORD *)a2[2];
    if ( v6 )
      sub_D7810(a1, v6);
    v7 = (_QWORD *)a2[3];
    if ( v7 )
      sub_D7810(a1, v7);
    v8 = a2[6];
    if ( v8 )
      sub_D7720(a1, v8);
    v9 = a2[5];
    if ( v9 )
      sub_D7720(a1, v9);
    if ( *a2 )
      sub_C9250(a1, (_QWORD *)*a2);
    v10 = (_QWORD *)a2[1];
    if ( v10 )
      sub_C9250(a1, v10);
    sub_C9250(a1, a2);
  }
}
