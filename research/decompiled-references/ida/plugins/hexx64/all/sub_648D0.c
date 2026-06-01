__int64 *__fastcall sub_648D0(__int64 *a1, const void **a2, double a3)
{
  __int64 v4; // rsi

  if ( a1 == (__int64 *)a2 )
    return a1;
  v4 = (__int64)a2[1];
  if ( !v4 )
  {
    a1[1] = 0;
    return a1;
  }
  sub_63DE0(a1, v4, a3);
  memcpy((void *)*a1, *a2, (unsigned __int64)a2[1] >> 3);
  a1[1] = (__int64)a2[1];
  return a1;
}

