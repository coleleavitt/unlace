__int64 __fastcall sub_4BD60(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        char *a4,
        __int64 (__fastcall *a5)(__m128 *, __m128i *))
{
  __int64 v9; // [rsp-10h] [rbp-38h]

  sub_4BC50(a1, a2, a4, a5);
  sub_4BC50(a2, a3, a4, a5);
  sub_43E00(
    a1->m128i_i8,
    a2->m128i_i8,
    (__int64)a3,
    0xAAAAAAAAAAAAAAABLL * (a2 - a1),
    0xAAAAAAAAAAAAAAABLL * (a3 - a2),
    a4,
    (__int64 (__fastcall *)(__m128i *, __m128i *, double, double))a5);
  return v9;
}

