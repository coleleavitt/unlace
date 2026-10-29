unsigned __int64 __fastcall sub_3EFAA0(__int64 a1, int a2, int a3, char a4, char a5, double a6)
{
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  signed int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  int dtype_size; // eax
  __int64 v20; // rsi
  char v21; // r8
  __int64 v22; // rax

  v8 = a3;
  v9 = *(_QWORD *)(a1 + 832);
  if ( (!a4 || *(_DWORD *)(v9 + 80) == 4 && a4 == 32) && a5 == 63 )
  {
    get_dtype_by_size();
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 4u, dtype_size, (int)v8, 0x3BEA45E214ADDC55LL, a2, 0);
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 4464);
    if ( !v10 )
      sub_3E6800(a6);
    v11 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
    *(_QWORD *)(v9 + 4464) = v10 - 1;
    v12 = 2;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      v12 = 7;
    if ( a4 > a5 )
    {
      v20 = -(__int64)(0x8000000000000000LL >> (a4 - 1));
      v21 = a5 + 1;
      if ( v21 )
        v20 &= ~(-1LL << (64 - v21));
      v13 = ~v20;
    }
    else
    {
      v13 = -(__int64)(0x8000000000000000LL >> a5);
      if ( a4 )
        v13 &= ~(-1LL << (64 - a4));
    }
    sub_3E9CF0(a1, v13, v12, v11);
    v14 = get_dtype_size();
    sub_1D2710(a1, 0x14u, v14, v8, v11, a2, 0);
    v15 = *(_QWORD **)(a1 + 832);
    v16 = v15[558];
    v17 = v15[557];
    if ( v15[559] < (unsigned __int64)(v16 + 1) )
    {
      v22 = qvector_reserve();
      v15[557] = v22;
      v17 = v22;
      v16 = v15[558];
    }
    *(_DWORD *)(v17 + 4 * v16) = v11;
    ++v15[558];
  }
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

