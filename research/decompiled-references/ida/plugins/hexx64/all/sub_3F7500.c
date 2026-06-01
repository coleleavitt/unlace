__int64 __fastcall sub_3F7500(_DWORD *a1, int a2)
{
  __int64 result; // rax
  char v3; // al
  int v4; // ecx
  int v5; // edx
  int v6; // eax

  switch ( a2 )
  {
    case 0:
    case 16:
      return 8;
    case 1:
    case 17:
      return (unsigned int)a1[97];
    case 2:
    case 18:
      return (unsigned int)a1[95];
    case 3:
    case 19:
      return (unsigned int)a1[99];
    case 4:
    case 24:
      return (unsigned int)a1[15];
    case 5:
    case 25:
      return (unsigned int)a1[100];
    case 6:
    case 26:
      return (unsigned int)a1[102];
    case 7:
    case 27:
      return (unsigned int)a1[101];
    case 20:
      return 9;
    case 21:
      return (unsigned int)a1[96];
    case 22:
      return (unsigned int)a1[94];
    case 23:
      return (unsigned int)a1[98];
    case 28:
      return 0xFFFFFFFFLL;
    case 29:
      return (unsigned int)a1[120];
    case 30:
      return (unsigned int)a1[16];
    case 31:
      return (unsigned int)a1[14];
    case 32:
      return (unsigned int)a1[13];
    case 33:
      return (unsigned int)a1[121];
    case 34:
      return (unsigned int)a1[122];
    case 35:
      return 0;
    case 36:
      return 1;
    case 37:
      return 2;
    case 38:
      return 3;
    case 39:
      return 4;
    case 44:
      return (unsigned int)a1[131];
    case 45:
      return (unsigned int)a1[130];
    case 46:
      return (unsigned int)a1[129];
    case 47:
      return (unsigned int)a1[128];
    case 48:
      return (unsigned int)a1[127];
    case 49:
      return (unsigned int)a1[126];
    case 50:
      return (unsigned int)a1[125];
    case 51:
      return (unsigned int)a1[124];
    case 52:
      return (unsigned int)a1[123];
    case 54:
      return (unsigned int)a1[111];
    case 56:
      return (unsigned int)a1[132];
    case 57:
      return (unsigned int)a1[133];
    case 58:
      return (unsigned int)a1[134];
    case 59:
      return (unsigned int)a1[135];
    case 60:
      return (unsigned int)a1[136];
    case 61:
      return (unsigned int)a1[137];
    case 62:
      return (unsigned int)a1[138];
    case 63:
      return (unsigned int)a1[139];
    case 64:
      return (unsigned int)a1[140];
    case 65:
      return (unsigned int)a1[141];
    case 66:
      return (unsigned int)a1[142];
    case 67:
      return (unsigned int)a1[143];
    case 68:
      return (unsigned int)a1[144];
    case 69:
      return (unsigned int)a1[145];
    case 70:
      return (unsigned int)a1[146];
    case 71:
      return (unsigned int)a1[147];
    case 72:
      return (unsigned int)a1[148];
    case 73:
      return (unsigned int)a1[149];
    case 74:
      return (unsigned int)a1[150];
    case 75:
      return (unsigned int)a1[151];
    case 76:
      return (unsigned int)a1[152];
    case 77:
      return (unsigned int)a1[153];
    case 78:
      return (unsigned int)a1[154];
    case 79:
      return (unsigned int)a1[155];
    default:
      result = sub_3F7300(a1, a2);
      if ( (_DWORD)result != -1 )
        return result;
      result = sub_3F73C0(a1, a2);
      if ( (_DWORD)result != -1 )
        return result;
      if ( (unsigned int)(a2 - 101) <= 0xF )
      {
        v3 = 101;
      }
      else if ( (unsigned int)(a2 - 81) <= 0x33 )
      {
        v3 = 81;
      }
      else
      {
        if ( (unsigned int)(a2 - 133) > 0x1F )
          return result;
        v3 = -123;
      }
      if ( a1[945] == -1 )
        a1[945] = a2;
      v4 = ((_BYTE)a2 - v3) & 0xF;
      if ( a1[21] == 8 )
      {
        v5 = a1[156];
        v6 = 32;
      }
      else
      {
        v5 = a1[140];
        v6 = 16;
      }
      return (unsigned int)(v5 + v4 * v6);
  }
}

