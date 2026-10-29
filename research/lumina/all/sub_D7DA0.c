void __fastcall sub_D7DA0(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx

  sub_D7CD0((__int64)(a2 + 15));
  for ( i = (_QWORD *)a2[11]; i; i = (_QWORD *)a2[11] )
  {
    a2[11] = i[9];
    sub_D0E10(a1, (__int64)i);
    sub_C9250(a1, i);
  }
  v4 = (_QWORD *)a2[13];
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      sub_C9250(a1, v4);
      a2[13] = v5;
      v4 = v5;
    }
    while ( v5 );
  }
  sub_C9250(a1, a2);
}
