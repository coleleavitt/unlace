bool __fastcall sub_11160(char *a1)
{
  char *v1; // rbx
  char i; // bp
  bool result; // al
  char *v4; // rdx
  char v5; // al

  v1 = a1;
  for ( i = *a1; i == 91; ++v1 )
    i = v1[1];
  result = 0;
  if ( i )
  {
    v4 = strchr("BCDFIJSVZ", i);
    result = 1;
    if ( !v4 )
    {
      result = 0;
      if ( i == 76 )
      {
        while ( 1 )
        {
          v5 = *v1;
          if ( !*v1 || v5 == 59 )
            break;
          ++v1;
        }
        return v5 == 59;
      }
    }
  }
  return result;
}
