__int64 __fastcall sub_3E7390(__int64 a1, int a2, int a3)
{
  int dtype_size; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  sub_3E7240(a1, a2, a2);
  dtype_size = get_dtype_size();
  sub_1CF210(a1, 3u, dtype_size, 31, 0x3BEA45E214ADDC55LL, 288, 0);
  v5 = get_dtype_size();
  sub_1CF210(a1, 0xDu, v5, 288, a2, a2, 0);
  v6 = get_dtype_size();
  sub_1CF210(a1, 3u, v6, 0xFFFFFFFFLL, 0x3BEA45E214ADDC55LL, 288, 0);
  v7 = get_dtype_size();
  return sub_1CF210(a1, 0x17u, v7, 288, a2, a3, 0);
}

