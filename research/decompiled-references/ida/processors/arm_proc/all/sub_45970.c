__int64 __fastcall sub_45970(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[9] )
  {
    a1[10] = 0;
    result = qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

