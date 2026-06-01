__int64 *sub_5A60()
{
  __int64 *result; // rax

  if ( !byte_12440 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_104A0);
    result = sub_59F0();
    byte_12440 = 1;
  }
  return result;
}

