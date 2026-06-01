char *sub_1A0A0()
{
  char *result; // rax

  if ( !byte_4FE10 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4BA20);
    result = sub_1A030();
    byte_4FE10 = 1;
  }
  return result;
}
