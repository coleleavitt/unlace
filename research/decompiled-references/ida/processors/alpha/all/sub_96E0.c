__int64 *sub_96E0()
{
  __int64 *result; // rax

  result = (__int64 *)find_ioport();
  if ( result )
  {
    if ( result[2] )
      return (__int64 *)result[1];
    else
      return &qword_D948;
  }
  return result;
}

