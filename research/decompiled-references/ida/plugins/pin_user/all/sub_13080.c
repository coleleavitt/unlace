__int64 __fastcall sub_13080(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[5] )
  {
    a1[6] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

