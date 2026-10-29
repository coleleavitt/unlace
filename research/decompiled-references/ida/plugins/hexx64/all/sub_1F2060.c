unsigned __int64 __fastcall sub_1F2060(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 i; // rbp
  __int64 v12; // rdi

  result = a1[8];
  v9 = a1[7];
  for ( i = v9 + 96 * result; i != v9; result = sub_1F1DA0(v12, a1, a2, a4, a5, a6, a7, a8) )
  {
    v12 = v9;
    v9 += 96;
  }
  return result;
}

