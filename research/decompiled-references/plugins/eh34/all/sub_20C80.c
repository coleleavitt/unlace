const char *__fastcall sub_20C80(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "edge_nonflow_fallthrough";
      break;
    case 1LL:
      result = "edge_call_fallthrough";
      break;
    case 2LL:
      result = "edge_goto_dest";
      break;
    case 3LL:
      result = "edge_jtbl_arm";
      break;
    case 4LL:
      result = "edge_jcc_fallthrough";
      break;
    case 5LL:
      result = "edge_jcc_taken";
      break;
    case 6LL:
      result = "edge_surgical_fake";
      break;
    default:
      result = "???";
      break;
  }
  return result;
}
