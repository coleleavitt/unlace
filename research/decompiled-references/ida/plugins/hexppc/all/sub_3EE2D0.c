__int64 __fastcall sub_3EE2D0(__int64 a1, int a2, double a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r12
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  int dtype_size; // eax
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 result; // rax

  v6 = a5;
  if ( a6 == -1 )
    a6 = *(unsigned __int16 *)(a1 + 190);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + a6;
  v8 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v9 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  sub_3E9BF0(a1, 33, v7, 0, 1);
  sub_1D3320(a1, *(_DWORD *)(v9 + 72), 1);
  v10 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 16) = v8;
  v11 = *(_QWORD *)(v10 + 4464);
  if ( !v11 )
    sub_3E6800(a3);
  v12 = *(int *)(*(_QWORD *)(v10 + 4456) + 4 * v11 - 4);
  *(_QWORD *)(v10 + 4464) = v11 - 1;
  sub_3EB290(a1, a1 + 104, v12);
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 4u, dtype_size, v12, 0x3BEA45E214ADDC55LL, a2, 0);
  v14 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v15 = get_dtype_size();
  sub_1D2710(a1, 0x37u, v15, v14, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  *(_QWORD *)(a1 + 16) = v9;
  v16 = get_dtype_size();
  result = sub_1D2710(a1, 4u, v16, v6, 0x3BEA45E214ADDC55LL, a2, 0);
  *(_BYTE *)(a1 + 864) = 1;
  return result;
}

