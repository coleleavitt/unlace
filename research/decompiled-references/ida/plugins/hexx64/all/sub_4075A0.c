__int64 __fastcall sub_4075A0(__int64 a1, double a2)
{
  int dtype_size; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x3Eu, dtype_size, -1, -1, 0, a2, 0);
  v3 = get_dtype_size();
  sub_1D6310(a1, 0x3Eu, v3, -1, -1, 1, a2, 0);
  v4 = get_dtype_size();
  sub_1D6310(a1, 0x3Eu, v4, -1, -1, 2, a2, 0);
  v5 = get_dtype_size();
  sub_1D6310(a1, 0x3Eu, v5, -1, -1, 3, a2, 0);
  v6 = get_dtype_size();
  return sub_1D6310(a1, 0x3Eu, v6, -1, -1, 4, a2, 0);
}

