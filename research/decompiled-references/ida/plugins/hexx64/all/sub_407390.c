__int64 __fastcall sub_407390(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
  int dtype_size; // eax
  int v12; // eax

  v8 = a4;
  v9 = a5;
  dtype_size = get_dtype_size();
  sub_1D6310(a1, (a2 != 22) + 27, dtype_size, v8, v9, 0, *(double *)a6.m128i_i64, 0);
  v12 = get_dtype_size();
  sub_1D6310(a1, a2, v12, v8, v9, v8, *(double *)a6.m128i_i64, 0);
  sub_3FB370(a1, 8, *(double *)a6.m128i_i64);
  return sub_3FD520(a1, v8, a3, a6, a7, a8);
}

