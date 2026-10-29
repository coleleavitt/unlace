__int64 __fastcall sub_3F1490(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // r14d
  int v15; // r13d
  __int64 v16; // r12
  signed int v17; // ebx
  unsigned __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  int *v27; // rdi
  int v28; // r14d
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  int v31; // edx
  int v33; // eax
  int v34; // [rsp+0h] [rbp-48h]
  char v35; // [rsp+6h] [rbp-42h]
  bool v36; // [rsp+7h] [rbp-41h]

  v14 = a5;
  v15 = a3;
  v16 = (__int64)a4;
  v17 = a2;
  if ( !(_DWORD)a5 )
  {
    if ( ((unsigned __int64)(a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCCEFu, *(double *)a7.m128_u64);
LABEL_33:
      BUG();
    }
    v18 = *(_WORD *)(a1 + 48);
    if ( v18 > 0x337u )
    {
      if ( (unsigned __int16)(v18 - 826) <= 1u )
        goto LABEL_5;
      goto LABEL_31;
    }
    if ( v18 <= 0x335u )
    {
LABEL_31:
      if ( !under_debugger )
        sub_37E160(0xCCF0u, *(double *)a7.m128_u64);
      goto LABEL_33;
    }
LABEL_20:
    v35 = 1;
    v19 = *(_QWORD *)(a1 + 832);
    goto LABEL_7;
  }
  sub_3EA750(a1, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6);
  v33 = *(unsigned __int16 *)(a1 + 890);
  if ( v14 == 2 )
  {
    if ( ((2 * v33) & 0x1FFFE) != v16 )
      return 0;
    v16 = (unsigned __int16)v33;
    goto LABEL_5;
  }
  v16 = (unsigned __int16)v33;
  if ( v14 == 1 )
    goto LABEL_20;
LABEL_5:
  v19 = *(_QWORD *)(a1 + 832);
  v35 = 0;
  if ( **(_DWORD **)(v19 + 696) == (_DWORD)a2 )
  {
    sub_1D1F50(a1, 3u, *(_DWORD *)(v19 + 80), 0, 0x3BEA45E214ADDC55LL, (int)a2, 0);
    v19 = *(_QWORD *)(a1 + 832);
  }
LABEL_7:
  v20 = *(_QWORD *)(v19 + 760);
  if ( !v20
    || (v21 = *(int *)(*(_QWORD *)(v19 + 752) + 4 * v20 - 4),
        *(_QWORD *)(v19 + 760) = v20 - 1,
        sub_3EAB70(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v15, 0x3BEA45E214ADDC55LL, v21, 0),
        v22 = *(_QWORD *)(a1 + 832),
        (v23 = *(_QWORD *)(v22 + 760)) == 0) )
  {
    sub_3E5460(*(double *)a7.m128_u64);
  }
  v24 = *(int *)(*(_QWORD *)(v22 + 752) + 4 * v23 - 4);
  *(_QWORD *)(v22 + 760) = v23 - 1;
  sub_3EAB70(a1, 3u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v16, 0x3BEA45E214ADDC55LL, v24, 1);
  v25 = v16;
  v34 = v16;
  v27 = *(int **)(a1 + 832);
  v36 = v14 == 0;
  v28 = 2;
  v29 = v25;
  while ( 1 )
  {
    v30 = v27[16];
    if ( v35 )
    {
      sub_3EAB70(a1, 2u, v34, v30, v21, v17, v27[21]);
      sub_3EE280(a1, v29, v17);
    }
    else
    {
      sub_3EAB70(a1, 1u, v34, v17, v30, v21, v27[21]);
    }
    sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v21, v24, v21, 0);
    v27 = *(int **)(a1 + 832);
    if ( v27[120] == v17 )
      break;
    v31 = v27[20];
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 800) + 145LL) && v36 )
    {
      v17 -= v31;
      if ( v28 == 1 )
        break;
    }
    else
    {
      v17 += v31;
      if ( v28 == 1 )
        break;
    }
    v28 = 1;
  }
  sub_3E8540((__int64)v27, v21);
  sub_3E8540(*(_QWORD *)(a1 + 832), v24);
  return 1;
}

