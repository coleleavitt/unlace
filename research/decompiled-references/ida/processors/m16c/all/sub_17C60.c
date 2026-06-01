int *sub_17C60()
{
  int *result; // rax

  result = (int *)find_ioport_bit();
  if ( result )
  {
    if ( *((_QWORD *)result + 1) )
      return *(int **)result;
    else
      return &dword_1C204;
  }
  return result;
}

