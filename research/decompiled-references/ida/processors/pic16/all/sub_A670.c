char *sub_A670()
{
  char *result; // rax

  result = (char *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((char **)result + 1);
    else
      return &byte_D9A4;
  }
  return result;
}

