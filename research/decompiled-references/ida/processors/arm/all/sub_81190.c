__int64 __fastcall sub_81190(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v1 > 0x1E9u )
  {
    if ( (_WORD)v1 == 864 )
    {
      return 2 * (unsigned int)((*(_BYTE *)(a1 + 29) & 0xC) != 0);
    }
    else if ( (unsigned __int16)v1 > 0x360u )
    {
      result = 8;
      if ( (_WORD)v1 != 871 )
      {
        result = 9;
        if ( (_WORD)v1 != 872 )
          return 2 * (unsigned int)((_WORD)v1 == 865) - 1;
      }
    }
    else if ( (unsigned __int16)v1 <= 0x281u )
    {
      return (unsigned __int16)v1 < 0x27Au ? -1 : 0x10;
    }
    else
    {
      return (unsigned __int16)(v1 - 769) < 4u ? 17 : -1;
    }
  }
  else if ( (unsigned __int16)v1 <= 0x152u )
  {
    switch ( *(_WORD *)(a1 + 24) )
    {
      case 0x1E:
        return 2 * (unsigned int)((*(_BYTE *)(a1 + 29) & 0xC) != 0);
      case 0x1F:
      case 0x55:
      case 0x56:
        result = 16;
        break;
      case 0x20:
LABEL_22:
        result = 1;
        break;
      case 0x31:
LABEL_20:
        result = 8;
        break;
      case 0x47:
LABEL_23:
        result = 9;
        break;
      case 0x57:
      case 0x58:
LABEL_19:
        result = 17;
        break;
      default:
LABEL_4:
        result = 0xFFFFFFFFLL;
        break;
    }
  }
  else
  {
    LOWORD(v1) = v1 - 339;
    switch ( v1 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 5LL:
        result = 20;
        break;
      case 73LL:
      case 74LL:
      case 75LL:
      case 76LL:
      case 78LL:
        result = 21;
        break;
      case 133LL:
      case 141LL:
      case 145LL:
      case 147LL:
        return 2 * (unsigned int)((*(_BYTE *)(a1 + 29) & 0xC) != 0);
      case 134LL:
      case 146LL:
        goto LABEL_22;
      case 135LL:
        result = (2 * ((*(_BYTE *)(a1 + 29) & 0xC) != 0)) | 8u;
        break;
      case 136LL:
        goto LABEL_23;
      case 142LL:
      case 148LL:
        goto LABEL_19;
      case 143LL:
      case 149LL:
        goto LABEL_20;
      case 144LL:
      case 150LL:
        result = 25;
        break;
      default:
        goto LABEL_4;
    }
  }
  return result;
}
