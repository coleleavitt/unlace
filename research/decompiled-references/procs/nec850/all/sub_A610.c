char *sub_A610()
{
  char *result; // rax

  if ( !byte_2E620 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2A920);
    result = sub_A5A0();
    byte_2E620 = 1;
  }
  return result;
}
