char *sub_18430()
{
  char *result; // rax

  result = (char *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((char **)result + 1);
    else
      return byte_1A764;
  }
  return result;
}

