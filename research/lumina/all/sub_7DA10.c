__int64 __fastcall sub_7DA10(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax

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
  v11 = sub_1987B0(a1, v8, v6, 1);
  *a1 = v11;
  v8 = v11;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_171F20(a1, a3 + 1);
  v9 = sub_172010(a1, a2, 16, a3 + 1);
  if ( (_BYTE)v9 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      v13 = v12 + 7;
      v14 = v12 + 8;
      v15 = *a1;
      --v12;
      if ( a1[2] >= v14 )
        goto LABEL_9;
    }
    else
    {
      v15 = *a1;
      v14 = 9;
      v13 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_9;
    }
    v21 = sub_1987B0(a1, v15, v14, 1);
    *a1 = v21;
    v15 = v21;
LABEL_9:
    a1[1] = v14;
    *(_BYTE *)(v15 + v13) = 0;
    *(_QWORD *)(*a1 + v12) = 0x68736168202F2F20LL;
    sub_171F20(a1, a3);
    v16 = a1[1];
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = a1[1];
      v19 = *a1;
      --v16;
      if ( a1[2] >= v17 )
      {
LABEL_11:
        a1[1] = v17;
        *(_BYTE *)(v19 + v16) = 125;
        *(_BYTE *)(*a1 + v18) = 0;
        return v9;
      }
    }
    else
    {
      v19 = *a1;
      v18 = 1;
      v17 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v20 = sub_1987B0(a1, v19, v17, 1);
    *a1 = v20;
    v19 = v20;
    goto LABEL_11;
  }
  return v9;
}
