const char *__fastcall sub_7780(__int64 a1)
{
  const char *result; // rax
  __int64 v2; // rdx

  result = "ia64l";
  if ( (_WORD)a1 != 512 )
  {
    if ( (unsigned __int16)a1 > 0x200u )
    {
      result = "ebc";
      if ( (_WORD)a1 != 3772 )
      {
        if ( (unsigned __int16)a1 <= 0xEBCu )
        {
          result = "mipsl";
          if ( (_WORD)a1 != 1126 )
          {
            if ( (unsigned __int16)a1 > 0x466u )
            {
              result = "tricore";
              if ( (_WORD)a1 != 1312 )
              {
                result = "arm";
                if ( (_WORD)a1 != 2560 )
                  return nullptr;
              }
            }
            else
            {
              result = "68k";
              if ( (_WORD)a1 != 616 )
              {
                result = "mipsl";
                if ( (a1 & 0xFEFF) != 0x266 )
                  return nullptr;
              }
            }
          }
        }
        else
        {
          result = "metapc";
          if ( (_WORD)a1 != 0x8664 )
          {
            if ( (unsigned __int16)a1 <= 0x8664u )
            {
              result = "riscv";
              if ( (_WORD)a1 != 20580 && (_WORD)a1 != 20776 && (_WORD)a1 != 20530 )
                return nullptr;
            }
            else
            {
              result = "m32r";
              if ( (_WORD)a1 != 0x9041 )
              {
                result = "arm";
                if ( (_WORD)a1 != 0xAA64 )
                  return nullptr;
              }
            }
          }
        }
      }
    }
    else if ( (unsigned __int16)a1 > 0x1C4u )
    {
      if ( (unsigned __int16)a1 > 0x1F1u )
      {
        result = "ppc:vmx128";
        if ( (_WORD)a1 != 498 )
          return nullptr;
      }
      else
      {
        result = "ppcl";
        if ( (unsigned __int16)a1 < 0x1F0u )
          return nullptr;
      }
    }
    else if ( (unsigned __int16)a1 <= 0x1A1u )
    {
      LOWORD(a1) = a1 - 332;
      switch ( a1 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
          result = "metapc";
          break;
        case 22LL:
        case 23LL:
        case 26LL:
        case 28LL:
        case 29LL:
          result = "mipsl";
          break;
        case 56LL:
          result = "alphal";
          break;
        default:
          result = nullptr;
          break;
      }
    }
    else
    {
      result = "arm";
      v2 = 1LL << ((unsigned __int8)a1 + 94);
      if ( (v2 & 0x540000000LL) == 0 )
      {
        result = "sh3";
        if ( (v2 & 7) == 0 )
        {
          result = "sh4";
          if ( (v2 & 0x50) == 0 )
            return (const char *)((1LL << ((unsigned __int8)a1 + 94)) & 7);
        }
      }
    }
  }
  return result;
}

