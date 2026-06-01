unsigned __int64 __fastcall sub_4BDE0(
        __m128i *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__m128 *, __m128i *))
{
  __int64 v6; // rdx
  signed __int64 v7; // rbx

  v6 = (__int64)(0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1) / 2;
  v7 = ((0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1 + ((0xAAAAAAAAAAAAAAABLL * (a2 - a1) + 1) >> 63)) & 0xFFFFFFFFFFFFFFFELL)
     + v6;
  if ( v6 <= a4 )
    return sub_4BD60(a1, &a1[v7], a2, a3, a5);
  sub_4BDE0(a1, &a1[v7], a3);
  sub_4BDE0(&a1[v7], a2, a3);
  return sub_46E70(
           a1,
           &a1[v7],
           (__int64)a2,
           0xAAAAAAAAAAAAAAABLL * ((v7 * 16) >> 4),
           0xAAAAAAAAAAAAAAABLL * (a2 - &a1[v7]),
           a3,
           a4,
           (__int64 (__fastcall *)(__m128i *, __m128i *))a5);
}

