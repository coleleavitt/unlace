__int64 __fastcall sub_1635D0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B07F8;
  result = a1[7];
  if ( result )
  {
    a1[8] = 0;
    return qfree();
  }
  return result;
}

