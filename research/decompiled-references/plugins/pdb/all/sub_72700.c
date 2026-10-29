__int64 __fastcall sub_72700(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int16)a1 > 0x11E5u )
    return 26;
  if ( (unsigned __int16)a1 > 0x1123u )
  {
    LOWORD(a1) = a1 - 4388;
    switch ( a1 )
    {
      case 0LL:
        result = 23;
        break;
      case 1LL:
      case 3LL:
      case 6LL:
      case 7LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
      case 49LL:
      case 50LL:
      case 190LL:
      case 191LL:
      case 192LL:
      case 193LL:
        goto LABEL_12;
      case 2LL:
      case 56LL:
        return 0;
      case 8LL:
        goto LABEL_29;
      case 9LL:
      case 45LL:
      case 46LL:
      case 62LL:
      case 63LL:
      case 64LL:
      case 65LL:
      case 188LL:
      case 189LL:
        goto LABEL_11;
      case 14LL:
        goto LABEL_17;
      case 19LL:
        result = 41;
        break;
      case 20LL:
        result = 39;
        break;
      case 21LL:
        result = 31;
        break;
      case 24LL:
        result = 3;
        break;
      case 25LL:
      case 40LL:
        result = 4;
        break;
      case 41LL:
      case 57LL:
        result = 32;
        break;
      case 54LL:
        result = 38;
        break;
      case 55LL:
        result = 37;
        break;
      case 58LL:
        result = 40;
        break;
      default:
        return 26;
    }
    return result;
  }
  if ( (unsigned __int16)a1 <= 0x110Eu )
  {
    if ( (unsigned __int16)a1 > 0x1100u )
    {
      LOWORD(a1) = a1 - 4354;
      switch ( a1 )
      {
        case 0LL:
LABEL_29:
          result = 27;
          break;
        case 1LL:
        case 2LL:
          goto LABEL_17;
        case 3LL:
          goto LABEL_27;
        case 4LL:
        case 5LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
LABEL_11:
          result = 7;
          break;
        case 6LL:
          result = 17;
          break;
        case 7LL:
          result = 11;
          break;
        case 12LL:
          goto LABEL_28;
        default:
          return 0;
      }
      return result;
    }
    if ( (unsigned __int16)a1 <= 0x10Cu )
    {
      if ( (unsigned __int16)a1 <= 0xFFu )
      {
        result = 3;
        if ( (_WORD)a1 != 1 )
          return (unsigned __int16)(a1 - 2) >= 0xDu ? 0x1A : 0;
      }
      else
      {
        LOWORD(a1) = a1 - 259;
        result = 7;
        switch ( a1 )
        {
          case 0LL:
LABEL_28:
            result = 10;
            break;
          case 1LL:
          case 2LL:
LABEL_12:
            result = 5;
            break;
          case 3LL:
          case 7LL:
          case 8LL:
            return 0;
          case 4LL:
          case 5LL:
LABEL_17:
            result = 6;
            break;
          case 6LL:
LABEL_27:
            result = 9;
            break;
          default:
            return result;
        }
      }
      return result;
    }
    result = 8;
    if ( (_WORD)a1 == 4121 )
      return result;
    if ( (unsigned __int16)a1 <= 0x1019u )
    {
      if ( (_WORD)a1 == 1026 )
        return 0;
      result = 0;
      if ( (unsigned __int16)a1 > 0x402u )
      {
        if ( (_WORD)a1 != 4108 )
        {
          result = 26;
          if ( (_WORD)a1 == 4114 )
            return 0;
        }
      }
      else if ( (_WORD)a1 != 522 )
      {
        result = 26;
        if ( (_WORD)a1 == 527 )
          return 0;
      }
      return result;
    }
    return 26;
  }
  result = 7;
  if ( ((1LL << ((unsigned __int8)a1 - 15)) & 0x1FF91C) == 0 )
    return ((1LL << ((unsigned __int8)a1 - 15)) & 0x663) == 0 ? 3 : 5;
  return result;
}
