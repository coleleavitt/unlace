__int64 *sub_CC30()
{
  __int64 *result; // rax

  if ( !byte_2A4C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1EEC0);
    result = sub_CBC0();
    byte_2A4C0 = 1;
  }
  return result;
}

