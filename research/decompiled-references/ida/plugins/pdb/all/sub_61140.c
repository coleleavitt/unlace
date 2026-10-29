__int64 __fastcall sub_61140(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 0;
  *a1 = off_AEE30;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree(result);
  }
  return result;
}

