const char *__fastcall sub_767F0(char *a1, __int64 a2)
{
  char *v2; // rbp
  char v4; // al
  char v5; // dl
  const char *v6; // rbx

  switch ( (int)a2 )
  {
    case 0:
    case 16:
    case 20:
      if ( dbg )
      {
        v4 = 88;
        v5 = 65;
        v6 = "EAX";
        goto LABEL_10;
      }
      return "EAX";
    case 1:
    case 17:
    case 21:
      v2 = "ECX";
      goto LABEL_4;
    case 2:
    case 18:
    case 22:
      v2 = "EDX";
      goto LABEL_4;
    case 3:
    case 19:
    case 23:
      v2 = "EBX";
      goto LABEL_4;
    case 4:
      v2 = "ESP";
      goto LABEL_4;
    case 5:
      v2 = "EBP";
      goto LABEL_4;
    case 6:
      v2 = "ESI";
      goto LABEL_4;
    case 7:
      v2 = "EDI";
LABEL_4:
      if ( dbg )
      {
        v5 = v2[1];
        v4 = v2[2];
        v6 = v2;
LABEL_10:
        a1[5320] = 82;
        v2 = a1 + 5320;
        a1[5321] = v5;
        a1[5322] = v4;
        a1[5323] = 0;
        if ( (unsigned int)sub_71F30(a1 + 5320, a2) == -1 )
        {
          v2 = (char *)(v6 + 1);
          if ( (unsigned int)sub_71F30((char *)v6 + 1, a2) == -1 )
            v2 = (char *)v6;
        }
      }
      break;
    case 8:
      v2 = "R8";
      break;
    case 9:
      v2 = "R9";
      break;
    case 10:
      v2 = "R10";
      break;
    case 11:
      v2 = "R11";
      break;
    case 12:
      v2 = "R12";
      break;
    case 13:
      v2 = "R13";
      break;
    case 14:
      v2 = "R14";
      break;
    case 15:
      v2 = "R15";
      break;
    case 24:
      v2 = "RSP";
      break;
    case 25:
      v2 = "RBP";
      break;
    case 26:
      v2 = "RSI";
      break;
    case 27:
      v2 = "RDI";
      break;
    case 28:
      v2 = "RIP";
      break;
    case 29:
      v2 = "ES";
      break;
    case 30:
      v2 = "CS";
      break;
    case 31:
      v2 = "SS";
      break;
    case 32:
      v2 = "DS";
      break;
    case 33:
      v2 = "FS";
      break;
    case 34:
      v2 = "GS";
      break;
    case 44:
      v2 = "EFL";
      break;
    case 53:
      v2 = "CTRL";
      break;
    case 54:
      v2 = "STAT";
      break;
    case 55:
      v2 = "TAGS";
      break;
    case 80:
      v2 = "MXCSR";
      break;
    default:
      switch ( (int)a2 )
      {
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
          v2 = a1 + 5320;
          qsnprintf();
          if ( (unsigned int)sub_71F30(a1 + 5320, 8) == -1 )
            goto LABEL_15;
          break;
        default:
LABEL_15:
          v2 = 0;
          sub_51730((__int64)"Bad register number passed to pc.get_register_value: %d\n", a2);
          break;
      }
      break;
  }
  return v2;
}
