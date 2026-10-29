const char *__fastcall sub_3CE10(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 1LL:
      result = "NT_GNU_ABI_TAG";
      break;
    case 2LL:
      result = "NT_GNU_HWCAP";
      break;
    case 3LL:
      result = "NT_GNU_BUILD_ID";
      break;
    case 4LL:
      result = "NT_GNU_GOLD_VERSION";
      break;
    case 5LL:
      result = "NT_GNU_PROPERTY_TYPE_0";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
