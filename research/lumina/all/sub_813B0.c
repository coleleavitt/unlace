__int64 __fastcall sub_813B0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r12
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 16;
    v4 = 15;
    if ( (unsigned __int64)a1[2] >= 0x10 )
      goto LABEL_3;
LABEL_7:
    v10 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v10;
    v6 = v10;
    goto LABEL_3;
  }
  v4 = v3 + 14;
  v5 = v3 + 15;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  qmemcpy((void *)(*a1 + v3), "PULL_MD_RESULT ", 15);
  sub_171F20(a1, 1);
  v7 = a2[3];
  if ( v7 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v7, 1) )
    return 0;
  v11 = 0;
  v12 = 4LL * (unsigned int)v7;
  if ( (_DWORD)v7 )
  {
    do
    {
      v16 = a1[1];
      if ( v16 )
      {
        v13 = v16 + 1;
        v14 = a1[1];
        v15 = *a1;
        --v16;
        if ( a1[2] < v13 )
          goto LABEL_16;
      }
      else
      {
        v15 = *a1;
        v14 = 1;
        v13 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_16:
          v36 = v14;
          v17 = sub_1987B0(a1, v15, v13, 1);
          v14 = v36;
          *a1 = v17;
          v15 = v17;
        }
      }
      a1[1] = v13;
      *(_BYTE *)(v15 + v16) = 32;
      *(_BYTE *)(*a1 + v14) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2[2] + v11), 1) )
        return 0;
      v11 += 4;
    }
    while ( v11 != v12 );
  }
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 8;
    v19 = v18 + 9;
    --v18;
  }
  else
  {
    v19 = 10;
    v20 = 9;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v25 = sub_1987B0(a1, v21, v19, 1);
    *a1 = v25;
    v21 = v25;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  v22 = *a1 + v18;
  *(_QWORD *)v22 = 0x65646F63202F2F20LL;
  *(_BYTE *)(v22 + 8) = 115;
  sub_171F20(a1, 1);
  v23 = a2[6];
  if ( v23 > 0x7FFFFFFF )
    return 0;
  v8 = sub_171FB0(a1, (unsigned int)v23, 1);
  if ( !(_BYTE)v8 )
    return 0;
  v24 = 0;
  if ( (_DWORD)v23 )
  {
    while ( (unsigned __int8)sub_81200(a1, v24 + a2[5], 1u) )
    {
      v24 += 64;
      if ( (unsigned __int64)(unsigned int)v23 << 6 == v24 )
        goto LABEL_29;
    }
    return 0;
  }
LABEL_29:
  v26 = a1[1];
  if ( v26 )
  {
    v28 = v26 + 10;
    v27 = v26 + 11;
    --v26;
  }
  else
  {
    v27 = 12;
    v28 = 11;
  }
  v29 = *a1;
  if ( a1[2] < v27 )
  {
    v35 = sub_1987B0(a1, v29, v27, 1);
    *a1 = v35;
    v29 = v35;
  }
  a1[1] = v27;
  *(_BYTE *)(v29 + v28) = 0;
  qmemcpy((void *)(*a1 + v26), " // results", 11);
  sub_171F20(a1, 1);
  v30 = a1[1];
  if ( v30 )
  {
    v31 = v30 + 1;
    v32 = a1[1];
    --v30;
  }
  else
  {
    v32 = 1;
    v31 = 2;
  }
  v33 = *a1;
  if ( a1[2] < v31 )
  {
    v34 = sub_1987B0(a1, v33, v31, 1);
    *a1 = v34;
    v33 = v34;
  }
  a1[1] = v31;
  *(_BYTE *)(v33 + v30) = 59;
  *(_BYTE *)(*a1 + v32) = 0;
  return v8;
}
