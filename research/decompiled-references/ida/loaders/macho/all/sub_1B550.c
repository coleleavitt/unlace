__int64 __fastcall sub_1B550(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax

  switch ( a3 )
  {
    case 1LL:
    case 9LL:
    case 12LL:
      result = HIWORD(a2) & 0x3FF8;
      break;
    case 2LL:
    case 6LL:
    case 8LL:
      result = (a2 >> 49) & 0x3FFC;
      break;
    case 3LL:
      result = (a2 >> 24) & 0x7C;
      break;
    case 4LL:
      result = (a2 >> 28) & 0xC;
      break;
    case 5LL:
      result = (a2 >> 24) & 0xFC;
      break;
    case 7LL:
    case 10LL:
      result = (a2 >> 49) & 0x1FFC;
      break;
    case 11LL:
      result = (a2 >> 51) & 0xFFF;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

