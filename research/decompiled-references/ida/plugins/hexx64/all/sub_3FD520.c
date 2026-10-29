__int64 __fastcall sub_3FD520(__int64 a1, int a2, unsigned __int8 a3, __m128i a4, __m128 a5, __m128 a6)
{
  unsigned int v6; // r12d
  int dtype_size; // eax
  __int64 v9; // [rsp-10h] [rbp-28h]

  v6 = a3;
  sub_3FB720(a1, 0x21u, a2, a3, 1, a4, a5, a6);
  sub_3FB720(a1, 0x1Fu, a2, v6, 4, a4, a5, a6);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x1Du, dtype_size, a2, 0x3BEA45E214ADDC55LL, 2, *(double *)a4.m128i_i64, 0);
  return v9;
}

