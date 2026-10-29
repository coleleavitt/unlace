__int64 __fastcall sub_2B42D0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4C1AB0;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

