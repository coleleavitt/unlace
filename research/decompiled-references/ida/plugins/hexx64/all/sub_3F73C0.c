__int64 __fastcall sub_3F73C0(_DWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a1[21] != 8 )
    return 0xFFFFFFFFLL;
  switch ( a2 )
  {
    case 'Q':
      result = (unsigned int)a1[156];
      break;
    case 'R':
      result = (unsigned int)a1[157];
      break;
    case 'S':
      result = (unsigned int)a1[158];
      break;
    case 'T':
      result = (unsigned int)a1[159];
      break;
    case 'U':
      result = (unsigned int)a1[160];
      break;
    case 'V':
      result = (unsigned int)a1[161];
      break;
    case 'W':
      result = (unsigned int)a1[162];
      break;
    case 'X':
      result = (unsigned int)a1[163];
      break;
    case 'Y':
      result = (unsigned int)a1[164];
      break;
    case 'Z':
      result = (unsigned int)a1[165];
      break;
    case '[':
      result = (unsigned int)a1[166];
      break;
    case '\\':
      result = (unsigned int)a1[167];
      break;
    case ']':
      result = (unsigned int)a1[168];
      break;
    case '^':
      result = (unsigned int)a1[169];
      break;
    case '_':
      result = (unsigned int)a1[170];
      break;
    case '`':
      result = (unsigned int)a1[171];
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

