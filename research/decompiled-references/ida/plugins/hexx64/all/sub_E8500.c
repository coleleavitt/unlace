__int64 __fastcall sub_E8500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 i; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rbp
  const void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // rax
  void *v23; // rax
  const void *v24; // rsi
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v12 = 0;
    v13 = qalloc_or_throw(80 * v5, a2, a3, a4);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = v13;
    for ( i = v13; ; i = *(_QWORD *)a1 )
    {
      v16 = 80 * v12 + i;
      v17 = *(_QWORD *)a2 + 80 * v12;
      *(_DWORD *)v16 = 0;
      v18 = (const void *)v17;
      copy_argloc();
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      v20 = *(_QWORD *)(v17 + 24);
      if ( v20 )
      {
        na = *(_QWORD *)(v17 + 24);
        v21 = (void *)qalloc_or_throw(na, v17, v19, v20);
        *(_QWORD *)(v16 + 16) = v21;
        *(_QWORD *)(v16 + 32) = na;
        v18 = *(const void **)(v17 + 16);
        memcpy(v21, v18, na);
        *(_QWORD *)(v16 + 24) = na;
      }
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      v15 = *(_QWORD *)(v17 + 48);
      if ( v15 )
      {
        n = *(_QWORD *)(v17 + 48);
        v22 = (void *)qalloc_or_throw(n, (__int64)v18, v19, v15);
        *(_QWORD *)(v16 + 40) = v22;
        *(_QWORD *)(v16 + 56) = n;
        memcpy(v22, *(const void **)(v17 + 40), n);
        *(_QWORD *)(v16 + 48) = n;
      }
      *(_QWORD *)(v16 + 64) = 0;
      copy_tinfo_t();
      ++v12;
      *(_DWORD *)(v16 + 72) = *(_DWORD *)(v17 + 72);
      if ( v5 == v12 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v5;
  }
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = v6;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 40) = 0;
  copy_argloc();
  v9 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v10 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 56) = v9;
  if ( v10 )
  {
    v23 = (void *)qalloc_or_throw(8 * v10, a2 + 40, v7, v8);
    *(_QWORD *)(a1 + 64) = v23;
    v24 = *(const void **)(a2 + 64);
    *(_QWORD *)(a1 + 80) = v10;
    memcpy(v23, v24, 8 * v10);
    *(_QWORD *)(a1 + 72) = v10;
  }
  result = *(unsigned __int8 *)(a2 + 88);
  *(_BYTE *)(a1 + 88) = result;
  return result;
}

