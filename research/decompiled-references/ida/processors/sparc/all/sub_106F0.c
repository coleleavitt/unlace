_QWORD *__fastcall sub_106F0(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)find_ioport(a1 + 128);
  if ( result )
  {
    if ( result[2] )
      return (_QWORD *)result[1];
    else
      return &unk_13D10;
  }
  return result;
}

