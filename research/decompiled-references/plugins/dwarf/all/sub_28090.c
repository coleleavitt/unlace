__int64 __fastcall sub_28090(__int64 a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 2LL:
      result = 48;
      break;
    case 4LL:
      result = 0;
      break;
    case 8LL:
      result = 16;
      break;
    case 10LL:
      if ( (getinf(57) & 0xF) == 2 )
        result = 32;
      else
        result = 0xFFFFFFFFLL;
      break;
    case 12LL:
    case 16LL:
      result = 32;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}
