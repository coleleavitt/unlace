__int16 __fastcall sub_35600(__int64 a1)
{
  __int16 result; // ax

  if ( (unsigned __int16)a1 > 0xE4u )
  {
    if ( (unsigned __int16)a1 > 0x49Du )
      return -1;
    if ( (unsigned __int16)a1 <= 0x482u )
    {
      if ( (unsigned __int16)a1 > 0x11Bu )
      {
        result = 3330;
        if ( (_WORD)a1 != 284 )
          return -1;
      }
      else
      {
        return (unsigned __int16)a1 < 0x11Au ? -1 : 0x502;
      }
    }
    else
    {
      LOWORD(a1) = a1 - 1155;
      switch ( a1 )
      {
        case 0LL:
        case 1LL:
LABEL_13:
          result = 1281;
          break;
        case 2LL:
LABEL_26:
          result = 3329;
          break;
        case 3LL:
LABEL_24:
          result = 1027;
          break;
        case 4LL:
LABEL_25:
          result = 3075;
          break;
        case 12LL:
          result = 1028;
          break;
        case 13LL:
          result = 3076;
          break;
        case 26LL:
          result = 258;
          break;
        default:
          return -1;
      }
    }
  }
  else if ( (unsigned __int16)a1 > 0xD3u )
  {
    LOWORD(a1) = a1 - 212;
    switch ( a1 )
    {
      case 0LL:
        result = 770;
        break;
      case 1LL:
      case 3LL:
        result = 1794;
        break;
      case 14LL:
        result = 5;
        break;
      case 15LL:
        result = 1029;
        break;
      case 16LL:
        result = 3077;
        break;
      default:
        return -1;
    }
  }
  else
  {
    if ( (unsigned __int16)a1 <= 0xCu )
    {
      if ( (_WORD)a1 )
      {
        switch ( a1 )
        {
          case 1LL:
          case 2LL:
            result = 257;
            break;
          case 4LL:
          case 5LL:
            goto LABEL_13;
          case 6LL:
            goto LABEL_26;
          case 9LL:
            result = 3;
            break;
          case 10LL:
            result = 6;
            break;
          case 11LL:
            goto LABEL_24;
          case 12LL:
            goto LABEL_25;
          default:
            return -1;
        }
        return result;
      }
      return -1;
    }
    result = 1028;
    if ( (_WORD)a1 != 156 )
    {
      result = 3076;
      if ( (_WORD)a1 != 157 )
        return 5 * ((_WORD)a1 == 154) - 1;
    }
  }
  return result;
}

