char *sub_6D70()
{
  char *result; // rax

  result = (char *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((char **)result + 1);
    else
      return byte_8BD0;
  }
  return result;
}

