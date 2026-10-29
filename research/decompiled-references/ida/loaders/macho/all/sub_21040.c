__int64 __fastcall sub_21040(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v3; // ebp

  v3 = 1;
  if ( strcmp(a3, "__LINKEDIT") )
  {
    if ( strncmp(a3, "__CTF", 5u) )
    {
      v3 = 0;
      if ( (*(_BYTE *)(a2 + 364) & 8) != 0 )
      {
        v3 = 1;
        if ( strncmp(a3, "__PLK", 5u) )
          LOBYTE(v3) = strncmp(a3, "__PRELINK", 9u) == 0;
      }
    }
  }
  return v3;
}

