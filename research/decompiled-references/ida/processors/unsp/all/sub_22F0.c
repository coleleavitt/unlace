char *sub_22F0()
{
  char *result; // rax

  if ( !byte_71B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_65C0);
    result = sub_2280();
    byte_71B0 = 1;
  }
  return result;
}

