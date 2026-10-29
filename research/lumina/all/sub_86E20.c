__int64 __fastcall sub_86E20(__int64 *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  __int64 v33; // rsi
  __m128i si128; // xmm0
  __int64 v35; // r14
  unsigned __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // r15
  unsigned __int64 v39; // rdx
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // r12
  __int64 v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rbp
  unsigned __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-58h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+0h] [rbp-58h]
  unsigned __int64 v61; // [rsp+8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

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
    v15 = 9;
    v14 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_10;
LABEL_26:
    v56 = v14;
    v28 = sub_1987B0(a1, v16, v15, 1);
    v14 = v56;
    *a1 = v28;
    v16 = v28;
    goto LABEL_10;
  }
  v14 = v13 + 7;
  v15 = v13 + 8;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_QWORD *)(*a1 + v13) = 0x65707974202F2F20LL;
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FB0(a1, a2[1], v9) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 9;
    v18 = v17 + 10;
    --v17;
  }
  else
  {
    v18 = 11;
    v19 = 10;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v57 = v19;
    v29 = sub_1987B0(a1, v20, v18, 1);
    v19 = v57;
    *a1 = v29;
    v20 = v29;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // widget", 10);
  sub_171F20(a1, v9);
  v21 = *((_QWORD *)a2 + 2);
  if ( v21 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v21, v9) )
    return 0;
  v22 = 0;
  v55 = 8LL * (unsigned int)v21;
  if ( (_DWORD)v21 )
  {
    do
    {
      v26 = a1[1];
      if ( v26 )
      {
        v23 = v26 + 1;
        v24 = a1[1];
        v25 = *a1;
        --v26;
        if ( a1[2] < v23 )
          goto LABEL_24;
      }
      else
      {
        v25 = *a1;
        v24 = 1;
        v23 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_24:
          v63 = v24;
          v61 = v23;
          v27 = sub_1987B0(a1, v25, v23, 1);
          v24 = v63;
          v23 = v61;
          *a1 = v27;
          v25 = v27;
        }
      }
      a1[1] = v23;
      *(_BYTE *)(v25 + v26) = 32;
      *(_BYTE *)(*a1 + v24) = 0;
      if ( !(unsigned __int8)sub_171FD0(a1, *(_QWORD *)(*((_QWORD *)a2 + 1) + v22), v9) )
        return 0;
      v22 += 8;
    }
    while ( v22 != v55 );
  }
  v30 = a1[1];
  if ( v30 )
  {
    v32 = v30 + 20;
    v31 = v30 + 21;
    --v30;
  }
  else
  {
    v31 = 22;
    v32 = 21;
  }
  v33 = *a1;
  if ( a1[2] < v31 )
  {
    v60 = v32;
    v44 = sub_1987B0(a1, v33, v31, 1);
    v32 = v60;
    *a1 = v44;
    v33 = v44;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6E90);
  a1[1] = v31;
  *(_BYTE *)(v33 + v32) = 0;
  v35 = *a1 + v30;
  *(__m128i *)v35 = si128;
  *(_QWORD *)(v35 + 13) = 0x73657865646E695FLL;
  sub_171F20(a1, v9);
  v36 = *((_QWORD *)a2 + 5);
  if ( v36 > 0x7FFFFFFF )
    return 0;
  v58 = *((_QWORD *)a2 + 5);
  v10 = sub_171FB0(a1, (unsigned int)v36, v9);
  if ( !(_BYTE)v10 )
    return 0;
  v37 = v58;
  v38 = 0;
  v59 = 4LL * (unsigned int)v58;
  if ( v37 )
  {
    do
    {
      v41 = a1[1];
      if ( v41 )
      {
        v39 = v41 + 1;
        v40 = a1[1];
        --v41;
      }
      else
      {
        v40 = 1;
        v39 = 2;
      }
      v42 = *a1;
      if ( a1[2] < v39 )
      {
        v65 = v40;
        v64 = v41;
        v62 = v39;
        v43 = sub_1987B0(a1, v42, v39, 1);
        v40 = v65;
        v41 = v64;
        *a1 = v43;
        v39 = v62;
        v42 = v43;
      }
      a1[1] = v39;
      *(_BYTE *)(v42 + v41) = 32;
      *(_BYTE *)(*a1 + v40) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(v38 + *((_QWORD *)a2 + 4)), v9) )
        return 0;
      v38 += 4;
    }
    while ( v59 != v38 );
  }
  v45 = a1[1];
  if ( v45 )
  {
    v47 = v45 + 7;
    v46 = v45 + 8;
    --v45;
  }
  else
  {
    v46 = 9;
    v47 = 8;
  }
  v48 = *a1;
  if ( a1[2] < v46 )
  {
    v54 = sub_1987B0(a1, v48, v46, 1);
    *a1 = v54;
    v48 = v54;
  }
  a1[1] = v46;
  *(_BYTE *)(v48 + v47) = 0;
  *(_QWORD *)(*a1 + v45) = 0x73677261202F2F20LL;
  sub_171F20(a1, a3);
  v49 = a1[1];
  if ( v49 )
  {
    v50 = v49 + 1;
    v51 = a1[1];
    --v49;
  }
  else
  {
    v51 = 1;
    v50 = 2;
  }
  v52 = *a1;
  if ( a1[2] < v50 )
  {
    v53 = sub_1987B0(a1, v52, v50, 1);
    *a1 = v53;
    v52 = v53;
  }
  a1[1] = v50;
  *(_BYTE *)(v52 + v49) = 125;
  *(_BYTE *)(*a1 + v51) = 0;
  return v10;
}
