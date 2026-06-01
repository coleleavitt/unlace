__int64 sub_53A90()
{
  __int64 v0; // rax
  unsigned int v1; // edx
  char v2; // al

  v0 = getseg();
  v1 = 0;
  if ( v0 && *(_BYTE *)(v0 + 43) )
  {
    v2 = *(_BYTE *)(v0 + 184);
    if ( v2 )
      LOBYTE(v1) = (unsigned __int8)(v2 - 2) <= 1u;
    else
      return 1;
  }
  return v1;
}

