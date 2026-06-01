_UNKNOWN **__fastcall sub_317B0(_QWORD *a1)
{
  _UNKNOWN **result; // rax

  result = &off_7D6B8;
  *a1 = &off_7D6B8;
  if ( a1[11] )
  {
    a1[12] = 0;
    result = (_UNKNOWN **)qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    result = (_UNKNOWN **)qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    return (_UNKNOWN **)qfree();
  }
  return result;
}

