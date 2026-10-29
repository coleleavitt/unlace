void *sub_2430()
{
  void *result; // rax

  if ( !byte_8200 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7CA0);
    result = sub_23C0();
    byte_8200 = 1;
  }
  return result;
}

