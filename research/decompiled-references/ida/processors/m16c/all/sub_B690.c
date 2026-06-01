__int64 __fastcall sub_B690(int a1, __int64 a2)
{
  int v2; // eax
  char v3; // cl
  __int64 result; // rax

  v2 = a1;
  if ( (_DWORD)a2 == 79 )
  {
    if ( (a1 & 0xDE) == 0x9C )
    {
      LOBYTE(v2) = (a1 & 0x20) != 0;
      return (unsigned int)(v2 + 1);
    }
    return a1 & 1;
  }
  if ( (unsigned int)a2 > 0x4F )
  {
    v3 = a2 - 99;
    if ( (unsigned int)(a2 - 99) <= 0x3E )
    {
      if ( ((1LL << v3) & 0x780000FF80000E01LL) != 0 )
        return (get_byte() & 0x10) != 0;
      if ( ((1LL << v3) & 0x30008000020LL) != 0 )
        return get_byte() & 1;
      if ( (_DWORD)a2 == 118 && (a1 & 0xC) == 0 )
        return (get_byte() & 0x10) != 0;
    }
    return a1 & 1;
  }
  if ( (unsigned int)(a2 - 2) > 0x2A )
    return a1 & 1;
  switch ( a2 )
  {
    case 2LL:
    case 37LL:
    case 38LL:
    case 43LL:
    case 44LL:
      return get_byte() & 1;
    case 4LL:
      if ( (~(_BYTE)a1 & 0xE0) != 0 )
        return a1 & 1;
      result = a1 & 0x11;
      if ( (a1 & 0x11) != 1 )
      {
        LOBYTE(result) = (a1 & 0x11) == 16;
        result = (unsigned int)(2 * result);
      }
      break;
    case 40LL:
    case 41LL:
    case 42LL:
      if ( (a1 & 0x20) != 0 )
        return (get_byte() & 0x10) != 0;
      return a1 & 1;
    default:
      return a1 & 1;
  }
  return result;
}

