void *__fastcall sub_3E93A0(_QWORD *a1)
{
  void *result; // rax

  result = &unk_4D8E10;
  *a1 = &unk_4D8E10;
  if ( a1[32] )
  {
    a1[33] = 0;
    result = (void *)qfree();
  }
  if ( a1[29] )
  {
    a1[30] = 0;
    result = (void *)qfree();
  }
  if ( a1[22] )
  {
    a1[23] = 0;
    result = (void *)qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    result = (void *)qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    result = (void *)qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    result = (void *)qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    result = (void *)qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (void *)qfree();
  }
  return result;
}

