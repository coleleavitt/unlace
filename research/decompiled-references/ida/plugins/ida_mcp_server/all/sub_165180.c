void *sub_165180()
{
  void *result; // rax

  if ( !byte_448F40 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = sub_165110();
    byte_448F40 = 1;
  }
  return result;
}

