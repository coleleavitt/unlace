__int64 __fastcall sub_3BD870(const char *a1)
{
  char v1; // al
  int v2; // edx

  if ( !strncmp(a1, "__OP", 4u) )
  {
    v1 = a1[4];
    if ( !v1 )
      return (unsigned int)strtol(a1 + 4, nullptr, 10) - 1;
    v2 = 4;
    while ( (unsigned __int8)(v1 - 48) <= 9u )
    {
      v1 = a1[++v2];
      if ( !v1 )
        return (unsigned int)strtol(a1 + 4, nullptr, 10) - 1;
    }
  }
  return 0xFFFFFFFFLL;
}

