char __fastcall sub_438390(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rdx
  size_t v11; // rdx
  const void *v12; // rsi
  int v13; // r13d
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rsi
  const char *v20; // rdi
  __int64 v22; // [rsp+0h] [rbp-48h]
  const void *v23; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a3 + 32);
  if ( !v5 )
  {
    if ( !v6 )
    {
      v14 = *(_DWORD *)(a2 + 64);
      v15 = *(_DWORD *)(a3 + 64);
      if ( v14 != v15 )
        goto LABEL_16;
      goto LABEL_39;
    }
    v17 = *(_QWORD *)(a3 + 16);
    v8 = *a1;
    if ( !v17 )
      goto LABEL_11;
    v13 = -2;
    goto LABEL_26;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  if ( !v7 )
  {
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_18;
      v10 = *(_QWORD *)(a3 + 16);
      if ( !v10 )
        goto LABEL_15;
      goto LABEL_6;
    }
    goto LABEL_35;
  }
  v9 = v7 - 1;
  if ( v7 - 1 == v8 )
  {
    if ( v7 != 1 )
    {
      v22 = *a1;
      v23 = (const void *)a1[1];
      v16 = memcmp(*(const void **)(a2 + 8), v23, v7 - 1);
      v8 = v22;
      if ( v16 )
      {
        v12 = v23;
        if ( !v6 )
          goto LABEL_18;
        v18 = *(_QWORD *)(a3 + 16);
        if ( !v18 )
          goto LABEL_15;
        v11 = v18 - 1;
        if ( v11 != v9 )
          goto LABEL_15;
        v13 = 0;
LABEL_9:
        if ( !memcmp(*(const void **)(a3 + 8), v12, v11) )
        {
          if ( v13 == -2 )
          {
LABEL_11:
            LOBYTE(v14) = 1;
            return v14;
          }
          if ( v13 != -1 )
          {
            LOBYTE(v14) = 0;
            return v14;
          }
        }
        else if ( v13 )
        {
          LOBYTE(v14) = 1;
          return v14;
        }
        goto LABEL_15;
      }
      if ( !v6 )
        goto LABEL_18;
      v17 = *(_QWORD *)(a3 + 16);
      if ( !v17 )
        goto LABEL_11;
      goto LABEL_25;
    }
LABEL_35:
    if ( !v6 )
      goto LABEL_18;
    v17 = *(_QWORD *)(a3 + 16);
    if ( !v17 )
      goto LABEL_15;
LABEL_25:
    v13 = -1;
LABEL_26:
    v11 = v17 - 1;
    if ( v11 != v8 )
      goto LABEL_11;
    if ( !v8 )
    {
      if ( v13 == -2 )
        goto LABEL_11;
      goto LABEL_15;
    }
    v12 = (const void *)a1[1];
    goto LABEL_9;
  }
  if ( !v6 )
    goto LABEL_18;
  v10 = *(_QWORD *)(a3 + 16);
  if ( !v10 )
  {
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_15;
  }
LABEL_6:
  v11 = v10 - 1;
  if ( v11 == v8 )
  {
    if ( v8 )
    {
      v12 = (const void *)a1[1];
      v13 = 0;
      goto LABEL_9;
    }
LABEL_18:
    LOBYTE(v14) = 0;
    return v14;
  }
LABEL_15:
  v14 = *(_DWORD *)(a2 + 64);
  v15 = *(_DWORD *)(a3 + 64);
  if ( v14 != v15 )
  {
LABEL_16:
    LOBYTE(v14) = v15 < v14;
    return v14;
  }
  if ( v5 != v6 )
  {
    LOBYTE(v14) = v5 < v6;
    return v14;
  }
LABEL_39:
  v19 = haystack;
  if ( *(_QWORD *)(a3 + 16) )
    v19 = *(const char **)(a3 + 8);
  v20 = haystack;
  if ( *(_QWORD *)(a2 + 16) )
    v20 = *(const char **)(a2 + 8);
  return (unsigned int)strcmp(v20, v19) >> 31;
}
