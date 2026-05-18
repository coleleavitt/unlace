__int64 __fastcall sub_D0E10(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi

  v3 = *(_QWORD **)(a2 + 64);
  if ( v3 != (_QWORD *)(a2 + 80) )
    sub_C9250(a1, v3);
  sub_D0D80(a1, a2);
  *(_QWORD *)(a2 + 64) = a2 + 80;
  *(_WORD *)(a2 + 52) = 0;
  *(_WORD *)(a2 + 56) = 3;
  *(_DWORD *)(a2 + 48) = 0;
  return 0;
}
