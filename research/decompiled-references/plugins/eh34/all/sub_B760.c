char *sub_B760()
{
  char *result; // rax

  if ( !byte_8D460 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_8B6C0);
    result = sub_B6F0();
    byte_8D460 = 1;
  }
  return result;
}
