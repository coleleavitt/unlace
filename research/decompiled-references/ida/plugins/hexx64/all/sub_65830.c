__int64 __fastcall sub_65830(_QWORD *a1, unsigned int a2, double a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ecx
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // r15
  unsigned int *v15; // r13
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  char *v20; // [rsp+8h] [rbp-40h]

  sub_64340(a1 + 7, a2, a3);
  v4 = a1[4];
  v5 = *(_DWORD *)(v4 + 64);
  if ( a2 >= v5 )
    sub_65460(a3);
  v6 = (_DWORD *)a1[9];
  v7 = &v6[a1[10]];
  if ( v6 == v7 )
    goto LABEL_8;
  while ( *v6 != a2 )
  {
    if ( v7 == ++v6 )
      goto LABEL_8;
  }
  if ( v7 == v6 )
  {
LABEL_8:
    v9 = v5 - 1;
    if ( (_DWORD)v9 == a2 )
      return 0;
    v10 = *(_QWORD *)(v4 + 528);
    v11 = *(_QWORD *)(v10 + 8LL * a2);
    v12 = *(_QWORD *)(v11 + 352);
    if ( *(_QWORD *)(v11 + 48) )
    {
      if ( v12 )
        return 0;
      if ( *(_DWORD *)(v11 + 76) == 2 )
      {
        if ( !under_debugger )
          sub_383060(0xCA3Au, a3);
        BUG();
      }
LABEL_12:
      sub_64190(a1 + 7, a2, a3);
      return 0;
    }
    v13 = *(_DWORD *)(v11 + 76);
    if ( v13 == 6 )
    {
      if ( v12 )
        return 0;
      goto LABEL_12;
    }
    if ( v13 == 2 )
    {
      if ( !v12 )
        goto LABEL_12;
      v14 = 4 * v12;
      v20 = (char *)qalloc_or_throw(v14, v4, v10, v9);
      memcpy(v20, *(const void **)(v11 + 344), v14);
      v15 = (unsigned int *)&v20[v14];
      if ( v14 )
      {
        v16 = (unsigned int *)v20;
        do
        {
          v17 = *(_QWORD *)(v11 + 64);
          v18 = *v16;
          if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
            sub_65460(a3);
          sub_A8320(*(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18));
          ++v16;
        }
        while ( v15 != v16 );
      }
      v19 = *(_QWORD *)(v11 + 352);
      if ( v20 )
        qfree((__int64)v20);
      if ( v19 )
        return 0;
      v12 = *(_QWORD *)(v11 + 352);
    }
    if ( v12 )
    {
      sub_64190(a1 + 5, a2, a3);
      return 0;
    }
    goto LABEL_12;
  }
  return 0;
}

