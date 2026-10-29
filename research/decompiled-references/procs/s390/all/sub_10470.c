char *sub_10470()
{
  char *result; // rax

  if ( !byte_36C70 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2D400);
    result = sub_10400();
    byte_36C70 = 1;
  }
  return result;
}
