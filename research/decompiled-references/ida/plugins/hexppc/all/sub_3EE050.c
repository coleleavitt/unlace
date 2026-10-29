unsigned __int64 __fastcall sub_3EE050(__int64 a1, int a2, int a3, int a4, char a5, double a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  int dtype_size; // eax
  int v19; // eax
  unsigned __int8 v20; // [rsp+Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8
    || (v10 = *(_DWORD *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4),
        v20 = a5 & 1,
        *(_QWORD *)(v7 + 4464) = v8 - 1,
        sub_1D2C40(a1, 7, 8, a3, v10, a5 & 1),
        v11 = *(_QWORD *)(a1 + 832),
        (v12 = *(_QWORD *)(v11 + 4464)) == 0)
    || (v13 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4),
        *(_QWORD *)(v11 + 4464) = v12 - 1,
        sub_1D2C40(a1, 7, 8, a4, v13, v20),
        v14 = *(_QWORD *)(a1 + 832),
        (v15 = *(_QWORD *)(v14 + 4464)) == 0) )
  {
    sub_3E6800(a6);
  }
  v16 = *(int *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 4464) = v15 - 1;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 0xEu, dtype_size, v10, v13, v16, 0);
  if ( (a5 & 2) != 0 )
  {
    sub_3EA390(a1, 11, v16, a2);
  }
  else
  {
    v19 = get_dtype_size();
    sub_1D2710(a1, 4u, v19, v16, 0x3BEA45E214ADDC55LL, a2, 0);
  }
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

