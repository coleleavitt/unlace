char *__fastcall sub_7DA0(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "unc";
      break;
    case 2:
      result = "nbio";
      break;
    case 3:
      result = "bio";
      break;
    case 8:
      result = "nc";
      break;
    case 12:
      result = "c";
      break;
    case 32:
      result = "ntc";
      break;
    case 48:
      result = "tc";
      break;
    case 66:
      result = "ageq";
      break;
    case 67:
      result = "alt";
      break;
    case 68:
      result = "aneq";
      break;
    case 69:
      result = "aeq";
      break;
    case 70:
      result = "agt";
      break;
    case 71:
      result = "aleq";
      break;
    case 74:
      result = "bgeq";
      break;
    case 75:
      result = "blt";
      break;
    case 76:
      result = "bneq";
      break;
    case 77:
      result = "beq";
      break;
    case 78:
      result = "bgt";
      break;
    case 79:
      result = "bleq";
      break;
    case 96:
      result = "anov";
      break;
    case 104:
      result = "bnov";
      break;
    case 112:
      result = "aov";
      break;
    case 120:
      result = "bov";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

