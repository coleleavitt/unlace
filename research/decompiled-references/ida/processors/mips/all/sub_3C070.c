unsigned __int64 __fastcall sub_3C070(_DWORD *a1)
{
  unsigned __int64 result; // rax

  switch ( *a1 )
  {
    case 0:
    case 4:
      result = 0xFFF0000060FF0000LL;
      break;
    case 1:
      result = 0x5550000070FF0000LL;
      break;
    case 2:
      result = 0xFF00000070FF0000LL;
      break;
    case 3:
      result = 0xFFF0000070FF0000LL;
      break;
    case 5:
      result = 4043243520LL;
      break;
    default:
      result = 1627324416;
      break;
  }
  return result;
}

