const char *__fastcall sub_3A5C0(__int64 a1)
{
  const char *result; // rax

  switch ( *(_BYTE *)(a1 + 511) )
  {
    case 0:
      result = "UNIX System V ABI";
      break;
    case 1:
      result = "HP-UX operating system";
      break;
    case 2:
      result = "NetBSD";
      break;
    case 3:
      result = "GNU/Linux";
      break;
    case 4:
      result = "GNU/Hurd";
      break;
    case 5:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
      goto LABEL_3;
    case 6:
      result = "Solaris";
      break;
    case 7:
      result = "AIX";
      break;
    case 8:
      result = "IRIX";
      break;
    case 9:
      result = "FreeBSD";
      break;
    case 0xA:
      result = "TRU64 UNIX";
      break;
    case 0xB:
      result = "Novell Modesto";
      break;
    case 0xC:
      result = "OpenBSD";
      break;
    case 0xD:
      result = "OpenVMS";
      break;
    case 0xE:
      result = "Hewlett-Packard Non-Stop Kernel";
      break;
    case 0xF:
      result = "Amiga Research OS";
      break;
    case 0x61:
      result = "ARM";
      break;
    case 0x66:
      result = "PS3 Cell OS lv2";
      if ( *(_WORD *)(a1 + 522) != 21 )
LABEL_3:
        result = "Unknown";
      break;
    default:
      result = "Unknown";
      if ( *(_BYTE *)(a1 + 511) == 0xFF )
        result = "Standalone (embedded) application";
      break;
  }
  return result;
}
