__int64 __fastcall sub_6FE0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_354F0;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

