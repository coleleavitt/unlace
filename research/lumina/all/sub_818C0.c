__int64 __fastcall sub_818C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  _DWORD *v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbp
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rsi
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // r15
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // rax
  unsigned __int64 v56; // [rsp+0h] [rbp-48h]
  __int64 v57; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 7;
    v5 = v3 + 8;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 9;
    v4 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_3;
  }
  v9 = sub_1987B0(a1, v6, v5, 1);
  *a1 = v9;
  v6 = v9;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  *(_QWORD *)(*a1 + v3) = 0x20444D5F48535550LL;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 12), 1) )
    return 0;
  v10 = a1[1];
  if ( v10 )
  {
    v11 = v10 + 8;
    v12 = v10 + 9;
    v13 = *a1;
    --v10;
    if ( a1[2] >= v12 )
      goto LABEL_10;
  }
  else
  {
    v13 = *a1;
    v12 = 10;
    v11 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
  }
  v33 = sub_1987B0(a1, v13, v12, 1);
  *a1 = v33;
  v13 = v33;
LABEL_10:
  a1[1] = v12;
  *(_BYTE *)(v13 + v11) = 0;
  v14 = *a1 + v10;
  *(_QWORD *)v14 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v14 + 8) = 115;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_1721B0(a1, a2 + 16, 1) )
    return 0;
  v15 = a1[1];
  if ( v15 )
  {
    v17 = v15 + 6;
    v16 = v15 + 7;
    --v15;
  }
  else
  {
    v16 = 8;
    v17 = 7;
  }
  v18 = *a1;
  if ( a1[2] < v16 )
  {
    v34 = sub_1987B0(a1, v18, v16, 1);
    *a1 = v34;
    v18 = v34;
  }
  a1[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  v19 = (_DWORD *)(*a1 + v15);
  *v19 = 539963168;
  *(_DWORD *)((char *)v19 + 3) = 1650747680;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_80FA0(a1, a2 + 40, 1u) )
    return 0;
  v20 = a1[1];
  if ( v20 )
  {
    v21 = v20 + 8;
    v22 = v20 + 9;
    --v20;
  }
  else
  {
    v22 = 10;
    v21 = 9;
  }
  v23 = *a1;
  if ( a1[2] < v22 )
  {
    v35 = sub_1987B0(a1, v23, v22, 1);
    *a1 = v35;
    v23 = v35;
  }
  a1[1] = v22;
  *(_BYTE *)(v23 + v21) = 0;
  v24 = *a1 + v20;
  *(_QWORD *)v24 = 0x75706E69202F2F20LL;
  *(_BYTE *)(v24 + 8) = 116;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_1721B0(a1, a2 + 80, 1) )
    return 0;
  v25 = a1[1];
  if ( v25 )
  {
    v27 = v25 + 11;
    v26 = v25 + 12;
    --v25;
  }
  else
  {
    v26 = 13;
    v27 = 12;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v36 = sub_1987B0(a1, v28, v26, 1);
    *a1 = v36;
    v28 = v36;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v27) = 0;
  qmemcpy((void *)(*a1 + v25), " // hostname", 12);
  sub_171F20(a1, 1);
  v29 = *(_QWORD *)(a2 + 112);
  if ( v29 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v29, 1) )
    return 0;
  if ( (_DWORD)v29 )
  {
    v30 = 11LL * (unsigned int)v29;
    v31 = 0;
    v32 = 8 * v30;
    while ( (unsigned __int8)sub_81700(a1, v31 + *(_QWORD *)(a2 + 104), 1u) )
    {
      v31 += 88;
      if ( v31 == v32 )
        goto LABEL_37;
    }
    return 0;
  }
LABEL_37:
  v37 = a1[1];
  if ( v37 )
  {
    v39 = v37 + 11;
    v38 = v37 + 12;
    --v37;
  }
  else
  {
    v38 = 13;
    v39 = 12;
  }
  v40 = *a1;
  if ( a1[2] < v38 )
  {
    v49 = sub_1987B0(a1, v40, v38, 1);
    *a1 = v49;
    v40 = v49;
  }
  a1[1] = v38;
  *(_BYTE *)(v40 + v39) = 0;
  qmemcpy((void *)(*a1 + v37), " // contents", 12);
  sub_171F20(a1, 1);
  v41 = *(_QWORD *)(a2 + 136);
  if ( v41 > 0x7FFFFFFF )
    return 0;
  v7 = sub_171FB0(a1, (unsigned int)v41, 1);
  if ( !(_BYTE)v7 )
    return 0;
  v42 = 0;
  v43 = 8LL * (unsigned int)v41;
  if ( (_DWORD)v41 )
  {
    do
    {
      v46 = a1[1];
      if ( v46 )
      {
        v44 = v46 + 1;
        v45 = a1[1];
        --v46;
      }
      else
      {
        v45 = 1;
        v44 = 2;
      }
      v47 = *a1;
      if ( a1[2] < v44 )
      {
        v57 = v45;
        v56 = v44;
        v48 = sub_1987B0(a1, v47, v44, 1);
        v45 = v57;
        v44 = v56;
        *a1 = v48;
        v47 = v48;
      }
      a1[1] = v44;
      *(_BYTE *)(v47 + v46) = 32;
      *(_BYTE *)(*a1 + v45) = 0;
      if ( !(unsigned __int8)sub_171FF0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 128) + v42), 1) )
        return 0;
      v42 += 8;
    }
    while ( v43 != v42 );
  }
  v50 = (a1[1] == 0) + a1[1] - 1;
  if ( a1[2] < (unsigned __int64)(v50 + 10) )
    *a1 = sub_1987B0(a1, *a1, v50 + 10, 1);
  v51 = *a1;
  a1[1] = v50 + 10;
  *(_BYTE *)(v51 + v50 + 9) = 0;
  v52 = *a1 + v50;
  v53 = 1;
  *(_QWORD *)v52 = 0x34366165202F2F20LL;
  *(_BYTE *)(v52 + 8) = 115;
  sub_171F20(a1, 1);
  v54 = a1[1];
  if ( v54 )
  {
    v53 = a1[1];
    --v54;
  }
  if ( a1[2] < (unsigned __int64)(v54 + 2) )
    *a1 = sub_1987B0(a1, *a1, v54 + 2, 1);
  v55 = *a1;
  a1[1] = v54 + 2;
  *(_BYTE *)(v55 + v54) = 59;
  *(_BYTE *)(*a1 + v53) = 0;
  return v7;
}
