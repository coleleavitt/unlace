__int64 *sub_4770()
{
  __int64 *result; // rax

  if ( !byte_103A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_EF80);
    result = sub_4700();
    byte_103A0 = 1;
  }
  return result;
}

