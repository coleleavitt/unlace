__int64 __fastcall sub_50430(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[10] )
  {
    a1[11] = 0;
    result = qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    result = qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

