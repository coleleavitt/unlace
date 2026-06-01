char *sub_11E0()
{
  char *result; // rax

  if ( !byte_40E8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D28);
    result = sub_1170();
    byte_40E8 = 1;
  }
  return result;
}

