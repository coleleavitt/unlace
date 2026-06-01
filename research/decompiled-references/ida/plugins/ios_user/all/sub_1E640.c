__int64 __fastcall sub_1E640(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 result; // rax
  void *v6; // rax
  const void *v7; // rsi
  __int64 v8; // rax
  size_t v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rdx
  const void **v14; // rbp
  __int64 v15; // r15
  void *v16; // rax
  void *v17; // rax
  const void *v18; // rsi
  __int64 v19; // rax
  size_t v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // rdx
  const void **v25; // rbp
  size_t v26; // r15
  void *v27; // rax
  size_t n; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t v31; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 16) = v3;
    v7 = *(const void **)a2;
    *(_QWORD *)a1 = v6;
    memcpy(v6, v7, 32 * v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(a2 + 32) )
  {
    na = *(_QWORD *)(a2 + 32);
    v19 = qalloc_or_throw();
    v20 = na;
    *(_QWORD *)(a1 + 24) = v19;
    v21 = v19;
    v22 = 0;
    *(_QWORD *)(a1 + 40) = na;
    while ( 1 )
    {
      v23 = 24 * v22 + v21;
      v24 = *(_QWORD *)(a2 + 24) + 24 * v22;
      *(_QWORD *)v23 = 0;
      v25 = (const void **)v24;
      *(_OWORD *)(v23 + 8) = 0;
      v26 = *(_QWORD *)(v24 + 8);
      if ( v26 )
      {
        nb = v20;
        v27 = (void *)qalloc_or_throw();
        *(_QWORD *)v23 = v27;
        ++v22;
        *(_QWORD *)(v23 + 16) = v26;
        memcpy(v27, *v25, v26);
        v20 = nb;
        *(_QWORD *)(v23 + 8) = v26;
        if ( nb == v22 )
        {
LABEL_19:
          *(_QWORD *)(a1 + 32) = v20;
          break;
        }
      }
      else if ( v20 == ++v22 )
      {
        goto LABEL_19;
      }
      v21 = *(_QWORD *)(a1 + 24);
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    v17 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 48) = v17;
    v18 = *(const void **)(a2 + 48);
    *(_QWORD *)(a1 + 64) = v4;
    memcpy(v17, v18, 8 * v4);
    *(_QWORD *)(a1 + 56) = v4;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( *(_QWORD *)(a2 + 80) )
  {
    n = *(_QWORD *)(a2 + 80);
    v8 = qalloc_or_throw();
    v9 = n;
    *(_QWORD *)(a1 + 72) = v8;
    v10 = v8;
    v11 = 0;
    *(_QWORD *)(a1 + 88) = n;
    while ( 1 )
    {
      v12 = 24 * v11 + v10;
      v13 = *(_QWORD *)(a2 + 72) + 24 * v11;
      *(_QWORD *)v12 = 0;
      v14 = (const void **)v13;
      *(_OWORD *)(v12 + 8) = 0;
      v15 = *(_QWORD *)(v13 + 8);
      if ( v15 )
      {
        v31 = v9;
        v16 = (void *)qalloc_or_throw();
        *(_QWORD *)v12 = v16;
        ++v11;
        *(_QWORD *)(v12 + 16) = v15;
        memcpy(v16, *v14, 8 * v15);
        v9 = v31;
        *(_QWORD *)(v12 + 8) = v15;
        if ( v31 == v11 )
        {
LABEL_13:
          *(_QWORD *)(a1 + 80) = v9;
          break;
        }
      }
      else if ( v9 == ++v11 )
      {
        goto LABEL_13;
      }
      v10 = *(_QWORD *)(a1 + 72);
    }
  }
  result = *(unsigned int *)(a2 + 96);
  *(_DWORD *)(a1 + 96) = result;
  return result;
}

