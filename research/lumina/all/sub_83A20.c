__int64 __fastcall sub_83A20(__int64 *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  sub_171F20(a1, a3);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v12 = sub_1987B0(a1, v8, v6, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  v9 = a3 + 1;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_171F20(a1, a3 + 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 14;
    v14 = 13;
    if ( (unsigned __int64)a1[2] >= 0xE )
      goto LABEL_10;
LABEL_26:
    v33 = v14;
    v29 = sub_1987B0(a1, v16, v15, 1);
    v14 = v33;
    *a1 = v29;
    v16 = v29;
    goto LABEL_10;
  }
  v14 = v13 + 12;
  v15 = v13 + 13;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  qmemcpy((void *)(*a1 + v13), " // packet_in", 13);
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FB0(a1, a2[1], v9) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 13;
    v18 = v17 + 14;
    --v17;
  }
  else
  {
    v18 = 15;
    v19 = 14;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v34 = v19;
    v30 = sub_1987B0(a1, v20, v18, 1);
    v19 = v34;
    *a1 = v30;
    v20 = v30;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // packet_out", 14);
  sub_171F20(a1, v9);
  v10 = sub_837C0(a1, (_QWORD *)a2 + 1, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 9;
    v23 = v21 + 10;
    --v21;
  }
  else
  {
    v23 = 11;
    v22 = 10;
  }
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v31 = sub_1987B0(a1, v24, v23, 1);
    *a1 = v31;
    v24 = v31;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 0;
  qmemcpy((void *)(*a1 + v21), " // period", 10);
  sub_171F20(a1, a3);
  v25 = a1[1];
  if ( v25 )
  {
    v26 = v25 + 1;
    v27 = a1[1];
    --v25;
  }
  else
  {
    v27 = 1;
    v26 = 2;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v32 = sub_1987B0(a1, v28, v26, 1);
    *a1 = v32;
    v28 = v32;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v25) = 125;
  *(_BYTE *)(*a1 + v27) = 0;
  return v10;
}
