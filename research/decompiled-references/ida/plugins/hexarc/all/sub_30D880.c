__int64 __fastcall sub_30D880(int *a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  int v5; // eax

  if ( a2[1] != a1[1] )
  {
    if ( !under_debugger )
      sub_37B760(51847);
    goto LABEL_23;
  }
  v2 = *a1;
  if ( *a1 == 8 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return 0;
  if ( v3 == 8 )
  {
    sub_30B800((__int64)a1);
    *a1 = 8;
    return 1;
  }
  if ( v2 != 1 )
  {
    if ( v3 == 1 )
    {
LABEL_18:
      sub_30B800((__int64)a1);
      *a1 = 1;
      return 1;
    }
    if ( !v2 )
    {
      if ( a2 != a1 )
      {
        sub_30B800((__int64)a1);
        sub_30B8C0((__int64)a1, a2);
      }
      return 1;
    }
    if ( (unsigned int)sub_30BA40((__int64)a1, (__int64)a2) )
    {
      if ( (*a1 & 0xF) == 2 && (*a2 & 0xF) == 2 )
      {
        v5 = sub_30D290((__int64)a1, (__int64)a2);
        if ( v5 != 3 )
        {
          if ( v5 != 4 )
            return 0;
          goto LABEL_18;
        }
        return 1;
      }
      if ( !under_debugger )
        sub_37B760(51978);
LABEL_23:
      BUG();
    }
  }
  return 0;
}

