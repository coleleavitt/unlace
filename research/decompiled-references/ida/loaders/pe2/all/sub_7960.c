__int64 __fastcall sub_7960(int a1, const char *a2)
{
  unsigned int v2; // r12d

  v2 = 0;
  if ( (a1 & 0x20000020) != 0 )
    return v2;
  if ( strcasecmp(a2, ".rsrc") )
  {
    v2 = 1;
    if ( (a1 & 0x82000000) != 0x2000000 && strcasecmp(a2, ".edata") )
    {
      if ( strcasecmp(a2, ".reloc") )
        LOBYTE(v2) = strcasecmp(a2, ".debug") == 0;
    }
    return v2;
  }
  return (word_379D0 & 2) == 0;
}

