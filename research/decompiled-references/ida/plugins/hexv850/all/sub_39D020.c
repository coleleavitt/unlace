__int64 __fastcall sub_39D020(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4BA650;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

