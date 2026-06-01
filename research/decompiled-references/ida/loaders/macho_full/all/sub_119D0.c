__int64 __fastcall sub_119D0(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 > 0x32 )
  {
    switch ( a1 )
    {
      case 0x8000001C:
      case 0x80000022:
      case 0x80000028:
      case 0x80000033:
      case 0x80000034:
      case 0x80000035:
LABEL_5:
        result = h2ti();
        break;
      default:
        return result;
    }
  }
  else if ( a1 > 0x1C )
  {
    switch ( a1 )
    {
      case 0x1Du:
      case 0x1Eu:
      case 0x21u:
      case 0x22u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Fu:
      case 0x30u:
      case 0x32u:
        goto LABEL_5;
      default:
        return result;
    }
  }
  return result;
}

