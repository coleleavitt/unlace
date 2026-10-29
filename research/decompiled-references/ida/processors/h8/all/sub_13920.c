const char *sub_13920()
{
  const char *result; // rax

  result = (const char *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((const char **)result + 1);
    else
      return s;
  }
  return result;
}

