__int64 __fastcall sub_3EE810(__int64 a1, signed int a2, unsigned __int16 a3, signed int a4, double a5)
{
  unsigned __int8 v7; // r14
  unsigned __int16 v8; // si
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r13d
  _QWORD *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 result; // rax
  int dtype_size; // eax
  __int64 v17; // rax

  if ( a3 <= 0x10u )
  {
    v8 = a3;
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v8 = 32 - a3;
  }
  if ( !v8 )
  {
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 4u, dtype_size, a2, 0x3BEA45E214ADDC55LL, a4, 0);
    result = *(_QWORD *)(a1 + 832);
    if ( *(_DWORD *)(result + 80) != 8 )
      return result;
    return sub_1D2C40(a1, 2, 7, a4, a4, 0);
  }
  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10 )
    sub_3E6800(a5);
  v11 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 4464) = v10 - 1;
  sub_3E9CF0(a1, v8, 0, v11);
  sub_1D3050(a1, v7, 2, a2, v11, a4);
  v12 = *(_QWORD **)(a1 + 832);
  v13 = v12[558];
  v14 = v12[557];
  if ( v12[559] < (unsigned __int64)(v13 + 1) )
  {
    v17 = qvector_reserve();
    v12[557] = v17;
    v14 = v17;
    v13 = v12[558];
  }
  *(_DWORD *)(v14 + 4 * v13) = v11;
  ++v12[558];
  result = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(result + 80) == 8 )
    return sub_1D2C40(a1, 2, 7, a4, a4, 0);
  return result;
}

