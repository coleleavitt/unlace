__int64 __fastcall sub_87340(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1u:
      result = 1;
      break;
    case 3u:
    case 4u:
    case 9u:
    case 0xAu:
      result = 2;
      break;
    case 5u:
    case 6u:
    case 7u:
    case 0xBu:
    case 0xDu:
    case 0xFu:
    case 0x21u:
      result = 3;
      break;
    case 8u:
    case 0xEu:
      result = 5;
      break;
    case 0xCu:
    case 0x19u:
      result = 4;
      break;
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x20u:
      result = 6;
      break;
    case 0x16u:
      result = 7;
      break;
    case 0x17u:
      result = 8;
      break;
    case 0x18u:
      result = 9;
      break;
    default:
      sub_1D740((__int64)"Unknown attribute form: %d\n", a2);
      result = 0;
      break;
  }
  return result;
}
