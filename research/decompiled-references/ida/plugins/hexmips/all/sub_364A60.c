__int64 __fastcall sub_364A60(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4C6900;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

