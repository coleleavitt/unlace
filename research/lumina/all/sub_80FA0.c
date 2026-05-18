__int64 __fastcall sub_80FA0(__int64 *a1, __int64 a2, unsigned int a3)
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
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  _DWORD *v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-40h]

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
  if ( v13 )
  {
    v14 = v13 + 7;
    v15 = v13 + 8;
    v16 = *a1;
    --v13;
    if ( a1[2] >= v15 )
      goto LABEL_10;
  }
  else
  {
    v16 = *a1;
    v15 = 9;
    v14 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_10;
  }
  v29 = v14;
  v26 = sub_1987B0(a1, v16, v15, 1);
  v14 = v29;
  *a1 = v26;
  v16 = v26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_QWORD *)(*a1 + v13) = 0x68746170202F2F20LL;
  sub_171F20(a1, v9);
  v10 = sub_7DA10(a1, a2 + 24, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 6;
    v18 = v17 + 7;
    --v17;
  }
  else
  {
    v18 = 8;
    v19 = 7;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v28 = sub_1987B0(a1, v20, v18, 1);
    *a1 = v28;
    v20 = v28;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  v21 = (_DWORD *)(*a1 + v17);
  *v21 = 539963168;
  *(_DWORD *)((char *)v21 + 3) = 895773984;
  sub_171F20(a1, a3);
  v22 = a1[1];
  if ( v22 )
  {
    v23 = v22 + 1;
    v24 = a1[1];
    --v22;
  }
  else
  {
    v24 = 1;
    v23 = 2;
  }
  v25 = *a1;
  if ( a1[2] < v23 )
  {
    v27 = sub_1987B0(a1, v25, v23, 1);
    *a1 = v27;
    v25 = v27;
  }
  a1[1] = v23;
  *(_BYTE *)(v25 + v22) = 125;
  *(_BYTE *)(*a1 + v24) = 0;
  return v10;
}
