__int64 __fastcall sub_3E1D30(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  _DWORD *exception; // rax
  __int64 v4; // rax

  *a3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 1076);
  if ( (_WORD)v4 == 8509 )
  {
    *a2 = 1;
    return 32;
  }
  if ( (unsigned __int16)v4 <= 0x213Du )
  {
    if ( (unsigned __int16)v4 > 0x40Bu )
      goto LABEL_72;
    if ( (unsigned __int16)v4 > 0x3FFu )
    {
      LOWORD(v4) = v4 - 1024;
      switch ( v4 )
      {
        case 0LL:
          *a2 = 1;
          return 34;
        case 1LL:
          *a2 = 1;
          return 39;
        case 2LL:
          *a2 = 1;
          return 37;
        case 3LL:
          *a2 = 1;
          return 41;
        case 4LL:
          return 23;
        case 5LL:
          return 24;
        case 6LL:
          return 22;
        case 8LL:
          *a2 = 1;
          *a3 = 1;
          return 33;
        case 9LL:
          *a2 = 1;
          *a3 = 1;
          return 32;
        case 10LL:
          *a2 = 1;
          *a3 = 1;
          return 34;
        case 11LL:
          *a2 = 1;
          *a3 = 1;
          return 37;
        default:
          goto LABEL_72;
      }
    }
    if ( (_WORD)v4 == 45 )
      return 13;
    if ( (unsigned __int16)v4 > 0x2Du )
    {
      if ( (_WORD)v4 == 94 )
      {
        return 21;
      }
      else
      {
        if ( (_WORD)v4 != 124 )
          goto LABEL_72;
        return 19;
      }
    }
    else
    {
      switch ( (_WORD)v4 )
      {
        case '*':
          return 14;
        case '+':
          return 12;
        case '&':
          return 20;
        default:
LABEL_72:
          exception = __cxa_allocate_exception(4u);
          *exception = 47;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
      }
    }
  }
  if ( (_WORD)v4 == 28735 )
  {
    *a2 = 1;
    return 31;
  }
  if ( (unsigned __int16)v4 <= 0x703Fu )
  {
    if ( (unsigned __int16)v4 > 0x663Eu )
      goto LABEL_72;
    if ( (unsigned __int16)v4 > 0x6629u )
    {
      LOWORD(v4) = v4 - 26154;
      switch ( v4 )
      {
        case 0LL:
          *a3 = 1;
          return 71;
        case 1LL:
          *a3 = 1;
          return 69;
        case 3LL:
          *a3 = 1;
          return 70;
        case 5LL:
          *a3 = 1;
          return 72;
        case 18LL:
          *a2 = 1;
          *a3 = 1;
          return 35;
        case 20LL:
          *a2 = 1;
          *a3 = 1;
          return 36;
        default:
          goto LABEL_72;
      }
    }
    if ( (_WORD)v4 == 15677 )
    {
      *a2 = 1;
      return 33;
    }
    if ( (_WORD)v4 != 15932 )
      goto LABEL_72;
    *a2 = 1;
    *a3 = 1;
    return 31;
  }
  if ( (_WORD)v4 == 29989 )
    return 17;
  if ( (unsigned __int16)v4 > 0x7525u )
  {
    switch ( (_WORD)v4 )
    {
      case 0x753C:
        *a2 = 1;
        return 35;
      case 0x753E:
        *a2 = 1;
        return 36;
      case 0x752F:
        return 15;
      default:
        goto LABEL_72;
    }
  }
  else if ( (_WORD)v4 == 29500 )
  {
    *a2 = 1;
    return 40;
  }
  else if ( (unsigned __int16)v4 > 0x733Cu )
  {
    if ( (_WORD)v4 != 29502 )
      goto LABEL_72;
    *a2 = 1;
    return 38;
  }
  else
  {
    if ( (_WORD)v4 != 29477 )
    {
      if ( (_WORD)v4 == 29487 )
        return 16;
      goto LABEL_72;
    }
    return 18;
  }
}

