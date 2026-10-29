char **__fastcall sub_1F6F0(char a1, char a2)
{
  char **result; // rax

  switch ( a1 )
  {
    case 'B':
      result = (char **)&off_2CC90;
      break;
    case 'C':
      result = (char **)&off_2CCA0;
      break;
    case 'D':
      result = &off_2CCB0;
      break;
    case 'F':
      result = &off_2CCC0;
      break;
    case 'I':
      result = (char **)&off_2CCD0;
      break;
    case 'J':
      result = (char **)&off_2CCE0;
      break;
    case 'S':
      result = (char **)&off_2CCF0;
      break;
    case 'V':
      result = &off_2CC80;
      if ( !a2 )
        result = nullptr;
      break;
    case 'Z':
      result = &off_2CD00;
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
