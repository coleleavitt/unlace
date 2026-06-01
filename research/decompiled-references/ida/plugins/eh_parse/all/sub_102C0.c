__int64 __fastcall sub_102C0(__int64 a1, const char *a2, size_t a3)
{
  int v3; // eax
  size_t v4; // r12
  unsigned int v5; // eax
  const char *v6; // rbp
  unsigned int v7; // ebx
  const char *i; // r14
  const char *v9; // rbp
  _BYTE *v11; // rbp
  char v12; // al

  LOBYTE(v3) = a1 == 0;
  v4 = a3;
  LOBYTE(a3) = a2 == nullptr;
  v5 = a3 | v3;
  LOBYTE(v5) = (v4 == 0) | v5;
  if ( (_BYTE)v5 )
    return 0;
  v6 = (const char *)a1;
  v7 = v5;
  if ( strncmp((const char *)a1, a2, v4) )
  {
    if ( v4 == 1 || *(_BYTE *)a1 != 106 || *(_BYTE *)(a1 + 1) != 95 )
      return v7;
    for ( i = (const char *)(a1 + 2); *i == 95; ++i )
      ;
    if ( strncmp(i, a2, v4) )
      return v7;
    v6 = i;
  }
  v9 = &v6[v4];
  if ( *v9 )
  {
    if ( *v9 == 95 && (unsigned __int8)(v9[1] - 48) <= 9u )
    {
      v11 = v9 + 1;
      do
        v12 = *++v11;
      while ( (unsigned __int8)(v12 - 48) <= 9u );
      LOBYTE(v7) = v12 == 0;
    }
    return v7;
  }
  return 1;
}

