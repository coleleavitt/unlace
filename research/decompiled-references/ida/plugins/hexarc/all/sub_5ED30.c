__int64 __fastcall sub_5ED30(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4A83D0;
  result = a1[7];
  if ( result )
  {
    a1[8] = 0;
    return qfree();
  }
  return result;
}

