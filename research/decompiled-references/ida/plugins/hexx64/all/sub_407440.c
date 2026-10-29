__int64 __fastcall sub_407440(__int64 a1, int a2, __m128i a3, __m128 a4, __m128 a5)
{
  char v5; // r12
  int dtype_size; // eax
  int v7; // eax

  v5 = sub_3FA390(a1, a1 + 64);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x1Du, dtype_size, a2, 0x3BEA45E214ADDC55LL, 3, *(double *)a3.m128i_i64, 0);
  v7 = get_dtype_size();
  sub_1D6310(a1, 0x15u, v7, 3, 0, 3, *(double *)a3.m128i_i64, 0);
  sub_1D6F20(
    a1,
    v5,
    a2,
    a2,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 460LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL),
    a3,
    a4,
    a5,
    1);
  return 1;
}

