__int64 __fastcall sub_46530(_DWORD *a1)
{
  __int64 result; // rax

  switch ( a1[74] )
  {
    case 0:
    case 1:
      result = 0;
      break;
    case 2:
      result = 1;
      break;
    case 3:
      result = 2;
      break;
    case 4:
    case 5:
      result = 3;
      if ( a1[81] )
        result = 4;
      break;
    case 6:
    case 7:
    case 9:
      result = 5;
      break;
    case 8:
      result = 6;
      break;
    case 0xA:
      result = 8;
      if ( a1[75] != 77 )
        result = 9;
      break;
    case 0xB:
    case 0xC:
      result = 7;
      break;
    case 0xD:
      result = 8;
      break;
    case 0xE:
      result = 11;
      if ( a1[75] != 77 )
        goto LABEL_3;
      break;
    case 0xF:
    case 0x12:
    case 0x13:
    case 0x14:
LABEL_3:
      result = 10;
      break;
    case 0x10:
    case 0x11:
    case 0x15:
      result = 11;
      break;
    case 0x16:
      result = 12;
      break;
    default:
      result = 13;
      break;
  }
  return result;
}

