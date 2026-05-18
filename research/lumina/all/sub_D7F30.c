void __fastcall sub_D7F30(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rsi
  _QWORD *v5; // rsi
  _QWORD *v6; // rsi
  __int64 v7; // rsi

  if ( a2 )
  {
    v2 = (_QWORD *)a2[7];
    v4 = v2[5];
    if ( v4 )
      sub_D7720(a1, v4);
    v5 = (_QWORD *)v2[6];
    if ( v5 )
      sub_D7810(a1, v5);
    v6 = (_QWORD *)v2[2];
    if ( v6 )
      sub_D75C0(a1, v6, 1);
    v7 = a2[3];
    if ( v7 )
      sub_D7720(a1, v7);
    sub_C9250(a1, a2);
  }
}
