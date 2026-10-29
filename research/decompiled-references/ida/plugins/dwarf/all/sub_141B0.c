__int64 __fastcall sub_141B0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 9) )
    return 0;
  if ( !strcmp((const char *)(a2 + 8), "__DWARF") )
    *(_BYTE *)(a1 + 9) = 1;
  return 0;
}

