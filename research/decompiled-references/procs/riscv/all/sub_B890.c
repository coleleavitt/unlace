// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_B890(__int64 a1, char a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 v3; // cl
  __int16 v5; // cx

  if ( under_debugger )
    BUG();
  interr(10410);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( v3 )
      {
        case 1u:
          v5 = 413;
          goto LABEL_26;
        case 2u:
          v5 = 415;
          goto LABEL_26;
        case 3u:
          v5 = 414;
          goto LABEL_26;
        case 4u:
          v5 = 417;
          goto LABEL_26;
        case 5u:
          v5 = 410;
          goto LABEL_26;
        case 6u:
          v5 = 412;
          goto LABEL_26;
        case 7u:
          v5 = 411;
          goto LABEL_26;
        case 8u:
          v5 = 416;
          goto LABEL_26;
        case 9u:
          v5 = 407;
          goto LABEL_26;
        case 0xAu:
          v5 = 409;
          goto LABEL_26;
        case 0xBu:
          v5 = 408;
          goto LABEL_26;
        case 0x10u:
          v5 = 421;
          goto LABEL_26;
        case 0x18u:
          v5 = 420;
LABEL_26:
          WORD1(stru_28C0.r_offset) = v5;
          LOWORD(stru_28D8.r_offset) = v2;
          BYTE3(stru_28C0.r_addend) = 1;
          HIBYTE(stru_28C0.r_addend) = 2;
          return 0;
        default:
          return 0;
      }
    }
    if ( a2 == 2 )
    {
      LOWORD(stru_28D8.r_offset) = v2;
      WORD1(stru_28C0.r_offset) = 425;
      BYTE3(stru_28C0.r_addend) = 1;
      HIBYTE(stru_28C0.r_addend) = a2;
      BYTE3(stru_28F0.r_info) = 1;
      LOWORD(stru_28F0.r_addend) = v3;
      HIBYTE(stru_28F0.r_info) = a2;
    }
  }
  else if ( !v2 )
  {
    switch ( v3 )
    {
      case 1u:
        WORD1(stru_28C0.r_offset) = 404;
        return 0;
      case 2u:
        WORD1(stru_28C0.r_offset) = 406;
        return 0;
      case 3u:
        WORD1(stru_28C0.r_offset) = 405;
        return 0;
      case 4u:
        WORD1(stru_28C0.r_offset) = 507;
        return 0;
      case 5u:
        WORD1(stru_28C0.r_offset) = 508;
        return 0;
      case 0x10u:
        WORD1(stru_28C0.r_offset) = 418;
        return 0;
      case 0x11u:
        WORD1(stru_28C0.r_offset) = 419;
        return 0;
      case 0x15u:
        WORD1(stru_28C0.r_offset) = 422;
        return 0;
      case 0x16u:
        WORD1(stru_28C0.r_offset) = 424;
        return 0;
      case 0x17u:
        WORD1(stru_28C0.r_offset) = 423;
        return 0;
      case 0x18u:
        WORD1(stru_28C0.r_offset) = 426;
        return 0;
      case 0x19u:
        WORD1(stru_28C0.r_offset) = 427;
        return 0;
      case 0x1Au:
        WORD1(stru_28C0.r_offset) = 428;
        return 0;
      case 0x1Bu:
        WORD1(stru_28C0.r_offset) = 429;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
