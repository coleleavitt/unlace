char *sub_1ACC0()
{
  char *result; // rax

  if ( !byte_75800 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_69CC0);
    result = sub_1AC50();
    byte_75800 = 1;
  }
  return result;
}
