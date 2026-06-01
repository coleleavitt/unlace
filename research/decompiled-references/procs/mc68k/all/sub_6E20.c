__int64 __fastcall sub_6E20(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 188);
  if ( v2 > 0xA )
    return 0;
  v3 = 1LL << v2;
  if ( ((1LL << v2) & 0x1CC) != 0 )
  {
    result = 102;
    if ( (_WORD)a2 == 2051 )
      return result;
    if ( (unsigned __int16)a2 > 0x803u )
      goto LABEL_27;
    result = 100;
    if ( (_WORD)a2 == 2 )
      return result;
    goto LABEL_17;
  }
  if ( (v3 & 0x610) != 0 )
  {
    if ( (unsigned __int16)a2 <= 7u )
    {
      if ( (unsigned __int16)a2 > 2u )
      {
        switch ( a2 )
        {
          case 4:
            result = 105;
            break;
          case 5:
            result = 106;
            break;
          case 6:
            result = 107;
            break;
          case 7:
            result = 108;
            break;
          default:
            result = 104;
            break;
        }
        return result;
      }
      result = 100;
      if ( (_WORD)a2 == 2 )
        return result;
LABEL_37:
      result = 98;
      if ( (_WORD)a2 == 2048 )
        return result;
      result = 99;
      if ( (_WORD)a2 == 2049 )
        return result;
      goto LABEL_7;
    }
    result = 110;
    if ( (_WORD)a2 == 2054 )
      return result;
    result = 111;
    if ( (_WORD)a2 == 2055 )
      return result;
    result = 109;
    if ( (_WORD)a2 == 2053 )
      return result;
    if ( (_WORD)a2 == 2050 )
    {
      result = 0;
      if ( v2 == 4 )
        return result;
    }
    result = 102;
    if ( (_WORD)a2 == 2051 )
      return result;
    if ( (unsigned __int16)a2 > 0x803u )
    {
LABEL_27:
      result = 0;
      if ( (_WORD)a2 == 2052 )
        return 103;
      return result;
    }
LABEL_17:
    result = 101;
    if ( (_WORD)a2 == 2050 )
      return result;
    goto LABEL_37;
  }
  if ( (v3 & 0x22) == 0 )
    return 0;
  result = 98;
  if ( (_WORD)a2 == 2048 )
    return result;
  if ( (unsigned __int16)a2 <= 0x800u )
  {
LABEL_7:
    result = 96;
    if ( (_WORD)a2 )
    {
      result = 0;
      if ( (_WORD)a2 == 1 )
        return 97;
    }
    return result;
  }
  result = 0;
  if ( (_WORD)a2 == 2049 )
    return 99;
  return result;
}
