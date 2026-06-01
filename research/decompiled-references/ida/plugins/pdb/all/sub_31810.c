__int64 __fastcall sub_31810(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl

  switch ( a2 )
  {
    case 0LL:
    case 1LL:
    case 13LL:
      v3 = getinf_flag(3, 4);
      result = 48;
      if ( v3 )
        result = 112;
      break;
    case 2LL:
    case 3LL:
      result = 96;
      break;
    case 4LL:
    case 5LL:
      result = 112;
      break;
    case 7LL:
    case 8LL:
    case 17LL:
      result = 80;
      break;
    case 11LL:
      result = 128;
      break;
    default:
      result = 16;
      break;
  }
  return result;
}

