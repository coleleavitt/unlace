__int64 __fastcall sub_2B40F0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4C1998;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

