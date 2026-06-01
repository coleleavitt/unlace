char __fastcall sub_211240(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // esi
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // eax
  bool v13; // cf
  int v14; // eax
  _DWORD *v15; // r8
  _DWORD *v16; // rsi
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  const char *v20; // rsi
  const char *v21; // rdi
  unsigned __int64 v22; // rax

  v5 = 13LL * a2;
  v6 = a1[54];
  v7 = v6 + 8 * v5;
  v8 = v6 + 104LL * a3;
  v9 = *(_DWORD *)(v8 + 24) & 0x100;
  if ( (*(_DWORD *)(v7 + 24) & 0x100) != 0 )
  {
    if ( !v9 )
      goto LABEL_23;
  }
  else if ( v9 )
  {
    goto LABEL_11;
  }
  v10 = *(_DWORD *)v8 - 3;
  if ( (unsigned int)(*(_DWORD *)v7 - 3) > 1 )
  {
    if ( v10 > 1 )
      goto LABEL_5;
    goto LABEL_11;
  }
  if ( v10 > 1 )
  {
LABEL_23:
    LOBYTE(v14) = 1;
    return v14;
  }
  if ( (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
  {
    v22 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)(v7 + 16) < v22;
    if ( *(_QWORD *)(v7 + 16) != v22 )
      goto LABEL_9;
LABEL_5:
    v11 = sub_1BE710((int *)v7, (int *)v8);
    if ( !v11 )
    {
      v12 = *(_DWORD *)v7;
      if ( *(int *)v7 <= 2 )
      {
        if ( v12 > 0 )
        {
          v13 = *(_QWORD *)(v7 + 16) < *(_QWORD *)(v8 + 16);
LABEL_9:
          LOBYTE(v14) = v13;
          return v14;
        }
LABEL_35:
        if ( !under_debugger )
          sub_37E160(51194);
        BUG();
      }
      if ( (unsigned int)(v12 - 3) > 1 )
        goto LABEL_35;
      v20 = s1;
      if ( *(_QWORD *)(v8 + 40) )
        v20 = *(const char **)(v8 + 32);
      v21 = s1;
      if ( *(_QWORD *)(v7 + 40) )
        v21 = *(const char **)(v7 + 32);
      v11 = strcmp(v21, v20);
    }
    return v11 >> 31;
  }
  v15 = (_DWORD *)a1[57];
  v16 = &v15[a1[58]];
  if ( v15 == v16 )
  {
LABEL_11:
    LOBYTE(v14) = 0;
    return v14;
  }
  v17 = (_DWORD *)a1[57];
  do
  {
    if ( *v17 == a2 )
    {
      v18 = v17 - v15;
      goto LABEL_19;
    }
    ++v17;
  }
  while ( v16 != v17 );
  v18 = -1;
LABEL_19:
  v19 = (_DWORD *)a1[57];
  do
  {
    if ( *v19 == a3 )
    {
      LOBYTE(v14) = v19 - v15 > v18;
      return v14;
    }
    ++v19;
  }
  while ( v19 != v16 );
  LOBYTE(v14) = v18 < -1;
  return v14;
}

