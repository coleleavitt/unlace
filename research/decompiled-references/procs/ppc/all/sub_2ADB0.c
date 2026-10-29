__int64 __fastcall sub_2ADB0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // cl
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 41);
  result = 0;
  if ( (*(_BYTE *)(a2 + 29) & 0x20) != 0 )
  {
    if ( v3 == 1 && !*(_WORD *)(a2 + 46) && *(_BYTE *)(a2 + 81) == 1 && !*(_WORD *)(a2 + 86) && !*(_BYTE *)(a2 + 121) )
    {
      *(_WORD *)(a2 + 24) = 279;
      return 1;
    }
  }
  else if ( v3 == 1
         && a3 == *(unsigned __int16 *)(a2 + 46)
         && *(_BYTE *)(a2 + 81) == 1
         && a3 == *(unsigned __int16 *)(a2 + 86)
         && *(_BYTE *)(a2 + 121) == 1
         && a3 == *(unsigned __int16 *)(a2 + 126) )
  {
    if ( a3 == 29 )
    {
      *(_WORD *)(a2 + 24) = 2214;
      return 1;
    }
    if ( a3 > 0x1D )
    {
      if ( a3 == 30 )
      {
        *(_WORD *)(a2 + 24) = 2215;
        return 1;
      }
      return 0;
    }
    else
    {
      if ( a3 == 26 )
      {
        *(_WORD *)(a2 + 24) = 2213;
        return 1;
      }
      if ( a3 == 27 )
      {
        *(_WORD *)(a2 + 24) = 2216;
        return 1;
      }
    }
  }
  return result;
}
