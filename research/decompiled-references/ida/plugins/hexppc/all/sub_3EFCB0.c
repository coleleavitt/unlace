unsigned __int64 __fastcall sub_3EFCB0(__int64 a1, int a2, int a3, char a4, char a5, double a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  signed int v11; // r15d
  int dtype_size; // eax
  _QWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // bl
  signed int v19; // r12d
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8 )
    goto LABEL_16;
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4);
  *(_QWORD *)(v7 + 4464) = v8 - 1;
  sub_3E9CF0(a1, a5, 0, v11);
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 0x16u, dtype_size, v6, v11, a2, 0);
  v13 = *(_QWORD **)(a1 + 832);
  v14 = v13[558];
  v15 = v13[557];
  if ( v13[559] < (unsigned __int64)(v14 + 1) )
  {
    v30 = qvector_reserve();
    v13[557] = v30;
    v15 = v30;
    v14 = v13[558];
  }
  *(_DWORD *)(v15 + 4 * v14) = v11;
  ++v13[558];
  v16 = *(_QWORD *)(a1 + 832);
  v17 = *(_QWORD *)(v16 + 4464);
  if ( !v17 )
LABEL_16:
    sub_3E6800(a6);
  v18 = a4 - a5;
  v19 = *(_DWORD *)(*(_QWORD *)(v16 + 4456) + 4 * v17 - 4);
  *(_QWORD *)(v16 + 4464) = v17 - 1;
  v20 = 63 - a5;
  v21 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v21 = 7;
  if ( v20 < v18 )
  {
    v28 = -(__int64)(0x8000000000000000LL >> (v18 - 1));
    if ( a5 != 64 )
      v28 &= ~(-1LL << a5);
    v22 = ~v28;
  }
  else
  {
    v22 = -(__int64)(0x8000000000000000LL >> v20);
    if ( v18 )
      v22 &= ~(-1LL << (64 - v18));
  }
  sub_3E9CF0(a1, v22, v21, v19);
  v23 = get_dtype_size();
  sub_1D2710(a1, 0x14u, v23, a2, v19, a2, 0);
  v24 = *(_QWORD **)(a1 + 832);
  v25 = v24[558];
  v26 = v24[557];
  if ( v24[559] < (unsigned __int64)(v25 + 1) )
  {
    v29 = qvector_reserve();
    v24[557] = v29;
    v26 = v29;
    v25 = v24[558];
  }
  *(_DWORD *)(v26 + 4 * v25) = v19;
  ++v24[558];
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

