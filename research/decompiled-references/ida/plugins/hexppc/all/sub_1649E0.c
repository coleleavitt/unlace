_DWORD *__fastcall sub_1649E0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdi
  char *v6; // rdx
  char *v7; // rdi
  __int64 v8; // rcx
  char *v9; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // r12d
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // ebp
  _DWORD *result; // rax
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx

  v5 = *(char **)(a1 + 368);
  v6 = &v5[4 * *(_QWORD *)(a1 + 376)];
  if ( v5 == v6 )
    goto LABEL_36;
  while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)v5 )
  {
    v5 += 4;
    if ( v6 == v5 )
      goto LABEL_36;
  }
  if ( v6 == v5 )
  {
LABEL_36:
    if ( !under_debugger )
      sub_37EEE0(52593);
LABEL_39:
    BUG();
  }
  memmove(v5, v5 + 4, v6 - v5 - 4);
  --*(_QWORD *)(a1 + 376);
  v7 = *(char **)(a2 + 344);
  v8 = *(_QWORD *)(a2 + 352);
  v9 = &v7[4 * v8];
  if ( v7 == v9 )
    goto LABEL_32;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v7 )
  {
    v7 += 4;
    if ( v9 == v7 )
      goto LABEL_32;
  }
  if ( v9 == v7 )
  {
LABEL_32:
    if ( !v8 )
      **(_DWORD **)(a2 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_37EEE0(52594);
    goto LABEL_39;
  }
  memmove(v7, v7 + 4, v9 - v7 - 4);
  if ( (*(_QWORD *)(a2 + 352))-- == 1 )
    **(_DWORD **)(a2 + 64) |= 0x400u;
  v11 = *(_DWORD **)(a1 + 368);
  v12 = *(_QWORD *)(a1 + 376);
  v13 = *(_DWORD *)(a3 + 72);
  v14 = &v11[v12];
  if ( v11 != v14 )
  {
    v15 = *(_DWORD **)(a1 + 368);
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
    if ( v14 != v15 )
    {
      if ( !under_debugger )
        sub_37EEE0(52595);
      goto LABEL_39;
    }
  }
LABEL_20:
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v12 + 1) )
  {
    v21 = qvector_reserve();
    v22 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = v21;
    v14 = (_DWORD *)(v21 + 4 * v22);
  }
  *v14 = v13;
  ++*(_QWORD *)(a1 + 376);
  v16 = *(_QWORD *)(a3 + 352);
  v17 = *(_DWORD *)(a1 + 72);
  result = *(_DWORD **)(a3 + 344);
  v19 = &result[v16];
  if ( result != v19 )
  {
    while ( v17 != *result )
    {
      if ( v19 == ++result )
        goto LABEL_29;
    }
    if ( result != v19 )
    {
      if ( !under_debugger )
        sub_37EEE0(52596);
      goto LABEL_39;
    }
  }
LABEL_29:
  if ( *(_QWORD *)(a3 + 360) < (unsigned __int64)(v16 + 1) )
  {
    result = (_DWORD *)qvector_reserve();
    v20 = *(_QWORD *)(a3 + 352);
    *(_QWORD *)(a3 + 344) = result;
    result[v20] = v17;
  }
  else
  {
    *v19 = v17;
  }
  ++*(_QWORD *)(a3 + 352);
  return result;
}

