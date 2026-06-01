__int64 *sub_4710()
{
  __int64 *result; // rax

  if ( !byte_10380 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_EDC0);
    result = sub_46A0();
    byte_10380 = 1;
  }
  return result;
}

