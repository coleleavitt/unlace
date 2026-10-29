void __fastcall sub_D7E70(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rsi

  v3 = *(_QWORD **)(a2 + 8);
  if ( v3 )
    sub_D7810(a1, v3);
  v4 = *(_QWORD **)(a2 + 16);
  if ( v4 )
    sub_D75C0(a1, v4, 1);
  if ( *(_QWORD *)a2 )
    sub_C9250(a1, *(_QWORD **)a2);
}
