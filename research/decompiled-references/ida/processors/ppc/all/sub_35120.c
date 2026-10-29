__int64 __fastcall sub_35120(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edx
  char v4; // al
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v1 > 0x2A8u )
  {
    if ( (unsigned __int16)v1 <= 0x4F2u )
    {
      if ( (unsigned __int16)v1 <= 0x4CDu )
      {
        switch ( *(_WORD *)(a1 + 24) )
        {
          case 0x31B:
          case 0x31C:
          case 0x31E:
            v6 = -((unsigned __int16)v1 < 0x31Du);
            LOWORD(v6) = v6 & 0x300;
            v2 = v6 + 2;
            goto LABEL_16;
          case 0x31D:
          case 0x340:
            goto LABEL_72;
          case 0x31F:
          case 0x341:
            goto LABEL_71;
          case 0x320:
            goto LABEL_80;
          default:
            return (unsigned int)-1;
        }
      }
      LOWORD(v1) = v1 - 1230;
      switch ( v1 )
      {
        case 0LL:
          goto LABEL_81;
        case 1LL:
          goto LABEL_80;
        case 20LL:
          v2 = 6;
          goto LABEL_16;
        case 21LL:
          v2 = 7;
          goto LABEL_16;
        case 33LL:
LABEL_72:
          v2 = 0;
          goto LABEL_68;
        case 34LL:
          v2 = 4;
          goto LABEL_68;
        case 35LL:
LABEL_71:
          v2 = 1;
          goto LABEL_68;
        case 36LL:
          v2 = 5;
LABEL_68:
          if ( ((*(_BYTE *)(a1 + 81) - 2) & 0xFD) != 0 )
            goto LABEL_33;
          return v2;
        default:
          return (unsigned int)-1;
      }
    }
    if ( (_WORD)v1 == 2182 )
    {
LABEL_81:
      v2 = 2;
      goto LABEL_16;
    }
    if ( (_WORD)v1 == 2183 )
    {
LABEL_80:
      v2 = 3;
      goto LABEL_16;
    }
    return (unsigned int)-1;
  }
  if ( (unsigned __int16)v1 <= 0x53u )
    return (unsigned int)-1;
  switch ( *(_WORD *)(a1 + 24) )
  {
    case 0x54:
    case 0x58:
    case 0x5D:
    case 0x61:
    case 0x65:
    case 0x6A:
    case 0x6E:
    case 0x6F:
    case 0x71:
    case 0x76:
      switch ( *(_WORD *)(a1 + 24) )
      {
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
          v2 = 2048;
          goto LABEL_37;
        case ']':
        case '^':
        case '_':
        case '`':
          v2 = 1280;
          goto LABEL_37;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
          v2 = 1024;
          goto LABEL_32;
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          v2 = 512;
          goto LABEL_37;
        case 'n':
        case 'o':
        case 'p':
          v2 = 0;
          goto LABEL_67;
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
          goto LABEL_35;
        default:
          v2 = 256;
          goto LABEL_32;
      }
    case 0x55:
    case 0x5A:
    case 0x5E:
    case 0x62:
    case 0x66:
    case 0x6B:
    case 0x77:
      v2 = 4;
      goto LABEL_44;
    case 0x56:
    case 0x5B:
    case 0x5F:
    case 0x63:
    case 0x67:
    case 0x6C:
    case 0x73:
    case 0x78:
      v2 = 6;
      goto LABEL_14;
    case 0x57:
    case 0x59:
    case 0x5C:
    case 0x60:
    case 0x64:
    case 0x68:
    case 0x6D:
    case 0x70:
    case 0x72:
    case 0x74:
    case 0x79:
    case 0x2A2:
    case 0x2A3:
      v2 = 2;
      if ( (unsigned __int16)v1 <= 0xD3u )
        goto LABEL_14;
      v2 = 2;
      v7 = 1LL << ((unsigned __int8)v1 + 100);
      if ( (v7 & 0x1080) != 0 )
        goto LABEL_24;
      goto LABEL_75;
    case 0x69:
    case 0x75:
    case 0x29C:
      v2 = 10;
      if ( (unsigned __int16)v1 <= 0xD3u )
      {
LABEL_14:
        switch ( *(_WORD *)(a1 + 24) )
        {
          case 'X':
          case 'Y':
          case 'Z':
          case '[':
          case '\\':
            goto LABEL_26;
          case ']':
          case '^':
          case '_':
          case '`':
            goto LABEL_28;
          case 'a':
          case 'b':
          case 'c':
          case 'd':
            goto LABEL_27;
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
            goto LABEL_24;
          case 'n':
          case 'o':
          case 'p':
            goto LABEL_16;
          case 'q':
          case 'r':
          case 's':
          case 't':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
          case 'y':
            goto LABEL_15;
          default:
            goto LABEL_77;
        }
        while ( 1 )
        {
LABEL_16:
          v4 = *(_BYTE *)(a1 + 81);
          if ( (v4 == 1 || v4 == 5 && *(_BYTE *)(a1 + 114)) && *(_BYTE *)(a1 + 121) == 1 )
            return v2;
          if ( under_debugger )
            goto LABEL_91;
          a1 = 10226;
          interr(10226);
LABEL_22:
          v5 = 1LL << ((unsigned __int8)v1 + 100);
          if ( (v5 & 0x1080) == 0 )
            break;
          v2 = 3;
LABEL_24:
          BYTE1(v2) |= 2u;
        }
        if ( (v5 & 0x840) != 0 )
        {
          v2 = 3;
LABEL_77:
          BYTE1(v2) |= 1u;
          goto LABEL_16;
        }
      }
      else
      {
        LOWORD(v7) = 1;
LABEL_75:
        if ( (v7 & 5) != 0 )
        {
LABEL_26:
          BYTE1(v2) |= 8u;
          goto LABEL_16;
        }
        if ( (v7 & 0x840) != 0 )
          goto LABEL_77;
      }
LABEL_45:
      if ( under_debugger )
LABEL_91:
        BUG();
      a1 = 10465;
      interr(10465);
LABEL_47:
      BYTE1(v2) |= 3u;
LABEL_32:
      while ( ((*(_BYTE *)(a1 + 81) - 2) & 0xFD) != 0 )
      {
LABEL_33:
        if ( under_debugger )
          goto LABEL_91;
        a1 = 10227;
        interr(10227);
LABEL_35:
        v2 = 768;
      }
      while ( *(_BYTE *)(a1 + 85) != BYTE1(v2) - 1 )
      {
        if ( under_debugger )
          goto LABEL_91;
        a1 = 10228;
        interr(10228);
LABEL_41:
        v2 = 517;
LABEL_37:
        if ( ((*(_BYTE *)(a1 + 81) - 2) & 0xFD) != 0 )
          goto LABEL_33;
      }
      break;
    case 0xB4:
    case 0xB8:
    case 0xBD:
    case 0xC2:
    case 0xC6:
    case 0xCB:
    case 0xCC:
    case 0xCE:
      v2 = 1;
LABEL_44:
      switch ( *(_WORD *)(a1 + 24) )
      {
        case 0x55:
        case 0x56:
        case 0x57:
        case 0xB4:
        case 0xB5:
        case 0xB6:
        case 0xB7:
          BYTE1(v2) |= 1u;
          goto LABEL_32;
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5B:
        case 0x5C:
        case 0xB8:
        case 0xB9:
        case 0xBA:
        case 0xBB:
        case 0xBC:
          BYTE1(v2) |= 8u;
          goto LABEL_37;
        case 0x5D:
        case 0x5E:
        case 0x5F:
        case 0x60:
        case 0xBD:
        case 0xBE:
        case 0xBF:
        case 0xC0:
          BYTE1(v2) |= 5u;
          goto LABEL_37;
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
          BYTE1(v2) |= 4u;
          goto LABEL_32;
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0xC6:
        case 0xC7:
        case 0xC8:
        case 0xC9:
        case 0xCA:
          BYTE1(v2) |= 2u;
          goto LABEL_37;
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0xCB:
        case 0xCC:
        case 0xCD:
          if ( (_WORD)v1 == 204 )
            goto LABEL_63;
          goto LABEL_68;
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0xC1:
        case 0xCE:
          goto LABEL_47;
        default:
          goto LABEL_45;
      }
    case 0xB5:
    case 0xBA:
    case 0xBE:
    case 0xC3:
    case 0xC8:
    case 0xD1:
      switch ( *(_WORD *)(a1 + 24) )
      {
        case 0xB8:
        case 0xB9:
        case 0xBA:
        case 0xBB:
        case 0xBC:
          v2 = 2053;
          goto LABEL_37;
        case 0xBD:
        case 0xBE:
        case 0xBF:
        case 0xC0:
          v2 = 1285;
          goto LABEL_37;
        case 0xC1:
        case 0xCE:
        case 0xCF:
        case 0xD0:
        case 0xD1:
          v2 = 773;
          goto LABEL_32;
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
          v2 = 1029;
          goto LABEL_32;
        case 0xC6:
        case 0xC7:
        case 0xC8:
        case 0xC9:
        case 0xCA:
          goto LABEL_41;
        case 0xCB:
        case 0xCC:
        case 0xCD:
          break;
        default:
          v2 = 261;
          goto LABEL_32;
      }
      while ( 2 )
      {
        v2 = 5;
        if ( (_WORD)v1 == 204 )
          goto LABEL_63;
LABEL_67:
        if ( (_WORD)v1 != 111 )
          goto LABEL_68;
LABEL_63:
        if ( *(_BYTE *)(a1 + 121) == 5 )
          return v2;
        if ( !under_debugger )
        {
          a1 = 10229;
          interr(10229);
          continue;
        }
        goto LABEL_91;
      }
    case 0xB6:
    case 0xBB:
    case 0xBF:
    case 0xC4:
    case 0xC9:
    case 0xD2:
      v2 = 7;
      goto LABEL_30;
    case 0xB7:
    case 0xB9:
    case 0xBC:
    case 0xC0:
    case 0xC1:
    case 0xC5:
    case 0xCA:
    case 0xCD:
    case 0xD0:
    case 0xD3:
    case 0x2A7:
    case 0x2A8:
      v2 = 3;
      if ( (unsigned __int16)v1 <= 0xD3u )
        goto LABEL_30;
      goto LABEL_22;
    case 0xC7:
    case 0xCF:
    case 0x29E:
      v2 = 11;
      if ( (unsigned __int16)v1 > 0xD3u )
        goto LABEL_26;
LABEL_30:
      LOWORD(v1) = v1 - 184;
      switch ( v1 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
        case 3LL:
        case 4LL:
          goto LABEL_26;
        case 5LL:
        case 6LL:
        case 7LL:
        case 8LL:
LABEL_28:
          BYTE1(v2) |= 5u;
          break;
        case 9LL:
        case 22LL:
        case 23LL:
        case 24LL:
        case 25LL:
        case 26LL:
        case 27LL:
LABEL_15:
          BYTE1(v2) |= 3u;
          break;
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
LABEL_27:
          BYTE1(v2) |= 4u;
          break;
        case 14LL:
        case 15LL:
        case 16LL:
        case 17LL:
        case 18LL:
          goto LABEL_24;
        case 19LL:
        case 20LL:
        case 21LL:
          goto LABEL_16;
        default:
          goto LABEL_77;
      }
      goto LABEL_16;
    default:
      return (unsigned int)-1;
  }
  return v2;
}

