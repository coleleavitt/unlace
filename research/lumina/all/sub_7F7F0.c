__int64 __fastcall sub_7F7F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __m128i *v8; // rbp
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
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 18;
    v4 = 17;
    if ( (unsigned __int64)a1[2] >= 0x12 )
      goto LABEL_3;
LABEL_7:
    v12 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v12;
    v6 = v12;
    goto LABEL_3;
  }
  v4 = v3 + 16;
  v5 = v3 + 17;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6D80);
  *(_BYTE *)(v6 + v4) = 0;
  v8 = (__m128i *)(*a1 + v3);
  v8[1].m128i_i8[0] = 32;
  *v8 = si128;
  sub_171F20(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 <= 0x7FFFFFFF && (v10 = sub_171FB0(a1, (unsigned int)v9, 1), (_BYTE)v10) )
  {
    if ( (_DWORD)v9 )
    {
      v13 = 0;
      v14 = 24LL * (unsigned int)v9;
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
            v31 = v16;
            v30 = v15;
            v19 = sub_1987B0(a1, v17, v15, 1);
            v16 = v31;
            v15 = v30;
            *a1 = v19;
            v17 = v19;
          }
        }
        a1[1] = v15;
        *(_BYTE *)(v17 + v18) = 32;
        *(_BYTE *)(*a1 + v16) = 0;
        if ( !(unsigned __int8)sub_1721B0(a1, v13 + *(_QWORD *)(a2 + 16), 1) )
          return 0;
        v13 += 24;
      }
      while ( v14 != v13 );
    }
    v20 = a1[1];
    if ( v20 )
    {
      v22 = v20 + 12;
      v21 = v20 + 13;
      --v20;
    }
    else
    {
      v21 = 14;
      v22 = 13;
    }
    v23 = *a1;
    if ( a1[2] < v21 )
    {
      v29 = sub_1987B0(a1, v23, v21, 1);
      *a1 = v29;
      v23 = v29;
    }
    a1[1] = v21;
    *(_BYTE *)(v23 + v22) = 0;
    qmemcpy((void *)(*a1 + v20), " // usernames", 13);
    sub_171F20(a1, 1);
    v24 = a1[1];
    if ( v24 )
    {
      v25 = v24 + 1;
      v26 = a1[1];
      --v24;
    }
    else
    {
      v26 = 1;
      v25 = 2;
    }
    v27 = *a1;
    if ( a1[2] < v25 )
    {
      v28 = sub_1987B0(a1, v27, v25, 1);
      *a1 = v28;
      v27 = v28;
    }
    a1[1] = v25;
    *(_BYTE *)(v27 + v24) = 59;
    *(_BYTE *)(*a1 + v26) = 0;
  }
  else
  {
    return 0;
  }
  return v10;
}
