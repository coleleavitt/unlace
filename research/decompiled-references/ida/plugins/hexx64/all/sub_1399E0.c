__int64 __fastcall sub_1399E0(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  const char *v7; // rbp

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 || *(_DWORD *)v3 != 42 || *(_BYTE *)(v3 + 32) != 4 )
    return v2;
  v5 = *(_QWORD *)(v3 + 40);
  v2 = 1;
  if ( *(_DWORD *)v5 == 6 )
  {
    if ( *(_BYTE *)(v5 + 32) != 4 )
      return 0;
    v3 = *(_QWORD *)(v3 + 40);
    v2 = -1;
  }
  v6 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)v6 == 56 && *(_BYTE *)(v6 + 32) == 11 )
  {
    v7 = *(const char **)(v6 + 40);
    if ( a2 )
    {
      if ( strcmp(*(const char **)(v6 + 40), "__eh34_try") )
      {
        if ( strcmp(v7, "__eh34_wind") )
          return 0;
      }
    }
    else if ( strncmp(*(const char **)(v6 + 40), "__eh34_", 7u) )
    {
      return 0;
    }
    return v2;
  }
  return 0;
}

