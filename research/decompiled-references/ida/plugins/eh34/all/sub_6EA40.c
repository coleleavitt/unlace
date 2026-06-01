const char *__fastcall sub_6EA40(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "No error";
      break;
    case 1LL:
      result = "No unwind codes found";
      break;
    case 2LL:
      result = "Failed to disassemble instruction";
      break;
    case 3LL:
      result = "Mismatched instruction for PUSH_NONVOL";
      break;
    case 4LL:
      result = "Mismatched register for PUSH_NONVOL";
      break;
    case 5LL:
      result = "Mismatched register for ALLOC_SMALL/ALLOC_LARGE (ADD)";
      break;
    case 6LL:
      result = "Mismatched size for ALLOC_SMALL/ALLOC_LARGE (ADD)";
      break;
    case 7LL:
      result = "Mismatched register for ALLOC_SMALL/ALLOC_LARGE (MOV)";
      break;
    case 8LL:
      result = "Mismatched right-hand side for ALLOC_SMALL/ALLOC_LARGE (MOV)";
      break;
    case 9LL:
      result = "Mismatched register for ALLOC_SMALL/ALLOC_LARGE (LEA)";
      break;
    case 10LL:
      result = "Mismatched right-hand side for ALLOC_SMALL/ALLOC_LARGE (LEA)";
      break;
    case 11LL:
      result = "Mismatched instruction for ALLOC_SMALL/ALLOC_LARGE";
      break;
    case 12LL:
      result = "Bad instruction for SAVE_NONVOL";
      break;
    case 13LL:
      result = "Bad left-hand side register for SAVE_NONVOL";
      break;
    case 14LL:
      result = "Bad right-hand side register for SAVE_NONVOL";
      break;
    case 15LL:
      result = "Bad right-hand side displacement for SAVE_NONVOL";
      break;
    case 16LL:
      result = "Inconsistent displacement for SAVE_NONVOL";
      break;
    case 17LL:
      result = "Bad instruction for FRAME_REG";
      break;
    case 18LL:
      result = "Bad left-hand side register for FRAME_REG";
      break;
    case 19LL:
      result = "Bad right-hand side register for FRAME_REG";
      break;
    case 20LL:
      result = "Bad right-hand side displacement for FRAME_REG";
      break;
    case 21LL:
      result = "Bad left-hand side register for SAVE_XMM128";
      break;
    case 22LL:
      result = "Unrestored general-purpose register";
      break;
    case 23LL:
      result = "Unrestored XMM register";
      break;
    case 24LL:
      result = "Unsupported unwind code";
      break;
    default:
      result = "Unknown error";
      break;
  }
  return result;
}

