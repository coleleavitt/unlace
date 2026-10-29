__int64 __fastcall sub_1C7D0(char *a1, char a2, char a3)
{
  char v3; // al
  int v4; // r8d
  __int64 v5; // rcx

  v3 = *a1;
  if ( *a1 != 44 && v3 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v3 == 40 )
      {
        ++v5;
        ++v4;
        v3 = a1[v5];
        if ( v3 == 44 )
          return v5;
      }
      else
      {
        if ( v3 == 41 )
        {
          if ( !v4 )
            return v5;
          --v4;
        }
        else if ( !v4 && (a3 == v3 || a2 == v3) )
        {
          return v5;
        }
        v3 = a1[++v5];
        if ( v3 == 44 )
          return v5;
      }
      if ( !v3 )
        return v5;
    }
  }
  return 0;
}
