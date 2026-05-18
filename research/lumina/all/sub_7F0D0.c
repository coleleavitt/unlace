__int64 __fastcall sub_7F0D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 8;
    v5 = v3 + 9;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 10;
    v4 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_3;
  }
  v9 = sub_1987B0(a1, v6, v5, 1);
  *a1 = v9;
  v6 = v9;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v7 = *a1 + v3;
  *(_QWORD *)v7 = 0x4C4941465F435052LL;
  *(_BYTE *)(v7 + 8) = 32;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 12), 1) )
    return 0;
  v10 = a1[1];
  if ( v10 )
  {
    v11 = v10 + 9;
    v12 = v10 + 10;
    v13 = *a1;
    --v10;
    if ( a1[2] >= v12 )
      goto LABEL_9;
  }
  else
  {
    v13 = *a1;
    v12 = 11;
    v11 = 10;
    if ( (unsigned __int64)a1[2] >= 0xB )
      goto LABEL_9;
  }
  v24 = sub_1987B0(a1, v13, v12, 1);
  *a1 = v24;
  v13 = v24;
LABEL_9:
  a1[1] = v12;
  *(_BYTE *)(v13 + v11) = 0;
  qmemcpy((void *)(*a1 + v10), " // result", 10);
  sub_171F20(a1, 1);
  v14 = sub_1721B0(a1, a2 + 16, 1);
  if ( !(_BYTE)v14 )
    return 0;
  v15 = a1[1];
  if ( v15 )
  {
    v17 = v15 + 8;
    v16 = v15 + 9;
    --v15;
  }
  else
  {
    v16 = 10;
    v17 = 9;
  }
  v18 = *a1;
  if ( a1[2] < v16 )
  {
    v26 = sub_1987B0(a1, v18, v16, 1);
    *a1 = v26;
    v18 = v26;
  }
  a1[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  v19 = *a1 + v15;
  *(_QWORD *)v19 = 0x6F727265202F2F20LL;
  *(_BYTE *)(v19 + 8) = 114;
  sub_171F20(a1, 1);
  v20 = a1[1];
  if ( v20 )
  {
    v21 = v20 + 1;
    v22 = a1[1];
    --v20;
  }
  else
  {
    v22 = 1;
    v21 = 2;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v25 = sub_1987B0(a1, v23, v21, 1);
    *a1 = v25;
    v23 = v25;
  }
  a1[1] = v21;
  *(_BYTE *)(v23 + v20) = 59;
  *(_BYTE *)(*a1 + v22) = 0;
  return v14;
}
