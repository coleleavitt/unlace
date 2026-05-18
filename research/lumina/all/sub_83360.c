__int64 __fastcall sub_83360(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __m128i si128; // xmm0
  __m128i *v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned int v12; // r15d
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  if ( !v5 )
  {
    v8 = *a1;
    v7 = 19;
    v6 = 18;
    if ( (unsigned __int64)a1[2] >= 0x13 )
      goto LABEL_3;
LABEL_7:
    v14 = sub_1987B0(a1, v8, v7, 1);
    *a1 = v14;
    v8 = v14;
    goto LABEL_3;
  }
  v6 = v5 + 17;
  v7 = v5 + 18;
  v8 = *a1;
  --v5;
  if ( a1[2] < v7 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6DE0);
  *(_BYTE *)(v8 + v6) = 0;
  v10 = (__m128i *)(*a1 + v5);
  v10[1].m128i_i16[0] = 8276;
  *v10 = si128;
  sub_171F20(a1, 1);
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 > 0x7FFFFFFF )
    return 0;
  v12 = sub_171FB0(a1, (unsigned int)v11, 1);
  if ( !(_BYTE)v12 )
    return 0;
  if ( (_DWORD)v11 )
  {
    v15 = 15LL * (unsigned int)v11;
    v16 = 0;
    v17 = 8 * v15;
    while ( (unsigned __int8)sub_82CB0(a1, v16 + *(_QWORD *)(a2 + 16), 1u) )
    {
      v16 += 120;
      if ( v17 == v16 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
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
    v34 = v20;
    v31 = sub_1987B0(a1, v21, v19, 1);
    v20 = v34;
    *a1 = v31;
    v21 = v31;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  v22 = *a1 + v18;
  *(_QWORD *)v22 = 0x72657375202F2F20LL;
  *(_BYTE *)(v22 + 8) = 115;
  if ( a3 > 3 )
  {
    sub_171F20(a1, 1);
    if ( (unsigned __int8)sub_171FB0(a1, *(unsigned int *)(a2 + 40), 1) )
    {
      v23 = a1[1];
      if ( v23 )
      {
        v24 = v23 + 11;
        v25 = v23 + 12;
        --v23;
      }
      else
      {
        v25 = 13;
        v24 = 12;
      }
      v26 = *a1;
      if ( a1[2] < v25 )
      {
        v33 = sub_1987B0(a1, v26, v25, 1);
        *a1 = v33;
        v26 = v33;
      }
      a1[1] = v25;
      *(_BYTE *)(v26 + v24) = 0;
      qmemcpy((void *)(*a1 + v23), " // features", 12);
      goto LABEL_24;
    }
    return 0;
  }
LABEL_24:
  sub_171F20(a1, 1);
  v27 = a1[1];
  if ( v27 )
  {
    v28 = v27 + 1;
    v29 = a1[1];
    --v27;
  }
  else
  {
    v29 = 1;
    v28 = 2;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v32 = sub_1987B0(a1, v30, v28, 1);
    *a1 = v32;
    v30 = v32;
  }
  a1[1] = v28;
  *(_BYTE *)(v30 + v27) = 59;
  *(_BYTE *)(*a1 + v29) = 0;
  return v12;
}
