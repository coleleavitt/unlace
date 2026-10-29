__int64 __fastcall sub_7B2D0(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __m128i *a4,
        __int64 (__fastcall *a5)(const __m128i *, __int64 *))
{
  __int64 v9; // [rsp-10h] [rbp-38h]

  sub_7B1C0(a1, a2, a4, a5);
  sub_7B1C0(a2, a3, a4, a5);
  sub_791C0(
    a1,
    a2,
    a3,
    0xCCCCCCCCCCCCCCCDLL * (a2 - a1),
    0xCCCCCCCCCCCCCCCDLL * (a3 - a2),
    a4,
    (__int64 (__fastcall *)(__m128i *, __m128i *))a5);
  return v9;
}

