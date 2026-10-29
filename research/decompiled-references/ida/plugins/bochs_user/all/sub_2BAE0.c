__int64 __fastcall sub_2BAE0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rbx

  if ( *(_BYTE *)(a2 + a3 - 2) != 62 )
    return 9;
  v5 = a2 + a3 - 1;
  if ( v5 < a2 )
    return 9;
  while ( *(_BYTE *)v5 != 60 )
  {
    if ( --v5 < a2 )
      return 9;
  }
  if ( !strncmp((const char *)(v5 + 1), "bochs", 5u) && a4 == (unsigned int)strtol((const char *)(v5 + 7), nullptr, 10) )
    return 0;
  else
    return 9;
}

