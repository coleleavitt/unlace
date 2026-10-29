void *sub_AA80()
{
  void *result; // rax

  if ( !byte_48080 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_44C60);
    result = sub_AA10();
    byte_48080 = 1;
  }
  return result;
}

