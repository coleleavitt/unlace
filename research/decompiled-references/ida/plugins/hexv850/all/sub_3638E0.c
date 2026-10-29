__int64 __fastcall sub_3638E0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B9B60;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

