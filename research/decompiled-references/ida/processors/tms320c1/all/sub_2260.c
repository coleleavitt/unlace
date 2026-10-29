char *sub_2260()
{
  char *result; // rax

  if ( !byte_6178 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_5720);
    result = sub_21F0();
    byte_6178 = 1;
  }
  return result;
}

