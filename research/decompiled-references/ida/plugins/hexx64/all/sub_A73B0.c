_DWORD *__fastcall sub_A73B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rsi
  int v15; // edx
  _DWORD *result; // rax
  __int64 v17; // rax

  if ( *(_QWORD *)(a1 + 376) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC3BBu, a3);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 64);
  v5 = **(unsigned int **)(a1 + 368);
  if ( (unsigned int)v5 >= *(_DWORD *)(v3 + 64) )
    sub_A0CB0(a3);
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8 * v5);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = *(_QWORD *)(v7 + 352);
  v10 = *(char **)(v7 + 344);
  v11 = &v10[4 * v9];
  if ( v10 != v11 )
  {
    while ( v8 != *(_DWORD *)v10 )
    {
      v10 += 4;
      if ( v11 == v10 )
        goto LABEL_9;
    }
    if ( v11 != v10 )
    {
      memmove(v10, v10 + 4, v11 - v10 - 4);
      v9 = *(_QWORD *)(v7 + 352) - 1LL;
      *(_QWORD *)(v7 + 352) = v9;
    }
  }
LABEL_9:
  if ( !v9 )
    **(_DWORD **)(v7 + 64) |= 0x400u;
  v12 = *(_QWORD *)(a2 + 352);
  v13 = *(_DWORD *)(a1 + 72);
  v14 = *(_QWORD *)(a2 + 344);
  if ( *(_QWORD *)(a2 + 360) < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve(a2 + 344, v14, v12 + 1, 4);
    *(_QWORD *)(a2 + 344) = v17;
    v14 = v17;
    v12 = *(_QWORD *)(a2 + 352);
  }
  *(_DWORD *)(v14 + 4 * v12) = v13;
  v15 = *(_DWORD *)(a2 + 72);
  ++*(_QWORD *)(a2 + 352);
  result = *(_DWORD **)(a1 + 368);
  *result = v15;
  return result;
}

