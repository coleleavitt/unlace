__int64 __fastcall sub_880D0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int64 v41; // r15
  __int64 v42; // r8
  __int64 v43; // rax
  __m128i si128; // xmm0
  __m128i *v45; // rbp
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+8h] [rbp-50h]
  __int64 v57; // [rsp+8h] [rbp-50h]
  __int64 v58; // [rsp+8h] [rbp-50h]
  __int64 v59; // [rsp+8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+18h] [rbp-40h]

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
  v9 = a3 + 1;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_171F20(a1, a3 + 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 10;
    v14 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
LABEL_21:
    v54 = v14;
    v25 = sub_1987B0(a1, v16, v15, 1);
    v14 = v54;
    *a1 = v25;
    v16 = v25;
    goto LABEL_10;
  }
  v14 = v13 + 8;
  v15 = v13 + 9;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_21;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_QWORD *)v17 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v17 + 8) = 115;
  sub_171F20(a1, v9);
  v18 = a2[2];
  if ( v18 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v18, v9) )
    return 0;
  if ( (_DWORD)v18 )
  {
    v19 = 0;
    v53 = 24LL * (unsigned int)v18;
    do
    {
      v23 = a1[1];
      if ( v23 )
      {
        v20 = v23 + 1;
        v21 = a1[1];
        v22 = *a1;
        --v23;
        if ( a1[2] < v20 )
          goto LABEL_19;
      }
      else
      {
        v22 = *a1;
        v21 = 1;
        v20 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_19:
          v61 = v21;
          v60 = v20;
          v24 = sub_1987B0(a1, v22, v20, 1);
          v21 = v61;
          v20 = v60;
          *a1 = v24;
          v22 = v24;
        }
      }
      a1[1] = v20;
      *(_BYTE *)(v22 + v23) = 32;
      *(_BYTE *)(*a1 + v21) = 0;
      if ( !(unsigned __int8)sub_1721B0(a1, v19 + a2[1], v9) )
        return 0;
      v19 += 24;
    }
    while ( v19 != v53 );
  }
  v26 = a1[1];
  if ( v26 )
  {
    v28 = v26 + 13;
    v27 = v26 + 14;
    --v26;
  }
  else
  {
    v27 = 15;
    v28 = 14;
  }
  v29 = *a1;
  if ( a1[2] < v27 )
  {
    v56 = v28;
    v32 = sub_1987B0(a1, v29, v27, 1);
    v28 = v56;
    *a1 = v32;
    v29 = v32;
  }
  a1[1] = v27;
  *(_BYTE *)(v29 + v28) = 0;
  qmemcpy((void *)(*a1 + v26), " // license_id", 14);
  sub_171F20(a1, v9);
  v30 = a2[5];
  if ( v30 > 0x7FFFFFFF )
    return 0;
  v55 = a2[5];
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v30, v9) )
    return 0;
  v31 = 0;
  if ( (_DWORD)v55 )
  {
    while ( (unsigned __int8)sub_837C0(a1, (_QWORD *)(v31 + a2[4]), v9) )
    {
      v31 += 16;
      if ( 16LL * (unsigned int)v55 == v31 )
        goto LABEL_34;
    }
    return 0;
  }
LABEL_34:
  v33 = a1[1];
  if ( v33 )
  {
    v35 = v33 + 14;
    v34 = v33 + 15;
    --v33;
  }
  else
  {
    v34 = 16;
    v35 = 15;
  }
  v36 = *a1;
  if ( a1[2] < v34 )
  {
    v58 = v35;
    v39 = sub_1987B0(a1, v36, v34, 1);
    v35 = v58;
    *a1 = v39;
    v36 = v39;
  }
  a1[1] = v34;
  *(_BYTE *)(v36 + v35) = 0;
  qmemcpy((void *)(*a1 + v33), " // time_ranges", 15);
  sub_171F20(a1, v9);
  v37 = a2[8];
  if ( v37 > 0x7FFFFFFF )
    return 0;
  v57 = a2[8];
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v37, v9) )
    return 0;
  v38 = 0;
  if ( (_DWORD)v57 )
  {
    while ( (unsigned __int8)sub_845C0(a1, (_QWORD *)(v38 + a2[7]), v9) )
    {
      v38 += 16;
      if ( 16LL * (unsigned int)v57 == v38 )
        goto LABEL_46;
    }
    return 0;
  }
LABEL_46:
  v40 = a1[1];
  if ( v40 )
  {
    v42 = v40 + 16;
    v41 = v40 + 17;
    --v40;
  }
  else
  {
    v41 = 18;
    v42 = 17;
  }
  if ( a1[2] < v41 )
  {
    v59 = v42;
    v52 = sub_1987B0(a1, *a1, v41, 1);
    v42 = v59;
    *a1 = v52;
  }
  v43 = *a1;
  a1[1] = v41;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6ED0);
  *(_BYTE *)(v43 + v42) = 0;
  v45 = (__m128i *)(*a1 + v40);
  v45[1].m128i_i8[0] = 115;
  *v45 = si128;
  sub_171F20(a1, v9);
  v10 = sub_171FD0(a1, a2[10], v9);
  if ( !(_BYTE)v10 )
    return 0;
  v46 = (a1[1] == 0) + a1[1] - 1;
  if ( a1[2] < (unsigned __int64)(v46 + 16) )
    *a1 = sub_1987B0(a1, *a1, v46 + 16, 1);
  v47 = *a1;
  a1[1] = v46 + 16;
  v48 = a3;
  v49 = 1;
  *(_BYTE *)(v47 + v46 + 15) = 0;
  qmemcpy((void *)(*a1 + v46), " // max_entries", 15);
  sub_171F20(a1, v48);
  v50 = a1[1];
  if ( v50 )
  {
    v49 = a1[1];
    --v50;
  }
  if ( a1[2] < (unsigned __int64)(v50 + 2) )
    *a1 = sub_1987B0(a1, *a1, v50 + 2, 1);
  v51 = *a1;
  a1[1] = v50 + 2;
  *(_BYTE *)(v51 + v50) = 125;
  *(_BYTE *)(*a1 + v49) = 0;
  return v10;
}
