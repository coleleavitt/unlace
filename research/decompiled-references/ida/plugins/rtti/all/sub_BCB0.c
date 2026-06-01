__int64 __fastcall sub_BCB0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[10] )
  {
    a1[11] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}
