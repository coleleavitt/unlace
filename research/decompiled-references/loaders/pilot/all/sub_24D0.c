char *sub_24D0()
{
  char *result; // rax

  if ( !byte_81D8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7D30);
    result = sub_2460();
    byte_81D8 = 1;
  }
  return result;
}
