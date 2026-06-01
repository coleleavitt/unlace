_QWORD *sub_A7A0()
{
  _QWORD *result; // rax

  result = (_QWORD *)find_ioport();
  if ( result )
  {
    if ( result[2] )
      return (_QWORD *)result[1];
    else
      return &unk_D8B0;
  }
  return result;
}

