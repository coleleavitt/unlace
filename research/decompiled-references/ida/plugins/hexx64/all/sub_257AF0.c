const char *__fastcall sub_257AF0(__int64 a1, unsigned __int64 *a2, int a3, double a4)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  int v8; // edi
  unsigned __int64 v9; // rdi

  v4 = **(const char ***)(a1 + 72);
  if ( !v4 )
    return v4;
  v5 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    goto LABEL_13;
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return nullptr;
  v6 = *a2;
  while ( 1 )
  {
    while ( v6 < *(_QWORD *)(v5 + 24) )
    {
LABEL_20:
      v5 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        return nullptr;
    }
    if ( v6 == *(_QWORD *)(v5 + 24) )
      break;
LABEL_7:
    v5 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return nullptr;
  }
  v8 = *(_DWORD *)(v5 + 32);
  if ( *((_DWORD *)a2 + 2) < v8 )
    goto LABEL_20;
  if ( *((_DWORD *)a2 + 2) > v8 )
    goto LABEL_7;
  if ( v4 == (const char *)v5 )
    return nullptr;
LABEL_13:
  if ( !a3 )
  {
    v9 = v5 + 24;
    if ( !*(_BYTE *)(v5 + 64) )
    {
      *(_BYTE *)(v5 + 64) = 1;
      goto LABEL_16;
    }
    return nullptr;
  }
  if ( a3 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC396u, a4);
    BUG();
  }
  v9 = v5 + 24;
LABEL_16:
  v4 = s1;
  if ( !*(_QWORD *)(v9 + 24) )
    return v4;
  return *(const char **)(v9 + 16);
}

