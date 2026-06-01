const char *__fastcall sub_EB20(__int64 a1)
{
  const char *result; // rax

  if ( (unsigned __int16)a1 > 0x200u )
  {
    result = "RISC-V 32-bit";
    if ( (_WORD)a1 != 20530 )
    {
      if ( (unsigned __int16)a1 > 0x5032u )
      {
        result = "AMD64";
        if ( (_WORD)a1 != 0x8664 )
        {
          if ( (unsigned __int16)a1 > 0x8664u )
          {
            result = "ARM64";
            if ( (_WORD)a1 != 0xAA64 )
            {
              result = "CEE";
              if ( (_WORD)a1 != 0xC0EE )
              {
                result = "M32R";
                if ( (_WORD)a1 != 0x9041 )
                  return nullptr;
              }
            }
          }
          else
          {
            result = "LoongArch 32-bit";
            if ( (_WORD)a1 != 25138 )
            {
              if ( (unsigned __int16)a1 > 0x6232u )
              {
                result = "LoongArch 64-bit";
                if ( (_WORD)a1 != 25188 )
                  return nullptr;
              }
              else
              {
                result = "RISC-V 64-bit";
                if ( (_WORD)a1 != 20580 )
                {
                  result = "RISC-V 128-bit";
                  if ( (_WORD)a1 != 20776 )
                    return nullptr;
                }
              }
            }
          }
        }
      }
      else
      {
        result = "MIPS16 FPU";
        if ( (_WORD)a1 != 1126 )
        {
          if ( (unsigned __int16)a1 <= 0x466u )
          {
            result = "ALPHA 64";
            if ( (_WORD)a1 != 644 )
            {
              if ( (unsigned __int16)a1 > 0x284u )
              {
                result = "MIPS FPU";
                if ( (_WORD)a1 != 870 )
                  return nullptr;
              }
              else
              {
                result = "MIPS16";
                if ( (_WORD)a1 != 614 )
                {
                  result = "M68K";
                  if ( (_WORD)a1 != 616 )
                    return nullptr;
                }
              }
            }
          }
          else
          {
            result = "CEF";
            if ( (_WORD)a1 != 3311 )
            {
              if ( (unsigned __int16)a1 > 0xCEFu )
              {
                result = "EFI Bytecode";
                if ( (_WORD)a1 != 3772 )
                  return nullptr;
              }
              else
              {
                result = "TRICORE";
                if ( (_WORD)a1 != 1312 )
                {
                  result = "ARM EPOC";
                  if ( (_WORD)a1 != 2560 )
                    return nullptr;
                }
              }
            }
          }
        }
      }
    }
  }
  else if ( (unsigned __int16)a1 <= 0x1A1u )
  {
    LOWORD(a1) = a1 - 332;
    switch ( a1 )
    {
      case 0LL:
        result = "80386";
        break;
      case 1LL:
        result = "80486";
        break;
      case 2LL:
        result = "80586";
        break;
      case 22LL:
        result = "MIPS R3000";
        break;
      case 23LL:
        result = "MIPS R6000";
        break;
      case 26LL:
        result = "MIPS R4000";
        break;
      case 28LL:
        result = "MIPS R10000";
        break;
      case 29LL:
        result = "MIPS WCEv2";
        break;
      case 56LL:
        result = "ALPHA";
        break;
      default:
LABEL_5:
        result = nullptr;
        break;
    }
  }
  else
  {
    LOWORD(a1) = a1 - 418;
    switch ( a1 )
    {
      case 0LL:
        result = "SH3";
        break;
      case 1LL:
        result = "SH3DSP";
        break;
      case 2LL:
        result = "SH3E";
        break;
      case 4LL:
        result = "SH4";
        break;
      case 6LL:
        result = "SH5";
        break;
      case 30LL:
        result = "ARM";
        break;
      case 32LL:
        result = "ARMI";
        break;
      case 34LL:
        result = "ARMv7";
        break;
      case 49LL:
        result = "AM33";
        break;
      case 78LL:
        result = "PPC";
        break;
      case 79LL:
        result = "PPC FP";
        break;
      case 80LL:
        result = "PPC BE";
        break;
      case 94LL:
        result = "IA64";
        break;
      default:
        goto LABEL_5;
    }
  }
  return result;
}

