char *sub_25D0()
{
  char *result; // rax

  if ( !byte_A250 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9C10);
    result = sub_2560();
    byte_A250 = 1;
  }
  return result;
}
