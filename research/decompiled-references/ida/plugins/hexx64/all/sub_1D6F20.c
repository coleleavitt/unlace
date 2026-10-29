__int64 __fastcall sub_1D6F20(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __m128 a9,
        char a10)
{
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  int dtype_size; // r14d

  v10 = a3;
  v11 = a4;
  v12 = a5;
  v13 = a6;
  sub_1D6840(a1, 0, a2, 0, a5, 0, a7, a8, a9);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 3u, 4, 8 * dtype_size - 1, 0x3BEA45E214ADDC55LL, v13, *(double *)a7.m128i_i64, 0);
  sub_1D6310(a1, 0x16u, dtype_size, v12, v13, v12, *(double *)a7.m128i_i64, 0);
  sub_1D6310(a1, 3u, 4, 1, 0x3BEA45E214ADDC55LL, v13, *(double *)a7.m128i_i64, 0);
  if ( a10 )
    sub_1D6310(a1, 0x1Cu, dtype_size, v10, v13, 0, *(double *)a7.m128i_i64, 0);
  sub_1D6310(a1, 0x17u, dtype_size, v10, v13, v11, *(double *)a7.m128i_i64, 0);
  return sub_1D6310(a1, 0x13u, dtype_size, v11, v12, v11, *(double *)a7.m128i_i64, 0);
}

