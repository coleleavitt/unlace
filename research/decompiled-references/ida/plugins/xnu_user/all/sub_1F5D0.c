const char *__fastcall sub_1F5D0(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "EfiReservedMemoryType";
      break;
    case 1LL:
      result = "EfiLoaderCode";
      break;
    case 2LL:
      result = "EfiLoaderData";
      break;
    case 3LL:
      result = "EfiBootServicesCode";
      break;
    case 4LL:
      result = "EfiBootServicesData";
      break;
    case 5LL:
      result = "EfiRuntimeServicesCode";
      break;
    case 6LL:
      result = "EfiRuntimeServicesData";
      break;
    case 7LL:
      result = "EfiConventionalMemory";
      break;
    case 8LL:
      result = "EfiUnusableMemory";
      break;
    case 9LL:
      result = "EfiACPIReclaimMemory";
      break;
    case 10LL:
      result = "EfiACPIMemoryNVS";
      break;
    case 11LL:
      result = "EfiMemoryMappedIO";
      break;
    case 12LL:
      result = "EfiMemoryMappedIOPortSpace";
      break;
    case 13LL:
      result = "EfiPalCode";
      break;
    case 14LL:
      result = "EfiMaxMemoryType";
      break;
    default:
      result = "EfiUnknown";
      break;
  }
  return result;
}

