__int64 __fastcall sub_1CF710(__int64 a1, unsigned __int8 a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // r15
  __int64 v9; // rbx
  int dtype_size; // eax
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v14; // rcx

  v7 = a5;
  v9 = a6;
  sub_1CF640(a1, 0, a2, 0, a6, 0);
  dtype_size = get_dtype_size();
  v11 = dtype_size;
  if ( a7 == -1 )
  {
    if ( (_DWORD)v7 == a4 )
    {
      sub_1CF210(a1, 0xCu, dtype_size, v9, a3, v9, 0);
    }
    else
    {
      v12 = v9;
      v9 = v7;
      sub_1CF210(a1, 0xCu, dtype_size, v12, a3, v7, 0);
    }
  }
  else
  {
    sub_1CF210(a1, 0x19u, dtype_size, v9, a3, 0, 0);
    sub_1CF210(a1, 0x1Au, v11, v9, a3, 3, 0);
    if ( (_DWORD)v7 == a4 )
    {
      sub_1CF210(a1, 0xCu, v11, v9, a3, v9, 0);
    }
    else
    {
      v14 = v9;
      v9 = v7;
      sub_1CF210(a1, 0xCu, v11, v14, a3, v7, 0);
    }
    sub_1CF210(a1, 0x19u, v11, a4, v9, a7, 0);
    sub_1CF210(a1, 0x1Au, v11, a4, v9, a7 + 1, 0);
    sub_1CF210(a1, 0x13u, 1, 0, a7, 0, 0);
    sub_1CF210(a1, 0x13u, 1, 3, a7 + 1, 3, 0);
  }
  return sub_1CF210(a1, 0xCu, v11, a4, v9, v7, 0);
}

