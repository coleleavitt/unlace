__int64 *sub_6A10()
{
  __int64 *result; // rax

  if ( !byte_17420 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_14C80);
    result = sub_69A0();
    byte_17420 = 1;
  }
  return result;
}

