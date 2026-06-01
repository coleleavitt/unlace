void *sub_EFA0()
{
  void *result; // rax

  if ( !byte_7FA80 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7D260);
    result = sub_EF30();
    byte_7FA80 = 1;
  }
  return result;
}

