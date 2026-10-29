void __fastcall sub_D7C50(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rsi
  _QWORD *v5; // rsi
  _QWORD *v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  if ( v3 )
    sub_D7720(a1, v3);
  v4 = *(_QWORD **)(a2 + 80);
  if ( v4 )
    sub_D7810(a1, v4);
  v5 = *(_QWORD **)(a2 + 32);
  if ( v5 )
    sub_C9250(a1, v5);
  if ( (*(_BYTE *)(a2 + 99) & 0x10) != 0 )
  {
    v6 = *(_QWORD **)(a2 + 64);
    if ( v6 )
      sub_C9250(a1, v6);
  }
  if ( a2 )
    sub_C9250(a1, (_QWORD *)a2);
}
