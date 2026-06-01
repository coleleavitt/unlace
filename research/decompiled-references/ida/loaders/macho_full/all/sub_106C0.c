char *sub_106C0()
{
  char *result; // rax

  if ( !byte_66C08 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_62A60);
    result = sub_10650();
    byte_66C08 = 1;
  }
  return result;
}

