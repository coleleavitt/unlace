__int64 *sub_B7C0()
{
  __int64 *result; // rax

  if ( !byte_2AA60 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1AB40);
    result = sub_B750();
    byte_2AA60 = 1;
  }
  return result;
}

