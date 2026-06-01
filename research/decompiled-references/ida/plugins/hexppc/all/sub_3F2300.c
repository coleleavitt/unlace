__int64 __fastcall sub_3F2300(__int64 a1, char a2, double a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // r13d
  int dtype_size; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rbp
  int v19; // eax
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // [rsp+0h] [rbp-48h]

  v8 = a7;
  v9 = a6;
  v22 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v10 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v11 = *(_QWORD *)(a1 + 832);
  v12 = v10;
  v13 = *(_QWORD *)(v11 + 4464);
  if ( !v13 )
    sub_3E6800(a3);
  v14 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v13 - 4);
  *(_QWORD *)(v11 + 4464) = v13 - 1;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, a2 == 0 ? 37 : 34, dtype_size, v9, v8, v14, -1);
  sub_1D3320(a1, *(_DWORD *)(v12 + 72), v14);
  v16 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 16) = v22;
  sub_3E99E0(v16);
  v17 = get_dtype_size();
  sub_1D2710(a1, 4u, v17, v8, 0x3BEA45E214ADDC55LL, a5, -1);
  v18 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v19 = get_dtype_size();
  sub_1D2710(a1, 0x37u, v19, v18, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  *(_QWORD *)(a1 + 16) = v12;
  v20 = get_dtype_size();
  result = sub_1D2710(a1, 4u, v20, v9, 0x3BEA45E214ADDC55LL, a5, -1);
  *(_BYTE *)(a1 + 864) = 1;
  return result;
}

