char *sub_2580()
{
  char *result; // rax

  if ( !byte_B280 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_AD50);
    result = sub_2510();
    byte_B280 = 1;
  }
  return result;
}
