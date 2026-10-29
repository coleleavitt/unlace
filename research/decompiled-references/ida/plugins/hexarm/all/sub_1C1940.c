__int64 __fastcall sub_1C1940(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4D8F00;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

