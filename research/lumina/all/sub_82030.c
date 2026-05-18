__int64 __fastcall sub_82030(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 16;
    v4 = 15;
    if ( (unsigned __int64)a1[2] >= 0x10 )
      goto LABEL_3;
LABEL_6:
    v9 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v9;
    v6 = v9;
    goto LABEL_3;
  }
  v4 = v3 + 14;
  v5 = v3 + 15;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_6;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  qmemcpy((void *)(*a1 + v3), "DUMP_MD_RESULT ", 15);
  sub_171F20(a1, 1);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 > 0x7FFFFFFF )
    return 0;
  v10 = sub_171FB0(a1, (unsigned int)v7, 1);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (_DWORD)v7 )
  {
    v11 = 3LL * (unsigned int)v7;
    v12 = 0;
    v13 = 32 * v11;
    while ( (unsigned __int8)sub_81E80(a1, v12 + *(_QWORD *)(a2 + 16), 1u) )
    {
      v12 += 96;
      if ( v12 == v13 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  v14 = a1[1];
  if ( v14 )
  {
    v16 = v14 + 11;
    v15 = v14 + 12;
    --v14;
  }
  else
  {
    v15 = 13;
    v16 = 12;
  }
  v17 = *a1;
  if ( a1[2] < v15 )
  {
    v23 = sub_1987B0(a1, v17, v15, 1);
    *a1 = v23;
    v17 = v23;
  }
  a1[1] = v15;
  *(_BYTE *)(v17 + v16) = 0;
  qmemcpy((void *)(*a1 + v14), " // contents", 12);
  sub_171F20(a1, 1);
  v18 = a1[1];
  if ( v18 )
  {
    v19 = v18 + 1;
    v20 = a1[1];
    --v18;
  }
  else
  {
    v20 = 1;
    v19 = 2;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v22 = sub_1987B0(a1, v21, v19, 1);
    *a1 = v22;
    v21 = v22;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v18) = 59;
  *(_BYTE *)(*a1 + v20) = 0;
  return v10;
}
