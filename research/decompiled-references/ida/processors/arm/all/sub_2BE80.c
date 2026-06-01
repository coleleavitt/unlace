__int64 __fastcall sub_2BE80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  int v6; // ebp
  int v7; // r12d
  unsigned __int64 *v10; // rax
  __int64 flags; // rax
  __int64 v12; // rbx
  char v14; // cl
  char v15; // cl
  __int64 v17; // [rsp+10h] [rbp-1B8h] BYREF
  char v18; // [rsp+18h] [rbp-1B0h]
  __int128 v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-198h]
  __int64 v21; // [rsp+38h] [rbp-190h]
  __int64 v22; // [rsp+40h] [rbp-188h]
  char v23; // [rsp+48h] [rbp-180h] BYREF
  char v24; // [rsp+49h] [rbp-17Fh]
  unsigned __int16 v25; // [rsp+4Eh] [rbp-17Ah]
  char v26; // [rsp+70h] [rbp-158h] BYREF
  char v27; // [rsp+71h] [rbp-157h]
  unsigned __int16 v28; // [rsp+76h] [rbp-152h]
  char v29; // [rsp+99h] [rbp-12Fh]
  __int64 v30; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v31; // [rsp+188h] [rbp-40h] BYREF

  v31 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 1) != 1 )
    return 0;
  v6 = *(unsigned __int16 *)(a3 + 6);
  v7 = a4;
  if ( v6 != a4 && (!a5 || *(_BYTE *)(a5 + 1) != 1 || v6 != *(unsigned __int16 *)(a5 + 6)) )
  {
    v20 = -1;
    v10 = (unsigned __int64 *)&v23;
    v21 = 0;
    v22 = 0;
    v19 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( v10 != &v31 );
    while ( 1 )
    {
      flags = get_flags_ex(a2, 4);
      v12 = flags & 0x1000;
      if ( (flags & 0x1000) != 0 || (flags & 0x10000) == 0 || decode_prev_insn() == -1 )
        return 0;
      switch ( (__int16)v21 )
      {
        case 6:
        case 7:
        case 11:
        case 12:
        case 14:
        case 22:
          if ( v24 != 1 || v27 != 1 || v29 != 5 || v30 )
            goto LABEL_14;
          goto LABEL_30;
        case 10:
          if ( v24 == 1 && v27 == 1 && v29 == 5 && v30 == 0xFFFFFFFFLL )
            goto LABEL_30;
          goto LABEL_14;
        case 23:
        case 80:
          if ( v24 != 1 )
            goto LABEL_14;
          if ( v27 == 1 )
          {
LABEL_30:
            if ( v25 == v7 )
              v7 = v28;
            if ( v25 == v6 )
              v6 = v28;
            if ( v7 == v6 || a5 && *(_BYTE *)(a5 + 1) == 1 && v6 == *(unsigned __int16 *)(a5 + 6) )
              return 1;
LABEL_14:
            if ( (v22 & 0x40000) != 0 )
              goto LABEL_15;
          }
          else if ( (v22 & 0x40000) != 0 )
          {
            goto LABEL_15;
          }
          if ( (getinf(3) & 0x1006) != 0x1002 )
          {
            v18 = 0;
            if ( !a6 )
            {
              if ( v7 <= 15 )
              {
                if ( v7 >= 0 )
                  v12 = 1LL << v7;
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
                    v12 = 3LL << (2 * (unsigned __int8)v7 - 58);
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
                    v12 = 3LL << (2 * ((unsigned __int8)v7 - 53));
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
                    v12 = 1LL << ((unsigned __int8)v7 - 29);
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
                    v12 = 1LL << ((unsigned __int8)v7 - 77);
                    break;
                  default:
                    v12 = 15LL << (4 * (unsigned __int8)v7 + 92);
                    break;
                }
              }
            }
            if ( v6 <= 15 )
            {
              v12 |= 1LL << v6;
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
                  v12 |= 3LL << (2 * (unsigned __int8)v6 - 58);
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
                  v12 |= 3LL << (2 * ((unsigned __int8)v6 - 53));
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
                  v12 |= 1LL << ((unsigned __int8)v6 - 29);
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
                  v12 |= 1LL << ((unsigned __int8)v6 - 77);
                  break;
                default:
                  v12 |= 15LL << (4 * (unsigned __int8)v6 + 92);
                  break;
              }
            }
            goto LABEL_24;
          }
LABEL_15:
          v18 = 1;
          if ( a6 )
            goto LABEL_19;
          v14 = v7 + 127;
          if ( (unsigned int)(v7 - 129) <= 0x1E )
            goto LABEL_62;
          if ( v7 == 161 )
          {
            v12 = 0x80000000LL;
          }
          else if ( (unsigned int)(v7 - 163) <= 0x1F )
          {
            v14 = v7 + 125;
LABEL_62:
            v12 = 1LL << v14;
          }
LABEL_19:
          v15 = v6 + 127;
          if ( (unsigned int)(v6 - 129) <= 0x1E )
            goto LABEL_23;
          if ( v6 != 161 )
          {
            if ( (unsigned int)(v6 - 163) > 0x1F )
              goto LABEL_24;
            v15 = v6 + 125;
LABEL_23:
            v12 |= 1LL << v15;
            goto LABEL_24;
          }
          v12 |= 0x80000000uLL;
LABEL_24:
          v17 = v12;
          if ( (sub_2B2B0(a1, &v19, &v17, 0) & v12) != 0 )
            return 0;
          a2 = v20;
          break;
        case 30:
          if ( a5 && v24 == 1 && v6 == v25 && (unsigned __int8)sub_2A020((__int64)&v26, a5) )
            return 1;
          goto LABEL_14;
        default:
          goto LABEL_14;
      }
    }
  }
  return 1;
}
