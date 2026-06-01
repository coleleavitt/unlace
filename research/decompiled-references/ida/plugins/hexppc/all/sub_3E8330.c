__int64 __fastcall sub_3E8330(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  int v6; // r12d
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // eax
  int dtype_size; // eax
  __int64 v14; // [rsp-10h] [rbp-38h]

  v4 = *(int *)(*(_QWORD *)(a1 + 832) + 484LL);
  if ( a3 == -1 )
  {
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 4u, dtype_size, a2, 0x3BEA45E214ADDC55LL, v4, 0);
  }
  else
  {
    v5 = a3;
    v6 = -(a4 == 0);
    v7 = get_dtype_size();
    sub_1D2710(a1, (v6 & 4) + 26, v7, a2, v5, v4, 0);
  }
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(int *)(v8 + 480);
  v10 = *(int *)(v8 + 484);
  v11 = get_dtype_size();
  sub_1D2710(a1, 0x13u, v11, v10, v9, v9, 0);
  return v14;
}

