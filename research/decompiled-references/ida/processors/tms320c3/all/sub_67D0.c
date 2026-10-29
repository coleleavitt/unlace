__int64 *sub_67D0()
{
  __int64 *result; // rax

  if ( !byte_1F3E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_FE40);
    result = sub_6760();
    byte_1F3E0 = 1;
  }
  return result;
}

