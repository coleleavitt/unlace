void __fastcall sub_D8450(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rsi
  __int64 v5; // rsi
  _QWORD *v6; // rsi

  sub_D8390(a1, a2[7]);
  v3 = (_QWORD *)*a2;
  if ( v3 )
    sub_C9250(a1, v3);
  v4 = (_QWORD *)a2[1];
  if ( v4 )
    sub_C9250(a1, v4);
  v5 = a2[3];
  if ( v5 )
    sub_D7720(a1, v5);
  v6 = (_QWORD *)a2[4];
  if ( v6 )
    sub_CF6E0(a1, v6);
  sub_C9250(a1, a2);
}
