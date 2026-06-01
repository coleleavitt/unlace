__int64 __fastcall sub_732A0(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int16)a1 > 0x151Au )
    return (unsigned __int16)(a1 - 5640) < 4u ? 0xB : 0;
  if ( (unsigned __int16)a1 > 0x1501u )
  {
    LOWORD(a1) = a1 - 5378;
    switch ( a1 )
    {
      case 0LL:
      case 11LL:
      case 12LL:
        result = 7;
        break;
      case 1LL:
      case 6LL:
        result = 15;
        break;
      case 2LL:
      case 3LL:
      case 4LL:
      case 13LL:
      case 23LL:
      case 24LL:
        result = 11;
        break;
      case 5LL:
        result = 12;
        break;
      case 8LL:
        result = 17;
        break;
      case 10LL:
        result = 19;
        break;
      case 15LL:
        result = 5;
        break;
      case 18LL:
        result = 29;
        break;
      default:
        result = 0;
        break;
    }
  }
  else if ( (_WORD)a1 == 4113 )
  {
    return 28;
  }
  else if ( (unsigned __int16)a1 > 0x1011u )
  {
    if ( (unsigned __int16)a1 <= 0x1402u )
    {
      result = 18;
      if ( (unsigned __int16)a1 <= 0x13FFu )
        return (unsigned __int16)(a1 - 4615) < 4u ? 0x1E : 0;
    }
    else
    {
      result = 25;
      if ( (_WORD)a1 != 5129 )
      {
        result = 0;
        if ( (_WORD)a1 == 5130 )
          return 19;
      }
    }
  }
  else
  {
    result = 14;
    if ( (_WORD)a1 != 4098 )
    {
      if ( (unsigned __int16)a1 <= 0x1002u )
      {
        result = 0;
        if ( (_WORD)a1 == 10 )
          return 24;
      }
      else if ( (unsigned __int16)a1 > 0x1009u )
      {
        result = 0;
        if ( (_WORD)a1 == 4111 )
          return 28;
      }
      else
      {
        return (unsigned __int16)a1 >= 0x1008u ? 0xD : 0;
      }
    }
  }
  return result;
}

