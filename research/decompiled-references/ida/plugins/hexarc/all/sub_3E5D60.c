__int64 __fastcall sub_3E5D60(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r15d
  __int64 result; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int dtype_size; // eax

  if ( *(_WORD *)(a1 + 48) != 3 )
  {
    if ( !under_debugger )
      sub_37B760(0xCA49u, a6);
    BUG();
  }
  v6 = a3;
  v7 = a4;
  v8 = 40LL * a2;
  v11 = sub_3E57E0(a1, a2, a2 == 0 ? 272 : 280, a4, a5);
  result = 0;
  if ( v11 != -1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + v8 + 65) - 2) > 2u )
    {
      if ( (_DWORD)v6 != v11 )
      {
        dtype_size = get_dtype_size();
        sub_1CF210(a1, 4u, dtype_size, (int)v6, 0x3BEA45E214ADDC55LL, v11, 0);
      }
    }
    else
    {
      v13 = get_dtype_size();
      sub_1CF210(a1, 1u, v13, v6, 296, v11, 4);
      if ( v7 != -1 )
      {
        v14 = get_dtype_size();
        sub_1CF210(a1, 3u, v14, 4, 0x3BEA45E214ADDC55LL, 288, 0);
        v15 = get_dtype_size();
        sub_1CF210(a1, 0xCu, v15, v11, 288, v11, 0);
        v16 = get_dtype_size();
        sub_1CF210(a1, 1u, v16, v7, 296, v11, 4);
      }
    }
    sub_3E5CA0(a1, a1 + v8 + 64, v11, v9, v10);
    return 1;
  }
  return result;
}

