__int64 __fastcall sub_2BE80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  int v6; // ebp
  int v7; // r12d
  unsigned __int64 *v9; // rax
  __int64 flags; // rax
  __int64 v11; // rbx
  char v13; // cl
  char v14; // cl
  __int64 v16; // [rsp+10h] [rbp-1B8h] BYREF
  char v17; // [rsp+18h] [rbp-1B0h]
  __int128 v18; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-198h]
  __int64 v20; // [rsp+38h] [rbp-190h]
  __int64 v21; // [rsp+40h] [rbp-188h]
  char v22; // [rsp+48h] [rbp-180h] BYREF
  char v23; // [rsp+49h] [rbp-17Fh]
  unsigned __int16 v24; // [rsp+4Eh] [rbp-17Ah]
  char v25; // [rsp+70h] [rbp-158h] BYREF
  char v26; // [rsp+71h] [rbp-157h]
  unsigned __int16 v27; // [rsp+76h] [rbp-152h]
  char v28; // [rsp+99h] [rbp-12Fh]
  __int64 v29; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v30; // [rsp+188h] [rbp-40h] BYREF

  v30 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 1) != 1 )
    return 0;
  v6 = *(unsigned __int16 *)(a3 + 6);
  v7 = a4;
  if ( v6 != a4 && (!a5 || *(_BYTE *)(a5 + 1) != 1 || v6 != *(unsigned __int16 *)(a5 + 6)) )
  {
    v19 = -1;
    v9 = (unsigned __int64 *)&v22;
    v20 = 0;
    v21 = 0;
    v18 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( v9 != &v30 );
    while ( 1 )
    {
      flags = get_flags_ex();
      v11 = flags & 0x1000;
      if ( (flags & 0x1000) != 0 || (flags & 0x10000) == 0 || decode_prev_insn() == -1 )
        return 0;
      switch ( (__int16)v20 )
      {
        case 6:
        case 7:
        case 11:
        case 12:
        case 14:
        case 22:
          if ( v23 != 1 || v26 != 1 || v28 != 5 || v29 )
            goto LABEL_14;
          goto LABEL_30;
        case 10:
          if ( v23 == 1 && v26 == 1 && v28 == 5 && v29 == 0xFFFFFFFFLL )
            goto LABEL_30;
          goto LABEL_14;
        case 23:
        case 80:
          if ( v23 != 1 )
            goto LABEL_14;
          if ( v26 == 1 )
          {
LABEL_30:
            if ( v24 == v7 )
              v7 = v27;
            if ( v24 == v6 )
              v6 = v27;
            if ( v7 == v6 || a5 && *(_BYTE *)(a5 + 1) == 1 && v6 == *(unsigned __int16 *)(a5 + 6) )
              return 1;
LABEL_14:
            if ( (v21 & 0x40000) != 0 )
              goto LABEL_15;
          }
          else if ( (v21 & 0x40000) != 0 )
          {
            goto LABEL_15;
          }
          if ( (getinf() & 0x1006) != 0x1002 )
          {
            v17 = 0;
            if ( !a6 )
            {
              if ( v7 <= 15 )
              {
                if ( v7 >= 0 )
                  v11 = 1LL << v7;
              }
              else if ( (unsigned int)(v7 - 45) <= 0x4F )
              {
                switch ( v7 )
                {
                  case '5':
                  case '6':
                  case '7':
                  case '8':
                  case '9':
                  case ':':
                  case ';':
                  case '<':
                    v11 = 3LL << (2 * (unsigned __int8)v7 - 58);
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
                    v11 = 3LL << (2 * ((unsigned __int8)v7 - 53));
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
                    v11 = 1LL << ((unsigned __int8)v7 - 29);
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
                    v11 = 1LL << ((unsigned __int8)v7 - 77);
                    break;
                  default:
                    v11 = 15LL << (4 * (unsigned __int8)v7 + 92);
                    break;
                }
              }
            }
            if ( v6 <= 15 )
            {
              v11 |= 1LL << v6;
            }
            else if ( (unsigned int)(v6 - 45) <= 0x4F )
            {
              switch ( v6 )
              {
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case ':':
                case ';':
                case '<':
                  v11 |= 3LL << (2 * (unsigned __int8)v6 - 58);
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
                  v11 |= 3LL << (2 * ((unsigned __int8)v6 - 53));
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
                  v11 |= 1LL << ((unsigned __int8)v6 - 29);
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
                  v11 |= 1LL << ((unsigned __int8)v6 - 77);
                  break;
                default:
                  v11 |= 15LL << (4 * (unsigned __int8)v6 + 92);
                  break;
              }
            }
            goto LABEL_24;
          }
LABEL_15:
          v17 = 1;
          if ( a6 )
            goto LABEL_19;
          v13 = v7 + 127;
          if ( (unsigned int)(v7 - 129) <= 0x1E )
            goto LABEL_62;
          if ( v7 == 161 )
          {
            v11 = 0x80000000LL;
          }
          else if ( (unsigned int)(v7 - 163) <= 0x1F )
          {
            v13 = v7 + 125;
LABEL_62:
            v11 = 1LL << v13;
          }
LABEL_19:
          v14 = v6 + 127;
          if ( (unsigned int)(v6 - 129) <= 0x1E )
            goto LABEL_23;
          if ( v6 != 161 )
          {
            if ( (unsigned int)(v6 - 163) > 0x1F )
              goto LABEL_24;
            v14 = v6 + 125;
LABEL_23:
            v11 |= 1LL << v14;
            goto LABEL_24;
          }
          v11 |= 0x80000000uLL;
LABEL_24:
          v16 = v11;
          if ( (sub_2B2B0(a1, &v18, &v16, 0) & v11) != 0 )
            return 0;
          break;
        case 30:
          if ( a5 && v23 == 1 && v6 == v24 && (unsigned __int8)sub_2A020((__int64)&v25, a5) )
            return 1;
          goto LABEL_14;
        default:
          goto LABEL_14;
      }
    }
  }
  return 1;
}

