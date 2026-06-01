void *sub_B2D0()
{
  void *result; // rax

  if ( !byte_3C3A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_388C0);
    result = sub_B260();
    byte_3C3A0 = 1;
  }
  return result;
}

