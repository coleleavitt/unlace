__int64 *__fastcall sub_1D81E0(__int64 *a1, __int64 *a2, const char *a3)
{
  __int64 v4; // r12
  size_t v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  size_t v14; // r9
  __int64 v15; // r8
  size_t v16; // r10
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  size_t v20; // r8
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-48h]
  size_t v27; // [rsp+10h] [rbp-40h]

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = a2[1];
  if ( !v4 )
    return a1;
  v6 = strlen(a3);
  v7 = *a2;
  v8 = v6 * (v4 - 1);
  v9 = v6;
  v10 = *a2 + 24 * v4;
  if ( *a2 == v10 )
  {
    if ( !v8 )
      return a1;
    goto LABEL_23;
  }
  v11 = *a2;
  do
  {
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
      v8 = v8 + v12 - 1;
    v11 += 24;
  }
  while ( v10 != v11 );
  if ( v8 )
  {
LABEL_23:
    *a1 = qvector_reserve();
    v7 = *a2;
    v10 = *a2 + 24 * a2[1];
    if ( *a2 == v10 )
      return a1;
    goto LABEL_18;
  }
  do
  {
LABEL_18:
    v18 = a1[1];
    if ( v18 > 1 )
    {
      v19 = *a1;
      v20 = v9 + v18 - 1;
      v21 = v9 + v18;
      if ( a1[2] < v9 + v18 )
      {
        v22 = qvector_reserve();
        v20 = v9 + v18 - 1;
        v21 = v9 + v18;
        *a1 = v22;
        v19 = v22;
      }
      a1[1] = v21;
      *(_BYTE *)(v19 + v20) = 0;
      memmove((void *)(v18 - 1 + *a1), a3, v9);
    }
    v13 = *(_QWORD *)(v7 + 8);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v13 != 1 )
      {
        v15 = a1[1];
        v16 = v13 - 1;
        if ( v15 )
        {
          --v15;
          v16 = v14 + v15;
          v13 += v15;
        }
        v17 = *a1;
        if ( a1[2] < v13 )
        {
          v27 = v16;
          v26 = v15;
          v25 = v14;
          v24 = qvector_reserve();
          v16 = v27;
          v15 = v26;
          *a1 = v24;
          v17 = v24;
          v14 = v25;
        }
        a1[1] = v13;
        *(_BYTE *)(v17 + v16) = 0;
        memcpy((void *)(v15 + *a1), *(const void **)v7, v14);
      }
    }
    v7 += 24;
  }
  while ( v10 != v7 );
  return a1;
}

