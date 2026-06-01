__int64 __fastcall sub_3ACF0(__int64 *a1, const char *a2, __int64 *a3)
{
  __int64 v4; // r13
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rsi
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( a2 )
  {
    v4 = a1[1];
    v6 = strlen(a2);
    v7 = v6;
    v8 = v6;
    if ( v4 )
    {
      --v4;
      v8 = v6 + v4;
    }
    v9 = *a1;
    v10 = v8 + 1;
    if ( a1[2] < v8 + 1 )
    {
      v27 = qvector_reserve();
      v10 = v8 + 1;
      *a1 = v27;
      v9 = v27;
    }
    a1[1] = v10;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v4 + *a1), a2, v7);
  }
  v11 = a1[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = v11 + 2;
    v14 = *a1;
    --v11;
    if ( a1[2] >= v13 )
      goto LABEL_9;
  }
  else
  {
    v14 = *a1;
    v13 = 3;
    v12 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_9;
  }
  v25 = qvector_reserve();
  *a1 = v25;
  v14 = v25;
LABEL_9:
  a1[1] = v13;
  *(_BYTE *)(v14 + v12) = 0;
  *(_WORD *)(*a1 + v11) = 23328;
  v15 = a3[1];
  if ( !v15 )
  {
LABEL_16:
    v18 = a1[1];
    v19 = *a1;
    goto LABEL_17;
  }
  v16 = *a3;
  v17 = *a3 + 8 * v15;
  while ( v17 != v16 )
  {
    v16 += 8;
    sub_3AC30(a1);
  }
  v18 = a1[1];
  v19 = *a1;
  v20 = v18 - 1;
  if ( v18 - 1 > 1 )
  {
    if ( a1[2] < v20 )
    {
      v28 = qvector_reserve();
      *a1 = v28;
      v19 = v28;
    }
    a1[1] = v20;
    *(_BYTE *)(v19 + v18 - 2) = 0;
    goto LABEL_16;
  }
  if ( v19 )
  {
    a1[1] = 0;
    qfree();
    v18 = a1[1];
    *a1 = 0;
    a1[2] = 0;
    if ( !v18 )
    {
      v23 = 1;
      v22 = 2;
      goto LABEL_23;
    }
    v19 = 0;
    v21 = 0;
    goto LABEL_18;
  }
LABEL_17:
  v21 = a1[2];
  if ( !v18 )
  {
    v22 = 2;
    v23 = 1;
    if ( v21 >= 2 )
      goto LABEL_19;
LABEL_23:
    v26 = qvector_reserve();
    *a1 = v26;
    v19 = v26;
    goto LABEL_19;
  }
LABEL_18:
  v22 = v18 + 1;
  v23 = v18--;
  if ( v21 < v22 )
    goto LABEL_23;
LABEL_19:
  a1[1] = v22;
  *(_BYTE *)(v19 + v18) = 93;
  result = *a1;
  *(_BYTE *)(*a1 + v23) = 0;
  return result;
}

