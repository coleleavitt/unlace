unsigned __int64 __fastcall sub_3EEB70(
        __int64 a1,
        int a2,
        signed int a3,
        unsigned __int16 a4,
        char a5,
        char a6,
        double a7)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rdx
  signed int v15; // r14d
  char v16; // r13
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  int v21; // eax
  __int64 v22; // rax
  int dtype_size; // eax
  signed int v24; // [rsp+8h] [rbp-50h]
  _QWORD *v25; // [rsp+8h] [rbp-50h]
  signed int v26; // [rsp+8h] [rbp-50h]

  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10
    || (v11 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4),
        *(_QWORD *)(v9 + 4464) = v10 - 1,
        v12 = *(_QWORD *)(a1 + 832),
        (v13 = *(_QWORD *)(v12 + 4464)) == 0) )
  {
    sub_3E6800(a7);
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v12 + 4456) + 4 * v13 - 4);
  *(_QWORD *)(v12 + 4464) = v13 - 1;
  if ( a4 > 0xFu && 32 - a4 <= a5 && a5 < a6 )
  {
    v26 = a3;
    sub_3E9CF0(a1, 32 - a4, 0, v15);
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 0x17u, dtype_size, v26, v15, v11, 0);
    v16 = a6;
  }
  else
  {
    v16 = a6;
    if ( a5 <= a6 && 32 - a6 > a4 )
    {
      v24 = a3;
      sub_3E9CF0(a1, a4, 0, v15);
      v21 = get_dtype_size();
      sub_1D2710(a1, 0x16u, v21, v24, v15, v11, 0);
    }
    else
    {
      sub_3EE810(a1, a3, a4, v11, a7);
    }
  }
  v17 = *(_QWORD **)(a1 + 832);
  v18 = v17[558];
  v19 = v17[557];
  if ( v17[559] < (unsigned __int64)(v18 + 1) )
  {
    v25 = *(_QWORD **)(a1 + 832);
    v22 = qvector_reserve();
    v17 = v25;
    v19 = v22;
    v25[557] = v22;
    v18 = v25[558];
  }
  *(_DWORD *)(v19 + 4 * v18) = v15;
  ++v17[558];
  sub_3EE990(a1, a2, v11, a5, v16, a7);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

