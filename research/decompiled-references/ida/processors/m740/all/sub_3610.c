__int64 *sub_3610()
{
  __int64 *result; // rax

  if ( !byte_A320 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_9320);
    result = sub_35A0();
    byte_A320 = 1;
  }
  return result;
}

