void __fastcall sub_B580(char a1, unsigned __int8 a2, _DWORD *a3)
{
  switch ( a2 | (16 * a1) & 0x10 )
  {
    case 0:
      *a3 = 200;
      break;
    case 2:
      *a3 = 15;
      break;
    case 4:
    case 20:
      *a3 = 140;
      break;
    case 5:
    case 21:
      *a3 = 147;
      break;
    case 6:
    case 22:
      *a3 = 44;
      break;
    case 8:
    case 24:
      *a3 = 9;
      break;
    case 9:
    case 25:
      *a3 = 208;
      break;
    case 10:
    case 26:
      *a3 = 197;
      break;
    case 11:
    case 27:
      *a3 = 117;
      break;
    case 12:
    case 28:
      *a3 = 136;
      break;
    case 13:
    case 29:
      *a3 = 19;
      break;
    case 16:
      *a3 = 198;
      break;
    case 17:
      *a3 = 45;
      break;
    case 18:
      *a3 = 10;
      break;
    case 19:
      *a3 = 118;
      break;
    default:
      return;
  }
}

