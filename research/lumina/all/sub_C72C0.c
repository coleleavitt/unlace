__int64 __fastcall sub_C72C0(__int64 a1, const char *a2)
{
  int v2; // ebx
  const char **i; // rbp
  __int64 v4; // rax
  int v5; // ebx
  _UNKNOWN **v6; // rax

  if ( a2 )
  {
    v2 = 0;
    for ( i = (const char **)&off_241160; ; i += 3 )
    {
      ++v2;
      if ( !strcmp(a2, *i) )
        break;
      if ( v2 == 28 )
        return 0;
    }
  }
  else
  {
    v2 = 0;
  }
  v4 = v2;
  if ( *(&off_241160 + 3 * v2 + 1) )
    return (__int64)*(&off_241160 + 3 * v4);
  v5 = v2 + 1;
  v6 = &off_241160 + 3 * v5 + 1;
  while ( v5 != 29 )
  {
    v6 += 3;
    if ( *(v6 - 3) )
    {
      v4 = v5;
      return (__int64)*(&off_241160 + 3 * v4);
    }
    ++v5;
  }
  return 0;
}
