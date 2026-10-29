__int64 __fastcall sub_35ED0(unsigned int a1, __int64 a2, __int64 a3)
{
  switch ( a2 )
  {
    case 0LL:
      if ( (_BYTE)a3 )
      {
        LODWORD(a3) = 0;
        if ( (unsigned __int16)a1 <= 0x14u )
        {
          a3 = (__int64)&unk_110001;
          LOBYTE(a3) = _bittest64(&a3, a1);
        }
        return (unsigned int)a3;
      }
      if ( (unsigned __int16)a1 <= 0x17u )
      {
        a3 = 8912904;
        LOBYTE(a3) = _bittest64(&a3, a1);
        if ( (_BYTE)a3 )
          return (unsigned int)a3;
      }
      goto LABEL_15;
    case 1LL:
      if ( (_BYTE)a3 )
      {
        LODWORD(a3) = 0;
        if ( (unsigned __int16)a1 <= 0x15u )
        {
          a3 = 2228226;
          LOBYTE(a3) = _bittest64(&a3, a1);
        }
      }
      else if ( (unsigned __int16)a1 > 0x17u || (a3 = 8912904, LOBYTE(a3) = _bittest64(&a3, a1), !(_BYTE)a3) )
      {
LABEL_23:
        LOBYTE(a3) = (_WORD)a1 == 7;
        return (unsigned int)a3;
      }
      return (unsigned int)a3;
    case 2LL:
      if ( !(_BYTE)a3 )
        goto LABEL_24;
      LODWORD(a3) = 0;
      if ( (unsigned __int16)a1 <= 0x16u )
      {
        a3 = 4456452;
        LOBYTE(a3) = _bittest64(&a3, a1);
      }
      return (unsigned int)a3;
    case 3LL:
      if ( !(_BYTE)a3 )
      {
LABEL_24:
        LOBYTE(a3) = (a1 & 0xFFFD) == 5;
        return (unsigned int)a3;
      }
      LODWORD(a3) = 0;
      if ( (unsigned __int16)a1 <= 0x17u )
      {
LABEL_7:
        a3 = 8912904;
        LOBYTE(a3) = _bittest64(&a3, a1);
      }
      return (unsigned int)a3;
    case 4LL:
      if ( !(_BYTE)a3 )
        goto LABEL_15;
      LOBYTE(a3) = (_WORD)a1 == 4;
      return (unsigned int)a3;
    case 5LL:
      if ( !(_BYTE)a3 )
        goto LABEL_23;
      goto LABEL_3;
    case 6LL:
      if ( (_BYTE)a3 )
      {
LABEL_15:
        LOBYTE(a3) = (_WORD)a1 == 6;
        return (unsigned int)a3;
      }
      else
      {
LABEL_3:
        LOBYTE(a3) = (_WORD)a1 == 5;
        return (unsigned int)a3;
      }
    case 7LL:
      if ( (_BYTE)a3 )
        goto LABEL_23;
      if ( (unsigned __int16)a1 <= 0x17u )
        goto LABEL_7;
      return (unsigned int)a3;
    default:
      LODWORD(a3) = 0;
      return (unsigned int)a3;
  }
}

