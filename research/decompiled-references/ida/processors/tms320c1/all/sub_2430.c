__int64 __fastcall sub_2430(__int64 a1)
{
  __int64 wide_byte; // r9
  unsigned __int16 v2; // r10
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // ax
  unsigned __int16 v6; // ax
  __int64 result; // rax
  char v8; // r9^1
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // ax

  wide_byte = get_wide_byte();
  v2 = *(_WORD *)(a1 + 26) + 1;
  *(_WORD *)(a1 + 26) = v2;
  if ( (wide_byte & 0xE000) == 0x8000 )
  {
    *(_BYTE *)(a1 + 41) = 5;
    *(_WORD *)(a1 + 24) = 30;
    *(_QWORD *)(a1 + 48) = wide_byte & 0x1FFF;
    *(_BYTE *)(a1 + 45) = 1;
    return v2;
  }
  v3 = wide_byte & 0xF000;
  if ( (wide_byte & 0xF000) == 0x1000 )
  {
    *(_WORD *)(a1 + 24) = 10;
    return sub_23B0(a1, wide_byte);
  }
  if ( v3 == 0x2000 )
  {
    *(_WORD *)(a1 + 24) = 5;
    return sub_23B0(a1, wide_byte);
  }
  if ( !v3 )
  {
    *(_WORD *)(a1 + 24) = 1;
    return sub_23B0(a1, wide_byte);
  }
  v4 = wide_byte & 0xF800;
  if ( (wide_byte & 0xF800) == 0x4800 )
  {
    *(_WORD *)(a1 + 24) = 57;
LABEL_25:
    if ( (unsigned int)sub_22B0(a1, a1 + 40, a1 + 120, wide_byte) )
    {
      *(_BYTE *)(a1 + 81) = 5;
      *(_QWORD *)(a1 + 88) = v8 & 7;
      return v9;
    }
    return 0;
  }
  if ( v4 == 22528 )
  {
    *(_WORD *)(a1 + 24) = 8;
    return sub_2340(a1, wide_byte);
  }
  if ( v4 == 0x4000 )
  {
    *(_WORD *)(a1 + 24) = 56;
    goto LABEL_25;
  }
  v5 = wide_byte & 0xFE00;
  if ( (wide_byte & 0xFE00) == 0x3800 )
  {
    *(_WORD *)(a1 + 24) = 18;
LABEL_31:
    *(_BYTE *)(a1 + 41) = 1;
    *(_WORD *)(a1 + 46) = BYTE1(wide_byte) & 1;
    if ( (unsigned int)sub_22B0(a1, a1 + 80, a1 + 120, wide_byte) )
      return v2;
    return 0;
  }
  if ( v5 == 28672 )
  {
    *(_BYTE *)(a1 + 41) = 1;
    *(_WORD *)(a1 + 24) = 19;
    *(_BYTE *)(a1 + 81) = 5;
    *(_WORD *)(a1 + 46) = BYTE1(wide_byte) & 1;
    *(_QWORD *)(a1 + 88) = (unsigned __int8)wide_byte;
    *(_BYTE *)(a1 + 85) = 1;
    return v2;
  }
  if ( v5 == 12288 )
  {
    *(_WORD *)(a1 + 24) = 24;
    goto LABEL_31;
  }
  HIBYTE(v6) = BYTE1(wide_byte);
  LOBYTE(v6) = 0;
  if ( v6 == 27136 )
  {
    *(_WORD *)(a1 + 24) = 26;
    return sub_2340(a1, wide_byte);
  }
  if ( v6 > 0x6A00u )
  {
    if ( v6 == 30976 )
    {
      *(_WORD *)(a1 + 24) = 4;
      return sub_2340(a1, wide_byte);
    }
    if ( v6 > 0x7900u )
    {
      if ( v6 == 31744 )
      {
        *(_WORD *)(a1 + 24) = 54;
        return sub_2340(a1, wide_byte);
      }
      if ( v6 <= 0x7C00u )
      {
        if ( v6 == 31232 )
        {
          *(_WORD *)(a1 + 24) = 7;
          return sub_2340(a1, wide_byte);
        }
        if ( v6 == 31488 )
        {
          *(_WORD *)(a1 + 24) = 48;
          return sub_2340(a1, wide_byte);
        }
      }
      else
      {
        if ( v6 == 32000 )
        {
          *(_WORD *)(a1 + 24) = 59;
          return sub_2340(a1, wide_byte);
        }
        if ( v6 == 32256 )
        {
          *(_WORD *)(a1 + 24) = 6;
          *(_BYTE *)(a1 + 41) = 5;
          *(_QWORD *)(a1 + 48) = (unsigned __int8)wide_byte;
          *(_BYTE *)(a1 + 45) = 0;
          return v2;
        }
        if ( (unsigned __int16)wide_byte > 0x7F9Du )
        {
          if ( (_WORD)wide_byte == 0xFA00 )
          {
            *(_WORD *)(a1 + 24) = 39;
          }
          else if ( (unsigned __int16)wide_byte > 0xFA00u )
          {
            if ( (_WORD)wide_byte == 0xFD00 )
            {
              *(_WORD *)(a1 + 24) = 35;
            }
            else if ( (unsigned __int16)wide_byte > 0xFD00u )
            {
              if ( (_WORD)wide_byte == 0xFE00 )
              {
                *(_WORD *)(a1 + 24) = 40;
              }
              else
              {
                if ( (_WORD)wide_byte != 0xFF00 )
                  return 0;
                *(_WORD *)(a1 + 24) = 42;
              }
            }
            else if ( (_WORD)wide_byte == 0xFB00 )
            {
              *(_WORD *)(a1 + 24) = 38;
            }
            else
            {
              if ( (_WORD)wide_byte != 0xFC00 )
                return 0;
              *(_WORD *)(a1 + 24) = 36;
            }
          }
          else if ( (_WORD)wide_byte == 0xF600 )
          {
            *(_WORD *)(a1 + 24) = 37;
          }
          else if ( (unsigned __int16)wide_byte > 0xF600u )
          {
            if ( (_WORD)wide_byte == 0xF800 )
            {
              *(_WORD *)(a1 + 24) = 44;
            }
            else
            {
              if ( (_WORD)wide_byte != 0xF900 )
                return 0;
              *(_WORD *)(a1 + 24) = 33;
            }
          }
          else if ( (_WORD)wide_byte == 0xF400 )
          {
            *(_WORD *)(a1 + 24) = 34;
          }
          else
          {
            if ( (_WORD)wide_byte != 0xF500 )
              return 0;
            *(_WORD *)(a1 + 24) = 41;
          }
          v10 = sub_2320(a1);
          *(_BYTE *)(a1 + 41) = 7;
          *(_BYTE *)(a1 + 45) = 1;
          *(_QWORD *)(a1 + 56) = v10;
          return *(unsigned __int16 *)(a1 + 26);
        }
        if ( (unsigned __int16)wide_byte > 0x7F7Fu )
        {
          LOWORD(wide_byte) = wide_byte - 32640;
          switch ( wide_byte )
          {
            case 0LL:
              *(_WORD *)(a1 + 24) = 49;
              result = v2;
              break;
            case 1LL:
              *(_WORD *)(a1 + 24) = 46;
              result = v2;
              break;
            case 2LL:
              *(_WORD *)(a1 + 24) = 47;
              result = v2;
              break;
            case 8LL:
              *(_WORD *)(a1 + 24) = 0;
              result = v2;
              break;
            case 9LL:
              *(_WORD *)(a1 + 24) = 15;
              result = v2;
              break;
            case 10LL:
              *(_WORD *)(a1 + 24) = 52;
              result = v2;
              break;
            case 11LL:
              *(_WORD *)(a1 + 24) = 53;
              return v2;
            case 12LL:
              *(_WORD *)(a1 + 24) = 43;
              result = v2;
              break;
            case 13LL:
              *(_WORD *)(a1 + 24) = 45;
              result = v2;
              break;
            case 14LL:
              *(_WORD *)(a1 + 24) = 31;
              result = v2;
              break;
            case 15LL:
              *(_WORD *)(a1 + 24) = 25;
              result = v2;
              break;
            case 16LL:
              *(_WORD *)(a1 + 24) = 32;
              result = v2;
              break;
            case 28LL:
              *(_WORD *)(a1 + 24) = 51;
              result = v2;
              break;
            case 29LL:
              *(_WORD *)(a1 + 24) = 50;
              result = v2;
              break;
            default:
              return 0;
          }
          return result;
        }
      }
    }
    else
    {
      if ( v6 == 27904 )
      {
        *(_WORD *)(a1 + 24) = 29;
        return sub_2340(a1, wide_byte);
      }
      if ( v6 > 0x6D00u )
      {
        if ( v6 == 28416 )
        {
          *(_WORD *)(a1 + 24) = 21;
          return sub_2340(a1, wide_byte);
        }
        if ( v6 == 30720 )
        {
          *(_WORD *)(a1 + 24) = 14;
          return sub_2340(a1, wide_byte);
        }
        if ( (wide_byte & 0xFFFE) == 0x6E00 )
        {
          *(_WORD *)(a1 + 24) = 22;
          *(_BYTE *)(a1 + 41) = 5;
          *(_QWORD *)(a1 + 48) = wide_byte & 1;
          *(_BYTE *)(a1 + 45) = 0;
          return v2;
        }
      }
      else
      {
        if ( v6 == 27392 )
        {
          *(_WORD *)(a1 + 24) = 28;
          return sub_2340(a1, wide_byte);
        }
        if ( v6 == 27648 )
        {
          *(_WORD *)(a1 + 24) = 27;
          return sub_2340(a1, wide_byte);
        }
      }
    }
    return 0;
  }
  if ( v6 == 25600 )
  {
    *(_WORD *)(a1 + 24) = 11;
    return sub_2340(a1, wide_byte);
  }
  if ( v6 > 0x6400u )
  {
    if ( v6 == 26368 )
    {
      *(_WORD *)(a1 + 24) = 58;
      return sub_2340(a1, wide_byte);
    }
    if ( v6 > 0x6700u )
    {
      if ( v6 == 26624 )
      {
        *(_WORD *)(a1 + 24) = 23;
        return sub_2340(a1, wide_byte);
      }
      if ( v6 == 26880 )
      {
        *(_WORD *)(a1 + 24) = 55;
        return sub_2340(a1, wide_byte);
      }
    }
    else
    {
      if ( v6 == 25856 )
      {
        *(_WORD *)(a1 + 24) = 16;
        return sub_2340(a1, wide_byte);
      }
      if ( v6 == 26112 )
      {
        *(_WORD *)(a1 + 24) = 17;
        return sub_2340(a1, wide_byte);
      }
    }
    return 0;
  }
  if ( v6 == 24832 )
  {
    *(_WORD *)(a1 + 24) = 3;
    return sub_2340(a1, wide_byte);
  }
  if ( v6 > 0x6100u )
  {
    if ( v6 == 25088 )
    {
      *(_WORD *)(a1 + 24) = 12;
      return sub_2340(a1, wide_byte);
    }
    if ( v6 == 25344 )
    {
      *(_WORD *)(a1 + 24) = 13;
      return sub_2340(a1, wide_byte);
    }
    return 0;
  }
  if ( v6 != 20480 )
  {
    if ( v6 == 24576 )
    {
      *(_WORD *)(a1 + 24) = 2;
      return sub_2340(a1, wide_byte);
    }
    return 0;
  }
  *(_WORD *)(a1 + 24) = 9;
  return sub_2340(a1, wide_byte);
}

