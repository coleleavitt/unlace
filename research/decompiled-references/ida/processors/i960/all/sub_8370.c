int *sub_8370()
{
  int *result; // rax

  result = (int *)find_ioport();
  if ( result )
  {
    if ( *((_QWORD *)result + 2) )
      return *((int **)result + 1);
    else
      return &dword_AFE4;
  }
  return result;
}

