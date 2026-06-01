void __fastcall sub_D440(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, int *a5)
{
  char v8; // al
  unsigned __int8 next_byte; // al
  char v10; // al
  bool v11; // zf
  int v12; // eax
  char v13; // al
  char v14; // al
  int v15; // eax

  if ( (a4 & 0xE) == 0xA )
  {
    if ( (a3 & 0x71) == 0x31 )
    {
      *a5 = 88;
    }
    else if ( (a3 & 0x71) != 0x71 )
    {
      *a5 = 86;
    }
  }
  else
  {
    v8 = (a3 >> 4) & 3;
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 == 1 )
        {
          if ( (unsigned __int8)a4 <= 0xBu )
          {
            next_byte = insn_get_next_byte();
            switch ( (next_byte >> 3) & 7 | (8 * a3) & 8 )
            {
              case 0:
                *a5 = 34;
                break;
              case 1:
              case 9:
                *a5 = 206;
                break;
              case 2:
                *a5 = 23;
                break;
              case 3:
                *a5 = 27;
                break;
              case 4:
                *a5 = 36;
                break;
              case 5:
                *a5 = 37;
                break;
              case 6:
                *a5 = 21;
                break;
              case 7:
                *a5 = 33;
                break;
              case 8:
                *a5 = 103;
                break;
              case 10:
                *a5 = 189;
                break;
              case 11:
                *a5 = 125;
                break;
              case 12:
                return;
              case 13:
                switch ( (2 * a4) & 0x1C | (next_byte >> 6) )
                {
                  case 0:
                    *a5 = 158;
                    break;
                  case 2:
                    *a5 = 157;
                    break;
                  case 3:
                    *a5 = 73;
                    break;
                  case 4:
                    *a5 = 150;
                    break;
                  case 6:
                    *a5 = 149;
                    break;
                  case 7:
                    *a5 = 71;
                    break;
                  case 8:
                    *a5 = 100;
                    break;
                  case 9:
                    *a5 = 101;
                    break;
                  case 10:
                    *a5 = 99;
                    break;
                  case 11:
                    *a5 = 106;
                    break;
                  case 16:
                  case 17:
                    *a5 = 24;
                    break;
                  default:
                    return;
                }
                break;
              case 14:
              case 15:
                *a5 = 169;
                break;
            }
          }
          else if ( a4 == 14 )
          {
            *a5 = 143;
          }
          else if ( (unsigned __int8)a4 > 0xEu )
          {
            if ( a4 == 15 )
              *a5 = 166;
          }
          else
          {
            *a5 = 5 * (a4 != 12) + 93;
          }
        }
        else if ( (unsigned __int8)a4 <= 0xBu )
        {
          v13 = insn_get_next_byte();
          switch ( v13 & 0x3F | (a4 << 6) & 0x40 )
          {
            case 1:
              *a5 = 179;
              break;
            case 3:
            case 0x13:
              *a5 = 77;
              break;
            case 0xE:
            case 0x4E:
              *a5 = 153;
              break;
            case 0x11:
              *a5 = 174;
              break;
            case 0x1E:
            case 0x5E:
              *a5 = 68;
              break;
            case 0x21:
              if ( *(_DWORD *)(a1 + 4328) == 5 )
                *a5 = 175;
              break;
            case 0x23:
            case 0x33:
              *a5 = 83;
              break;
            case 0x2E:
            case 0x6E:
              *a5 = 22;
              break;
            case 0x4F:
              *a5 = 91;
              break;
            case 0x5F:
              *a5 = 96;
              break;
            case 0x7E:
              *a5 = 138;
              break;
            default:
              if ( a3 <= 0xCFu && (unsigned __int8)a4 <= 9u )
                sub_B580(a4, v13 & 0xF, a5);
              break;
          }
        }
        else if ( a4 == 14 )
        {
          *a5 = 89;
        }
        else if ( (unsigned __int8)a4 > 0xEu )
        {
          if ( a4 == 15 )
            *a5 = 94;
        }
        else
        {
          *a5 = 5 * (a4 != 12) + 90;
        }
        return;
      }
      if ( (unsigned __int8)a4 > 0xBu )
      {
        if ( a4 == 12 )
        {
          *a5 = 67;
        }
        else if ( a4 == 15 )
        {
          *a5 = 204;
        }
        return;
      }
      v14 = ((unsigned __int8)insn_get_next_byte() >> 4) & 3;
      if ( v14 == 2 )
      {
        *a5 = 113;
        return;
      }
      if ( v14 != 3 )
      {
        v11 = v14 == 1;
        v15 = 16;
        if ( !v11 )
          v15 = 171;
        *a5 = v15;
        return;
      }
      if ( (a3 & 1) != 0 )
        return;
LABEL_41:
      *a5 = 6;
      return;
    }
    if ( (unsigned __int8)a4 <= 0xBu )
    {
      v10 = ((unsigned __int8)insn_get_next_byte() >> 4) & 3;
      if ( v10 == 2 )
      {
        *a5 = 164;
        return;
      }
      if ( v10 == 3 )
        goto LABEL_41;
      v11 = v10 == 1;
      v12 = 42;
      if ( !v11 )
        v12 = 176;
      *a5 = v12;
    }
    else if ( a4 == 12 )
    {
      *a5 = 66;
    }
  }
}

