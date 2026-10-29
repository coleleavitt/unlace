unsigned __int64 __fastcall sub_3FB820(__int64 a1, int a2, int a3, int a4, __m128i a5, __m128 a6, __m128 a7)
{
  __int64 v9; // r13
  int dtype_size; // eax
  int v11; // eax

  v9 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 3u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v9, *(double *)a5.m128i_i64, 0);
  v11 = get_dtype_size();
  sub_1D6310(a1, 0x14u, v11, v9, a4, v9, *(double *)a5.m128i_i64, 0);
  return sub_3FB720(a1, 0x20u, v9, 0, a2, a5, a6, a7);
}

