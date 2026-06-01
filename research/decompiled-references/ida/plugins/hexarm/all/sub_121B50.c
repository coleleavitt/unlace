__int64 __fastcall sub_121B50(_DWORD *a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // dx

  switch ( *a1 )
  {
    case 1:
    case 2:
    case 0xA:
    case 0xB:
      goto LABEL_4;
    case 4:
    case 7:
      return sub_1217F0((__int64)a1, a3, 257);
    case 8:
    case 9:
      v5 = 1;
      goto LABEL_6;
    case 0x13:
    case 0x14:
    case 0x15:
LABEL_5:
      v5 = 273;
LABEL_6:
      result = sub_1217F0((__int64)a1, a3, v5);
      break;
    default:
      if ( a2 )
      {
        switch ( *a1 )
        {
          case 0x16:
          case 0x17:
          case 0x18:
            return sub_1217F0((__int64)a1, a3, 257);
          case 0x19:
          case 0x1A:
          case 0x1D:
          case 0x1E:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
            v5 = 272;
            goto LABEL_6;
          case 0x1B:
          case 0x1C:
            v5 = 256;
            goto LABEL_6;
          default:
            goto LABEL_5;
        }
      }
LABEL_4:
      result = 0;
      break;
  }
  return result;
}

