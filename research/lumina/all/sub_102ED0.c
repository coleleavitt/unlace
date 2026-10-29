void __fastcall sub_102ED0(__int64 a1, double a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v9; // rbx

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v8 + 20) >= 0 )
  {
    v9 = sub_EF2D0((_QWORD *)(a1 + 8), v8, 136, a5, a6, a7);
    if ( !v9 )
      return;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 8);
    if ( !v9 )
      return;
  }
  if ( v9[1] )
  {
    if ( v9[3] > 1u )
      sub_102750(v9, 44);
  }
  else
  {
    *v9 = a1;
    v9[2] = 100;
    v9[3] = 0;
    v9[1] = (char *)v9 + 34;
    *((_WORD *)v9 + 16) = 1;
    sub_102750(v9, 91);
  }
  *v9 = a1;
  sub_102C90((__int64 **)v9, *a4, a2, (__int64)a4, a5, a6, a7);
}
