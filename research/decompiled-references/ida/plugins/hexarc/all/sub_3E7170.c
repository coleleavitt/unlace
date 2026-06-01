__int64 __fastcall sub_3E7170(__int64 a1, unsigned __int8 a2, int a3, int a4, int a5)
{
  int dtype_size; // eax
  int v9; // eax

  if ( (unsigned __int8)sub_3E2770(a1 + 24) )
    sub_3E6180(a1, a2, a3, a4, 5);
  else
    sub_1CF640(a1, 0, a2, 0, 272, 0);
  dtype_size = get_dtype_size();
  sub_1CF210(a1, 0xCu, dtype_size, 272, a4, 272, 0);
  v9 = get_dtype_size();
  return sub_1CF210(a1, 0xDu, v9, a3, 272, a5, 0);
}

