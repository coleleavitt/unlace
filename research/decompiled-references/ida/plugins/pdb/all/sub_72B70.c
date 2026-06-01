__int64 __fastcall sub_72B70(unsigned int a1)
{
  __int64 result; // rax

  if ( (unsigned __int16)a1 > 0x1029u )
    return a1;
  if ( (unsigned __int16)a1 <= 0x1000u )
  {
    if ( (_WORD)a1 == 521 )
    {
      return 4357;
    }
    else if ( (unsigned __int16)a1 > 0x209u )
    {
      result = 4390;
      if ( (_WORD)a1 != 1025 )
      {
        result = 4391;
        if ( (_WORD)a1 != 1027 )
        {
          result = 4389;
          if ( (_WORD)a1 != 1024 )
            return a1;
        }
      }
    }
    else
    {
      result = 4355;
      if ( (_WORD)a1 != 519 )
      {
        result = 4356;
        if ( (_WORD)a1 != 520 )
        {
          result = 4353;
          if ( (_WORD)a1 != 9 )
          {
            result = 4354;
            if ( (_WORD)a1 != 518 )
              return a1;
          }
        }
      }
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0x1001u:
        result = 4358;
        break;
      case 0x1002u:
        result = 4359;
        break;
      case 0x1003u:
        result = 4360;
        break;
      case 0x1004u:
        result = 4361;
        break;
      case 0x1005u:
      case 0x1014u:
        result = 4362;
        break;
      case 0x1006u:
        result = 4363;
        break;
      case 0x1007u:
        result = 4364;
        break;
      case 0x1008u:
        result = 4365;
        break;
      case 0x1009u:
        result = 4366;
        break;
      case 0x100Au:
        result = 4367;
        break;
      case 0x100Bu:
        result = 4368;
        break;
      case 0x100Du:
        result = 4369;
        break;
      case 0x100Eu:
        result = 4370;
        break;
      case 0x100Fu:
        result = 4371;
        break;
      case 0x1010u:
        result = 4372;
        break;
      case 0x1011u:
        result = 4373;
        break;
      case 0x1013u:
        result = 4374;
        break;
      case 0x1015u:
        result = 4376;
        break;
      case 0x1016u:
        result = 4377;
        break;
      case 0x1017u:
        result = 4378;
        break;
      case 0x1018u:
        result = 4379;
        break;
      case 0x101Au:
        result = 4394;
        break;
      case 0x101Bu:
        result = 4395;
        break;
      case 0x1020u:
        result = 4380;
        break;
      case 0x1021u:
        result = 4381;
        break;
      case 0x1022u:
        result = 4382;
        break;
      case 0x1023u:
        result = 4383;
        break;
      case 0x1024u:
        result = 4384;
        break;
      case 0x1025u:
        result = 4385;
        break;
      case 0x1026u:
        result = 4386;
        break;
      case 0x1027u:
        result = 4387;
        break;
      case 0x1029u:
        result = 4388;
        break;
      default:
        return a1;
    }
  }
  return result;
}

