__int64 __fastcall sub_3E6180(__int64 a1, unsigned __int8 a2, int a3, int a4, char a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int dtype_size; // eax

  v6 = a4;
  v7 = a3;
  if ( (a5 & 1) != 0 )
  {
    dtype_size = get_dtype_size();
    sub_1CF210(a1, 7u, dtype_size, v6, 0x3BEA45E214ADDC55LL, 288, 0);
    v6 = 288;
  }
  if ( (a5 & 4) != 0 )
  {
    sub_1CF640(a1, 0, a2, 0, 272, 0);
    goto LABEL_7;
  }
  if ( (a5 & 2) != 0 )
  {
    v11 = get_dtype_size();
    sub_1CF210(a1, 3u, v11, 1, 0x3BEA45E214ADDC55LL, 272, 0);
LABEL_7:
    v12 = get_dtype_size();
    v13 = v6;
    v6 = 288;
    sub_1CF210(a1, 0xCu, v12, v13, 272, 288, 0);
  }
  v8 = get_dtype_size();
  sub_1CF210(a1, 0x19u, v8, v7, v6, 0, 0);
  v9 = get_dtype_size();
  return sub_1CF210(a1, 0x1Au, v9, v7, v6, 3, 0);
}

