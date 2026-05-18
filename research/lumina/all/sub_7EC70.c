__int64 __fastcall sub_7EC70(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 10;
    v7 = v5 + 11;
    v8 = *a1;
    --v5;
    if ( a1[2] >= v7 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 12;
    v6 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_3;
  }
  v19 = sub_1987B0(a1, v8, v7, 1);
  *a1 = v19;
  v8 = v19;
LABEL_3:
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 0;
  qmemcpy((void *)(*a1 + v5), "LIST_PEERS ", 11);
  if ( a3 > 5 )
  {
    sub_171F20(a1, 1);
    result = sub_171FB0(a1, *(unsigned int *)(a2 + 12), 1);
    if ( !(_BYTE)result )
      return result;
    v10 = a1[1];
    if ( v10 )
    {
      v12 = v10 + 8;
      v11 = v10 + 9;
      --v10;
    }
    else
    {
      v11 = 10;
      v12 = 9;
    }
    v13 = *a1;
    if ( a1[2] < v11 )
    {
      v21 = sub_1987B0(a1, v13, v11, 1);
      *a1 = v21;
      v13 = v21;
    }
    a1[1] = v11;
    *(_BYTE *)(v13 + v12) = 0;
    v14 = *a1 + v10;
    *(_QWORD *)v14 = 0x67616C66202F2F20LL;
    *(_BYTE *)(v14 + 8) = 115;
  }
  sub_171F20(a1, 1);
  v15 = a1[1];
  if ( v15 )
  {
    v18 = v15 + 1;
    v17 = a1[1];
    v16 = *a1;
    --v15;
    if ( a1[2] >= v18 )
      goto LABEL_12;
LABEL_16:
    v20 = sub_1987B0(a1, v16, v18, 1);
    *a1 = v20;
    v16 = v20;
    goto LABEL_12;
  }
  v16 = *a1;
  v17 = 1;
  v18 = 2;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_16;
LABEL_12:
  a1[1] = v18;
  *(_BYTE *)(v16 + v15) = 59;
  *(_BYTE *)(*a1 + v17) = 0;
  return 1;
}
