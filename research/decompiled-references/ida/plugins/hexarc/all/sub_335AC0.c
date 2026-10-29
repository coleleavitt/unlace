__int64 __fastcall sub_335AC0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[15] )
  {
    a1[16] = 0;
    result = qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    return qfree();
  }
  return result;
}

