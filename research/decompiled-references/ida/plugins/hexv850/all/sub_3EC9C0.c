void __fastcall sub_3EC9C0(__int64 a1, int *a2, int a3, int a4, int a5, double a6)
{
  int v8; // ebx
  __int16 v9; // cx
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r13d
  int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r15
  int v19; // edx
  unsigned int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r15d
  int v27; // ecx
  unsigned int v29; // [rsp+24h] [rbp-54h]
  unsigned int v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  int v32; // [rsp+38h] [rbp-40h]

  v8 = a3;
  v9 = *(_WORD *)(a1 + 48);
  if ( v9 == 48 )
  {
    v11 = *(_QWORD *)(a1 + 832);
    v29 = 18;
    v12 = 16;
    if ( **(_DWORD **)(v11 + 528) != a3 )
      goto LABEL_7;
    goto LABEL_15;
  }
  v10 = v9 - 88;
  if ( v10 > 0x17u )
    goto LABEL_24;
  if ( ((1LL << v10) & 0x400005) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 832);
    v29 = 18;
    v12 = 16;
    v13 = **(int **)(v11 + 528);
    if ( a3 != (_DWORD)v13 )
      goto LABEL_6;
LABEL_15:
    v17 = a3;
    sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, a3, 3, 0);
    goto LABEL_16;
  }
  if ( ((1LL << v10) & 0x80000A) == 0 )
  {
LABEL_24:
    if ( !under_debugger )
      sub_37CFE0(0xCEF2u, a6);
    BUG();
  }
  v11 = *(_QWORD *)(a1 + 832);
  v29 = 17;
  v12 = 15;
  v13 = **(int **)(v11 + 528);
  if ( a3 == (_DWORD)v13 )
  {
    v17 = a3;
    sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a3, a3, 3, 0);
LABEL_10:
    v18 = a4;
    v19 = *(unsigned __int16 *)(a1 + 842);
    v20 = 15;
    if ( *(_WORD *)(a1 + 48) != 48 )
      goto LABEL_11;
LABEL_19:
    sub_3E8420(a1, v20, v19, v18, v17, v18, 0);
    goto LABEL_13;
  }
LABEL_6:
  if ( v10 <= 1u )
  {
LABEL_7:
    v14 = *(_QWORD *)(v11 + 584);
    if ( !v14 )
      goto LABEL_26;
    v15 = *(_DWORD *)(*(_QWORD *)(v11 + 576) + 4 * v14 - 4);
    v16 = v8;
    *(_QWORD *)(v11 + 584) = v14 - 1;
    v8 = v15;
    sub_3EC660(a1, 2, *(unsigned __int16 *)(a1 + 842), v16, v15, v12 == 16, a6);
    v13 = **(int **)(*(_QWORD *)(a1 + 832) + 528LL);
  }
  v17 = v8;
  sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v8, v13, 3, 0);
  if ( v12 != 16 )
    goto LABEL_10;
LABEL_16:
  v21 = *(_QWORD *)(a1 + 832);
  v22 = *(_QWORD *)(v21 + 584);
  if ( !v22
    || (v23 = *(_DWORD *)(*(_QWORD *)(v21 + 576) + 4 * v22 - 4),
        *(_QWORD *)(v21 + 584) = v22 - 1,
        v24 = *(_QWORD *)(a1 + 832),
        (v25 = *(_QWORD *)(v24 + 584)) == 0) )
  {
LABEL_26:
    sub_3E4140(a6);
  }
  v26 = *(_DWORD *)(*(_QWORD *)(v24 + 576) + 4 * v25 - 4);
  *(_QWORD *)(v24 + 584) = v25 - 1;
  sub_3EC020(a1, -1, 0, v26, *(unsigned __int16 *)(a1 + 842));
  v31 = v26;
  sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v17, v26, v23, 0);
  v32 = v26;
  v27 = v26;
  v18 = a4;
  sub_3EC020(a1, 1LL << (8 * (unsigned __int8)*(_WORD *)(a1 + 842) - 1), 1, v27, *(unsigned __int16 *)(a1 + 842));
  sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a4, v31, v31, 0);
  sub_3E8420(a1, 0x14u, 1, v23, v31, v23, 0);
  sub_3E8420(a1, 0x13u, 1, 3, v23, 3, 0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v23);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v32);
  v19 = *(unsigned __int16 *)(a1 + 842);
  v20 = 16;
  if ( *(_WORD *)(a1 + 48) == 48 )
    goto LABEL_19;
LABEL_11:
  if ( a4 == a5 )
  {
    sub_3E8420(a1, v29, v19, v18, v17, a5, 0);
    sub_3E8420(a1, 0x3Du, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 1, 0);
    sub_3E8420(a1, 0x3Du, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 2, 0);
    a4 = -1;
  }
  else
  {
    v30 = v20;
    sub_3E8420(a1, v29, v19, v18, v17, a5, 0);
    sub_3E8420(a1, v30, *(unsigned __int16 *)(a1 + 842), v18, v17, v18, 0);
  }
LABEL_13:
  *a2 = a4;
  sub_3E62F0(*(_QWORD *)(a1 + 832), v8);
}

