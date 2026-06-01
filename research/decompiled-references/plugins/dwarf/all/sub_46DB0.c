unsigned __int64 __fastcall sub_46DB0(__m128i *a1, __m128i *a2, __int64 (__fastcall *a3)(__m128 *, __m128i *))
{
  signed __int64 v4; // rbx

  if ( (char *)a2 - (char *)a1 <= 672 )
    return sub_461E0(a1, a2, a3);
  v4 = ((0xAAAAAAAAAAAAAAABLL * (a2 - a1)) & 0xFFFFFFFFFFFFFFFELL) + ((__int64)(0xAAAAAAAAAAAAAAABLL * (a2 - a1)) >> 1);
  sub_46DB0(a1, &a1[v4], a3);
  sub_46DB0(&a1[v4], a2, a3);
  return sub_46960(
           (__int64)a1,
           &a1[v4],
           (__int64)a2,
           0xAAAAAAAAAAAAAAABLL * ((v4 * 16) >> 4),
           0xAAAAAAAAAAAAAAABLL * (a2 - &a1[v4]),
           (__int64)a3);
}
