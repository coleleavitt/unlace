__int64 __fastcall sub_11500(char *s1)
{
  unsigned int v1; // ebp
  char v2; // al
  char *v3; // rbx

  v1 = 1;
  if ( strcmp(s1, "radr://5614542") )
  {
    if ( strcmp(s1, "<redacted>") )
    {
      v1 = 0;
      if ( !strncmp(s1, "ltmp", 4u) )
      {
        v2 = s1[4];
        if ( v2 )
        {
          v3 = s1 + 4;
          while ( (unsigned __int8)(v2 - 48) <= 9u )
          {
            v2 = *++v3;
            if ( !v2 )
              return 1;
          }
          return 0;
        }
      }
    }
  }
  return v1;
}

