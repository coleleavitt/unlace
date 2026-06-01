const char **__fastcall sub_963A0(_QWORD *a1, unsigned int a2, __int64 *a3)
{
  const char **result; // rax
  const char *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdx
  const char **v8; // r12
  size_t v9; // rax
  __int64 v10; // r14
  size_t v11; // r15
  size_t v12; // r8
  __int64 v13; // rsi
  size_t v14; // rdx
  unsigned __int64 v15; // r12
  size_t v16; // r15
  __int64 v17; // r14
  size_t v18; // r8
  __int64 v19; // rsi
  size_t v20; // rax
  __int64 v21; // r12
  size_t v22; // r13
  size_t v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // [rsp+0h] [rbp-48h]
  size_t v29; // [rsp+0h] [rbp-48h]
  size_t v30; // [rsp+8h] [rbp-40h]

  result = (const char **)sub_878F0(a1);
  if ( a2 < (unsigned __int64)result[1] )
  {
    v5 = src;
    result = (const char **)&(*result)[24 * a2];
    if ( result[1] )
    {
      v5 = *result;
      if ( !*result )
        return result;
    }
    else if ( !src )
    {
      return result;
    }
    v6 = *(_QWORD *)(*a1 + 16LL);
    v7 = *(_QWORD *)(v6 + 264);
    if ( v7 && strncmp(v5, *(const char **)(v6 + 256), v7 - 1) )
    {
      result = (const char **)sub_95C10((__int64)a1);
      v8 = result;
      if ( !result )
        return result;
      v9 = strlen((const char *)result);
      v10 = a3[1];
      v11 = v9;
      v12 = v9;
      if ( v10 )
      {
        --v10;
        v12 = v9 + v10;
      }
      v13 = *a3;
      v14 = v12 + 1;
      if ( a3[2] < v12 + 1 )
      {
        v30 = v12;
        v28 = v12 + 1;
        v26 = qvector_reserve(a3, v13, v14, 1);
        v12 = v30;
        v14 = v28;
        *a3 = v26;
        v13 = v26;
      }
      a3[1] = v14;
      *(_BYTE *)(v13 + v12) = 0;
      memmove((void *)(v10 + *a3), v8, v11);
      v15 = *(_QWORD *)(v6 + 264);
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v15 != 1 )
        {
          v17 = a3[1];
          v18 = v15 - 1;
          if ( v17 )
          {
            --v17;
            v18 = v16 + v17;
            v15 += v17;
          }
          v19 = *a3;
          if ( a3[2] < v15 )
          {
            v29 = v18;
            v27 = qvector_reserve(a3, v19, v15, 1);
            v18 = v29;
            *a3 = v27;
            v19 = v27;
          }
          a3[1] = v15;
          *(_BYTE *)(v19 + v18) = 0;
          memcpy((void *)(v17 + *a3), *(const void **)(v6 + 256), v16);
        }
      }
    }
    v20 = strlen(v5);
    v21 = a3[1];
    v22 = v20;
    v23 = v20;
    if ( v21 )
    {
      --v21;
      v23 = v20 + v21;
    }
    v24 = *a3;
    if ( a3[2] < v23 + 1 )
    {
      v25 = qvector_reserve(a3, v24, v23 + 1, 1);
      *a3 = v25;
      v24 = v25;
    }
    a3[1] = v23 + 1;
    *(_BYTE *)(v24 + v23) = 0;
    return (const char **)memmove((void *)(v21 + *a3), v5, v22);
  }
  return result;
}
