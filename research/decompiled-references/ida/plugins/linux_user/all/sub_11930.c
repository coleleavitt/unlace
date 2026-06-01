__int64 __fastcall sub_11930(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  size_t v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  size_t v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 27;
    v4 = 26;
    if ( (unsigned __int64)a1[2] >= 0x1B )
      goto LABEL_3;
LABEL_9:
    v16 = qvector_reserve();
    *a1 = v16;
    v6 = v16;
    goto LABEL_3;
  }
  v4 = v3 + 25;
  v5 = v3 + 26;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_9;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_3AB20);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 10) = _mm_load_si128((const __m128i *)&xmmword_3AB30);
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v9 != 1 )
    {
      v18 = a1[1];
      v19 = v9 - 1;
      if ( v18 )
      {
        --v18;
        v19 = v10 + v18;
        v9 += v18;
      }
      v20 = *a1;
      if ( a1[2] < v9 )
      {
        v21 = qvector_reserve();
        *a1 = v21;
        v20 = v21;
      }
      a1[1] = v9;
      *(_BYTE *)(v20 + v19) = 0;
      memcpy((void *)(v18 + *a1), *(const void **)a2, v10);
    }
  }
  v11 = a1[1];
  if ( !v11 )
  {
    v14 = *a1;
    v13 = 3;
    v12 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_7;
LABEL_11:
    v17 = qvector_reserve();
    *a1 = v17;
    v14 = v17;
    goto LABEL_7;
  }
  v12 = v11 + 1;
  v13 = v11 + 2;
  v14 = *a1;
  --v11;
  if ( a1[2] < v13 )
    goto LABEL_11;
LABEL_7:
  a1[1] = v13;
  *(_BYTE *)(v14 + v12) = 0;
  *(_WORD *)(*a1 + v11) = 2606;
  return 2606;
}

