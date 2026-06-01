int *sub_C440()
{
  int *result; // rax

  result = (int *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((int **)result + 1);
    else
      return &dword_F62C;
  }
  return result;
}

