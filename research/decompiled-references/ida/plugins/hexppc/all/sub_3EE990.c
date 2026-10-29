__int64 __fastcall sub_3EE990(__int64 a1, int a2, int a3, char a4, char a5, double a6)
{
  __int64 v9; // rcx
  int v11; // edx
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  signed int v14; // r13d
  __int64 v15; // rsi
  char v16; // r8
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rbx
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  int dtype_size; // eax

  v9 = *(_QWORD *)(a1 + 832);
  v11 = *(_DWORD *)(v9 + 80);
  if ( v11 == 8 )
  {
    v12 = 7;
  }
  else
  {
    if ( v11 == 4 && !a4 && a5 == 31 )
    {
      dtype_size = get_dtype_size();
      return sub_1D2710(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, a2, 0);
    }
    v12 = 2;
  }
  v13 = *(_QWORD *)(v9 + 4464);
  if ( !v13 )
    sub_3E6800(a6);
  v14 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v13 - 4);
  *(_QWORD *)(v9 + 4464) = v13 - 1;
  if ( (char)(a5 + 32) >= (char)(a4 + 32) )
  {
    v17 = -(__int64)(0x8000000000000000LL >> (a5 + 32));
    if ( a4 != -32 )
      v17 &= ~(-1LL << (64 - (a4 + 32)));
  }
  else
  {
    v15 = -(__int64)(0x8000000000000000LL >> (a4 + 31));
    v16 = a5 + 33;
    if ( v16 )
      v15 &= ~(-1LL << (64 - v16));
    v17 = ~v15;
  }
  sub_3E9CF0(a1, v17, v12, v14);
  v18 = get_dtype_size();
  sub_1D2710(a1, 0x14u, v18, a3, v14, a2, 0);
  v19 = *(_QWORD **)(a1 + 832);
  result = v19[558];
  v21 = v19[557];
  if ( v19[559] < (unsigned __int64)(result + 1) )
  {
    v22 = qvector_reserve();
    v19[557] = v22;
    v21 = v22;
    result = v19[558];
  }
  *(_DWORD *)(v21 + 4 * result) = v14;
  ++v19[558];
  return result;
}

