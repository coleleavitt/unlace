__int64 *sub_17300()
{
  __int64 *result; // rax

  result = (__int64 *)find_ioport();
  if ( result )
  {
    if ( result[2] )
      return (__int64 *)result[1];
    else
      return qword_1AF48;
  }
  return result;
}

