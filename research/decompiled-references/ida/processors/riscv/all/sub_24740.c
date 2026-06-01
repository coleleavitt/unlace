__int64 __fastcall sub_24740(__int16 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  char v4; // cl

  if ( (unsigned __int16)a1 > 0x1D7u )
  {
    v4 = a1 - 16;
    if ( (unsigned __int16)(a1 - 528) > 6u )
      goto LABEL_16;
    v2 = 1;
    if ( ((1LL << v4) & 0x55) != 0 )
      return v2;
    if ( ((1LL << v4) & 0x2A) == 0 )
      goto LABEL_16;
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x1BAu )
    {
      v1 = 1LL << ((unsigned __int8)a1 + 69);
      if ( (v1 & 0x15403333) == 0 )
      {
        v2 = 0;
        if ( (v1 & 0xA800CCC) != 0 )
          return v2;
        goto LABEL_16;
      }
      return 1;
    }
    if ( a1 != 48 )
    {
      if ( (unsigned __int16)a1 > 0x30u )
      {
        if ( a1 == 49 )
          return 1;
        do
        {
LABEL_16:
          if ( under_debugger )
            BUG();
          a1 = 10476;
          interr(10476);
LABEL_18:
          ;
        }
        while ( (unsigned __int16)a1 <= 0xAu );
        return 1;
      }
      if ( (unsigned __int16)a1 <= 0xDu )
        goto LABEL_18;
      if ( (unsigned __int16)(a1 - 14) > 1u )
        goto LABEL_16;
    }
  }
  return 0;
}

