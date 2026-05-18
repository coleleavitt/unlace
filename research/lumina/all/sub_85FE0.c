__int64 __fastcall sub_85FE0(__int64 *a1, __int64 a2, unsigned int a3)
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
  __m128i si128; // xmm0
  __m128i *v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax

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
  v9 = sub_171FB0(a1, *(unsigned __int8 *)(a2 + 64), a3 + 1);
  if ( (_BYTE)v9 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      v13 = v12 + 19;
      v14 = v12 + 20;
      v15 = *a1;
      --v12;
      if ( a1[2] >= v14 )
        goto LABEL_9;
    }
    else
    {
      v15 = *a1;
      v14 = 21;
      v13 = 20;
      if ( (unsigned __int64)a1[2] >= 0x15 )
        goto LABEL_9;
    }
    v23 = sub_1987B0(a1, v15, v14, 1);
    *a1 = v23;
    v15 = v23;
LABEL_9:
    a1[1] = v14;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6E40);
    *(_BYTE *)(v15 + v13) = 0;
    v17 = (__m128i *)(*a1 + v12);
    v17[1].m128i_i32[0] = 1936025454;
    *v17 = si128;
    sub_171F20(a1, a3);
    v18 = a1[1];
    if ( v18 )
    {
      v19 = v18 + 1;
      v20 = a1[1];
      v21 = *a1;
      --v18;
      if ( a1[2] >= v19 )
      {
LABEL_11:
        a1[1] = v19;
        *(_BYTE *)(v21 + v18) = 125;
        *(_BYTE *)(*a1 + v20) = 0;
        return v9;
      }
    }
    else
    {
      v21 = *a1;
      v20 = 1;
      v19 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v22 = sub_1987B0(a1, v21, v19, 1);
    *a1 = v22;
    v21 = v22;
    goto LABEL_11;
  }
  return v9;
}
