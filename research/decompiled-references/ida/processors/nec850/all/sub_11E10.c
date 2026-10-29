__int64 __fastcall sub_11E10(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(int *)(v2 + 64);
  if ( !(_DWORD)v3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(v2 + 56);
  v5 = 0;
  while ( strcasecmp(*(const char **)(v4 + 8 * v5), a2) )
  {
    if ( v3 == ++v5 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v5;
}

