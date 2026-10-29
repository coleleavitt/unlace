char *__fastcall sub_11C10(char *s1)
{
  const char *v1; // rbx

  v1 = "arm";
  if ( strncasecmp(s1, "arm", 3u) )
  {
    v1 = "metapc";
    if ( strcasecmp(s1, "i386") )
    {
      if ( strncasecmp(s1, "x86", 3u) )
        return s1;
    }
  }
  return (char *)v1;
}

