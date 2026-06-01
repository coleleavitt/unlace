char *__fastcall sub_380CF0(char *a1)
{
  char v1; // cl
  char *v2; // rdx
  char v3; // al
  int v4; // ecx
  int v6; // ecx

  v1 = *a1;
  if ( !*a1 || v1 == 41 )
    return a1;
  do
  {
    v2 = a1 + 1;
    if ( v1 == 44 )
      break;
    v3 = a1[1];
    if ( v1 == 40 )
    {
      if ( !v3 )
        return v2;
      v4 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          ++v2;
          if ( v3 != 40 )
            break;
          v3 = *v2;
          ++v4;
          if ( !*v2 )
            return v2;
        }
        if ( v3 == 41 && !--v4 )
          break;
        v3 = *v2;
        if ( !*v2 )
          return v2;
      }
      a1 = v2;
    }
    else
    {
      ++a1;
      if ( v1 == 60 )
      {
        if ( v3 )
        {
          v6 = 1;
          while ( 1 )
          {
            ++v2;
            if ( v3 == 60 )
            {
              ++v6;
            }
            else if ( v3 == 62 && !--v6 )
            {
              a1 = v2;
              goto LABEL_5;
            }
            v3 = *v2;
            if ( !*v2 )
              return v2;
          }
        }
        return v2;
      }
    }
LABEL_5:
    v1 = *v2;
  }
  while ( *v2 != 41 && v1 );
  return v2;
}

