__int64 __fastcall sub_3EF940(__int64 a1, signed int a2, unsigned __int16 a3, signed int a4, double a5)
{
  unsigned __int8 v6; // r14
  unsigned __int16 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 dtype_by_size; // rdx
  _QWORD *v12; // rbx
  __int64 result; // rax
  __int64 v14; // rsi
  int dtype_size; // eax
  __int64 v16; // rax

  if ( a3 <= 0x20u )
  {
    v7 = a3;
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v7 = 64 - a3;
  }
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(_QWORD *)(v8 + 4464);
  if ( !v9 )
    sub_3E6800(a5);
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 4456) + 4 * v9 - 4);
  *(_QWORD *)(v8 + 4464) = v9 - 1;
  sub_3E9CF0(a1, v7, 0, v10);
  dtype_by_size = (unsigned __int8)get_dtype_by_size();
  if ( v7 )
  {
    sub_1D3050(a1, v6, dtype_by_size, a2, v10, a4);
  }
  else
  {
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 4u, dtype_size, a2, 0x3BEA45E214ADDC55LL, a4, 0);
  }
  v12 = *(_QWORD **)(a1 + 832);
  result = v12[558];
  v14 = v12[557];
  if ( v12[559] < (unsigned __int64)(result + 1) )
  {
    v16 = qvector_reserve();
    v12[557] = v16;
    v14 = v16;
    result = v12[558];
  }
  *(_DWORD *)(v14 + 4 * result) = v10;
  ++v12[558];
  return result;
}

