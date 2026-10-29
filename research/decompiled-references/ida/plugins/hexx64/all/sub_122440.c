void *__fastcall sub_122440(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r14
  char *v13; // rdi
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  void *result; // rax

  v6 = a1[3];
  v7 = 4 * a3;
  v8 = *(char **)(a2 + 368);
  v9 = *(unsigned int *)(v6 + 4 * a3);
  v10 = &v8[4 * *(_QWORD *)(a2 + 376)];
  if ( v8 != v10 )
  {
    while ( (_DWORD)v9 != *(_DWORD *)v8 )
    {
      v8 += 4;
      if ( v10 == v8 )
        goto LABEL_7;
    }
    if ( v10 != v8 )
    {
      memmove(v8, v8 + 4, v10 - v8 - 4);
      --*(_QWORD *)(a2 + 376);
      v9 = *(unsigned int *)(a1[3] + 4 * a3);
    }
  }
LABEL_7:
  v11 = *(_QWORD *)(a2 + 64);
  if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 64) )
    sub_11B900(a4);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v9);
  v13 = *(char **)(v12 + 344);
  v14 = *(_QWORD *)(v12 + 352);
  v15 = &v13[4 * v14];
  if ( v13 != v15 )
  {
    while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)v13 )
    {
      v13 += 4;
      if ( v15 == v13 )
        goto LABEL_14;
    }
    if ( v13 != v15 )
    {
      memmove(v13, v13 + 4, v15 - v13 - 4);
      v14 = *(_QWORD *)(v12 + 352) - 1LL;
      *(_QWORD *)(v12 + 352) = v14;
    }
  }
LABEL_14:
  if ( !v14 )
    **(_DWORD **)(v12 + 64) |= 0x400u;
  v16 = *a1;
  v17 = (__int64 *)(*a1 + 24 * a3);
  v18 = *v17;
  if ( *v17 )
  {
    v17[1] = 0;
    qfree(v18);
    v16 = *a1;
  }
  memmove(v17, v17 + 3, v16 + 24 * a1[1] - (_QWORD)v17 - 24);
  v19 = a1[3];
  v20 = a1[4];
  --a1[1];
  result = memmove((void *)(v7 + v19), (const void *)(v7 + v19 + 4), -4 - v7 + 4 * v20);
  --a1[4];
  return result;
}

