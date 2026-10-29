__int64 __fastcall sub_61870(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4C8CF0;
  result = a1[7];
  if ( result )
  {
    a1[8] = 0;
    return qfree();
  }
  return result;
}

