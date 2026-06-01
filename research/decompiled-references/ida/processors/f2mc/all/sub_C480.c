int *sub_C480()
{
  int *result; // rax

  result = (int *)find_ioport_bit();
  if ( result )
  {
    if ( *((_QWORD *)result + 1) )
      return *(int **)result;
    else
      return &dword_F62C;
  }
  return result;
}

