__int64 __fastcall sub_2B3790(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B4D10;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

