char *sub_5630()
{
  char *result; // rax

  if ( !byte_122F0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_10220);
    result = sub_55C0();
    byte_122F0 = 1;
  }
  return result;
}

