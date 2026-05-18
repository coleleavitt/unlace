const char *__fastcall sub_D4AC0(char *s, int a2)
{
  const char *v2; // rbx
  const char *v3; // rbx
  int v4; // ebp
  const char *v5; // rbx

  if ( !s )
    return nullptr;
  v2 = s;
  if ( a2 < 0 )
    return nullptr;
  while ( *(v2 - 1) || *(v2 - 2) || *(v2 - 3) || *(v2 - 4) )
    --v2;
  if ( v2 )
  {
    v3 = &v2[(strlen(v2) & 0x3FFFFFFF) + 1];
    if ( !v3 )
      return v3;
  }
  else
  {
    v3 = (_BYTE *)(&dword_0 + 1);
  }
  if ( !*v3 )
    return nullptr;
  v4 = a2 - 1;
  if ( a2 )
  {
    do
    {
      v5 = &v3[(strlen(v3) & 0x3FFFFFFF) + 1];
      if ( v5 )
      {
        v3 = &v5[(strlen(v5) & 0x3FFFFFFF) + 1];
        if ( !v3 )
          return v3;
        if ( !*v3 )
          return nullptr;
      }
      else
      {
        v3 = (_BYTE *)(&dword_0 + 1);
      }
      --v4;
    }
    while ( v4 != -1 );
  }
  return v3;
}
