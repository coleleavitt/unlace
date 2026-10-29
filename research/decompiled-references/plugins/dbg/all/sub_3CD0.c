char *sub_3CD0()
{
  char *result; // rax

  if ( !byte_13370 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_12B40);
    result = sub_3C60();
    byte_13370 = 1;
  }
  return result;
}
