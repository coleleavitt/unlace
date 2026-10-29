void *sub_A520()
{
  void *result; // rax

  if ( !byte_3ABA0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_379E0);
    result = sub_A4B0();
    byte_3ABA0 = 1;
  }
  return result;
}

