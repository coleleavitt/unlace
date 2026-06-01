__int64 __fastcall sub_47B0(__int64 a1, const char *a2, const char *a3)
{
  __int64 v3; // r13
  __int64 v5; // rbp
  __int64 i; // rbx
  const char *v7; // rdi
  const char *v8; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
    return -1;
  v5 = 0;
  for ( i = *(_QWORD *)(a1 + 40) + 24LL; ; i += 80 )
  {
    v7 = s1;
    if ( *(_QWORD *)(i + 8) )
      v7 = *(const char **)i;
    if ( !strcmp(v7, a2) )
    {
      v8 = s1;
      if ( *(_QWORD *)(i + 32) )
        v8 = *(const char **)(i + 24);
      if ( !strcmp(v8, a3) )
        break;
    }
    if ( ++v5 == v3 )
      return -1;
  }
  return v5;
}

