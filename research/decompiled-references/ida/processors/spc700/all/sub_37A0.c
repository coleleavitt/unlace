__int64 *sub_37A0()
{
  __int64 *result; // rax

  if ( !byte_C380 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_B1A0);
    result = sub_3730();
    byte_C380 = 1;
  }
  return result;
}

