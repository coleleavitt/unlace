__int64 __fastcall sub_39E1A0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4C73F0;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

