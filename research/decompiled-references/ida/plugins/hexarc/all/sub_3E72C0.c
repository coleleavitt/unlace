__int64 __fastcall sub_3E72C0(__int64 a1, int a2, int a3, char a4)
{
  __int64 v5; // r12
  int dtype_size; // eax
  int v7; // eax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // [rsp-10h] [rbp-38h]

  v5 = a3;
  sub_3E7240(a1, a2, a2);
  dtype_size = get_dtype_size();
  sub_1CF210(a1, 3u, dtype_size, 1, 0x3BEA45E214ADDC55LL, 288, 0);
  v7 = get_dtype_size();
  result = sub_1CF210(a1, 0x16u, v7, 288, a2, v5, 0);
  if ( a4 )
  {
    v9 = get_dtype_size();
    sub_1CF210(a1, 7u, v9, v5, 0x3BEA45E214ADDC55LL, v5, 0);
    return v10;
  }
  return result;
}

