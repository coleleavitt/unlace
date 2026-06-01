const char *__fastcall sub_1F390(__int64 a1)
{
  const char *result; // rax

  result = "EFI_SUCCESS";
  if ( a1 )
  {
    switch ( a1 )
    {
      case 0x8000000000000000LL:
        result = "EFI_ERROR";
        break;
      case 0x8000000000000001LL:
        result = "EFI_LOAD_ERROR";
        break;
      case 0x8000000000000002LL:
        result = "EFI_INVALID_PARAMETER";
        break;
      case 0x8000000000000003LL:
        result = "EFI_UNSUPPORTED";
        break;
      case 0x8000000000000004LL:
        result = "EFI_BAD_BUFFER_SIZE";
        break;
      case 0x8000000000000005LL:
        result = "EFI_BUFFER_TOO_SMALL";
        break;
      case 0x8000000000000006LL:
        result = "EFI_NOT_READY";
        break;
      case 0x8000000000000007LL:
        result = "EFI_DEVICE_ERROR";
        break;
      case 0x8000000000000008LL:
        result = "EFI_WRITE_PROTECTED";
        break;
      case 0x8000000000000009LL:
        result = "EFI_OUT_OF_RESOURCES";
        break;
      case 0x800000000000000ALL:
        result = "EFI_VOLUME_CORRUPTED";
        break;
      case 0x800000000000000BLL:
        result = "EFI_VOLUME_FULL";
        break;
      case 0x800000000000000CLL:
        result = "EFI_NO_MEDIA";
        break;
      case 0x800000000000000DLL:
        result = "EFI_MEDIA_CHANGED";
        break;
      case 0x800000000000000ELL:
        result = "EFI_NOT_FOUND";
        break;
      case 0x800000000000000FLL:
        result = "EFI_ACCESS_DENIED";
        break;
      case 0x8000000000000010LL:
        result = "EFI_NO_RESPONSE";
        break;
      case 0x8000000000000011LL:
        result = "EFI_NO_MAPPING";
        break;
      case 0x8000000000000012LL:
        result = "EFI_TIMEOUT";
        break;
      case 0x8000000000000013LL:
        result = "EFI_NOT_STARTED";
        break;
      case 0x8000000000000014LL:
        result = "EFI_ALREADY_STARTED";
        break;
      case 0x8000000000000015LL:
        result = "EFI_ABORTED";
        break;
      case 0x8000000000000016LL:
        result = "EFI_ICMP_ERROR";
        break;
      case 0x8000000000000017LL:
        result = "EFI_TFTP_ERROR";
        break;
      case 0x8000000000000018LL:
        result = "EFI_PROTOCOL_ERROR";
        break;
      case 0x8000000000000019LL:
        result = "EFI_INCOMPATIBLE_VERSION";
        break;
      case 0x800000000000001ALL:
        result = "EFI_SECURITY_VIOLATION";
        break;
      case 0x800000000000001BLL:
        result = "EFI_CRC_ERROR";
        break;
      case 0x800000000000001CLL:
        result = "EFI_END_OF_MEDIA";
        break;
      case 0x800000000000001FLL:
        result = "EFI_END_OF_FILE";
        break;
      case 0x8000000000000020LL:
        result = "EFI_INVALID_LANGUAGE";
        break;
      case 0x8000000000000021LL:
        result = "EFI_COMPROMISED_DATA";
        break;
      default:
        result = "UNKNOWN";
        break;
    }
  }
  return result;
}

