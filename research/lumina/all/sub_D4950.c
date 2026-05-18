char *__fastcall sub_D4950(char *s, char *s2)
{
  int v3; // r12d

  while ( *(s - 1) || *(s - 2) || *(s - 3) || *(s - 4) )
    --s;
  if ( !s )
    goto LABEL_12;
LABEL_8:
  s += (strlen(s) & 0x3FFFFFFF) + 1;
  if ( s )
  {
    if ( *s )
    {
      while ( 1 )
      {
        v3 = strcmp(s, s2);
        s += (strlen(s) & 0x3FFFFFFF) + 1;
        if ( !v3 )
          break;
        if ( s )
          goto LABEL_8;
LABEL_12:
        s = (_BYTE *)(&dword_0 + 1);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return s;
}
