__int64 __fastcall sub_7E760(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 18;
    v5 = v3 + 19;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 20;
    v4 = 19;
    if ( (unsigned __int64)a1[2] >= 0x14 )
      goto LABEL_3;
  }
  v11 = sub_1987B0(a1, v6, v5, 1);
  *a1 = v11;
  v6 = v11;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6D70);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(_DWORD *)(v8 + 15) = 542395477;
  sub_171F20(a1, 1);
  v9 = sub_171FB0(a1, *(unsigned int *)(a2 + 12), 1);
  if ( !(_BYTE)v9 )
    return v9;
  v12 = a1[1];
  if ( v12 )
  {
    v13 = v12 + 11;
    v14 = v12 + 12;
    v15 = *a1;
    --v12;
    if ( a1[2] >= v14 )
      goto LABEL_9;
  }
  else
  {
    v15 = *a1;
    v14 = 13;
    v13 = 12;
    if ( (unsigned __int64)a1[2] >= 0xD )
      goto LABEL_9;
  }
  v21 = sub_1987B0(a1, v15, v14, 1);
  *a1 = v21;
  v15 = v21;
LABEL_9:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  qmemcpy((void *)(*a1 + v12), " // ndeleted", 12);
  sub_171F20(a1, 1);
  v16 = a1[1];
  if ( !v16 )
  {
    v19 = *a1;
    v18 = 1;
    v17 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
LABEL_13:
    v20 = sub_1987B0(a1, v19, v17, 1);
    *a1 = v20;
    v19 = v20;
    goto LABEL_11;
  }
  v17 = v16 + 1;
  v18 = a1[1];
  v19 = *a1;
  --v16;
  if ( a1[2] < v17 )
    goto LABEL_13;
LABEL_11:
  a1[1] = v17;
  *(_BYTE *)(v19 + v16) = 59;
  *(_BYTE *)(*a1 + v18) = 0;
  return v9;
}
