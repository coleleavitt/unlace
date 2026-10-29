__int64 __fastcall sub_32B7F0(__int64 *a1, __int64 a2, const char *a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  size_t v11; // rax
  __int64 v12; // r13
  size_t v13; // r14
  size_t v14; // r15
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-60h]

  v3 = print_tinfo();
  if ( (_BYTE)v3 )
    return v3;
  v4 = a1[1];
  if ( v4 )
  {
    v6 = v4 + 1;
    v7 = a1[1];
    v5 = *a1;
    --v4;
    if ( a1[2] >= v6 )
      goto LABEL_4;
  }
  else
  {
    v5 = *a1;
    v6 = 2;
    v7 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_4;
  }
  v18 = qvector_reserve((__int64)a1, v5, v6, 1);
  *a1 = v18;
  v5 = v18;
LABEL_4:
  a1[1] = v6;
  *(_BYTE *)(v5 + v7) = 0;
  *(_BYTE *)(*a1 + v4) = 63;
  if ( a3 )
  {
    v8 = a1[1];
    v9 = 2;
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = *a1;
      --v8;
      if ( a1[2] >= v9 )
        goto LABEL_7;
    }
    else
    {
      v10 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_7;
    }
    v20 = qvector_reserve((__int64)a1, v10, v9, 1);
    *a1 = v20;
    v10 = v20;
LABEL_7:
    a1[1] = v9;
    *(_BYTE *)(v10 + v8) = 32;
    *(_BYTE *)(*a1 + v8 + 1) = 0;
    v11 = strlen(a3);
    v12 = a1[1];
    v13 = v11;
    v14 = v11;
    if ( v12 )
    {
      --v12;
      v15 = *a1;
      v14 = v11 + v12;
      v16 = v11 + v12 + 1;
      if ( a1[2] >= v16 )
        goto LABEL_9;
    }
    else
    {
      v15 = *a1;
      v16 = v11 + 1;
      if ( a1[2] >= v11 + 1 )
      {
LABEL_9:
        a1[1] = v16;
        *(_BYTE *)(v15 + v14) = 0;
        memmove((void *)(v12 + *a1), a3, v13);
        return v3;
      }
    }
    v21 = v16;
    v19 = qvector_reserve((__int64)a1, v15, v16, 1);
    *a1 = v19;
    v16 = v21;
    v15 = v19;
    goto LABEL_9;
  }
  return v3;
}

