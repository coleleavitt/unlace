__int64 __fastcall sub_1D6910(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __m128 a9,
        int a10)
{
  __int64 v10; // r15
  __int64 v12; // rbx
  int dtype_size; // eax
  int v14; // r12d
  __int64 v15; // rcx
  __int64 v17; // rcx

  v10 = a5;
  v12 = a6;
  sub_1D6840(a1, 0, a2, 0, a6, 0, a7, a8, a9);
  dtype_size = get_dtype_size();
  v14 = dtype_size;
  if ( a10 == -1 )
  {
    if ( (_DWORD)v10 == a4 )
    {
      sub_1D6310(a1, 0xCu, dtype_size, v12, a3, v12, *(double *)a7.m128i_i64, 0);
    }
    else
    {
      v15 = v12;
      v12 = v10;
      sub_1D6310(a1, 0xCu, dtype_size, v15, a3, v10, *(double *)a7.m128i_i64, 0);
    }
  }
  else
  {
    sub_1D6310(a1, 0x19u, dtype_size, v12, a3, 0, *(double *)a7.m128i_i64, 0);
    sub_1D6310(a1, 0x1Au, v14, v12, a3, 3, *(double *)a7.m128i_i64, 0);
    if ( (_DWORD)v10 == a4 )
    {
      sub_1D6310(a1, 0xCu, v14, v12, a3, v12, *(double *)a7.m128i_i64, 0);
    }
    else
    {
      v17 = v12;
      v12 = v10;
      sub_1D6310(a1, 0xCu, v14, v17, a3, v10, *(double *)a7.m128i_i64, 0);
    }
    sub_1D6310(a1, 0x19u, v14, a4, v12, a10, *(double *)a7.m128i_i64, 0);
    sub_1D6310(a1, 0x1Au, v14, a4, v12, a10 + 1, *(double *)a7.m128i_i64, 0);
    sub_1D6310(a1, 0x13u, 1, 0, a10, 0, *(double *)a7.m128i_i64, 0);
    sub_1D6310(a1, 0x13u, 1, 3, a10 + 1, 3, *(double *)a7.m128i_i64, 0);
  }
  return sub_1D6310(a1, 0xCu, v14, a4, v12, v10, *(double *)a7.m128i_i64, 0);
}

