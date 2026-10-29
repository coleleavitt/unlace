__int64 __fastcall sub_3ED510(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  signed int v14; // r14d
  unsigned __int16 v15; // ax
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  int v27; // r14d
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // r13d
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r14
  int v40; // eax
  int v41; // eax
  __int64 v42; // r13
  int dtype_size; // eax
  int v44; // eax
  __int64 v45; // [rsp+0h] [rbp-48h]
  int v46; // [rsp+Ch] [rbp-3Ch]

  v8 = 7;
  v9 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v9 + 84) != 8 )
    v8 = 2;
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10 )
    goto LABEL_32;
  v11 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 4464) = v10 - 1;
  v12 = *(_QWORD *)(a1 + 832);
  v13 = *(_QWORD *)(v12 + 4464);
  if ( !v13 )
    goto LABEL_32;
  v14 = *(_DWORD *)(*(_QWORD *)(v12 + 4456) + 4 * v13 - 4);
  *(_QWORD *)(v12 + 4464) = v13 - 1;
  sub_3E9CF0(a1, -1, v8, v14);
  v15 = *(_WORD *)(a1 + 48);
  if ( v15 == 214 )
  {
    v36 = *(_QWORD *)(a1 + 832);
    if ( a3 == a4 )
    {
      sub_1D2C40(a1, 0, v8, *(_DWORD *)(v36 + 488), v11, 0);
      v42 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      dtype_size = get_dtype_size();
      sub_1D2710(a1, 0x19u, dtype_size, v14, v11, v42, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, v14, v11, 1);
      v44 = get_dtype_size();
      sub_1D2710(a1, 0xCu, v44, v14, v11, a2, 0);
    }
    else
    {
      v46 = *(_DWORD *)(v36 + 488);
      v37 = get_dtype_size();
      sub_1D2710(a1, 6u, v37, v46, 0x3BEA45E214ADDC55LL, v11, 0);
      sub_1D2C40(a1, 0, v8, v11, v11, 0);
      v38 = get_dtype_size();
      sub_1D2710(a1, 0xCu, v38, a3, v11, v11, 0);
      v39 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      v40 = get_dtype_size();
      sub_1D2710(a1, 0x22u, v40, a4, v11, v39, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, a4, v11, 0);
      v41 = get_dtype_size();
      sub_1D2710(a1, 0xDu, v41, a4, v11, a2, 0);
    }
    goto LABEL_13;
  }
  if ( v15 > 0xD6u )
  {
    if ( v15 == 216 )
    {
      v31 = *(_QWORD *)(a1 + 832);
      v32 = *(_QWORD *)(v31 + 4464);
      if ( !v32 )
        goto LABEL_32;
      v33 = *(_DWORD *)(*(_QWORD *)(v31 + 4456) + 4 * v32 - 4);
      *(_QWORD *)(v31 + 4464) = v32 - 1;
      v34 = get_dtype_size();
      v35 = a3;
      a3 = v33;
      sub_1D2710(a1, 7u, v34, v35, 0x3BEA45E214ADDC55LL, v33, 0);
      goto LABEL_10;
    }
    if ( v15 != 217 )
      return 0;
    v24 = *(_QWORD *)(a1 + 832);
    v25 = *(_QWORD *)(v24 + 4464);
    if ( !v25 )
      goto LABEL_32;
    v26 = *(int *)(*(_QWORD *)(v24 + 4456) + 4 * v25 - 4);
    *(_QWORD *)(v24 + 4464) = v25 - 1;
    v27 = v26;
    v28 = get_dtype_size();
    sub_1D2710(a1, 7u, v28, a3, 0x3BEA45E214ADDC55LL, v26, 0);
LABEL_18:
    sub_1D2C40(a1, 0, v8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL), v11, 0);
    v45 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
    v29 = get_dtype_size();
    sub_1D2710(a1, 0x19u, v29, v26, v11, v45, 0);
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
      sub_3E8330(a1, v27, v11, 1);
    v30 = get_dtype_size();
    sub_1D2710(a1, 0xCu, v30, v26, v11, a2, 0);
    goto LABEL_13;
  }
  if ( v15 == 7 )
    goto LABEL_10;
  if ( v15 == 8 )
  {
    v26 = a3;
    v27 = a3;
    goto LABEL_18;
  }
  v14 = a4;
  if ( v15 == 3 )
  {
LABEL_10:
    v16 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
    v17 = get_dtype_size();
    sub_1D2710(a1, 4u, v17, v16, 0x3BEA45E214ADDC55LL, 0, 0);
    v18 = *(_QWORD *)(a1 + 832);
    v19 = *(_QWORD *)(v18 + 4464);
    if ( v19 )
    {
      v20 = *(_DWORD *)(*(_QWORD *)(v18 + 4456) + 4 * v19 - 4);
      *(_QWORD *)(v18 + 4464) = v19 - 1;
      sub_1D2D10(a1, v8, a3, v14, a2, v11, v20);
      v21 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      v22 = get_dtype_size();
      sub_1D2710(a1, 4u, v22, 0, 0x3BEA45E214ADDC55LL, v21, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, 3, -1, 1);
LABEL_13:
      sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
      return 1;
    }
LABEL_32:
    sub_3E6800(a5);
  }
  return 0;
}

