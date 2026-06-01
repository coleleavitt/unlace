char *sub_1260()
{
  char *result; // rax

  if ( !byte_5110 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D50);
    result = sub_11F0();
    byte_5110 = 1;
  }
  return result;
}
