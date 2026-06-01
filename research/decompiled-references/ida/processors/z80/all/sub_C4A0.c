char *sub_C4A0()
{
  char *result; // rax

  result = (char *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((char **)result + 1);
    else
      return byte_11204;
  }
  return result;
}

