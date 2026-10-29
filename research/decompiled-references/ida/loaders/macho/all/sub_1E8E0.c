size_t __fastcall sub_1E8E0(int a1, unsigned int a2, __int64 a3, const char *a4)
{
  char v6; // al

  *a4 = 0;
  if ( a2 > 0xF )
    return (int)qsnprintf();
  if ( a1 <= 18 )
  {
    if ( a1 > 5 )
    {
      switch ( a1 )
      {
        case 6:
        case 7:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
          goto LABEL_12;
        case 18:
          goto LABEL_16;
        default:
          return (int)qsnprintf();
      }
    }
    return (int)qsnprintf();
  }
  if ( a1 == 16777228 )
    goto LABEL_12;
  if ( a1 > 16777228 )
  {
    if ( a1 != 16777234 )
    {
      if ( a1 == 33554444 )
        goto LABEL_12;
      return (int)qsnprintf();
    }
  }
  else if ( a1 != 255 )
  {
    if ( a1 == 16777223 )
    {
LABEL_12:
      qstrncpy();
LABEL_13:
      v6 = *a4;
      goto LABEL_14;
    }
    return (int)qsnprintf();
  }
LABEL_16:
  qstrncpy();
  if ( a2 != 2 )
    goto LABEL_13;
  qstrncat();
  v6 = *a4;
LABEL_14:
  if ( !v6 )
    return (int)qsnprintf();
  return strlen(a4);
}

