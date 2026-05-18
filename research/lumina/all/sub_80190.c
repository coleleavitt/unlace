__int64 __fastcall sub_80190(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __m128i si128; // xmm0
  __m128i *v18; // rbp
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  _DWORD *v23; // rbp
  __int64 v24; // rbp
  __int64 v25; // r15
  unsigned __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // r14
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // r14
  unsigned __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 4;
    v7 = v5 + 5;
    v8 = *a1;
    --v5;
    if ( a1[2] >= v7 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 6;
    v6 = 5;
    if ( (unsigned __int64)a1[2] >= 6 )
      goto LABEL_3;
  }
  v12 = sub_1987B0(a1, v8, v7, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 0;
  v9 = *a1 + v5;
  *(_DWORD *)v9 = 1330398536;
  *(_BYTE *)(v9 + 4) = 32;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 12), 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 19;
    v14 = 18;
    if ( (unsigned __int64)a1[2] >= 0x13 )
      goto LABEL_10;
LABEL_43:
    v44 = sub_1987B0(a1, v16, v15, 1);
    *a1 = v44;
    v16 = v44;
    goto LABEL_10;
  }
  v14 = v13 + 17;
  v15 = v13 + 18;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_43;
LABEL_10:
  a1[1] = v15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6DA0);
  *(_BYTE *)(v16 + v14) = 0;
  v18 = (__m128i *)(*a1 + v13);
  v18[1].m128i_i16[0] = 28271;
  *v18 = si128;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_172160(a1, a2 + 16, 1) )
    return 0;
  v19 = a1[1];
  if ( v19 )
  {
    v21 = v19 + 6;
    v20 = v19 + 7;
    --v19;
  }
  else
  {
    v20 = 8;
    v21 = 7;
  }
  v22 = *a1;
  if ( a1[2] < v20 )
  {
    v45 = sub_1987B0(a1, v22, v20, 1);
    *a1 = v45;
    v22 = v45;
  }
  a1[1] = v20;
  *(_BYTE *)(v22 + v21) = 0;
  v23 = (_DWORD *)(*a1 + v19);
  *v23 = 539963168;
  *(_DWORD *)((char *)v23 + 3) = 2036689696;
  sub_171F20(a1, 1);
  if ( !(unsigned __int8)sub_172010(a1, a2 + 40, 6, 1) )
    return 0;
  v24 = a1[1];
  if ( v24 )
  {
    v25 = v24 + 13;
    v26 = v24 + 14;
    --v24;
  }
  else
  {
    v26 = 15;
    v25 = 14;
  }
  v27 = *a1;
  if ( a1[2] < v26 )
  {
    v46 = sub_1987B0(a1, v27, v26, 1);
    *a1 = v46;
    v27 = v46;
  }
  a1[1] = v26;
  *(_BYTE *)(v27 + v25) = 0;
  qmemcpy((void *)(*a1 + v24), " // license_id", 14);
  sub_171F20(a1, 1);
  v10 = sub_171FB0(a1, *(unsigned __int8 *)(a2 + 46), 1);
  if ( !(_BYTE)v10 )
    return 0;
  v28 = a1[1];
  if ( v28 )
  {
    v30 = v28 + 14;
    v29 = v28 + 15;
    --v28;
  }
  else
  {
    v29 = 16;
    v30 = 15;
  }
  v31 = *a1;
  if ( a1[2] < v29 )
  {
    v51 = v30;
    v47 = sub_1987B0(a1, v31, v29, 1);
    v30 = v51;
    *a1 = v47;
    v31 = v47;
  }
  a1[1] = v29;
  *(_BYTE *)(v31 + v30) = 0;
  qmemcpy((void *)(*a1 + v28), " // record_conv", 15);
  if ( a3 > 2 )
  {
    sub_171F20(a1, 1);
    if ( !(unsigned __int8)sub_1721B0(a1, a2 + 48, 1) )
      return 0;
    v32 = a1[1];
    if ( v32 )
    {
      v33 = v32 + 11;
      v34 = v32 + 12;
      --v32;
    }
    else
    {
      v34 = 13;
      v33 = 12;
    }
    v35 = *a1;
    if ( a1[2] < v34 )
    {
      v49 = sub_1987B0(a1, v35, v34, 1);
      *a1 = v49;
      v35 = v49;
    }
    a1[1] = v34;
    *(_BYTE *)(v35 + v33) = 0;
    qmemcpy((void *)(*a1 + v32), " // username", 12);
    sub_171F20(a1, 1);
    if ( !(unsigned __int8)sub_1721B0(a1, a2 + 72, 1) )
      return 0;
    v36 = a1[1];
    if ( v36 )
    {
      v37 = v36 + 11;
      v38 = v36 + 12;
      --v36;
    }
    else
    {
      v38 = 13;
      v37 = 12;
    }
    v39 = *a1;
    if ( a1[2] < v38 )
    {
      v50 = sub_1987B0(a1, v39, v38, 1);
      *a1 = v50;
      v39 = v50;
    }
    a1[1] = v38;
    *(_BYTE *)(v39 + v37) = 0;
    qmemcpy((void *)(*a1 + v36), " // password", 12);
  }
  sub_171F20(a1, 1);
  v40 = a1[1];
  if ( v40 )
  {
    v41 = v40 + 1;
    v42 = a1[1];
    --v40;
  }
  else
  {
    v42 = 1;
    v41 = 2;
  }
  v43 = *a1;
  if ( a1[2] < v41 )
  {
    v48 = sub_1987B0(a1, v43, v41, 1);
    *a1 = v48;
    v43 = v48;
  }
  a1[1] = v41;
  *(_BYTE *)(v43 + v40) = 59;
  *(_BYTE *)(*a1 + v42) = 0;
  return v10;
}
