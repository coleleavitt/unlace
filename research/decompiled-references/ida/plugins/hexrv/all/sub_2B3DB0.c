__int64 __fastcall sub_2B3DB0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B3CE8;
  result = a1[4];
  if ( result )
  {
    a1[5] = 0;
    return qfree();
  }
  return result;
}

