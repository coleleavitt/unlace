void *sub_6830()
{
  void *result; // rax

  if ( !byte_24500 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&lpdso_handle);
    result = sub_67C0();
    byte_24500 = 1;
  }
  return result;
}

