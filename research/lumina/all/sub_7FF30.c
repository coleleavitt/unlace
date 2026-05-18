__int64 __fastcall sub_7FF30(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+0h] [rbp-48h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 22;
    v4 = 21;
    if ( (unsigned __int64)a1[2] >= 0x16 )
      goto LABEL_3;
LABEL_7:
    v12 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v12;
    v6 = v12;
    goto LABEL_3;
  }
  v4 = v3 + 20;
  v5 = v3 + 21;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6D90);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(_QWORD *)(v8 + 13) = 0x20544C555345525FLL;
  sub_171F20(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 > 0x7FFFFFFF )
    return 0;
  v10 = sub_171FB0(a1, (unsigned int)v9, 1);
  if ( !(_BYTE)v10 )
    return 0;
  v13 = 0;
  v14 = 4LL * (unsigned int)v9;
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
          v32 = v16;
          v31 = v15;
          v19 = sub_1987B0(a1, v17, v15, 1);
          v16 = v32;
          v15 = v31;
          *a1 = v19;
          v17 = v19;
        }
      }
      a1[1] = v15;
      *(_BYTE *)(v17 + v18) = 32;
      *(_BYTE *)(*a1 + v16) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(*(_QWORD *)(a2 + 16) + v13), 1) )
        return 0;
      v13 += 4;
    }
    while ( v14 != v13 );
  }
  v20 = a1[1];
  if ( v20 )
  {
    v22 = v20 + 8;
    v21 = v20 + 9;
    --v20;
  }
  else
  {
    v21 = 10;
    v22 = 9;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v30 = sub_1987B0(a1, v23, v21, 1);
    *a1 = v30;
    v23 = v30;
  }
  a1[1] = v21;
  *(_BYTE *)(v23 + v22) = 0;
  v24 = *a1 + v20;
  *(_QWORD *)v24 = 0x65646F63202F2F20LL;
  *(_BYTE *)(v24 + 8) = 115;
  sub_171F20(a1, 1);
  v25 = a1[1];
  if ( v25 )
  {
    v26 = v25 + 1;
    v27 = a1[1];
    --v25;
  }
  else
  {
    v27 = 1;
    v26 = 2;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v29 = sub_1987B0(a1, v28, v26, 1);
    *a1 = v29;
    v28 = v29;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v25) = 59;
  *(_BYTE *)(*a1 + v27) = 0;
  return v10;
}
