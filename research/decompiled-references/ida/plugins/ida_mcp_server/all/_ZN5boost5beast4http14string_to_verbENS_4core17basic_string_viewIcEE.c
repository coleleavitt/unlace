__int64 __fastcall boost::beast::http::string_to_verb(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  char v3; // al
  unsigned __int64 v4; // rsi
  bool v5; // zf
  char v6; // al
  char v7; // al
  unsigned __int64 v8; // rsi

  result = 0;
  if ( a2 > 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 'A':
        result = 0;
        if ( a2 == 3 && *(_WORD *)(a1 + 1) == 19523 )
          result = 20;
        break;
      case 'B':
        result = 0;
        if ( a2 == 4 )
        {
          if ( *(_WORD *)(a1 + 1) != 20041 || *(_BYTE *)(a1 + 3) != 68 )
            goto LABEL_8;
          result = 17;
        }
        break;
      case 'C':
        v7 = *(_BYTE *)(a1 + 1);
        v8 = a2 - 2;
        if ( v7 == 72 )
        {
          result = 0;
          if ( v8 == 6 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1330332485 || *(_WORD *)(a1 + 6) != 21589 )
              goto LABEL_8;
            result = 23;
          }
        }
        else
        {
          if ( v7 != 79 )
            goto LABEL_8;
          if ( v8 == 5 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1128615502 || *(_BYTE *)(a1 + 6) != 84 )
              goto LABEL_8;
            result = 6;
          }
          else
          {
            result = 0;
            if ( v8 == 2 )
              result = 9 * (unsigned int)(*(_WORD *)(a1 + 2) == 22864);
          }
        }
        break;
      case 'D':
        result = 0;
        if ( a2 == 6 )
        {
          if ( *(_DWORD *)(a1 + 1) != 1413827653 || *(_BYTE *)(a1 + 5) != 69 )
            LODWORD(result) = 1;
          result = (unsigned int)result ^ 1;
        }
        break;
      case 'G':
        result = 0;
        if ( a2 == 3 )
          result = 2 * (unsigned int)(*(_WORD *)(a1 + 1) == 21573);
        break;
      case 'H':
        result = 0;
        if ( a2 == 4 )
        {
          if ( *(_WORD *)(a1 + 1) != 16709 || *(_BYTE *)(a1 + 3) != 68 )
            goto LABEL_8;
          result = 3;
        }
        break;
      case 'L':
        result = 0;
        if ( a2 == 4 )
        {
          if ( *(_WORD *)(a1 + 1) == 20041 && *(_BYTE *)(a1 + 3) == 75 )
          {
            result = 32;
          }
          else
          {
            if ( *(_WORD *)(a1 + 1) != 17231 || *(_BYTE *)(a1 + 3) != 75 )
              goto LABEL_8;
            result = 10;
          }
        }
        break;
      case 'M':
        v6 = *(_BYTE *)(a1 + 1);
        if ( v6 == 75 )
        {
          if ( a2 == 10 )
          {
            result = 22;
            if ( *(_QWORD *)(a1 + 2) != 0x5954495649544341LL )
            {
              result = 0;
              if ( *(_BYTE *)(a1 + 2) == 67 )
                result = memcmp((const void *)(a1 + 3), "ALENDAR", 7u) == 0 ? 0x1F : 0;
            }
          }
          else
          {
            result = 0;
            if ( *(_BYTE *)(a1 + 2) == 67 && a2 == 5 )
            {
              result = 11;
              if ( *(_WORD *)(a1 + 3) != 19535 )
                goto LABEL_8;
            }
          }
        }
        else if ( v6 > 75 )
        {
          v5 = v6 == 79;
          result = 0;
          if ( v5 && a2 == 4 && *(_WORD *)(a1 + 2) == 17750 )
            result = 12;
        }
        else if ( v6 == 45 )
        {
          result = 0;
          if ( a2 == 8 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1380009299 || *(_WORD *)(a1 + 6) != 18499 )
              goto LABEL_8;
            result = 25;
          }
        }
        else
        {
          v5 = v6 == 69;
          result = 0;
          if ( v5 && a2 == 5 )
          {
            if ( *(_WORD *)(a1 + 2) != 18258 || *(_BYTE *)(a1 + 4) != 69 )
              goto LABEL_8;
            result = 24;
          }
        }
        break;
      case 'N':
        result = 0;
        if ( a2 == 6 )
        {
          if ( *(_DWORD *)(a1 + 1) != 1179210831 || *(_BYTE *)(a1 + 5) != 89 )
            goto LABEL_8;
          result = 26;
        }
        break;
      case 'O':
        result = 0;
        if ( a2 == 7 )
        {
          if ( *(_DWORD *)(a1 + 1) != 1330205776 || *(_WORD *)(a1 + 5) != 21326 )
            goto LABEL_8;
          result = 7;
        }
        break;
      case 'P':
        v3 = *(_BYTE *)(a1 + 1);
        v4 = a2 - 2;
        if ( v3 == 82 )
        {
          if ( v4 == 6 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1229344847 || *(_WORD *)(a1 + 6) != 17486 )
              goto LABEL_8;
            result = 13;
          }
          else
          {
            result = 0;
            if ( v4 == 7 )
            {
              if ( *(_DWORD *)(a1 + 2) != 1095782479 || *(_DWORD *)(a1 + 5) != 1212372033 )
                goto LABEL_8;
              result = 14;
            }
          }
        }
        else if ( v3 > 82 )
        {
          if ( v3 != 85 )
            goto LABEL_8;
          if ( v4 == 3 )
          {
            if ( *(_WORD *)(a1 + 2) != 18258 || *(_BYTE *)(a1 + 4) != 69 )
              goto LABEL_8;
            result = 30;
          }
          else
          {
            result = 0;
            if ( v4 == 1 )
              result = 5 * (unsigned int)(*(_BYTE *)(a1 + 2) == 84);
          }
        }
        else if ( v3 == 65 )
        {
          result = 0;
          if ( v4 == 3 )
          {
            if ( *(_WORD *)(a1 + 2) != 17236 || *(_BYTE *)(a1 + 4) != 72 )
              goto LABEL_8;
            result = 29;
          }
        }
        else
        {
          v5 = v3 == 79;
          result = 0;
          if ( v5 && v4 == 2 )
            result = 4 * (unsigned int)(*(_WORD *)(a1 + 2) == 21587);
        }
        break;
      case 'R':
        result = 0;
        if ( *(_BYTE *)(a1 + 1) == 69 && a2 == 6 )
        {
          result = 18;
          if ( *(_DWORD *)(a1 + 2) != 1145981250 )
          {
            result = 21;
            if ( *(_DWORD *)(a1 + 2) != 1414680400 )
              result = 0;
          }
        }
        break;
      case 'S':
        if ( a2 == 6 )
        {
          if ( *(_DWORD *)(a1 + 1) != 1129464133 || *(_BYTE *)(a1 + 5) != 72 )
            goto LABEL_8;
          result = 15;
        }
        else
        {
          result = 0;
          if ( a2 == 9 && *(_QWORD *)(a1 + 1) == 0x4542495243534255LL )
            result = 27;
        }
        break;
      case 'T':
        result = 0;
        if ( a2 == 5 )
          result = 8 * (unsigned int)(*(_DWORD *)(a1 + 1) == 1162035538);
        break;
      case 'U':
        result = 0;
        if ( *(_BYTE *)(a1 + 1) == 78 )
        {
          if ( a2 == 6 )
          {
            result = 19;
            if ( *(_DWORD *)(a1 + 2) != 1145981250 )
            {
              result = 33;
              if ( *(_DWORD *)(a1 + 2) != 1263421772 )
                result = 16 * (unsigned int)(*(_DWORD *)(a1 + 2) == 1262702412);
            }
          }
          else if ( a2 == 11 )
          {
            if ( *(_QWORD *)(a1 + 2) != 0x4249524353425553LL || *(_BYTE *)(a1 + 10) != 69 )
              goto LABEL_8;
            result = 28;
          }
        }
        break;
      default:
LABEL_8:
        result = 0;
        break;
    }
  }
  return result;
}

