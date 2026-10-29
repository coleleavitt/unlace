__int64 __fastcall sub_3FA190(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // r12
  int dtype_size; // eax
  int v6; // eax
  int v7; // eax

  v4 = a3;
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x23u, dtype_size, a2, v4, 0, a4, -1);
  v6 = get_dtype_size();
  sub_1D6310(a1, 0x1Fu, v6, a2, v4, 4, a4, -1);
  v7 = get_dtype_size();
  return sub_1D6310(a1, 0x21u, v7, a2, v4, 1, a4, -1);
}

