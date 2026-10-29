bool __fastcall sub_11E140(unsigned int *a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx

  result = 0;
  if ( (a1[1] & 0x10) != 0 )
  {
    v2 = *a1;
    if ( (unsigned int)v2 > 0x3B )
    {
      return (unsigned int)(v2 - 63) > 1;
    }
    else
    {
      v3 = 0xCFFFC0000000003LL;
      if ( !_bittest64(&v3, v2) )
        return (unsigned int)v2 > 0x25 || (unsigned int)v2 <= 0x1E;
    }
  }
  return result;
}

