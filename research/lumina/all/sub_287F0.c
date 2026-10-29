void *sub_287F0()
{
  void *result; // rax

  if ( !byte_241940 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&lpdso_handle);
    result = sub_28780();
    byte_241940 = 1;
  }
  return result;
}
