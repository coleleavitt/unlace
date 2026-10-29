__int64 *sub_6980()
{
  __int64 *result; // rax

  if ( !byte_1E440 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1C580);
    result = sub_6910();
    byte_1E440 = 1;
  }
  return result;
}

