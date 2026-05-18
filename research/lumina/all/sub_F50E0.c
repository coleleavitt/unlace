void __fastcall sub_F50E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *v7; // rbx

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) < 0 )
  {
    v7 = *(_QWORD **)(v6 + 8);
    if ( !v7 )
      return;
    goto LABEL_3;
  }
  v7 = sub_EF2D0((_QWORD *)(a1 + 8), v6, 0, a4, a5, a6);
  if ( v7 )
  {
LABEL_3:
    sub_F5060(a1, (__int64)v7, a3, a4, a5, a6);
    sub_C91C0(v7[5], (__int64)v7);
  }
}
