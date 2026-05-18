__int64 __fastcall sub_879D0(__int64 *a1, __int64 a2, unsigned int a3)
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
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  __int64 v30; // rsi
  __m128i si128; // xmm0
  __m128i *v32; // r14
  __int64 v33; // r13
  __int64 v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rbp
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+8h] [rbp-40h]
  __int64 v49; // [rsp+8h] [rbp-40h]
  __int64 v50; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_171FD0(a1, *(_QWORD *)(a2 + 72), a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 7;
    v14 = 6;
    if ( (unsigned __int64)a1[2] >= 7 )
      goto LABEL_10;
LABEL_36:
    v47 = v14;
    v41 = sub_1987B0(a1, v16, v15, 1);
    v14 = v47;
    *a1 = v41;
    v16 = v41;
    goto LABEL_10;
  }
  v14 = v13 + 5;
  v15 = v13 + 6;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_36;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_WORD *)(v17 + 4) = 25705;
  *(_DWORD *)v17 = 539963168;
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 80), v9) )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 10;
    v19 = v18 + 11;
    --v18;
  }
  else
  {
    v19 = 12;
    v20 = 11;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v48 = v20;
    v42 = sub_1987B0(a1, v21, v19, 1);
    v20 = v48;
    *a1 = v42;
    v21 = v42;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  qmemcpy((void *)(*a1 + v18), " // user_id", 11);
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FD0(a1, *(_QWORD *)(a2 + 88), v9) )
    return 0;
  v22 = a1[1];
  if ( v22 )
  {
    v23 = v22 + 5;
    v24 = v22 + 6;
    --v22;
  }
  else
  {
    v24 = 7;
    v23 = 6;
  }
  v25 = *a1;
  if ( a1[2] < v24 )
  {
    v49 = v23;
    v43 = sub_1987B0(a1, v25, v24, 1);
    v23 = v49;
    *a1 = v43;
    v25 = v43;
  }
  a1[1] = v24;
  *(_BYTE *)(v25 + v23) = 0;
  v26 = *a1 + v22;
  *(_DWORD *)v26 = 539963168;
  *(_WORD *)(v26 + 4) = 29556;
  sub_171F20(a1, v9);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 96), v9) )
    return 0;
  v27 = a1[1];
  if ( v27 )
  {
    v29 = v27 + 19;
    v28 = v27 + 20;
    --v27;
  }
  else
  {
    v28 = 21;
    v29 = 20;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v50 = v29;
    v44 = sub_1987B0(a1, v30, v28, 1);
    v29 = v50;
    *a1 = v44;
    v30 = v44;
  }
  a1[1] = v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6EA0);
  *(_BYTE *)(v30 + v29) = 0;
  v32 = (__m128i *)(*a1 + v27);
  v32[1].m128i_i32[0] = 1852795252;
  *v32 = si128;
  sub_171F20(a1, v9);
  v10 = sub_171FB0(a1, *(unsigned int *)(a2 + 100), v9);
  if ( !(_BYTE)v10 )
    return 0;
  v33 = a1[1];
  if ( v33 )
  {
    v34 = v33 + 10;
    v35 = v33 + 11;
    --v33;
  }
  else
  {
    v35 = 12;
    v34 = 11;
  }
  v36 = *a1;
  if ( a1[2] < v35 )
  {
    v46 = sub_1987B0(a1, v36, v35, 1);
    *a1 = v46;
    v36 = v46;
  }
  a1[1] = v35;
  *(_BYTE *)(v36 + v34) = 0;
  qmemcpy((void *)(*a1 + v33), " // nevents", 11);
  sub_171F20(a1, a3);
  v37 = a1[1];
  if ( v37 )
  {
    v38 = v37 + 1;
    v39 = a1[1];
    --v37;
  }
  else
  {
    v39 = 1;
    v38 = 2;
  }
  v40 = *a1;
  if ( a1[2] < v38 )
  {
    v45 = sub_1987B0(a1, v40, v38, 1);
    *a1 = v45;
    v40 = v45;
  }
  a1[1] = v38;
  *(_BYTE *)(v40 + v37) = 125;
  *(_BYTE *)(*a1 + v39) = 0;
  return v10;
}
