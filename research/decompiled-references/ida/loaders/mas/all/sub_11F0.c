void *sub_11F0()
{
  void *result; // rax

  if ( !byte_4100 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3BA0);
    result = sub_1180();
    byte_4100 = 1;
  }
  return result;
}

