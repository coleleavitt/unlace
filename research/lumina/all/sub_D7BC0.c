void __fastcall sub_D7BC0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rsi
  _QWORD *v5; // rsi
  __int64 v6; // rsi
  _QWORD *v7; // rsi

  do
  {
    v3 = (_QWORD *)a2[4];
    if ( *a2 )
      sub_D7810(a1, (_QWORD *)*a2);
    v4 = a2[1];
    if ( v4 )
      sub_D7720(a1, v4);
    v5 = (_QWORD *)a2[2];
    if ( v5 )
      sub_D7810(a1, v5);
    v6 = a2[3];
    if ( v6 )
      sub_D7720(a1, v6);
    v7 = (_QWORD *)a2[6];
    if ( v7 )
      sub_C9250(a1, v7);
    if ( a2 )
      sub_C9250(a1, a2);
    a2 = v3;
  }
  while ( v3 );
}
