__int64 __fastcall sub_1E660(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 260) == 2 )
    return result;
  if ( a2 > 0x1B8u )
  {
    if ( a2 <= 0x241u )
    {
      LOBYTE(result) = a2 == 518;
      LOBYTE(a3) = a2 > 0x23Du;
      return a3 | (unsigned int)result;
    }
    if ( a2 > 0x5E6u )
    {
      if ( (unsigned __int16)(a2 - 1543) > 7u )
        return result;
      return a3 ^ 1u;
    }
    if ( a2 <= 0x5E4u )
      return result;
    return a3 ^ 1u;
  }
  if ( a2 > 0x1B6u )
    return a3 ^ 1u;
  if ( a2 > 0x74u )
  {
    if ( (unsigned __int16)(a2 - 198) > 4u )
      return result;
    return a3 ^ 1u;
  }
  result = 1;
  if ( a2 > 0x72u )
    return result;
  if ( a2 > 0x6Au )
  {
    result = 0;
    if ( (unsigned __int16)(a2 - 109) > 4u )
      return result;
    return a3 ^ 1u;
  }
  if ( a2 > 0x64u )
    return a3 ^ 1u;
  result = 0;
  if ( (unsigned __int16)(a2 - 82) <= 0x10u )
    return a3 ^ 1u;
  return result;
}

