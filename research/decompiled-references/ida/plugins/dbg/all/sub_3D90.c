char *__fastcall sub_3D90(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "None";
      break;
    case 1:
      result = "al";
      break;
    case 2:
      result = "cl";
      break;
    case 3:
      result = "dl";
      break;
    case 4:
      result = "bl";
      break;
    case 5:
      result = "ah";
      break;
    case 6:
      result = "ch";
      break;
    case 7:
      result = "dh";
      break;
    case 8:
      result = "bh";
      break;
    case 9:
      result = "ax";
      break;
    case 10:
      result = "cx";
      break;
    case 11:
      result = "dx";
      break;
    case 12:
      result = "bx";
      break;
    case 13:
      result = "sp";
      break;
    case 14:
      result = "bp";
      break;
    case 15:
      result = "si";
      break;
    case 16:
      result = "di";
      break;
    case 17:
      result = "eax";
      break;
    case 18:
      result = "ecx";
      break;
    case 19:
      result = "edx";
      break;
    case 20:
      result = "ebx";
      break;
    case 21:
      result = "esp";
      break;
    case 22:
      result = "ebp";
      break;
    case 23:
      result = "esi";
      break;
    case 24:
      result = "edi";
      break;
    case 25:
      result = "es";
      break;
    case 26:
      result = "cs";
      break;
    case 27:
      result = "ss";
      break;
    case 28:
      result = "ds";
      break;
    case 29:
      result = "fs";
      break;
    case 30:
      result = "gs";
      break;
    case 31:
      result = "ip";
      break;
    case 32:
      result = "FLAGS";
      break;
    case 33:
      result = "EIP";
      break;
    case 34:
      result = "EFLAGS";
      break;
    case 40:
      result = "TEMP (Pcode)";
      break;
    case 41:
      result = "TEMPH (Pcode)";
      break;
    case 42:
      result = "QUOTE (Pcode)";
      break;
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
      result = "Reserved (Pcode)";
      break;
    case 80:
      result = "cr0";
      break;
    case 81:
      result = "cr1";
      break;
    case 82:
      result = "cr2";
      break;
    case 83:
      result = "cr3";
      break;
    case 90:
      result = "dr0";
      break;
    case 91:
      result = "dr1";
      break;
    case 92:
      result = "dr2";
      break;
    case 93:
      result = "dr3";
      break;
    case 94:
      result = "dr4";
      break;
    case 95:
      result = "dr5";
      break;
    case 96:
      result = "dr6";
      break;
    case 97:
      result = "dr7";
      break;
    case -128:
      result = "st(0)";
      break;
    case -127:
      result = "st(1)";
      break;
    case -126:
      result = "st(2)";
      break;
    case -125:
      result = "st(3)";
      break;
    case -124:
      result = "st(4)";
      break;
    case -123:
      result = "st(5)";
      break;
    case -122:
      result = "st(6)";
      break;
    case -121:
      result = "st(7)";
      break;
    case -120:
      result = "CONTROL (floating point)";
      break;
    case -119:
      result = "STATUS (floating point)";
      break;
    case -118:
      result = "TAG (floating point)";
      break;
    case -117:
      result = "FPIP";
      break;
    case -116:
      result = "FPCS";
      break;
    case -115:
      result = "FPDO";
      break;
    case -114:
      result = "FPDS";
      break;
    case -113:
      result = "ISEM";
      break;
    case -112:
      result = "FPEIP";
      break;
    case -111:
      result = "FPEDO";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}

