char *__fastcall sub_117C0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 1:
      result = "OBJECT";
      break;
    case 2:
      result = "EXECUTE";
      break;
    case 3:
      result = "FVMLIB";
      break;
    case 4:
      result = "CORE";
      break;
    case 5:
      result = "PRELOAD";
      break;
    case 6:
      result = "DYLIB";
      break;
    case 7:
      result = "DYLINKER";
      break;
    case 8:
      result = "BUNDLE";
      break;
    case 9:
      result = "DYLIB_STUB";
      break;
    case 10:
      result = "DSYM";
      break;
    case 11:
      result = "KEXT_BUNDLE";
      break;
    case 12:
      result = "MH_FILESET";
      break;
    default:
      qsnprintf();
      result = (char *)&unk_66C40;
      break;
  }
  return result;
}

