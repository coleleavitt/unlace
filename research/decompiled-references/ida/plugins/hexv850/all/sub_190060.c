__int64 __fastcall sub_190060(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B1C40;
  result = a1[8];
  if ( result )
  {
    a1[9] = 0;
    return qfree();
  }
  return result;
}

