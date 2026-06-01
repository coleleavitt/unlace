__int64 __fastcall sub_29480(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // rcx
  char v7; // cl
  int v8; // r9d
  __int64 v9; // r8
  int v10; // edx
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx

  result = *(unsigned __int16 *)(a2 + 6);
  v3 = *(_QWORD *)(a2 + 8);
  if ( *((_BYTE *)a1 + 8) )
  {
    if ( v3 )
    {
      v4 = *a1;
      v5 = 0;
      while ( (int)result <= 194 )
      {
        while ( 1 )
        {
          v7 = result + 127;
          v8 = result;
          if ( (unsigned int)(result - 129) > 0x1E )
            break;
          ++v5;
          result = (unsigned int)(result + 1);
          v4 |= 1LL << v7;
          *a1 = v4;
          if ( (unsigned __int64)v5 >= *(_QWORD *)(a2 + 8) )
            return result;
        }
        v13 = result;
        if ( (_DWORD)result == 161 )
        {
          v4 |= 0x80000000uLL;
          ++v5;
          *a1 = v4;
          result = v5;
          if ( (unsigned __int64)v5 >= *(_QWORD *)(a2 + 8) )
            return result;
          v8 = 162;
          v13 = 162;
        }
        result = (unsigned int)(v13 + 1);
        if ( (unsigned int)(v8 - 163) <= 0x1F )
        {
          v6 = 1LL << ((unsigned __int8)v13 + 125);
          goto LABEL_5;
        }
LABEL_6:
        ++v5;
        *a1 = v4;
        if ( (unsigned __int64)v5 >= *(_QWORD *)(a2 + 8) )
          return result;
      }
      result = 164;
      v6 = 0x100000000LL;
LABEL_5:
      v4 |= v6;
      goto LABEL_6;
    }
  }
  else if ( v3 )
  {
    v9 = *a1;
    LODWORD(result) = result - 29;
    v10 = 0;
    v11 = *(char *)(a2 + 33) + 1;
    do
    {
      v12 = result + 29;
      if ( (int)result + 29 <= 15 )
      {
        if ( v12 >= 0 )
          v9 |= 1LL << v12;
      }
      else if ( (unsigned int)(result - 16) <= 0x4F )
      {
        switch ( (int)result )
        {
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
            v9 |= 3LL << (2 * (unsigned __int8)result);
            break;
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          case 38:
          case 39:
          case 40:
          case 41:
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
            v9 |= 3LL << (2 * (unsigned __int8)result - 48);
            break;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
          case 63:
            v9 |= 1LL << result;
            break;
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
            v9 |= 1LL << ((unsigned __int8)result - 48);
            break;
          default:
            v9 |= 15LL << (4 * (unsigned __int8)result - 48);
            break;
        }
      }
      ++v10;
      *a1 = v9;
      result = (unsigned int)(v11 + result);
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(a2 + 8) );
  }
  else if ( !*(_BYTE *)(a2 + 32) )
  {
    if ( (unsigned __int16)result <= 0xFu )
    {
      v3 = 1LL << result;
    }
    else if ( (unsigned __int16)(result - 45) <= 0x4Fu )
    {
      switch ( *(_WORD *)(a2 + 6) )
      {
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
          result = 3LL << (2 * (unsigned __int8)result - 58);
          v3 = result;
          break;
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
          result = 3LL << (2 * (unsigned __int8)result - 106);
          v3 = result;
          break;
        case 'M':
        case 'N':
        case 'O':
        case 'P':
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
          v3 = 1LL << ((unsigned __int8)result - 29);
          break;
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
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
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case '{':
        case '|':
          v3 = 1LL << ((unsigned __int8)result - 77);
          break;
        default:
          result = 15LL << (4 * (unsigned __int8)result + 92);
          v3 = result;
          break;
      }
    }
    *a1 |= v3;
  }
  return result;
}

