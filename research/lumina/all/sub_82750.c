__int64 __fastcall sub_82750(__int64 *a1, __int64 a2, unsigned int a3)
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
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r15
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_1721B0(a1, a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 7;
    v14 = 6;
    if ( (unsigned __int64)a1[2] >= 7 )
      goto LABEL_10;
LABEL_26:
    v35 = v14;
    v31 = sub_1987B0(a1, v16, v15, 1);
    v14 = v35;
    *a1 = v31;
    v16 = v31;
    goto LABEL_10;
  }
  v14 = v13 + 5;
  v15 = v13 + 6;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_DWORD *)v17 = 539963168;
  *(_WORD *)(v17 + 4) = 25705;
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_1721B0(a1, a2 + 24, v9) )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 7;
    v19 = v18 + 8;
    --v18;
  }
  else
  {
    v19 = 9;
    v20 = 8;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v36 = v20;
    v32 = sub_1987B0(a1, v21, v19, 1);
    v20 = v36;
    *a1 = v32;
    v21 = v32;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  *(_QWORD *)(*a1 + v18) = 0x656D616E202F2F20LL;
  sub_171F20(a1, v9);
  v10 = sub_1721B0(a1, a2 + 48, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v22 = a1[1];
  if ( v22 )
  {
    v23 = v22 + 8;
    v24 = v22 + 9;
    --v22;
  }
  else
  {
    v24 = 10;
    v23 = 9;
  }
  v25 = *a1;
  if ( a1[2] < v24 )
  {
    v33 = sub_1987B0(a1, v25, v24, 1);
    *a1 = v33;
    v25 = v33;
  }
  a1[1] = v24;
  *(_BYTE *)(v25 + v23) = 0;
  v26 = *a1 + v22;
  *(_QWORD *)v26 = 0x69616D65202F2F20LL;
  *(_BYTE *)(v26 + 8) = 108;
  sub_171F20(a1, a3);
  v27 = a1[1];
  if ( v27 )
  {
    v28 = v27 + 1;
    v29 = a1[1];
    --v27;
  }
  else
  {
    v29 = 1;
    v28 = 2;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v34 = sub_1987B0(a1, v30, v28, 1);
    *a1 = v34;
    v30 = v34;
  }
  a1[1] = v28;
  *(_BYTE *)(v30 + v27) = 125;
  *(_BYTE *)(*a1 + v29) = 0;
  return v10;
}
