__int64 __fastcall sub_3ECA40(__int64 a1, char a2, char a3, unsigned __int8 a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // r13
  char v9; // dl
  _DWORD *v10; // rdi
  int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(_DWORD *, unsigned int); // rdx
  __int64 v15; // r14
  char v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r12
  int v19; // r13d
  int dtype_size; // eax
  unsigned int v21; // esi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbp
  int v25; // eax
  int v26; // eax
  __int64 v27; // r12
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v33; // rax
  __int64 v34; // r12
  int v35; // eax
  int v36; // eax
  __int64 (__fastcall *v37)(_DWORD *, unsigned int); // rax
  __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v7 = 1;
  v9 = *(_BYTE *)(a1 + 65);
  v10 = *(_DWORD **)(a1 + 832);
  v11 = v10[118];
  if ( v9 == 11 )
  {
    v9 = *(_BYTE *)(a1 + 105);
    v7 = 2;
    v11 += 4 * *(unsigned __int16 *)(a1 + 70);
    v5 = 1;
  }
  if ( v9 != 1 || (v12 = a1 + 40 * v7, (*(_BYTE *)(v12 + 65) & 0xFB) != 1) )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC91Fu, a5);
    BUG();
  }
  v13 = *(unsigned __int16 *)(a1 + 40 * v5 + 70);
  v14 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v10 + 168LL);
  if ( v14 == sub_3E59C0 )
  {
    v15 = (int)sub_3E59C0(v10, v13);
    if ( v16 == 1 )
    {
      LODWORD(v17) = *(unsigned __int16 *)(v12 + 70);
LABEL_8:
      v18 = (int)sub_3E59C0(v10, v17);
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  v36 = v14(v10, v13);
  v10 = *(_DWORD **)(a1 + 832);
  v15 = v36;
  if ( *(_BYTE *)(v12 + 65) != 1 )
  {
LABEL_13:
    v33 = *((_QWORD *)v10 + 558);
    if ( !v33 )
      sub_3E6800(a5);
    v18 = *(int *)(*((_QWORD *)v10 + 557) + 4 * v33 - 4);
    *((_QWORD *)v10 + 558) = v33 - 1;
    sub_3E9CF0(a1, *(_QWORD *)(a1 + 40 * v7 + 72), (unsigned int)a2, v18);
    goto LABEL_9;
  }
  v17 = *(unsigned __int16 *)(v12 + 70);
  v37 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v10 + 168LL);
  if ( v37 == sub_3E59C0 )
    goto LABEL_8;
  v18 = (int)v37(v10, v17);
LABEL_9:
  v42 = v11;
  v19 = -a4;
  v39 = v11 + 1;
  dtype_size = get_dtype_size();
  if ( a3 )
  {
    sub_1D2710(a1, 0x28u, dtype_size, v15, v18, v11, v19);
    v21 = 38;
  }
  else
  {
    sub_1D2710(a1, 0x23u, dtype_size, v15, v18, v11, v19);
    v21 = 36;
  }
  v22 = get_dtype_size();
  sub_1D2710(a1, v21, v22, v15, v18, v39, v19);
  v23 = v11 + 2;
  v24 = v11 + 3;
  v41 = v23;
  v25 = get_dtype_size();
  sub_1D2710(a1, 0x21u, v25, v15, v18, v41, v19);
  if ( a4 )
  {
    v26 = get_dtype_size();
    sub_1D2710(a1, 0x1Fu, v26, v15, v15, v24, -1);
    v27 = *(int *)(*(_QWORD *)(a1 + 832) + 496LL);
    v28 = get_dtype_size();
    sub_1D2710(a1, 4u, v28, v42, 0x3BEA45E214ADDC55LL, v27, 0);
    LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 496LL);
    v29 = get_dtype_size();
    sub_1D2710(a1, 4u, v29, v39, 0x3BEA45E214ADDC55LL, (int)v27 + 1, 0);
    LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 496LL);
    v30 = get_dtype_size();
    sub_1D2710(a1, 4u, v30, v41, 0x3BEA45E214ADDC55LL, (int)v27 + 2, 0);
    LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 496LL);
    v31 = get_dtype_size();
    return sub_1D2710(a1, 4u, v31, v24, 0x3BEA45E214ADDC55LL, (int)v27 + 3, 0);
  }
  else
  {
    v34 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
    v35 = get_dtype_size();
    return sub_1D2710(a1, 4u, v35, v34, 0x3BEA45E214ADDC55LL, v24, 0);
  }
}

