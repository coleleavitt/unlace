_DWORD *__fastcall sub_168420(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  char *v6; // rdi
  char *v7; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  char *v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // r12d
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  int v20; // ebp
  _DWORD *result; // rax
  _DWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx

  v6 = *(char **)(a1 + 368);
  v7 = &v6[4 * *(_QWORD *)(a1 + 376)];
  if ( v6 == v7 )
    goto LABEL_36;
  while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)v6 )
  {
    v6 += 4;
    if ( v7 == v6 )
      goto LABEL_36;
  }
  if ( v7 == v6 )
  {
LABEL_36:
    if ( !under_debugger )
      sub_383060(0xCD71u, a4);
LABEL_39:
    BUG();
  }
  memmove(v6, v6 + 4, v7 - v6 - 4);
  --*(_QWORD *)(a1 + 376);
  v8 = *(char **)(a2 + 344);
  v9 = *(_QWORD *)(a2 + 352);
  v10 = &v8[4 * v9];
  if ( v8 == v10 )
    goto LABEL_32;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v8 )
  {
    v8 += 4;
    if ( v10 == v8 )
      goto LABEL_32;
  }
  if ( v10 == v8 )
  {
LABEL_32:
    if ( !v9 )
      **(_DWORD **)(a2 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_383060(0xCD72u, a4);
    goto LABEL_39;
  }
  memmove(v8, v8 + 4, v10 - v8 - 4);
  if ( (*(_QWORD *)(a2 + 352))-- == 1 )
    **(_DWORD **)(a2 + 64) |= 0x400u;
  v12 = *(_QWORD *)(a1 + 368);
  v13 = *(_QWORD *)(a1 + 376);
  v14 = *(_DWORD *)(a3 + 72);
  v15 = (_DWORD *)(v12 + 4 * v13);
  if ( (_DWORD *)v12 != v15 )
  {
    v16 = *(_DWORD **)(a1 + 368);
    while ( v14 != *v16 )
    {
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
    if ( v15 != v16 )
    {
      if ( !under_debugger )
        sub_383060(0xCD73u, a4);
      goto LABEL_39;
    }
  }
LABEL_20:
  v17 = v13 + 1;
  if ( *(_QWORD *)(a1 + 384) < v17 )
  {
    v25 = qvector_reserve(a1 + 368, v12, v17, 4);
    v26 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = v25;
    v15 = (_DWORD *)(v25 + 4 * v26);
  }
  *v15 = v14;
  ++*(_QWORD *)(a1 + 376);
  v18 = *(_DWORD **)(a3 + 344);
  v19 = *(_QWORD *)(a3 + 352);
  v20 = *(_DWORD *)(a1 + 72);
  result = v18;
  v22 = &v18[v19];
  if ( v18 != v22 )
  {
    while ( v20 != *result )
    {
      if ( v22 == ++result )
        goto LABEL_29;
    }
    if ( result != v22 )
    {
      if ( !under_debugger )
        sub_383060(0xCD74u, a4);
      goto LABEL_39;
    }
  }
LABEL_29:
  v23 = v19 + 1;
  if ( *(_QWORD *)(a3 + 360) < v23 )
  {
    result = (_DWORD *)qvector_reserve(a3 + 344, (__int64)v18, v23, 4);
    v24 = *(_QWORD *)(a3 + 352);
    *(_QWORD *)(a3 + 344) = result;
    result[v24] = v20;
  }
  else
  {
    *v22 = v20;
  }
  ++*(_QWORD *)(a3 + 352);
  return result;
}

