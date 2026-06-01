char *sub_2570()
{
  char *result; // rax

  if ( !byte_B280 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_AC80);
    result = sub_2500();
    byte_B280 = 1;
  }
  return result;
}
