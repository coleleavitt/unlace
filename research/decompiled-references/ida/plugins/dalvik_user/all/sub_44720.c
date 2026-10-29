__int64 __fastcall sub_44720(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[9] = 0;
    result = qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

