void __fastcall sub_5FF0(__int64 a1, __int64 a2)
{
  size_t v4; // rbx
  size_t v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  void *v8; // rax
  const void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  void *v20; // rax
  const void *v21; // rsi
  size_t n; // [rsp+0h] [rbp-40h]
  size_t na; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 16) = v4;
    v9 = *(const void **)a2;
    *(_QWORD *)a1 = v8;
    memcpy(v8, v9, v4);
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    v20 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v20;
    v21 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v5;
    memcpy(v20, v21, v5);
    *(_QWORD *)(a1 + 32) = v5;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v6 = *(_QWORD *)(a2 + 56);
  if ( v6 )
  {
    v17 = qalloc_or_throw(96 * v6);
    *(_QWORD *)(a1 + 48) = v17;
    v18 = v17;
    v19 = 0;
    *(_QWORD *)(a1 + 64) = v6;
    while ( 1 )
    {
      sub_5FF0(96 * v19 + v18, 96 * v19 + *(_QWORD *)(a2 + 48));
      if ( v6 == ++v19 )
        break;
      v18 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 56) = v6;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v7 = *(_QWORD *)(a2 + 80);
  if ( v7 )
  {
    v10 = qalloc_or_throw(48 * v7);
    *(_QWORD *)(a1 + 72) = v10;
    v11 = v10;
    v12 = 0;
    *(_QWORD *)(a1 + 88) = v7;
    while ( 1 )
    {
      v13 = 48 * v12 + v11;
      v14 = *(_QWORD *)(a2 + 72) + 48 * v12;
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      if ( *(_QWORD *)(v14 + 8) )
      {
        n = *(_QWORD *)(v14 + 8);
        v15 = (void *)qalloc_or_throw(n);
        *(_QWORD *)v13 = v15;
        *(_QWORD *)(v13 + 16) = n;
        memcpy(v15, *(const void **)v14, n);
        *(_QWORD *)(v13 + 8) = n;
      }
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 32) = 0;
      if ( *(_QWORD *)(v14 + 32) )
      {
        na = *(_QWORD *)(v14 + 32);
        v16 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v13 + 24) = v16;
        ++v12;
        *(_QWORD *)(v13 + 40) = na;
        memcpy(v16, *(const void **)(v14 + 24), na);
        *(_QWORD *)(v13 + 32) = na;
        if ( v7 == v12 )
        {
LABEL_14:
          *(_QWORD *)(a1 + 80) = v7;
          return;
        }
      }
      else if ( v7 == ++v12 )
      {
        goto LABEL_14;
      }
      v11 = *(_QWORD *)(a1 + 72);
    }
  }
}

