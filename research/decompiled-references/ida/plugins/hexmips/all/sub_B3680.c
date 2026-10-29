__int64 __fastcall sub_B3680(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4BC950;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

