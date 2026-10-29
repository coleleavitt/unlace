__int64 __fastcall sub_11CB20(__int64 a1, const char *a2)
{
  unsigned int v2; // edx
  unsigned int v4; // edx

  v2 = 0;
  if ( *(_DWORD *)a1 != 56 )
    return v2;
  if ( *(_BYTE *)(a1 + 32) != 11 )
    return v2;
  v2 = 1;
  if ( !a2 )
    return v2;
  LOBYTE(v4) = strcmp(a2, *(const char **)(a1 + 40)) == 0;
  return v4;
}

