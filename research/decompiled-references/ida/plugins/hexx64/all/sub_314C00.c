__int64 __fastcall sub_314C00(int *a1, int *a2, double a3)
{
  int v3; // eax
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax

  if ( a2[1] != a1[1] )
  {
    if ( !under_debugger )
      sub_383060(0xCA87u, a3);
    goto LABEL_23;
  }
  v3 = *a1;
  if ( *a1 == 8 )
    return 0;
  v4 = *a2;
  if ( !*a2 )
    return 0;
  if ( v4 == 8 )
  {
    sub_312B80((__int64)a1, a3);
    *a1 = 8;
    return 1;
  }
  if ( v3 != 1 )
  {
    if ( v4 == 1 )
    {
LABEL_18:
      sub_312B80((__int64)a1, a3);
      *a1 = 1;
      return 1;
    }
    if ( !v3 )
    {
      if ( a2 != a1 )
      {
        sub_312B80((__int64)a1, a3);
        sub_312C40((__int64)a1, (__int64)a2, v5, v6, a3);
      }
      return 1;
    }
    if ( (unsigned int)sub_312DC0((__int64)a1, (__int64)a2, a3) )
    {
      if ( (*a1 & 0xF) == 2 && (*a2 & 0xF) == 2 )
      {
        v10 = sub_314610((__int64)a1, (__int64)a2, v8, v9);
        if ( v10 != 3 )
        {
          if ( v10 != 4 )
            return 0;
          goto LABEL_18;
        }
        return 1;
      }
      if ( !under_debugger )
        sub_383060(0xCB0Au, a3);
LABEL_23:
      BUG();
    }
  }
  return 0;
}

