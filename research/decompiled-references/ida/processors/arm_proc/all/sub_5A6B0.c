__int64 __fastcall sub_5A6B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  int *v3; // rax
  int *v5; // rsi
  __int64 v6; // r9
  char v7; // r11
  __int64 v8; // rbx
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // kr00_8
  __int64 v12; // rcx
  __int64 v13; // kr08_8
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  char v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v2 = (__int64 *)a1;
  v3 = *(int **)(a1 + 128);
  v19 = __readfsqword(0x28u);
  v5 = &v3[4 * *(_QWORD *)(a1 + 136)];
  if ( v3 != v5 )
  {
    v6 = *(_QWORD *)(a1 + 152);
    v7 = *(_BYTE *)(a1 + 160);
    v8 = 0;
    while ( 1 )
    {
      v9 = *v3;
      if ( v7 )
        break;
      while ( v9 <= 15 )
      {
        if ( v9 < 0 )
          goto LABEL_22;
        a1 = 1LL << v9;
        v12 = 1LL << v9;
        if ( ((1LL << v9) & v6) == 0 )
          goto LABEL_37;
LABEL_15:
        v3 += 4;
        if ( v5 == v3 )
          goto LABEL_23;
        v9 = *v3;
      }
      if ( (unsigned int)(v9 - 45) <= 0x4F )
      {
        v13 = a1;
        a1 = (unsigned int)(v9 - 53);
        switch ( v9 )
        {
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
            v14 = 3LL << (2 * (unsigned __int8)v9 - 58);
            if ( (v14 & v6) == 0 )
              goto LABEL_21;
            goto LABEL_15;
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
            v14 = 3LL << (2 * ((unsigned __int8)v9 - 53));
            if ( (v14 & v6) == 0 )
              goto LABEL_21;
            goto LABEL_15;
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
            v14 = 1LL << ((unsigned __int8)v9 - 29);
            if ( (v14 & v6) == 0 )
              goto LABEL_21;
            goto LABEL_15;
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
            v14 = 1LL << ((unsigned __int8)v9 - 77);
            if ( (v14 & v6) == 0 )
              goto LABEL_21;
            goto LABEL_15;
          default:
            a1 = v13;
            v14 = 15LL << (4 * (unsigned __int8)v9 + 92);
            if ( (v14 & v6) == 0 )
              goto LABEL_21;
            goto LABEL_15;
        }
      }
LABEL_22:
      v3 += 4;
      if ( v5 == v3 )
        goto LABEL_23;
    }
    LOBYTE(v10) = v9 + 127;
    if ( (unsigned int)(v9 - 129) <= 0x1E )
    {
LABEL_5:
      if ( (v6 & (1LL << v10)) == 0 )
        goto LABEL_22;
      goto LABEL_6;
    }
    while ( 1 )
    {
      if ( v9 == 161 )
      {
        if ( (int)v6 >= 0 )
          goto LABEL_22;
      }
      else
      {
        if ( (unsigned int)(v9 - 163) > 0x1F )
        {
          if ( v9 <= 15 )
          {
            a1 = 1LL << v9;
            v12 = 1LL << v9;
            if ( v9 >= 0 )
LABEL_37:
              v8 |= v12;
          }
          else if ( (unsigned int)(v9 - 45) <= 0x4F )
          {
            v11 = a1;
            a1 = (unsigned int)(v9 - 53);
            switch ( v9 )
            {
              case '5':
              case '6':
              case '7':
              case '8':
              case '9':
              case ':':
              case ';':
              case '<':
                v14 = 3LL << (2 * (unsigned __int8)v9 - 58);
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
                v14 = 3LL << (2 * ((unsigned __int8)v9 - 53));
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
                v14 = 1LL << ((unsigned __int8)v9 - 29);
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
                a1 = 1LL << ((unsigned __int8)v9 - 77);
                v14 = a1;
                break;
              default:
                a1 = v11;
                v14 = 15LL << (4 * (unsigned __int8)v9 + 92);
                break;
            }
LABEL_21:
            v8 |= v14;
          }
          goto LABEL_22;
        }
        if ( !_bittest64(&v6, (unsigned int)(v9 - 131)) )
          goto LABEL_22;
      }
LABEL_6:
      v3 += 4;
      if ( v5 == v3 )
        goto LABEL_23;
      v9 = *v3;
      v10 = *v3 - 129;
      if ( v10 <= 0x1E )
        goto LABEL_5;
    }
  }
  v8 = 0;
LABEL_23:
  v15 = *v2;
  v18 = 0;
  v17 = v8 | qword_AA670 | qword_AA660;
  return sub_2BE50(v15, a2, &v17, 1u);
}

