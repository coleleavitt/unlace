char *__fastcall sub_69730(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "none";
      break;
    case 1LL:
      result = "block";
      break;
    case 2LL:
      result = "if-then";
      break;
    case 3LL:
      result = "if-not-then";
      break;
    case 4LL:
      result = "if-then-else";
      break;
    case 5LL:
      result = "switch";
      break;
    case 6LL:
      result = "proper00";
      break;
    case 7LL:
      result = "proper01";
      break;
    case 8LL:
      result = "proper10";
      break;
    case 9LL:
      result = "proper11";
      break;
    case 10LL:
      result = "loop-forever";
      break;
    case 11LL:
      result = "do-while-true";
      break;
    case 12LL:
      result = "do-while-false";
      break;
    case 13LL:
      result = "while-true";
      break;
    case 14LL:
      result = "while-false";
      break;
    case 15LL:
      result = "goto";
      break;
    case 16LL:
      result = "gototrue";
      break;
    case 17LL:
      result = "gotofalse";
      break;
    default:
      result = "??illegal??";
      break;
  }
  return result;
}

