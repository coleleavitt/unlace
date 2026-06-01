__int64 __fastcall sub_6FA0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_35518;
  result = a1[15];
  if ( result )
  {
    a1[16] = 0;
    return qfree();
  }
  return result;
}

