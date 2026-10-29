char *sub_1310()
{
  char *result; // rax

  if ( !byte_5158 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D58);
    result = sub_12A0();
    byte_5158 = 1;
  }
  return result;
}

