void __fastcall sub_D7A50(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi

  sub_D1F90(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 56LL, "sqlite_returning", 0);
  v3 = (_QWORD *)a2[1];
  if ( v3 )
    sub_D7810(a1, v3);
  if ( a2 )
    sub_C9250(a1, a2);
}
