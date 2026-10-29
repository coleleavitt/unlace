__int64 __fastcall sub_32EEE0(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case '#':
      result = 37;
      break;
    case '$':
      result = 34;
      break;
    case '&':
      result = 39;
      break;
    case '(':
      result = 41;
      break;
    case '.':
      result = 48;
      break;
    case '/':
      result = 45;
      break;
    case '1':
      result = 50;
      break;
    case '3':
      result = 52;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}

