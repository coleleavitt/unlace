__int64 sub_308D0()
{
  const char *v0; // rax
  const char *v1; // r15
  const char *v2; // rdi
  unsigned int v3; // ebp

  if ( !qfopen() )
    return (unsigned int)-1;
  while ( qgetline() >= 0 )
  {
    v0 = (const char *)skip_spaces();
    v1 = v0;
    if ( *v0 != 35 )
    {
      if ( !strncasecmp(v0, "megs", 4u) )
      {
        if ( *(_BYTE *)skip_spaces() != 58 )
          break;
LABEL_8:
        v2 = (const char *)skip_spaces();
        if ( (unsigned __int8)(*v2 - 48) <= 9u )
        {
          v3 = strtol(v2, nullptr, 10);
          goto LABEL_10;
        }
      }
      else if ( !strncasecmp(v1, "memory", 6u) && strstr(v1, "guest=") )
      {
        if ( *(_BYTE *)skip_spaces() != 61 )
          break;
        goto LABEL_8;
      }
    }
  }
  v3 = 0;
LABEL_10:
  qfclose();
  return v3;
}

