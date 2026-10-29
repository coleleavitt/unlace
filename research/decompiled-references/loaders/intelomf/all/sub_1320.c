void *sub_1320()
{
  void *result; // rax

  if ( !byte_5180 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D50);
    result = sub_12B0();
    byte_5180 = 1;
  }
  return result;
}
