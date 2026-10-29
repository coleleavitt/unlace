__int64 *__fastcall sub_14CD30(
        __int64 *a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v12; // rdi

  sub_14BF70(a1, a2, a3, a5, nullptr, 0, a7, a8, a9, a10, a6, 9);
  v12 = *a1;
  if ( *a1 )
  {
    sub_268FA0(v12, a4);
    *(_DWORD *)(a2 + 1004) = time(nullptr);
  }
  return a1;
}

