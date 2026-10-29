void __fastcall sub_7A350(__int64 *a1, const __m128i *a2, __int64 (__fastcall *a3)(const __m128i *, __int64 *))
{
  __int64 v4; // r12

  if ( (char *)a2 - (char *)a1 <= 1120 )
  {
    sub_79A00(a1, a2, a3);
  }
  else
  {
    v4 = 10 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 4)) >> 1);
    sub_7A350(a1, &a1[v4]);
    sub_7A350(&a1[v4], a2);
    sub_7A040(
      (__int64)a1,
      (__int64)&a1[v4],
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * ((v4 * 8) >> 4),
      0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)&a1[v4]) >> 4),
      (__int64)a3);
  }
}

