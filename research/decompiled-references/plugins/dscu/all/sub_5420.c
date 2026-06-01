char *sub_5420()
{
  char *result; // rax

  if ( !byte_1F2A8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1E260);
    result = sub_53B0();
    byte_1F2A8 = 1;
  }
  return result;
}
