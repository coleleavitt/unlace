__int64 __fastcall sub_141F0(__int64 a1, __int64 a2)
{
  const char *v2; // r12

  v2 = (const char *)(a2 + 16);
  if ( !*(_BYTE *)(a1 + 9) && !strcmp(v2, "__DWARF") )
    *(_BYTE *)(a1 + 9) = 1;
  if ( !*(_BYTE *)(a1 + 10)
    && *(_DWORD *)(a2 + 36)
    && !strncmp((const char *)a2, "__info", 6u)
    && !strncmp(v2, "__PRELINK", 9u) )
  {
    *(_BYTE *)(a1 + 10) = 1;
  }
  return 0;
}
