double *__fastcall sub_EFAE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  double *result; // rax
  __int64 v8; // rdx

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
    result = (double *)sub_EF2D0(a1 + 1, v6, 0, a4, a5, a6);
  else
    result = *(double **)(v6 + 8);
  if ( result )
  {
    v8 = *((_QWORD *)result + 2);
    if ( v8 > 0 )
      return (double *)sub_C95A0(*a1, v6, v8, a4, a5, a6, *result / (double)(int)v8);
  }
  return result;
}
