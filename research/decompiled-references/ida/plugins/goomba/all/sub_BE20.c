char *sub_BE20()
{
  char *result; // rax

  if ( !byte_4E5C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D680);
    result = sub_BDB0();
    byte_4E5C0 = 1;
  }
  return result;
}

