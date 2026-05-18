__int64 __fastcall sub_EFB40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  double *v7; // rax
  double v8; // xmm0_8

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v7 = (double *)sub_EF2D0(a1 + 1, v6, 0, a4, a5, a6);
  else
    v7 = *(double **)(v6 + 8);
  v8 = 0.0;
  if ( v7 )
    v8 = *v7;
  return sub_C95A0(*a1, v6, a3, a4, a5, a6, v8);
}
