void *sub_2950()
{
  void *result; // rax

  if ( !byte_A260 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9A40);
    result = sub_28E0();
    byte_A260 = 1;
  }
  return result;
}

