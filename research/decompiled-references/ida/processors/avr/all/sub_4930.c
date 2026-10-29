void *sub_4930()
{
  void *result; // rax

  if ( !byte_F4E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_DF00);
    result = sub_48C0();
    byte_F4E0 = 1;
  }
  return result;
}

