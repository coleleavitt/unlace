unsigned __int64 __fastcall sub_4D7C0(
        __m128i *a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__m128 *, __m128i *))
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v11; // [rsp+0h] [rbp-48h]
  __m128i *v12; // [rsp+8h] [rbp-40h]

  v7 = (0x4EC4EC4EC4EC4EC5LL * ((a2 - (__int64)a1) >> 3) + 1) / 2;
  v8 = 8
     * (v7
      + 4
      * (v7
       + ((0x4EC4EC4EC4EC4EC5LL * ((a2 - (__int64)a1) >> 3)
         + 1
         + ((unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((a2 - (__int64)a1) >> 3) + 1) >> 63))
        & 0xFFFFFFFFFFFFFFFELL)));
  v11 = v8;
  if ( v7 <= a4 )
    return sub_4D740(a1, (__m128i *)((char *)a1 + v8), a2, a3, a5);
  v12 = (__m128i *)((char *)a1 + v8);
  sub_4D7C0(a1, &a1->m128i_i8[v8], a3);
  sub_4D7C0(v12, a2, a3);
  return sub_48AE0(
           a1,
           v12,
           a2,
           0x4EC4EC4EC4EC4EC5LL * (v11 >> 3),
           0x4EC4EC4EC4EC4EC5LL * ((a2 - (__int64)v12) >> 3),
           a3,
           a4,
           (__int64 (__fastcall *)(__m128i *, __m128i *, double, double))a5);
}

