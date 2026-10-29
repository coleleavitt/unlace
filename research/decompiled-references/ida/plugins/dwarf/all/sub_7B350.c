__int64 __fastcall sub_7B350(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(const __m128i *, __int64 *))
{
  __int64 v7; // rax
  __int64 v10; // [rsp+0h] [rbp-48h]
  __m128i *v11; // [rsp+8h] [rbp-40h]

  v7 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (a2 - a1) + 1) / 2;
  v10 = 80 * v7;
  if ( v7 <= a4 )
    return sub_7B2D0(a1, &a1[5 * v7], a2, a3, a5);
  v11 = &a1[5 * v7];
  sub_7B350(a1, v11, a3);
  sub_7B350(v11, a2, a3);
  return sub_7A400(
           a1,
           v11,
           a2,
           0xCCCCCCCCCCCCCCCDLL * (v10 >> 4),
           0xCCCCCCCCCCCCCCCDLL * (a2 - v11),
           a3,
           a4,
           (__int64 (__fastcall *)(__m128i *, __m128i *))a5);
}

