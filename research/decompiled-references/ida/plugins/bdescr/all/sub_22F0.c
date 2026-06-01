char *sub_22F0()
{
  char *result; // rax

  if ( !byte_7128 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_6AC0);
    result = sub_2280();
    byte_7128 = 1;
  }
  return result;
}

