char __fastcall sub_3A30D0(__int64 **a1, unsigned __int64 **a2)
{
  char result; // al
  __int64 *v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // ecx

  result = *((_BYTE *)a1 + 40);
  if ( result == *((_BYTE *)a2 + 40) )
  {
    v3 = (__int64 *)a2[2];
    result = 1;
    if ( (__int64)a1[2] >= (__int64)v3 )
    {
      result = 0;
      if ( (__int64)a1[2] <= (__int64)v3 )
      {
        v4 = **a1;
        v5 = **a2;
        result = 1;
        if ( v4 >= v5 )
        {
          result = 0;
          if ( v5 >= v4 )
          {
            v6 = *((_DWORD *)a2 + 8);
            result = 1;
            if ( *((_DWORD *)a1 + 8) >= v6 )
            {
              result = 0;
              if ( *((_DWORD *)a1 + 8) <= v6 )
                return *((_DWORD *)a1 + 7) < *((_DWORD *)a2 + 7);
            }
          }
        }
      }
    }
  }
  return result;
}

