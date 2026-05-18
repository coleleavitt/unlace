__int64 __fastcall sub_87360(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r13d
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rsi
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // r12
  unsigned __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v51; // [rsp+10h] [rbp-48h]
  __int64 v52; // [rsp+10h] [rbp-48h]
  __int64 v53; // [rsp+10h] [rbp-48h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  unsigned __int64 v56; // [rsp+18h] [rbp-40h]

  sub_171F20(a1, a3);
  v4 = a1[1];
  if ( !v4 )
  {
    v7 = *a1;
    v6 = 1;
    v5 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
LABEL_7:
    v12 = sub_1987B0(a1, v7, v5, 1);
    *a1 = v12;
    v7 = v12;
    goto LABEL_3;
  }
  v5 = v4 + 1;
  v6 = a1[1];
  v7 = *a1;
  --v4;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v7 + v4) = 123;
  *(_BYTE *)(*a1 + v6) = 0;
  v8 = a3 + 1;
  sub_171F20(a1, a3 + 1);
  v9 = a2[1];
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v9, v8) )
    return 0;
  v13 = 0;
  v14 = 8LL * (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    do
    {
      v18 = a1[1];
      if ( v18 )
      {
        v15 = v18 + 1;
        v16 = a1[1];
        v17 = *a1;
        --v18;
        if ( a1[2] < v15 )
          goto LABEL_16;
      }
      else
      {
        v17 = *a1;
        v16 = 1;
        v15 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_16:
          v55 = v16;
          v51 = v15;
          v19 = sub_1987B0(a1, v17, v15, 1);
          v16 = v55;
          v15 = v51;
          *a1 = v19;
          v17 = v19;
        }
      }
      a1[1] = v15;
      *(_BYTE *)(v17 + v18) = 32;
      *(_BYTE *)(*a1 + v16) = 0;
      if ( !(unsigned __int8)sub_171FD0(a1, *(_QWORD *)(*a2 + v13), v8) )
        return 0;
      v13 += 8;
    }
    while ( v13 != v14 );
  }
  v20 = a1[1];
  if ( v20 )
  {
    v22 = v20 + 13;
    v21 = v20 + 14;
    --v20;
  }
  else
  {
    v21 = 15;
    v22 = 14;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v53 = v22;
    v31 = sub_1987B0(a1, v23, v21, 1);
    v22 = v53;
    *a1 = v31;
    v23 = v31;
  }
  a1[1] = v21;
  *(_BYTE *)(v23 + v22) = 0;
  qmemcpy((void *)(*a1 + v20), " // timestamps", 14);
  sub_171F20(a1, v8);
  v24 = a2[4];
  if ( v24 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v24, v8) )
    return 0;
  if ( (_DWORD)v24 )
  {
    v25 = 0;
    v52 = 24LL * (unsigned int)v24;
    do
    {
      v29 = a1[1];
      if ( v29 )
      {
        v26 = v29 + 1;
        v27 = a1[1];
        v28 = *a1;
        --v29;
        if ( a1[2] < v26 )
          goto LABEL_30;
      }
      else
      {
        v28 = *a1;
        v27 = 1;
        v26 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_30:
          v56 = v26;
          v30 = sub_1987B0(a1, v28, v26, 1);
          v26 = v56;
          *a1 = v30;
          v28 = v30;
        }
      }
      a1[1] = v26;
      *(_BYTE *)(v28 + v29) = 32;
      *(_BYTE *)(*a1 + v27) = 0;
      if ( !(unsigned __int8)sub_1721B0(a1, v25 + a2[3], v8) )
        return 0;
      v25 += 24;
    }
    while ( v25 != v52 );
  }
  v32 = a1[1];
  if ( v32 )
  {
    v34 = v32 + 10;
    v33 = v32 + 11;
    --v32;
  }
  else
  {
    v33 = 12;
    v34 = 11;
  }
  v35 = *a1;
  if ( a1[2] < v33 )
  {
    v54 = v34;
    v39 = sub_1987B0(a1, v35, v33, 1);
    v34 = v54;
    *a1 = v39;
    v35 = v39;
  }
  a1[1] = v33;
  *(_BYTE *)(v35 + v34) = 0;
  qmemcpy((void *)(*a1 + v32), " // strings", 11);
  sub_171F20(a1, v8);
  v36 = a2[7];
  if ( v36 > 0x7FFFFFFF )
    return 0;
  v10 = sub_171FB0(a1, (unsigned int)v36, v8);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (_DWORD)v36 )
  {
    v37 = 56LL * (unsigned int)v36;
    v38 = 0;
    while ( (unsigned __int8)sub_86E20(a1, (unsigned int *)(v38 + a2[6]), v8) )
    {
      v38 += 56;
      if ( v37 == v38 )
        goto LABEL_44;
    }
    return 0;
  }
LABEL_44:
  v40 = a1[1];
  if ( v40 )
  {
    v42 = v40 + 9;
    v41 = v40 + 10;
    --v40;
  }
  else
  {
    v41 = 11;
    v42 = 10;
  }
  v43 = *a1;
  if ( a1[2] < v41 )
  {
    v49 = sub_1987B0(a1, v43, v41, 1);
    *a1 = v49;
    v43 = v49;
  }
  a1[1] = v41;
  *(_BYTE *)(v43 + v42) = 0;
  qmemcpy((void *)(*a1 + v40), " // events", 10);
  sub_171F20(a1, a3);
  v44 = a1[1];
  if ( v44 )
  {
    v45 = v44 + 1;
    v46 = a1[1];
    --v44;
  }
  else
  {
    v46 = 1;
    v45 = 2;
  }
  v47 = *a1;
  if ( a1[2] < v45 )
  {
    v48 = sub_1987B0(a1, v47, v45, 1);
    *a1 = v48;
    v47 = v48;
  }
  a1[1] = v45;
  *(_BYTE *)(v47 + v44) = 125;
  *(_BYTE *)(*a1 + v46) = 0;
  return v10;
}
