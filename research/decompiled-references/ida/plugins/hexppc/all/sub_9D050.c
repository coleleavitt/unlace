__int64 __fastcall sub_9D050(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4C9060;
  result = a1[5];
  if ( result )
  {
    a1[6] = 0;
    return qfree();
  }
  return result;
}

