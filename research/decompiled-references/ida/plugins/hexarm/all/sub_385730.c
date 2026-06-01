char *__fastcall sub_385730(const char *a1)
{
  char *result; // rax
  char *v2; // rbx
  char v3; // dl
  int v4; // ecx

  if ( !*a1 )
    return nullptr;
  result = nullptr;
  while ( 1 )
  {
    v2 = result;
    result = strchr(a1, 40);
    if ( !result )
      break;
    v3 = result[1];
    a1 = result + 1;
    if ( v3 )
    {
      v4 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          ++a1;
          if ( v3 != 40 )
            break;
          v3 = *a1;
          ++v4;
          if ( !*a1 )
            return result;
        }
        if ( v3 == 41 && !--v4 )
          break;
        v3 = *a1;
        if ( !*a1 )
          return result;
      }
      if ( *a1 )
        continue;
    }
    return result;
  }
  return v2;
}

