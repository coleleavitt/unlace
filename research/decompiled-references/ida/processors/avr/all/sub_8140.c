_QWORD *sub_8140()
{
  _QWORD *result; // rax

  result = (_QWORD *)find_ioport_bit();
  if ( result )
  {
    if ( result[1] )
      return (_QWORD *)*result;
    else
      return &unk_B62C;
  }
  return result;
}

