void *sub_67B0()
{
  void *result; // rax

  if ( !byte_163A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_13080);
    result = sub_6740();
    byte_163A0 = 1;
  }
  return result;
}

