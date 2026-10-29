bool __fastcall sub_2C410(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  char v6; // cl
  __int64 v7; // r13
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf() & 0x1006) == 0x1002 )
  {
    v6 = a3 + 127;
    v10 = 1;
    if ( (unsigned int)(a3 - 129) <= 0x1E )
    {
LABEL_3:
      v7 = 1LL << v6;
      goto LABEL_4;
    }
    v7 = 0x80000000LL;
    if ( a3 == 161 )
      goto LABEL_4;
    if ( (unsigned int)(a3 - 163) <= 0x1F )
    {
      v7 = 1LL << ((unsigned __int8)a3 + 125);
      goto LABEL_4;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_4;
  }
  v10 = 0;
  if ( a3 <= 15 )
  {
    v7 = 1LL << a3;
    if ( a3 >= 0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  if ( (unsigned int)(a3 - 45) > 0x4F )
    goto LABEL_17;
  switch ( a3 )
  {
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case ';':
    case '<':
      v7 = 3LL << (2 * (unsigned __int8)a3 - 58);
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
      v7 = 3LL << (2 * ((unsigned __int8)a3 - 53));
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
      v7 = 1LL << ((unsigned __int8)a3 - 29);
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
      v6 = a3 - 77;
      goto LABEL_3;
    default:
      v7 = 15LL << (4 * (unsigned __int8)a3 + 92);
      break;
  }
LABEL_4:
  v9 = v7;
  return (sub_2B2B0(a1, a2, &v9, a4) & v7) != 0;
}

