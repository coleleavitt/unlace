__int64 sub_55C30()
{
  __int16 v0; // ax
  unsigned int v1; // edx
  __int64 v2; // rax

  v0 = getinf();
  v1 = 1;
  if ( (v0 & 0x1006) != 0x1002 )
  {
    v2 = getseg();
    v1 = 0;
    if ( v2 )
      LOBYTE(v1) = *(_BYTE *)(v2 + 43) == 2;
  }
  return v1;
}

