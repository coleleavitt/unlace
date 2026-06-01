char *sub_1360()
{
  char *result; // rax

  if ( !byte_5178 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D58);
    result = sub_12F0();
    byte_5178 = 1;
  }
  return result;
}

