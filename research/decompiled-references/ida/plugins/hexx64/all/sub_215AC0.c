char __fastcall sub_215AC0(_QWORD *a1, int a2, int a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // esi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  int v13; // eax
  bool v14; // cf
  int v15; // eax
  _DWORD *v16; // r8
  _DWORD *v17; // rsi
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  const char *v21; // rsi
  const char *v22; // rdi
  unsigned __int64 v23; // rax

  v6 = 13LL * a2;
  v7 = a1[54];
  v8 = v7 + 8 * v6;
  v9 = v7 + 104LL * a3;
  v10 = *(_DWORD *)(v9 + 24) & 0x100;
  if ( (*(_DWORD *)(v8 + 24) & 0x100) != 0 )
  {
    if ( !v10 )
      goto LABEL_23;
  }
  else if ( v10 )
  {
    goto LABEL_11;
  }
  v11 = *(_DWORD *)v9 - 3;
  if ( (unsigned int)(*(_DWORD *)v8 - 3) > 1 )
  {
    if ( v11 > 1 )
      goto LABEL_5;
    goto LABEL_11;
  }
  if ( v11 > 1 )
  {
LABEL_23:
    LOBYTE(v15) = 1;
    return v15;
  }
  if ( (*(_DWORD *)(v8 + 24) & 0x100) == 0 )
  {
    v23 = *(_QWORD *)(v9 + 16);
    v14 = *(_QWORD *)(v8 + 16) < v23;
    if ( *(_QWORD *)(v8 + 16) != v23 )
      goto LABEL_9;
LABEL_5:
    v12 = sub_1C2AD0((int *)v8, (int *)v9, a4);
    if ( !v12 )
    {
      v13 = *(_DWORD *)v8;
      if ( *(int *)v8 <= 2 )
      {
        if ( v13 > 0 )
        {
          v14 = *(_QWORD *)(v8 + 16) < *(_QWORD *)(v9 + 16);
LABEL_9:
          LOBYTE(v15) = v14;
          return v15;
        }
LABEL_35:
        if ( !under_debugger )
          sub_383060(0xC7FAu, a4);
        BUG();
      }
      if ( (unsigned int)(v13 - 3) > 1 )
        goto LABEL_35;
      v21 = s1;
      if ( *(_QWORD *)(v9 + 40) )
        v21 = *(const char **)(v9 + 32);
      v22 = s1;
      if ( *(_QWORD *)(v8 + 40) )
        v22 = *(const char **)(v8 + 32);
      v12 = strcmp(v22, v21);
    }
    return v12 >> 31;
  }
  v16 = (_DWORD *)a1[57];
  v17 = &v16[a1[58]];
  if ( v16 == v17 )
  {
LABEL_11:
    LOBYTE(v15) = 0;
    return v15;
  }
  v18 = (_DWORD *)a1[57];
  do
  {
    if ( *v18 == a2 )
    {
      v19 = v18 - v16;
      goto LABEL_19;
    }
    ++v18;
  }
  while ( v17 != v18 );
  v19 = -1;
LABEL_19:
  v20 = (_DWORD *)a1[57];
  do
  {
    if ( *v20 == a3 )
    {
      LOBYTE(v15) = v20 - v16 > v19;
      return v15;
    }
    ++v20;
  }
  while ( v20 != v17 );
  LOBYTE(v15) = v19 < -1;
  return v15;
}

