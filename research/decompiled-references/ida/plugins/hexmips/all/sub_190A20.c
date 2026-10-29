__int64 __fastcall sub_190A20(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4BE9E0;
  result = a1[8];
  if ( result )
  {
    a1[9] = 0;
    return qfree();
  }
  return result;
}

