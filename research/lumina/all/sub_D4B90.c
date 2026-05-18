char *__fastcall sub_D4B90(char *s)
{
  char *v2; // rbx

  while ( *(s - 1) || *(s - 2) || *(s - 3) || *(s - 4) )
    --s;
  if ( !s )
    goto LABEL_11;
  while ( 1 )
  {
    v2 = &s[(strlen(s) & 0x3FFFFFFF) + 1];
    if ( !v2 )
      break;
    if ( !*v2 )
      return v2 + 1;
    while ( 1 )
    {
      s = &v2[(strlen(v2) & 0x3FFFFFFF) + 1];
      if ( s )
        break;
LABEL_11:
      v2 = (_BYTE *)(&dword_0 + 1);
    }
  }
  return (_BYTE *)(&dword_0 + 1);
}
