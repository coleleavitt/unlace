void *sub_8FB0()
{
  void *result; // rax

  if ( !byte_2B9C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_231A0);
    result = sub_8F40();
    byte_2B9C0 = 1;
  }
  return result;
}

