__int64 __fastcall sub_7F920(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
  {
    a1[4] = 0;
    result = qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

