void __fastcall sub_C9BB0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rsi

  v3 = (_QWORD *)a2[4];
  if ( v3 )
    sub_C9250(a1, v3);
  v4 = (_QWORD *)a2[6];
  if ( v4 )
    sub_C9250(a1, v4);
  sub_C9250(a1, a2);
}
