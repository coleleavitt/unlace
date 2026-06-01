void *__fastcall sub_11EA00(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // rdi
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  char *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdx
  void *result; // rax

  v5 = a1[3];
  v6 = 4 * a3;
  v7 = *(char **)(a2 + 368);
  v8 = *(unsigned int *)(v5 + 4 * a3);
  v9 = &v7[4 * *(_QWORD *)(a2 + 376)];
  if ( v7 != v9 )
  {
    while ( (_DWORD)v8 != *(_DWORD *)v7 )
    {
      v7 += 4;
      if ( v9 == v7 )
        goto LABEL_7;
    }
    if ( v9 != v7 )
    {
      memmove(v7, v7 + 4, v9 - v7 - 4);
      --*(_QWORD *)(a2 + 376);
      v8 = *(unsigned int *)(a1[3] + 4 * a3);
    }
  }
LABEL_7:
  v10 = *(_QWORD *)(a2 + 64);
  if ( (unsigned int)v8 >= *(_DWORD *)(v10 + 64) )
    sub_117EC0();
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v8);
  v12 = *(char **)(v11 + 344);
  v13 = *(_QWORD *)(v11 + 352);
  v14 = &v12[4 * v13];
  if ( v12 != v14 )
  {
    while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)v12 )
    {
      v12 += 4;
      if ( v14 == v12 )
        goto LABEL_14;
    }
    if ( v12 != v14 )
    {
      memmove(v12, v12 + 4, v14 - v12 - 4);
      v13 = *(_QWORD *)(v11 + 352) - 1LL;
      *(_QWORD *)(v11 + 352) = v13;
    }
  }
LABEL_14:
  if ( !v13 )
    **(_DWORD **)(v11 + 64) |= 0x400u;
  v15 = *a1;
  v16 = (_QWORD *)(*a1 + 24 * a3);
  if ( *v16 )
  {
    v16[1] = 0;
    qfree();
    v15 = *a1;
  }
  memmove(v16, v16 + 3, v15 + 24 * a1[1] - (_QWORD)v16 - 24);
  v17 = a1[3];
  v18 = a1[4];
  --a1[1];
  result = memmove((void *)(v6 + v17), (const void *)(v6 + v17 + 4), -4 - v6 + 4 * v18);
  --a1[4];
  return result;
}

