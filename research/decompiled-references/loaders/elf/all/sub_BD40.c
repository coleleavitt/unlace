void *sub_BD40()
{
  void *result; // rax

  if ( !byte_895E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_86F20);
    result = sub_BCD0();
    byte_895E0 = 1;
  }
  return result;
}
