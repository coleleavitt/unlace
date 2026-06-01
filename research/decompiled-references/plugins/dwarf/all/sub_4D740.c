__int64 __fastcall sub_4D740(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __m128i *a4,
        __int64 (__fastcall *a5)(__m128 *, __m128i *))
{
  __int64 v9; // [rsp-10h] [rbp-38h]

  sub_4D630(a1, (__int64)a2, a4, a5);
  sub_4D630(a2, a3, a4, a5);
  sub_44690(
    a1,
    a2,
    a3,
    0x4EC4EC4EC4EC4EC5LL * (((char *)a2 - (char *)a1) >> 3),
    0x4EC4EC4EC4EC4EC5LL * ((a3 - (__int64)a2) >> 3),
    a4,
    (__int64 (__fastcall *)(__m128i *, __m128i *, double, double))a5);
  return v9;
}
