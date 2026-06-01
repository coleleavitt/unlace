__int64 __fastcall sub_3F7300(_DWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a1[21] != 8 )
    return 0xFFFFFFFFLL;
  switch ( a2 )
  {
    case 8:
      result = (unsigned int)a1[103];
      break;
    case 9:
      result = (unsigned int)a1[104];
      break;
    case 10:
      result = (unsigned int)a1[105];
      break;
    case 11:
      result = (unsigned int)a1[106];
      break;
    case 12:
      result = (unsigned int)a1[107];
      break;
    case 13:
      result = (unsigned int)a1[108];
      break;
    case 14:
      result = (unsigned int)a1[109];
      break;
    case 15:
      result = (unsigned int)a1[110];
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

