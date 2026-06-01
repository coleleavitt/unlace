char *__fastcall sub_AFB0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char *result; // rax

  v2 = a2;
  if ( (unsigned __int16)(a2 - 480) > 0xFu )
  {
    if ( (unsigned __int16)(a2 - 224) > 0xFu )
    {
      if ( (unsigned __int16)(a2 - 240) > 0xFu )
        return nullptr;
      switch ( get_sreg() )
      {
        case 0LL:
          LOWORD(v2) = a2 - 241;
          switch ( v2 )
          {
            case 0LL:
              result = "Minor Register";
              break;
            case 1LL:
              result = "External Interrupt Trigger Register";
              break;
            case 2LL:
              result = "External Interrupt Pending Register";
              break;
            case 3LL:
              result = "External Interrupt Mask-bit Register";
              break;
            case 4LL:
              result = "External Interrupt Priority Level Register";
              break;
            case 5LL:
              result = "External Interrupt Vector Register";
              break;
            case 6LL:
              result = "Nested Interrupt Control";
              break;
            case 7LL:
              result = "Watchdog Timer High Register";
              break;
            case 8LL:
              result = "Watchdog Timer Low Register";
              break;
            case 9LL:
              result = "Watchdog Timer Prescaler Register";
              break;
            case 10LL:
              result = "Watchdog Timer Control Register";
              break;
            case 11LL:
              result = "Wait Control Register";
              break;
            case 12LL:
              result = "SPI Data Register";
              break;
            case 13LL:
              result = "SPI Control Register";
              break;
            default:
              return nullptr;
          }
          return result;
        case 2LL:
          LOWORD(v2) = a2 - 240;
          switch ( v2 )
          {
            case 0LL:
              result = "Port 0 Configuration Register 0";
              break;
            case 1LL:
              result = "Port 0 Configuration Register 1";
              break;
            case 2LL:
              result = "Port 0 Configuration Register 2";
              break;
            case 4LL:
              result = "Port 1 Configuration Register 0";
              break;
            case 5LL:
              result = "Port 1 Configuration Register 1";
              break;
            case 6LL:
              result = "Port 1 Configuration Register 2";
              break;
            case 8LL:
              result = "Port 2 Configuration Register 0";
              break;
            case 9LL:
              result = "Port 2 Configuration Register 1";
              break;
            case 10LL:
              result = "Port 2 Configuration Register 2";
              break;
            default:
              return nullptr;
          }
          return result;
        case 3LL:
          LOWORD(v2) = a2 - 240;
          switch ( v2 )
          {
            case 0LL:
              result = "Port 4 Configuration Register 0";
              break;
            case 1LL:
              result = "Port 4 Configuration Register 1";
              break;
            case 2LL:
              result = "Port 4 Configuration Register 2";
              break;
            case 4LL:
              result = "Port 5 Configuration Register 0";
              break;
            case 5LL:
              result = "Port 5 Configuration Register 1";
              break;
            case 6LL:
              result = "Port 5 Configuration Register 2";
              break;
            case 8LL:
              result = "Port 6 Configuration Register 0";
              break;
            case 9LL:
              result = "Port 6 Configuration Register 1";
              break;
            case 10LL:
              result = "Port 6 Configuration Register 2";
              break;
            case 11LL:
              result = "Port 6 Data Register";
              break;
            case 12LL:
              result = "Port 7 Configuration Register 0";
              break;
            case 13LL:
              result = "Port 7 Configuration Register 1";
              break;
            case 14LL:
              result = "Port 7 Configuration Register 2";
              break;
            case 15LL:
              result = "Port 7 Data Register";
              break;
            default:
              return nullptr;
          }
          return result;
        case 8LL:
        case 10LL:
        case 12LL:
          LOWORD(v2) = a2 - 241;
          switch ( v2 )
          {
            case 0LL:
              result = "Capture Load Register 0 Low";
              break;
            case 1LL:
              result = "Capture Load Register 1 High";
              break;
            case 2LL:
              result = "Capture Load Register 1 Low";
              break;
            case 3LL:
              result = "Compare 0 Register High";
              break;
            case 4LL:
              result = "Compare 0 Register Low";
              break;
            case 5LL:
              result = "Compare 1 Register High";
              break;
            case 6LL:
              result = "Compare 1 Register Low";
              break;
            case 7LL:
              result = "Timer Control Register";
              break;
            case 8LL:
              result = "Timer Mode Register";
              break;
            case 9LL:
              result = "External Input Control Register";
              break;
            case 10LL:
              result = "Prescaler Register";
              break;
            case 11LL:
              result = "Output A Control Register";
              break;
            case 12LL:
              result = "Output B Control Register";
              break;
            case 13LL:
              result = "Flags Register";
              break;
            case 14LL:
              result = "Interrupt/DMA Mask Register";
              break;
            default:
              result = "Capture Load Register 0 High";
              break;
          }
          return result;
        case 9LL:
          LOWORD(v2) = a2 - 240;
          switch ( v2 )
          {
            case 0LL:
            case 4LL:
              result = "DMA Counter Pointer Register";
              break;
            case 1LL:
            case 5LL:
              result = "DMA Address Pointer Register";
              break;
            case 2LL:
            case 6LL:
              result = "Interrupt Vector Register";
              break;
            case 3LL:
            case 7LL:
              result = "Interrupt/DMA Control Register";
              break;
            case 8LL:
              result = "I/O Connection Register";
              break;
            default:
              return nullptr;
          }
          return result;
        case 11LL:
          result = "Standard Timer Prescaler Register";
          if ( (_WORD)a2 == 242 )
            return result;
          if ( (unsigned __int16)a2 > 0xF2u )
          {
            result = "Standard Timer Control Register";
            if ( (_WORD)a2 != 243 )
              return nullptr;
          }
          else
          {
            result = "Counter High Byte Register";
            if ( (_WORD)a2 != 240 )
              return "Counter Low Byte Register";
          }
          return result;
        case 13LL:
          result = "Interrupt Vector Register";
          if ( (_WORD)a2 == 246 )
            return result;
          if ( (unsigned __int16)a2 > 0xF6u )
          {
            result = "Interrupt/DMA Control Register";
            if ( (_WORD)a2 != 247 )
              return nullptr;
          }
          else
          {
            result = "DMA Counter Pointer Register";
            if ( (_WORD)a2 != 244 )
            {
              result = "DMA Address Pointer Register";
              if ( (_WORD)a2 != 245 )
                return nullptr;
            }
          }
          break;
        case 21LL:
          LOWORD(v2) = a2 - 240;
          switch ( v2 )
          {
            case 0LL:
              result = "Data Page Register 0";
              break;
            case 1LL:
              result = "Data Page Register 1";
              break;
            case 2LL:
              result = "Data Page Register 2";
              break;
            case 3LL:
              result = "Data Page Register 3";
              break;
            case 4LL:
              result = "Code Segment Register";
              break;
            case 5LL:
              result = "External Memory Register 1";
              break;
            case 6LL:
              result = "External Memory Register 2";
              break;
            case 8LL:
              result = "Interrupt Segment Register";
              break;
            case 9LL:
              result = "DMA Segment Register";
              break;
            default:
              return nullptr;
          }
          return result;
        case 24LL:
        case 25LL:
          LOWORD(v2) = a2 - 241;
          switch ( v2 )
          {
            case 0LL:
              result = "Receiver DMA Source Address Pointer";
              break;
            case 1LL:
              result = "Transmitter DMA Transaction Counter Pointer";
              break;
            case 2LL:
              result = "Transmitter DMA Source Address Pointer";
              break;
            case 3LL:
              result = "Interrupt Vector Register";
              break;
            case 4LL:
              result = "Address/Data Compare Register";
              break;
            case 5LL:
              result = "Interrupt Mask Register";
              break;
            case 6LL:
              result = "Interrupt Status Register";
              break;
            case 7LL:
              result = "Receive/Transmitter Buffer Register";
              break;
            case 8LL:
              result = "Interrupt/DMA Priority Register";
              break;
            case 9LL:
              result = "Character Configuration Register";
              break;
            case 10LL:
              result = "Clock Configuration Register";
              break;
            case 11LL:
              result = "Baud Rate Generator High Register";
              break;
            case 12LL:
              result = "Baud Rate Generator Low Register";
              break;
            case 13LL:
              result = "Synchronous Input Control";
              break;
            case 14LL:
              result = "Synchronous Output Control";
              break;
            default:
              result = "Receiver DMA Transaction Counter Pointer";
              break;
          }
          return result;
        case 43LL:
          LOWORD(v2) = a2 - 248;
          switch ( v2 )
          {
            case 0LL:
              result = "Port 8 Configuration Register 0";
              break;
            case 1LL:
              result = "Port 8 Configuration Register 1";
              break;
            case 2LL:
              result = "Port 8 Configuration Register 2";
              break;
            case 3LL:
              result = "Port 8 Data Register";
              break;
            case 4LL:
              result = "Port 9 Configuration Register 0";
              break;
            case 5LL:
              result = "Port 9 Configuration Register 1";
              break;
            case 6LL:
              result = "Port 9 Configuration Register 2";
              break;
            case 7LL:
              result = "Port 9 Data Register";
              break;
            default:
              return nullptr;
          }
          return result;
        case 55LL:
          result = "Clock Flag Register";
          if ( (_WORD)a2 != 242 )
          {
            result = "PLL Configuration Register";
            if ( (_WORD)a2 != 246 )
            {
              result = "Clock Control Register";
              if ( (_WORD)a2 != 240 )
                return nullptr;
            }
          }
          return result;
        case 63LL:
          LOWORD(v2) = a2 - 241;
          switch ( v2 )
          {
            case 0LL:
              result = "Channel 1 Data Register";
              break;
            case 1LL:
              result = "Channel 2 Data Register";
              break;
            case 2LL:
              result = "Channel 3 Data Register";
              break;
            case 3LL:
              result = "Channel 4 Data Register";
              break;
            case 4LL:
              result = "Channel 5 Data Register";
              break;
            case 5LL:
              result = "Channel 6 Data Register";
              break;
            case 6LL:
              result = "Channel 7 Data Register";
              break;
            case 7LL:
            case 8LL:
              result = "Channel 6 Lower Threshold Register";
              break;
            case 9LL:
            case 10LL:
              result = "Channel 7 Upper Threshold Register";
              break;
            case 11LL:
              result = "Compare Result Register";
              break;
            case 12LL:
              result = "Control Logic Register";
              break;
            case 13LL:
              result = "Interrupt Control Register";
              break;
            case 14LL:
              result = "Interrupt Vector Register";
              break;
            default:
              result = "Channel 0 Data Register";
              break;
          }
          return result;
        default:
          return nullptr;
      }
    }
    else
    {
      LOWORD(v2) = a2 - 225;
      switch ( v2 )
      {
        case 0LL:
          result = "Port 1 Data Register (EMR2.5 == 0) or Data Page Register 1 (EMR2.5 == 1)";
          break;
        case 1LL:
          result = "Port 2 Data Register (EMR2.5 == 0) or Data Page Register 2 (EMR2.5 == 1)";
          break;
        case 2LL:
          result = "Port 3 Data Register (EMR2.5 == 0) or Data Page Register 3 (EMR2.5 == 1)";
          break;
        case 3LL:
          result = "Port 4 Data Register";
          break;
        case 4LL:
          result = "Port 5 Data Register";
          break;
        case 5LL:
          result = "Central Interrupt Control Register";
          break;
        case 6LL:
          result = "Flag Register";
          break;
        case 7LL:
          result = "Pointer 0 Register";
          break;
        case 8LL:
          result = "Pointer 1 Register";
          break;
        case 9LL:
          result = "Page Pointer Register";
          break;
        case 10LL:
          result = "Mode Register";
          break;
        case 11LL:
          result = "User Stack Pointer High Register";
          break;
        case 12LL:
          result = "User Stack Pointer Low Register";
          break;
        case 13LL:
          result = "System Stack Pointer High Register";
          break;
        case 14LL:
          result = "System Stack Pointer Low Register";
          break;
        default:
          result = "Port 0 Data Register (EMR2.5 == 0) or Data Page Register 0 (EMR2.5 == 1)";
          break;
      }
    }
  }
  else
  {
    result = "User Stack Pointer";
    if ( (_WORD)a2 != 492 )
    {
      result = "System Stack Pointer";
      if ( (_WORD)a2 != 494 )
        return nullptr;
    }
  }
  return result;
}

