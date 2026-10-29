__int64 __fastcall sub_837C0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  _DWORD *v22; // r13
  __int64 v23; // rbp
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_171FD0(a1, *a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( v13 )
  {
    v14 = v13 + 8;
    v15 = v13 + 9;
    v16 = *a1;
    --v13;
    if ( a1[2] >= v15 )
      goto LABEL_10;
  }
  else
  {
    v16 = *a1;
    v15 = 10;
    v14 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
  }
  v30 = v14;
  v27 = sub_1987B0(a1, v16, v15, 1);
  v14 = v30;
  *a1 = v27;
  v16 = v27;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_QWORD *)v17 = 0x72617473202F2F20LL;
  *(_BYTE *)(v17 + 8) = 116;
  sub_171F20(a1, v9);
  v10 = sub_171FD0(a1, a2[1], v9);
  if ( !(_BYTE)v10 )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 6;
    v19 = v18 + 7;
    --v18;
  }
  else
  {
    v19 = 8;
    v20 = 7;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v29 = sub_1987B0(a1, v21, v19, 1);
    *a1 = v29;
    v21 = v29;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  v22 = (_DWORD *)(*a1 + v18);
  *v22 = 539963168;
  *(_DWORD *)((char *)v22 + 3) = 1684956448;
  sub_171F20(a1, a3);
  v23 = a1[1];
  if ( v23 )
  {
    v24 = v23 + 1;
    v25 = a1[1];
    --v23;
  }
  else
  {
    v25 = 1;
    v24 = 2;
  }
  v26 = *a1;
  if ( a1[2] < v24 )
  {
    v28 = sub_1987B0(a1, v26, v24, 1);
    *a1 = v28;
    v26 = v28;
  }
  a1[1] = v24;
  *(_BYTE *)(v26 + v23) = 125;
  *(_BYTE *)(*a1 + v25) = 0;
  return v10;
}
