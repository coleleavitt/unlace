__int64 __fastcall sub_3EF3E0(__int64 a1, int a2, char a3, char a4, int a5, double a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  int dtype_size; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rsi
  char v24; // dl

  v9 = 7;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v11 + 80) != 8 )
    v9 = 2;
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
    goto LABEL_12;
  v13 = *(int *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  if ( a4 < a3 )
  {
    v23 = -(__int64)(0x8000000000000000LL >> (a3 - 1));
    v24 = a4 + 1;
    if ( v24 )
      v23 &= ~(-1LL << (64 - v24));
    v14 = ~v23;
  }
  else
  {
    v14 = -(__int64)(0x8000000000000000LL >> a4);
    if ( a3 )
      v14 &= ~(-1LL << (64 - a3));
  }
  sub_3E9CF0(a1, v14, v9, v13);
  v15 = *(_QWORD *)(a1 + 832);
  v16 = *(_QWORD *)(v15 + 4464);
  if ( !v16 )
LABEL_12:
    sub_3E6800(a6);
  v17 = *(int *)(*(_QWORD *)(v15 + 4456) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 4464) = v16 - 1;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 7u, dtype_size, v13, 0x3BEA45E214ADDC55LL, v17, 0);
  v19 = get_dtype_size();
  sub_1D2710(a1, 0x14u, v19, v10, v17, v17, 0);
  v20 = get_dtype_size();
  sub_1D2710(a1, 0x14u, v20, a5, v13, v10, 0);
  v21 = get_dtype_size();
  return sub_1D2710(a1, 0x13u, v21, v10, v17, v10, 0);
}

