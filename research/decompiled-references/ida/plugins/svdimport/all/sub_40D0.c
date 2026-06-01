void *sub_40D0()
{
  void *result; // rax

  if ( !byte_1C300 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1B948);
    result = sub_4060();
    byte_1C300 = 1;
  }
  return result;
}

