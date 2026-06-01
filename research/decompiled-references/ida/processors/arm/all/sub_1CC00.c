char *sub_1CC00()
{
  char *result; // rax

  if ( !byte_AA4A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9FF60);
    result = sub_1CB90();
    byte_AA4A0 = 1;
  }
  return result;
}
