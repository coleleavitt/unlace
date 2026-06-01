char *sub_1350()
{
  char *result; // rax

  if ( !byte_51B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D50);
    result = sub_12E0();
    byte_51B0 = 1;
  }
  return result;
}
