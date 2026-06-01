char __fastcall sub_25A7C0(__int64 a1, int a2, __int64 a3)
{
  char result; // al
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // esi

  result = 0;
  if ( a3 )
  {
    v6 = *(int *)(a3 + 8);
    v7 = *((unsigned __int8 *)&off_4B2D60 + 16 * v6 + 8);
    v8 = *((unsigned __int8 *)&off_4B2D60 + 16 * a2 + 8);
    result = 1;
    if ( v7 >= v8 )
    {
      if ( v7 != v8 )
      {
        result = 0;
        if ( (unsigned int)(v8 - 3) <= 4 )
          return v7 == 5 || (unsigned int)(v7 - 8) <= 2;
        return result;
      }
      if ( (unsigned int)(v7 - 6) <= 1 )
        return result;
      if ( (unsigned int)v6 > 0x2D )
      {
        if ( (_DWORD)v6 == 47 )
          return a2 == 56;
        if ( (unsigned int)(v6 - 53) <= 1 )
          return a2 == 51;
      }
      else
      {
        if ( (unsigned int)v6 > 0x2B )
          return *(_QWORD *)(a3 + 32) == a1;
        if ( (unsigned int)(v6 - 1) <= 0x29 )
        {
          result = 0;
          if ( ((1LL << v6) & 0x408003E0002LL) != 0 )
            return result;
          if ( ((1LL << v6) & 0x3C000000000LL) != 0 )
            return *(_QWORD *)(a3 + 32) == a1;
          if ( (_DWORD)v6 == 37 )
          {
            result = 0;
            if ( a2 == 37 )
              return result;
            return *(_QWORD *)(a3 + 32) == a1;
          }
        }
      }
      result = 0;
      if ( *((unsigned __int8 *)&off_4B2D60 + 16 * v6 + 8) <= 2u )
        return result;
      return *(_QWORD *)(a3 + 32) == a1;
    }
  }
  return result;
}

