__int64 __fastcall sub_89000(__int64 *a1, _QWORD *a2, unsigned int a3)
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
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // r8
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // r15
  unsigned __int64 v36; // r14
  __int64 v37; // rsi
  __m128i si128; // xmm0
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-40h]
  __int64 v51; // [rsp+8h] [rbp-40h]
  __int64 v52; // [rsp+8h] [rbp-40h]
  __int64 v53; // [rsp+8h] [rbp-40h]
  __int64 v54; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_82CB0(a1, (__int64)a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 9;
    v14 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_10;
LABEL_41:
    v50 = v14;
    v43 = sub_1987B0(a1, v16, v15, 1);
    v14 = v50;
    *a1 = v43;
    v16 = v43;
    goto LABEL_10;
  }
  v14 = v13 + 7;
  v15 = v13 + 8;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_41;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_QWORD *)(*a1 + v13) = 0x72657375202F2F20LL;
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FD0(a1, a2[15], v9) )
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
    v51 = v19;
    v44 = sub_1987B0(a1, v20, v18, 1);
    v19 = v51;
    *a1 = v44;
    v20 = v44;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // nfuncs", 10);
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FD0(a1, a2[16], v9) )
    return 0;
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 10;
    v23 = v21 + 11;
    --v21;
  }
  else
  {
    v23 = 12;
    v22 = 11;
  }
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v52 = v22;
    v45 = sub_1987B0(a1, v24, v23, 1);
    v22 = v52;
    *a1 = v45;
    v24 = v45;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 0;
  qmemcpy((void *)(*a1 + v21), " // npushes", 11);
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FD0(a1, a2[17], v9) )
    return 0;
  v25 = a1[1];
  if ( v25 )
  {
    v27 = v25 + 13;
    v26 = v25 + 14;
    --v25;
  }
  else
  {
    v26 = 15;
    v27 = 14;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v53 = v27;
    v46 = sub_1987B0(a1, v28, v26, 1);
    v27 = v53;
    *a1 = v46;
    v28 = v46;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v27) = 0;
  qmemcpy((void *)(*a1 + v25), " // nhist_recs", 14);
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FD0(a1, a2[18], v9) )
    return 0;
  v29 = a1[1];
  if ( v29 )
  {
    v30 = v29 + 8;
    v31 = v29 + 9;
    --v29;
  }
  else
  {
    v31 = 10;
    v30 = 9;
  }
  v32 = *a1;
  if ( a1[2] < v31 )
  {
    v54 = v30;
    v47 = sub_1987B0(a1, v32, v31, 1);
    v30 = v54;
    *a1 = v47;
    v32 = v47;
  }
  a1[1] = v31;
  *(_BYTE *)(v32 + v30) = 0;
  v33 = *a1 + v29;
  *(_QWORD *)v33 = 0x6264696E202F2F20LL;
  *(_BYTE *)(v33 + 8) = 115;
  sub_171F20(a1, v9);
  v10 = sub_171FD0(a1, a2[19], v9);
  if ( !(_BYTE)v10 )
    return 0;
  v34 = a1[1];
  if ( v34 )
  {
    v35 = v34 + 15;
    v36 = v34 + 16;
    --v34;
  }
  else
  {
    v36 = 17;
    v35 = 16;
  }
  v37 = *a1;
  if ( a1[2] < v36 )
  {
    v49 = sub_1987B0(a1, v37, v36, 1);
    *a1 = v49;
    v37 = v49;
  }
  a1[1] = v36;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6F00);
  *(_BYTE *)(v37 + v35) = 0;
  *(__m128i *)(*a1 + v34) = si128;
  sub_171F20(a1, a3);
  v39 = a1[1];
  if ( v39 )
  {
    v40 = v39 + 1;
    v41 = a1[1];
    --v39;
  }
  else
  {
    v41 = 1;
    v40 = 2;
  }
  v42 = *a1;
  if ( a1[2] < v40 )
  {
    v48 = sub_1987B0(a1, v42, v40, 1);
    *a1 = v48;
    v42 = v48;
  }
  a1[1] = v40;
  *(_BYTE *)(v42 + v39) = 125;
  *(_BYTE *)(*a1 + v41) = 0;
  return v10;
}
