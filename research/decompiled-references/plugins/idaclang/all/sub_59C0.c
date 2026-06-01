void *sub_59C0()
{
  void *result; // rax

  if ( !byte_29360 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_289E0);
    result = sub_5950();
    byte_29360 = 1;
  }
  return result;
}
