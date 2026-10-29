char *sub_1160()
{
  char *result; // rax

  if ( !byte_40A8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3CD8);
    result = sub_10F0();
    byte_40A8 = 1;
  }
  return result;
}

