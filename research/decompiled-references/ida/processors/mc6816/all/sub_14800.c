void *sub_14800()
{
  void *result; // rax

  if ( !byte_493C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1CA20);
    result = sub_14790();
    byte_493C0 = 1;
  }
  return result;
}

