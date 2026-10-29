__int64 __fastcall sub_12D70(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 36) )
    return v2;
  v2 = strncmp((const char *)a2, "__info", 6u);
  if ( !v2 )
  {
    if ( !strncmp((const char *)(a2 + 16), "__PRELINK", 9u) )
    {
      *(_BYTE *)(a1 + 8) = 1;
      return 1;
    }
    return v2;
  }
  return 0;
}

