void *sub_4F90()
{
  void *result; // rax

  if ( !byte_284C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_27480);
    result = sub_4F20();
    byte_284C0 = 1;
  }
  return result;
}
