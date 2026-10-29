__int64 __fastcall sub_72FB0(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( (unsigned __int16)a1 > 0x20Bu )
  {
    switch ( a1 )
    {
      case 0x400u:
        result = 5120;
        break;
      case 0x401u:
        result = 5121;
        break;
      case 0x402u:
        result = 5122;
        break;
      case 0x404u:
        result = 5123;
        break;
      case 0x405u:
        result = 5124;
        break;
      case 0x406u:
        result = 5125;
        break;
      case 0x407u:
        result = 5126;
        break;
      case 0x408u:
        result = 5127;
        break;
      case 0x409u:
        result = 5128;
        break;
      case 0x40Au:
        result = 5129;
        break;
      case 0x40Bu:
        result = 5130;
        break;
      case 0x40Cu:
        result = 5131;
        break;
      case 0x40Du:
        result = 5132;
        break;
      default:
        return result;
    }
  }
  else if ( (unsigned __int16)a1 > 0x1FFu )
  {
    switch ( a1 )
    {
      case 0x200u:
        result = 4608;
        break;
      case 0x201u:
        result = 4609;
        break;
      case 0x202u:
        result = 4610;
        break;
      case 0x204u:
        result = 4611;
        break;
      case 0x205u:
        result = 4612;
        break;
      case 0x206u:
        result = 4613;
        break;
      case 0x207u:
        result = 4614;
        break;
      case 0x208u:
        result = 4615;
        break;
      case 0x209u:
        result = 4616;
        break;
      case 0x20Au:
        result = 4617;
        break;
      case 0x20Bu:
        result = 4618;
        break;
      default:
        return result;
    }
  }
  else if ( (unsigned __int16)(a1 - 1) <= 0x14u )
  {
    switch ( (__int16)a1 )
    {
      case 1:
        result = 4097;
        break;
      case 2:
        result = 4098;
        break;
      case 3:
        result = 4099;
        break;
      case 4:
        result = 4100;
        break;
      case 5:
        result = 4101;
        break;
      case 6:
        result = 4102;
        break;
      case 7:
        result = 4103;
        break;
      case 8:
        result = 4104;
        break;
      case 9:
        result = 4105;
        break;
      case 11:
        result = 4106;
        break;
      case 13:
        result = 4107;
        break;
      case 17:
        result = 4108;
        break;
      case 18:
        result = 4109;
        break;
      case 19:
        result = 4110;
        break;
      case 21:
        result = 4111;
        break;
      default:
        return result;
    }
  }
  return result;
}
