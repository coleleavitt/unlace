__int64 sub_58790()
{
  char v0; // al
  int v1; // edx
  unsigned int v2; // eax

  v0 = getinf() & 0xF;
  if ( v0 == 1 || !v0 && (unsigned int)getinf() == 11 )
    return 0;
  if ( (getinf() & 0xF) != 6 && (unsigned int)getinf() != 25 && (unsigned int)getinf() != 18 )
  {
    if ( dbg )
    {
      v1 = *(_DWORD *)(dbg + 16LL);
      v2 = v1 & 0xFFFFFFFD;
      LOBYTE(v2) = (v1 & 0xFFFFFFFD) == 1;
      LOBYTE(v1) = v1 == 17;
      return v1 | v2;
    }
    return 0;
  }
  return 1;
}
