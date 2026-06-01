unsigned int *__fastcall sub_668F0(__int64 a1, double a2)
{
  unsigned int *result; // rax
  int v3; // ebp
  int v5; // r12d
  __int64 v6; // rbx
  char *v7; // rdi
  char *v8; // rax
  unsigned int *v9; // r15
  _QWORD *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx

  result = *(unsigned int **)(a1 + 376);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 || (v3 = *(_DWORD *)(a1 + 72), v5 = **(_DWORD **)(a1 + 368), v3 + 1 != v5) )
    {
      if ( !under_debugger )
        sub_383060(0xCACFu, a2);
      goto LABEL_27;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(char **)(v6 + 344);
    v8 = &v7[4 * *(_QWORD *)(v6 + 352)];
    if ( v7 != v8 )
    {
      while ( v3 != *(_DWORD *)v7 )
      {
        v7 += 4;
        if ( v8 == v7 )
          goto LABEL_10;
      }
      if ( v8 != v7 )
      {
        memmove(v7, v7 + 4, v8 - v7 - 4);
        --*(_QWORD *)(v6 + 352);
      }
    }
LABEL_10:
    v9 = *(unsigned int **)(a1 + 344);
    result = (unsigned int *)(4LL * *(_QWORD *)(a1 + 352));
    if ( result )
    {
      while ( 1 )
      {
        v10 = *(_QWORD **)(a1 + 8);
        v11 = *v9;
        v12 = v10[43];
        v13 = v10[44];
        v14 = (_DWORD *)(v12 + 4 * v13);
        if ( (_DWORD *)v12 == v14 )
          goto LABEL_19;
        v15 = (_DWORD *)v10[43];
        while ( (_DWORD)v11 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_19;
        }
        if ( v14 == v15 )
        {
LABEL_19:
          v17 = v13 + 1;
          if ( v10[45] < v17 )
          {
            v18 = qvector_reserve((__int64)(v10 + 43), v12, v17, 4);
            v19 = v10[44];
            v10[43] = v18;
            v14 = (_DWORD *)(v18 + 4 * v19);
          }
          *v14 = v11;
          ++v10[44];
          v11 = *v9;
        }
        v16 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v11 >= *(_DWORD *)(v16 + 64) )
          break;
        ++v9;
        sub_66220(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v11) + 368LL, v3, v5, a2);
        result = (unsigned int *)(*(_QWORD *)(a1 + 344) + 4LL * *(_QWORD *)(a1 + 352));
        if ( v9 == result )
          return result;
      }
      if ( !under_debugger )
        sub_383060(0xCDEFu, a2);
LABEL_27:
      BUG();
    }
  }
  return result;
}

