void __fastcall sub_C9AE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi

  v3 = a2[1];
  if ( (*(_BYTE *)(v3 + 4) & 0x10) != 0 )
    sub_C9250(a1, (_QWORD *)v3);
  sub_C9250(a1, a2);
}
