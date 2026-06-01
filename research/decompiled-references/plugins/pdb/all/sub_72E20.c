__int64 __fastcall sub_72E20(unsigned int a1)
{
  __int64 result; // rax

  if ( (unsigned __int16)a1 > 0x1010u )
  {
    if ( (_WORD)a1 == 4610 )
    {
      return 5387;
    }
    else
    {
      switch ( a1 )
      {
        case 0x1403u:
          result = 5388;
          break;
        case 0x1405u:
          result = 5389;
          break;
        case 0x1406u:
          result = 5390;
          break;
        case 0x1407u:
          result = 5391;
          break;
        case 0x1408u:
          result = 5392;
          break;
        case 0x140Bu:
          result = 5393;
          break;
        case 0x140Du:
          result = 5394;
          break;
        case 0x140Eu:
          result = 5395;
          break;
        default:
LABEL_4:
          result = a1;
          break;
      }
    }
  }
  else if ( (unsigned __int16)a1 <= 0x1002u )
  {
    result = 5377;
    if ( (_WORD)a1 != 22 )
    {
      result = 5378;
      if ( (_WORD)a1 != 1027 )
        return a1;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0x1003u:
        result = 5379;
        break;
      case 0x1004u:
        result = 5380;
        break;
      case 0x1005u:
        result = 5381;
        break;
      case 0x1006u:
        result = 5382;
        break;
      case 0x1007u:
        result = 5383;
        break;
      case 0x100Cu:
        result = 5384;
        break;
      case 0x100Eu:
        result = 5385;
        break;
      case 0x1010u:
        result = 5386;
        break;
      default:
        goto LABEL_4;
    }
  }
  return result;
}
