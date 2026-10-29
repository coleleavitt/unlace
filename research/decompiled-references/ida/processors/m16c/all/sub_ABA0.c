__int64 __fastcall sub_ABA0(char a1, char a2, unsigned int *a3)
{
  char v3; // r8
  char v4; // si
  __int64 result; // rax

  v3 = a2 & 0x1B;
  v4 = (a2 >> 4) & 8 | ((a2 & 0x1B) == 8) | ((unsigned __int8)a2 >> 1) & 2 | (4 * ((a2 & 0x60) != 0));
  if ( (a1 & 0x1C) == 4 )
  {
    switch ( v4 )
    {
      case 0:
      case 2:
        result = *a3;
        break;
      case 1:
        result = a3[1];
        break;
      case 8:
      case 10:
        result = a3[2];
        break;
      case 9:
        result = a3[3];
        break;
      default:
        goto LABEL_3;
    }
  }
  else if ( (a1 & 0x1C) == 0x14 )
  {
    switch ( v4 )
    {
      case 0:
      case 2:
        result = a3[4];
        break;
      case 1:
        result = a3[5];
        break;
      case 8:
      case 10:
        result = a3[6];
        break;
      case 9:
        result = a3[7];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    if ( (a1 & 0x10) != 0 )
    {
      if ( v3 == 8 )
        return a3[8];
      else
        return a3[9];
    }
    else if ( v3 == 8 )
    {
      return a3[10];
    }
    else
    {
      return a3[11];
    }
  }
  return result;
}

