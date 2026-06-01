const char *__fastcall sub_3D190(unsigned __int64 a1)
{
  const char *result; // rax

  if ( a1 > 0x12 )
  {
    result = "NT_FILE";
    if ( a1 != 1179208773 )
    {
      result = "NT_SIGINFO";
      if ( a1 != 1397311305 )
        return nullptr;
    }
  }
  else if ( a1 )
  {
    switch ( a1 )
    {
      case 1uLL:
        result = "NT_PRSTATUS";
        break;
      case 2uLL:
        result = "NT_FPREGSET";
        break;
      case 3uLL:
        result = "NT_PRPSINFO";
        break;
      case 4uLL:
        result = "NT_TASKSTRUCT";
        break;
      case 6uLL:
        result = "NT_AUXV";
        break;
      case 0xAuLL:
        result = "NT_PSTATUS";
        break;
      case 0xCuLL:
        result = "NT_FPREGS";
        break;
      case 0xDuLL:
        result = "NT_PSINFO";
        break;
      case 0x10uLL:
        result = "NT_LWPSTATUS";
        break;
      case 0x11uLL:
        result = "NT_LWPSINFO";
        break;
      case 0x12uLL:
        result = "NT_WIN32PSTATUS";
        break;
      default:
        return nullptr;
    }
  }
  else
  {
    return nullptr;
  }
  return result;
}
